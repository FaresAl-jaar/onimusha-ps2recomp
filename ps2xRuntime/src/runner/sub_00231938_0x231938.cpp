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

// Function: sub_00231938
// Address: 0x231938 - 0x231970
void sub_00231938_0x231938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00231938_0x231938");
#endif

    switch (ctx->pc) {
        case 0x23194cu: goto label_23194c;
        case 0x231954u: goto label_231954;
        case 0x23195cu: goto label_23195c;
        default: break;
    }

    ctx->pc = 0x231938u;

    // 0x231938: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x231938u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23193c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23193cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x231940: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x231940u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x231944: 0xc08c732  jal         func_231CC8
    ctx->pc = 0x231944u;
    SET_GPR_U32(ctx, 31, 0x23194Cu);
    ctx->pc = 0x231948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231944u;
    // 0x231948: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231CC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231CC8u, 0x231944u, 0x23194Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23194Cu;
label_23194c:
    // 0x23194c: 0xc08c65c  jal         func_231970
    ctx->pc = 0x23194Cu;
    SET_GPR_U32(ctx, 31, 0x231954u);
    ctx->pc = 0x231950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23194Cu;
    // 0x231950: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231970u, 0x23194Cu, 0x231954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231954u;
label_231954:
    // 0x231954: 0xc08c738  jal         func_231CE0
    ctx->pc = 0x231954u;
    SET_GPR_U32(ctx, 31, 0x23195Cu);
    ctx->pc = 0x231958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231954u;
    // 0x231958: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231CE0u, 0x231954u, 0x23195Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23195Cu;
label_23195c:
    // 0x23195c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x23195cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x231960: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x231960u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231964: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x231964u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x231968: 0x3e00008  jr          $ra
    ctx->pc = 0x231968u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23196Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231968u;
        // 0x23196c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x231968u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x231970u;
}
