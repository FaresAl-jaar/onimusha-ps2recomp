import struct, collections, sys
d=open('d.gs','rb').read()
assert struct.unpack_from('<I',d,0)[0]==0xffffffff
hs=struct.unpack_from('<I',d,4)[0]
h=struct.unpack_from('<9I',d,8)
print('hdr',h)
state_size=h[1]
p=8+hs
state=d[p:p+state_size]; p+=state_size
regs=d[p:p+8192]; p+=8192
pk=[]
while p<len(d):
    t=d[p]; p+=1
    if t==0:
        path=d[p]; sz=struct.unpack_from('<I',d,p+1)[0]; p+=5
        pk.append(('T',path,d[p:p+sz])); p+=sz
    elif t==1: pk.append(('V',d[p])); p+=1
    elif t==2: p+=4; pk.append(('R',))
    elif t==3: pk.append(('G',d[p:p+8192])); p+=8192
    else: print('bad',t,p); break
c=collections.Counter((x[0],x[1] if x[0]=='T' else 0) for x in pk)
print(c)
print(sum(len(x[2]) for x in pk if x[0]=='T'))
import pickle; pickle.dump((state,regs,pk),open('pk.pkl','wb'))
