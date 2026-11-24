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

// Function: sub_0029E9A0
// Address: 0x29e9a0 - 0x29e9e0
void sub_0029E9A0_0x29e9a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029E9A0_0x29e9a0");
#endif

    ctx->pc = 0x29e9a0u;

    // 0x29e9a0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x29e9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x29e9a4: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x29e9a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x29e9a8: 0x34038002  ori         $v1, $zero, 0x8002
    ctx->pc = 0x29e9a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32770);
    // 0x29e9ac: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x29e9acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x29e9b0: 0xfca30000  sd          $v1, 0x0($a1)
    ctx->pc = 0x29e9b0u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 3));
    // 0x29e9b4: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x29e9b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x29e9b8: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x29e9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x29e9bc: 0xfca40008  sd          $a0, 0x8($a1)
    ctx->pc = 0x29e9bcu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 4));
    // 0x29e9c0: 0x34638080  ori         $v1, $v1, 0x8080
    ctx->pc = 0x29e9c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32896);
    // 0x29e9c4: 0xfca30010  sd          $v1, 0x10($a1)
    ctx->pc = 0x29e9c4u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 3));
    // 0x29e9c8: 0x2403003d  addiu       $v1, $zero, 0x3D
    ctx->pc = 0x29e9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    // 0x29e9cc: 0xfca30018  sd          $v1, 0x18($a1)
    ctx->pc = 0x29e9ccu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 24), GPR_U64(ctx, 3));
    // 0x29e9d0: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x29e9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x29e9d4: 0xfca00020  sd          $zero, 0x20($a1)
    ctx->pc = 0x29e9d4u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 32), GPR_U64(ctx, 0));
    // 0x29e9d8: 0x3e00008  jr          $ra
    ctx->pc = 0x29E9D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29E9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E9D8u;
        // 0x29e9dc: 0xfca30028  sd          $v1, 0x28($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 40), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29E9D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29E9E0u;
}
