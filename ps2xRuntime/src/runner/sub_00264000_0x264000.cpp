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

// Function: sub_00264000
// Address: 0x264000 - 0x2644b4
void sub_00264000_0x264000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00264000_0x264000");
#endif

    switch (ctx->pc) {
        case 0x264044u: goto label_264044;
        case 0x264068u: goto label_264068;
        case 0x264454u: goto label_264454;
        case 0x264474u: goto label_264474;
        case 0x264488u: goto label_264488;
        case 0x264498u: goto label_264498;
        case 0x2644a8u: goto label_2644a8;
        default: break;
    }

    ctx->pc = 0x264000u;

    // 0x264000: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x264000u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x264004: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x264004u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x264008: 0x2c610006  sltiu       $at, $v1, 0x6
    ctx->pc = 0x264008u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x26400c: 0x10200126  beqz        $at, . + 4 + (0x126 << 2)
    ctx->pc = 0x26400Cu;
    {
        const bool branch_taken_0x26400c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x264010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26400Cu;
        // 0x264010: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26400c) {
            ctx->pc = 0x2644A8u;
            goto label_2644a8;
        }
    }
    ctx->pc = 0x264014u;
    // 0x264014: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x264014u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x264018: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x264018u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x26401c: 0x24a53c70  addiu       $a1, $a1, 0x3C70
    ctx->pc = 0x26401cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15472));
    // 0x264020: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x264020u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x264024: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x264024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x264028: 0x600008  jr          $v1
    ctx->pc = 0x264028u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x264030u: goto label_264030;
            case 0x264440u: goto label_264440;
            case 0x264460u: goto label_264460;
            case 0x264480u: goto label_264480;
            case 0x264490u: goto label_264490;
            case 0x2644A0u: goto label_2644a0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x264028u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x264030u;
label_264030:
    // 0x264030: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x264030u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264034: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x264034u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x264038: 0x24061be4  addiu       $a2, $zero, 0x1BE4
    ctx->pc = 0x264038u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7140));
    // 0x26403c: 0xc049522  jal         func_125488
    ctx->pc = 0x26403Cu;
    SET_GPR_U32(ctx, 31, 0x264044u);
    ctx->pc = 0x264040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26403Cu;
    // 0x264040: 0x24840b80  addiu       $a0, $a0, 0xB80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2944));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x26403Cu, 0x264044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264044u;
label_264044:
    // 0x264044: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x264044u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x264048: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x264048u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26404c: 0x24840b80  addiu       $a0, $a0, 0xB80
    ctx->pc = 0x26404cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2944));
    // 0x264050: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x264050u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264054: 0x3c074500  lui         $a3, 0x4500
    ctx->pc = 0x264054u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)17664 << 16));
    // 0x264058: 0x3c064334  lui         $a2, 0x4334
    ctx->pc = 0x264058u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17204 << 16));
    // 0x26405c: 0x44870800  mtc1        $a3, $f1
    ctx->pc = 0x26405cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x264060: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x264060u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x264064: 0x0  nop
    ctx->pc = 0x264064u;
    // NOP
