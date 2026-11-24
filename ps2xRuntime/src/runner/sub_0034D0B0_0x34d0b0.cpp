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

// Function: sub_0034D0B0
// Address: 0x34d0b0 - 0x34d0e8
void sub_0034D0B0_0x34d0b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034D0B0_0x34d0b0");
#endif

    ctx->pc = 0x34d0b0u;

    // 0x34d0b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x34d0b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x34d0b4: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x34d0b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
    // 0x34d0b8: 0x9d1021  addu        $v0, $a0, $sp
    ctx->pc = 0x34d0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
    // 0x34d0bc: 0x24637e90  addiu       $v1, $v1, 0x7E90
    ctx->pc = 0x34d0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32400));
    // 0x34d0c0: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x34d0c0u;
    SET_GPR_VEC(ctx, 4, FAST_READ128(0x657E90u));
    // 0x34d0c4: 0x3c01fefd  lui         $at, 0xFEFD
    ctx->pc = 0x34d0c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)65277 << 16));
    // 0x34d0c8: 0x27a50000  addiu       $a1, $sp, 0x0
    ctx->pc = 0x34d0c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 0));
    // 0x34d0cc: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x34d0ccu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x34d0d0: 0x90630010  lbu         $v1, 0x10($v1)
    ctx->pc = 0x34d0d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x657EA0u));
    // 0x34d0d4: 0x7ca40000  sq          $a0, 0x0($a1)
    ctx->pc = 0x34d0d4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 4));
    // 0x34d0d8: 0xa0a30010  sb          $v1, 0x10($a1)
    ctx->pc = 0x34d0d8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 16), (uint8_t)GPR_U32(ctx, 3));
    // 0x34d0dc: 0x9022ffec  lbu         $v0, -0x14($at)
    ctx->pc = 0x34d0dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294967276)));
    // 0x34d0e0: 0x3e00008  jr          $ra
    ctx->pc = 0x34D0E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34D0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34D0E0u;
        // 0x34d0e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34D0E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34D0E8u;
}
