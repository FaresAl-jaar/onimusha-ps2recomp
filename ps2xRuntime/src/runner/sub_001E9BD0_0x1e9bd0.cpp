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

// Function: sub_001E9BD0
// Address: 0x1e9bd0 - 0x1e9c98
void sub_001E9BD0_0x1e9bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E9BD0_0x1e9bd0");
#endif

    switch (ctx->pc) {
        case 0x1e9becu: goto label_1e9bec;
        case 0x1e9bfcu: goto label_1e9bfc;
        case 0x1e9c20u: goto label_1e9c20;
        case 0x1e9c30u: goto label_1e9c30;
        default: break;
    }

    ctx->pc = 0x1e9bd0u;

    // 0x1e9bd0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e9bd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e9bd4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e9bd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1e9bd8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e9bd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e9bdc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e9bdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e9be0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1e9be0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9be4: 0xc078684  jal         func_1E1A10
    ctx->pc = 0x1E9BE4u;
    SET_GPR_U32(ctx, 31, 0x1E9BECu);
    ctx->pc = 0x1E9BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9BE4u;
    // 0x1e9be8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E1A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1A10u, 0x1E9BE4u, 0x1E9BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9BECu;
label_1e9bec:
    // 0x1e9bec: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x1e9becu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x1e9bf0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1e9bf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9bf4: 0xc076bec  jal         func_1DAFB0
    ctx->pc = 0x1E9BF4u;
    SET_GPR_U32(ctx, 31, 0x1E9BFCu);
    ctx->pc = 0x1E9BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9BF4u;
    // 0x1e9bf8: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DAFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DAFB0u, 0x1E9BF4u, 0x1E9BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9BFCu;
label_1e9bfc:
    // 0x1e9bfc: 0x7a020080  lq          $v0, 0x80($s0)
    ctx->pc = 0x1e9bfcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x1e9c00: 0x7e020010  sq          $v0, 0x10($s0)
    ctx->pc = 0x1e9c00u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
    // 0x1e9c04: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1e9c04u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1e9c08: 0xa2020002  sb          $v0, 0x2($s0)
    ctx->pc = 0x1e9c08u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x1e9c0c: 0xa2000004  sb          $zero, 0x4($s0)
    ctx->pc = 0x1e9c0cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e9c10: 0x92050038  lbu         $a1, 0x38($s0)
    ctx->pc = 0x1e9c10u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x1e9c14: 0x92060039  lbu         $a2, 0x39($s0)
    ctx->pc = 0x1e9c14u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 57)));
    // 0x1e9c18: 0xc074350  jal         func_1D0D40
    ctx->pc = 0x1E9C18u;
    SET_GPR_U32(ctx, 31, 0x1E9C20u);
    ctx->pc = 0x1E9C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9C18u;
    // 0x1e9c1c: 0x26040090  addiu       $a0, $s0, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0D40u, 0x1E9C18u, 0x1E9C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9C20u;
label_1e9c20:
    // 0x1e9c20: 0x9205003a  lbu         $a1, 0x3A($s0)
    ctx->pc = 0x1e9c20u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 58)));
    // 0x1e9c24: 0x9206003b  lbu         $a2, 0x3B($s0)
    ctx->pc = 0x1e9c24u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 59)));
    // 0x1e9c28: 0xc074378  jal         func_1D0DE0
    ctx->pc = 0x1E9C28u;
    SET_GPR_U32(ctx, 31, 0x1E9C30u);
    ctx->pc = 0x1E9C2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9C28u;
    // 0x1e9c2c: 0x26040090  addiu       $a0, $s0, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0DE0u, 0x1E9C28u, 0x1E9C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9C30u;
label_1e9c30:
    // 0x1e9c30: 0x8f8580e0  lw          $a1, -0x7F20($gp)
    ctx->pc = 0x1e9c30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x1e9c34: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1e9c34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x1e9c38: 0x34440dcd  ori         $a0, $v0, 0xDCD
    ctx->pc = 0x1e9c38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
    // 0x1e9c3c: 0x96060044  lhu         $a2, 0x44($s0)
    ctx->pc = 0x1e9c3cu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x1e9c40: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e9c40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e9c44: 0xa42818  mult        $a1, $a1, $a0
    ctx->pc = 0x1e9c44u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1e9c48: 0xc61821  addu        $v1, $a2, $a2
    ctx->pc = 0x1e9c48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 6)));
    // 0x1e9c4c: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x1e9c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1e9c50: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x1e9c50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1e9c54: 0xaf8380e0  sw          $v1, -0x7F20($gp)
    ctx->pc = 0x1e9c54u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 3));
    // 0x1e9c58: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x1e9c58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x1e9c5c: 0x31b02  srl         $v1, $v1, 12
    ctx->pc = 0x1e9c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 12));
    // 0x1e9c60: 0x64001b  divu        $zero, $v1, $a0
    ctx->pc = 0x1e9c60u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x1e9c64: 0x0  nop
    ctx->pc = 0x1e9c64u;
    // NOP
    // 0x1e9c68: 0x0  nop
    ctx->pc = 0x1e9c68u;
    // NOP
    // 0x1e9c6c: 0x1810  mfhi        $v1
    ctx->pc = 0x1e9c6cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1e9c70: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x1e9c70u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1e9c74: 0xae03003c  sw          $v1, 0x3C($s0)
    ctx->pc = 0x1e9c74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 3));
    // 0x1e9c78: 0x8e03003c  lw          $v1, 0x3C($s0)
    ctx->pc = 0x1e9c78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1e9c7c: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x1e9c7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x1e9c80: 0xae03003c  sw          $v1, 0x3C($s0)
    ctx->pc = 0x1e9c80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 3));
    // 0x1e9c84: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e9c84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e9c88: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e9c88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e9c8c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e9c8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e9c90: 0x3e00008  jr          $ra
    ctx->pc = 0x1E9C90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E9C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9C90u;
        // 0x1e9c94: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E9C90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E9C98u;
}
