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

// Function: sub_002540C0
// Address: 0x2540c0 - 0x254100
void sub_002540C0_0x2540c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002540C0_0x2540c0");
#endif

    ctx->pc = 0x2540c0u;

    // 0x2540c0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2540c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2540c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2540c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2540c8: 0x9023fc8f  lbu         $v1, -0x371($at)
    ctx->pc = 0x2540c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x81FC8Fu));
    // 0x2540cc: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2540CCu;
    {
        const bool branch_taken_0x2540cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2540cc) {
            ctx->pc = 0x2540F0u;
            goto label_2540f0;
        }
    }
    ctx->pc = 0x2540D4u;
    // 0x2540d4: 0x90820001  lbu         $v0, 0x1($a0)
    ctx->pc = 0x2540d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x2540d8: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x2540d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x2540dc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2540DCu;
    {
        const bool branch_taken_0x2540dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2540E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2540DCu;
        // 0x2540e0: 0x2402ffe0  addiu       $v0, $zero, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2540dc) {
            ctx->pc = 0x2540F0u;
            goto label_2540f0;
        }
    }
    ctx->pc = 0x2540E4u;
    // 0x2540e4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2540E4u;
    {
        const bool branch_taken_0x2540e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2540e4) {
            ctx->pc = 0x2540F8u;
            goto label_2540f8;
        }
    }
    ctx->pc = 0x2540ECu;
    // 0x2540ec: 0x0  nop
    ctx->pc = 0x2540ecu;
    // NOP
label_2540f0:
    // 0x2540f0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2540f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2540f4: 0x0  nop
    ctx->pc = 0x2540f4u;
    // NOP
label_2540f8:
    // 0x2540f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2540F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2540F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x254100u;
}
