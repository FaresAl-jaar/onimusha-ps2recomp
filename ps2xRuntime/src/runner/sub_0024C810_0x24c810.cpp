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

// Function: sub_0024C810
// Address: 0x24c810 - 0x24c868
void sub_0024C810_0x24c810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024C810_0x24c810");
#endif

    switch (ctx->pc) {
        case 0x24c834u: goto label_24c834;
        default: break;
    }

    ctx->pc = 0x24c810u;

    // 0x24c810: 0x3c06004d  lui         $a2, 0x4D
    ctx->pc = 0x24c810u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)77 << 16));
    // 0x24c814: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x24c814u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c818: 0x24c35af8  addiu       $v1, $a2, 0x5AF8
    ctx->pc = 0x24c818u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 23288));
    // 0x24c81c: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x24c81cu;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x4D5AF8u));
    // 0x24c820: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x24C820u;
    {
        const bool branch_taken_0x24c820 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24C824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C820u;
        // 0x24c824: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c820) {
            ctx->pc = 0x24C830u;
            goto label_24c830;
        }
    }
    ctx->pc = 0x24C828u;
    // 0x24c828: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x24C828u;
    {
        const bool branch_taken_0x24c828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C828u;
        // 0x24c82c: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c828) {
            ctx->pc = 0x24C860u;
            goto label_24c860;
        }
    }
    ctx->pc = 0x24C830u;
label_24c830:
    // 0x24c830: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x24c830u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_24c834:
    // 0x24c834: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x24c834u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x24c838: 0x28a30028  slti        $v1, $a1, 0x28
    ctx->pc = 0x24c838u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)40) ? 1 : 0);
    // 0x24c83c: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x24C83Cu;
    {
        const bool branch_taken_0x24c83c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C83Cu;
        // 0x24c840: 0x451023  subu        $v0, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c83c) {
            ctx->pc = 0x24C860u;
            goto label_24c860;
        }
    }
    ctx->pc = 0x24C844u;
    // 0x24c844: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x24c844u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x24c848: 0x24c35af8  addiu       $v1, $a2, 0x5AF8
    ctx->pc = 0x24c848u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 23288));
    // 0x24c84c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x24c84cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x24c850: 0x80440000  lb          $a0, 0x0($v0)
    ctx->pc = 0x24c850u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24c854: 0x5480fff7  bnel        $a0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x24C854u;
    {
        const bool branch_taken_0x24c854 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x24c854) {
            ctx->pc = 0x24C858u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24C854u;
            // 0x24c858: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24C834u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24c834;
        }
    }
    ctx->pc = 0x24C85Cu;
    // 0x24c85c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x24c85cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24c860:
    // 0x24c860: 0x3e00008  jr          $ra
    ctx->pc = 0x24C860u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24C864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C860u;
        // 0x24c864: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24C860u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24C868u;
}
