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

// Function: sub_00265DE0
// Address: 0x265de0 - 0x265ea4
void sub_00265DE0_0x265de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00265DE0_0x265de0");
#endif

    switch (ctx->pc) {
        case 0x265e00u: goto label_265e00;
        case 0x265e08u: goto label_265e08;
        case 0x265e10u: goto label_265e10;
        case 0x265e1cu: goto label_265e1c;
        case 0x265e24u: goto label_265e24;
        case 0x265e2cu: goto label_265e2c;
        case 0x265e38u: goto label_265e38;
        case 0x265e8cu: goto label_265e8c;
        default: break;
    }

    ctx->pc = 0x265de0u;

    // 0x265de0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x265de0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x265de4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x265de4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x265de8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x265de8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x265dec: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x265decu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x265df0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x265df0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265df4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x265df4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x265df8: 0xc04b946  jal         func_12E518
    ctx->pc = 0x265DF8u;
    SET_GPR_U32(ctx, 31, 0x265E00u);
    ctx->pc = 0x265DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x265DF8u;
    // 0x265dfc: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E518u, 0x265DF8u, 0x265E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265E00u;
label_265e00:
    // 0x265e00: 0xc0479a2  jal         func_11E688
    ctx->pc = 0x265E00u;
    SET_GPR_U32(ctx, 31, 0x265E08u);
    ctx->pc = 0x265E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x265E00u;
    // 0x265e04: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E688u, 0x265E00u, 0x265E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265E08u;
label_265e08:
    // 0x265e08: 0xc04bc02  jal         func_12F008
    ctx->pc = 0x265E08u;
    SET_GPR_U32(ctx, 31, 0x265E10u);
    ctx->pc = 0x265E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x265E08u;
    // 0x265e0c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F008u, 0x265E08u, 0x265E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265E10u;
label_265e10:
    // 0x265e10: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x265e10u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x265e14: 0xc04b946  jal         func_12E518
    ctx->pc = 0x265E14u;
    SET_GPR_U32(ctx, 31, 0x265E1Cu);
    ctx->pc = 0x265E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x265E14u;
    // 0x265e18: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E518u, 0x265E14u, 0x265E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265E1Cu;
label_265e1c:
    // 0x265e1c: 0xc04786e  jal         func_11E1B8
    ctx->pc = 0x265E1Cu;
    SET_GPR_U32(ctx, 31, 0x265E24u);
    ctx->pc = 0x265E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x265E1Cu;
    // 0x265e20: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E1B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E1B8u, 0x265E1Cu, 0x265E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265E24u;
label_265e24:
    // 0x265e24: 0xc04bc02  jal         func_12F008
    ctx->pc = 0x265E24u;
    SET_GPR_U32(ctx, 31, 0x265E2Cu);
    ctx->pc = 0x265E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x265E24u;
    // 0x265e28: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F008u, 0x265E24u, 0x265E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265E2Cu;
label_265e2c:
    // 0x265e2c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x265e2cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x265e30: 0xc0996a4  jal         func_265A90
    ctx->pc = 0x265E30u;
    SET_GPR_U32(ctx, 31, 0x265E38u);
    ctx->pc = 0x265E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x265E30u;
    // 0x265e34: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x265A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x265A90u, 0x265E30u, 0x265E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265E38u;
label_265e38:
    // 0x265e38: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x265e38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x265e3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x265e3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265e40: 0x4600a807  neg.s       $f0, $f21
    ctx->pc = 0x265e40u;
    ctx->f[0] = FPU_NEG_S(ctx->f[21]);
    // 0x265e44: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x265e44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x265e48: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x265e48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x265e4c: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x265e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
    // 0x265e50: 0xafa2006c  sw          $v0, 0x6C($sp)
    ctx->pc = 0x265e50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 2));
    // 0x265e54: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x265e54u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x265e58: 0xe7b40058  swc1        $f20, 0x58($sp)
    ctx->pc = 0x265e58u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x265e5c: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x265e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x265e60: 0xe7b50050  swc1        $f21, 0x50($sp)
    ctx->pc = 0x265e60u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x265e64: 0xafa0003c  sw          $zero, 0x3C($sp)
    ctx->pc = 0x265e64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
    // 0x265e68: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x265e68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x265e6c: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x265e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
    // 0x265e70: 0xafa0004c  sw          $zero, 0x4C($sp)
    ctx->pc = 0x265e70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
    // 0x265e74: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x265e74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
    // 0x265e78: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x265e78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
    // 0x265e7c: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x265e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
    // 0x265e80: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x265e80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
    // 0x265e84: 0xc0996cc  jal         func_265B30
    ctx->pc = 0x265E84u;
    SET_GPR_U32(ctx, 31, 0x265E8Cu);
    ctx->pc = 0x265E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x265E84u;
    // 0x265e88: 0xafa00068  sw          $zero, 0x68($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x265B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x265B30u, 0x265E84u, 0x265E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265E8Cu;
label_265e8c:
    // 0x265e8c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x265e8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x265e90: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x265e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x265e94: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x265e94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x265e98: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x265e98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x265e9c: 0x3e00008  jr          $ra
    ctx->pc = 0x265E9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x265EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265E9Cu;
        // 0x265ea0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x265E9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x265EA4u;
}
