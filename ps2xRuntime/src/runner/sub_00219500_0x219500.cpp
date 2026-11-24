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

// Function: sub_00219500
// Address: 0x219500 - 0x219540
void sub_00219500_0x219500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00219500_0x219500");
#endif

    ctx->pc = 0x219500u;

    // 0x219500: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x219500u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219504: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x219504u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x219508: 0x2862fffd  slti        $v0, $v1, -0x3
    ctx->pc = 0x219508u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294967293) ? 1 : 0);
    // 0x21950c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21950cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x219510: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x219510u;
    {
        const bool branch_taken_0x219510 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x219514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219510u;
        // 0x219514: 0x2866ffff  slti        $a2, $v1, -0x1 (Delay Slot)
        SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294967295) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x219510) {
            ctx->pc = 0x219528u;
            goto label_219528;
        }
    }
    ctx->pc = 0x219518u;
    // 0x219518: 0x14c00007  bnez        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x219518u;
    {
        const bool branch_taken_0x219518 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x21951Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219518u;
        // 0x21951c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219518) {
            ctx->pc = 0x219538u;
            goto label_219538;
        }
    }
    ctx->pc = 0x219520u;
    // 0x219520: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x219520u;
    {
        const bool branch_taken_0x219520 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x219520) {
            ctx->pc = 0x219538u;
            goto label_219538;
        }
    }
    ctx->pc = 0x219528u;
label_219528:
    // 0x219528: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x219528u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21952c: 0x80848e0  j           func_212380
    ctx->pc = 0x21952Cu;
    ctx->pc = 0x219530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21952Cu;
    // 0x219530: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212380u;
    sub_00212380_0x212380(rdram, ctx, runtime); return;
    ctx->pc = 0x219534u;
    // 0x219534: 0x0  nop
    ctx->pc = 0x219534u;
    // NOP
label_219538:
    // 0x219538: 0x3e00008  jr          $ra
    ctx->pc = 0x219538u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21953Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219538u;
        // 0x21953c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x219538u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x219540u;
}
