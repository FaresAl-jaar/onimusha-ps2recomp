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

// Function: sub_00380900
// Address: 0x380900 - 0x380938
void sub_00380900_0x380900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00380900_0x380900");
#endif

    ctx->pc = 0x380900u;

    // 0x380900: 0x8c8329c0  lw          $v1, 0x29C0($a0)
    ctx->pc = 0x380900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 10688)));
    // 0x380904: 0x8c822b7c  lw          $v0, 0x2B7C($a0)
    ctx->pc = 0x380904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11132)));
    // 0x380908: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x380908u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x38090c: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x38090cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x380910: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x380910u;
    {
        const bool branch_taken_0x380910 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x380914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380910u;
        // 0x380914: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x380910) {
            ctx->pc = 0x380920u;
            goto label_380920;
        }
    }
    ctx->pc = 0x380918u;
    // 0x380918: 0x64050001  daddiu      $a1, $zero, 0x1
    ctx->pc = 0x380918u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x38091c: 0x0  nop
    ctx->pc = 0x38091cu;
    // NOP
label_380920:
    // 0x380920: 0x90822b79  lbu         $v0, 0x2B79($a0)
    ctx->pc = 0x380920u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 11129)));
    // 0x380924: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x380924u;
    {
        const bool branch_taken_0x380924 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x380924) {
            ctx->pc = 0x380930u;
            goto label_380930;
        }
    }
    ctx->pc = 0x38092Cu;
    // 0x38092c: 0x64050001  daddiu      $a1, $zero, 0x1
    ctx->pc = 0x38092cu;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_380930:
    // 0x380930: 0x3e00008  jr          $ra
    ctx->pc = 0x380930u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x380934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380930u;
        // 0x380934: 0x30a200ff  andi        $v0, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x380930u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x380938u;
}
