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

// Function: sub_002862A0
// Address: 0x2862a0 - 0x286490
void sub_002862A0_0x2862a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002862A0_0x2862a0");
#endif

    switch (ctx->pc) {
        case 0x286320u: goto label_286320;
        case 0x286354u: goto label_286354;
        case 0x2863e8u: goto label_2863e8;
        default: break;
    }

    ctx->pc = 0x2862a0u;

    // 0x2862a0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2862a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2862a4: 0x3c024475  lui         $v0, 0x4475
    ctx->pc = 0x2862a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17525 << 16));
    // 0x2862a8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2862a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2862ac: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x2862acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x2862b0: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2862b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x2862b4: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x2862b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x2862b8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2862b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2862bc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2862bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2862c0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2862c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2862c4: 0x24636450  addiu       $v1, $v1, 0x6450
    ctx->pc = 0x2862c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25680));
    // 0x2862c8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2862c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2862cc: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x2862ccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2862d0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2862d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2862d4: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x2862d4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2862d8: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2862d8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2862dc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2862dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2862e0: 0x78245c10  lq          $a0, 0x5C10($at)
    ctx->pc = 0x2862e0u;
    SET_GPR_VEC(ctx, 4, FAST_READ128(0x665C10u));
    // 0x2862e4: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x2862e4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x2862e8: 0x7fa40070  sq          $a0, 0x70($sp)
    ctx->pc = 0x2862e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 4));
    // 0x2862ec: 0x90c20001  lbu         $v0, 0x1($a2)
    ctx->pc = 0x2862ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x2862f0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2862f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2862f4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2862f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2862f8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2862f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2862fc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2862fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x286300: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x286300u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x286304: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x286304u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x286308: 0xa0e00000  sb          $zero, 0x0($a3)
    ctx->pc = 0x286308u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x28630c: 0x90c2001c  lbu         $v0, 0x1C($a2)
    ctx->pc = 0x28630cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x286310: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x286310u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x286314: 0x10200054  beqz        $at, . + 4 + (0x54 << 2)
    ctx->pc = 0x286314u;
    {
        const bool branch_taken_0x286314 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x286318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286314u;
        // 0x286318: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286314) {
            ctx->pc = 0x286468u;
            goto label_286468;
        }
    }
    ctx->pc = 0x28631Cu;
    // 0x28631c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x28631cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_286320:
    // 0x286320: 0x86030010  lh          $v1, 0x10($s0)
    ctx->pc = 0x286320u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x286324: 0x24027ffe  addiu       $v0, $zero, 0x7FFE
    ctx->pc = 0x286324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
    // 0x286328: 0x10620049  beq         $v1, $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x286328u;
    {
        const bool branch_taken_0x286328 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x28632Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286328u;
        // 0x28632c: 0x3c033c88  lui         $v1, 0x3C88 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286328) {
            ctx->pc = 0x286450u;
            goto label_286450;
        }
    }
    ctx->pc = 0x286330u;
    // 0x286330: 0x3c023f7d  lui         $v0, 0x3F7D
    ctx->pc = 0x286330u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16253 << 16));
    // 0x286334: 0x34638885  ori         $v1, $v1, 0x8885
    ctx->pc = 0x286334u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34949);
    // 0x286338: 0x344270a4  ori         $v0, $v0, 0x70A4
    ctx->pc = 0x286338u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28836);
    // 0x28633c: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x28633cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x286340: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x286340u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x286344: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x286344u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x286348: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x286348u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x28634c: 0xc07681c  jal         func_1DA070
    ctx->pc = 0x28634Cu;
    SET_GPR_U32(ctx, 31, 0x286354u);
    ctx->pc = 0x286350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28634Cu;
    // 0x286350: 0x27a60070  addiu       $a2, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA070u, 0x28634Cu, 0x286354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286354u;
label_286354:
    // 0x286354: 0xc6820024  lwc1        $f2, 0x24($s4)
    ctx->pc = 0x286354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x286358: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x286358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28635c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x28635cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x286360: 0x0  nop
    ctx->pc = 0x286360u;
    // NOP
    // 0x286364: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x286364u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x286368: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x286368u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28636c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x28636Cu;
    {
        const bool branch_taken_0x28636c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x286370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28636Cu;
        // 0x286370: 0xe6010000  swc1        $f1, 0x0($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28636c) {
            ctx->pc = 0x286378u;
            goto label_286378;
        }
    }
    ctx->pc = 0x286374u;
    // 0x286374: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x286374u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_286378:
    // 0x286378: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x286378u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x28637c: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x28637cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x286380: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x286380u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x286384: 0x0  nop
    ctx->pc = 0x286384u;
    // NOP
    // 0x286388: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x286388u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28638c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x28638Cu;
    {
        const bool branch_taken_0x28638c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x28638c) {
            ctx->pc = 0x286398u;
            goto label_286398;
        }
    }
    ctx->pc = 0x286394u;
    // 0x286394: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x286394u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_286398:
    // 0x286398: 0xc6820030  lwc1        $f2, 0x30($s4)
    ctx->pc = 0x286398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28639c: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x28639cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2863a0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2863a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2863a4: 0x0  nop
    ctx->pc = 0x2863a4u;
    // NOP
    // 0x2863a8: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2863a8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2863ac: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2863acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2863b0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2863B0u;
    {
        const bool branch_taken_0x2863b0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2863B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2863B0u;
        // 0x2863b4: 0xe6010004  swc1        $f1, 0x4($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2863b0) {
            ctx->pc = 0x2863C0u;
            goto label_2863c0;
        }
    }
    ctx->pc = 0x2863B8u;
    // 0x2863b8: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x2863b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x2863bc: 0x0  nop
    ctx->pc = 0x2863bcu;
    // NOP
