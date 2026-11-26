import pickle,collections
from gif import parse_stream
state,regs,pk=pickle.load(open('pk.pkl','rb'))
# split by vsync
frames=[[]]
for x in pk:
    if x[0]=='V': frames.append([])
    elif x[0]=='T': frames[-1].append(x[2])
print([len(f) for f in frames])
fr=max(frames,key=len)
draws=[]
cur=None
def cb(kind,val,st):
    global cur
    if kind=='ad':
        reg,a=val
        if reg==0: st['prim']=a&0x7ff
        elif reg in (0x47,0x48): st['test'][reg-0x47]=a
        elif reg in (0x4c,0x4d): st['frame'][reg-0x4c]=a
        elif reg in (0x4e,0x4f): st['zbuf'][reg-0x4e]=a
        elif reg in (6,7): st['tex0'][reg-6]=a
        elif reg in (0x18,0x19): st['xyoff'][reg-0x18]=a
        cur=None
    elif kind=='prim': cur=None
    elif kind=='v':
        x,y,z,kick=val
        ctx=(st['prim']>>9)&1
        key=(st['prim'],st['test'][ctx],st['frame'][ctx]&0x1ff,st['tex0'][ctx]&0x3fff)
        if cur is None or cur['key']!=key:
            cur={'key':key,'n':0,'xs':[],'ys':[],'zs':[],'off':st['xyoff'][ctx]}
            draws.append(cur)
        cur['n']+=1; cur['xs'].append(x); cur['ys'].append(y); cur['zs'].append(z)
parse_stream(fr,cb)
print(len(draws),'batches, vertices',sum(d['n'] for d in draws))
agg=collections.Counter()
for d in draws:
    prim,test,fbp,tbp=d['key']; agg[(prim&7,hex(test),fbp)]+=d['n']
for k,v in agg.most_common(25): print(k,v)
pickle.dump(draws,open('draws.pkl','wb'))
