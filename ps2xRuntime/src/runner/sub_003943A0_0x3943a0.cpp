#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003943A0
// Address: 0x3943a0 - 0x394f18
void sub_003943A0_0x3943a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003943A0_0x3943a0");
#endif

    switch (ctx->pc) {
        case 0x394588u: goto label_394588;
        case 0x3945dcu: goto label_3945dc;
        case 0x394770u: goto label_394770;
        case 0x394840u: goto label_394840;
        case 0x3948e0u: goto label_3948e0;
        case 0x394978u: goto label_394978;
        case 0x394990u: goto label_394990;
        case 0x394b60u: goto label_394b60;
        default: break;
    }

    ctx->pc = 0x3943a0u;

    // 0x3943a0: 0x27bdfe60  addiu       $sp, $sp, -0x1A0
    ctx->pc = 0x3943a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966880));
    // 0x3943a4: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x3943a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x3943a8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x3943a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x3943ac: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3943acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3943b0: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x3943b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x3943b4: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x3943b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x3943b8: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x3943b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x3943bc: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x3943bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x3943c0: 0x460c0842  mul.s       $f1, $f1, $f12
    ctx->pc = 0x3943c0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
    // 0x3943c4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3943c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x3943c8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3943c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x3943cc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3943ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3943d0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3943d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3943d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3943d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3943d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3943d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3943dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3943dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3943e0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3943e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3943e4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3943e4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3943e8: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3943E8u;
    {
        const bool branch_taken_0x3943e8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3943ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3943E8u;
        // 0x3943ec: 0xafa4014c  sw          $a0, 0x14C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3943e8) {
            ctx->pc = 0x394400u;
            goto label_394400;
        }
    }
    ctx->pc = 0x3943F0u;
    // 0x3943f0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3943f0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3943f4: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x3943f4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3943f8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3943F8u;
    {
        const bool branch_taken_0x3943f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3943FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3943F8u;
        // 0x3943fc: 0x307600ff  andi        $s6, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 22, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3943f8) {
            ctx->pc = 0x39441Cu;
            goto label_39441c;
        }
    }
    ctx->pc = 0x394400u;
label_394400:
    // 0x394400: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x394400u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x394404: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x394404u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x394408: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x394408u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x39440c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x39440cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x394410: 0x0  nop
    ctx->pc = 0x394410u;
    // NOP
    // 0x394414: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x394414u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x394418: 0x307600ff  andi        $s6, $v1, 0xFF
    ctx->pc = 0x394418u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_39441c:
    // 0x39441c: 0x2ac1001f  slti        $at, $s6, 0x1F
    ctx->pc = 0x39441cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x394420: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x394420u;
    {
        const bool branch_taken_0x394420 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x394420) {
            ctx->pc = 0x394430u;
            goto label_394430;
        }
    }
    ctx->pc = 0x394428u;
    // 0x394428: 0x6416001e  daddiu      $s6, $zero, 0x1E
    ctx->pc = 0x394428u;
    SET_GPR_S64(ctx, 22, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)30);
    // 0x39442c: 0x0  nop
    ctx->pc = 0x39442cu;
    // NOP
label_394430:
    // 0x394430: 0x8fa2014c  lw          $v0, 0x14C($sp)
    ctx->pc = 0x394430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
    // 0x394434: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x394434u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x394438: 0x27b40170  addiu       $s4, $sp, 0x170
    ctx->pc = 0x394438u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x39443c: 0x34690080  ori         $t1, $v1, 0x80
    ctx->pc = 0x39443cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
    // 0x394440: 0x346800a0  ori         $t0, $v1, 0xA0
    ctx->pc = 0x394440u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)160);
    // 0x394444: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x394444u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x394448: 0x340cfff9  ori         $t4, $zero, 0xFFF9
    ctx->pc = 0x394448u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65529);
    // 0x39444c: 0x240b0040  addiu       $t3, $zero, 0x40
    ctx->pc = 0x39444cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x394450: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x394450u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x394454: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x394454u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x394458: 0x27b50160  addiu       $s5, $sp, 0x160
    ctx->pc = 0x394458u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x39445c: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x39445cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x394460: 0x3c027900  lui         $v0, 0x7900
    ctx->pc = 0x394460u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30976 << 16));
    // 0x394464: 0x344d7000  ori         $t5, $v0, 0x7000
    ctx->pc = 0x394464u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28672);
    // 0x394468: 0x8fa2014c  lw          $v0, 0x14C($sp)
    ctx->pc = 0x394468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
    // 0x39446c: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x39446cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x394470: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x394470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x394474: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x394474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x394478: 0x3c02ff00  lui         $v0, 0xFF00
    ctx->pc = 0x394478u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
    // 0x39447c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x39447cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x394480: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x394480u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x394484: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x394484u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x394488: 0x70025389  pcpyld      $t2, $zero, $v0
    ctx->pc = 0x394488u;
    SET_GPR_VEC(ctx, 10, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x39448c: 0x34630005  ori         $v1, $v1, 0x5
    ctx->pc = 0x39448cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)5);
    // 0x394490: 0x3402e402  ori         $v0, $zero, 0xE402
    ctx->pc = 0x394490u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)58370);
    // 0x394494: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x394494u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x394498: 0x21c38  dsll        $v1, $v0, 16
    ctx->pc = 0x394498u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 16);
    // 0x39449c: 0xe6830000  swc1        $f3, 0x0($s4)
    ctx->pc = 0x39449cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
    // 0x3944a0: 0x34621000  ori         $v0, $v1, 0x1000
    ctx->pc = 0x3944a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4096);
    // 0x3944a4: 0xe6820004  swc1        $f2, 0x4($s4)
    ctx->pc = 0x3944a4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
    // 0x3944a8: 0x443825  or          $a3, $v0, $a0
    ctx->pc = 0x3944a8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x3944ac: 0x34621400  ori         $v0, $v1, 0x1400
    ctx->pc = 0x3944acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)5120);
    // 0x3944b0: 0xe6810008  swc1        $f1, 0x8($s4)
    ctx->pc = 0x3944b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 8), bits); }
    // 0x3944b4: 0x443025  or          $a2, $v0, $a0
    ctx->pc = 0x3944b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x3944b8: 0xe680000c  swc1        $f0, 0xC($s4)
    ctx->pc = 0x3944b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 12), bits); }
    // 0x3944bc: 0x5183c  dsll32      $v1, $a1, 0
    ctx->pc = 0x3944bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 0));
    // 0x3944c0: 0x8fa2014c  lw          $v0, 0x14C($sp)
    ctx->pc = 0x3944c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
    // 0x3944c4: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x3944c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x3944c8: 0xc4430010  lwc1        $f3, 0x10($v0)
    ctx->pc = 0x3944c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3944cc: 0xc4420014  lwc1        $f2, 0x14($v0)
    ctx->pc = 0x3944ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3944d0: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x3944d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3944d4: 0xc440001c  lwc1        $f0, 0x1C($v0)
    ctx->pc = 0x3944d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3944d8: 0xa3a00120  sb          $zero, 0x120($sp)
    ctx->pc = 0x3944d8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 288), (uint8_t)GPR_U32(ctx, 0));
    // 0x3944dc: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x3944dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x3944e0: 0xe6830010  swc1        $f3, 0x10($s4)
    ctx->pc = 0x3944e0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 16), bits); }
    // 0x3944e4: 0xe6820014  swc1        $f2, 0x14($s4)
    ctx->pc = 0x3944e4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 20), bits); }
    // 0x3944e8: 0xe6810018  swc1        $f1, 0x18($s4)
    ctx->pc = 0x3944e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 24), bits); }
    // 0x3944ec: 0xe680001c  swc1        $f0, 0x1C($s4)
    ctx->pc = 0x3944ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 28), bits); }
    // 0x3944f0: 0x8fae014c  lw          $t6, 0x14C($sp)
    ctx->pc = 0x3944f0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
    // 0x3944f4: 0xc5c30020  lwc1        $f3, 0x20($t6)
    ctx->pc = 0x3944f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3944f8: 0xc5c20024  lwc1        $f2, 0x24($t6)
    ctx->pc = 0x3944f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3944fc: 0xc5c10028  lwc1        $f1, 0x28($t6)
    ctx->pc = 0x3944fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x394500: 0xc5c0002c  lwc1        $f0, 0x2C($t6)
    ctx->pc = 0x394500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x394504: 0xe6830020  swc1        $f3, 0x20($s4)
    ctx->pc = 0x394504u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 32), bits); }
    // 0x394508: 0xe6820024  swc1        $f2, 0x24($s4)
    ctx->pc = 0x394508u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 36), bits); }
    // 0x39450c: 0xe6810028  swc1        $f1, 0x28($s4)
    ctx->pc = 0x39450cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 40), bits); }
    // 0x394510: 0xe680002c  swc1        $f0, 0x2C($s4)
    ctx->pc = 0x394510u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 44), bits); }
    // 0x394514: 0xffa60158  sd          $a2, 0x158($sp)
    ctx->pc = 0x394514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 344), GPR_U64(ctx, 6));
    // 0x394518: 0x9026cea4  lbu         $a2, -0x315C($at)
    ctx->pc = 0x394518u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294954660)));
    // 0x39451c: 0xafad0190  sw          $t5, 0x190($sp)
    ctx->pc = 0x39451cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 13));
    // 0x394520: 0xafac0194  sw          $t4, 0x194($sp)
    ctx->pc = 0x394520u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 404), GPR_U32(ctx, 12));
    // 0x394524: 0xffa90160  sd          $t1, 0x160($sp)
    ctx->pc = 0x394524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 9));
    // 0x394528: 0xffa80168  sd          $t0, 0x168($sp)
    ctx->pc = 0x394528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 360), GPR_U64(ctx, 8));
    // 0x39452c: 0xffa70150  sd          $a3, 0x150($sp)
    ctx->pc = 0x39452cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 7));
    // 0x394530: 0xae450000  sw          $a1, 0x0($s2)
    ctx->pc = 0x394530u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 5));
    // 0x394534: 0x6580a  movz        $t3, $zero, $a2
    ctx->pc = 0x394534u;
    if (GPR_U64(ctx, 6) == 0) SET_GPR_VEC(ctx, 11, GPR_VEC(ctx, 0));
    // 0x394538: 0xb283c  dsll32      $a1, $t3, 0
    ctx->pc = 0x394538u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 11) << (32 + 0));
    // 0x39453c: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x39453cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
    // 0x394540: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x394540u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x394544: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x394544u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
    // 0x394548: 0xaa2825  or          $a1, $a1, $t2
    ctx->pc = 0x394548u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 10));
    // 0x39454c: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x39454cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x394550: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x394550u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x394554: 0xafa50130  sw          $a1, 0x130($sp)
    ctx->pc = 0x394554u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 5));
    // 0x394558: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x394558u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
    // 0x39455c: 0xaf928b28  sw          $s2, -0x74D8($gp)
    ctx->pc = 0x39455cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937384), GPR_U32(ctx, 18));
    // 0x394560: 0xae400010  sw          $zero, 0x10($s2)
    ctx->pc = 0x394560u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 0));
    // 0x394564: 0xae400014  sw          $zero, 0x14($s2)
    ctx->pc = 0x394564u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 0));
    // 0x394568: 0xae400018  sw          $zero, 0x18($s2)
    ctx->pc = 0x394568u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 0));
    // 0x39456c: 0xaf848b2c  sw          $a0, -0x74D4($gp)
    ctx->pc = 0x39456cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937388), GPR_U32(ctx, 4));
    // 0x394570: 0x26520020  addiu       $s2, $s2, 0x20
    ctx->pc = 0x394570u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x394574: 0xfe430000  sd          $v1, 0x0($s2)
    ctx->pc = 0x394574u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 3));
    // 0x394578: 0xfe420008  sd          $v0, 0x8($s2)
    ctx->pc = 0x394578u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 2));
    // 0x39457c: 0xaf928b30  sw          $s2, -0x74D0($gp)
    ctx->pc = 0x39457cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937392), GPR_U32(ctx, 18));
    // 0x394580: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x394580u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x394584: 0x0  nop
    ctx->pc = 0x394584u;
    // NOP
