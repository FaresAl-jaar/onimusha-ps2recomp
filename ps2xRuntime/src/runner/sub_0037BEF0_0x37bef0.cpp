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

// Function: sub_0037BEF0
// Address: 0x37bef0 - 0x37c1c0
void sub_0037BEF0_0x37bef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037BEF0_0x37bef0");
#endif

    switch (ctx->pc) {
        case 0x37bf24u: goto label_37bf24;
        case 0x37bfc0u: goto label_37bfc0;
        case 0x37bfd8u: goto label_37bfd8;
        case 0x37bff8u: goto label_37bff8;
        case 0x37c000u: goto label_37c000;
        case 0x37c078u: goto label_37c078;
        case 0x37c088u: goto label_37c088;
        case 0x37c098u: goto label_37c098;
        case 0x37c0a8u: goto label_37c0a8;
        case 0x37c0b8u: goto label_37c0b8;
        case 0x37c0c8u: goto label_37c0c8;
        case 0x37c0d8u: goto label_37c0d8;
        case 0x37c0e0u: goto label_37c0e0;
        case 0x37c108u: goto label_37c108;
        case 0x37c138u: goto label_37c138;
        case 0x37c158u: goto label_37c158;
        default: break;
    }

    ctx->pc = 0x37bef0u;

    // 0x37bef0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x37bef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x37bef4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x37bef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x37bef8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x37bef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x37befc: 0x8c8229c0  lw          $v0, 0x29C0($a0)
    ctx->pc = 0x37befcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 10688)));
    // 0x37bf00: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x37bf00u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x37bf04: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x37BF04u;
    {
        const bool branch_taken_0x37bf04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37BF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37BF04u;
        // 0x37bf08: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37bf04) {
            ctx->pc = 0x37BFE0u;
            goto label_37bfe0;
        }
    }
    ctx->pc = 0x37BF0Cu;
    // 0x37bf0c: 0x92022b78  lbu         $v0, 0x2B78($s0)
    ctx->pc = 0x37bf0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11128)));
    // 0x37bf10: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x37bf10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x37bf14: 0x14400032  bnez        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x37BF14u;
    {
        const bool branch_taken_0x37bf14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x37bf14) {
            ctx->pc = 0x37BFE0u;
            goto label_37bfe0;
        }
    }
    ctx->pc = 0x37BF1Cu;
    // 0x37bf1c: 0xc0ddee0  jal         func_377B80
    ctx->pc = 0x37BF1Cu;
    SET_GPR_U32(ctx, 31, 0x37BF24u);
    ctx->pc = 0x377B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x377B80u, 0x37BF1Cu, 0x37BF24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37BF24u;