label_264068:
    // 0x264068: 0x84870014  lh          $a3, 0x14($a0)
    ctx->pc = 0x264068u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x26406c: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x26406cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x264070: 0x28a60100  slti        $a2, $a1, 0x100
    ctx->pc = 0x264070u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x264074: 0x44871000  mtc1        $a3, $f2
    ctx->pc = 0x264074u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x264078: 0x0  nop
    ctx->pc = 0x264078u;
    // NOP
    // 0x26407c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x26407cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x264080: 0x46020882  mul.s       $f2, $f1, $f2
    ctx->pc = 0x264080u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x264084: 0x46001083  div.s       $f2, $f2, $f0
    ctx->pc = 0x264084u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x264088: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x264088u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x26408c: 0x44071000  mfc1        $a3, $f2
    ctx->pc = 0x26408cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x264090: 0x0  nop
    ctx->pc = 0x264090u;
    // NOP
    // 0x264094: 0xa4670014  sh          $a3, 0x14($v1)
    ctx->pc = 0x264094u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 20), (uint16_t)GPR_U32(ctx, 7));
    // 0x264098: 0x84870016  lh          $a3, 0x16($a0)
    ctx->pc = 0x264098u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 22)));
    // 0x26409c: 0x44871000  mtc1        $a3, $f2
    ctx->pc = 0x26409cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2640a0: 0x0  nop
    ctx->pc = 0x2640a0u;
    // NOP
    // 0x2640a4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2640a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2640a8: 0x46020882  mul.s       $f2, $f1, $f2
    ctx->pc = 0x2640a8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2640ac: 0x46001083  div.s       $f2, $f2, $f0
    ctx->pc = 0x2640acu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x2640b0: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2640b0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x2640b4: 0x44071000  mfc1        $a3, $f2
    ctx->pc = 0x2640b4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x2640b8: 0x0  nop
    ctx->pc = 0x2640b8u;
    // NOP
    // 0x2640bc: 0xa4670016  sh          $a3, 0x16($v1)
    ctx->pc = 0x2640bcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 22), (uint16_t)GPR_U32(ctx, 7));
    // 0x2640c0: 0x84870018  lh          $a3, 0x18($a0)
    ctx->pc = 0x2640c0u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2640c4: 0x44871000  mtc1        $a3, $f2
    ctx->pc = 0x2640c4u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2640c8: 0x0  nop
    ctx->pc = 0x2640c8u;
    // NOP
    // 0x2640cc: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2640ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2640d0: 0x46020882  mul.s       $f2, $f1, $f2
    ctx->pc = 0x2640d0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2640d4: 0x46001083  div.s       $f2, $f2, $f0
    ctx->pc = 0x2640d4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x2640d8: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2640d8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x2640dc: 0x44071000  mfc1        $a3, $f2
    ctx->pc = 0x2640dcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x2640e0: 0x0  nop
    ctx->pc = 0x2640e0u;
    // NOP
    // 0x2640e4: 0xa4670018  sh          $a3, 0x18($v1)
    ctx->pc = 0x2640e4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 24), (uint16_t)GPR_U32(ctx, 7));
    // 0x2640e8: 0x84870030  lh          $a3, 0x30($a0)
    ctx->pc = 0x2640e8u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x2640ec: 0x44871000  mtc1        $a3, $f2
    ctx->pc = 0x2640ecu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2640f0: 0x0  nop
    ctx->pc = 0x2640f0u;
    // NOP
    // 0x2640f4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2640f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2640f8: 0x46020882  mul.s       $f2, $f1, $f2
    ctx->pc = 0x2640f8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2640fc: 0x46001083  div.s       $f2, $f2, $f0
    ctx->pc = 0x2640fcu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x264100: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x264100u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x264104: 0x44071000  mfc1        $a3, $f2
    ctx->pc = 0x264104u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x264108: 0x0  nop
    ctx->pc = 0x264108u;
    // NOP
    // 0x26410c: 0xa4670030  sh          $a3, 0x30($v1)
    ctx->pc = 0x26410cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 48), (uint16_t)GPR_U32(ctx, 7));
    // 0x264110: 0x84870032  lh          $a3, 0x32($a0)
    ctx->pc = 0x264110u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 50)));
    // 0x264114: 0x44871000  mtc1        $a3, $f2
    ctx->pc = 0x264114u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x264118: 0x0  nop
    ctx->pc = 0x264118u;
    // NOP
    // 0x26411c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x26411cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x264120: 0x46020882  mul.s       $f2, $f1, $f2
    ctx->pc = 0x264120u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x264124: 0x46001083  div.s       $f2, $f2, $f0
    ctx->pc = 0x264124u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x264128: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x264128u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x26412c: 0x44071000  mfc1        $a3, $f2
    ctx->pc = 0x26412cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x264130: 0x0  nop
    ctx->pc = 0x264130u;
    // NOP
    // 0x264134: 0xa4670032  sh          $a3, 0x32($v1)
    ctx->pc = 0x264134u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 50), (uint16_t)GPR_U32(ctx, 7));
    // 0x264138: 0x84870034  lh          $a3, 0x34($a0)
    ctx->pc = 0x264138u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x26413c: 0x44871000  mtc1        $a3, $f2
    ctx->pc = 0x26413cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x264140: 0x0  nop
    ctx->pc = 0x264140u;
    // NOP
    // 0x264144: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x264144u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x264148: 0x46020882  mul.s       $f2, $f1, $f2
    ctx->pc = 0x264148u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x26414c: 0x46001083  div.s       $f2, $f2, $f0
    ctx->pc = 0x26414cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x264150: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x264150u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x264154: 0x44071000  mfc1        $a3, $f2
    ctx->pc = 0x264154u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x264158: 0x0  nop
    ctx->pc = 0x264158u;
    // NOP
    // 0x26415c: 0xa4670034  sh          $a3, 0x34($v1)
    ctx->pc = 0x26415cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 52), (uint16_t)GPR_U32(ctx, 7));
    // 0x264160: 0x8487004c  lh          $a3, 0x4C($a0)
    ctx->pc = 0x264160u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x264164: 0x44871000  mtc1        $a3, $f2
    ctx->pc = 0x264164u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x264168: 0x0  nop
    ctx->pc = 0x264168u;
    // NOP
    // 0x26416c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x26416cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x264170: 0x46020882  mul.s       $f2, $f1, $f2
    ctx->pc = 0x264170u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x264174: 0x46001083  div.s       $f2, $f2, $f0
    ctx->pc = 0x264174u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x264178: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x264178u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x26417c: 0x44071000  mfc1        $a3, $f2
    ctx->pc = 0x26417cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x264180: 0x0  nop
    ctx->pc = 0x264180u;
    // NOP
    // 0x264184: 0xa467004c  sh          $a3, 0x4C($v1)
    ctx->pc = 0x264184u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 76), (uint16_t)GPR_U32(ctx, 7));
    // 0x264188: 0x8487004e  lh          $a3, 0x4E($a0)
    ctx->pc = 0x264188u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 78)));
    // 0x26418c: 0x44871000  mtc1        $a3, $f2
    ctx->pc = 0x26418cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x264190: 0x0  nop
    ctx->pc = 0x264190u;
    // NOP
    // 0x264194: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x264194u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x264198: 0x46020882  mul.s       $f2, $f1, $f2
    ctx->pc = 0x264198u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x26419c: 0x46001083  div.s       $f2, $f2, $f0
    ctx->pc = 0x26419cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x2641a0: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2641a0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x2641a4: 0x44071000  mfc1        $a3, $f2
    ctx->pc = 0x2641a4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x2641a8: 0x0  nop
    ctx->pc = 0x2641a8u;
    // NOP
    // 0x2641ac: 0xa467004e  sh          $a3, 0x4E($v1)
    ctx->pc = 0x2641acu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 78), (uint16_t)GPR_U32(ctx, 7));
    // 0x2641b0: 0x84870050  lh          $a3, 0x50($a0)
    ctx->pc = 0x2641b0u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x2641b4: 0x44871000  mtc1        $a3, $f2
    ctx->pc = 0x2641b4u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2641b8: 0x0  nop
    ctx->pc = 0x2641b8u;
    // NOP
    // 0x2641bc: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2641bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2641c0: 0x46020882  mul.s       $f2, $f1, $f2
    ctx->pc = 0x2641c0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2641c4: 0x46001083  div.s       $f2, $f2, $f0
    ctx->pc = 0x2641c4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x2641c8: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2641c8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x2641cc: 0x44071000  mfc1        $a3, $f2
    ctx->pc = 0x2641ccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x2641d0: 0x0  nop
    ctx->pc = 0x2641d0u;
    // NOP
    // 0x2641d4: 0xa4670050  sh          $a3, 0x50($v1)
    ctx->pc = 0x2641d4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 80), (uint16_t)GPR_U32(ctx, 7));
    // 0x2641d8: 0x84870068  lh          $a3, 0x68($a0)
    ctx->pc = 0x2641d8u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 104)));
    // 0x2641dc: 0x44871000  mtc1        $a3, $f2
    ctx->pc = 0x2641dcu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2641e0: 0x0  nop
    ctx->pc = 0x2641e0u;
    // NOP
    // 0x2641e4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2641e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2641e8: 0x46020882  mul.s       $f2, $f1, $f2
    ctx->pc = 0x2641e8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2641ec: 0x46001083  div.s       $f2, $f2, $f0
    ctx->pc = 0x2641ecu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x2641f0: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2641f0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x2641f4: 0x44071000  mfc1        $a3, $f2
    ctx->pc = 0x2641f4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x2641f8: 0x0  nop
    ctx->pc = 0x2641f8u;
    // NOP
    // 0x2641fc: 0xa4670068  sh          $a3, 0x68($v1)
    ctx->pc = 0x2641fcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 104), (uint16_t)GPR_U32(ctx, 7));
    // 0x264200: 0x8487006a  lh          $a3, 0x6A($a0)
    ctx->pc = 0x264200u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 106)));
    // 0x264204: 0x44871000  mtc1        $a3, $f2
    ctx->pc = 0x264204u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x264208: 0x0  nop
    ctx->pc = 0x264208u;
    // NOP
    // 0x26420c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x26420cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x264210: 0x46020882  mul.s       $f2, $f1, $f2
    ctx->pc = 0x264210u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x264214: 0x46001083  div.s       $f2, $f2, $f0
    ctx->pc = 0x264214u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x264218: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x264218u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x26421c: 0x44071000  mfc1        $a3, $f2
    ctx->pc = 0x26421cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x264220: 0x0  nop
    ctx->pc = 0x264220u;
    // NOP
    // 0x264224: 0xa467006a  sh          $a3, 0x6A($v1)
    ctx->pc = 0x264224u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 106), (uint16_t)GPR_U32(ctx, 7));
    // 0x264228: 0x8487006c  lh          $a3, 0x6C($a0)
    ctx->pc = 0x264228u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 108)));
    // 0x26422c: 0x44871000  mtc1        $a3, $f2
    ctx->pc = 0x26422cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x264230: 0x0  nop
    ctx->pc = 0x264230u;
    // NOP
    // 0x264234: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x264234u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x264238: 0x46020882  mul.s       $f2, $f1, $f2
    ctx->pc = 0x264238u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x26423c: 0x46001083  div.s       $f2, $f2, $f0
    ctx->pc = 0x26423cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x264240: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x264240u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x264244: 0x44071000  mfc1        $a3, $f2
    ctx->pc = 0x264244u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x264248: 0x0  nop
    ctx->pc = 0x264248u;
    // NOP
    // 0x26424c: 0xa467006c  sh          $a3, 0x6C($v1)
    ctx->pc = 0x26424cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 108), (uint16_t)GPR_U32(ctx, 7));
    // 0x264250: 0x84870084  lh          $a3, 0x84($a0)
    ctx->pc = 0x264250u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 132)));
    // 0x264254: 0x44871000  mtc1        $a3, $f2
    ctx->pc = 0x264254u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x264258: 0x0  nop
    ctx->pc = 0x264258u;
    // NOP
    // 0x26425c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x26425cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x264260: 0x46020882  mul.s       $f2, $f1, $f2
    ctx->pc = 0x264260u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x264264: 0x46001083  div.s       $f2, $f2, $f0
    ctx->pc = 0x264264u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x264268: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x264268u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x26426c: 0x44071000  mfc1        $a3, $f2
    ctx->pc = 0x26426cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x264270: 0x0  nop
    ctx->pc = 0x264270u;
    // NOP
    // 0x264274: 0xa4670084  sh          $a3, 0x84($v1)
    ctx->pc = 0x264274u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 132), (uint16_t)GPR_U32(ctx, 7));
    // 0x264278: 0x84870086  lh          $a3, 0x86($a0)
    ctx->pc = 0x264278u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 134)));
    // 0x26427c: 0x44871000  mtc1        $a3, $f2
    ctx->pc = 0x26427cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x264280: 0x0  nop
    ctx->pc = 0x264280u;
    // NOP
    // 0x264284: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x264284u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x264288: 0x46020882  mul.s       $f2, $f1, $f2
    ctx->pc = 0x264288u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x26428c: 0x46001083  div.s       $f2, $f2, $f0
    ctx->pc = 0x26428cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x264290: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x264290u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x264294: 0x44071000  mfc1        $a3, $f2
    ctx->pc = 0x264294u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x264298: 0x0  nop
    ctx->pc = 0x264298u;
    // NOP
    // 0x26429c: 0xa4670086  sh          $a3, 0x86($v1)
    ctx->pc = 0x26429cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 134), (uint16_t)GPR_U32(ctx, 7));
    // 0x2642a0: 0x84870088  lh          $a3, 0x88($a0)
    ctx->pc = 0x2642a0u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 136)));
    // 0x2642a4: 0x44871000  mtc1        $a3, $f2
    ctx->pc = 0x2642a4u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2642a8: 0x0  nop
    ctx->pc = 0x2642a8u;
    // NOP
    // 0x2642ac: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2642acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2642b0: 0x46020882  mul.s       $f2, $f1, $f2
    ctx->pc = 0x2642b0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2642b4: 0x46001083  div.s       $f2, $f2, $f0
    ctx->pc = 0x2642b4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x2642b8: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2642b8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x2642bc: 0x44071000  mfc1        $a3, $f2
    ctx->pc = 0x2642bcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x2642c0: 0x0  nop
    ctx->pc = 0x2642c0u;
    // NOP
    // 0x2642c4: 0xa4670088  sh          $a3, 0x88($v1)
    ctx->pc = 0x2642c4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 136), (uint16_t)GPR_U32(ctx, 7));
    // 0x2642c8: 0x848700a0  lh          $a3, 0xA0($a0)
    ctx->pc = 0x2642c8u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 160)));
    // 0x2642cc: 0x44871000  mtc1        $a3, $f2
    ctx->pc = 0x2642ccu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2642d0: 0x0  nop
    ctx->pc = 0x2642d0u;
    // NOP
    // 0x2642d4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2642d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2642d8: 0x46020882  mul.s       $f2, $f1, $f2
    ctx->pc = 0x2642d8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2642dc: 0x46001083  div.s       $f2, $f2, $f0
    ctx->pc = 0x2642dcu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x2642e0: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2642e0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x2642e4: 0x44071000  mfc1        $a3, $f2
    ctx->pc = 0x2642e4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x2642e8: 0x0  nop
    ctx->pc = 0x2642e8u;
    // NOP
    // 0x2642ec: 0xa46700a0  sh          $a3, 0xA0($v1)
    ctx->pc = 0x2642ecu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 160), (uint16_t)GPR_U32(ctx, 7));
    // 0x2642f0: 0x848700a2  lh          $a3, 0xA2($a0)
    ctx->pc = 0x2642f0u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 162)));
    // 0x2642f4: 0x44871000  mtc1        $a3, $f2
    ctx->pc = 0x2642f4u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2642f8: 0x0  nop
    ctx->pc = 0x2642f8u;
    // NOP
    // 0x2642fc: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2642fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x264300: 0x46020882  mul.s       $f2, $f1, $f2
    ctx->pc = 0x264300u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x264304: 0x46001083  div.s       $f2, $f2, $f0
    ctx->pc = 0x264304u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x264308: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x264308u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x26430c: 0x44071000  mfc1        $a3, $f2
    ctx->pc = 0x26430cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x264310: 0x0  nop
    ctx->pc = 0x264310u;
    // NOP
    // 0x264314: 0xa46700a2  sh          $a3, 0xA2($v1)
    ctx->pc = 0x264314u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 162), (uint16_t)GPR_U32(ctx, 7));
    // 0x264318: 0x848700a4  lh          $a3, 0xA4($a0)
    ctx->pc = 0x264318u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 164)));
    // 0x26431c: 0x44871000  mtc1        $a3, $f2
    ctx->pc = 0x26431cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x264320: 0x0  nop
    ctx->pc = 0x264320u;
    // NOP
    // 0x264324: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x264324u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x264328: 0x46020882  mul.s       $f2, $f1, $f2
    ctx->pc = 0x264328u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x26432c: 0x46001083  div.s       $f2, $f2, $f0
    ctx->pc = 0x26432cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x264330: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x264330u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x264334: 0x44071000  mfc1        $a3, $f2
    ctx->pc = 0x264334u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x264338: 0x0  nop
    ctx->pc = 0x264338u;
    // NOP
    // 0x26433c: 0xa46700a4  sh          $a3, 0xA4($v1)
    ctx->pc = 0x26433cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 164), (uint16_t)GPR_U32(ctx, 7));
    // 0x264340: 0x848700bc  lh          $a3, 0xBC($a0)
    ctx->pc = 0x264340u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 188)));
    // 0x264344: 0x44871000  mtc1        $a3, $f2
    ctx->pc = 0x264344u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x264348: 0x0  nop
    ctx->pc = 0x264348u;
    // NOP
    // 0x26434c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x26434cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x264350: 0x46020882  mul.s       $f2, $f1, $f2
    ctx->pc = 0x264350u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x264354: 0x46001083  div.s       $f2, $f2, $f0
    ctx->pc = 0x264354u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x264358: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x264358u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x26435c: 0x44071000  mfc1        $a3, $f2
    ctx->pc = 0x26435cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x264360: 0x0  nop
    ctx->pc = 0x264360u;
    // NOP
    // 0x264364: 0xa46700bc  sh          $a3, 0xBC($v1)
    ctx->pc = 0x264364u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 188), (uint16_t)GPR_U32(ctx, 7));
    // 0x264368: 0x848700be  lh          $a3, 0xBE($a0)
    ctx->pc = 0x264368u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 190)));
    // 0x26436c: 0x44871000  mtc1        $a3, $f2
    ctx->pc = 0x26436cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x264370: 0x0  nop
    ctx->pc = 0x264370u;
    // NOP
    // 0x264374: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x264374u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x264378: 0x46020882  mul.s       $f2, $f1, $f2
    ctx->pc = 0x264378u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x26437c: 0x46001083  div.s       $f2, $f2, $f0
    ctx->pc = 0x26437cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x264380: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x264380u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x264384: 0x44071000  mfc1        $a3, $f2
    ctx->pc = 0x264384u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x264388: 0x0  nop
    ctx->pc = 0x264388u;
    // NOP
    // 0x26438c: 0xa46700be  sh          $a3, 0xBE($v1)
    ctx->pc = 0x26438cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 190), (uint16_t)GPR_U32(ctx, 7));
    // 0x264390: 0x848700c0  lh          $a3, 0xC0($a0)
    ctx->pc = 0x264390u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 192)));
    // 0x264394: 0x44871000  mtc1        $a3, $f2
    ctx->pc = 0x264394u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x264398: 0x0  nop
    ctx->pc = 0x264398u;
    // NOP
    // 0x26439c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x26439cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2643a0: 0x46020882  mul.s       $f2, $f1, $f2
    ctx->pc = 0x2643a0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2643a4: 0x46001083  div.s       $f2, $f2, $f0
    ctx->pc = 0x2643a4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x2643a8: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2643a8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x2643ac: 0x44071000  mfc1        $a3, $f2
    ctx->pc = 0x2643acu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x2643b0: 0x0  nop
    ctx->pc = 0x2643b0u;
    // NOP
    // 0x2643b4: 0xa46700c0  sh          $a3, 0xC0($v1)
    ctx->pc = 0x2643b4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 192), (uint16_t)GPR_U32(ctx, 7));
    // 0x2643b8: 0x848700d8  lh          $a3, 0xD8($a0)
    ctx->pc = 0x2643b8u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 216)));
    // 0x2643bc: 0x44871000  mtc1        $a3, $f2
    ctx->pc = 0x2643bcu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2643c0: 0x0  nop
    ctx->pc = 0x2643c0u;
    // NOP
    // 0x2643c4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2643c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2643c8: 0x46020882  mul.s       $f2, $f1, $f2
    ctx->pc = 0x2643c8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2643cc: 0x46001083  div.s       $f2, $f2, $f0
    ctx->pc = 0x2643ccu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x2643d0: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2643d0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x2643d4: 0x44071000  mfc1        $a3, $f2
    ctx->pc = 0x2643d4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x2643d8: 0x0  nop
    ctx->pc = 0x2643d8u;
    // NOP
    // 0x2643dc: 0xa46700d8  sh          $a3, 0xD8($v1)
    ctx->pc = 0x2643dcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 216), (uint16_t)GPR_U32(ctx, 7));
    // 0x2643e0: 0x848700da  lh          $a3, 0xDA($a0)
    ctx->pc = 0x2643e0u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 218)));
    // 0x2643e4: 0x44871000  mtc1        $a3, $f2
    ctx->pc = 0x2643e4u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2643e8: 0x0  nop
    ctx->pc = 0x2643e8u;
    // NOP
    // 0x2643ec: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2643ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2643f0: 0x46020882  mul.s       $f2, $f1, $f2
    ctx->pc = 0x2643f0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2643f4: 0x46001083  div.s       $f2, $f2, $f0
    ctx->pc = 0x2643f4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x2643f8: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2643f8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x2643fc: 0x44071000  mfc1        $a3, $f2
    ctx->pc = 0x2643fcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x264400: 0x0  nop
    ctx->pc = 0x264400u;
    // NOP
    // 0x264404: 0xa46700da  sh          $a3, 0xDA($v1)
    ctx->pc = 0x264404u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 218), (uint16_t)GPR_U32(ctx, 7));
    // 0x264408: 0x848700dc  lh          $a3, 0xDC($a0)
    ctx->pc = 0x264408u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 220)));
    // 0x26440c: 0x44871000  mtc1        $a3, $f2
    ctx->pc = 0x26440cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x264410: 0x248400e0  addiu       $a0, $a0, 0xE0
    ctx->pc = 0x264410u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 224));
    // 0x264414: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x264414u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x264418: 0x46020882  mul.s       $f2, $f1, $f2
    ctx->pc = 0x264418u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x26441c: 0x46001083  div.s       $f2, $f2, $f0
    ctx->pc = 0x26441cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x264420: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x264420u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x264424: 0x44071000  mfc1        $a3, $f2
    ctx->pc = 0x264424u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x264428: 0x0  nop
    ctx->pc = 0x264428u;
    // NOP
    // 0x26442c: 0xa46700dc  sh          $a3, 0xDC($v1)
    ctx->pc = 0x26442cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 220), (uint16_t)GPR_U32(ctx, 7));
    // 0x264430: 0x14c0ff0d  bnez        $a2, . + 4 + (-0xF3 << 2)
    ctx->pc = 0x264430u;
    {
        const bool branch_taken_0x264430 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x264434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264430u;
        // 0x264434: 0x246300e0  addiu       $v1, $v1, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264430) {
            ctx->pc = 0x264068u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_264068;
        }
    }
    ctx->pc = 0x264438u;
    // 0x264438: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x264438u;
    {
        const bool branch_taken_0x264438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x264438) {
            ctx->pc = 0x2644A8u;
            goto label_2644a8;
        }
    }
    ctx->pc = 0x264440u;
