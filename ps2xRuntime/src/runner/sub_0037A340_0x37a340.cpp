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

// Function: sub_0037A340
// Address: 0x37a340 - 0x37a9d0
void sub_0037A340_0x37a340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037A340_0x37a340");
#endif

    switch (ctx->pc) {
        case 0x37a360u: goto label_37a360;
        case 0x37a388u: goto label_37a388;
        case 0x37a3f0u: goto label_37a3f0;
        case 0x37a408u: goto label_37a408;
        case 0x37a420u: goto label_37a420;
        case 0x37a438u: goto label_37a438;
        case 0x37a440u: goto label_37a440;
        case 0x37a460u: goto label_37a460;
        case 0x37a46cu: goto label_37a46c;
        case 0x37a4f0u: goto label_37a4f0;
        case 0x37a4f8u: goto label_37a4f8;
        case 0x37a510u: goto label_37a510;
        case 0x37a518u: goto label_37a518;
        case 0x37a568u: goto label_37a568;
        case 0x37a574u: goto label_37a574;
        case 0x37a600u: goto label_37a600;
        case 0x37a608u: goto label_37a608;
        case 0x37a620u: goto label_37a620;
        case 0x37a628u: goto label_37a628;
        case 0x37a638u: goto label_37a638;
        case 0x37a644u: goto label_37a644;
        case 0x37a6d0u: goto label_37a6d0;
        case 0x37a6e8u: goto label_37a6e8;
        case 0x37a700u: goto label_37a700;
        case 0x37a718u: goto label_37a718;
        case 0x37a758u: goto label_37a758;
        case 0x37a764u: goto label_37a764;
        case 0x37a828u: goto label_37a828;
        case 0x37a840u: goto label_37a840;
        case 0x37a848u: goto label_37a848;
        case 0x37a888u: goto label_37a888;
        case 0x37a8a0u: goto label_37a8a0;
        case 0x37a8b0u: goto label_37a8b0;
        case 0x37a8bcu: goto label_37a8bc;
        case 0x37a950u: goto label_37a950;
        case 0x37a968u: goto label_37a968;
        case 0x37a970u: goto label_37a970;
        case 0x37a9b0u: goto label_37a9b0;
        default: break;
    }

    ctx->pc = 0x37a340u;

    // 0x37a340: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x37a340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x37a344: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x37a344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x37a348: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x37a348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x37a34c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x37a34cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x37a350: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x37a350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x37a354: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x37a354u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a358: 0x64100001  daddiu      $s0, $zero, 0x1
    ctx->pc = 0x37a358u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x37a35c: 0x0  nop
    ctx->pc = 0x37a35cu;
    // NOP
label_37a360:
    // 0x37a360: 0x92232b8e  lbu         $v1, 0x2B8E($s1)
    ctx->pc = 0x37a360u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 11150)));
    // 0x37a364: 0x2c610017  sltiu       $at, $v1, 0x17
    ctx->pc = 0x37a364u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)23) ? 1 : 0);
    // 0x37a368: 0x10200191  beqz        $at, . + 4 + (0x191 << 2)
    ctx->pc = 0x37A368u;
    {
        const bool branch_taken_0x37a368 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x37A36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A368u;
        // 0x37a36c: 0x3c040068  lui         $a0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a368) {
            ctx->pc = 0x37A9B0u;
            goto label_37a9b0;
        }
    }
    ctx->pc = 0x37A370u;
    // 0x37a370: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x37a370u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x37a374: 0x24841cd0  addiu       $a0, $a0, 0x1CD0
    ctx->pc = 0x37a374u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7376));
    // 0x37a378: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x37a378u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x37a37c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x37a37cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x37a380: 0x600008  jr          $v1
    ctx->pc = 0x37A380u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x37A388u: goto label_37a388;
            case 0x37A3F0u: goto label_37a3f0;
            case 0x37A408u: goto label_37a408;
            case 0x37A420u: goto label_37a420;
            case 0x37A438u: goto label_37a438;
            case 0x37A4F0u: goto label_37a4f0;
            case 0x37A4F8u: goto label_37a4f8;
            case 0x37A510u: goto label_37a510;
            case 0x37A518u: goto label_37a518;
            case 0x37A600u: goto label_37a600;
            case 0x37A608u: goto label_37a608;
            case 0x37A620u: goto label_37a620;
            case 0x37A628u: goto label_37a628;
            case 0x37A6D0u: goto label_37a6d0;
            case 0x37A6E8u: goto label_37a6e8;
            case 0x37A700u: goto label_37a700;
            case 0x37A718u: goto label_37a718;
            case 0x37A828u: goto label_37a828;
            case 0x37A840u: goto label_37a840;
            case 0x37A888u: goto label_37a888;
            case 0x37A8A0u: goto label_37a8a0;
            case 0x37A950u: goto label_37a950;
            case 0x37A968u: goto label_37a968;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37A380u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x37A388u;
label_37a388:
    // 0x37a388: 0x3c034396  lui         $v1, 0x4396
    ctx->pc = 0x37a388u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17302 << 16));
    // 0x37a38c: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x37a38cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x37a390: 0x3c043c88  lui         $a0, 0x3C88
    ctx->pc = 0x37a390u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15496 << 16));
    // 0x37a394: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x37a394u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x37a398: 0x34848889  ori         $a0, $a0, 0x8889
    ctx->pc = 0x37a398u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)34953);
    // 0x37a39c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x37a39cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x37a3a0: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x37a3a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x37a3a4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x37a3a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37a3a8: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x37a3a8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x37a3ac: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x37a3acu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x37a3b0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x37a3b0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x37a3b4: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x37A3B4u;
    {
        const bool branch_taken_0x37a3b4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x37a3b4) {
            ctx->pc = 0x37A3CCu;
            goto label_37a3cc;
        }
    }
    ctx->pc = 0x37A3BCu;
    // 0x37a3bc: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x37a3bcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x37a3c0: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x37a3c0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x37a3c4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x37A3C4u;
    {
        const bool branch_taken_0x37a3c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37A3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A3C4u;
        // 0x37a3c8: 0xa6242b90  sh          $a0, 0x2B90($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 11152), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a3c4) {
            ctx->pc = 0x37A3E8u;
            goto label_37a3e8;
        }
    }
    ctx->pc = 0x37A3CCu;
label_37a3cc:
    // 0x37a3cc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x37a3ccu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x37a3d0: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x37a3d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x37a3d4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x37a3d4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x37a3d8: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x37a3d8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x37a3dc: 0x0  nop
    ctx->pc = 0x37a3dcu;
    // NOP
    // 0x37a3e0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x37a3e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x37a3e4: 0xa6242b90  sh          $a0, 0x2B90($s1)
    ctx->pc = 0x37a3e4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 11152), (uint16_t)GPR_U32(ctx, 4));
