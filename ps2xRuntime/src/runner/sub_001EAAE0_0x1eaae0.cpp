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

// Function: sub_001EAAE0
// Address: 0x1eaae0 - 0x1eab58
void sub_001EAAE0_0x1eaae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EAAE0_0x1eaae0");
#endif

    switch (ctx->pc) {
        case 0x1eaafcu: goto label_1eaafc;
        case 0x1eab0cu: goto label_1eab0c;
        case 0x1eab30u: goto label_1eab30;
        case 0x1eab40u: goto label_1eab40;
        default: break;
    }

    ctx->pc = 0x1eaae0u;

    // 0x1eaae0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1eaae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1eaae4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1eaae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1eaae8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1eaae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1eaaec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1eaaecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1eaaf0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1eaaf0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eaaf4: 0xc078684  jal         func_1E1A10
    ctx->pc = 0x1EAAF4u;
    SET_GPR_U32(ctx, 31, 0x1EAAFCu);
    ctx->pc = 0x1EAAF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EAAF4u;
    // 0x1eaaf8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E1A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1A10u, 0x1EAAF4u, 0x1EAAFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EAAFCu;
label_1eaafc:
    // 0x1eaafc: 0x26240030  addiu       $a0, $s1, 0x30
    ctx->pc = 0x1eaafcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x1eab00: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1eab00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eab04: 0xc076bec  jal         func_1DAFB0
    ctx->pc = 0x1EAB04u;
    SET_GPR_U32(ctx, 31, 0x1EAB0Cu);
    ctx->pc = 0x1EAB08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EAB04u;
    // 0x1eab08: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DAFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DAFB0u, 0x1EAB04u, 0x1EAB0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EAB0Cu;
label_1eab0c:
    // 0x1eab0c: 0x7a2200a0  lq          $v0, 0xA0($s1)
    ctx->pc = 0x1eab0cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 160)));
    // 0x1eab10: 0x7e220010  sq          $v0, 0x10($s1)
    ctx->pc = 0x1eab10u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 2));
    // 0x1eab14: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x1eab14u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1eab18: 0xa2220002  sb          $v0, 0x2($s1)
    ctx->pc = 0x1eab18u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x1eab1c: 0xa2200004  sb          $zero, 0x4($s1)
    ctx->pc = 0x1eab1cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x1eab20: 0x92250034  lbu         $a1, 0x34($s1)
    ctx->pc = 0x1eab20u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x1eab24: 0x92260035  lbu         $a2, 0x35($s1)
    ctx->pc = 0x1eab24u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 53)));
    // 0x1eab28: 0xc074350  jal         func_1D0D40
    ctx->pc = 0x1EAB28u;
    SET_GPR_U32(ctx, 31, 0x1EAB30u);
    ctx->pc = 0x1EAB2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EAB28u;
    // 0x1eab2c: 0x262400f0  addiu       $a0, $s1, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0D40u, 0x1EAB28u, 0x1EAB30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EAB30u;
label_1eab30:
    // 0x1eab30: 0x92250036  lbu         $a1, 0x36($s1)
    ctx->pc = 0x1eab30u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 54)));
    // 0x1eab34: 0x92260037  lbu         $a2, 0x37($s1)
    ctx->pc = 0x1eab34u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 55)));
    // 0x1eab38: 0xc074378  jal         func_1D0DE0
    ctx->pc = 0x1EAB38u;
    SET_GPR_U32(ctx, 31, 0x1EAB40u);
    ctx->pc = 0x1EAB3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EAB38u;
    // 0x1eab3c: 0x262400f0  addiu       $a0, $s1, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0DE0u, 0x1EAB38u, 0x1EAB40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EAB40u;
label_1eab40:
    // 0x1eab40: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1eab40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1eab44: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1eab44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1eab48: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1eab48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1eab4c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1eab4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1eab50: 0x3e00008  jr          $ra
    ctx->pc = 0x1EAB50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EAB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAB50u;
        // 0x1eab54: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EAB50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EAB58u;
}
