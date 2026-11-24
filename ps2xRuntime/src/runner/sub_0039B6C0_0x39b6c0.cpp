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

// Function: sub_0039B6C0
// Address: 0x39b6c0 - 0x39b6e8
void sub_0039B6C0_0x39b6c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039B6C0_0x39b6c0");
#endif

    ctx->pc = 0x39b6c0u;

    // 0x39b6c0: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x39b6c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x39b6c4: 0xa0802b4a  sb          $zero, 0x2B4A($a0)
    ctx->pc = 0x39b6c4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 11082), (uint8_t)GPR_U32(ctx, 0));
    // 0x39b6c8: 0x2463c250  addiu       $v1, $v1, -0x3DB0
    ctx->pc = 0x39b6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951504));
    // 0x39b6cc: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x39b6ccu;
    { uint32_t bits = FAST_READ32(0x68C250u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x39b6d0: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x39b6d0u;
    { uint32_t bits = FAST_READ32(0x68C254u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x39b6d4: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x39b6d4u;
    { uint32_t bits = FAST_READ32(0x68C258u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x39b6d8: 0xe48206a0  swc1        $f2, 0x6A0($a0)
    ctx->pc = 0x39b6d8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1696), bits); }
    // 0x39b6dc: 0xe48106a4  swc1        $f1, 0x6A4($a0)
    ctx->pc = 0x39b6dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1700), bits); }
    // 0x39b6e0: 0x3e00008  jr          $ra
    ctx->pc = 0x39B6E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39B6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B6E0u;
        // 0x39b6e4: 0xe48006a8  swc1        $f0, 0x6A8($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1704), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39B6E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39B6E8u;
}
