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

// Function: sub_00145010
// Address: 0x145010 - 0x145078
void sub_00145010_0x145010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00145010_0x145010");
#endif

    switch (ctx->pc) {
        case 0x145020u: goto label_145020;
        case 0x145048u: goto label_145048;
        default: break;
    }

    ctx->pc = 0x145010u;

    // 0x145010: 0x14a00013  bnez        $a1, . + 4 + (0x13 << 2)
    ctx->pc = 0x145010u;
    {
        const bool branch_taken_0x145010 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x145014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145010u;
        // 0x145014: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145010) {
            ctx->pc = 0x145060u;
            goto label_145060;
        }
    }
    ctx->pc = 0x145018u;
    // 0x145018: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x145018u;
    {
        const bool branch_taken_0x145018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x145018) {
            ctx->pc = 0x145070u;
            goto label_145070;
        }
    }
    ctx->pc = 0x145020u;
label_145020:
    // 0x145020: 0x14660007  bne         $v1, $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x145020u;
    {
        const bool branch_taken_0x145020 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x145020) {
            ctx->pc = 0x145040u;
            goto label_145040;
        }
    }
    ctx->pc = 0x145028u;
    // 0x145028: 0x90a30001  lbu         $v1, 0x1($a1)
    ctx->pc = 0x145028u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x14502c: 0x14640004  bne         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14502Cu;
    {
        const bool branch_taken_0x14502c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x14502c) {
            ctx->pc = 0x145040u;
            goto label_145040;
        }
    }
    ctx->pc = 0x145034u;
    // 0x145034: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x145034u;
    {
        const bool branch_taken_0x145034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x145038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145034u;
        // 0x145038: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145034) {
            ctx->pc = 0x145070u;
            goto label_145070;
        }
    }
    ctx->pc = 0x14503Cu;
    // 0x14503c: 0x0  nop
    ctx->pc = 0x14503cu;
    // NOP
label_145040:
    // 0x145040: 0x24a50014  addiu       $a1, $a1, 0x14
    ctx->pc = 0x145040u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20));
    // 0x145044: 0x0  nop
    ctx->pc = 0x145044u;
    // NOP
label_145048:
    // 0x145048: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x145048u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x14504c: 0x1462fff4  bne         $v1, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x14504Cu;
    {
        const bool branch_taken_0x14504c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x14504c) {
            ctx->pc = 0x145020u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_145020;
        }
    }
    ctx->pc = 0x145054u;
    // 0x145054: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x145054u;
    {
        const bool branch_taken_0x145054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x145058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145054u;
        // 0x145058: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145054) {
            ctx->pc = 0x145070u;
            goto label_145070;
        }
    }
    ctx->pc = 0x14505Cu;
    // 0x14505c: 0x0  nop
    ctx->pc = 0x14505cu;
    // NOP
label_145060:
    // 0x145060: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x145060u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x145064: 0x30e400ff  andi        $a0, $a3, 0xFF
    ctx->pc = 0x145064u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x145068: 0x1000fff7  b           . + 4 + (-0x9 << 2)
    ctx->pc = 0x145068u;
    {
        const bool branch_taken_0x145068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14506Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145068u;
        // 0x14506c: 0x240200ff  addiu       $v0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145068) {
            ctx->pc = 0x145048u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_145048;
        }
    }
    ctx->pc = 0x145070u;
label_145070:
    // 0x145070: 0x3e00008  jr          $ra
    ctx->pc = 0x145070u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x145070u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x145078u;
}