label_37a3e8:
    // 0x37a3e8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x37a3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37a3ec: 0xa2232b8e  sb          $v1, 0x2B8E($s1)
    ctx->pc = 0x37a3ecu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11150), (uint8_t)GPR_U32(ctx, 3));
label_37a3f0:
    // 0x37a3f0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x37a3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x37a3f4: 0xa2232b8e  sb          $v1, 0x2B8E($s1)
    ctx->pc = 0x37a3f4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11150), (uint8_t)GPR_U32(ctx, 3));
    // 0x37a3f8: 0x3c03469c  lui         $v1, 0x469C
    ctx->pc = 0x37a3f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18076 << 16));
    // 0x37a3fc: 0x34633e00  ori         $v1, $v1, 0x3E00
    ctx->pc = 0x37a3fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)15872);
    // 0x37a400: 0xae230020  sw          $v1, 0x20($s1)
    ctx->pc = 0x37a400u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 3));
    // 0x37a404: 0x0  nop
    ctx->pc = 0x37a404u;
    // NOP
label_37a408:
    // 0x37a408: 0x24030042  addiu       $v1, $zero, 0x42
    ctx->pc = 0x37a408u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x37a40c: 0xa2230780  sb          $v1, 0x780($s1)
    ctx->pc = 0x37a40cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1920), (uint8_t)GPR_U32(ctx, 3));
    // 0x37a410: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x37a410u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a414: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x37a414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x37a418: 0x10000165  b           . + 4 + (0x165 << 2)
    ctx->pc = 0x37A418u;
    {
        const bool branch_taken_0x37a418 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37A41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A418u;
        // 0x37a41c: 0xa2232b8e  sb          $v1, 0x2B8E($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 11150), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a418) {
            ctx->pc = 0x37A9B0u;
            goto label_37a9b0;
        }
    }
    ctx->pc = 0x37A420u;
label_37a420:
    // 0x37a420: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x37a420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x37a424: 0xa2222b8e  sb          $v0, 0x2B8E($s1)
    ctx->pc = 0x37a424u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11150), (uint8_t)GPR_U32(ctx, 2));
    // 0x37a428: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x37a428u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x37a42c: 0x34423e00  ori         $v0, $v0, 0x3E00
    ctx->pc = 0x37a42cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)15872);
    // 0x37a430: 0xae220020  sw          $v0, 0x20($s1)
    ctx->pc = 0x37a430u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
    // 0x37a434: 0x0  nop
    ctx->pc = 0x37a434u;
    // NOP
label_37a438:
    // 0x37a438: 0xc0de2bc  jal         func_378AF0
    ctx->pc = 0x37A438u;
    SET_GPR_U32(ctx, 31, 0x37A440u);
    ctx->pc = 0x37A43Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37A438u;
    // 0x37a43c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x378AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378AF0u, 0x37A438u, 0x37A440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A440u;
label_37a440:
    // 0x37a440: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x37A440u;
    {
        const bool branch_taken_0x37a440 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37A444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A440u;
        // 0x37a444: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a440) {
            ctx->pc = 0x37A450u;
            goto label_37a450;
        }
    }
    ctx->pc = 0x37A448u;
    // 0x37a448: 0x10000159  b           . + 4 + (0x159 << 2)
    ctx->pc = 0x37A448u;
    {
        const bool branch_taken_0x37a448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37A44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A448u;
        // 0x37a44c: 0xa2232b8e  sb          $v1, 0x2B8E($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 11150), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a448) {
            ctx->pc = 0x37A9B0u;
            goto label_37a9b0;
        }
    }
    ctx->pc = 0x37A450u;
label_37a450:
    // 0x37a450: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x37a450u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x37a454: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x37a454u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x37a458: 0xc0de2f0  jal         func_378BC0
    ctx->pc = 0x37A458u;
    SET_GPR_U32(ctx, 31, 0x37A460u);
    ctx->pc = 0x37A45Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37A458u;
    // 0x37a45c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x378BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378BC0u, 0x37A458u, 0x37A460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A460u;
label_37a460:
    // 0x37a460: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x37a460u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x37a464: 0xc0de308  jal         func_378C20
    ctx->pc = 0x37A464u;
    SET_GPR_U32(ctx, 31, 0x37A46Cu);
    ctx->pc = 0x37A468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37A464u;
    // 0x37a468: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x378C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378C20u, 0x37A464u, 0x37A46Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A46Cu;
label_37a46c:
    // 0x37a46c: 0x324300ff  andi        $v1, $s2, 0xFF
    ctx->pc = 0x37a46cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x37a470: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x37A470u;
    {
        const bool branch_taken_0x37a470 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x37A474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A470u;
        // 0x37a474: 0x304500ff  andi        $a1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a470) {
            ctx->pc = 0x37A4D0u;
            goto label_37a4d0;
        }
    }
    ctx->pc = 0x37A478u;
    // 0x37a478: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x37a478u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37a47c: 0x10640004  beq         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x37A47Cu;
    {
        const bool branch_taken_0x37a47c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x37a47c) {
            ctx->pc = 0x37A490u;
            goto label_37a490;
        }
    }
    ctx->pc = 0x37A484u;
    // 0x37a484: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x37A484u;
    {
        const bool branch_taken_0x37a484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37a484) {
            ctx->pc = 0x37A4D0u;
            goto label_37a4d0;
        }
    }
    ctx->pc = 0x37A48Cu;
    // 0x37a48c: 0x0  nop
    ctx->pc = 0x37a48cu;
    // NOP
label_37a490:
    // 0x37a490: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x37a490u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x37a494: 0x1064000a  beq         $v1, $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x37A494u;
    {
        const bool branch_taken_0x37a494 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x37a494) {
            ctx->pc = 0x37A4C0u;
            goto label_37a4c0;
        }
    }
    ctx->pc = 0x37A49Cu;
    // 0x37a49c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x37A49Cu;
    {
        const bool branch_taken_0x37a49c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x37a49c) {
            ctx->pc = 0x37A4B0u;
            goto label_37a4b0;
        }
    }
    ctx->pc = 0x37A4A4u;
    // 0x37a4a4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x37A4A4u;
    {
        const bool branch_taken_0x37a4a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37a4a4) {
            ctx->pc = 0x37A4D0u;
            goto label_37a4d0;
        }
    }
    ctx->pc = 0x37A4ACu;
    // 0x37a4ac: 0x0  nop
    ctx->pc = 0x37a4acu;
    // NOP
label_37a4b0:
    // 0x37a4b0: 0x2403004d  addiu       $v1, $zero, 0x4D
    ctx->pc = 0x37a4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x37a4b4: 0xa2230780  sb          $v1, 0x780($s1)
    ctx->pc = 0x37a4b4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1920), (uint8_t)GPR_U32(ctx, 3));
    // 0x37a4b8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x37A4B8u;
    {
        const bool branch_taken_0x37a4b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37A4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A4B8u;
        // 0x37a4bc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a4b8) {
            ctx->pc = 0x37A4D0u;
            goto label_37a4d0;
        }
    }
    ctx->pc = 0x37A4C0u;
