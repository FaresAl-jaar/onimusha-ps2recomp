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

// Function: sub_002B4360
// Address: 0x2b4360 - 0x2b43a8
void sub_002B4360_0x2b4360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B4360_0x2b4360");
#endif

    switch (ctx->pc) {
        case 0x2b4370u: goto label_2b4370;
        default: break;
    }

    ctx->pc = 0x2b4360u;

    // 0x2b4360: 0x10c00002  beqz        $a2, . + 4 + (0x2 << 2)
    ctx->pc = 0x2B4360u;
    {
        const bool branch_taken_0x2b4360 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B4364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4360u;
        // 0x2b4364: 0x24870190  addiu       $a3, $a0, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 400));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4360) {
            ctx->pc = 0x2B436Cu;
            goto label_2b436c;
        }
    }
    ctx->pc = 0x2B4368u;
    // 0x2b4368: 0x24c40050  addiu       $a0, $a2, 0x50
    ctx->pc = 0x2b4368u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 80));
label_2b436c:
    // 0x2b436c: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x2b436cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_2b4370:
    // 0x2b4370: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x2b4370u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2b4374: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B4374u;
    {
        const bool branch_taken_0x2b4374 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2B4378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4374u;
        // 0x2b4378: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4374) {
            ctx->pc = 0x2B4388u;
            goto label_2b4388;
        }
    }
    ctx->pc = 0x2B437Cu;
    // 0x2b437c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2B437Cu;
    {
        const bool branch_taken_0x2b437c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b437c) {
            ctx->pc = 0x2B43A0u;
            goto label_2b43a0;
        }
    }
    ctx->pc = 0x2B4384u;
    // 0x2b4384: 0x0  nop
    ctx->pc = 0x2b4384u;
    // NOP
label_2b4388:
    // 0x2b4388: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2b4388u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b438c: 0x24440050  addiu       $a0, $v0, 0x50
    ctx->pc = 0x2b438cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x2b4390: 0x47102b  sltu        $v0, $v0, $a3
    ctx->pc = 0x2b4390u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x2b4394: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x2B4394u;
    {
        const bool branch_taken_0x2b4394 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B4398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4394u;
        // 0x2b4398: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4394) {
            ctx->pc = 0x2B4370u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b4370;
        }
    }
    ctx->pc = 0x2B439Cu;
    // 0x2b439c: 0x0  nop
    ctx->pc = 0x2b439cu;
    // NOP
label_2b43a0:
    // 0x2b43a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2B43A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B43A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B43A8u;
}