label_37bf24:
    // 0x37bf24: 0x28410008  slti        $at, $v0, 0x8
    ctx->pc = 0x37bf24u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x37bf28: 0x1020002d  beqz        $at, . + 4 + (0x2D << 2)
    ctx->pc = 0x37BF28u;
    {
        const bool branch_taken_0x37bf28 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x37bf28) {
            ctx->pc = 0x37BFE0u;
            goto label_37bfe0;
        }
    }
    ctx->pc = 0x37BF30u;
    // 0x37bf30: 0x92022b91  lbu         $v0, 0x2B91($s0)
    ctx->pc = 0x37bf30u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11153)));
    // 0x37bf34: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x37bf34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x37bf38: 0xa2022b91  sb          $v0, 0x2B91($s0)
    ctx->pc = 0x37bf38u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11153), (uint8_t)GPR_U32(ctx, 2));
    // 0x37bf3c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x37bf3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x37bf40: 0x1c400027  bgtz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x37BF40u;
    {
        const bool branch_taken_0x37bf40 = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x37bf40) {
            ctx->pc = 0x37BFE0u;
            goto label_37bfe0;
        }
    }
    ctx->pc = 0x37BF48u;
    // 0x37bf48: 0x8e022b80  lw          $v0, 0x2B80($s0)
    ctx->pc = 0x37bf48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11136)));
    // 0x37bf4c: 0xc6010020  lwc1        $f1, 0x20($s0)
    ctx->pc = 0x37bf4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x37bf50: 0xc4400020  lwc1        $f0, 0x20($v0)
    ctx->pc = 0x37bf50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x37bf54: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x37bf54u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x37bf58: 0x4500001f  bc1f        . + 4 + (0x1F << 2)
    ctx->pc = 0x37BF58u;
    {
        const bool branch_taken_0x37bf58 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x37bf58) {
            ctx->pc = 0x37BFD8u;
            goto label_37bfd8;
        }
    }
    ctx->pc = 0x37BF60u;
    // 0x37bf60: 0xc4400030  lwc1        $f0, 0x30($v0)
    ctx->pc = 0x37bf60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x37bf64: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x37bf64u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x37bf68: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
    ctx->pc = 0x37BF68u;
    {
        const bool branch_taken_0x37bf68 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x37bf68) {
            ctx->pc = 0x37BFD8u;
            goto label_37bfd8;
        }
    }
    ctx->pc = 0x37BF70u;
    // 0x37bf70: 0xc6010028  lwc1        $f1, 0x28($s0)
    ctx->pc = 0x37bf70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x37bf74: 0xc4400028  lwc1        $f0, 0x28($v0)
    ctx->pc = 0x37bf74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x37bf78: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x37bf78u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x37bf7c: 0x45000016  bc1f        . + 4 + (0x16 << 2)
    ctx->pc = 0x37BF7Cu;
    {
        const bool branch_taken_0x37bf7c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x37bf7c) {
            ctx->pc = 0x37BFD8u;
            goto label_37bfd8;
        }
    }
    ctx->pc = 0x37BF84u;
    // 0x37bf84: 0xc4400038  lwc1        $f0, 0x38($v0)
    ctx->pc = 0x37bf84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x37bf88: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x37bf88u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x37bf8c: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x37BF8Cu;
    {
        const bool branch_taken_0x37bf8c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x37bf8c) {
            ctx->pc = 0x37BFD8u;
            goto label_37bfd8;
        }
    }
    ctx->pc = 0x37BF94u;
    // 0x37bf94: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x37bf94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x37bf98: 0x3c060068  lui         $a2, 0x68
    ctx->pc = 0x37bf98u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)104 << 16));
    // 0x37bf9c: 0x2442af90  addiu       $v0, $v0, -0x5070
    ctx->pc = 0x37bf9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946704));
    // 0x37bfa0: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x37bfa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x37bfa4: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x37bfa4u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x65AF90u));
    // 0x37bfa8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x37bfa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x37bfac: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x37bfacu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x37bfb0: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x37bfb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x37bfb4: 0x8c450094  lw          $a1, 0x94($v0)
    ctx->pc = 0x37bfb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x37bfb8: 0xc07679c  jal         func_1D9E70
    ctx->pc = 0x37BFB8u;
    SET_GPR_U32(ctx, 31, 0x37BFC0u);
    ctx->pc = 0x37BFBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37BFB8u;
    // 0x37bfbc: 0x24c61d30  addiu       $a2, $a2, 0x1D30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 7472));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E70u, 0x37BFB8u, 0x37BFC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37BFC0u;
label_37bfc0:
    // 0x37bfc0: 0x920408e8  lbu         $a0, 0x8E8($s0)
    ctx->pc = 0x37bfc0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2280)));
    // 0x37bfc4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x37bfc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37bfc8: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x37bfc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x37bfcc: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x37bfccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x37bfd0: 0xc0bc708  jal         func_2F1C20
    ctx->pc = 0x37BFD0u;
    SET_GPR_U32(ctx, 31, 0x37BFD8u);
    ctx->pc = 0x37BFD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37BFD0u;
    // 0x37bfd4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1C20u, 0x37BFD0u, 0x37BFD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37BFD8u;
label_37bfd8:
    // 0x37bfd8: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x37bfd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x37bfdc: 0xa2022b91  sb          $v0, 0x2B91($s0)
    ctx->pc = 0x37bfdcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11153), (uint8_t)GPR_U32(ctx, 2));