label_394588:
    // 0x394588: 0xdea70000  ld          $a3, 0x0($s5)
    ctx->pc = 0x394588u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x39458c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x39458cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x394590: 0x2406004d  addiu       $a2, $zero, 0x4D
    ctx->pc = 0x394590u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x394594: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x394594u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x394598: 0x2404004f  addiu       $a0, $zero, 0x4F
    ctx->pc = 0x394598u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x39459c: 0x3c023a00  lui         $v0, 0x3A00
    ctx->pc = 0x39459cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14848 << 16));
    // 0x3945a0: 0x344200c0  ori         $v0, $v0, 0xC0
    ctx->pc = 0x3945a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)192);
    // 0x3945a4: 0x432825  or          $a1, $v0, $v1
    ctx->pc = 0x3945a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3945a8: 0xfe470000  sd          $a3, 0x0($s2)
    ctx->pc = 0x3945a8u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 7));
    // 0x3945ac: 0x3c030003  lui         $v1, 0x3
    ctx->pc = 0x3945acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3 << 16));
    // 0x3945b0: 0xfe460008  sd          $a2, 0x8($s2)
    ctx->pc = 0x3945b0u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 6));
    // 0x3945b4: 0x24020048  addiu       $v0, $zero, 0x48
    ctx->pc = 0x3945b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x3945b8: 0xfe450010  sd          $a1, 0x10($s2)
    ctx->pc = 0x3945b8u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 16), GPR_U64(ctx, 5));
    // 0x3945bc: 0xfe440018  sd          $a0, 0x18($s2)
    ctx->pc = 0x3945bcu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 24), GPR_U64(ctx, 4));
    // 0x3945c0: 0x26520020  addiu       $s2, $s2, 0x20
    ctx->pc = 0x3945c0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x3945c4: 0xfe430000  sd          $v1, 0x0($s2)
    ctx->pc = 0x3945c4u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 3));
    // 0x3945c8: 0xfe420008  sd          $v0, 0x8($s2)
    ctx->pc = 0x3945c8u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 2));
    // 0x3945cc: 0x96860016  lhu         $a2, 0x16($s4)
    ctx->pc = 0x3945ccu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 22)));
    // 0x3945d0: 0x8e840010  lw          $a0, 0x10($s4)
    ctx->pc = 0x3945d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x3945d4: 0xc04cfd8  jal         func_133F60
    ctx->pc = 0x3945D4u;
    SET_GPR_U32(ctx, 31, 0x3945DCu);
    ctx->pc = 0x3945D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3945D4u;
    // 0x3945d8: 0x96850014  lhu         $a1, 0x14($s4) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x133F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133F60u, 0x3945D4u, 0x3945DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3945DCu;
