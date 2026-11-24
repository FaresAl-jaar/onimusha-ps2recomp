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

// Function: sub_001FD110
// Address: 0x1fd110 - 0x1fd178
void sub_001FD110_0x1fd110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FD110_0x1fd110");
#endif

    switch (ctx->pc) {
        case 0x1fd128u: goto label_1fd128;
        default: break;
    }

    ctx->pc = 0x1fd110u;

    // 0x1fd110: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1fd110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1fd114: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x1fd114u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x1fd118: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x1fd118u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1fd11c: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1FD11Cu;
    {
        const bool branch_taken_0x1fd11c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD11Cu;
        // 0x1fd120: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd11c) {
            ctx->pc = 0x1FD16Cu;
            goto label_1fd16c;
        }
    }
    ctx->pc = 0x1FD124u;
    // 0x1fd124: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1fd124u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fd128:
    // 0x1fd128: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x1fd128u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fd12c: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x1FD12Cu;
    {
        const bool branch_taken_0x1fd12c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fd12c) {
            ctx->pc = 0x1FD130u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FD12Cu;
            // 0x1fd130: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FD15Cu;
            goto label_1fd15c;
        }
    }
    ctx->pc = 0x1FD134u;
    // 0x1fd134: 0x90820001  lbu         $v0, 0x1($a0)
    ctx->pc = 0x1fd134u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x1fd138: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1FD138u;
    {
        const bool branch_taken_0x1fd138 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fd138) {
            ctx->pc = 0x1FD13Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FD138u;
            // 0x1fd13c: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FD15Cu;
            goto label_1fd15c;
        }
    }
    ctx->pc = 0x1FD140u;
    // 0x1fd140: 0x90820002  lbu         $v0, 0x2($a0)
    ctx->pc = 0x1fd140u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x1fd144: 0x54480005  bnel        $v0, $t0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FD144u;
    {
        const bool branch_taken_0x1fd144 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 8));
        if (branch_taken_0x1fd144) {
            ctx->pc = 0x1FD148u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FD144u;
            // 0x1fd148: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FD15Cu;
            goto label_1fd15c;
        }
    }
    ctx->pc = 0x1FD14Cu;
    // 0x1fd14c: 0x90830003  lbu         $v1, 0x3($a0)
    ctx->pc = 0x1fd14cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x1fd150: 0x10660007  beq         $v1, $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FD150u;
    {
        const bool branch_taken_0x1fd150 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        ctx->pc = 0x1FD154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD150u;
        // 0x1fd154: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd150) {
            ctx->pc = 0x1FD170u;
            goto label_1fd170;
        }
    }
    ctx->pc = 0x1FD158u;
    // 0x1fd158: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1fd158u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_1fd15c:
    // 0x1fd15c: 0x24e20003  addiu       $v0, $a3, 0x3
    ctx->pc = 0x1fd15cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 3));
    // 0x1fd160: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x1fd160u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1fd164: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1FD164u;
    {
        const bool branch_taken_0x1fd164 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FD168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD164u;
        // 0x1fd168: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd164) {
            ctx->pc = 0x1FD128u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fd128;
        }
    }
    ctx->pc = 0x1FD16Cu;
label_1fd16c:
    // 0x1fd16c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1fd16cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fd170:
    // 0x1fd170: 0x3e00008  jr          $ra
    ctx->pc = 0x1FD170u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FD170u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FD178u;
}