label_37bfe0:
    // 0x37bfe0: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x37bfe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x37bfe4: 0x26042ba0  addiu       $a0, $s0, 0x2BA0
    ctx->pc = 0x37bfe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 11168));
    // 0x37bfe8: 0x26060710  addiu       $a2, $s0, 0x710
    ctx->pc = 0x37bfe8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1808));
    // 0x37bfec: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x37bfecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x37bff0: 0xc041442  jal         func_105108
    ctx->pc = 0x37BFF0u;
    SET_GPR_U32(ctx, 31, 0x37BFF8u);
    ctx->pc = 0x37BFF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37BFF0u;
    // 0x37bff4: 0x24450c00  addiu       $a1, $v0, 0xC00 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 3072));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x37BFF0u, 0x37BFF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37BFF8u;
label_37bff8:
    // 0x37bff8: 0xc0e02d8  jal         func_380B60
    ctx->pc = 0x37BFF8u;
    SET_GPR_U32(ctx, 31, 0x37C000u);
    ctx->pc = 0x37BFFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37BFF8u;
    // 0x37bffc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x380B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x380B60u, 0x37BFF8u, 0x37C000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C000u;
label_37c000:
    // 0x37c000: 0x8e0229c0  lw          $v0, 0x29C0($s0)
    ctx->pc = 0x37c000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10688)));
    // 0x37c004: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x37c004u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x37c008: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x37C008u;
    {
        const bool branch_taken_0x37c008 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x37c008) {
            ctx->pc = 0x37C0D8u;
            goto label_37c0d8;
        }
    }
    ctx->pc = 0x37C010u;
    // 0x37c010: 0x9204065c  lbu         $a0, 0x65C($s0)
    ctx->pc = 0x37c010u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1628)));
    // 0x37c014: 0x240200f6  addiu       $v0, $zero, 0xF6
    ctx->pc = 0x37c014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 246));
    // 0x37c018: 0x1082002d  beq         $a0, $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x37C018u;
    {
        const bool branch_taken_0x37c018 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x37C01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C018u;
        // 0x37c01c: 0x240200f5  addiu       $v0, $zero, 0xF5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 245));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37c018) {
            ctx->pc = 0x37C0D0u;
            goto label_37c0d0;
        }
    }
    ctx->pc = 0x37C020u;
    // 0x37c020: 0x10820027  beq         $a0, $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x37C020u;
    {
        const bool branch_taken_0x37c020 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x37c020) {
            ctx->pc = 0x37C0C0u;
            goto label_37c0c0;
        }
    }
    ctx->pc = 0x37C028u;
    // 0x37c028: 0x240200f4  addiu       $v0, $zero, 0xF4
    ctx->pc = 0x37c028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 244));
    // 0x37c02c: 0x10820020  beq         $a0, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x37C02Cu;
    {
        const bool branch_taken_0x37c02c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x37C030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C02Cu;
        // 0x37c030: 0x240200f3  addiu       $v0, $zero, 0xF3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 243));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37c02c) {
            ctx->pc = 0x37C0B0u;
            goto label_37c0b0;
        }
    }
    ctx->pc = 0x37C034u;
    // 0x37c034: 0x1082001a  beq         $a0, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x37C034u;
    {
        const bool branch_taken_0x37c034 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x37c034) {
            ctx->pc = 0x37C0A0u;
            goto label_37c0a0;
        }
    }
    ctx->pc = 0x37C03Cu;
    // 0x37c03c: 0x240200f2  addiu       $v0, $zero, 0xF2
    ctx->pc = 0x37c03cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 242));
    // 0x37c040: 0x10820013  beq         $a0, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x37C040u;
    {
        const bool branch_taken_0x37c040 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x37C044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C040u;
        // 0x37c044: 0x240200f1  addiu       $v0, $zero, 0xF1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 241));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37c040) {
            ctx->pc = 0x37C090u;
            goto label_37c090;
        }
    }
    ctx->pc = 0x37C048u;
    // 0x37c048: 0x1082000d  beq         $a0, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x37C048u;
    {
        const bool branch_taken_0x37c048 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x37C04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C048u;
        // 0x37c04c: 0x240300f0  addiu       $v1, $zero, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37c048) {
            ctx->pc = 0x37C080u;
            goto label_37c080;
        }
    }
    ctx->pc = 0x37C050u;
    // 0x37c050: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x37C050u;
    {
        const bool branch_taken_0x37c050 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x37C054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C050u;
        // 0x37c054: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37c050) {
            ctx->pc = 0x37C070u;
            goto label_37c070;
        }
    }
    ctx->pc = 0x37C058u;
    // 0x37c058: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x37C058u;
    {
        const bool branch_taken_0x37c058 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x37c058) {
            ctx->pc = 0x37C068u;
            goto label_37c068;
        }
    }
    ctx->pc = 0x37C060u;
    // 0x37c060: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x37C060u;
    {
        const bool branch_taken_0x37c060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37c060) {
            ctx->pc = 0x37C0D8u;
            goto label_37c0d8;
        }
    }
    ctx->pc = 0x37C068u;
