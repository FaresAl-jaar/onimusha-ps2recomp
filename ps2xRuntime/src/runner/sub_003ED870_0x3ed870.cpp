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

// Function: sub_003ED870
// Address: 0x3ed870 - 0x3ed8e0
void sub_003ED870_0x3ed870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003ED870_0x3ed870");
#endif

    ctx->pc = 0x3ed870u;

    // 0x3ed870: 0x8c852b20  lw          $a1, 0x2B20($a0)
    ctx->pc = 0x3ed870u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11040)));
    // 0x3ed874: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3ED874u;
    {
        const bool branch_taken_0x3ed874 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ed874) {
            ctx->pc = 0x3ED888u;
            goto label_3ed888;
        }
    }
    ctx->pc = 0x3ED87Cu;
    // 0x3ed87c: 0x8c832b24  lw          $v1, 0x2B24($a0)
    ctx->pc = 0x3ed87cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11044)));
    // 0x3ed880: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3ED880u;
    {
        const bool branch_taken_0x3ed880 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ED884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED880u;
        // 0x3ed884: 0xaca32b24  sw          $v1, 0x2B24($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 11044), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ed880) {
            ctx->pc = 0x3ED8A0u;
            goto label_3ed8a0;
        }
    }
    ctx->pc = 0x3ED888u;
label_3ed888:
    // 0x3ed888: 0x8c832b24  lw          $v1, 0x2B24($a0)
    ctx->pc = 0x3ed888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11044)));
    // 0x3ed88c: 0xaf838d14  sw          $v1, -0x72EC($gp)
    ctx->pc = 0x3ed88cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937876), GPR_U32(ctx, 3));
    // 0x3ed890: 0x8f838d14  lw          $v1, -0x72EC($gp)
    ctx->pc = 0x3ed890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937876)));
    // 0x3ed894: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x3ED894u;
    {
        const bool branch_taken_0x3ed894 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ed894) {
            ctx->pc = 0x3ED8A0u;
            goto label_3ed8a0;
        }
    }
    ctx->pc = 0x3ED89Cu;
    // 0x3ed89c: 0xac602b20  sw          $zero, 0x2B20($v1)
    ctx->pc = 0x3ed89cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 11040), GPR_U32(ctx, 0));
label_3ed8a0:
    // 0x3ed8a0: 0x8c852b24  lw          $a1, 0x2B24($a0)
    ctx->pc = 0x3ed8a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11044)));
    // 0x3ed8a4: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3ED8A4u;
    {
        const bool branch_taken_0x3ed8a4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ed8a4) {
            ctx->pc = 0x3ED8B8u;
            goto label_3ed8b8;
        }
    }
    ctx->pc = 0x3ED8ACu;
    // 0x3ed8ac: 0x8c832b20  lw          $v1, 0x2B20($a0)
    ctx->pc = 0x3ed8acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11040)));
    // 0x3ed8b0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3ED8B0u;
    {
        const bool branch_taken_0x3ed8b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ED8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED8B0u;
        // 0x3ed8b4: 0xaca32b20  sw          $v1, 0x2B20($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 11040), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ed8b0) {
            ctx->pc = 0x3ED8D0u;
            goto label_3ed8d0;
        }
    }
    ctx->pc = 0x3ED8B8u;
label_3ed8b8:
    // 0x3ed8b8: 0x8c832b20  lw          $v1, 0x2B20($a0)
    ctx->pc = 0x3ed8b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11040)));
    // 0x3ed8bc: 0xaf838d18  sw          $v1, -0x72E8($gp)
    ctx->pc = 0x3ed8bcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937880), GPR_U32(ctx, 3));
    // 0x3ed8c0: 0x8f838d18  lw          $v1, -0x72E8($gp)
    ctx->pc = 0x3ed8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937880)));
    // 0x3ed8c4: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x3ED8C4u;
    {
        const bool branch_taken_0x3ed8c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ed8c4) {
            ctx->pc = 0x3ED8D0u;
            goto label_3ed8d0;
        }
    }
    ctx->pc = 0x3ED8CCu;
    // 0x3ed8cc: 0xac602b24  sw          $zero, 0x2B24($v1)
    ctx->pc = 0x3ed8ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 11044), GPR_U32(ctx, 0));
label_3ed8d0:
    // 0x3ed8d0: 0x8f838d1c  lw          $v1, -0x72E4($gp)
    ctx->pc = 0x3ed8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937884)));
    // 0x3ed8d4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3ed8d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3ed8d8: 0x3e00008  jr          $ra
    ctx->pc = 0x3ED8D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3ED8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED8D8u;
        // 0x3ed8dc: 0xaf838d1c  sw          $v1, -0x72E4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937884), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3ED8D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3ED8E0u;
}
