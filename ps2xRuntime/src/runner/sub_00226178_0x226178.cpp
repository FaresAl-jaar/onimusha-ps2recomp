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

// Function: sub_00226178
// Address: 0x226178 - 0x2261c8
void sub_00226178_0x226178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00226178_0x226178");
#endif

    switch (ctx->pc) {
        case 0x226198u: goto label_226198;
        default: break;
    }

    ctx->pc = 0x226178u;

    // 0x226178: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x226178u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x22617c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x22617cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226180: 0x2442a378  addiu       $v0, $v0, -0x5C88
    ctx->pc = 0x226180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943608));
    // 0x226184: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x226184u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x4BA37Cu));
    // 0x226188: 0x18a0000c  blez        $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x226188u;
    {
        const bool branch_taken_0x226188 = (GPR_S64(ctx, 5) <= 0);
        ctx->pc = 0x22618Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226188u;
        // 0x22618c: 0x24420018  addiu       $v0, $v0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226188) {
            ctx->pc = 0x2261BCu;
            goto label_2261bc;
        }
    }
    ctx->pc = 0x226190u;
    // 0x226190: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x226190u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226194: 0x0  nop
    ctx->pc = 0x226194u;
    // NOP
label_226198:
    // 0x226198: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x226198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x22619c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x22619cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2261a0: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2261A0u;
    {
        const bool branch_taken_0x2261a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2261A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2261A0u;
        // 0x2261a4: 0x24840094  addiu       $a0, $a0, 0x94 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 148));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2261a0) {
            ctx->pc = 0x2261C0u;
            goto label_2261c0;
        }
    }
    ctx->pc = 0x2261A8u;
    // 0x2261a8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2261a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2261ac: 0xc5102a  slt         $v0, $a2, $a1
    ctx->pc = 0x2261acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2261b0: 0x0  nop
    ctx->pc = 0x2261b0u;
    // NOP
    // 0x2261b4: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2261B4u;
    {
        const bool branch_taken_0x2261b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2261b4) {
            ctx->pc = 0x226198u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_226198;
        }
    }
    ctx->pc = 0x2261BCu;
label_2261bc:
    // 0x2261bc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2261bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2261c0:
    // 0x2261c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2261C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2261C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2261C8u;
}