label_37c068:
    // 0x37c068: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x37C068u;
    {
        const bool branch_taken_0x37c068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37C06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C068u;
        // 0x37c06c: 0xa2030780  sb          $v1, 0x780($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37c068) {
            ctx->pc = 0x37C0D8u;
            goto label_37c0d8;
        }
    }
    ctx->pc = 0x37C070u;
label_37c070:
    // 0x37c070: 0xc0df1a8  jal         func_37C6A0
    ctx->pc = 0x37C070u;
    SET_GPR_U32(ctx, 31, 0x37C078u);
    ctx->pc = 0x37C074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C070u;
    // 0x37c074: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37C6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37C6A0u, 0x37C070u, 0x37C078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C078u;
label_37c078:
    // 0x37c078: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x37C078u;
    {
        const bool branch_taken_0x37c078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37c078) {
            ctx->pc = 0x37C0D8u;
            goto label_37c0d8;
        }
    }
    ctx->pc = 0x37C080u;
label_37c080:
    // 0x37c080: 0xc0df244  jal         func_37C910
    ctx->pc = 0x37C080u;
    SET_GPR_U32(ctx, 31, 0x37C088u);
    ctx->pc = 0x37C084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C080u;
    // 0x37c084: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37C910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37C910u, 0x37C080u, 0x37C088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C088u;
label_37c088:
    // 0x37c088: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x37C088u;
    {
        const bool branch_taken_0x37c088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37c088) {
            ctx->pc = 0x37C0D8u;
            goto label_37c0d8;
        }
    }
    ctx->pc = 0x37C090u;
label_37c090:
    // 0x37c090: 0xc0df2cc  jal         func_37CB30
    ctx->pc = 0x37C090u;
    SET_GPR_U32(ctx, 31, 0x37C098u);
    ctx->pc = 0x37C094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C090u;
    // 0x37c094: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37CB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37CB30u, 0x37C090u, 0x37C098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C098u;
label_37c098:
    // 0x37c098: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x37C098u;
    {
        const bool branch_taken_0x37c098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37c098) {
            ctx->pc = 0x37C0D8u;
            goto label_37c0d8;
        }
    }
    ctx->pc = 0x37C0A0u;
label_37c0a0:
    // 0x37c0a0: 0xc0df330  jal         func_37CCC0
    ctx->pc = 0x37C0A0u;
    SET_GPR_U32(ctx, 31, 0x37C0A8u);
    ctx->pc = 0x37C0A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C0A0u;
    // 0x37c0a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37CCC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37CCC0u, 0x37C0A0u, 0x37C0A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C0A8u;
label_37c0a8:
    // 0x37c0a8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x37C0A8u;
    {
        const bool branch_taken_0x37c0a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37c0a8) {
            ctx->pc = 0x37C0D8u;
            goto label_37c0d8;
        }
    }
    ctx->pc = 0x37C0B0u;
label_37c0b0:
    // 0x37c0b0: 0xc0df6bc  jal         func_37DAF0
    ctx->pc = 0x37C0B0u;
    SET_GPR_U32(ctx, 31, 0x37C0B8u);
    ctx->pc = 0x37C0B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C0B0u;
    // 0x37c0b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37DAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37DAF0u, 0x37C0B0u, 0x37C0B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C0B8u;
