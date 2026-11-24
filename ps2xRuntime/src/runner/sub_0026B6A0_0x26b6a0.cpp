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

// Function: sub_0026B6A0
// Address: 0x26b6a0 - 0x26b6f4
void sub_0026B6A0_0x26b6a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026B6A0_0x26b6a0");
#endif

    switch (ctx->pc) {
        case 0x26b6c8u: goto label_26b6c8;
        case 0x26b6e8u: goto label_26b6e8;
        default: break;
    }

    ctx->pc = 0x26b6a0u;

    // 0x26b6a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x26b6a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x26b6a4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x26b6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x26b6a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x26b6a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x26b6ac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x26b6acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b6b0: 0xa0820001  sb          $v0, 0x1($a0)
    ctx->pc = 0x26b6b0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x26b6b4: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x26b6b4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x26b6b8: 0x8085000f  lb          $a1, 0xF($a0)
    ctx->pc = 0x26b6b8u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 15)));
    // 0x26b6bc: 0x3c040093  lui         $a0, 0x93
    ctx->pc = 0x26b6bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)147 << 16));
    // 0x26b6c0: 0xc0f0154  jal         func_3C0550
    ctx->pc = 0x26B6C0u;
    SET_GPR_U32(ctx, 31, 0x26B6C8u);
    ctx->pc = 0x26B6C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B6C0u;
    // 0x26b6c4: 0x2484fee0  addiu       $a0, $a0, -0x120 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967008));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C0550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C0550u, 0x26B6C0u, 0x26B6C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B6C8u;
label_26b6c8:
    // 0x26b6c8: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x26b6c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x26b6cc: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x26b6ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x26b6d0: 0x2484cbe0  addiu       $a0, $a0, -0x3420
    ctx->pc = 0x26b6d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    // 0x26b6d4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x26b6d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b6d8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x26b6d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b6dc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x26b6dcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b6e0: 0xc063c70  jal         func_18F1C0
    ctx->pc = 0x26B6E0u;
    SET_GPR_U32(ctx, 31, 0x26B6E8u);
    ctx->pc = 0x26B6E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B6E0u;
    // 0x26b6e4: 0x2409ffff  addiu       $t1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F1C0u, 0x26B6E0u, 0x26B6E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B6E8u;
label_26b6e8:
    // 0x26b6e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26b6e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26b6ec: 0x3e00008  jr          $ra
    ctx->pc = 0x26B6ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26B6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B6ECu;
        // 0x26b6f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26B6ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26B6F4u;
}
