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

// Function: sub_00326800
// Address: 0x326800 - 0x326880
void sub_00326800_0x326800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00326800_0x326800");
#endif

    ctx->pc = 0x326800u;

    // 0x326800: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x326800u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x326804: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x326804u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x326808: 0x8c22ad9c  lw          $v0, -0x5264($at)
    ctx->pc = 0x326808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294946204)));
    // 0x32680c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x32680cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x326810: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x326810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x326814: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x326814u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x326818: 0xac22ad9c  sw          $v0, -0x5264($at)
    ctx->pc = 0x326818u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294946204), GPR_U32(ctx, 2));
    // 0x32681c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x32681cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x326820: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x326820u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x326824: 0x9022ad89  lbu         $v0, -0x5277($at)
    ctx->pc = 0x326824u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294946185)));
    // 0x326828: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x326828u;
    {
        const bool branch_taken_0x326828 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32682Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326828u;
        // 0x32682c: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326828) {
            ctx->pc = 0x326870u;
            goto label_326870;
        }
    }
    ctx->pc = 0x326830u;
    // 0x326830: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x326830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x326834: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x326834u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x326838: 0xa022ad89  sb          $v0, -0x5277($at)
    ctx->pc = 0x326838u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294946185), (uint8_t)GPR_U32(ctx, 2));
    // 0x32683c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x32683cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x326840: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x326840u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x326844: 0x9022ad89  lbu         $v0, -0x5277($at)
    ctx->pc = 0x326844u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294946185)));
    // 0x326848: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x326848u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x32684c: 0x3401be60  ori         $at, $zero, 0xBE60
    ctx->pc = 0x32684cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48736);
    // 0x326850: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x326850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x326854: 0x411021  addu        $v0, $v0, $at
    ctx->pc = 0x326854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x326858: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x326858u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x32685c: 0xac460004  sw          $a2, 0x4($v0)
    ctx->pc = 0x32685cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 6));
    // 0x326860: 0xac470008  sw          $a3, 0x8($v0)
    ctx->pc = 0x326860u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 7));
    // 0x326864: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x326864u;
    {
        const bool branch_taken_0x326864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x326868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326864u;
        // 0x326868: 0xac48000c  sw          $t0, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326864) {
            ctx->pc = 0x326878u;
            goto label_326878;
        }
    }
    ctx->pc = 0x32686Cu;
    // 0x32686c: 0x0  nop
    ctx->pc = 0x32686cu;
    // NOP
label_326870:
    // 0x326870: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x326870u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326874: 0x0  nop
    ctx->pc = 0x326874u;
    // NOP
label_326878:
    // 0x326878: 0x3e00008  jr          $ra
    ctx->pc = 0x326878u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x326878u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x326880u;
}
