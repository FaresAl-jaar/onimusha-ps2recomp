import struct,sys
def load(n):
    d=open('/tmp/vu1dump_%d.bin'%n,'rb').read()
    data=d[:16384]; vi=struct.unpack_from('<16i',d,16384); top,itop,pc=struct.unpack_from('<3I',d,16384+64)
    vf=[struct.unpack_from('<4f',d,16384+76+16*i) for i in range(32)]
    return data,vi,top,itop,pc,vf
def q(data,a): return struct.unpack_from('<4f',data,(a&0x3ff)*16)
def qi(data,a): return struct.unpack_from('<4I',data,(a&0x3ff)*16)
for n in range(int(sys.argv[1]),int(sys.argv[2])):
    data,vi,top,itop,pc,vf=load(n)
    cnt=qi(data,top)[0]&0x7fff
    base=top+1
    print('dump',n,'pc',hex(pc),'top',hex(top),'nverts',cnt,'gif tag',hex(qi(data,top)[0]))
    for v in range(min(cnt,12)):
        a=base+4*v
        q0=qi(data,a); q1=qi(data,a+1); q2=qi(data,a+2); q3=qi(data,a+3)
        vi11=q0[3]&0xffff; vi12=q1[3]&0xffff
        w=[struct.unpack('<f',struct.pack('<I',x))[0] for x in q3]
        print('  v%d pos'%v,['%.3f'%x for x in q(data,a)[:3]],'A',hex(vi11),'B',hex(vi12),'q1',[hex(x) for x in q1],'q3',[hex(x) for x in q3])
