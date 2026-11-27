import struct,array,sys
def find_ptr(d,target,lo=0x800000,hi=0x900000):
    a=array.array('Q'); a.frombytes(d[lo:hi]); out=[]
    for i in range(0,len(a),2):
        t=a[i]
        if ((t>>32)&0x7fffffff)==target: out.append((lo+i*8,hex(t)))
    return out
def walk(d,start,maxtags=200000):
    tadr=start; asr=[]; seen=[]; n=0
    while n<maxtags:
        n+=1
        t=struct.unpack_from('<Q',d,tadr&0x1fffff0 if tadr<0x2000000 else 0)[0]
        qwc=t&0xffff; idd=(t>>28)&7; addr=(t>>32)&0x7fffffff
        seen.append((tadr,idd,qwc,addr))
        if idd==0: break
        elif idd==1: tadr=tadr+16+qwc*16
        elif idd==2: tadr=addr
        elif idd in (3,4): tadr+=16
        elif idd==5: asr.append(tadr+16+qwc*16); tadr=addr
        elif idd==6:
            if asr: tadr=asr.pop()
            else: break
        elif idd==7: break
        if addr&0x80000000: pass
    return seen
