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

// Function: sub_00275950
// Address: 0x275950 - 0x275984
void sub_00275950_0x275950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00275950_0x275950");
#endif

    switch (ctx->pc) {
        case 0x275960u: goto label_275960;
        case 0x275974u: goto label_275974;
        default: break;
    }

    ctx->pc = 0x275950u;

    // 0x275950: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x275950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x275954: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x275954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x275958: 0xc096c80  jal         func_25B200
    ctx->pc = 0x275958u;
    SET_GPR_U32(ctx, 31, 0x275960u);
    ctx->pc = 0x27595Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275958u;
    // 0x27595c: 0x8c840008  lw          $a0, 0x8($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B200u, 0x275958u, 0x275960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275960u;
label_275960:
    // 0x275960: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x275960u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275964: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x275964u;
    {
        const bool branch_taken_0x275964 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x275968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275964u;
        // 0x275968: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275964) {
            ctx->pc = 0x275978u;
            goto label_275978;
        }
    }
    ctx->pc = 0x27596Cu;
    // 0x27596c: 0xc09d56c  jal         func_2755B0
    ctx->pc = 0x27596Cu;
    SET_GPR_U32(ctx, 31, 0x275974u);
    ctx->pc = 0x2755B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2755B0u, 0x27596Cu, 0x275974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275974u;
label_275974:
    // 0x275974: 0x0  nop
    ctx->pc = 0x275974u;
    // NOP
label_275978:
    // 0x275978: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x275978u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27597c: 0x3e00008  jr          $ra
    ctx->pc = 0x27597Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x275980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27597Cu;
        // 0x275980: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27597Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x275984u;
}
