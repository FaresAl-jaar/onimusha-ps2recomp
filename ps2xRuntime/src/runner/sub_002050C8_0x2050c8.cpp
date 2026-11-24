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

// Function: sub_002050C8
// Address: 0x2050c8 - 0x2050f8
void sub_002050C8_0x2050c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002050C8_0x2050c8");
#endif

    switch (ctx->pc) {
        case 0x2050d8u: goto label_2050d8;
        default: break;
    }

    ctx->pc = 0x2050c8u;

    // 0x2050c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2050c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2050cc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2050ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2050d0: 0xc089092  jal         func_224248
    ctx->pc = 0x2050D0u;
    SET_GPR_U32(ctx, 31, 0x2050D8u);
    ctx->pc = 0x2050D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2050D0u;
    // 0x2050d4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224248u, 0x2050D0u, 0x2050D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2050D8u;
label_2050d8:
    // 0x2050d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2050d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2050dc: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x2050dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2050e0: 0x432026  xor         $a0, $v0, $v1
    ctx->pc = 0x2050e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x2050e4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2050e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2050e8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2050e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2050ec: 0xa4100a  movz        $v0, $a1, $a0
    ctx->pc = 0x2050ecu;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x2050f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2050F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2050F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2050F0u;
        // 0x2050f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2050F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2050F8u;
}
