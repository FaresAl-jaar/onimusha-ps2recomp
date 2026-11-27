import struct,pickle,sys
def batches(packets, want):
    out=[]; tex=0; cur=None
    for data in packets:
        p=0
        while p+16<=len(data):
            lo,hi=struct.unpack_from('<QQ',data,p); p+=16
            nloop=lo&0x7fff; flg=(lo>>58)&3; nreg=(lo>>60)&0xf or 16
            regs=[(hi>>(4*i))&0xf for i in range(nreg)]
            if flg==0:
                for _ in range(nloop):
                    for r in regs:
                        a,b=struct.unpack_from('<QQ',data,p); p+=16
                        if r==0xe and (b&0xff)==6:
                            tex=a&0x3fff; cur=None
                        elif r==1: rgba=(a&0xff,(a>>32)&0xff,b&0xff,(b>>32)&0xff)
                        elif r==2: st=struct.unpack('<ff',struct.pack('<Q',a))
                        elif r in (4,5) and tex==want:
                            if cur is None: cur=[]; out.append(cur)
                            cur.append(((a&0xffff)/16,((a>>32)&0xffff)/16,(b>>4)&0xffffff if r==4 else b&0xffffffff,rgba,st))
            elif flg==1: p+=nloop*nreg*8+((nloop*nreg)&1)*8
            else: p+=nloop*16
    return out
