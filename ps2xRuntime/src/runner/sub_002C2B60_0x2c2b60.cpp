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

// Function: sub_002C2B60
// Address: 0x2c2b60 - 0x2c2e2c
void sub_002C2B60_0x2c2b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C2B60_0x2c2b60");
#endif

    switch (ctx->pc) {
        case 0x2c2bf0u: goto label_2c2bf0;
        case 0x2c2c08u: goto label_2c2c08;
        case 0x2c2c70u: goto label_2c2c70;
        case 0x2c2ca0u: goto label_2c2ca0;
        case 0x2c2cdcu: goto label_2c2cdc;
        case 0x2c2d3cu: goto label_2c2d3c;
        case 0x2c2d5cu: goto label_2c2d5c;
        case 0x2c2dd4u: goto label_2c2dd4;
        default: break;
    }

    ctx->pc = 0x2c2b60u;

    // 0x2c2b60: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2c2b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2c2b64: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2c2b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2c2b68: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2c2b68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2c2b6c: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x2c2b6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x2c2b70: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2c2b70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x2c2b74: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2c2b74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2c2b78: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2c2b78u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2b7c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2c2b7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2c2b80: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2c2b80u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2b84: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2c2b84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2c2b88: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2c2b88u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2b8c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2c2b8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2c2b90: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x2c2b90u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2c2b94: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2c2b94u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2c2b98: 0x90c40002  lbu         $a0, 0x2($a2)
    ctx->pc = 0x2c2b98u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x2c2b9c: 0x90c30001  lbu         $v1, 0x1($a2)
    ctx->pc = 0x2c2b9cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x2c2ba0: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x2c2ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x2c2ba4: 0x42103  sra         $a0, $a0, 4
    ctx->pc = 0x2c2ba4u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 4));
    // 0x2c2ba8: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x2c2ba8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x2c2bac: 0x4ac3c  dsll32      $s5, $a0, 16
    ctx->pc = 0x2c2bacu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 4) << (32 + 16));
    // 0x2c2bb0: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2C2BB0u;
    {
        const bool branch_taken_0x2c2bb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C2BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2BB0u;
        // 0x2c2bb4: 0x15ac3f  dsra32      $s5, $s5, 16 (Delay Slot)
        SET_GPR_S64(ctx, 21, GPR_S64(ctx, 21) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2bb0) {
            ctx->pc = 0x2C2BE0u;
            goto label_2c2be0;
        }
    }
    ctx->pc = 0x2C2BB8u;
    // 0x2c2bb8: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2C2BB8u;
    {
        const bool branch_taken_0x2c2bb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c2bb8) {
            ctx->pc = 0x2C2BD8u;
            goto label_2c2bd8;
        }
    }
    ctx->pc = 0x2C2BC0u;
    // 0x2c2bc0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c2bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c2bc4: 0x0  nop
    ctx->pc = 0x2c2bc4u;
    // NOP
    // 0x2c2bc8: 0x866200c2  lh          $v0, 0xC2($s3)
    ctx->pc = 0x2c2bc8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 194)));
    // 0x2c2bcc: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x2c2bccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x2c2bd0: 0x2ac3c  dsll32      $s5, $v0, 16
    ctx->pc = 0x2c2bd0u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2c2bd4: 0x15ac3f  dsra32      $s5, $s5, 16
    ctx->pc = 0x2c2bd4u;
    SET_GPR_S64(ctx, 21, GPR_S64(ctx, 21) >> (32 + 16));
label_2c2bd8:
    // 0x2c2bd8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2C2BD8u;
    {
        const bool branch_taken_0x2c2bd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2BD8u;
        // 0x2c2bdc: 0x260882d  daddu       $s1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2bd8) {
            ctx->pc = 0x2C2BF8u;
            goto label_2c2bf8;
        }
    }
    ctx->pc = 0x2C2BE0u;
label_2c2be0:
    // 0x2c2be0: 0x8e850088  lw          $a1, 0x88($s4)
    ctx->pc = 0x2c2be0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 136)));
    // 0x2c2be4: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x2c2be4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x2c2be8: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x2C2BE8u;
    SET_GPR_U32(ctx, 31, 0x2C2BF0u);
    ctx->pc = 0x2C2BECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2BE8u;
    // 0x2c2bec: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x2C2BE8u, 0x2C2BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2BF0u;
