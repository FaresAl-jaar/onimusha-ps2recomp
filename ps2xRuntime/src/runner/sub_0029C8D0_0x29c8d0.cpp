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

// Function: sub_0029C8D0
// Address: 0x29c8d0 - 0x29c910
void sub_0029C8D0_0x29c8d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029C8D0_0x29c8d0");
#endif

    switch (ctx->pc) {
        case 0x29c8e4u: goto label_29c8e4;
        default: break;
    }

    ctx->pc = 0x29c8d0u;

    // 0x29c8d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x29c8d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x29c8d4: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x29c8d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x29c8d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29c8d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x29c8dc: 0xc0a737c  jal         func_29CDF0
    ctx->pc = 0x29C8DCu;
    SET_GPR_U32(ctx, 31, 0x29C8E4u);
    ctx->pc = 0x29C8E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C8DCu;
    // 0x29c8e0: 0x24844e70  addiu       $a0, $a0, 0x4E70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20080));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29CDF0u, 0x29C8DCu, 0x29C8E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C8E4u;
label_29c8e4:
    // 0x29c8e4: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x29c8e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
    // 0x29c8e8: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x29c8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x29c8ec: 0x2484c870  addiu       $a0, $a0, -0x3790
    ctx->pc = 0x29c8ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953072));
    // 0x29c8f0: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x29c8f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x29c8f4: 0xac244f90  sw          $a0, 0x4F90($at)
    ctx->pc = 0x29c8f4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x8D4F90u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8D4F90u, _value); } while (0);
    // 0x29c8f8: 0x2463c890  addiu       $v1, $v1, -0x3770
    ctx->pc = 0x29c8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953104));
    // 0x29c8fc: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x29c8fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x29c900: 0xac234f94  sw          $v1, 0x4F94($at)
    ctx->pc = 0x29c900u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x8D4F94u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8D4F94u, _value); } while (0);
    // 0x29c904: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29c904u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29c908: 0x3e00008  jr          $ra
    ctx->pc = 0x29C908u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29C90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C908u;
        // 0x29c90c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29C908u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29C910u;
}
