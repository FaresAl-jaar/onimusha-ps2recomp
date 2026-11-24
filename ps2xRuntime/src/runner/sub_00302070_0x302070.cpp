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

// Function: sub_00302070
// Address: 0x302070 - 0x30209c
void sub_00302070_0x302070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00302070_0x302070");
#endif

    switch (ctx->pc) {
        case 0x302090u: goto label_302090;
        default: break;
    }

    ctx->pc = 0x302070u;

    // 0x302070: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x302070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x302074: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x302074u;
    {
        const bool branch_taken_0x302074 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x302078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302074u;
        // 0x302078: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302074) {
            ctx->pc = 0x302088u;
            goto label_302088;
        }
    }
    ctx->pc = 0x30207Cu;
    // 0x30207c: 0x9482050c  lhu         $v0, 0x50C($a0)
    ctx->pc = 0x30207cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 1292)));
    // 0x302080: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x302080u;
    {
        const bool branch_taken_0x302080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x302084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302080u;
        // 0x302084: 0x30420002  andi        $v0, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x302080) {
            ctx->pc = 0x302090u;
            goto label_302090;
        }
    }
    ctx->pc = 0x302088u;
label_302088:
    // 0x302088: 0xc09e8c0  jal         func_27A300
    ctx->pc = 0x302088u;
    SET_GPR_U32(ctx, 31, 0x302090u);
    ctx->pc = 0x30208Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302088u;
    // 0x30208c: 0x248401c0  addiu       $a0, $a0, 0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27A300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27A300u, 0x302088u, 0x302090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302090u;
label_302090:
    // 0x302090: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x302090u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x302094: 0x3e00008  jr          $ra
    ctx->pc = 0x302094u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x302098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302094u;
        // 0x302098: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x302094u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30209Cu;
}
