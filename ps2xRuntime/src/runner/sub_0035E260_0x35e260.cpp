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

// Function: sub_0035E260
// Address: 0x35e260 - 0x35e28c
void sub_0035E260_0x35e260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035E260_0x35e260");
#endif

    ctx->pc = 0x35e260u;

    // 0x35e260: 0xa0802af0  sb          $zero, 0x2AF0($a0)
    ctx->pc = 0x35e260u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 10992), (uint8_t)GPR_U32(ctx, 0));
    // 0x35e264: 0x3c03ffbf  lui         $v1, 0xFFBF
    ctx->pc = 0x35e264u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65471 << 16));
    // 0x35e268: 0x8c860148  lw          $a2, 0x148($a0)
    ctx->pc = 0x35e268u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
    // 0x35e26c: 0x3465ffff  ori         $a1, $v1, 0xFFFF
    ctx->pc = 0x35e26cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x35e270: 0x2403fbff  addiu       $v1, $zero, -0x401
    ctx->pc = 0x35e270u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966271));
    // 0x35e274: 0xc52824  and         $a1, $a2, $a1
    ctx->pc = 0x35e274u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    // 0x35e278: 0xac850148  sw          $a1, 0x148($a0)
    ctx->pc = 0x35e278u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 5));
    // 0x35e27c: 0x8c8506cc  lw          $a1, 0x6CC($a0)
    ctx->pc = 0x35e27cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1740)));
    // 0x35e280: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x35e280u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x35e284: 0x3e00008  jr          $ra
    ctx->pc = 0x35E284u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35E288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E284u;
        // 0x35e288: 0xac8306cc  sw          $v1, 0x6CC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1740), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35E284u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35E28Cu;
}
