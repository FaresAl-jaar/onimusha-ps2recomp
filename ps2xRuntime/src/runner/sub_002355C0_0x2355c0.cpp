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

// Function: sub_002355C0
// Address: 0x2355c0 - 0x2355f4
void sub_002355C0_0x2355c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002355C0_0x2355c0");
#endif

    switch (ctx->pc) {
        case 0x2355d4u: goto label_2355d4;
        case 0x2355d8u: goto label_2355d8;
        default: break;
    }

    ctx->pc = 0x2355c0u;

    // 0x2355c0: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x2355c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x2355c4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2355c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2355c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2355c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2355cc: 0xc08d47e  jal         func_2351F8
    ctx->pc = 0x2355CCu;
    SET_GPR_U32(ctx, 31, 0x2355D4u);
    ctx->pc = 0x2355D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2355CCu;
    // 0x2355d0: 0x2484ae50  addiu       $a0, $a0, -0x51B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2351F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2351F8u, 0x2355CCu, 0x2355D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2355D4u;
label_2355d4:
    // 0x2355d4: 0x0  nop
    ctx->pc = 0x2355d4u;
    // NOP
label_2355d8:
    // 0x2355d8: 0x0  nop
    ctx->pc = 0x2355d8u;
    // NOP
    // 0x2355dc: 0x0  nop
    ctx->pc = 0x2355dcu;
    // NOP
    // 0x2355e0: 0x0  nop
    ctx->pc = 0x2355e0u;
    // NOP
    // 0x2355e4: 0x0  nop
    ctx->pc = 0x2355e4u;
    // NOP
    // 0x2355e8: 0x0  nop
    ctx->pc = 0x2355e8u;
    // NOP
    // 0x2355ec: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x2355ECu;
    {
        const bool branch_taken_0x2355ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2355ec) {
            ctx->pc = 0x2355D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2355d8;
        }
    }
    ctx->pc = 0x2355F4u;
}
