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

// Function: sub_001F3320
// Address: 0x1f3320 - 0x1f3378
void sub_001F3320_0x1f3320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F3320_0x1f3320");
#endif

    ctx->pc = 0x1f3320u;

    // 0x1f3320: 0x10a00013  beqz        $a1, . + 4 + (0x13 << 2)
    ctx->pc = 0x1F3320u;
    {
        const bool branch_taken_0x1f3320 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3320u;
        // 0x1f3324: 0x30a300ff  andi        $v1, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3320) {
            ctx->pc = 0x1F3370u;
            goto label_1f3370;
        }
    }
    ctx->pc = 0x1F3328u;
    // 0x1f3328: 0x2466ffff  addiu       $a2, $v1, -0x1
    ctx->pc = 0x1f3328u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1f332c: 0x908308ff  lbu         $v1, 0x8FF($a0)
    ctx->pc = 0x1f332cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2303)));
    // 0x1f3330: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1F3330u;
    {
        const bool branch_taken_0x1f3330 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3330u;
        // 0x1f3334: 0x53a02  srl         $a3, $a1, 8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3330) {
            ctx->pc = 0x1F3370u;
            goto label_1f3370;
        }
    }
    ctx->pc = 0x1F3338u;
    // 0x1f3338: 0x2465ffff  addiu       $a1, $v1, -0x1
    ctx->pc = 0x1f3338u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1f333c: 0xa08508ff  sb          $a1, 0x8FF($a0)
    ctx->pc = 0x1f333cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2303), (uint8_t)GPR_U32(ctx, 5));
    // 0x1f3340: 0x24e30001  addiu       $v1, $a3, 0x1
    ctx->pc = 0x1f3340u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1f3344: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x1f3344u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1f3348: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x1f3348u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x1f334c: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x1f334cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1f3350: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1f3350u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1f3354: 0xa0a60800  sb          $a2, 0x800($a1)
    ctx->pc = 0x1f3354u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2048), (uint8_t)GPR_U32(ctx, 6));
    // 0x1f3358: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1f3358u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1f335c: 0x628c0  sll         $a1, $a2, 3
    ctx->pc = 0x1f335cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x1f3360: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1f3360u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1f3364: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1f3364u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1f3368: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x1f3368u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x1f336c: 0x0  nop
    ctx->pc = 0x1f336cu;
    // NOP
label_1f3370:
    // 0x1f3370: 0x3e00008  jr          $ra
    ctx->pc = 0x1F3370u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F3370u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F3378u;
}
