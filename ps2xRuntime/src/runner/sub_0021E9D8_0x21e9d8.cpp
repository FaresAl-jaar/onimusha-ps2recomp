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

// Function: sub_0021E9D8
// Address: 0x21e9d8 - 0x21ea18
void sub_0021E9D8_0x21e9d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021E9D8_0x21e9d8");
#endif

    ctx->pc = 0x21e9d8u;

    // 0x21e9d8: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x21e9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x21e9dc: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x21e9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x21e9e0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x21e9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x21e9e4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x21e9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x21e9e8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x21e9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x21e9ec: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x21e9ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x21e9f0: 0x24841348  addiu       $a0, $a0, 0x1348
    ctx->pc = 0x21e9f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4936));
    // 0x21e9f4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x21e9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x21e9f8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x21E9F8u;
    {
        const bool branch_taken_0x21e9f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E9F8u;
        // 0x21e9fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e9f8) {
            ctx->pc = 0x21EA10u;
            goto label_21ea10;
        }
    }
    ctx->pc = 0x21EA00u;
    // 0x21ea00: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x21ea00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x21ea04: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x21ea04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x21ea08: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x21ea08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x21ea0c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x21ea0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_21ea10:
    // 0x21ea10: 0x3e00008  jr          $ra
    ctx->pc = 0x21EA10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21EA10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21EA18u;
}
