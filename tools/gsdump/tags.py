import pickle,struct,collections,sys
def tags(packets):
    out=collections.Counter(); tb=None
    st={'tex0':0}
    for data in packets:
        p=0
        while p+16<=len(data):
            lo,hi=struct.unpack_from('<QQ',data,p); p+=16
            nloop=lo&0x7fff; flg=(lo>>58)&3; nreg=(lo>>60)&0xf or 16
            regs=tuple((hi>>(4*i))&0xf for i in range(nreg))
            if flg==0:
                for _ in range(nloop):
                    for r in regs:
                        a,b=struct.unpack_from('<QQ',data,p); p+=16
                        if r==0xe and (b&0xff) in (6,7): st['tex0']=a&0x3fff
                if regs!=(0xe,)*nreg: out[(len(data)//16>0, regs, hex(st['tex0']))]+=nloop
            elif flg==1: p+=nloop*nreg*8+((nloop*nreg)&1)*8
            else: p+=nloop*16
    return out
