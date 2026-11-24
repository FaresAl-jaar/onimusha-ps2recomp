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

// Function: sub_00375CF0
// Address: 0x375cf0 - 0x375d24
void sub_00375CF0_0x375cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00375CF0_0x375cf0");
#endif

    switch (ctx->pc) {
        case 0x375d00u: goto label_375d00;
        case 0x375d14u: goto label_375d14;
        default: break;
    }

    ctx->pc = 0x375cf0u;

    // 0x375cf0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x375cf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x375cf4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x375cf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x375cf8: 0xc0dd738  jal         func_375CE0
    ctx->pc = 0x375CF8u;
    SET_GPR_U32(ctx, 31, 0x375D00u);
    ctx->pc = 0x375CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x375CE0u, 0x375CF8u, 0x375D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375D00u;
label_375d00:
    // 0x375d00: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x375d00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375d04: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x375D04u;
    {
        const bool branch_taken_0x375d04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x375d04) {
            ctx->pc = 0x375D18u;
            goto label_375d18;
        }
    }
    ctx->pc = 0x375D0Cu;
    // 0x375d0c: 0xc0dd8b8  jal         func_3762E0
    ctx->pc = 0x375D0Cu;
    SET_GPR_U32(ctx, 31, 0x375D14u);
    ctx->pc = 0x3762E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3762E0u, 0x375D0Cu, 0x375D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375D14u;
label_375d14:
    // 0x375d14: 0x0  nop
    ctx->pc = 0x375d14u;
    // NOP
label_375d18:
    // 0x375d18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x375d18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x375d1c: 0x3e00008  jr          $ra
    ctx->pc = 0x375D1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x375D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375D1Cu;
        // 0x375d20: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x375D1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x375D24u;
}