label_37a4c0:
    // 0x37a4c0: 0x2403004c  addiu       $v1, $zero, 0x4C
    ctx->pc = 0x37a4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x37a4c4: 0xa2230780  sb          $v1, 0x780($s1)
    ctx->pc = 0x37a4c4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1920), (uint8_t)GPR_U32(ctx, 3));
    // 0x37a4c8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x37a4c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a4cc: 0x0  nop
    ctx->pc = 0x37a4ccu;
    // NOP
label_37a4d0:
    // 0x37a4d0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x37a4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37a4d4: 0xa2232b8e  sb          $v1, 0x2B8E($s1)
    ctx->pc = 0x37a4d4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11150), (uint8_t)GPR_U32(ctx, 3));
    // 0x37a4d8: 0x86232b90  lh          $v1, 0x2B90($s1)
    ctx->pc = 0x37a4d8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 11152)));
    // 0x37a4dc: 0x1c600134  bgtz        $v1, . + 4 + (0x134 << 2)
    ctx->pc = 0x37A4DCu;
    {
        const bool branch_taken_0x37a4dc = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x37A4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A4DCu;
        // 0x37a4e0: 0x2403000d  addiu       $v1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a4dc) {
            ctx->pc = 0x37A9B0u;
            goto label_37a9b0;
        }
    }
    ctx->pc = 0x37A4E4u;
    // 0x37a4e4: 0x10000132  b           . + 4 + (0x132 << 2)
    ctx->pc = 0x37A4E4u;
    {
        const bool branch_taken_0x37a4e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37A4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A4E4u;
        // 0x37a4e8: 0xa2232b8e  sb          $v1, 0x2B8E($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 11150), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a4e4) {
            ctx->pc = 0x37A9B0u;
            goto label_37a9b0;
        }
    }
    ctx->pc = 0x37A4ECu;
    // 0x37a4ec: 0x0  nop
    ctx->pc = 0x37a4ecu;
    // NOP
label_37a4f0:
    // 0x37a4f0: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x37a4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x37a4f4: 0xa2232b8e  sb          $v1, 0x2B8E($s1)
    ctx->pc = 0x37a4f4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11150), (uint8_t)GPR_U32(ctx, 3));
label_37a4f8:
    // 0x37a4f8: 0x24030045  addiu       $v1, $zero, 0x45
    ctx->pc = 0x37a4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x37a4fc: 0xa2230780  sb          $v1, 0x780($s1)
    ctx->pc = 0x37a4fcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1920), (uint8_t)GPR_U32(ctx, 3));
    // 0x37a500: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x37a500u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a504: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x37a504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x37a508: 0x10000129  b           . + 4 + (0x129 << 2)
    ctx->pc = 0x37A508u;
    {
        const bool branch_taken_0x37a508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37A50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A508u;
        // 0x37a50c: 0xa2232b8e  sb          $v1, 0x2B8E($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 11150), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a508) {
            ctx->pc = 0x37A9B0u;
            goto label_37a9b0;
        }
    }
    ctx->pc = 0x37A510u;
label_37a510:
    // 0x37a510: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x37a510u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x37a514: 0xa2232b8e  sb          $v1, 0x2B8E($s1)
    ctx->pc = 0x37a514u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11150), (uint8_t)GPR_U32(ctx, 3));
label_37a518:
    // 0x37a518: 0x8f8480e0  lw          $a0, -0x7F20($gp)
    ctx->pc = 0x37a518u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x37a51c: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x37a51cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x37a520: 0x34630dcd  ori         $v1, $v1, 0xDCD
    ctx->pc = 0x37a520u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3533);
    // 0x37a524: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x37a524u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x37a528: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x37a528u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x37a52c: 0xaf8380e0  sw          $v1, -0x7F20($gp)
    ctx->pc = 0x37a52cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 3));
    // 0x37a530: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x37a530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x37a534: 0x31b02  srl         $v1, $v1, 12
    ctx->pc = 0x37a534u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 12));
    // 0x37a538: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x37a538u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x37a53c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x37A53Cu;
    {
        const bool branch_taken_0x37a53c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x37A540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A53Cu;
        // 0x37a540: 0x24030044  addiu       $v1, $zero, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a53c) {
            ctx->pc = 0x37A558u;
            goto label_37a558;
        }
    }
    ctx->pc = 0x37A544u;
    // 0x37a544: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x37a544u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a548: 0xa2230780  sb          $v1, 0x780($s1)
    ctx->pc = 0x37a548u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1920), (uint8_t)GPR_U32(ctx, 3));
    // 0x37a54c: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x37a54cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x37a550: 0x10000117  b           . + 4 + (0x117 << 2)
    ctx->pc = 0x37A550u;
    {
        const bool branch_taken_0x37a550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37A554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A550u;
        // 0x37a554: 0xa2232b8e  sb          $v1, 0x2B8E($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 11150), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a550) {
            ctx->pc = 0x37A9B0u;
            goto label_37a9b0;
        }
    }
    ctx->pc = 0x37A558u;
label_37a558:
    // 0x37a558: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x37a558u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x37a55c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x37a55cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x37a560: 0xc0de2f0  jal         func_378BC0
    ctx->pc = 0x37A560u;
    SET_GPR_U32(ctx, 31, 0x37A568u);
    ctx->pc = 0x37A564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37A560u;
    // 0x37a564: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x378BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378BC0u, 0x37A560u, 0x37A568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A568u;
label_37a568:
    // 0x37a568: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x37a568u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x37a56c: 0xc0de308  jal         func_378C20
    ctx->pc = 0x37A56Cu;
    SET_GPR_U32(ctx, 31, 0x37A574u);
    ctx->pc = 0x37A570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37A56Cu;
    // 0x37a570: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x378C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378C20u, 0x37A56Cu, 0x37A574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A574u;
label_37a574:
    // 0x37a574: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x37a574u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x37a578: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x37a578u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37a57c: 0x10640012  beq         $v1, $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x37A57Cu;
    {
        const bool branch_taken_0x37a57c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x37a57c) {
            ctx->pc = 0x37A5C8u;
            goto label_37a5c8;
        }
    }
    ctx->pc = 0x37A584u;
    // 0x37a584: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x37A584u;
    {
        const bool branch_taken_0x37a584 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x37a584) {
            ctx->pc = 0x37A598u;
            goto label_37a598;
        }
    }
    ctx->pc = 0x37A58Cu;
    // 0x37a58c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x37A58Cu;
    {
        const bool branch_taken_0x37a58c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37a58c) {
            ctx->pc = 0x37A5F8u;
            goto label_37a5f8;
        }
    }
    ctx->pc = 0x37A594u;
    // 0x37a594: 0x0  nop
    ctx->pc = 0x37a594u;
    // NOP
