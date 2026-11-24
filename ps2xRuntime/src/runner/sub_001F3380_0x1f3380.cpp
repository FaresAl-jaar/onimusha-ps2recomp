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

// Function: sub_001F3380
// Address: 0x1f3380 - 0x1f33c8
void sub_001F3380_0x1f3380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F3380_0x1f3380");
#endif

    ctx->pc = 0x1f3380u;

    // 0x1f3380: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F3380u;
    {
        const bool branch_taken_0x1f3380 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F3384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3380u;
        // 0x1f3384: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3380) {
            ctx->pc = 0x1F3390u;
            goto label_1f3390;
        }
    }
    ctx->pc = 0x1F3388u;
    // 0x1f3388: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1F3388u;
    {
        const bool branch_taken_0x1f3388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f3388) {
            ctx->pc = 0x1F33C0u;
            goto label_1f33c0;
        }
    }
    ctx->pc = 0x1F3390u;
label_1f3390:
    // 0x1f3390: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x1f3390u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1f3394: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1f3394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1f3398: 0x52a02  srl         $a1, $a1, 8
    ctx->pc = 0x1f3398u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 8));
    // 0x1f339c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1f339cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1f33a0: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x1f33a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1f33a4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1f33a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1f33a8: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x1f33a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x1f33ac: 0x14a20003  bne         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F33ACu;
    {
        const bool branch_taken_0x1f33ac = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F33B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F33ACu;
        // 0x1f33b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f33ac) {
            ctx->pc = 0x1F33BCu;
            goto label_1f33bc;
        }
    }
    ctx->pc = 0x1F33B4u;
    // 0x1f33b4: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x1F33B4u;
    {
        const bool branch_taken_0x1f33b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F33B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F33B4u;
        // 0x1f33b8: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f33b4) {
            ctx->pc = 0x1F33BCu;
            goto label_1f33bc;
        }
    }
    ctx->pc = 0x1F33BCu;
label_1f33bc:
    // 0x1f33bc: 0x0  nop
    ctx->pc = 0x1f33bcu;
    // NOP
label_1f33c0:
    // 0x1f33c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1F33C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F33C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F33C8u;
}
