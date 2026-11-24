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

// Function: sub_00258320
// Address: 0x258320 - 0x2583f8
void sub_00258320_0x258320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00258320_0x258320");
#endif

    switch (ctx->pc) {
        case 0x2583a0u: goto label_2583a0;
        default: break;
    }

    ctx->pc = 0x258320u;

    // 0x258320: 0xa0c00000  sb          $zero, 0x0($a2)
    ctx->pc = 0x258320u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x258324: 0x2402003e  addiu       $v0, $zero, 0x3E
    ctx->pc = 0x258324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x258328: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x258328u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    // 0x25832c: 0xa0c00008  sb          $zero, 0x8($a2)
    ctx->pc = 0x25832cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 8), (uint8_t)GPR_U32(ctx, 0));
    // 0x258330: 0xacc0000c  sw          $zero, 0xC($a2)
    ctx->pc = 0x258330u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
    // 0x258334: 0xa0c00010  sb          $zero, 0x10($a2)
    ctx->pc = 0x258334u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 16), (uint8_t)GPR_U32(ctx, 0));
    // 0x258338: 0x80a30000  lb          $v1, 0x0($a1)
    ctx->pc = 0x258338u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x25833c: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25833Cu;
    {
        const bool branch_taken_0x25833c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x258340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25833Cu;
        // 0x258340: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25833c) {
            ctx->pc = 0x258350u;
            goto label_258350;
        }
    }
    ctx->pc = 0x258344u;
    // 0x258344: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x258344u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x258348: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x258348u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x25834c: 0x0  nop
    ctx->pc = 0x25834cu;
    // NOP
label_258350:
    // 0x258350: 0x80a30000  lb          $v1, 0x0($a1)
    ctx->pc = 0x258350u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x258354: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x258354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x258358: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x258358u;
    {
        const bool branch_taken_0x258358 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x25835Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258358u;
        // 0x25835c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258358) {
            ctx->pc = 0x258368u;
            goto label_258368;
        }
    }
    ctx->pc = 0x258360u;
    // 0x258360: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x258360u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x258364: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x258364u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
label_258368:
    // 0x258368: 0x80a30000  lb          $v1, 0x0($a1)
    ctx->pc = 0x258368u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x25836c: 0x2402002b  addiu       $v0, $zero, 0x2B
    ctx->pc = 0x25836cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x258370: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x258370u;
    {
        const bool branch_taken_0x258370 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x258374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258370u;
        // 0x258374: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258370) {
            ctx->pc = 0x258380u;
            goto label_258380;
        }
    }
    ctx->pc = 0x258378u;
    // 0x258378: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x258378u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x25837c: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x25837cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
label_258380:
    // 0x258380: 0x80a30000  lb          $v1, 0x0($a1)
    ctx->pc = 0x258380u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x258384: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x258384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x258388: 0x14620013  bne         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x258388u;
    {
        const bool branch_taken_0x258388 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x25838Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258388u;
        // 0x25838c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258388) {
            ctx->pc = 0x2583D8u;
            goto label_2583d8;
        }
    }
    ctx->pc = 0x258390u;
    // 0x258390: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x258390u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x258394: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x258394u;
    {
        const bool branch_taken_0x258394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x258398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258394u;
        // 0x258398: 0xa0c20008  sb          $v0, 0x8($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258394) {
            ctx->pc = 0x2583D8u;
            goto label_2583d8;
        }
    }
    ctx->pc = 0x25839Cu;
    // 0x25839c: 0x0  nop
    ctx->pc = 0x25839cu;
    // NOP
label_2583a0:
    // 0x2583a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2583a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2583a4: 0xa0c20010  sb          $v0, 0x10($a2)
    ctx->pc = 0x2583a4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 16), (uint8_t)GPR_U32(ctx, 2));
    // 0x2583a8: 0x8cc3000c  lw          $v1, 0xC($a2)
    ctx->pc = 0x2583a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x2583ac: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2583acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2583b0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2583b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2583b4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2583b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2583b8: 0xacc2000c  sw          $v0, 0xC($a2)
    ctx->pc = 0x2583b8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
    // 0x2583bc: 0x80a30000  lb          $v1, 0x0($a1)
    ctx->pc = 0x2583bcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2583c0: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x2583c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x2583c4: 0x2463ffd0  addiu       $v1, $v1, -0x30
    ctx->pc = 0x2583c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967248));
    // 0x2583c8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2583c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2583cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2583ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2583d0: 0xacc2000c  sw          $v0, 0xC($a2)
    ctx->pc = 0x2583d0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
    // 0x2583d4: 0x0  nop
    ctx->pc = 0x2583d4u;
    // NOP
label_2583d8:
    // 0x2583d8: 0x80a30000  lb          $v1, 0x0($a1)
    ctx->pc = 0x2583d8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2583dc: 0x28620030  slti        $v0, $v1, 0x30
    ctx->pc = 0x2583dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x2583e0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2583E0u;
    {
        const bool branch_taken_0x2583e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2583E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2583E0u;
        // 0x2583e4: 0x2861003a  slti        $at, $v1, 0x3A (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)58) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2583e0) {
            ctx->pc = 0x2583F0u;
            goto label_2583f0;
        }
    }
    ctx->pc = 0x2583E8u;
    // 0x2583e8: 0x1420ffed  bnez        $at, . + 4 + (-0x13 << 2)
    ctx->pc = 0x2583E8u;
    {
        const bool branch_taken_0x2583e8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2583e8) {
            ctx->pc = 0x2583A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2583a0;
        }
    }
    ctx->pc = 0x2583F0u;
label_2583f0:
    // 0x2583f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2583F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2583F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2583F0u;
        // 0x2583f4: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2583F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2583F8u;
}