label_3945dc:
    // 0x3945dc: 0xfe420010  sd          $v0, 0x10($s2)
    ctx->pc = 0x3945dcu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 16), GPR_U64(ctx, 2));
    // 0x3945e0: 0x24030015  addiu       $v1, $zero, 0x15
    ctx->pc = 0x3945e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x3945e4: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x3945e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x3945e8: 0x2404003f  addiu       $a0, $zero, 0x3F
    ctx->pc = 0x3945e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x3945ec: 0xfe420018  sd          $v0, 0x18($s2)
    ctx->pc = 0x3945ecu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 24), GPR_U64(ctx, 2));
    // 0x3945f0: 0x2406000d  addiu       $a2, $zero, 0xD
    ctx->pc = 0x3945f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x3945f4: 0x26520020  addiu       $s2, $s2, 0x20
    ctx->pc = 0x3945f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x3945f8: 0x24027900  addiu       $v0, $zero, 0x7900
    ctx->pc = 0x3945f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30976));
    // 0x3945fc: 0xfe400000  sd          $zero, 0x0($s2)
    ctx->pc = 0x3945fcu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 0));
    // 0x394600: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x394600u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x394604: 0xfe430008  sd          $v1, 0x8($s2)
    ctx->pc = 0x394604u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 3));
    // 0x394608: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x394608u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x39460c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x39460cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x394610: 0xfe400010  sd          $zero, 0x10($s2)
    ctx->pc = 0x394610u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 16), GPR_U64(ctx, 0));
    // 0x394614: 0xfe440018  sd          $a0, 0x18($s2)
    ctx->pc = 0x394614u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 24), GPR_U64(ctx, 4));
    // 0x394618: 0x24027000  addiu       $v0, $zero, 0x7000
    ctx->pc = 0x394618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28672));
    // 0x39461c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x39461cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x394620: 0x26520020  addiu       $s2, $s2, 0x20
    ctx->pc = 0x394620u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x394624: 0xfe420000  sd          $v0, 0x0($s2)
    ctx->pc = 0x394624u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 2));
    // 0x394628: 0x24030019  addiu       $v1, $zero, 0x19
    ctx->pc = 0x394628u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x39462c: 0x3c0200df  lui         $v0, 0xDF
    ctx->pc = 0x39462cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)223 << 16));
    // 0x394630: 0xfe430008  sd          $v1, 0x8($s2)
    ctx->pc = 0x394630u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 3));
    // 0x394634: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x394634u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x394638: 0x24040041  addiu       $a0, $zero, 0x41
    ctx->pc = 0x394638u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x39463c: 0x3c0201ff  lui         $v0, 0x1FF
    ctx->pc = 0x39463cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)511 << 16));
    // 0x394640: 0x26b50008  addiu       $s5, $s5, 0x8
    ctx->pc = 0x394640u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
    // 0x394644: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x394644u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x394648: 0xfe420010  sd          $v0, 0x10($s2)
    ctx->pc = 0x394648u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 16), GPR_U64(ctx, 2));
    // 0x39464c: 0x24030316  addiu       $v1, $zero, 0x316
    ctx->pc = 0x39464cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 790));
    // 0x394650: 0xfe440018  sd          $a0, 0x18($s2)
    ctx->pc = 0x394650u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 24), GPR_U64(ctx, 4));
    // 0x394654: 0x34028080  ori         $v0, $zero, 0x8080
    ctx->pc = 0x394654u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x394658: 0x26520020  addiu       $s2, $s2, 0x20
    ctx->pc = 0x394658u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x39465c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x39465cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x394660: 0xfe430000  sd          $v1, 0x0($s2)
    ctx->pc = 0x394660u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 3));
    // 0x394664: 0x34428080  ori         $v0, $v0, 0x8080
    ctx->pc = 0x394664u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    // 0x394668: 0xfe400008  sd          $zero, 0x8($s2)
    ctx->pc = 0x394668u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 0));
    // 0x39466c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x39466cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x394670: 0xfe420010  sd          $v0, 0x10($s2)
    ctx->pc = 0x394670u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 16), GPR_U64(ctx, 2));
    // 0x394674: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x394674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x394678: 0xfe440018  sd          $a0, 0x18($s2)
    ctx->pc = 0x394678u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 24), GPR_U64(ctx, 4));
    // 0x39467c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x39467cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x394680: 0x9687001a  lhu         $a3, 0x1A($s4)
    ctx->pc = 0x394680u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 26)));
    // 0x394684: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x394684u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x394688: 0x96880018  lhu         $t0, 0x18($s4)
    ctx->pc = 0x394688u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x39468c: 0x26520020  addiu       $s2, $s2, 0x20
    ctx->pc = 0x39468cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x394690: 0x70021389  pcpyld      $v0, $zero, $v0
    ctx->pc = 0x394690u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x394694: 0x2e640002  sltiu       $a0, $s3, 0x2
    ctx->pc = 0x394694u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x394698: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x394698u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x39469c: 0x25080008  addiu       $t0, $t0, 0x8
    ctx->pc = 0x39469cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x3946a0: 0x7383c  dsll32      $a3, $a3, 0
    ctx->pc = 0x3946a0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
    // 0x3946a4: 0x8403c  dsll32      $t0, $t0, 0
    ctx->pc = 0x3946a4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 0));
    // 0x3946a8: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x3946a8u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
    // 0x3946ac: 0x8403f  dsra32      $t0, $t0, 0
    ctx->pc = 0x3946acu;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 0));
    // 0x3946b0: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x3946b0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x3946b4: 0x1073825  or          $a3, $t0, $a3
    ctx->pc = 0x3946b4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | GPR_U64(ctx, 7));
    // 0x3946b8: 0xfe470000  sd          $a3, 0x0($s2)
    ctx->pc = 0x3946b8u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 7));
    // 0x3946bc: 0xfe430008  sd          $v1, 0x8($s2)
    ctx->pc = 0x3946bcu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 3));
    // 0x3946c0: 0x96870022  lhu         $a3, 0x22($s4)
    ctx->pc = 0x3946c0u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 34)));
    // 0x3946c4: 0x96880020  lhu         $t0, 0x20($s4)
    ctx->pc = 0x3946c4u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x3946c8: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x3946c8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x3946cc: 0x1073825  or          $a3, $t0, $a3
    ctx->pc = 0x3946ccu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | GPR_U64(ctx, 7));
    // 0x3946d0: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x3946d0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x3946d4: 0xfe470010  sd          $a3, 0x10($s2)
    ctx->pc = 0x3946d4u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 16), GPR_U64(ctx, 7));
    // 0x3946d8: 0xfe460018  sd          $a2, 0x18($s2)
    ctx->pc = 0x3946d8u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 24), GPR_U64(ctx, 6));
    // 0x3946dc: 0x9686001e  lhu         $a2, 0x1E($s4)
    ctx->pc = 0x3946dcu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 30)));
    // 0x3946e0: 0x26520020  addiu       $s2, $s2, 0x20
    ctx->pc = 0x3946e0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x3946e4: 0x9687001c  lhu         $a3, 0x1C($s4)
    ctx->pc = 0x3946e4u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 28)));
    // 0x3946e8: 0x24c60009  addiu       $a2, $a2, 0x9
    ctx->pc = 0x3946e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 9));
    // 0x3946ec: 0x24e70009  addiu       $a3, $a3, 0x9
    ctx->pc = 0x3946ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 9));
    // 0x3946f0: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x3946f0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x3946f4: 0x7383c  dsll32      $a3, $a3, 0
    ctx->pc = 0x3946f4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
    // 0x3946f8: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x3946f8u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x3946fc: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x3946fcu;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
    // 0x394700: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x394700u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x394704: 0xe63025  or          $a2, $a3, $a2
    ctx->pc = 0x394704u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x394708: 0xfe460000  sd          $a2, 0x0($s2)
    ctx->pc = 0x394708u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 6));
    // 0x39470c: 0xfe430008  sd          $v1, 0x8($s2)
    ctx->pc = 0x39470cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 3));
    // 0x394710: 0x96860022  lhu         $a2, 0x22($s4)
    ctx->pc = 0x394710u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 34)));
    // 0x394714: 0x9683002a  lhu         $v1, 0x2A($s4)
    ctx->pc = 0x394714u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 42)));
    // 0x394718: 0x96880020  lhu         $t0, 0x20($s4)
    ctx->pc = 0x394718u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x39471c: 0x96870028  lhu         $a3, 0x28($s4)
    ctx->pc = 0x39471cu;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 40)));
    // 0x394720: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x394720u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x394724: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x394724u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x394728: 0x1073821  addu        $a3, $t0, $a3
    ctx->pc = 0x394728u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x39472c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x39472cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x394730: 0x7383c  dsll32      $a3, $a3, 0
    ctx->pc = 0x394730u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
    // 0x394734: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x394734u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x394738: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x394738u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
    // 0x39473c: 0xe31825  or          $v1, $a3, $v1
    ctx->pc = 0x39473cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x394740: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x394740u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x394744: 0xfe420010  sd          $v0, 0x10($s2)
    ctx->pc = 0x394744u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 16), GPR_U64(ctx, 2));
    // 0x394748: 0xfe450018  sd          $a1, 0x18($s2)
    ctx->pc = 0x394748u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 24), GPR_U64(ctx, 5));
    // 0x39474c: 0x1480ff8e  bnez        $a0, . + 4 + (-0x72 << 2)
    ctx->pc = 0x39474Cu;
    {
        const bool branch_taken_0x39474c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x394750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39474Cu;
        // 0x394750: 0x26520020  addiu       $s2, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39474c) {
            ctx->pc = 0x394588u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_394588;
        }
    }
    ctx->pc = 0x394754u;
    // 0x394754: 0x8fa2014c  lw          $v0, 0x14C($sp)
    ctx->pc = 0x394754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
    // 0x394758: 0x94430028  lhu         $v1, 0x28($v0)
    ctx->pc = 0x394758u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x39475c: 0xafa00110  sw          $zero, 0x110($sp)
    ctx->pc = 0x39475cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 0));
    // 0x394760: 0x32103  sra         $a0, $v1, 4
    ctx->pc = 0x394760u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 4));
    // 0x394764: 0x9442002a  lhu         $v0, 0x2A($v0)
    ctx->pc = 0x394764u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 42)));
    // 0x394768: 0x10000195  b           . + 4 + (0x195 << 2)
    ctx->pc = 0x394768u;
    {
        const bool branch_taken_0x394768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39476Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394768u;
        // 0x39476c: 0x21903  sra         $v1, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394768) {
            ctx->pc = 0x394DC0u;
            goto label_394dc0;
        }
    }
    ctx->pc = 0x394770u;
label_394770:
    // 0x394770: 0x93a20120  lbu         $v0, 0x120($sp)
    ctx->pc = 0x394770u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x394774: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x394774u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x394778: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x394778u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39477c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x39477cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x394780: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x394780u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x394784: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x394784u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
    // 0x394788: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x394788u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x39478c: 0x8fa600d0  lw          $a2, 0xD0($sp)
    ctx->pc = 0x39478cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x394790: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x394790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x394794: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x394794u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x394798: 0xdd3021  addu        $a2, $a2, $sp
    ctx->pc = 0x394798u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 29)));
    // 0x39479c: 0xdcc60160  ld          $a2, 0x160($a2)
    ctx->pc = 0x39479cu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 6), 352)));
    // 0x3947a0: 0xfe460000  sd          $a2, 0x0($s2)
    ctx->pc = 0x3947a0u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 6));
    // 0x3947a4: 0x2406004d  addiu       $a2, $zero, 0x4D
    ctx->pc = 0x3947a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x3947a8: 0xfe460008  sd          $a2, 0x8($s2)
    ctx->pc = 0x3947a8u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 6));
    // 0x3947ac: 0x7ba600c0  lq          $a2, 0xC0($sp)
    ctx->pc = 0x3947acu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x3947b0: 0xfe460010  sd          $a2, 0x10($s2)
    ctx->pc = 0x3947b0u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 16), GPR_U64(ctx, 6));
    // 0x3947b4: 0x2406004f  addiu       $a2, $zero, 0x4F
    ctx->pc = 0x3947b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x3947b8: 0xfe460018  sd          $a2, 0x18($s2)
    ctx->pc = 0x3947b8u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 24), GPR_U64(ctx, 6));
    // 0x3947bc: 0xdc420150  ld          $v0, 0x150($v0)
    ctx->pc = 0x3947bcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 336)));
    // 0x3947c0: 0x26520020  addiu       $s2, $s2, 0x20
    ctx->pc = 0x3947c0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x3947c4: 0xfe420000  sd          $v0, 0x0($s2)
    ctx->pc = 0x3947c4u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 2));
    // 0x3947c8: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x3947c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x3947cc: 0xfe420008  sd          $v0, 0x8($s2)
    ctx->pc = 0x3947ccu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 2));
    // 0x3947d0: 0x24020060  addiu       $v0, $zero, 0x60
    ctx->pc = 0x3947d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x3947d4: 0xfe420010  sd          $v0, 0x10($s2)
    ctx->pc = 0x3947d4u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 16), GPR_U64(ctx, 2));
    // 0x3947d8: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x3947d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x3947dc: 0xfe420018  sd          $v0, 0x18($s2)
    ctx->pc = 0x3947dcu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 24), GPR_U64(ctx, 2));
    // 0x3947e0: 0x26520020  addiu       $s2, $s2, 0x20
    ctx->pc = 0x3947e0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x3947e4: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x3947e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x3947e8: 0xfe400000  sd          $zero, 0x0($s2)
    ctx->pc = 0x3947e8u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 0));
    // 0x3947ec: 0xfe420008  sd          $v0, 0x8($s2)
    ctx->pc = 0x3947ecu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 2));
    // 0x3947f0: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x3947f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x3947f4: 0xfe420010  sd          $v0, 0x10($s2)
    ctx->pc = 0x3947f4u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 16), GPR_U64(ctx, 2));
    // 0x3947f8: 0x24020048  addiu       $v0, $zero, 0x48
    ctx->pc = 0x3947f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x3947fc: 0xfe420018  sd          $v0, 0x18($s2)
    ctx->pc = 0x3947fcu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 24), GPR_U64(ctx, 2));
    // 0x394800: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x394800u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x394804: 0x26520020  addiu       $s2, $s2, 0x20
    ctx->pc = 0x394804u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x394808: 0xfe420000  sd          $v0, 0x0($s2)
    ctx->pc = 0x394808u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 2));
    // 0x39480c: 0x24020019  addiu       $v0, $zero, 0x19
    ctx->pc = 0x39480cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x394810: 0xfe420008  sd          $v0, 0x8($s2)
    ctx->pc = 0x394810u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 2));
    // 0x394814: 0xdfa200f0  ld          $v0, 0xF0($sp)
    ctx->pc = 0x394814u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x394818: 0xfe420010  sd          $v0, 0x10($s2)
    ctx->pc = 0x394818u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 16), GPR_U64(ctx, 2));
    // 0x39481c: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x39481cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x394820: 0xfe420018  sd          $v0, 0x18($s2)
    ctx->pc = 0x394820u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 24), GPR_U64(ctx, 2));
    // 0x394824: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x394824u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x394828: 0x26520020  addiu       $s2, $s2, 0x20
    ctx->pc = 0x394828u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x39482c: 0xfe420000  sd          $v0, 0x0($s2)
    ctx->pc = 0x39482cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 2));
    // 0x394830: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x394830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x394834: 0xfe420008  sd          $v0, 0x8($s2)
    ctx->pc = 0x394834u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 2));
    // 0x394838: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x394838u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x39483c: 0x0  nop
    ctx->pc = 0x39483cu;
    // NOP