label_2c2bf0:
    // 0x2c2bf0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2c2bf0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2bf4: 0x0  nop
    ctx->pc = 0x2c2bf4u;
    // NOP
label_2c2bf8:
    // 0x2c2bf8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2c2bf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2bfc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2c2bfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2c00: 0xc0b2214  jal         func_2C8850
    ctx->pc = 0x2C2C00u;
    SET_GPR_U32(ctx, 31, 0x2C2C08u);
    ctx->pc = 0x2C2C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2C00u;
    // 0x2c2c04: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8850u, 0x2C2C00u, 0x2C2C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2C08u;
label_2c2c08:
    // 0x2c2c08: 0x10400051  beqz        $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x2C2C08u;
    {
        const bool branch_taken_0x2c2c08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c2c08) {
            ctx->pc = 0x2C2D50u;
            goto label_2c2d50;
        }
    }
    ctx->pc = 0x2C2C10u;
    // 0x2c2c10: 0x151c3c  dsll32      $v1, $s5, 16
    ctx->pc = 0x2c2c10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) << (32 + 16));
    // 0x2c2c14: 0x3c023ac9  lui         $v0, 0x3AC9
    ctx->pc = 0x2c2c14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15049 << 16));
    // 0x2c2c18: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2c2c18u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2c2c1c: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x2c2c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2c2c20: 0x4243c  dsll32      $a0, $a0, 16
    ctx->pc = 0x2c2c20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
    // 0x2c2c24: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x2c2c24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2c2c28: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x2c2c28u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x2c2c2c: 0x86420004  lh          $v0, 0x4($s2)
    ctx->pc = 0x2c2c2cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2c2c30: 0x42103  sra         $a0, $a0, 4
    ctx->pc = 0x2c2c30u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 4));
    // 0x2c2c34: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2c2c34u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c2c38: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c2c38u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c2c3c: 0x0  nop
    ctx->pc = 0x2c2c3cu;
    // NOP
    // 0x2c2c40: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2c2c40u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2c2c44: 0x46010542  mul.s       $f21, $f0, $f1
    ctx->pc = 0x2c2c44u;
    ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2c2c48: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2c2c48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c2c4c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c2c4cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c2c50: 0x0  nop
    ctx->pc = 0x2c2c50u;
    // NOP
    // 0x2c2c54: 0x46800d20  cvt.s.w     $f20, $f1
    ctx->pc = 0x2c2c54u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    // 0x2c2c58: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2c2c58u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c2c5c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2C2C5Cu;
    {
        const bool branch_taken_0x2c2c5c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c2c5c) {
            ctx->pc = 0x2C2C68u;
            goto label_2c2c68;
        }
    }
    ctx->pc = 0x2C2C64u;
    // 0x2c2c64: 0x4600a507  neg.s       $f20, $f20
    ctx->pc = 0x2c2c64u;
    ctx->f[20] = FPU_NEG_S(ctx->f[20]);
label_2c2c68:
    // 0x2c2c68: 0xc047b2c  jal         func_11ECB0
    ctx->pc = 0x2C2C68u;
    SET_GPR_U32(ctx, 31, 0x2C2C70u);
    ctx->pc = 0x2C2C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2C68u;
    // 0x2c2c6c: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11ECB0u, 0x2C2C68u, 0x2C2C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2C70u;
