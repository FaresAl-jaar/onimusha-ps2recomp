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

// Function: sub_002374E0
// Address: 0x2374e0 - 0x237518
void sub_002374E0_0x2374e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002374E0_0x2374e0");
#endif

    switch (ctx->pc) {
        case 0x2374f4u: goto label_2374f4;
        case 0x2374f8u: goto label_2374f8;
        case 0x237500u: goto label_237500;
        default: break;
    }

    ctx->pc = 0x2374e0u;

    // 0x2374e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2374e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2374e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2374e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2374e8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2374e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2374ec: 0xc08dce2  jal         func_237388
    ctx->pc = 0x2374ECu;
    SET_GPR_U32(ctx, 31, 0x2374F4u);
    ctx->pc = 0x2374F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2374ECu;
    // 0x2374f0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237388u, 0x2374ECu, 0x2374F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2374F4u;
label_2374f4:
    // 0x2374f4: 0x0  nop
    ctx->pc = 0x2374f4u;
    // NOP
label_2374f8:
    // 0x2374f8: 0xc08c73e  jal         func_231CF8
    ctx->pc = 0x2374F8u;
    SET_GPR_U32(ctx, 31, 0x237500u);
    ctx->pc = 0x231CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231CF8u, 0x2374F8u, 0x237500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237500u;
label_237500:
    // 0x237500: 0x82020045  lb          $v0, 0x45($s0)
    ctx->pc = 0x237500u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 69)));
    // 0x237504: 0x1440fffc  bnez        $v0, . + 4 + (-0x4 << 2)
    ctx->pc = 0x237504u;
    {
        const bool branch_taken_0x237504 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x237508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237504u;
        // 0x237508: 0xdfbf0008  ld          $ra, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237504) {
            ctx->pc = 0x2374F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2374f8;
        }
    }
    ctx->pc = 0x23750Cu;
    // 0x23750c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23750cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x237510: 0x3e00008  jr          $ra
    ctx->pc = 0x237510u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x237514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237510u;
        // 0x237514: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x237510u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x237518u;
}