label_37c0b8:
    // 0x37c0b8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x37C0B8u;
    {
        const bool branch_taken_0x37c0b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37c0b8) {
            ctx->pc = 0x37C0D8u;
            goto label_37c0d8;
        }
    }
    ctx->pc = 0x37C0C0u;
label_37c0c0:
    // 0x37c0c0: 0xc0df920  jal         func_37E480
    ctx->pc = 0x37C0C0u;
    SET_GPR_U32(ctx, 31, 0x37C0C8u);
    ctx->pc = 0x37C0C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C0C0u;
    // 0x37c0c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37E480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37E480u, 0x37C0C0u, 0x37C0C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C0C8u;
label_37c0c8:
    // 0x37c0c8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x37C0C8u;
    {
        const bool branch_taken_0x37c0c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37c0c8) {
            ctx->pc = 0x37C0D8u;
            goto label_37c0d8;
        }
    }
    ctx->pc = 0x37C0D0u;
label_37c0d0:
    // 0x37c0d0: 0xc0dfb64  jal         func_37ED90
    ctx->pc = 0x37C0D0u;
    SET_GPR_U32(ctx, 31, 0x37C0D8u);
    ctx->pc = 0x37C0D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C0D0u;
    // 0x37c0d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37ED90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37ED90u, 0x37C0D0u, 0x37C0D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C0D8u;
label_37c0d8:
    // 0x37c0d8: 0xc0df850  jal         func_37E140
    ctx->pc = 0x37C0D8u;
    SET_GPR_U32(ctx, 31, 0x37C0E0u);
    ctx->pc = 0x37C0DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C0D8u;
    // 0x37c0dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37E140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37E140u, 0x37C0D8u, 0x37C0E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C0E0u;
label_37c0e0:
    // 0x37c0e0: 0x92022b78  lbu         $v0, 0x2B78($s0)
    ctx->pc = 0x37c0e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11128)));
    // 0x37c0e4: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x37c0e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x37c0e8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x37C0E8u;
    {
        const bool branch_taken_0x37c0e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x37c0e8) {
            ctx->pc = 0x37C100u;
            goto label_37c100;
        }
    }
    ctx->pc = 0x37C0F0u;
    // 0x37c0f0: 0x8e0206cc  lw          $v0, 0x6CC($s0)
    ctx->pc = 0x37c0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1740)));
    // 0x37c0f4: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x37c0f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x37c0f8: 0xae0206cc  sw          $v0, 0x6CC($s0)
    ctx->pc = 0x37c0f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1740), GPR_U32(ctx, 2));
    // 0x37c0fc: 0x0  nop
    ctx->pc = 0x37c0fcu;
    // NOP
label_37c100:
    // 0x37c100: 0xc0a4d3c  jal         func_2934F0
    ctx->pc = 0x37C100u;
    SET_GPR_U32(ctx, 31, 0x37C108u);
    ctx->pc = 0x37C104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C100u;
    // 0x37c104: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2934F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2934F0u, 0x37C100u, 0x37C108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C108u;
label_37c108:
    // 0x37c108: 0x92032b78  lbu         $v1, 0x2B78($s0)
    ctx->pc = 0x37c108u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11128)));
    // 0x37c10c: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x37c10cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x37c110: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x37C110u;
    {
        const bool branch_taken_0x37c110 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x37c110) {
            ctx->pc = 0x37C138u;
            goto label_37c138;
        }
    }
    ctx->pc = 0x37C118u;
    // 0x37c118: 0x92032bbc  lbu         $v1, 0x2BBC($s0)
    ctx->pc = 0x37c118u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11196)));
    // 0x37c11c: 0xa2032b07  sb          $v1, 0x2B07($s0)
    ctx->pc = 0x37c11cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11015), (uint8_t)GPR_U32(ctx, 3));
    // 0x37c120: 0x8e0306ac  lw          $v1, 0x6AC($s0)
    ctx->pc = 0x37c120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1708)));
    // 0x37c124: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x37c124u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x37c128: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x37C128u;
    {
        const bool branch_taken_0x37c128 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x37C12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C128u;
        // 0x37c12c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37c128) {
            ctx->pc = 0x37C138u;
            goto label_37c138;
        }
    }
    ctx->pc = 0x37C130u;
    // 0x37c130: 0xc0e0160  jal         func_380580
    ctx->pc = 0x37C130u;
    SET_GPR_U32(ctx, 31, 0x37C138u);
    ctx->pc = 0x380580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x380580u, 0x37C130u, 0x37C138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C138u;
