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

// Function: sub_001ECAF0
// Address: 0x1ecaf0 - 0x1ecb68
void sub_001ECAF0_0x1ecaf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ECAF0_0x1ecaf0");
#endif

    switch (ctx->pc) {
        case 0x1ecb0cu: goto label_1ecb0c;
        case 0x1ecb1cu: goto label_1ecb1c;
        case 0x1ecb40u: goto label_1ecb40;
        case 0x1ecb50u: goto label_1ecb50;
        default: break;
    }

    ctx->pc = 0x1ecaf0u;

    // 0x1ecaf0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ecaf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ecaf4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1ecaf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1ecaf8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ecaf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ecafc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ecafcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ecb00: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ecb00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ecb04: 0xc078684  jal         func_1E1A10
    ctx->pc = 0x1ECB04u;
    SET_GPR_U32(ctx, 31, 0x1ECB0Cu);
    ctx->pc = 0x1ECB08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ECB04u;
    // 0x1ecb08: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E1A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1A10u, 0x1ECB04u, 0x1ECB0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECB0Cu;
label_1ecb0c:
    // 0x1ecb0c: 0x26240030  addiu       $a0, $s1, 0x30
    ctx->pc = 0x1ecb0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x1ecb10: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1ecb10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ecb14: 0xc076bec  jal         func_1DAFB0
    ctx->pc = 0x1ECB14u;
    SET_GPR_U32(ctx, 31, 0x1ECB1Cu);
    ctx->pc = 0x1ECB18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ECB14u;
    // 0x1ecb18: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DAFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DAFB0u, 0x1ECB14u, 0x1ECB1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECB1Cu;
label_1ecb1c:
    // 0x1ecb1c: 0x7a220070  lq          $v0, 0x70($s1)
    ctx->pc = 0x1ecb1cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x1ecb20: 0x7e220010  sq          $v0, 0x10($s1)
    ctx->pc = 0x1ecb20u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 2));
    // 0x1ecb24: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x1ecb24u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ecb28: 0xa2220002  sb          $v0, 0x2($s1)
    ctx->pc = 0x1ecb28u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x1ecb2c: 0xa2200004  sb          $zero, 0x4($s1)
    ctx->pc = 0x1ecb2cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ecb30: 0x92250038  lbu         $a1, 0x38($s1)
    ctx->pc = 0x1ecb30u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x1ecb34: 0x92260039  lbu         $a2, 0x39($s1)
    ctx->pc = 0x1ecb34u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 57)));
    // 0x1ecb38: 0xc074350  jal         func_1D0D40
    ctx->pc = 0x1ECB38u;
    SET_GPR_U32(ctx, 31, 0x1ECB40u);
    ctx->pc = 0x1ECB3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ECB38u;
    // 0x1ecb3c: 0x26240090  addiu       $a0, $s1, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0D40u, 0x1ECB38u, 0x1ECB40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECB40u;
label_1ecb40:
    // 0x1ecb40: 0x9225003a  lbu         $a1, 0x3A($s1)
    ctx->pc = 0x1ecb40u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 58)));
    // 0x1ecb44: 0x9226003b  lbu         $a2, 0x3B($s1)
    ctx->pc = 0x1ecb44u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 59)));
    // 0x1ecb48: 0xc074378  jal         func_1D0DE0
    ctx->pc = 0x1ECB48u;
    SET_GPR_U32(ctx, 31, 0x1ECB50u);
    ctx->pc = 0x1ECB4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ECB48u;
    // 0x1ecb4c: 0x26240090  addiu       $a0, $s1, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0DE0u, 0x1ECB48u, 0x1ECB50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECB50u;
label_1ecb50:
    // 0x1ecb50: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1ecb50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ecb54: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ecb54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ecb58: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ecb58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ecb5c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ecb5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ecb60: 0x3e00008  jr          $ra
    ctx->pc = 0x1ECB60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ECB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECB60u;
        // 0x1ecb64: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ECB60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ECB68u;
}