label_2c2c70:
    // 0x2c2c70: 0x8e22004c  lw          $v0, 0x4C($s1)
    ctx->pc = 0x2c2c70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x2c2c74: 0x4600a042  mul.s       $f1, $f20, $f0
    ctx->pc = 0x2c2c74u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x2c2c78: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x2c2c78u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x2c2c7c: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x2c2c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x2c2c80: 0xc4400030  lwc1        $f0, 0x30($v0)
    ctx->pc = 0x2c2c80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c2c84: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2c2c84u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c2c88: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x2c2c88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x2c2c8c: 0x8e22004c  lw          $v0, 0x4C($s1)
    ctx->pc = 0x2c2c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x2c2c90: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x2c2c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x2c2c94: 0xc4400034  lwc1        $f0, 0x34($v0)
    ctx->pc = 0x2c2c94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c2c98: 0xc047a98  jal         func_11EA60
    ctx->pc = 0x2C2C98u;
    SET_GPR_U32(ctx, 31, 0x2C2CA0u);
    ctx->pc = 0x2C2C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2C98u;
    // 0x2c2c9c: 0xe7a00084  swc1        $f0, 0x84($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EA60u, 0x2C2C98u, 0x2C2CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2CA0u;
label_2c2ca0:
    // 0x2c2ca0: 0x8e22004c  lw          $v0, 0x4C($s1)
    ctx->pc = 0x2c2ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x2c2ca4: 0x4600a042  mul.s       $f1, $f20, $f0
    ctx->pc = 0x2c2ca4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x2c2ca8: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x2c2ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x2c2cac: 0xc4400038  lwc1        $f0, 0x38($v0)
    ctx->pc = 0x2c2cacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c2cb0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2c2cb0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c2cb4: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x2c2cb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x2c2cb8: 0x92430001  lbu         $v1, 0x1($s2)
    ctx->pc = 0x2c2cb8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x2c2cbc: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x2c2cbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x2c2cc0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2C2CC0u;
    {
        const bool branch_taken_0x2c2cc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c2cc0) {
            ctx->pc = 0x2C2CF0u;
            goto label_2c2cf0;
        }
    }
    ctx->pc = 0x2C2CC8u;
    // 0x2c2cc8: 0x8e62004c  lw          $v0, 0x4C($s3)
    ctx->pc = 0x2c2cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
    // 0x2c2ccc: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2c2cccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2c2cd0: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x2c2cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x2c2cd4: 0xc0ae928  jal         func_2BA4A0
    ctx->pc = 0x2C2CD4u;
    SET_GPR_U32(ctx, 31, 0x2C2CDCu);
    ctx->pc = 0x2C2CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2CD4u;
    // 0x2c2cd8: 0x24450030  addiu       $a1, $v0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BA4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BA4A0u, 0x2C2CD4u, 0x2C2CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2CDCu;
label_2c2cdc:
    // 0x2c2cdc: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x2C2CDCu;
    {
        const bool branch_taken_0x2c2cdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c2cdc) {
            ctx->pc = 0x2C2D68u;
            goto label_2c2d68;
        }
    }
    ctx->pc = 0x2C2CE4u;
    // 0x2c2ce4: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x2C2CE4u;
    {
        const bool branch_taken_0x2c2ce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2CE4u;
        // 0x2c2ce8: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2ce4) {
            ctx->pc = 0x2C2D68u;
            goto label_2c2d68;
        }
    }
    ctx->pc = 0x2C2CECu;
    // 0x2c2cec: 0x0  nop
    ctx->pc = 0x2c2cecu;
    // NOP
label_2c2cf0:
    // 0x2c2cf0: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x2c2cf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x2c2cf4: 0x8e63004c  lw          $v1, 0x4C($s3)
    ctx->pc = 0x2c2cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
    // 0x2c2cf8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C2CF8u;
    {
        const bool branch_taken_0x2c2cf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2CF8u;
        // 0x2c2cfc: 0x8c650094  lw          $a1, 0x94($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2cf8) {
            ctx->pc = 0x2C2D10u;
            goto label_2c2d10;
        }
    }
    ctx->pc = 0x2C2D00u;
    // 0x2c2d00: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2c2d00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2c2d04: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2c2d04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2c2d08: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2C2D08u;
    {
        const bool branch_taken_0x2c2d08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2D08u;
        // 0x2c2d0c: 0x24a50030  addiu       $a1, $a1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2d08) {
            ctx->pc = 0x2C2D34u;
            goto label_2c2d34;
        }
    }
    ctx->pc = 0x2C2D10u;
