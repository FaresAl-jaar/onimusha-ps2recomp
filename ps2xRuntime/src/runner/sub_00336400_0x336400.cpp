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

// Function: sub_00336400
// Address: 0x336400 - 0x336444
void sub_00336400_0x336400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00336400_0x336400");
#endif

    switch (ctx->pc) {
        case 0x336414u: goto label_336414;
        case 0x336438u: goto label_336438;
        default: break;
    }

    ctx->pc = 0x336400u;

    // 0x336400: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x336400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x336404: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x336404u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x336408: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x336408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x33640c: 0xc0a737c  jal         func_29CDF0
    ctx->pc = 0x33640Cu;
    SET_GPR_U32(ctx, 31, 0x336414u);
    ctx->pc = 0x336410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33640Cu;
    // 0x336410: 0x24842f20  addiu       $a0, $a0, 0x2F20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29CDF0u, 0x33640Cu, 0x336414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336414u;
label_336414:
    // 0x336414: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x336414u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x336418: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x336418u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x33641c: 0x246361d0  addiu       $v1, $v1, 0x61D0
    ctx->pc = 0x33641cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25040));
    // 0x336420: 0x3c010091  lui         $at, 0x91
    ctx->pc = 0x336420u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)145 << 16));
    // 0x336424: 0xac233040  sw          $v1, 0x3040($at)
    ctx->pc = 0x336424u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x913040u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x913040u, _value); } while (0);
    // 0x336428: 0x244263f0  addiu       $v0, $v0, 0x63F0
    ctx->pc = 0x336428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25584));
    // 0x33642c: 0x3c010091  lui         $at, 0x91
    ctx->pc = 0x33642cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)145 << 16));
    // 0x336430: 0xc0cd6f4  jal         func_335BD0
    ctx->pc = 0x336430u;
    SET_GPR_U32(ctx, 31, 0x336438u);
    ctx->pc = 0x336434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x336430u;
    // 0x336434: 0xac223044  sw          $v0, 0x3044($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 12356), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335BD0u, 0x336430u, 0x336438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336438u;
label_336438:
    // 0x336438: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x336438u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33643c: 0x3e00008  jr          $ra
    ctx->pc = 0x33643Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x336440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33643Cu;
        // 0x336440: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33643Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x336444u;
}
