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

// Function: sub_002A7710
// Address: 0x2a7710 - 0x2a774c
void sub_002A7710_0x2a7710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A7710_0x2a7710");
#endif

    switch (ctx->pc) {
        case 0x2a7740u: goto label_2a7740;
        default: break;
    }

    ctx->pc = 0x2a7710u;

    // 0x2a7710: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a7710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2a7714: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2a7714u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7718: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x2a7718u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a771c: 0xc0582d  daddu       $t3, $a2, $zero
    ctx->pc = 0x2a771cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7720: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a7720u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2a7724: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2a7724u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7728: 0x3405dfc8  ori         $a1, $zero, 0xDFC8
    ctx->pc = 0x2a7728u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)57288);
    // 0x2a772c: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x2a772cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2a7730: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x2a7730u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a7734: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2a7734u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7738: 0xc097d94  jal         func_25F650
    ctx->pc = 0x2A7738u;
    SET_GPR_U32(ctx, 31, 0x2A7740u);
    ctx->pc = 0x2A773Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A7738u;
    // 0x2a773c: 0xffa00000  sd          $zero, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F650u, 0x2A7738u, 0x2A7740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7740u;
label_2a7740:
    // 0x2a7740: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a7740u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a7744: 0x3e00008  jr          $ra
    ctx->pc = 0x2A7744u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A7748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7744u;
        // 0x2a7748: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A7744u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A774Cu;
}