label_394840:
    // 0x394840: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x394840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x394844: 0x1262000a  beq         $s3, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x394844u;
    {
        const bool branch_taken_0x394844 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x394844) {
            ctx->pc = 0x394870u;
            goto label_394870;
        }
    }
    ctx->pc = 0x39484Cu;
    // 0x39484c: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x39484Cu;
    {
        const bool branch_taken_0x39484c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x39484c) {
            ctx->pc = 0x394860u;
            goto label_394860;
        }
    }
    ctx->pc = 0x394854u;
    // 0x394854: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x394854u;
    {
        const bool branch_taken_0x394854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x394854) {
            ctx->pc = 0x394878u;
            goto label_394878;
        }
    }
    ctx->pc = 0x39485Cu;
    // 0x39485c: 0x0  nop
    ctx->pc = 0x39485cu;
    // NOP
label_394860:
    // 0x394860: 0x300882d  daddu       $s1, $t8, $zero
    ctx->pc = 0x394860u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
    // 0x394864: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x394864u;
    {
        const bool branch_taken_0x394864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x394868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394864u;
        // 0x394868: 0x1e0802d  daddu       $s0, $t7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394864) {
            ctx->pc = 0x394878u;
            goto label_394878;
        }
    }
    ctx->pc = 0x39486Cu;
    // 0x39486c: 0x0  nop
    ctx->pc = 0x39486cu;
    // NOP
label_394870:
    // 0x394870: 0x1c0802d  daddu       $s0, $t6, $zero
    ctx->pc = 0x394870u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x394874: 0x280882d  daddu       $s1, $s4, $zero
    ctx->pc = 0x394874u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_394878:
    // 0x394878: 0x16600005  bnez        $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x394878u;
    {
        const bool branch_taken_0x394878 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x39487Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394878u;
        // 0x39487c: 0x24020316  addiu       $v0, $zero, 0x316 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 790));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394878) {
            ctx->pc = 0x394890u;
            goto label_394890;
        }
    }
    ctx->pc = 0x394880u;
    // 0x394880: 0xfe420000  sd          $v0, 0x0($s2)
    ctx->pc = 0x394880u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 2));
    // 0x394884: 0xfe400008  sd          $zero, 0x8($s2)
    ctx->pc = 0x394884u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 0));
    // 0x394888: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x394888u;
    {
        const bool branch_taken_0x394888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39488Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394888u;
        // 0x39488c: 0x26520010  addiu       $s2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394888) {
            ctx->pc = 0x3948B0u;
            goto label_3948b0;
        }
    }
    ctx->pc = 0x394890u;
label_394890:
    // 0x394890: 0x24020356  addiu       $v0, $zero, 0x356
    ctx->pc = 0x394890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 854));
    // 0x394894: 0xfe420000  sd          $v0, 0x0($s2)
    ctx->pc = 0x394894u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 2));
    // 0x394898: 0xfe400008  sd          $zero, 0x8($s2)
    ctx->pc = 0x394898u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 0));
    // 0x39489c: 0x24020043  addiu       $v0, $zero, 0x43
    ctx->pc = 0x39489cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x3948a0: 0xfe450010  sd          $a1, 0x10($s2)
    ctx->pc = 0x3948a0u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 16), GPR_U64(ctx, 5));
    // 0x3948a4: 0xfe420018  sd          $v0, 0x18($s2)
    ctx->pc = 0x3948a4u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 24), GPR_U64(ctx, 2));
    // 0x3948a8: 0x26520020  addiu       $s2, $s2, 0x20
    ctx->pc = 0x3948a8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x3948ac: 0x0  nop
    ctx->pc = 0x3948acu;
    // NOP
label_3948b0:
    // 0x3948b0: 0xa082b  sltu        $at, $zero, $t2
    ctx->pc = 0x3948b0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x3948b4: 0x10200026  beqz        $at, . + 4 + (0x26 << 2)
    ctx->pc = 0x3948B4u;
    {
        const bool branch_taken_0x3948b4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3948B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3948B4u;
        // 0x3948b8: 0xc82d  daddu       $t9, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3948b4) {
            ctx->pc = 0x394950u;
            goto label_394950;
        }
    }
    ctx->pc = 0x3948BCu;
    // 0x3948bc: 0x26060700  addiu       $a2, $s0, 0x700
    ctx->pc = 0x3948bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1792));
    // 0x3948c0: 0x711021  addu        $v0, $v1, $s1
    ctx->pc = 0x3948c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x3948c4: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x3948c4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x3948c8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3948c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3948cc: 0xc43825  or          $a3, $a2, $a0
    ctx->pc = 0x3948ccu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
    // 0x3948d0: 0x1621025  or          $v0, $t3, $v0
    ctx->pc = 0x3948d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) | GPR_U64(ctx, 2));
    // 0x3948d4: 0x2409001f  addiu       $t1, $zero, 0x1F
    ctx->pc = 0x3948d4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x3948d8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3948d8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3948dc: 0x563025  or          $a2, $v0, $s6
    ctx->pc = 0x3948dcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 22));
label_3948e0:
    // 0x3948e0: 0x9a83c  dsll32      $s5, $t1, 0
    ctx->pc = 0x3948e0u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 9) << (32 + 0));
    // 0x3948e4: 0x8103c  dsll32      $v0, $t0, 0
    ctx->pc = 0x3948e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) << (32 + 0));
    // 0x3948e8: 0x15a83e  dsrl32      $s5, $s5, 0
    ctx->pc = 0x3948e8u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) >> (32 + 0));
    // 0x3948ec: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x3948ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x3948f0: 0x15ac38  dsll        $s5, $s5, 16
    ctx->pc = 0x3948f0u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) << 16);
    // 0x3948f4: 0x551025  or          $v0, $v0, $s5
    ctx->pc = 0x3948f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 21));
    // 0x3948f8: 0x27390001  addiu       $t9, $t9, 0x1
    ctx->pc = 0x3948f8u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 1));
    // 0x3948fc: 0x1a2a825  or          $s5, $t5, $v0
    ctx->pc = 0x3948fcu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 13) | GPR_U64(ctx, 2));
    // 0x394900: 0x25080020  addiu       $t0, $t0, 0x20
    ctx->pc = 0x394900u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
    // 0x394904: 0xfe550000  sd          $s5, 0x0($s2)
    ctx->pc = 0x394904u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 21));
    // 0x394908: 0x32a102b  sltu        $v0, $t9, $t2
    ctx->pc = 0x394908u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 25) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x39490c: 0x24150041  addiu       $s5, $zero, 0x41
    ctx->pc = 0x39490cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x394910: 0x25290020  addiu       $t1, $t1, 0x20
    ctx->pc = 0x394910u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 32));
    // 0x394914: 0xfe550008  sd          $s5, 0x8($s2)
    ctx->pc = 0x394914u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 21));
    // 0x394918: 0xfe570010  sd          $s7, 0x10($s2)
    ctx->pc = 0x394918u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 16), GPR_U64(ctx, 23));
    // 0x39491c: 0x2415000d  addiu       $s5, $zero, 0xD
    ctx->pc = 0x39491cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x394920: 0xfe5e0018  sd          $fp, 0x18($s2)
    ctx->pc = 0x394920u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 24), GPR_U64(ctx, 30));
    // 0x394924: 0x26520020  addiu       $s2, $s2, 0x20
    ctx->pc = 0x394924u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x394928: 0xfe470000  sd          $a3, 0x0($s2)
    ctx->pc = 0x394928u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 7));
    // 0x39492c: 0xfe550008  sd          $s5, 0x8($s2)
    ctx->pc = 0x39492cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 21));
    // 0x394930: 0xfe4c0010  sd          $t4, 0x10($s2)
    ctx->pc = 0x394930u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 16), GPR_U64(ctx, 12));
    // 0x394934: 0x24150005  addiu       $s5, $zero, 0x5
    ctx->pc = 0x394934u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x394938: 0xfe5e0018  sd          $fp, 0x18($s2)
    ctx->pc = 0x394938u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 24), GPR_U64(ctx, 30));
    // 0x39493c: 0x26520020  addiu       $s2, $s2, 0x20
    ctx->pc = 0x39493cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x394940: 0xfe460000  sd          $a2, 0x0($s2)
    ctx->pc = 0x394940u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 6));
    // 0x394944: 0xfe550008  sd          $s5, 0x8($s2)
    ctx->pc = 0x394944u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 21));
    // 0x394948: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x394948u;
    {
        const bool branch_taken_0x394948 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39494Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394948u;
        // 0x39494c: 0x26520010  addiu       $s2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394948) {
            ctx->pc = 0x3948E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3948e0;
        }
    }
    ctx->pc = 0x394950u;
label_394950:
    // 0x394950: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x394950u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x394954: 0x2e620002  sltiu       $v0, $s3, 0x2
    ctx->pc = 0x394954u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x394958: 0x1440ffb9  bnez        $v0, . + 4 + (-0x47 << 2)
    ctx->pc = 0x394958u;
    {
        const bool branch_taken_0x394958 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x394958) {
            ctx->pc = 0x394840u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_394840;
        }
    }
    ctx->pc = 0x394960u;
    // 0x394960: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x394960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x394964: 0xa3a20120  sb          $v0, 0x120($sp)
    ctx->pc = 0x394964u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 288), (uint8_t)GPR_U32(ctx, 2));
    // 0x394968: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x394968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x39496c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x39496cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x394970: 0xafa20110  sw          $v0, 0x110($sp)
    ctx->pc = 0x394970u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 2));
    // 0x394974: 0x0  nop
    ctx->pc = 0x394974u;
    // NOP
