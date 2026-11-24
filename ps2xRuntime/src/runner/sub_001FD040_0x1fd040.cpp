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

// Function: sub_001FD040
// Address: 0x1fd040 - 0x1fd0b0
void sub_001FD040_0x1fd040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FD040_0x1fd040");
#endif

    ctx->pc = 0x1fd040u;

    // 0x1fd040: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x1fd040u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fd044: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1FD044u;
    {
        const bool branch_taken_0x1fd044 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FD048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD044u;
        // 0x1fd048: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd044) {
            ctx->pc = 0x1FD0A8u;
            goto label_1fd0a8;
        }
    }
    ctx->pc = 0x1FD04Cu;
    // 0x1fd04c: 0x90820001  lbu         $v0, 0x1($a0)
    ctx->pc = 0x1fd04cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x1fd050: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1FD050u;
    {
        const bool branch_taken_0x1fd050 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FD054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD050u;
        // 0x1fd054: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd050) {
            ctx->pc = 0x1FD0A8u;
            goto label_1fd0a8;
        }
    }
    ctx->pc = 0x1FD058u;
    // 0x1fd058: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x1fd058u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x1fd05c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fd05cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fd060: 0x14620011  bne         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1FD060u;
    {
        const bool branch_taken_0x1fd060 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1FD064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD060u;
        // 0x1fd064: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd060) {
            ctx->pc = 0x1FD0A8u;
            goto label_1fd0a8;
        }
    }
    ctx->pc = 0x1FD068u;
    // 0x1fd068: 0x90840003  lbu         $a0, 0x3($a0)
    ctx->pc = 0x1fd068u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x1fd06c: 0x240300ba  addiu       $v1, $zero, 0xBA
    ctx->pc = 0x1fd06cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 186));
    // 0x1fd070: 0x1083000d  beq         $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1FD070u;
    {
        const bool branch_taken_0x1fd070 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1FD074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD070u;
        // 0x1fd074: 0x3c020001  lui         $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd070) {
            ctx->pc = 0x1FD0A8u;
            goto label_1fd0a8;
        }
    }
    ctx->pc = 0x1FD078u;
    // 0x1fd078: 0x288200bb  slti        $v0, $a0, 0xBB
    ctx->pc = 0x1fd078u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)187) ? 1 : 0);
    // 0x1fd07c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FD07Cu;
    {
        const bool branch_taken_0x1fd07c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fd07c) {
            ctx->pc = 0x1FD080u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FD07Cu;
            // 0x1fd080: 0x240300bb  addiu       $v1, $zero, 0xBB (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 187));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FD090u;
            goto label_1fd090;
        }
    }
    ctx->pc = 0x1FD084u;
    // 0x1fd084: 0x240300b9  addiu       $v1, $zero, 0xB9
    ctx->pc = 0x1fd084u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 185));
    // 0x1fd088: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1FD088u;
    {
        const bool branch_taken_0x1fd088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD088u;
        // 0x1fd08c: 0x3c020008  lui         $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd088) {
            ctx->pc = 0x1FD094u;
            goto label_1fd094;
        }
    }
    ctx->pc = 0x1FD090u;
label_1fd090:
    // 0x1fd090: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x1fd090u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
label_1fd094:
    // 0x1fd094: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FD094u;
    {
        const bool branch_taken_0x1fd094 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1FD098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD094u;
        // 0x1fd098: 0x2c8300bc  sltiu       $v1, $a0, 0xBC (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)188) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd094) {
            ctx->pc = 0x1FD0A8u;
            goto label_1fd0a8;
        }
    }
    ctx->pc = 0x1FD09Cu;
    // 0x1fd09c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FD09Cu;
    {
        const bool branch_taken_0x1fd09c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD09Cu;
        // 0x1fd0a0: 0x3c020004  lui         $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd09c) {
            ctx->pc = 0x1FD0A8u;
            goto label_1fd0a8;
        }
    }
    ctx->pc = 0x1FD0A4u;
    // 0x1fd0a4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1fd0a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fd0a8:
    // 0x1fd0a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1FD0A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FD0A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FD0B0u;
}
