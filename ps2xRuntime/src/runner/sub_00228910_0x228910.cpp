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

// Function: sub_00228910
// Address: 0x228910 - 0x228978
void sub_00228910_0x228910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00228910_0x228910");
#endif

    switch (ctx->pc) {
        case 0x228928u: goto label_228928;
        default: break;
    }

    ctx->pc = 0x228910u;

    // 0x228910: 0x28a30003  slti        $v1, $a1, 0x3
    ctx->pc = 0x228910u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x228914: 0x14600016  bnez        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x228914u;
    {
        const bool branch_taken_0x228914 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x228918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228914u;
        // 0x228918: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228914) {
            ctx->pc = 0x228970u;
            goto label_228970;
        }
    }
    ctx->pc = 0x22891Cu;
    // 0x22891c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x22891cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228920: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x228920u;
    {
        const bool branch_taken_0x228920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x228924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228920u;
        // 0x228924: 0x24080077  addiu       $t0, $zero, 0x77 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 119));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228920) {
            ctx->pc = 0x22892Cu;
            goto label_22892c;
        }
    }
    ctx->pc = 0x228928u;
label_228928:
    // 0x228928: 0x24e70002  addiu       $a3, $a3, 0x2
    ctx->pc = 0x228928u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
label_22892c:
    // 0x22892c: 0xe5102a  slt         $v0, $a3, $a1
    ctx->pc = 0x22892cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x228930: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x228930u;
    {
        const bool branch_taken_0x228930 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x228934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228930u;
        // 0x228934: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228930) {
            ctx->pc = 0x228970u;
            goto label_228970;
        }
    }
    ctx->pc = 0x228938u;
    // 0x228938: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x228938u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22893c: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x22893cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x228940: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x228940u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x228944: 0x14660004  bne         $v1, $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x228944u;
    {
        const bool branch_taken_0x228944 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x228944) {
            ctx->pc = 0x228958u;
            goto label_228958;
        }
    }
    ctx->pc = 0x22894Cu;
    // 0x22894c: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x22894cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x228950: 0x10480007  beq         $v0, $t0, . + 4 + (0x7 << 2)
    ctx->pc = 0x228950u;
    {
        const bool branch_taken_0x228950 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 8));
        ctx->pc = 0x228954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228950u;
        // 0x228954: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228950) {
            ctx->pc = 0x228970u;
            goto label_228970;
        }
    }
    ctx->pc = 0x228958u;
label_228958:
    // 0x228958: 0x5468fff3  bnel        $v1, $t0, . + 4 + (-0xD << 2)
    ctx->pc = 0x228958u;
    {
        const bool branch_taken_0x228958 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 8));
        if (branch_taken_0x228958) {
            ctx->pc = 0x22895Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x228958u;
            // 0x22895c: 0x24840002  addiu       $a0, $a0, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x228928u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_228928;
        }
    }
    ctx->pc = 0x228960u;
    // 0x228960: 0x90820001  lbu         $v0, 0x1($a0)
    ctx->pc = 0x228960u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x228964: 0x5446fff0  bnel        $v0, $a2, . + 4 + (-0x10 << 2)
    ctx->pc = 0x228964u;
    {
        const bool branch_taken_0x228964 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x228964) {
            ctx->pc = 0x228968u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x228964u;
            // 0x228968: 0x24840002  addiu       $a0, $a0, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x228928u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_228928;
        }
    }
    ctx->pc = 0x22896Cu;
    // 0x22896c: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x22896cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_228970:
    // 0x228970: 0x3e00008  jr          $ra
    ctx->pc = 0x228970u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x228970u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x228978u;
}