label_394978:
    // 0x394978: 0x8fa60110  lw          $a2, 0x110($sp)
    ctx->pc = 0x394978u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x39497c: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x39497cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x394980: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x394980u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x394984: 0x1440ff7a  bnez        $v0, . + 4 + (-0x86 << 2)
    ctx->pc = 0x394984u;
    {
        const bool branch_taken_0x394984 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x394984) {
            ctx->pc = 0x394770u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_394770;
        }
    }
    ctx->pc = 0x39498Cu;
    // 0x39498c: 0x0  nop
    ctx->pc = 0x39498cu;
    // NOP
label_394990:
    // 0x394990: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x394990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x394994: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x394994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x394998: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x394998u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x39499c: 0x3c028888  lui         $v0, 0x8888
    ctx->pc = 0x39499cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34952 << 16));
    // 0x3949a0: 0x321c0  sll         $a0, $v1, 7
    ctx->pc = 0x3949a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x3949a4: 0x34428889  ori         $v0, $v0, 0x8889
    ctx->pc = 0x3949a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x3949a8: 0x41fc2  srl         $v1, $a0, 31
    ctx->pc = 0x3949a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x3949ac: 0x440018  mult        $zero, $v0, $a0
    ctx->pc = 0x3949acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x3949b0: 0x0  nop
    ctx->pc = 0x3949b0u;
    // NOP
    // 0x3949b4: 0x0  nop
    ctx->pc = 0x3949b4u;
    // NOP
    // 0x3949b8: 0x1010  mfhi        $v0
    ctx->pc = 0x3949b8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x3949bc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3949bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3949c0: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x3949c0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x3949c4: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x3949c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3949c8: 0x2c810081  sltiu       $at, $a0, 0x81
    ctx->pc = 0x3949c8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)129) ? 1 : 0);
    // 0x3949cc: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x3949CCu;
    {
        const bool branch_taken_0x3949cc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x3949cc) {
            ctx->pc = 0x3949D8u;
            goto label_3949d8;
        }
    }
    ctx->pc = 0x3949D4u;
    // 0x3949d4: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x3949d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_3949d8:
    // 0x3949d8: 0x9fa20130  lwu         $v0, 0x130($sp)
    ctx->pc = 0x3949d8u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x3949dc: 0x240e0001  addiu       $t6, $zero, 0x1
    ctx->pc = 0x3949dcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3949e0: 0x2408004d  addiu       $t0, $zero, 0x4D
    ctx->pc = 0x3949e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x3949e4: 0x2407004f  addiu       $a3, $zero, 0x4F
    ctx->pc = 0x3949e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x3949e8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x3949e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x3949ec: 0x240d003f  addiu       $t5, $zero, 0x3F
    ctx->pc = 0x3949ecu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x3949f0: 0x3c0c0003  lui         $t4, 0x3
    ctx->pc = 0x3949f0u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)3 << 16));
    // 0x3949f4: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x3949f4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3949f8: 0x93a20120  lbu         $v0, 0x120($sp)
    ctx->pc = 0x3949f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x3949fc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3949fcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x394a00: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x394a00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x394a04: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x394a04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x394a08: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x394a08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x394a0c: 0x7d2021  addu        $a0, $v1, $sp
    ctx->pc = 0x394a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x394a10: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x394a10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x394a14: 0xe183c  dsll32      $v1, $t6, 0
    ctx->pc = 0x394a14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 14) << (32 + 0));
    // 0x394a18: 0x34460068  ori         $a2, $v0, 0x68
    ctx->pc = 0x394a18u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)104);
    // 0x394a1c: 0x8fa2014c  lw          $v0, 0x14C($sp)
    ctx->pc = 0x394a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
    // 0x394a20: 0x944b0028  lhu         $t3, 0x28($v0)
    ctx->pc = 0x394a20u;
    SET_GPR_ZE32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x394a24: 0x944a002a  lhu         $t2, 0x2A($v0)
    ctx->pc = 0x394a24u;
    SET_GPR_ZE32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 42)));
    // 0x394a28: 0xb7903  sra         $t7, $t3, 4
    ctx->pc = 0x394a28u;
    SET_GPR_S32(ctx, 15, SRA32(GPR_S32(ctx, 11), 4));
    // 0x394a2c: 0xfe490000  sd          $t1, 0x0($s2)
    ctx->pc = 0x394a2cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 9));
    // 0x394a30: 0x3c023a00  lui         $v0, 0x3A00
    ctx->pc = 0x394a30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14848 << 16));
    // 0x394a34: 0x344200c0  ori         $v0, $v0, 0xC0
    ctx->pc = 0x394a34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)192);
    // 0x394a38: 0xfe480008  sd          $t0, 0x8($s2)
    ctx->pc = 0x394a38u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 8));
    // 0x394a3c: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x394a3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x394a40: 0xa8103  sra         $s0, $t2, 4
    ctx->pc = 0x394a40u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 10), 4));
    // 0x394a44: 0xfe430010  sd          $v1, 0x10($s2)
    ctx->pc = 0x394a44u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 16), GPR_U64(ctx, 3));
    // 0x394a48: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x394a48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x394a4c: 0xfe470018  sd          $a3, 0x18($s2)
    ctx->pc = 0x394a4cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 24), GPR_U64(ctx, 7));
    // 0x394a50: 0x25e3ffff  addiu       $v1, $t7, -0x1
    ctx->pc = 0x394a50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967295));
    // 0x394a54: 0xdc870150  ld          $a3, 0x150($a0)
    ctx->pc = 0x394a54u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 4), 336)));
    // 0x394a58: 0x26520020  addiu       $s2, $s2, 0x20
    ctx->pc = 0x394a58u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x394a5c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x394a5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x394a60: 0x240b0048  addiu       $t3, $zero, 0x48
    ctx->pc = 0x394a60u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x394a64: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x394a64u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x394a68: 0x24090009  addiu       $t1, $zero, 0x9
    ctx->pc = 0x394a68u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x394a6c: 0x31bb8  dsll        $v1, $v1, 14
    ctx->pc = 0x394a6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 14);
    // 0x394a70: 0x24080356  addiu       $t0, $zero, 0x356
    ctx->pc = 0x394a70u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 854));
    // 0x394a74: 0xf7900  sll         $t7, $t7, 4
    ctx->pc = 0x394a74u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 4));
    // 0x394a78: 0xfe470000  sd          $a3, 0x0($s2)
    ctx->pc = 0x394a78u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 7));
    // 0x394a7c: 0x3464000a  ori         $a0, $v1, 0xA
    ctx->pc = 0x394a7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)10);
    // 0x394a80: 0xfe450008  sd          $a1, 0x8($s2)
    ctx->pc = 0x394a80u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 5));
    // 0x394a84: 0x2603ffff  addiu       $v1, $s0, -0x1
    ctx->pc = 0x394a84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x394a88: 0xfe400010  sd          $zero, 0x10($s2)
    ctx->pc = 0x394a88u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 16), GPR_U64(ctx, 0));
    // 0x394a8c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x394a8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x394a90: 0xfe420018  sd          $v0, 0x18($s2)
    ctx->pc = 0x394a90u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 24), GPR_U64(ctx, 2));
    // 0x394a94: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x394a94u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x394a98: 0x26520020  addiu       $s2, $s2, 0x20
    ctx->pc = 0x394a98u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x394a9c: 0x318bc  dsll32      $v1, $v1, 2
    ctx->pc = 0x394a9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 2));
    // 0x394aa0: 0xfe400000  sd          $zero, 0x0($s2)
    ctx->pc = 0x394aa0u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 0));
    // 0x394aa4: 0x835025  or          $t2, $a0, $v1
    ctx->pc = 0x394aa4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x394aa8: 0xfe4d0008  sd          $t5, 0x8($s2)
    ctx->pc = 0x394aa8u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 13));
    // 0x394aac: 0x34038080  ori         $v1, $zero, 0x8080
    ctx->pc = 0x394aacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x394ab0: 0xfe4c0010  sd          $t4, 0x10($s2)
    ctx->pc = 0x394ab0u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 16), GPR_U64(ctx, 12));
    // 0x394ab4: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x394ab4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x394ab8: 0xfe4b0018  sd          $t3, 0x18($s2)
    ctx->pc = 0x394ab8u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 24), GPR_U64(ctx, 11));
    // 0x394abc: 0x34678080  ori         $a3, $v1, 0x8080
    ctx->pc = 0x394abcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32896);
    // 0x394ac0: 0x26520020  addiu       $s2, $s2, 0x20
    ctx->pc = 0x394ac0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x394ac4: 0x106900  sll         $t5, $s0, 4
    ctx->pc = 0x394ac4u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x394ac8: 0xfe4a0000  sd          $t2, 0x0($s2)
    ctx->pc = 0x394ac8u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 10));
    // 0x394acc: 0x25ac0009  addiu       $t4, $t5, 0x9
    ctx->pc = 0x394accu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 13), 9));
    // 0x394ad0: 0xfe490008  sd          $t1, 0x8($s2)
    ctx->pc = 0x394ad0u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 9));
    // 0x394ad4: 0xc583c  dsll32      $t3, $t4, 0
    ctx->pc = 0x394ad4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 12) << (32 + 0));
    // 0x394ad8: 0xfe480010  sd          $t0, 0x10($s2)
    ctx->pc = 0x394ad8u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 16), GPR_U64(ctx, 8));
    // 0x394adc: 0x25ea0009  addiu       $t2, $t7, 0x9
    ctx->pc = 0x394adcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 15), 9));
    // 0x394ae0: 0xfe400018  sd          $zero, 0x18($s2)
    ctx->pc = 0x394ae0u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 24), GPR_U64(ctx, 0));
    // 0x394ae4: 0xb583f  dsra32      $t3, $t3, 0
    ctx->pc = 0x394ae4u;
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 11) >> (32 + 0));
    // 0x394ae8: 0x26520020  addiu       $s2, $s2, 0x20
    ctx->pc = 0x394ae8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x394aec: 0xa483c  dsll32      $t1, $t2, 0
    ctx->pc = 0x394aecu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 10) << (32 + 0));
    // 0x394af0: 0xfe470000  sd          $a3, 0x0($s2)
    ctx->pc = 0x394af0u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 7));
    // 0x394af4: 0x24050043  addiu       $a1, $zero, 0x43
    ctx->pc = 0x394af4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x394af8: 0xfe4e0008  sd          $t6, 0x8($s2)
    ctx->pc = 0x394af8u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 14));
    // 0x394afc: 0xb5c38  dsll        $t3, $t3, 16
    ctx->pc = 0x394afcu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << 16);
    // 0x394b00: 0xfe460010  sd          $a2, 0x10($s2)
    ctx->pc = 0x394b00u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 16), GPR_U64(ctx, 6));
    // 0x394b04: 0x9483f  dsra32      $t1, $t1, 0
    ctx->pc = 0x394b04u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 0));
    // 0x394b08: 0xfe450018  sd          $a1, 0x18($s2)
    ctx->pc = 0x394b08u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 24), GPR_U64(ctx, 5));
    // 0x394b0c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x394b0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x394b10: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x394b10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x394b14: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x394b14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x394b18: 0x12b6025  or          $t4, $t1, $t3
    ctx->pc = 0x394b18u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 9) | GPR_U64(ctx, 11));
    // 0x394b1c: 0x104043  sra         $t0, $s0, 1
    ctx->pc = 0x394b1cu;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 16), 1));
    // 0x394b20: 0x6010003  bgez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x394B20u;
    {
        const bool branch_taken_0x394b20 = (GPR_S64(ctx, 16) >= 0);
        ctx->pc = 0x394B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394B20u;
        // 0x394b24: 0x26520020  addiu       $s2, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394b20) {
            ctx->pc = 0x394B30u;
            goto label_394b30;
        }
    }
    ctx->pc = 0x394B28u;
    // 0x394b28: 0x26050001  addiu       $a1, $s0, 0x1
    ctx->pc = 0x394b28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x394b2c: 0x54043  sra         $t0, $a1, 1
    ctx->pc = 0x394b2cu;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 5), 1));