label_37a598:
    // 0x37a598: 0x324300ff  andi        $v1, $s2, 0xFF
    ctx->pc = 0x37a598u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x37a59c: 0x10640006  beq         $v1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x37A59Cu;
    {
        const bool branch_taken_0x37a59c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x37a59c) {
            ctx->pc = 0x37A5B8u;
            goto label_37a5b8;
        }
    }
    ctx->pc = 0x37A5A4u;
    // 0x37a5a4: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x37A5A4u;
    {
        const bool branch_taken_0x37a5a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x37a5a4) {
            ctx->pc = 0x37A5F8u;
            goto label_37a5f8;
        }
    }
    ctx->pc = 0x37A5ACu;
    // 0x37a5ac: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x37A5ACu;
    {
        const bool branch_taken_0x37a5ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37a5ac) {
            ctx->pc = 0x37A5F8u;
            goto label_37a5f8;
        }
    }
    ctx->pc = 0x37A5B4u;
    // 0x37a5b4: 0x0  nop
    ctx->pc = 0x37a5b4u;
    // NOP
label_37a5b8:
    // 0x37a5b8: 0x2403004d  addiu       $v1, $zero, 0x4D
    ctx->pc = 0x37a5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x37a5bc: 0xa2230780  sb          $v1, 0x780($s1)
    ctx->pc = 0x37a5bcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1920), (uint8_t)GPR_U32(ctx, 3));
    // 0x37a5c0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x37A5C0u;
    {
        const bool branch_taken_0x37a5c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37A5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A5C0u;
        // 0x37a5c4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a5c0) {
            ctx->pc = 0x37A5F8u;
            goto label_37a5f8;
        }
    }
    ctx->pc = 0x37A5C8u;
label_37a5c8:
    // 0x37a5c8: 0x324300ff  andi        $v1, $s2, 0xFF
    ctx->pc = 0x37a5c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x37a5cc: 0x10640006  beq         $v1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x37A5CCu;
    {
        const bool branch_taken_0x37a5cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x37a5cc) {
            ctx->pc = 0x37A5E8u;
            goto label_37a5e8;
        }
    }
    ctx->pc = 0x37A5D4u;
    // 0x37a5d4: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x37A5D4u;
    {
        const bool branch_taken_0x37a5d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x37a5d4) {
            ctx->pc = 0x37A5F8u;
            goto label_37a5f8;
        }
    }
    ctx->pc = 0x37A5DCu;
    // 0x37a5dc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x37A5DCu;
    {
        const bool branch_taken_0x37a5dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37a5dc) {
            ctx->pc = 0x37A5F8u;
            goto label_37a5f8;
        }
    }
    ctx->pc = 0x37A5E4u;
    // 0x37a5e4: 0x0  nop
    ctx->pc = 0x37a5e4u;
    // NOP
label_37a5e8:
    // 0x37a5e8: 0x2403004c  addiu       $v1, $zero, 0x4C
    ctx->pc = 0x37a5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x37a5ec: 0xa2230780  sb          $v1, 0x780($s1)
    ctx->pc = 0x37a5ecu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1920), (uint8_t)GPR_U32(ctx, 3));
    // 0x37a5f0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x37a5f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a5f4: 0x0  nop
    ctx->pc = 0x37a5f4u;
    // NOP
label_37a5f8:
    // 0x37a5f8: 0x100000ed  b           . + 4 + (0xED << 2)
    ctx->pc = 0x37A5F8u;
    {
        const bool branch_taken_0x37a5f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37A5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A5F8u;
        // 0x37a5fc: 0xa2202b8e  sb          $zero, 0x2B8E($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 11150), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a5f8) {
            ctx->pc = 0x37A9B0u;
            goto label_37a9b0;
        }
    }
    ctx->pc = 0x37A600u;
label_37a600:
    // 0x37a600: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x37a600u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x37a604: 0xa2232b8e  sb          $v1, 0x2B8E($s1)
    ctx->pc = 0x37a604u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11150), (uint8_t)GPR_U32(ctx, 3));
label_37a608:
    // 0x37a608: 0x24030045  addiu       $v1, $zero, 0x45
    ctx->pc = 0x37a608u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x37a60c: 0xa2230780  sb          $v1, 0x780($s1)
    ctx->pc = 0x37a60cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1920), (uint8_t)GPR_U32(ctx, 3));
    // 0x37a610: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x37a610u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a614: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x37a614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x37a618: 0x100000e5  b           . + 4 + (0xE5 << 2)
    ctx->pc = 0x37A618u;
    {
        const bool branch_taken_0x37a618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37A61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A618u;
        // 0x37a61c: 0xa2232b8e  sb          $v1, 0x2B8E($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 11150), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a618) {
            ctx->pc = 0x37A9B0u;
            goto label_37a9b0;
        }
    }
    ctx->pc = 0x37A620u;
label_37a620:
    // 0x37a620: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x37a620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x37a624: 0xa2222b8e  sb          $v0, 0x2B8E($s1)
    ctx->pc = 0x37a624u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11150), (uint8_t)GPR_U32(ctx, 2));
label_37a628:
    // 0x37a628: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x37a628u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x37a62c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x37a62cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x37a630: 0xc0de2f0  jal         func_378BC0
    ctx->pc = 0x37A630u;
    SET_GPR_U32(ctx, 31, 0x37A638u);
    ctx->pc = 0x37A634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37A630u;
    // 0x37a634: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x378BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378BC0u, 0x37A630u, 0x37A638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A638u;
label_37a638:
    // 0x37a638: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x37a638u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x37a63c: 0xc0de308  jal         func_378C20
    ctx->pc = 0x37A63Cu;
    SET_GPR_U32(ctx, 31, 0x37A644u);
    ctx->pc = 0x37A640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37A63Cu;
    // 0x37a640: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x378C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378C20u, 0x37A63Cu, 0x37A644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A644u;
label_37a644:
    // 0x37a644: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x37a644u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x37a648: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x37a648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37a64c: 0x10640012  beq         $v1, $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x37A64Cu;
    {
        const bool branch_taken_0x37a64c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x37a64c) {
            ctx->pc = 0x37A698u;
            goto label_37a698;
        }
    }
    ctx->pc = 0x37A654u;
    // 0x37a654: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x37A654u;
    {
        const bool branch_taken_0x37a654 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x37a654) {
            ctx->pc = 0x37A668u;
            goto label_37a668;
        }
    }
    ctx->pc = 0x37A65Cu;
    // 0x37a65c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x37A65Cu;
    {
        const bool branch_taken_0x37a65c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37a65c) {
            ctx->pc = 0x37A6C8u;
            goto label_37a6c8;
        }
    }
    ctx->pc = 0x37A664u;
    // 0x37a664: 0x0  nop
    ctx->pc = 0x37a664u;
    // NOP
