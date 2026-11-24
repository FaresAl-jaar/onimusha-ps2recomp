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

// Function: sub_002285C8
// Address: 0x2285c8 - 0x2285f8
void sub_002285C8_0x2285c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002285C8_0x2285c8");
#endif

    ctx->pc = 0x2285c8u;

    // 0x2285c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2285c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2285cc: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2285CCu;
    {
        const bool branch_taken_0x2285cc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2285D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2285CCu;
        // 0x2285d0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2285cc) {
            ctx->pc = 0x2285E8u;
            goto label_2285e8;
        }
    }
    ctx->pc = 0x2285D4u;
    // 0x2285d4: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x2285d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x2285d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2285d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2285dc: 0x24849688  addiu       $a0, $a0, -0x6978
    ctx->pc = 0x2285dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940296));
    // 0x2285e0: 0x808a0d4  j           func_228350
    ctx->pc = 0x2285E0u;
    ctx->pc = 0x2285E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2285E0u;
    // 0x2285e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228350u;
    sub_00228350_0x228350(rdram, ctx, runtime); return;
    ctx->pc = 0x2285E8u;
label_2285e8:
    // 0x2285e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2285e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2285ec: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2285ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2285f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2285F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2285F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2285F0u;
        // 0x2285f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2285F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2285F8u;
}