label_394b30:
    // 0x394b30: 0x85900  sll         $t3, $t0, 4
    ctx->pc = 0x394b30u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x394b34: 0x3c0500df  lui         $a1, 0xDF
    ctx->pc = 0x394b34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)223 << 16));
    // 0x394b38: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x394b38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x394b3c: 0x5503c  dsll32      $t2, $a1, 0
    ctx->pc = 0x394b3cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 5) << (32 + 0));
    // 0x394b40: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x394b40u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x394b44: 0x3c050008  lui         $a1, 0x8
    ctx->pc = 0x394b44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
    // 0x394b48: 0x24090041  addiu       $t1, $zero, 0x41
    ctx->pc = 0x394b48u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x394b4c: 0x34a80008  ori         $t0, $a1, 0x8
    ctx->pc = 0x394b4cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8);
    // 0x394b50: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x394b50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x394b54: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x394b54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x394b58: 0x24100005  addiu       $s0, $zero, 0x5
    ctx->pc = 0x394b58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x394b5c: 0x70063389  pcpyld      $a2, $zero, $a2
    ctx->pc = 0x394b5cu;
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 6)));
label_394b60:
    // 0x394b60: 0x3683c  dsll32      $t5, $v1, 0
    ctx->pc = 0x394b60u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 3) << (32 + 0));
    // 0x394b64: 0x2703c  dsll32      $t6, $v0, 0
    ctx->pc = 0x394b64u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 2) << (32 + 0));
    // 0x394b68: 0xd683e  dsrl32      $t5, $t5, 0
    ctx->pc = 0x394b68u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) >> (32 + 0));
    // 0x394b6c: 0xe703e  dsrl32      $t6, $t6, 0
    ctx->pc = 0x394b6cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) >> (32 + 0));
    // 0x394b70: 0xd6c38  dsll        $t5, $t5, 16
    ctx->pc = 0x394b70u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) << 16);
    // 0x394b74: 0x1cd6825  or          $t5, $t6, $t5
    ctx->pc = 0x394b74u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 14) | GPR_U64(ctx, 13));
    // 0x394b78: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x394b78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x394b7c: 0x1aa6825  or          $t5, $t5, $t2
    ctx->pc = 0x394b7cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | GPR_U64(ctx, 10));
    // 0x394b80: 0x2c8e0010  sltiu       $t6, $a0, 0x10
    ctx->pc = 0x394b80u;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x394b84: 0xfe4d0000  sd          $t5, 0x0($s2)
    ctx->pc = 0x394b84u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 13));
    // 0x394b88: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x394b88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x394b8c: 0xfe490008  sd          $t1, 0x8($s2)
    ctx->pc = 0x394b8cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 9));
    // 0x394b90: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x394b90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x394b94: 0xfe480010  sd          $t0, 0x10($s2)
    ctx->pc = 0x394b94u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 16), GPR_U64(ctx, 8));
    // 0x394b98: 0xfe470018  sd          $a3, 0x18($s2)
    ctx->pc = 0x394b98u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 24), GPR_U64(ctx, 7));
    // 0x394b9c: 0x8fad014c  lw          $t5, 0x14C($sp)
    ctx->pc = 0x394b9cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
    // 0x394ba0: 0x26520020  addiu       $s2, $s2, 0x20
    ctx->pc = 0x394ba0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x394ba4: 0x95b10020  lhu         $s1, 0x20($t5)
    ctx->pc = 0x394ba4u;
    SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 32)));
    // 0x394ba8: 0x95ad0022  lhu         $t5, 0x22($t5)
    ctx->pc = 0x394ba8u;
    SET_GPR_ZE32(ctx, 13, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 34)));
    // 0x394bac: 0xd6c38  dsll        $t5, $t5, 16
    ctx->pc = 0x394bacu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) << 16);
    // 0x394bb0: 0x22d6825  or          $t5, $s1, $t5
    ctx->pc = 0x394bb0u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 17) | GPR_U64(ctx, 13));
    // 0x394bb4: 0x1a66825  or          $t5, $t5, $a2
    ctx->pc = 0x394bb4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | GPR_U64(ctx, 6));
    // 0x394bb8: 0xfe4d0000  sd          $t5, 0x0($s2)
    ctx->pc = 0x394bb8u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 13));
    // 0x394bbc: 0xfe450008  sd          $a1, 0x8($s2)
    ctx->pc = 0x394bbcu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 5));
    // 0x394bc0: 0xfe4c0010  sd          $t4, 0x10($s2)
    ctx->pc = 0x394bc0u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 16), GPR_U64(ctx, 12));
    // 0x394bc4: 0xfe470018  sd          $a3, 0x18($s2)
    ctx->pc = 0x394bc4u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 24), GPR_U64(ctx, 7));
    // 0x394bc8: 0x8fad014c  lw          $t5, 0x14C($sp)
    ctx->pc = 0x394bc8u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
    // 0x394bcc: 0x26520020  addiu       $s2, $s2, 0x20
    ctx->pc = 0x394bccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x394bd0: 0x95b10020  lhu         $s1, 0x20($t5)
    ctx->pc = 0x394bd0u;
    SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 32)));
    // 0x394bd4: 0x95ad0022  lhu         $t5, 0x22($t5)
    ctx->pc = 0x394bd4u;
    SET_GPR_ZE32(ctx, 13, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 34)));
    // 0x394bd8: 0x22f8821  addu        $s1, $s1, $t7
    ctx->pc = 0x394bd8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 15)));
    // 0x394bdc: 0x11883c  dsll32      $s1, $s1, 0
    ctx->pc = 0x394bdcu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << (32 + 0));
    // 0x394be0: 0x11883f  dsra32      $s1, $s1, 0
    ctx->pc = 0x394be0u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 0));
    // 0x394be4: 0x1ab6821  addu        $t5, $t5, $t3
    ctx->pc = 0x394be4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 11)));
    // 0x394be8: 0xd683c  dsll32      $t5, $t5, 0
    ctx->pc = 0x394be8u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) << (32 + 0));
    // 0x394bec: 0xd683f  dsra32      $t5, $t5, 0
    ctx->pc = 0x394becu;
    SET_GPR_S64(ctx, 13, GPR_S64(ctx, 13) >> (32 + 0));
    // 0x394bf0: 0xd6c38  dsll        $t5, $t5, 16
    ctx->pc = 0x394bf0u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) << 16);
    // 0x394bf4: 0x22d6825  or          $t5, $s1, $t5
    ctx->pc = 0x394bf4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 17) | GPR_U64(ctx, 13));
    // 0x394bf8: 0x1a66825  or          $t5, $t5, $a2
    ctx->pc = 0x394bf8u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | GPR_U64(ctx, 6));
    // 0x394bfc: 0xfe4d0000  sd          $t5, 0x0($s2)
    ctx->pc = 0x394bfcu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 13));
    // 0x394c00: 0xfe500008  sd          $s0, 0x8($s2)
    ctx->pc = 0x394c00u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 16));
    // 0x394c04: 0x15c0ffd6  bnez        $t6, . + 4 + (-0x2A << 2)
    ctx->pc = 0x394C04u;
    {
        const bool branch_taken_0x394c04 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x394C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394C04u;
        // 0x394c08: 0x26520010  addiu       $s2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394c04) {
            ctx->pc = 0x394B60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_394b60;
        }
    }
    ctx->pc = 0x394C0Cu;
    // 0x394c0c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x394c0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x394c10: 0x3c023a00  lui         $v0, 0x3A00
    ctx->pc = 0x394c10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14848 << 16));
    // 0x394c14: 0x8c23f014  lw          $v1, -0xFEC($at)
    ctx->pc = 0x394c14u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81F014u));
    // 0x394c18: 0x344e00c0  ori         $t6, $v0, 0xC0
    ctx->pc = 0x394c18u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)192);
    // 0x394c1c: 0x3c0201ff  lui         $v0, 0x1FF
    ctx->pc = 0x394c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)511 << 16));
    // 0x394c20: 0x3c080005  lui         $t0, 0x5
    ctx->pc = 0x394c20u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)5 << 16));
    // 0x394c24: 0x4a3025  or          $a2, $v0, $t2
    ctx->pc = 0x394c24u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x394c28: 0x240f004d  addiu       $t7, $zero, 0x4D
    ctx->pc = 0x394c28u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x394c2c: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x394c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x394c30: 0x240d004f  addiu       $t5, $zero, 0x4F
    ctx->pc = 0x394c30u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x394c34: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x394c34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x394c38: 0x240c0019  addiu       $t4, $zero, 0x19
    ctx->pc = 0x394c38u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x394c3c: 0x350b020b  ori         $t3, $t0, 0x20B
    ctx->pc = 0x394c3cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)523);
    // 0x394c40: 0x24070048  addiu       $a3, $zero, 0x48
    ctx->pc = 0x394c40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x394c44: 0xdc6a0020  ld          $t2, 0x20($v1)
    ctx->pc = 0x394c44u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x394c48: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x394c48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x394c4c: 0x24050043  addiu       $a1, $zero, 0x43
    ctx->pc = 0x394c4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x394c50: 0x2402003b  addiu       $v0, $zero, 0x3B
    ctx->pc = 0x394c50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x394c54: 0xfe4a0000  sd          $t2, 0x0($s2)
    ctx->pc = 0x394c54u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 10));
    // 0x394c58: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x394c58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x394c5c: 0xfe4f0008  sd          $t7, 0x8($s2)
    ctx->pc = 0x394c5cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 15));
    // 0x394c60: 0xfe4e0010  sd          $t6, 0x10($s2)
    ctx->pc = 0x394c60u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 16), GPR_U64(ctx, 14));
    // 0x394c64: 0xfe4d0018  sd          $t5, 0x18($s2)
    ctx->pc = 0x394c64u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 24), GPR_U64(ctx, 13));
    // 0x394c68: 0x8c2af014  lw          $t2, -0xFEC($at)
    ctx->pc = 0x394c68u;
    SET_GPR_S32(ctx, 10, (int32_t)FAST_READ32(0x81F014u));
    // 0x394c6c: 0x26520020  addiu       $s2, $s2, 0x20
    ctx->pc = 0x394c6cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x394c70: 0xdd4a0040  ld          $t2, 0x40($t2)
    ctx->pc = 0x394c70u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 10), 64)));
    // 0x394c74: 0xfe4a0000  sd          $t2, 0x0($s2)
    ctx->pc = 0x394c74u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 10));
    // 0x394c78: 0xfe4c0008  sd          $t4, 0x8($s2)
    ctx->pc = 0x394c78u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 12));
    // 0x394c7c: 0xfe4b0010  sd          $t3, 0x10($s2)
    ctx->pc = 0x394c7cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 16), GPR_U64(ctx, 11));
    // 0x394c80: 0xfe470018  sd          $a3, 0x18($s2)
    ctx->pc = 0x394c80u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 24), GPR_U64(ctx, 7));
    // 0x394c84: 0x26520020  addiu       $s2, $s2, 0x20
    ctx->pc = 0x394c84u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x394c88: 0xfe460000  sd          $a2, 0x0($s2)
    ctx->pc = 0x394c88u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 6));
    // 0x394c8c: 0xfe490008  sd          $t1, 0x8($s2)
    ctx->pc = 0x394c8cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 9));
    // 0x394c90: 0xfe480010  sd          $t0, 0x10($s2)
    ctx->pc = 0x394c90u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 16), GPR_U64(ctx, 8));
    // 0x394c94: 0xfe450018  sd          $a1, 0x18($s2)
    ctx->pc = 0x394c94u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 24), GPR_U64(ctx, 5));
    // 0x394c98: 0x26520020  addiu       $s2, $s2, 0x20
    ctx->pc = 0x394c98u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x394c9c: 0xfe440000  sd          $a0, 0x0($s2)
    ctx->pc = 0x394c9cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 4));
    // 0x394ca0: 0xfe420008  sd          $v0, 0x8($s2)
    ctx->pc = 0x394ca0u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 2));
    // 0x394ca4: 0x8f828b30  lw          $v0, -0x74D0($gp)
    ctx->pc = 0x394ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937392)));
    // 0x394ca8: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x394ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x394cac: 0x42f02  srl         $a1, $a0, 28
    ctx->pc = 0x394cacu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 28));
    // 0x394cb0: 0x42682  srl         $a0, $a0, 26
    ctx->pc = 0x394cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 26));
    // 0x394cb4: 0x30840003  andi        $a0, $a0, 0x3
    ctx->pc = 0x394cb4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x394cb8: 0x10830013  beq         $a0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x394CB8u;
    {
        const bool branch_taken_0x394cb8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x394CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394CB8u;
        // 0x394cbc: 0x30a5000f  andi        $a1, $a1, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x394cb8) {
            ctx->pc = 0x394D08u;
            goto label_394d08;
        }
    }
    ctx->pc = 0x394CC0u;
    // 0x394cc0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x394cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x394cc4: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x394CC4u;
    {
        const bool branch_taken_0x394cc4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x394cc4) {
            ctx->pc = 0x394CE0u;
            goto label_394ce0;
        }
    }
    ctx->pc = 0x394CCCu;
    // 0x394ccc: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x394CCCu;
    {
        const bool branch_taken_0x394ccc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x394ccc) {
            ctx->pc = 0x394CE0u;
            goto label_394ce0;
        }
    }
    ctx->pc = 0x394CD4u;
    // 0x394cd4: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x394CD4u;
    {
        const bool branch_taken_0x394cd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x394cd4) {
            ctx->pc = 0x394D40u;
            goto label_394d40;
        }
    }
    ctx->pc = 0x394CDCu;
    // 0x394cdc: 0x0  nop
    ctx->pc = 0x394cdcu;
    // NOP