label_2863c0:
    // 0x2863c0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2863c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2863c4: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x2863c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2863c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2863c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2863cc: 0x0  nop
    ctx->pc = 0x2863ccu;
    // NOP
    // 0x2863d0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2863d0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2863d4: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2863D4u;
    {
        const bool branch_taken_0x2863d4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2863d4) {
            ctx->pc = 0x2863E0u;
            goto label_2863e0;
        }
    }
    ctx->pc = 0x2863DCu;
    // 0x2863dc: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x2863dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_2863e0:
    // 0x2863e0: 0xc0743c0  jal         func_1D0F00
    ctx->pc = 0x2863E0u;
    SET_GPR_U32(ctx, 31, 0x2863E8u);
    ctx->pc = 0x2863E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2863E0u;
    // 0x2863e4: 0x26040040  addiu       $a0, $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0F00u, 0x2863E0u, 0x2863E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2863E8u;
label_2863e8:
    // 0x2863e8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2863E8u;
    {
        const bool branch_taken_0x2863e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2863e8) {
            ctx->pc = 0x286400u;
            goto label_286400;
        }
    }
    ctx->pc = 0x2863F0u;
    // 0x2863f0: 0x24027ffe  addiu       $v0, $zero, 0x7FFE
    ctx->pc = 0x2863f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
    // 0x2863f4: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2863F4u;
    {
        const bool branch_taken_0x2863f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2863F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2863F4u;
        // 0x2863f8: 0xa6020010  sh          $v0, 0x10($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2863f4) {
            ctx->pc = 0x286450u;
            goto label_286450;
        }
    }
    ctx->pc = 0x2863FCu;
    // 0x2863fc: 0x0  nop
    ctx->pc = 0x2863fcu;
    // NOP
label_286400:
    // 0x286400: 0x86020010  lh          $v0, 0x10($s0)
    ctx->pc = 0x286400u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x286404: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x286404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x286408: 0xa6020010  sh          $v0, 0x10($s0)
    ctx->pc = 0x286408u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x28640c: 0x86020010  lh          $v0, 0x10($s0)
    ctx->pc = 0x28640cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x286410: 0x28410101  slti        $at, $v0, 0x101
    ctx->pc = 0x286410u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)257) ? 1 : 0);
    // 0x286414: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x286414u;
    {
        const bool branch_taken_0x286414 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x286418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286414u;
        // 0x286418: 0x24027ffe  addiu       $v0, $zero, 0x7FFE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286414) {
            ctx->pc = 0x286428u;
            goto label_286428;
        }
    }
    ctx->pc = 0x28641Cu;
    // 0x28641c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x28641Cu;
    {
        const bool branch_taken_0x28641c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28641Cu;
        // 0x286420: 0xa6020010  sh          $v0, 0x10($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28641c) {
            ctx->pc = 0x286450u;
            goto label_286450;
        }
    }
    ctx->pc = 0x286424u;
    // 0x286424: 0x0  nop
    ctx->pc = 0x286424u;
    // NOP
label_286428:
    // 0x286428: 0xc6000024  lwc1        $f0, 0x24($s0)
    ctx->pc = 0x286428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28642c: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x28642cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x286430: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x286430u;
    {
        const bool branch_taken_0x286430 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x286434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286430u;
        // 0x286434: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286430) {
            ctx->pc = 0x286448u;
            goto label_286448;
        }
    }
    ctx->pc = 0x286438u;
    // 0x286438: 0x24027ffe  addiu       $v0, $zero, 0x7FFE
    ctx->pc = 0x286438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
    // 0x28643c: 0xa2630000  sb          $v1, 0x0($s3)
    ctx->pc = 0x28643cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x286440: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x286440u;
    {
        const bool branch_taken_0x286440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286440u;
        // 0x286444: 0xa6020010  sh          $v0, 0x10($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286440) {
            ctx->pc = 0x286450u;
            goto label_286450;
        }
    }
    ctx->pc = 0x286448u;
label_286448:
    // 0x286448: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x286448u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x28644c: 0x0  nop
    ctx->pc = 0x28644cu;
    // NOP
label_286450:
    // 0x286450: 0x9282001c  lbu         $v0, 0x1C($s4)
    ctx->pc = 0x286450u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 28)));
    // 0x286454: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x286454u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x286458: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x286458u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x28645c: 0x1440ffb0  bnez        $v0, . + 4 + (-0x50 << 2)
    ctx->pc = 0x28645Cu;
    {
        const bool branch_taken_0x28645c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x286460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28645Cu;
        // 0x286460: 0x26100050  addiu       $s0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28645c) {
            ctx->pc = 0x286320u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_286320;
        }
    }
    ctx->pc = 0x286464u;
    // 0x286464: 0x0  nop
    ctx->pc = 0x286464u;
    // NOP
label_286468:
    // 0x286468: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x286468u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28646c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x28646cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x286470: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x286470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x286474: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x286474u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x286478: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x286478u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28647c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x28647cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x286480: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x286480u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x286484: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x286484u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x286488: 0x3e00008  jr          $ra
    ctx->pc = 0x286488u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28648Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286488u;
        // 0x28648c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x286488u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x286490u;
}
