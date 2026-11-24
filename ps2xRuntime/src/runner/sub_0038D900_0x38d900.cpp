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

// Function: sub_0038D900
// Address: 0x38d900 - 0x38d934
void sub_0038D900_0x38d900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038D900_0x38d900");
#endif

    switch (ctx->pc) {
        case 0x38d928u: goto label_38d928;
        default: break;
    }

    ctx->pc = 0x38d900u;

    // 0x38d900: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x38d900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x38d904: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x38d904u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x38d908: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x38d908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x38d90c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x38d90cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x38d910: 0x9063040c  lbu         $v1, 0x40C($v1)
    ctx->pc = 0x38d910u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1036)));
    // 0x38d914: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x38D914u;
    {
        const bool branch_taken_0x38d914 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x38d914) {
            ctx->pc = 0x38D928u;
            goto label_38d928;
        }
    }
    ctx->pc = 0x38D91Cu;
    // 0x38d91c: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x38d91cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x38d920: 0xc0e360c  jal         func_38D830
    ctx->pc = 0x38D920u;
    SET_GPR_U32(ctx, 31, 0x38D928u);
    ctx->pc = 0x38D924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38D920u;
    // 0x38d924: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38D830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38D830u, 0x38D920u, 0x38D928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38D928u;
label_38d928:
    // 0x38d928: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x38d928u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38d92c: 0x3e00008  jr          $ra
    ctx->pc = 0x38D92Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38D930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D92Cu;
        // 0x38d930: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38D92Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38D934u;
}
