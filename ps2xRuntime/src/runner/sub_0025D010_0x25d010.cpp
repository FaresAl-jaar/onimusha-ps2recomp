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

// Function: sub_0025D010
// Address: 0x25d010 - 0x25d04c
void sub_0025D010_0x25d010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025D010_0x25d010");
#endif

    switch (ctx->pc) {
        case 0x25d040u: goto label_25d040;
        default: break;
    }

    ctx->pc = 0x25d010u;

    // 0x25d010: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x25d010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x25d014: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25D014u;
    {
        const bool branch_taken_0x25d014 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x25D018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D014u;
        // 0x25d018: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d014) {
            ctx->pc = 0x25D028u;
            goto label_25d028;
        }
    }
    ctx->pc = 0x25D01Cu;
    // 0x25d01c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x25D01Cu;
    {
        const bool branch_taken_0x25d01c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D01Cu;
        // 0x25d020: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d01c) {
            ctx->pc = 0x25D040u;
            goto label_25d040;
        }
    }
    ctx->pc = 0x25D024u;
    // 0x25d024: 0x0  nop
    ctx->pc = 0x25d024u;
    // NOP
label_25d028:
    // 0x25d028: 0x8c8306c8  lw          $v1, 0x6C8($a0)
    ctx->pc = 0x25d028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1736)));
    // 0x25d02c: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x25d02cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x25d030: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x25D030u;
    {
        const bool branch_taken_0x25d030 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D030u;
        // 0x25d034: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d030) {
            ctx->pc = 0x25D040u;
            goto label_25d040;
        }
    }
    ctx->pc = 0x25D038u;
    // 0x25d038: 0xc0973c8  jal         func_25CF20
    ctx->pc = 0x25D038u;
    SET_GPR_U32(ctx, 31, 0x25D040u);
    ctx->pc = 0x25D03Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D038u;
    // 0x25d03c: 0x8c8407c0  lw          $a0, 0x7C0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1984)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CF20u, 0x25D038u, 0x25D040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D040u;
label_25d040:
    // 0x25d040: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25d040u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25d044: 0x3e00008  jr          $ra
    ctx->pc = 0x25D044u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25D048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D044u;
        // 0x25d048: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25D044u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25D04Cu;
}