label_37a668:
    // 0x37a668: 0x324300ff  andi        $v1, $s2, 0xFF
    ctx->pc = 0x37a668u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x37a66c: 0x10640006  beq         $v1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x37A66Cu;
    {
        const bool branch_taken_0x37a66c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x37a66c) {
            ctx->pc = 0x37A688u;
            goto label_37a688;
        }
    }
    ctx->pc = 0x37A674u;
    // 0x37a674: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x37A674u;
    {
        const bool branch_taken_0x37a674 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x37a674) {
            ctx->pc = 0x37A6C8u;
            goto label_37a6c8;
        }
    }
    ctx->pc = 0x37A67Cu;
    // 0x37a67c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x37A67Cu;
    {
        const bool branch_taken_0x37a67c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37a67c) {
            ctx->pc = 0x37A6C8u;
            goto label_37a6c8;
        }
    }
    ctx->pc = 0x37A684u;
    // 0x37a684: 0x0  nop
    ctx->pc = 0x37a684u;
    // NOP
label_37a688:
    // 0x37a688: 0x2403004d  addiu       $v1, $zero, 0x4D
    ctx->pc = 0x37a688u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x37a68c: 0xa2230780  sb          $v1, 0x780($s1)
    ctx->pc = 0x37a68cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1920), (uint8_t)GPR_U32(ctx, 3));
    // 0x37a690: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x37A690u;
    {
        const bool branch_taken_0x37a690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37A694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A690u;
        // 0x37a694: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a690) {
            ctx->pc = 0x37A6C8u;
            goto label_37a6c8;
        }
    }
    ctx->pc = 0x37A698u;
label_37a698:
    // 0x37a698: 0x324300ff  andi        $v1, $s2, 0xFF
    ctx->pc = 0x37a698u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x37a69c: 0x10640006  beq         $v1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x37A69Cu;
    {
        const bool branch_taken_0x37a69c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x37a69c) {
            ctx->pc = 0x37A6B8u;
            goto label_37a6b8;
        }
    }
    ctx->pc = 0x37A6A4u;
    // 0x37a6a4: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x37A6A4u;
    {
        const bool branch_taken_0x37a6a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x37a6a4) {
            ctx->pc = 0x37A6C8u;
            goto label_37a6c8;
        }
    }
    ctx->pc = 0x37A6ACu;
    // 0x37a6ac: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x37A6ACu;
    {
        const bool branch_taken_0x37a6ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37a6ac) {
            ctx->pc = 0x37A6C8u;
            goto label_37a6c8;
        }
    }
    ctx->pc = 0x37A6B4u;
    // 0x37a6b4: 0x0  nop
    ctx->pc = 0x37a6b4u;
    // NOP
label_37a6b8:
    // 0x37a6b8: 0x2403004c  addiu       $v1, $zero, 0x4C
    ctx->pc = 0x37a6b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x37a6bc: 0xa2230780  sb          $v1, 0x780($s1)
    ctx->pc = 0x37a6bcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1920), (uint8_t)GPR_U32(ctx, 3));
    // 0x37a6c0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x37a6c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a6c4: 0x0  nop
    ctx->pc = 0x37a6c4u;
    // NOP
label_37a6c8:
    // 0x37a6c8: 0x100000b9  b           . + 4 + (0xB9 << 2)
    ctx->pc = 0x37A6C8u;
    {
        const bool branch_taken_0x37a6c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37A6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A6C8u;
        // 0x37a6cc: 0xa2202b8e  sb          $zero, 0x2B8E($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 11150), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a6c8) {
            ctx->pc = 0x37A9B0u;
            goto label_37a9b0;
        }
    }
    ctx->pc = 0x37A6D0u;
label_37a6d0:
    // 0x37a6d0: 0x3c03469c  lui         $v1, 0x469C
    ctx->pc = 0x37a6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18076 << 16));
    // 0x37a6d4: 0x34643e00  ori         $a0, $v1, 0x3E00
    ctx->pc = 0x37a6d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)15872);
    // 0x37a6d8: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x37a6d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x37a6dc: 0xae240020  sw          $a0, 0x20($s1)
    ctx->pc = 0x37a6dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 4));
    // 0x37a6e0: 0xa2232b8e  sb          $v1, 0x2B8E($s1)
    ctx->pc = 0x37a6e0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11150), (uint8_t)GPR_U32(ctx, 3));
    // 0x37a6e4: 0x0  nop
    ctx->pc = 0x37a6e4u;
    // NOP
label_37a6e8:
    // 0x37a6e8: 0x24030041  addiu       $v1, $zero, 0x41
    ctx->pc = 0x37a6e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x37a6ec: 0xa2230780  sb          $v1, 0x780($s1)
    ctx->pc = 0x37a6ecu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1920), (uint8_t)GPR_U32(ctx, 3));
    // 0x37a6f0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x37a6f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a6f4: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x37a6f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x37a6f8: 0x100000ad  b           . + 4 + (0xAD << 2)
    ctx->pc = 0x37A6F8u;
    {
        const bool branch_taken_0x37a6f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37A6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A6F8u;
        // 0x37a6fc: 0xa2232b8e  sb          $v1, 0x2B8E($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 11150), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a6f8) {
            ctx->pc = 0x37A9B0u;
            goto label_37a9b0;
        }
    }
    ctx->pc = 0x37A700u;
label_37a700:
    // 0x37a700: 0x3c03469c  lui         $v1, 0x469C
    ctx->pc = 0x37a700u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18076 << 16));
    // 0x37a704: 0x34643e00  ori         $a0, $v1, 0x3E00
    ctx->pc = 0x37a704u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)15872);
    // 0x37a708: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x37a708u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x37a70c: 0xae240020  sw          $a0, 0x20($s1)
    ctx->pc = 0x37a70cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 4));
    // 0x37a710: 0xa2232b8e  sb          $v1, 0x2B8E($s1)
    ctx->pc = 0x37a710u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11150), (uint8_t)GPR_U32(ctx, 3));
    // 0x37a714: 0x0  nop
    ctx->pc = 0x37a714u;
    // NOP
label_37a718:
    // 0x37a718: 0x92242b92  lbu         $a0, 0x2B92($s1)
    ctx->pc = 0x37a718u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 11154)));
    // 0x37a71c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x37a71cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37a720: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x37A720u;
    {
        const bool branch_taken_0x37a720 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x37a720) {
            ctx->pc = 0x37A748u;
            goto label_37a748;
        }
    }
    ctx->pc = 0x37A728u;
    // 0x37a728: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x37A728u;
    {
        const bool branch_taken_0x37a728 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x37a728) {
            ctx->pc = 0x37A738u;
            goto label_37a738;
        }
    }
    ctx->pc = 0x37A730u;
    // 0x37a730: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x37A730u;
    {
        const bool branch_taken_0x37a730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37a730) {
            ctx->pc = 0x37A818u;
            goto label_37a818;
        }
    }
    ctx->pc = 0x37A738u;