label_2c2d10:
    // 0x2c2d10: 0x92640002  lbu         $a0, 0x2($s3)
    ctx->pc = 0x2c2d10u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x2c2d14: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x2c2d14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x2c2d18: 0x2442f388  addiu       $v0, $v0, -0xC78
    ctx->pc = 0x2c2d18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964104));
    // 0x2c2d1c: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x2c2d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x2c2d20: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2c2d20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2c2d24: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2c2d24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2c2d28: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c2d28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c2d2c: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x2c2d2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2c2d30: 0x24a50030  addiu       $a1, $a1, 0x30
    ctx->pc = 0x2c2d30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
label_2c2d34:
    // 0x2c2d34: 0xc0ae8b8  jal         func_2BA2E0
    ctx->pc = 0x2C2D34u;
    SET_GPR_U32(ctx, 31, 0x2C2D3Cu);
    ctx->pc = 0x2C2D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2D34u;
    // 0x2c2d38: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BA2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BA2E0u, 0x2C2D34u, 0x2C2D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2D3Cu;
label_2c2d3c:
    // 0x2c2d3c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2C2D3Cu;
    {
        const bool branch_taken_0x2c2d3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c2d3c) {
            ctx->pc = 0x2C2D68u;
            goto label_2c2d68;
        }
    }
    ctx->pc = 0x2C2D44u;
    // 0x2c2d44: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2C2D44u;
    {
        const bool branch_taken_0x2c2d44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2D44u;
        // 0x2c2d48: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2d44) {
            ctx->pc = 0x2C2D68u;
            goto label_2c2d68;
        }
    }
    ctx->pc = 0x2C2D4Cu;
    // 0x2c2d4c: 0x0  nop
    ctx->pc = 0x2c2d4cu;
    // NOP
label_2c2d50:
    // 0x2c2d50: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2c2d50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2d54: 0xc0b20e4  jal         func_2C8390
    ctx->pc = 0x2C2D54u;
    SET_GPR_U32(ctx, 31, 0x2C2D5Cu);
    ctx->pc = 0x2C2D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2D54u;
    // 0x2c2d58: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8390u, 0x2C2D54u, 0x2C2D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2D5Cu;
label_2c2d5c:
    // 0x2c2d5c: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x2C2D5Cu;
    {
        const bool branch_taken_0x2c2d5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2D5Cu;
        // 0x2c2d60: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2d5c) {
            ctx->pc = 0x2C2E00u;
            goto label_2c2e00;
        }
    }
    ctx->pc = 0x2C2D64u;
    // 0x2c2d64: 0x0  nop
    ctx->pc = 0x2c2d64u;
    // NOP
label_2c2d68:
    // 0x2c2d68: 0x86420004  lh          $v0, 0x4($s2)
    ctx->pc = 0x2c2d68u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2c2d6c: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2C2D6Cu;
    {
        const bool branch_taken_0x2c2d6c = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x2c2d6c) {
            ctx->pc = 0x2C2D78u;
            goto label_2c2d78;
        }
    }
    ctx->pc = 0x2C2D74u;
    // 0x2c2d74: 0x3a100001  xori        $s0, $s0, 0x1
    ctx->pc = 0x2c2d74u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)1);
