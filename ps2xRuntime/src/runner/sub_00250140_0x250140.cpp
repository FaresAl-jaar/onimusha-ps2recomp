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

// Function: sub_00250140
// Address: 0x250140 - 0x2501a0
void sub_00250140_0x250140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00250140_0x250140");
#endif

    ctx->pc = 0x250140u;

    // 0x250140: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x250140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x250144: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x250144u;
    {
        const bool branch_taken_0x250144 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x250148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250144u;
        // 0x250148: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250144) {
            ctx->pc = 0x250168u;
            goto label_250168;
        }
    }
    ctx->pc = 0x25014Cu;
    // 0x25014c: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x25014cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x250150: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x250150u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x250154: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x250154u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x250158: 0x2484ea38  addiu       $a0, $a0, -0x15C8
    ctx->pc = 0x250158u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961720));
    // 0x25015c: 0x24a5e9c8  addiu       $a1, $a1, -0x1638
    ctx->pc = 0x25015cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961608));
    // 0x250160: 0x8093f54  j           func_24FD50
    ctx->pc = 0x250160u;
    ctx->pc = 0x250164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250160u;
    // 0x250164: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24FD50u;
    sub_0024FD50_0x24fd50(rdram, ctx, runtime); return;
    ctx->pc = 0x250168u;
label_250168:
    // 0x250168: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x250168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x25016c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x25016Cu;
    {
        const bool branch_taken_0x25016c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x250170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25016Cu;
        // 0x250170: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25016c) {
            ctx->pc = 0x250190u;
            goto label_250190;
        }
    }
    ctx->pc = 0x250174u;
    // 0x250174: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x250174u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x250178: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x250178u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x25017c: 0x2484ea48  addiu       $a0, $a0, -0x15B8
    ctx->pc = 0x25017cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961736));
    // 0x250180: 0x24a5e9f8  addiu       $a1, $a1, -0x1608
    ctx->pc = 0x250180u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961656));
    // 0x250184: 0x8093f54  j           func_24FD50
    ctx->pc = 0x250184u;
    ctx->pc = 0x250188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250184u;
    // 0x250188: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24FD50u;
    sub_0024FD50_0x24fd50(rdram, ctx, runtime); return;
    ctx->pc = 0x25018Cu;
    // 0x25018c: 0x0  nop
    ctx->pc = 0x25018cu;
    // NOP
label_250190:
    // 0x250190: 0xac860020  sw          $a2, 0x20($a0)
    ctx->pc = 0x250190u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 6));
    // 0x250194: 0xac85001c  sw          $a1, 0x1C($a0)
    ctx->pc = 0x250194u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 5));
    // 0x250198: 0x3e00008  jr          $ra
    ctx->pc = 0x250198u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25019Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250198u;
        // 0x25019c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x250198u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2501A0u;
}
