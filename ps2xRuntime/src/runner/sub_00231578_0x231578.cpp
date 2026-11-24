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

// Function: sub_00231578
// Address: 0x231578 - 0x2315a8
void sub_00231578_0x231578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00231578_0x231578");
#endif

    switch (ctx->pc) {
        case 0x231590u: goto label_231590;
        default: break;
    }

    ctx->pc = 0x231578u;

    // 0x231578: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x231578u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23157c: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x23157Cu;
    {
        const bool branch_taken_0x23157c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x231580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23157Cu;
        // 0x231580: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23157c) {
            ctx->pc = 0x231598u;
            goto label_231598;
        }
    }
    ctx->pc = 0x231584u;
    // 0x231584: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x231584u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x231588: 0xc08baa4  jal         func_22EA90
    ctx->pc = 0x231588u;
    SET_GPR_U32(ctx, 31, 0x231590u);
    ctx->pc = 0x23158Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231588u;
    // 0x23158c: 0x2484a968  addiu       $a0, $a0, -0x5698 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22EA90u, 0x231588u, 0x231590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231590u;
label_231590:
    // 0x231590: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x231590u;
    {
        const bool branch_taken_0x231590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231590u;
        // 0x231594: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231590) {
            ctx->pc = 0x23159Cu;
            goto label_23159c;
        }
    }
    ctx->pc = 0x231598u;
label_231598:
    // 0x231598: 0x80820001  lb          $v0, 0x1($a0)
    ctx->pc = 0x231598u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
label_23159c:
    // 0x23159c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23159cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2315a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2315A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2315A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2315A0u;
        // 0x2315a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2315A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2315A8u;
}
