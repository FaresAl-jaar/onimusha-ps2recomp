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

// Function: sub_0024CFF0
// Address: 0x24cff0 - 0x24d02c
void sub_0024CFF0_0x24cff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024CFF0_0x24cff0");
#endif

    switch (ctx->pc) {
        case 0x24d00cu: goto label_24d00c;
        default: break;
    }

    ctx->pc = 0x24cff0u;

    // 0x24cff0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x24cff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24cff4: 0x3c04004d  lui         $a0, 0x4D
    ctx->pc = 0x24cff4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)77 << 16));
    // 0x24cff8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24cff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x24cffc: 0x248464e8  addiu       $a0, $a0, 0x64E8
    ctx->pc = 0x24cffcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25832));
    // 0x24d000: 0x24060168  addiu       $a2, $zero, 0x168
    ctx->pc = 0x24d000u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 360));
    // 0x24d004: 0xc0494fc  jal         func_1253F0
    ctx->pc = 0x24D004u;
    SET_GPR_U32(ctx, 31, 0x24D00Cu);
    ctx->pc = 0x24D008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D004u;
    // 0x24d008: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1253F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1253F0u, 0x24D004u, 0x24D00Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D00Cu;
label_24d00c:
    // 0x24d00c: 0x3c03004d  lui         $v1, 0x4D
    ctx->pc = 0x24d00cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)77 << 16));
    // 0x24d010: 0x24636518  addiu       $v1, $v1, 0x6518
    ctx->pc = 0x24d010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25880));
    // 0x24d014: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24d014u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24d018: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x24d018u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4D6518u));
    // 0x24d01c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x24d01cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x24d020: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x24d020u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x4D6518u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4D6518u, _value); } while (0);
    // 0x24d024: 0x3e00008  jr          $ra
    ctx->pc = 0x24D024u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24D028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D024u;
        // 0x24d028: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24D024u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24D02Cu;
}