label_264440:
    // 0x264440: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x264440u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264444: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x264444u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x264448: 0x24061800  addiu       $a2, $zero, 0x1800
    ctx->pc = 0x264448u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6144));
    // 0x26444c: 0xc049522  jal         func_125488
    ctx->pc = 0x26444Cu;
    SET_GPR_U32(ctx, 31, 0x264454u);
    ctx->pc = 0x264450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26444Cu;
    // 0x264450: 0x2484f380  addiu       $a0, $a0, -0xC80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x26444Cu, 0x264454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264454u;
label_264454:
    // 0x264454: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x264454u;
    {
        const bool branch_taken_0x264454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x264454) {
            ctx->pc = 0x2644A8u;
            goto label_2644a8;
        }
    }
    ctx->pc = 0x26445Cu;
    // 0x26445c: 0x0  nop
    ctx->pc = 0x26445cu;
    // NOP
label_264460:
    // 0x264460: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x264460u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264464: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x264464u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x264468: 0x24061400  addiu       $a2, $zero, 0x1400
    ctx->pc = 0x264468u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5120));
    // 0x26446c: 0xc049522  jal         func_125488
    ctx->pc = 0x26446Cu;
    SET_GPR_U32(ctx, 31, 0x264474u);
    ctx->pc = 0x264470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26446Cu;
    // 0x264470: 0x24842870  addiu       $a0, $a0, 0x2870 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x26446Cu, 0x264474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264474u;
