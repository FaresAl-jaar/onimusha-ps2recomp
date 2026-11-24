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

// Function: sub_00223298
// Address: 0x223298 - 0x2232c8
void sub_00223298_0x223298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00223298_0x223298");
#endif

    switch (ctx->pc) {
        case 0x2232b8u: goto label_2232b8;
        default: break;
    }

    ctx->pc = 0x223298u;

    // 0x223298: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x223298u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x22329c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x22329cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2232a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2232a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2232a4: 0x24453678  addiu       $a1, $v0, 0x3678
    ctx->pc = 0x2232a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 13944));
    // 0x2232a8: 0x24422150  addiu       $v0, $v0, 0x2150
    ctx->pc = 0x2232a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8528));
    // 0x2232ac: 0xac450008  sw          $a1, 0x8($v0)
    ctx->pc = 0x2232acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 5));
    // 0x2232b0: 0xc088cb2  jal         func_2232C8
    ctx->pc = 0x2232B0u;
    SET_GPR_U32(ctx, 31, 0x2232B8u);
    ctx->pc = 0x2232B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2232B0u;
    // 0x2232b4: 0x8c460010  lw          $a2, 0x10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2232C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2232C8u, 0x2232B0u, 0x2232B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2232B8u;
label_2232b8:
    // 0x2232b8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2232b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2232bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2232bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2232c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2232C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2232C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2232C0u;
        // 0x2232c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2232C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2232C8u;
}