label_37a738:
    // 0x37a738: 0x24030013  addiu       $v1, $zero, 0x13
    ctx->pc = 0x37a738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x37a73c: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x37A73Cu;
    {
        const bool branch_taken_0x37a73c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37A740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A73Cu;
        // 0x37a740: 0xa2232b8e  sb          $v1, 0x2B8E($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 11150), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a73c) {
            ctx->pc = 0x37A818u;
            goto label_37a818;
        }
    }
    ctx->pc = 0x37A744u;
    // 0x37a744: 0x0  nop
    ctx->pc = 0x37a744u;
    // NOP
label_37a748:
    // 0x37a748: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x37a748u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x37a74c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x37a74cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x37a750: 0xc0de2f0  jal         func_378BC0
    ctx->pc = 0x37A750u;
    SET_GPR_U32(ctx, 31, 0x37A758u);
    ctx->pc = 0x37A754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37A750u;
    // 0x37a754: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x378BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378BC0u, 0x37A750u, 0x37A758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A758u;
label_37a758:
    // 0x37a758: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x37a758u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x37a75c: 0xc0de308  jal         func_378C20
    ctx->pc = 0x37A75Cu;
    SET_GPR_U32(ctx, 31, 0x37A764u);
    ctx->pc = 0x37A760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37A75Cu;
    // 0x37a760: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x378C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378C20u, 0x37A75Cu, 0x37A764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A764u;
label_37a764:
    // 0x37a764: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x37a764u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x37a768: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x37a768u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37a76c: 0x10640018  beq         $v1, $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x37A76Cu;
    {
        const bool branch_taken_0x37a76c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x37a76c) {
            ctx->pc = 0x37A7D0u;
            goto label_37a7d0;
        }
    }
    ctx->pc = 0x37A774u;
    // 0x37a774: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x37A774u;
    {
        const bool branch_taken_0x37a774 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x37a774) {
            ctx->pc = 0x37A788u;
            goto label_37a788;
        }
    }
    ctx->pc = 0x37A77Cu;
    // 0x37a77c: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x37A77Cu;
    {
        const bool branch_taken_0x37a77c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37a77c) {
            ctx->pc = 0x37A818u;
            goto label_37a818;
        }
    }
    ctx->pc = 0x37A784u;
    // 0x37a784: 0x0  nop
    ctx->pc = 0x37a784u;
    // NOP
label_37a788:
    // 0x37a788: 0x324300ff  andi        $v1, $s2, 0xFF
    ctx->pc = 0x37a788u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x37a78c: 0x1064000a  beq         $v1, $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x37A78Cu;
    {
        const bool branch_taken_0x37a78c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x37a78c) {
            ctx->pc = 0x37A7B8u;
            goto label_37a7b8;
        }
    }
    ctx->pc = 0x37A794u;
    // 0x37a794: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x37A794u;
    {
        const bool branch_taken_0x37a794 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x37a794) {
            ctx->pc = 0x37A7A8u;
            goto label_37a7a8;
        }
    }
    ctx->pc = 0x37A79Cu;
    // 0x37a79c: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x37A79Cu;
    {
        const bool branch_taken_0x37a79c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37a79c) {
            ctx->pc = 0x37A818u;
            goto label_37a818;
        }
    }
    ctx->pc = 0x37A7A4u;
    // 0x37a7a4: 0x0  nop
    ctx->pc = 0x37a7a4u;
    // NOP
label_37a7a8:
    // 0x37a7a8: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x37a7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x37a7ac: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x37A7ACu;
    {
        const bool branch_taken_0x37a7ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37A7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A7ACu;
        // 0x37a7b0: 0xa2232b8e  sb          $v1, 0x2B8E($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 11150), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a7ac) {
            ctx->pc = 0x37A818u;
            goto label_37a818;
        }
    }
    ctx->pc = 0x37A7B4u;
    // 0x37a7b4: 0x0  nop
    ctx->pc = 0x37a7b4u;
    // NOP
label_37a7b8:
    // 0x37a7b8: 0x2403004d  addiu       $v1, $zero, 0x4D
    ctx->pc = 0x37a7b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x37a7bc: 0xa2230780  sb          $v1, 0x780($s1)
    ctx->pc = 0x37a7bcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1920), (uint8_t)GPR_U32(ctx, 3));
    // 0x37a7c0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x37a7c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a7c4: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x37a7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x37a7c8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x37A7C8u;
    {
        const bool branch_taken_0x37a7c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37A7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A7C8u;
        // 0x37a7cc: 0xa2232b8e  sb          $v1, 0x2B8E($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 11150), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a7c8) {
            ctx->pc = 0x37A818u;
            goto label_37a818;
        }
    }
    ctx->pc = 0x37A7D0u;
label_37a7d0:
    // 0x37a7d0: 0x324300ff  andi        $v1, $s2, 0xFF
    ctx->pc = 0x37a7d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x37a7d4: 0x1064000a  beq         $v1, $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x37A7D4u;
    {
        const bool branch_taken_0x37a7d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x37a7d4) {
            ctx->pc = 0x37A800u;
            goto label_37a800;
        }
    }
    ctx->pc = 0x37A7DCu;
    // 0x37a7dc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x37A7DCu;
    {
        const bool branch_taken_0x37a7dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x37a7dc) {
            ctx->pc = 0x37A7F0u;
            goto label_37a7f0;
        }
    }
    ctx->pc = 0x37A7E4u;
    // 0x37a7e4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x37A7E4u;
    {
        const bool branch_taken_0x37a7e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37a7e4) {
            ctx->pc = 0x37A818u;
            goto label_37a818;
        }
    }
    ctx->pc = 0x37A7ECu;
    // 0x37a7ec: 0x0  nop
    ctx->pc = 0x37a7ecu;
    // NOP
label_37a7f0:
    // 0x37a7f0: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x37a7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x37a7f4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x37A7F4u;
    {
        const bool branch_taken_0x37a7f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37A7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A7F4u;
        // 0x37a7f8: 0xa2232b8e  sb          $v1, 0x2B8E($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 11150), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a7f4) {
            ctx->pc = 0x37A818u;
            goto label_37a818;
        }
    }
    ctx->pc = 0x37A7FCu;
    // 0x37a7fc: 0x0  nop
    ctx->pc = 0x37a7fcu;
    // NOP