label_264474:
    // 0x264474: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x264474u;
    {
        const bool branch_taken_0x264474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x264474) {
            ctx->pc = 0x2644A8u;
            goto label_2644a8;
        }
    }
    ctx->pc = 0x26447Cu;
    // 0x26447c: 0x0  nop
    ctx->pc = 0x26447cu;
    // NOP
label_264480:
    // 0x264480: 0xc0d23a4  jal         func_348E90
    ctx->pc = 0x264480u;
    SET_GPR_U32(ctx, 31, 0x264488u);
    ctx->pc = 0x348E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348E90u, 0x264480u, 0x264488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264488u;
label_264488:
    // 0x264488: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x264488u;
    {
        const bool branch_taken_0x264488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x264488) {
            ctx->pc = 0x2644A8u;
            goto label_2644a8;
        }
    }
    ctx->pc = 0x264490u;
label_264490:
    // 0x264490: 0xc0dacf8  jal         func_36B3E0
    ctx->pc = 0x264490u;
    SET_GPR_U32(ctx, 31, 0x264498u);
    ctx->pc = 0x36B3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36B3E0u, 0x264490u, 0x264498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264498u;
label_264498:
    // 0x264498: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x264498u;
    {
        const bool branch_taken_0x264498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x264498) {
            ctx->pc = 0x2644A8u;
            goto label_2644a8;
        }
    }
    ctx->pc = 0x2644A0u;
label_2644a0:
    // 0x2644a0: 0xc0e0924  jal         func_382490
    ctx->pc = 0x2644A0u;
    SET_GPR_U32(ctx, 31, 0x2644A8u);
    ctx->pc = 0x382490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x382490u, 0x2644A0u, 0x2644A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2644A8u;
label_2644a8:
    // 0x2644a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2644a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2644ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2644ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2644B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2644ACu;
        // 0x2644b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2644ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2644B4u;
}
