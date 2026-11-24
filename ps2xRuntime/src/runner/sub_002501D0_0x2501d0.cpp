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

// Function: sub_002501D0
// Address: 0x2501d0 - 0x250234
void sub_002501D0_0x2501d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002501D0_0x2501d0");
#endif

    ctx->pc = 0x2501d0u;

    // 0x2501d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2501d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2501d4: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2501D4u;
    {
        const bool branch_taken_0x2501d4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2501D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2501D4u;
        // 0x2501d8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2501d4) {
            ctx->pc = 0x2501F8u;
            goto label_2501f8;
        }
    }
    ctx->pc = 0x2501DCu;
    // 0x2501dc: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x2501dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x2501e0: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x2501e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x2501e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2501e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2501e8: 0x2484ea58  addiu       $a0, $a0, -0x15A8
    ctx->pc = 0x2501e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961752));
    // 0x2501ec: 0x24a5e9c8  addiu       $a1, $a1, -0x1638
    ctx->pc = 0x2501ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961608));
    // 0x2501f0: 0x8093f54  j           func_24FD50
    ctx->pc = 0x2501F0u;
    ctx->pc = 0x2501F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2501F0u;
    // 0x2501f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24FD50u;
    sub_0024FD50_0x24fd50(rdram, ctx, runtime); return;
    ctx->pc = 0x2501F8u;
label_2501f8:
    // 0x2501f8: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2501f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2501fc: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2501FCu;
    {
        const bool branch_taken_0x2501fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2501fc) {
            ctx->pc = 0x250200u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2501FCu;
            // 0x250200: 0x8c820018  lw          $v0, 0x18($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x250220u;
            goto label_250220;
        }
    }
    ctx->pc = 0x250204u;
    // 0x250204: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x250204u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x250208: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x250208u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x25020c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25020cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x250210: 0x2484ea68  addiu       $a0, $a0, -0x1598
    ctx->pc = 0x250210u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961768));
    // 0x250214: 0x24a5e9f8  addiu       $a1, $a1, -0x1608
    ctx->pc = 0x250214u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961656));
    // 0x250218: 0x8093f54  j           func_24FD50
    ctx->pc = 0x250218u;
    ctx->pc = 0x25021Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250218u;
    // 0x25021c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24FD50u;
    sub_0024FD50_0x24fd50(rdram, ctx, runtime); return;
    ctx->pc = 0x250220u;
label_250220:
    // 0x250220: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x250220u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x250224: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x250224u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x250228: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x250228u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x25022c: 0x3e00008  jr          $ra
    ctx->pc = 0x25022Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x250230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25022Cu;
        // 0x250230: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25022Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x250234u;
}