label_394ce0:
    // 0x394ce0: 0x26430010  addiu       $v1, $s2, 0x10
    ctx->pc = 0x394ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x394ce4: 0x622023  subu        $a0, $v1, $v0
    ctx->pc = 0x394ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x394ce8: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x394CE8u;
    {
        const bool branch_taken_0x394ce8 = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x394CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394CE8u;
        // 0x394cec: 0x41903  sra         $v1, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394ce8) {
            ctx->pc = 0x394CF8u;
            goto label_394cf8;
        }
    }
    ctx->pc = 0x394CF0u;
    // 0x394cf0: 0x2483000f  addiu       $v1, $a0, 0xF
    ctx->pc = 0x394cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x394cf4: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x394cf4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
label_394cf8:
    // 0x394cf8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x394cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x394cfc: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x394CFCu;
    {
        const bool branch_taken_0x394cfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x394D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394CFCu;
        // 0x394d00: 0xa7a30100  sh          $v1, 0x100($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 256), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394cfc) {
            ctx->pc = 0x394D40u;
            goto label_394d40;
        }
    }
    ctx->pc = 0x394D04u;
    // 0x394d04: 0x0  nop
    ctx->pc = 0x394d04u;
    // NOP
label_394d08:
    // 0x394d08: 0x26430010  addiu       $v1, $s2, 0x10
    ctx->pc = 0x394d08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x394d0c: 0x622023  subu        $a0, $v1, $v0
    ctx->pc = 0x394d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x394d10: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x394D10u;
    {
        const bool branch_taken_0x394d10 = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x394D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394D10u;
        // 0x394d14: 0x41903  sra         $v1, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394d10) {
            ctx->pc = 0x394D20u;
            goto label_394d20;
        }
    }
    ctx->pc = 0x394D18u;
    // 0x394d18: 0x2483000f  addiu       $v1, $a0, 0xF
    ctx->pc = 0x394d18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x394d1c: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x394d1cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
label_394d20:
    // 0x394d20: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x394d20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x394d24: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x394d24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x394d28: 0x65001b  divu        $zero, $v1, $a1
    ctx->pc = 0x394d28u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x394d2c: 0x0  nop
    ctx->pc = 0x394d2cu;
    // NOP
    // 0x394d30: 0x0  nop
    ctx->pc = 0x394d30u;
    // NOP
    // 0x394d34: 0x1812  mflo        $v1
    ctx->pc = 0x394d34u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x394d38: 0xa7a30100  sh          $v1, 0x100($sp)
    ctx->pc = 0x394d38u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 256), (uint16_t)GPR_U32(ctx, 3));
    // 0x394d3c: 0x0  nop
    ctx->pc = 0x394d3cu;
    // NOP
