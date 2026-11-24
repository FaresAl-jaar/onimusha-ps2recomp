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

// Function: sub_001FE878
// Address: 0x1fe878 - 0x1fe8c4
void sub_001FE878_0x1fe878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FE878_0x1fe878");
#endif

    switch (ctx->pc) {
        case 0x1fe8a0u: goto label_1fe8a0;
        case 0x1fe8b0u: goto label_1fe8b0;
        default: break;
    }

    ctx->pc = 0x1fe878u;

    // 0x1fe878: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1fe878u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1fe87c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1fe87cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe880: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fe880u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1fe884: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1fe884u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe888: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1fe888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1fe88c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FE88Cu;
    {
        const bool branch_taken_0x1fe88c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FE890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE88Cu;
        // 0x1fe890: 0x24440250  addiu       $a0, $v0, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 592));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe88c) {
            ctx->pc = 0x1FE8A8u;
            goto label_1fe8a8;
        }
    }
    ctx->pc = 0x1FE894u;
    // 0x1fe894: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x1fe894u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x1fe898: 0xc07fa32  jal         func_1FE8C8
    ctx->pc = 0x1FE898u;
    SET_GPR_U32(ctx, 31, 0x1FE8A0u);
    ctx->pc = 0x1FE89Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE898u;
    // 0x1fe89c: 0x24848140  addiu       $a0, $a0, -0x7EC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE8C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE8C8u, 0x1FE898u, 0x1FE8A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE8A0u;
label_1fe8a0:
    // 0x1fe8a0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1FE8A0u;
    {
        const bool branch_taken_0x1fe8a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE8A0u;
        // 0x1fe8a4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe8a0) {
            ctx->pc = 0x1FE8B4u;
            goto label_1fe8b4;
        }
    }
    ctx->pc = 0x1FE8A8u;
label_1fe8a8:
    // 0x1fe8a8: 0xc07fa32  jal         func_1FE8C8
    ctx->pc = 0x1FE8A8u;
    SET_GPR_U32(ctx, 31, 0x1FE8B0u);
    ctx->pc = 0x1FE8C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE8C8u, 0x1FE8A8u, 0x1FE8B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE8B0u;
label_1fe8b0:
    // 0x1fe8b0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1fe8b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1fe8b4:
    // 0x1fe8b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fe8b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fe8b8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1fe8b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fe8bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1FE8BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FE8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE8BCu;
        // 0x1fe8c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FE8BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FE8C4u;
}