label_37a800:
    // 0x37a800: 0x2403004c  addiu       $v1, $zero, 0x4C
    ctx->pc = 0x37a800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x37a804: 0xa2230780  sb          $v1, 0x780($s1)
    ctx->pc = 0x37a804u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1920), (uint8_t)GPR_U32(ctx, 3));
    // 0x37a808: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x37a808u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a80c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x37a80cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x37a810: 0xa2232b8e  sb          $v1, 0x2B8E($s1)
    ctx->pc = 0x37a810u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11150), (uint8_t)GPR_U32(ctx, 3));
    // 0x37a814: 0x0  nop
    ctx->pc = 0x37a814u;
    // NOP
label_37a818:
    // 0x37a818: 0x92232b92  lbu         $v1, 0x2B92($s1)
    ctx->pc = 0x37a818u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 11154)));
    // 0x37a81c: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x37a81cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x37a820: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x37A820u;
    {
        const bool branch_taken_0x37a820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37A824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A820u;
        // 0x37a824: 0xa2232b92  sb          $v1, 0x2B92($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 11154), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a820) {
            ctx->pc = 0x37A9B0u;
            goto label_37a9b0;
        }
    }
    ctx->pc = 0x37A828u;
label_37a828:
    // 0x37a828: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x37a828u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x37a82c: 0x34433e00  ori         $v1, $v0, 0x3E00
    ctx->pc = 0x37a82cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)15872);
    // 0x37a830: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x37a830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x37a834: 0xae230020  sw          $v1, 0x20($s1)
    ctx->pc = 0x37a834u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 3));
    // 0x37a838: 0xa2222b8e  sb          $v0, 0x2B8E($s1)
    ctx->pc = 0x37a838u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11150), (uint8_t)GPR_U32(ctx, 2));
    // 0x37a83c: 0x0  nop
    ctx->pc = 0x37a83cu;
    // NOP
label_37a840:
    // 0x37a840: 0xc0de32c  jal         func_378CB0
    ctx->pc = 0x37A840u;
    SET_GPR_U32(ctx, 31, 0x37A848u);
    ctx->pc = 0x37A844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37A840u;
    // 0x37a844: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x378CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378CB0u, 0x37A840u, 0x37A848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A848u;
label_37a848:
    // 0x37a848: 0x3c034205  lui         $v1, 0x4205
    ctx->pc = 0x37a848u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16901 << 16));
    // 0x37a84c: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x37a84cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x37a850: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x37a850u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x37a854: 0x0  nop
    ctx->pc = 0x37a854u;
    // NOP
    // 0x37a858: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x37a858u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x37a85c: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x37A85Cu;
    {
        const bool branch_taken_0x37a85c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x37A860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A85Cu;
        // 0x37a860: 0x24030046  addiu       $v1, $zero, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a85c) {
            ctx->pc = 0x37A870u;
            goto label_37a870;
        }
    }
    ctx->pc = 0x37A864u;
    // 0x37a864: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x37a864u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a868: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x37A868u;
    {
        const bool branch_taken_0x37a868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37A86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A868u;
        // 0x37a86c: 0xa2230780  sb          $v1, 0x780($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1920), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a868) {
            ctx->pc = 0x37A880u;
            goto label_37a880;
        }
    }
    ctx->pc = 0x37A870u;
label_37a870:
    // 0x37a870: 0x24030047  addiu       $v1, $zero, 0x47
    ctx->pc = 0x37a870u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x37a874: 0xa2230780  sb          $v1, 0x780($s1)
    ctx->pc = 0x37a874u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1920), (uint8_t)GPR_U32(ctx, 3));
    // 0x37a878: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x37a878u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a87c: 0x0  nop
    ctx->pc = 0x37a87cu;
    // NOP
label_37a880:
    // 0x37a880: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x37A880u;
    {
        const bool branch_taken_0x37a880 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37A884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A880u;
        // 0x37a884: 0xa2202b8e  sb          $zero, 0x2B8E($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 11150), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a880) {
            ctx->pc = 0x37A9B0u;
            goto label_37a9b0;
        }
    }
    ctx->pc = 0x37A888u;
label_37a888:
    // 0x37a888: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x37a888u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x37a88c: 0x34433e00  ori         $v1, $v0, 0x3E00
    ctx->pc = 0x37a88cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)15872);
    // 0x37a890: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x37a890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x37a894: 0xae230020  sw          $v1, 0x20($s1)
    ctx->pc = 0x37a894u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 3));
    // 0x37a898: 0xa2222b8e  sb          $v0, 0x2B8E($s1)
    ctx->pc = 0x37a898u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11150), (uint8_t)GPR_U32(ctx, 2));
    // 0x37a89c: 0x0  nop
    ctx->pc = 0x37a89cu;
    // NOP
label_37a8a0:
    // 0x37a8a0: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x37a8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x37a8a4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x37a8a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x37a8a8: 0xc0de2f0  jal         func_378BC0
    ctx->pc = 0x37A8A8u;
    SET_GPR_U32(ctx, 31, 0x37A8B0u);
    ctx->pc = 0x37A8ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37A8A8u;
    // 0x37a8ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x378BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378BC0u, 0x37A8A8u, 0x37A8B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A8B0u;
label_37a8b0:
    // 0x37a8b0: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x37a8b0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x37a8b4: 0xc0de308  jal         func_378C20
    ctx->pc = 0x37A8B4u;
    SET_GPR_U32(ctx, 31, 0x37A8BCu);
    ctx->pc = 0x37A8B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37A8B4u;
    // 0x37a8b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x378C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378C20u, 0x37A8B4u, 0x37A8BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A8BCu;
label_37a8bc:
    // 0x37a8bc: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x37a8bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x37a8c0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x37a8c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37a8c4: 0x10640012  beq         $v1, $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x37A8C4u;
    {
        const bool branch_taken_0x37a8c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x37a8c4) {
            ctx->pc = 0x37A910u;
            goto label_37a910;
        }
    }
    ctx->pc = 0x37A8CCu;
    // 0x37a8cc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x37A8CCu;
    {
        const bool branch_taken_0x37a8cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x37a8cc) {
            ctx->pc = 0x37A8E0u;
            goto label_37a8e0;
        }
    }
    ctx->pc = 0x37A8D4u;
    // 0x37a8d4: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x37A8D4u;
    {
        const bool branch_taken_0x37a8d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37a8d4) {
            ctx->pc = 0x37A940u;
            goto label_37a940;
        }
    }
    ctx->pc = 0x37A8DCu;
    // 0x37a8dc: 0x0  nop
    ctx->pc = 0x37a8dcu;
    // NOP
