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

// Function: sub_00369BA0
// Address: 0x369ba0 - 0x369c10
void sub_00369BA0_0x369ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00369BA0_0x369ba0");
#endif

    ctx->pc = 0x369ba0u;

    // 0x369ba0: 0x8c852b20  lw          $a1, 0x2B20($a0)
    ctx->pc = 0x369ba0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11040)));
    // 0x369ba4: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x369BA4u;
    {
        const bool branch_taken_0x369ba4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x369ba4) {
            ctx->pc = 0x369BB8u;
            goto label_369bb8;
        }
    }
    ctx->pc = 0x369BACu;
    // 0x369bac: 0x8c832b24  lw          $v1, 0x2B24($a0)
    ctx->pc = 0x369bacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11044)));
    // 0x369bb0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x369BB0u;
    {
        const bool branch_taken_0x369bb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x369BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369BB0u;
        // 0x369bb4: 0xaca32b24  sw          $v1, 0x2B24($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 11044), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x369bb0) {
            ctx->pc = 0x369BD0u;
            goto label_369bd0;
        }
    }
    ctx->pc = 0x369BB8u;
label_369bb8:
    // 0x369bb8: 0x8c832b24  lw          $v1, 0x2B24($a0)
    ctx->pc = 0x369bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11044)));
    // 0x369bbc: 0xaf838be4  sw          $v1, -0x741C($gp)
    ctx->pc = 0x369bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937572), GPR_U32(ctx, 3));
    // 0x369bc0: 0x8f838be4  lw          $v1, -0x741C($gp)
    ctx->pc = 0x369bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937572)));
    // 0x369bc4: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x369BC4u;
    {
        const bool branch_taken_0x369bc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x369bc4) {
            ctx->pc = 0x369BD0u;
            goto label_369bd0;
        }
    }
    ctx->pc = 0x369BCCu;
    // 0x369bcc: 0xac602b20  sw          $zero, 0x2B20($v1)
    ctx->pc = 0x369bccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 11040), GPR_U32(ctx, 0));
label_369bd0:
    // 0x369bd0: 0x8c852b24  lw          $a1, 0x2B24($a0)
    ctx->pc = 0x369bd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11044)));
    // 0x369bd4: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x369BD4u;
    {
        const bool branch_taken_0x369bd4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x369bd4) {
            ctx->pc = 0x369BE8u;
            goto label_369be8;
        }
    }
    ctx->pc = 0x369BDCu;
    // 0x369bdc: 0x8c832b20  lw          $v1, 0x2B20($a0)
    ctx->pc = 0x369bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11040)));
    // 0x369be0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x369BE0u;
    {
        const bool branch_taken_0x369be0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x369BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369BE0u;
        // 0x369be4: 0xaca32b20  sw          $v1, 0x2B20($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 11040), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x369be0) {
            ctx->pc = 0x369C00u;
            goto label_369c00;
        }
    }
    ctx->pc = 0x369BE8u;
label_369be8:
    // 0x369be8: 0x8c832b20  lw          $v1, 0x2B20($a0)
    ctx->pc = 0x369be8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11040)));
    // 0x369bec: 0xaf838be8  sw          $v1, -0x7418($gp)
    ctx->pc = 0x369becu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937576), GPR_U32(ctx, 3));
    // 0x369bf0: 0x8f838be8  lw          $v1, -0x7418($gp)
    ctx->pc = 0x369bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937576)));
    // 0x369bf4: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x369BF4u;
    {
        const bool branch_taken_0x369bf4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x369bf4) {
            ctx->pc = 0x369C00u;
            goto label_369c00;
        }
    }
    ctx->pc = 0x369BFCu;
    // 0x369bfc: 0xac602b24  sw          $zero, 0x2B24($v1)
    ctx->pc = 0x369bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 11044), GPR_U32(ctx, 0));
label_369c00:
    // 0x369c00: 0x8f838bec  lw          $v1, -0x7414($gp)
    ctx->pc = 0x369c00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937580)));
    // 0x369c04: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x369c04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x369c08: 0x3e00008  jr          $ra
    ctx->pc = 0x369C08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x369C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369C08u;
        // 0x369c0c: 0xaf838bec  sw          $v1, -0x7414($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937580), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x369C08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x369C10u;
}