label_37c138:
    // 0x37c138: 0x92032b78  lbu         $v1, 0x2B78($s0)
    ctx->pc = 0x37c138u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11128)));
    // 0x37c13c: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x37c13cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x37c140: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x37C140u;
    {
        const bool branch_taken_0x37c140 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x37c140) {
            ctx->pc = 0x37C188u;
            goto label_37c188;
        }
    }
    ctx->pc = 0x37C148u;
    // 0x37c148: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x37c148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x37c14c: 0x260500c0  addiu       $a1, $s0, 0xC0
    ctx->pc = 0x37c14cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
    // 0x37c150: 0xc0defa0  jal         func_37BE80
    ctx->pc = 0x37C150u;
    SET_GPR_U32(ctx, 31, 0x37C158u);
    ctx->pc = 0x37C154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C150u;
    // 0x37c154: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37BE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37BE80u, 0x37C150u, 0x37C158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C158u;
label_37c158:
    // 0x37c158: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x37c158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x37c15c: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x37c15cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x37c160: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x37c160u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x37c164: 0xe4600040  swc1        $f0, 0x40($v1)
    ctx->pc = 0x37c164u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 64), bits); }
    // 0x37c168: 0xc6000024  lwc1        $f0, 0x24($s0)
    ctx->pc = 0x37c168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x37c16c: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x37c16cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x37c170: 0xe4600044  swc1        $f0, 0x44($v1)
    ctx->pc = 0x37c170u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 68), bits); }
    // 0x37c174: 0xc6000028  lwc1        $f0, 0x28($s0)
    ctx->pc = 0x37c174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x37c178: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x37c178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x37c17c: 0xe4600048  swc1        $f0, 0x48($v1)
    ctx->pc = 0x37c17cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 72), bits); }
    // 0x37c180: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x37c180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x37c184: 0xac64004c  sw          $a0, 0x4C($v1)
    ctx->pc = 0x37c184u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 76), GPR_U32(ctx, 4));
label_37c188:
    // 0x37c188: 0x8e0329c0  lw          $v1, 0x29C0($s0)
    ctx->pc = 0x37c188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10688)));
    // 0x37c18c: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x37c18cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x37c190: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x37C190u;
    {
        const bool branch_taken_0x37c190 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x37c190) {
            ctx->pc = 0x37C1B0u;
            goto label_37c1b0;
        }
    }
    ctx->pc = 0x37C198u;
    // 0x37c198: 0x9204065c  lbu         $a0, 0x65C($s0)
    ctx->pc = 0x37c198u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1628)));
    // 0x37c19c: 0x24030094  addiu       $v1, $zero, 0x94
    ctx->pc = 0x37c19cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 148));
    // 0x37c1a0: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x37C1A0u;
    {
        const bool branch_taken_0x37c1a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x37c1a0) {
            ctx->pc = 0x37C1B0u;
            goto label_37c1b0;
        }
    }
    ctx->pc = 0x37C1A8u;
    // 0x37c1a8: 0xa2030780  sb          $v1, 0x780($s0)
    ctx->pc = 0x37c1a8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
    // 0x37c1ac: 0x0  nop
    ctx->pc = 0x37c1acu;
    // NOP
label_37c1b0:
    // 0x37c1b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x37c1b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37c1b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x37c1b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37c1b8: 0x3e00008  jr          $ra
    ctx->pc = 0x37C1B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37C1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C1B8u;
        // 0x37c1bc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37C1B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37C1C0u;
}