label_394d40:
    // 0x394d40: 0x97a30100  lhu         $v1, 0x100($sp)
    ctx->pc = 0x394d40u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x394d44: 0x60182d  daddu       $v1, $v1, $zero
    ctx->pc = 0x394d44u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x394d48: 0x34648000  ori         $a0, $v1, 0x8000
    ctx->pc = 0x394d48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x394d4c: 0xa4440000  sh          $a0, 0x0($v0)
    ctx->pc = 0x394d4cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x394d50: 0x26430010  addiu       $v1, $s2, 0x10
    ctx->pc = 0x394d50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x394d54: 0x8f848b2c  lw          $a0, -0x74D4($gp)
    ctx->pc = 0x394d54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937388)));
    // 0x394d58: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x394d58u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x394d5c: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x394D5Cu;
    {
        const bool branch_taken_0x394d5c = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x394D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394D5Cu;
        // 0x394d60: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394d5c) {
            ctx->pc = 0x394D6Cu;
            goto label_394d6c;
        }
    }
    ctx->pc = 0x394D64u;
    // 0x394d64: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x394d64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x394d68: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x394d68u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_394d6c:
    // 0x394d6c: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x394d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x394d70: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x394d70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x394d74: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x394d74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x394d78: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x394d78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x394d7c: 0x26420010  addiu       $v0, $s2, 0x10
    ctx->pc = 0x394d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x394d80: 0x8f848b28  lw          $a0, -0x74D8($gp)
    ctx->pc = 0x394d80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937384)));
    // 0x394d84: 0x441823  subu        $v1, $v0, $a0
    ctx->pc = 0x394d84u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x394d88: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x394D88u;
    {
        const bool branch_taken_0x394d88 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x394D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394D88u;
        // 0x394d8c: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394d88) {
            ctx->pc = 0x394D98u;
            goto label_394d98;
        }
    }
    ctx->pc = 0x394D90u;
    // 0x394d90: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x394d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x394d94: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x394d94u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_394d98:
    // 0x394d98: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x394d98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x394d9c: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x394d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x394da0: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x394da0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x394da4: 0xae430010  sw          $v1, 0x10($s2)
    ctx->pc = 0x394da4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 3));
    // 0x394da8: 0x26420010  addiu       $v0, $s2, 0x10
    ctx->pc = 0x394da8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x394dac: 0xae400014  sw          $zero, 0x14($s2)
    ctx->pc = 0x394dacu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 0));
    // 0x394db0: 0xae400018  sw          $zero, 0x18($s2)
    ctx->pc = 0x394db0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 0));
    // 0x394db4: 0xae40001c  sw          $zero, 0x1C($s2)
    ctx->pc = 0x394db4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 0));
    // 0x394db8: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x394DB8u;
    {
        const bool branch_taken_0x394db8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x394DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394DB8u;
        // 0x394dbc: 0xaf828b28  sw          $v0, -0x74D8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937384), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394db8) {
            ctx->pc = 0x394EE8u;
            goto label_394ee8;
        }
    }
    ctx->pc = 0x394DC0u;
label_394dc0:
    // 0x394dc0: 0x32c200ff  andi        $v0, $s6, 0xFF
    ctx->pc = 0x394dc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
    // 0x394dc4: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x394dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
    // 0x394dc8: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x394dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x394dcc: 0x2082b  sltu        $at, $zero, $v0
    ctx->pc = 0x394dccu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x394dd0: 0x1020feef  beqz        $at, . + 4 + (-0x111 << 2)
    ctx->pc = 0x394DD0u;
    {
        const bool branch_taken_0x394dd0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x394DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394DD0u;
        // 0x394dd4: 0x24460005  addiu       $a2, $v0, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394dd0) {
            ctx->pc = 0x394990u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_394990;
        }
    }
    ctx->pc = 0x394DD8u;
    // 0x394dd8: 0x45143  sra         $t2, $a0, 5
    ctx->pc = 0x394dd8u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 4), 5));
    // 0x394ddc: 0x3c022aaa  lui         $v0, 0x2AAA
    ctx->pc = 0x394ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10922 << 16));
    // 0x394de0: 0x3445aaab  ori         $a1, $v0, 0xAAAB
    ctx->pc = 0x394de0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43691);
    // 0x394de4: 0xa60018  mult        $zero, $a1, $a2
    ctx->pc = 0x394de4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x394de8: 0x617c2  srl         $v0, $a2, 31
    ctx->pc = 0x394de8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x394dec: 0x2465ffff  addiu       $a1, $v1, -0x1
    ctx->pc = 0x394decu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x394df0: 0x5383c  dsll32      $a3, $a1, 0
    ctx->pc = 0x394df0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) << (32 + 0));
    // 0x394df4: 0x2485ffff  addiu       $a1, $a0, -0x1
    ctx->pc = 0x394df4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x394df8: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x394df8u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
    // 0x394dfc: 0x5303c  dsll32      $a2, $a1, 0
    ctx->pc = 0x394dfcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << (32 + 0));
    // 0x394e00: 0x76c3c  dsll32      $t5, $a3, 16
    ctx->pc = 0x394e00u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 7) << (32 + 16));
    // 0x394e04: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x394e04u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x394e08: 0x728bc  dsll32      $a1, $a3, 2
    ctx->pc = 0x394e08u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) << (32 + 2));
    // 0x394e0c: 0x633b8  dsll        $a2, $a2, 14
    ctx->pc = 0x394e0cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 14);
    // 0x394e10: 0x34c7000a  ori         $a3, $a2, 0xA
    ctx->pc = 0x394e10u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)10);
    // 0x394e14: 0xe52825  or          $a1, $a3, $a1
    ctx->pc = 0x394e14u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) | GPR_U64(ctx, 5));
    // 0x394e18: 0x43100  sll         $a2, $a0, 4
    ctx->pc = 0x394e18u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x394e1c: 0xffa500f0  sd          $a1, 0xF0($sp)
    ctx->pc = 0x394e1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 5));
    // 0x394e20: 0x24c50009  addiu       $a1, $a2, 0x9
    ctx->pc = 0x394e20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 9));
    // 0x394e24: 0x5303c  dsll32      $a2, $a1, 0
    ctx->pc = 0x394e24u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << (32 + 0));
    // 0x394e28: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x394e28u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x394e2c: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x394e2cu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x394e30: 0x24630790  addiu       $v1, $v1, 0x790
    ctx->pc = 0x394e30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1936));
    // 0x394e34: 0x24a50009  addiu       $a1, $a1, 0x9
    ctx->pc = 0x394e34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9));
    // 0x394e38: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x394e38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x394e3c: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x394e3cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x394e40: 0x35c38  dsll        $t3, $v1, 16
    ctx->pc = 0x394e40u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 3) << 16);
    // 0x394e44: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x394e44u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x394e48: 0x1810  mfhi        $v1
    ctx->pc = 0x394e48u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x394e4c: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x394e4cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x394e50: 0xc56025  or          $t4, $a2, $a1
    ctx->pc = 0x394e50u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x394e54: 0x62a021  addu        $s4, $v1, $v0
    ctx->pc = 0x394e54u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x394e58: 0x147823  negu        $t7, $s4
    ctx->pc = 0x394e58u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 20)));
    // 0x394e5c: 0x14c040  sll         $t8, $s4, 1
    ctx->pc = 0x394e5cu;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
    // 0x394e60: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x394E60u;
    {
        const bool branch_taken_0x394e60 = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x394E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394E60u;
        // 0x394e64: 0xf7040  sll         $t6, $t7, 1 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 15), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394e60) {
            ctx->pc = 0x394E70u;
            goto label_394e70;
        }
    }
    ctx->pc = 0x394E68u;
    // 0x394e68: 0x2482001f  addiu       $v0, $a0, 0x1F
    ctx->pc = 0x394e68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 31));
    // 0x394e6c: 0x25143  sra         $t2, $v0, 5
    ctx->pc = 0x394e6cu;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 2), 5));
label_394e70:
    // 0x394e70: 0x24830700  addiu       $v1, $a0, 0x700
    ctx->pc = 0x394e70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1792));
    // 0x394e74: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x394e74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x394e78: 0x34570008  ori         $s7, $v0, 0x8
    ctx->pc = 0x394e78u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x394e7c: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x394e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x394e80: 0x24020068  addiu       $v0, $zero, 0x68
    ctx->pc = 0x394e80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
    // 0x394e84: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x394e84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x394e88: 0x442825  or          $a1, $v0, $a0
    ctx->pc = 0x394e88u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x394e8c: 0x241e0003  addiu       $fp, $zero, 0x3
    ctx->pc = 0x394e8cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x394e90: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x394e90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x394e94: 0x3c027900  lui         $v0, 0x7900
    ctx->pc = 0x394e94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30976 << 16));
    // 0x394e98: 0x4303c  dsll32      $a2, $a0, 0
    ctx->pc = 0x394e98u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << (32 + 0));
    // 0x394e9c: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x394e9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x394ea0: 0x70022389  pcpyld      $a0, $zero, $v0
    ctx->pc = 0x394ea0u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x394ea4: 0x7006b389  pcpyld      $s6, $zero, $a2
    ctx->pc = 0x394ea4u;
    SET_GPR_VEC(ctx, 22, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 6)));
    // 0x394ea8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x394ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x394eac: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x394eacu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    // 0x394eb0: 0x3c023a00  lui         $v0, 0x3A00
    ctx->pc = 0x394eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14848 << 16));
    // 0x394eb4: 0x344200c0  ori         $v0, $v0, 0xC0
    ctx->pc = 0x394eb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)192);
    // 0x394eb8: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x394eb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x394ebc: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x394ebcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
    // 0x394ec0: 0x24027900  addiu       $v0, $zero, 0x7900
    ctx->pc = 0x394ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30976));
    // 0x394ec4: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x394ec4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    // 0x394ec8: 0x24027000  addiu       $v0, $zero, 0x7000
    ctx->pc = 0x394ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28672));
    // 0x394ecc: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x394eccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x394ed0: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x394ed0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    // 0x394ed4: 0x34028042  ori         $v0, $zero, 0x8042
    ctx->pc = 0x394ed4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32834);
    // 0x394ed8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x394ed8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x394edc: 0x34424242  ori         $v0, $v0, 0x4242
    ctx->pc = 0x394edcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16962);
    // 0x394ee0: 0x1000fea5  b           . + 4 + (-0x15B << 2)
    ctx->pc = 0x394EE0u;
    {
        const bool branch_taken_0x394ee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x394EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394EE0u;
        // 0x394ee4: 0x7fa200a0  sq          $v0, 0xA0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394ee0) {
            ctx->pc = 0x394978u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_394978;
        }
    }
    ctx->pc = 0x394EE8u;
label_394ee8:
    // 0x394ee8: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x394ee8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x394eec: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x394eecu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x394ef0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x394ef0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x394ef4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x394ef4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x394ef8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x394ef8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x394efc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x394efcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x394f00: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x394f00u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x394f04: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x394f04u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x394f08: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x394f08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x394f0c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x394f0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x394f10: 0x3e00008  jr          $ra
    ctx->pc = 0x394F10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x394F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394F10u;
        // 0x394f14: 0x27bd01a0  addiu       $sp, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x394F10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x394F18u;
}
