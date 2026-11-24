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

// Function: sub_00395540
// Address: 0x395540 - 0x3955a0
void sub_00395540_0x395540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00395540_0x395540");
#endif

    ctx->pc = 0x395540u;

    // 0x395540: 0x90830821  lbu         $v1, 0x821($a0)
    ctx->pc = 0x395540u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2081)));
    // 0x395544: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x395544u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x395548: 0x1065000f  beq         $v1, $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x395548u;
    {
        const bool branch_taken_0x395548 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x395548) {
            ctx->pc = 0x395588u;
            goto label_395588;
        }
    }
    ctx->pc = 0x395550u;
    // 0x395550: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x395550u;
    {
        const bool branch_taken_0x395550 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x395550) {
            ctx->pc = 0x395560u;
            goto label_395560;
        }
    }
    ctx->pc = 0x395558u;
    // 0x395558: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x395558u;
    {
        const bool branch_taken_0x395558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x395558) {
            ctx->pc = 0x395598u;
            goto label_395598;
        }
    }
    ctx->pc = 0x395560u;
label_395560:
    // 0x395560: 0xa08007f6  sb          $zero, 0x7F6($a0)
    ctx->pc = 0x395560u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x395564: 0xa08007f4  sb          $zero, 0x7F4($a0)
    ctx->pc = 0x395564u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x395568: 0x24030054  addiu       $v1, $zero, 0x54
    ctx->pc = 0x395568u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    // 0x39556c: 0xa48307f2  sh          $v1, 0x7F2($a0)
    ctx->pc = 0x39556cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2034), (uint16_t)GPR_U32(ctx, 3));
    // 0x395570: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x395570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x395574: 0xa08307f5  sb          $v1, 0x7F5($a0)
    ctx->pc = 0x395574u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2037), (uint8_t)GPR_U32(ctx, 3));
    // 0x395578: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x395578u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x39557c: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x39557cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x395580: 0xac8307ec  sw          $v1, 0x7EC($a0)
    ctx->pc = 0x395580u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2028), GPR_U32(ctx, 3));
    // 0x395584: 0xa0850821  sb          $a1, 0x821($a0)
    ctx->pc = 0x395584u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2081), (uint8_t)GPR_U32(ctx, 5));
label_395588:
    // 0x395588: 0x908307f6  lbu         $v1, 0x7F6($a0)
    ctx->pc = 0x395588u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2038)));
    // 0x39558c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x39558Cu;
    {
        const bool branch_taken_0x39558c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x395590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39558Cu;
        // 0x395590: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39558c) {
            ctx->pc = 0x395598u;
            goto label_395598;
        }
    }
    ctx->pc = 0x395594u;
    // 0x395594: 0xa0830780  sb          $v1, 0x780($a0)
    ctx->pc = 0x395594u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1920), (uint8_t)GPR_U32(ctx, 3));
label_395598:
    // 0x395598: 0x3e00008  jr          $ra
    ctx->pc = 0x395598u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x395598u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3955A0u;
}
