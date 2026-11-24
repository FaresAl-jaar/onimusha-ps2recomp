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

// Function: sub_002F4350
// Address: 0x2f4350 - 0x2f43a0
void sub_002F4350_0x2f4350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F4350_0x2f4350");
#endif

    ctx->pc = 0x2f4350u;

    // 0x2f4350: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x2f4350u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2f4354: 0x2862001d  slti        $v0, $v1, 0x1D
    ctx->pc = 0x2f4354u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)29) ? 1 : 0);
    // 0x2f4358: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F4358u;
    {
        const bool branch_taken_0x2f4358 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F435Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4358u;
        // 0x2f435c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4358) {
            ctx->pc = 0x2F4368u;
            goto label_2f4368;
        }
    }
    ctx->pc = 0x2F4360u;
    // 0x2f4360: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2F4360u;
    {
        const bool branch_taken_0x2f4360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f4360) {
            ctx->pc = 0x2F4398u;
            goto label_2f4398;
        }
    }
    ctx->pc = 0x2F4368u;
label_2f4368:
    // 0x2f4368: 0x28620013  slti        $v0, $v1, 0x13
    ctx->pc = 0x2f4368u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)19) ? 1 : 0);
    // 0x2f436c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F436Cu;
    {
        const bool branch_taken_0x2f436c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F4370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F436Cu;
        // 0x2f4370: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f436c) {
            ctx->pc = 0x2F4380u;
            goto label_2f4380;
        }
    }
    ctx->pc = 0x2F4374u;
    // 0x2f4374: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2F4374u;
    {
        const bool branch_taken_0x2f4374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f4374) {
            ctx->pc = 0x2F4398u;
            goto label_2f4398;
        }
    }
    ctx->pc = 0x2F437Cu;
    // 0x2f437c: 0x0  nop
    ctx->pc = 0x2f437cu;
    // NOP
label_2f4380:
    // 0x2f4380: 0x28620009  slti        $v0, $v1, 0x9
    ctx->pc = 0x2f4380u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x2f4384: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F4384u;
    {
        const bool branch_taken_0x2f4384 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F4388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4384u;
        // 0x2f4388: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4384) {
            ctx->pc = 0x2F4394u;
            goto label_2f4394;
        }
    }
    ctx->pc = 0x2F438Cu;
    // 0x2f438c: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x2F438Cu;
    {
        const bool branch_taken_0x2f438c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F438Cu;
        // 0x2f4390: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f438c) {
            ctx->pc = 0x2F4394u;
            goto label_2f4394;
        }
    }
    ctx->pc = 0x2F4394u;
label_2f4394:
    // 0x2f4394: 0x0  nop
    ctx->pc = 0x2f4394u;
    // NOP
label_2f4398:
    // 0x2f4398: 0x3e00008  jr          $ra
    ctx->pc = 0x2F4398u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F4398u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F43A0u;
}
