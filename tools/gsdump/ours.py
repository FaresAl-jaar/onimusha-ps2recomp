import struct,sys,collections,pickle
from gif import parse_stream
f=sys.argv[1]; d=open(f,'rb').read(); p=0; pk=[]
while p+4<=len(d):
    n=struct.unpack_from('<I',d,p)[0]; pk.append(d[p+4:p+4+n]); p+=4+n
draws=[]; cur=[None]
def cb(kind,val,st):
    if kind=='ad':
        reg,a=val
        if reg==0: st['prim']=a&0x7ff
        elif reg in (0x47,0x48): st['test'][reg-0x47]=a
        elif reg in (0x4c,0x4d): st['frame'][reg-0x4c]=a
        elif reg in (6,7): st['tex0'][reg-6]=a
        cur[0]=None
    elif kind=='prim': cur[0]=None
    elif kind=='v':
        x,y,z,kick=val; ctx=(st['prim']>>9)&1
        key=(st['prim'],st['test'][ctx],st['frame'][ctx]&0x1ff,st['tex0'][ctx]&0x3fff)
        if cur[0] is None or cur[0]['key']!=key:
            cur[0]={'key':key,'n':0,'xs':[],'ys':[],'zs':[]}; draws.append(cur[0])
        c=cur[0]; c['n']+=1; c['xs'].append(x); c['ys'].append(y); c['zs'].append(z)
parse_stream(pk,cb)
agg=collections.Counter()
for dd in draws: agg[(dd['key'][0]&7,hex(dd['key'][1]))]+=dd['n']
print(f,len(pk),'packets',len(draws),'batches',sum(x['n'] for x in draws),'verts',agg.most_common(6))
pickle.dump(draws,open(f+'.pkl','wb'))
