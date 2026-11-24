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

// Function: sub_0011EB10
// Address: 0x11eb10 - 0x11eb28
void sub_0011EB10_0x11eb10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011EB10_0x11eb10");
#endif

    ctx->pc = 0x11eb10u;

    // 0x11eb10: 0x440e6000  mfc1        $t6, $f12
    ctx->pc = 0x11eb10u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 14, bits); }
    // 0x11eb14: 0x3c0f7fff  lui         $t7, 0x7FFF
    ctx->pc = 0x11eb14u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)32767 << 16));
    // 0x11eb18: 0x35efffff  ori         $t7, $t7, 0xFFFF
    ctx->pc = 0x11eb18u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)65535);
    // 0x11eb1c: 0x1cf7024  and         $t6, $t6, $t7
    ctx->pc = 0x11eb1cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & GPR_U64(ctx, 15));
    // 0x11eb20: 0x3e00008  jr          $ra
    ctx->pc = 0x11EB20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11EB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EB20u;
        // 0x11eb24: 0x448e0000  mtc1        $t6, $f0 (Delay Slot)
        { uint32_t bits = GPR_U32(ctx, 14); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11EB20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11EB28u;
}
