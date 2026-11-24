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

// Function: sub_0024E858
// Address: 0x24e858 - 0x24e8a0
void sub_0024E858_0x24e858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024E858_0x24e858");
#endif

    ctx->pc = 0x24e858u;

    // 0x24e858: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x24e858u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
    // 0x24e85c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x24e85cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24e860: 0x8c4374d8  lw          $v1, 0x74D8($v0)
    ctx->pc = 0x24e860u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4D74D8u));
    // 0x24e864: 0x14660005  bne         $v1, $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x24E864u;
    {
        const bool branch_taken_0x24e864 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        ctx->pc = 0x24E868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E864u;
        // 0x24e868: 0x2ca70002  sltiu       $a3, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e864) {
            ctx->pc = 0x24E87Cu;
            goto label_24e87c;
        }
    }
    ctx->pc = 0x24E86Cu;
    // 0x24e86c: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x24e86cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
    // 0x24e870: 0x8c4374d0  lw          $v1, 0x74D0($v0)
    ctx->pc = 0x24e870u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4D74D0u));
    // 0x24e874: 0x18600008  blez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x24E874u;
    {
        const bool branch_taken_0x24e874 = (GPR_S64(ctx, 3) <= 0);
        if (branch_taken_0x24e874) {
            ctx->pc = 0x24E898u;
            goto label_24e898;
        }
    }
    ctx->pc = 0x24E87Cu;
label_24e87c:
    // 0x24e87c: 0x10e00006  beqz        $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x24E87Cu;
    {
        const bool branch_taken_0x24e87c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x24e87c) {
            ctx->pc = 0x24E898u;
            goto label_24e898;
        }
    }
    ctx->pc = 0x24E884u;
    // 0x24e884: 0x80820056  lb          $v0, 0x56($a0)
    ctx->pc = 0x24e884u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 86)));
    // 0x24e888: 0x10450003  beq         $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x24E888u;
    {
        const bool branch_taken_0x24e888 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x24E88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E888u;
        // 0x24e88c: 0x90830056  lbu         $v1, 0x56($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 86)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e888) {
            ctx->pc = 0x24E898u;
            goto label_24e898;
        }
    }
    ctx->pc = 0x24E890u;
    // 0x24e890: 0xa0850056  sb          $a1, 0x56($a0)
    ctx->pc = 0x24e890u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 86), (uint8_t)GPR_U32(ctx, 5));
    // 0x24e894: 0xa0830001  sb          $v1, 0x1($a0)
    ctx->pc = 0x24e894u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 3));
label_24e898:
    // 0x24e898: 0x3e00008  jr          $ra
    ctx->pc = 0x24E898u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24E898u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24E8A0u;
}
