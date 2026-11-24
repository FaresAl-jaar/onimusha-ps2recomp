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

// Function: sub_002285F8
// Address: 0x2285f8 - 0x22862c
void sub_002285F8_0x2285f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002285F8_0x2285f8");
#endif

    ctx->pc = 0x2285f8u;

    // 0x2285f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2285f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2285fc: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2285FCu;
    {
        const bool branch_taken_0x2285fc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x228600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2285FCu;
        // 0x228600: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2285fc) {
            ctx->pc = 0x228618u;
            goto label_228618;
        }
    }
    ctx->pc = 0x228604u;
    // 0x228604: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x228604u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x228608: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x228608u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22860c: 0x248496b0  addiu       $a0, $a0, -0x6950
    ctx->pc = 0x22860cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940336));
    // 0x228610: 0x808a0d4  j           func_228350
    ctx->pc = 0x228610u;
    ctx->pc = 0x228614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228610u;
    // 0x228614: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228350u;
    sub_00228350_0x228350(rdram, ctx, runtime); return;
    ctx->pc = 0x228618u;
label_228618:
    // 0x228618: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x228618u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22861c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22861cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x228620: 0xac820024  sw          $v0, 0x24($a0)
    ctx->pc = 0x228620u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 2));
    // 0x228624: 0x3e00008  jr          $ra
    ctx->pc = 0x228624u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x228628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228624u;
        // 0x228628: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x228624u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22862Cu;
}