label_37a8e0:
    // 0x37a8e0: 0x324300ff  andi        $v1, $s2, 0xFF
    ctx->pc = 0x37a8e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x37a8e4: 0x10640006  beq         $v1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x37A8E4u;
    {
        const bool branch_taken_0x37a8e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x37a8e4) {
            ctx->pc = 0x37A900u;
            goto label_37a900;
        }
    }
    ctx->pc = 0x37A8ECu;
    // 0x37a8ec: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x37A8ECu;
    {
        const bool branch_taken_0x37a8ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x37a8ec) {
            ctx->pc = 0x37A940u;
            goto label_37a940;
        }
    }
    ctx->pc = 0x37A8F4u;
    // 0x37a8f4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x37A8F4u;
    {
        const bool branch_taken_0x37a8f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37a8f4) {
            ctx->pc = 0x37A940u;
            goto label_37a940;
        }
    }
    ctx->pc = 0x37A8FCu;
    // 0x37a8fc: 0x0  nop
    ctx->pc = 0x37a8fcu;
    // NOP
label_37a900:
    // 0x37a900: 0x2403004c  addiu       $v1, $zero, 0x4C
    ctx->pc = 0x37a900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x37a904: 0xa2230780  sb          $v1, 0x780($s1)
    ctx->pc = 0x37a904u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1920), (uint8_t)GPR_U32(ctx, 3));
    // 0x37a908: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x37A908u;
    {
        const bool branch_taken_0x37a908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37A90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A908u;
        // 0x37a90c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a908) {
            ctx->pc = 0x37A940u;
            goto label_37a940;
        }
    }
    ctx->pc = 0x37A910u;
label_37a910:
    // 0x37a910: 0x324300ff  andi        $v1, $s2, 0xFF
    ctx->pc = 0x37a910u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x37a914: 0x10640006  beq         $v1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x37A914u;
    {
        const bool branch_taken_0x37a914 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x37a914) {
            ctx->pc = 0x37A930u;
            goto label_37a930;
        }
    }
    ctx->pc = 0x37A91Cu;
    // 0x37a91c: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x37A91Cu;
    {
        const bool branch_taken_0x37a91c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x37a91c) {
            ctx->pc = 0x37A940u;
            goto label_37a940;
        }
    }
    ctx->pc = 0x37A924u;
    // 0x37a924: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x37A924u;
    {
        const bool branch_taken_0x37a924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37a924) {
            ctx->pc = 0x37A940u;
            goto label_37a940;
        }
    }
    ctx->pc = 0x37A92Cu;
    // 0x37a92c: 0x0  nop
    ctx->pc = 0x37a92cu;
    // NOP
label_37a930:
    // 0x37a930: 0x2403004d  addiu       $v1, $zero, 0x4D
    ctx->pc = 0x37a930u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x37a934: 0xa2230780  sb          $v1, 0x780($s1)
    ctx->pc = 0x37a934u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1920), (uint8_t)GPR_U32(ctx, 3));
    // 0x37a938: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x37a938u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a93c: 0x0  nop
    ctx->pc = 0x37a93cu;
    // NOP
label_37a940:
    // 0x37a940: 0x24030015  addiu       $v1, $zero, 0x15
    ctx->pc = 0x37a940u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x37a944: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x37A944u;
    {
        const bool branch_taken_0x37a944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37A948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A944u;
        // 0x37a948: 0xa2232b8e  sb          $v1, 0x2B8E($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 11150), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a944) {
            ctx->pc = 0x37A9B0u;
            goto label_37a9b0;
        }
    }
    ctx->pc = 0x37A94Cu;
    // 0x37a94c: 0x0  nop
    ctx->pc = 0x37a94cu;
    // NOP
label_37a950:
    // 0x37a950: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x37a950u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x37a954: 0x34433e00  ori         $v1, $v0, 0x3E00
    ctx->pc = 0x37a954u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)15872);
    // 0x37a958: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x37a958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x37a95c: 0xae230020  sw          $v1, 0x20($s1)
    ctx->pc = 0x37a95cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 3));
    // 0x37a960: 0xa2222b8e  sb          $v0, 0x2B8E($s1)
    ctx->pc = 0x37a960u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11150), (uint8_t)GPR_U32(ctx, 2));
    // 0x37a964: 0x0  nop
    ctx->pc = 0x37a964u;
    // NOP
label_37a968:
    // 0x37a968: 0xc0de32c  jal         func_378CB0
    ctx->pc = 0x37A968u;
    SET_GPR_U32(ctx, 31, 0x37A970u);
    ctx->pc = 0x37A96Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37A968u;
    // 0x37a96c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x378CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378CB0u, 0x37A968u, 0x37A970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A970u;
label_37a970:
    // 0x37a970: 0x3c034205  lui         $v1, 0x4205
    ctx->pc = 0x37a970u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16901 << 16));
    // 0x37a974: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x37a974u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x37a978: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x37a978u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x37a97c: 0x0  nop
    ctx->pc = 0x37a97cu;
    // NOP
    // 0x37a980: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x37a980u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x37a984: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x37A984u;
    {
        const bool branch_taken_0x37a984 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x37A988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A984u;
        // 0x37a988: 0x2403004a  addiu       $v1, $zero, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a984) {
            ctx->pc = 0x37A998u;
            goto label_37a998;
        }
    }
    ctx->pc = 0x37A98Cu;
    // 0x37a98c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x37a98cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a990: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x37A990u;
    {
        const bool branch_taken_0x37a990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37A994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A990u;
        // 0x37a994: 0xa2230780  sb          $v1, 0x780($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1920), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a990) {
            ctx->pc = 0x37A9A8u;
            goto label_37a9a8;
        }
    }
    ctx->pc = 0x37A998u;
label_37a998:
    // 0x37a998: 0x24030049  addiu       $v1, $zero, 0x49
    ctx->pc = 0x37a998u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
    // 0x37a99c: 0xa2230780  sb          $v1, 0x780($s1)
    ctx->pc = 0x37a99cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1920), (uint8_t)GPR_U32(ctx, 3));
    // 0x37a9a0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x37a9a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a9a4: 0x0  nop
    ctx->pc = 0x37a9a4u;
    // NOP
label_37a9a8:
    // 0x37a9a8: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x37a9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x37a9ac: 0xa2232b8e  sb          $v1, 0x2B8E($s1)
    ctx->pc = 0x37a9acu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11150), (uint8_t)GPR_U32(ctx, 3));
label_37a9b0:
    // 0x37a9b0: 0x1600fe6b  bnez        $s0, . + 4 + (-0x195 << 2)
    ctx->pc = 0x37A9B0u;
    {
        const bool branch_taken_0x37a9b0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x37a9b0) {
            ctx->pc = 0x37A360u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_37a360;
        }
    }
    ctx->pc = 0x37A9B8u;
    // 0x37a9b8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x37a9b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x37a9bc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x37a9bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37a9c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x37a9c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37a9c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x37a9c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37a9c8: 0x3e00008  jr          $ra
    ctx->pc = 0x37A9C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37A9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A9C8u;
        // 0x37a9cc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37A9C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37A9D0u;
}
