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

// Function: sub_002BA180
// Address: 0x2ba180 - 0x2ba1d0
void sub_002BA180_0x2ba180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BA180_0x2ba180");
#endif

    ctx->pc = 0x2ba180u;

    // 0x2ba180: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x2ba180u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x2ba184: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x2ba184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2ba188: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2BA188u;
    {
        const bool branch_taken_0x2ba188 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2BA18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA188u;
        // 0x2ba18c: 0x3c01008d  lui         $at, 0x8D (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba188) {
            ctx->pc = 0x2BA1A8u;
            goto label_2ba1a8;
        }
    }
    ctx->pc = 0x2BA190u;
    // 0x2ba190: 0x27828060  addiu       $v0, $gp, -0x7FA0
    ctx->pc = 0x2ba190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x2ba194: 0x90236c1c  lbu         $v1, 0x6C1C($at)
    ctx->pc = 0x2ba194u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 27676)));
    // 0x2ba198: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2ba198u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2ba19c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ba19cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ba1a0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2ba1a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ba1a4: 0x0  nop
    ctx->pc = 0x2ba1a4u;
    // NOP
label_2ba1a8:
    // 0x2ba1a8: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2BA1A8u;
    {
        const bool branch_taken_0x2ba1a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA1A8u;
        // 0x2ba1ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba1a8) {
            ctx->pc = 0x2BA1C8u;
            goto label_2ba1c8;
        }
    }
    ctx->pc = 0x2BA1B0u;
    // 0x2ba1b0: 0x8c8329c0  lw          $v1, 0x29C0($a0)
    ctx->pc = 0x2ba1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 10688)));
    // 0x2ba1b4: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x2ba1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x2ba1b8: 0x24425017  addiu       $v0, $v0, 0x5017
    ctx->pc = 0x2ba1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20503));
    // 0x2ba1bc: 0x8c630020  lw          $v1, 0x20($v1)
    ctx->pc = 0x2ba1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x2ba1c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ba1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ba1c4: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x2ba1c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_2ba1c8:
    // 0x2ba1c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2BA1C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BA1C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BA1D0u;
}
