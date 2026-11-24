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

// Function: sub_00395710
// Address: 0x395710 - 0x395770
void sub_00395710_0x395710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00395710_0x395710");
#endif

    ctx->pc = 0x395710u;

    // 0x395710: 0x90830821  lbu         $v1, 0x821($a0)
    ctx->pc = 0x395710u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2081)));
    // 0x395714: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x395714u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x395718: 0x1065000f  beq         $v1, $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x395718u;
    {
        const bool branch_taken_0x395718 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x395718) {
            ctx->pc = 0x395758u;
            goto label_395758;
        }
    }
    ctx->pc = 0x395720u;
    // 0x395720: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x395720u;
    {
        const bool branch_taken_0x395720 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x395720) {
            ctx->pc = 0x395730u;
            goto label_395730;
        }
    }
    ctx->pc = 0x395728u;
    // 0x395728: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x395728u;
    {
        const bool branch_taken_0x395728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x395728) {
            ctx->pc = 0x395768u;
            goto label_395768;
        }
    }
    ctx->pc = 0x395730u;
label_395730:
    // 0x395730: 0xa08007f6  sb          $zero, 0x7F6($a0)
    ctx->pc = 0x395730u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x395734: 0xa08007f4  sb          $zero, 0x7F4($a0)
    ctx->pc = 0x395734u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x395738: 0x24030051  addiu       $v1, $zero, 0x51
    ctx->pc = 0x395738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
    // 0x39573c: 0xa48307f2  sh          $v1, 0x7F2($a0)
    ctx->pc = 0x39573cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2034), (uint16_t)GPR_U32(ctx, 3));
    // 0x395740: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x395740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x395744: 0xa08307f5  sb          $v1, 0x7F5($a0)
    ctx->pc = 0x395744u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2037), (uint8_t)GPR_U32(ctx, 3));
    // 0x395748: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x395748u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x39574c: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x39574cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x395750: 0xac8307ec  sw          $v1, 0x7EC($a0)
    ctx->pc = 0x395750u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2028), GPR_U32(ctx, 3));
    // 0x395754: 0xa0850821  sb          $a1, 0x821($a0)
    ctx->pc = 0x395754u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2081), (uint8_t)GPR_U32(ctx, 5));
label_395758:
    // 0x395758: 0x908307f6  lbu         $v1, 0x7F6($a0)
    ctx->pc = 0x395758u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2038)));
    // 0x39575c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x39575Cu;
    {
        const bool branch_taken_0x39575c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x395760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39575Cu;
        // 0x395760: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39575c) {
            ctx->pc = 0x395768u;
            goto label_395768;
        }
    }
    ctx->pc = 0x395764u;
    // 0x395764: 0xa0830780  sb          $v1, 0x780($a0)
    ctx->pc = 0x395764u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1920), (uint8_t)GPR_U32(ctx, 3));
label_395768:
    // 0x395768: 0x3e00008  jr          $ra
    ctx->pc = 0x395768u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x395768u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x395770u;
}