label_2c2d78:
    // 0x2c2d78: 0x1200001f  beqz        $s0, . + 4 + (0x1F << 2)
    ctx->pc = 0x2C2D78u;
    {
        const bool branch_taken_0x2c2d78 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c2d78) {
            ctx->pc = 0x2C2DF8u;
            goto label_2c2df8;
        }
    }
    ctx->pc = 0x2C2D80u;
    // 0x2c2d80: 0x938289d0  lbu         $v0, -0x7630($gp)
    ctx->pc = 0x2c2d80u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937040)));
    // 0x2c2d84: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2C2D84u;
    {
        const bool branch_taken_0x2c2d84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C2D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2D84u;
        // 0x2c2d88: 0x92450003  lbu         $a1, 0x3($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2d84) {
            ctx->pc = 0x2C2DE0u;
            goto label_2c2de0;
        }
    }
    ctx->pc = 0x2C2D8Cu;
    // 0x2c2d8c: 0x10a0000e  beqz        $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x2C2D8Cu;
    {
        const bool branch_taken_0x2c2d8c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2D8Cu;
        // 0x2c2d90: 0xa280004f  sb          $zero, 0x4F($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 79), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2d8c) {
            ctx->pc = 0x2C2DC8u;
            goto label_2c2dc8;
        }
    }
    ctx->pc = 0x2C2D94u;
    // 0x2c2d94: 0x92840037  lbu         $a0, 0x37($s4)
    ctx->pc = 0x2c2d94u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 55)));
    // 0x2c2d98: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x2c2d98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2c2d9c: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2c2d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2c2da0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2c2da0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c2da4: 0xa284004e  sb          $a0, 0x4E($s4)
    ctx->pc = 0x2c2da4u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 78), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c2da8: 0xa2850037  sb          $a1, 0x37($s4)
    ctx->pc = 0x2c2da8u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 55), (uint8_t)GPR_U32(ctx, 5));
    // 0x2c2dac: 0xa2800032  sb          $zero, 0x32($s4)
    ctx->pc = 0x2c2dacu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 50), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c2db0: 0xa283005f  sb          $v1, 0x5F($s4)
    ctx->pc = 0x2c2db0u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 95), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c2db4: 0xa6800080  sh          $zero, 0x80($s4)
    ctx->pc = 0x2c2db4u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 128), (uint16_t)GPR_U32(ctx, 0));
    // 0x2c2db8: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x2c2db8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2c2dbc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c2dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c2dc0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2C2DC0u;
    {
        const bool branch_taken_0x2c2dc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2DC0u;
        // 0x2c2dc4: 0x8c420018  lw          $v0, 0x18($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2dc0) {
            ctx->pc = 0x2C2DF0u;
            goto label_2c2df0;
        }
    }
    ctx->pc = 0x2C2DC8u;
label_2c2dc8:
    // 0x2c2dc8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2c2dc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2dcc: 0xc0b20e4  jal         func_2C8390
    ctx->pc = 0x2C2DCCu;
    SET_GPR_U32(ctx, 31, 0x2C2DD4u);
    ctx->pc = 0x2C2DD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2DCCu;
    // 0x2c2dd0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8390u, 0x2C2DCCu, 0x2C2DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2DD4u;
label_2c2dd4:
    // 0x2c2dd4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2C2DD4u;
    {
        const bool branch_taken_0x2c2dd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c2dd4) {
            ctx->pc = 0x2C2DE8u;
            goto label_2c2de8;
        }
    }
    ctx->pc = 0x2C2DDCu;
    // 0x2c2ddc: 0x0  nop
    ctx->pc = 0x2c2ddcu;
    // NOP
label_2c2de0:
    // 0x2c2de0: 0xa38589d8  sb          $a1, -0x7628($gp)
    ctx->pc = 0x2c2de0u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937048), (uint8_t)GPR_U32(ctx, 5));
    // 0x2c2de4: 0x0  nop
    ctx->pc = 0x2c2de4u;
    // NOP
label_2c2de8:
    // 0x2c2de8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c2de8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2dec: 0x0  nop
    ctx->pc = 0x2c2decu;
    // NOP
label_2c2df0:
    // 0x2c2df0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2C2DF0u;
    {
        const bool branch_taken_0x2c2df0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c2df0) {
            ctx->pc = 0x2C2E00u;
            goto label_2c2e00;
        }
    }
    ctx->pc = 0x2C2DF8u;
label_2c2df8:
    // 0x2c2df8: 0x26420006  addiu       $v0, $s2, 0x6
    ctx->pc = 0x2c2df8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 6));
    // 0x2c2dfc: 0x0  nop
    ctx->pc = 0x2c2dfcu;
    // NOP
label_2c2e00:
    // 0x2c2e00: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2c2e00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2c2e04: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x2c2e04u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2c2e08: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x2c2e08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2c2e0c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2c2e0cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c2e10: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2c2e10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2c2e14: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2c2e14u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c2e18: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2c2e18u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c2e1c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2c2e1cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c2e20: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2c2e20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c2e24: 0x3e00008  jr          $ra
    ctx->pc = 0x2C2E24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C2E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2E24u;
        // 0x2c2e28: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C2E24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C2E2Cu;
}
