import struct, pickle, collections, sys
def parse_stream(packets, cb):
    st={'prim':0,'test':[0,0],'frame':[0,0],'zbuf':[0,0],'tex0':[0,0],'xyoff':[0,0]}
    for data in packets:
        p=0
        while p+16<=len(data):
            lo,hi=struct.unpack_from('<QQ',data,p); p+=16
            nloop=lo&0x7fff; eop=(lo>>15)&1; pre=(lo>>46)&1; prim=(lo>>47)&0x7ff; flg=(lo>>58)&3; nreg=(lo>>60)&0xf or 16
            if pre: cb('prim',prim,st); st['prim']=prim
            regs=[(hi>>(4*i))&0xf for i in range(nreg)]
            if flg==0:
                for _ in range(nloop):
                    for r in regs:
                        a,b=struct.unpack_from('<QQ',data,p); p+=16
                        if r==0xe: cb('ad',(b&0xff,a),st)
                        elif r in (4,5,0xc,0xd):
                            if r in (4,0xc): x=a&0xffff; y=(a>>32)&0xffff; z=(b>>4)&0xffffff
                            else: x=a&0xffff; y=(a>>32)&0xffff; z=b&0xffffffff
                            kick=not ((b>>47)&1) if r in(4,5) else False
                            cb('v',(x,y,z,kick),st)
            elif flg==1:
                for _ in range(nloop):
                    for r in regs:
                        a=struct.unpack_from('<Q',data,p)[0]; p+=8
                        if r==0xe: pass
                        cb('reg',(r,a),st)
                if (nloop*nreg)&1: p+=8
            else:
                p+=nloop*16
