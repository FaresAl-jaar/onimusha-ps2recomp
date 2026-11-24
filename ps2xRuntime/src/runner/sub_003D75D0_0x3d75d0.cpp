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

// Function: sub_003D75D0
// Address: 0x3d75d0 - 0x3d75f4
void sub_003D75D0_0x3d75d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D75D0_0x3d75d0");
#endif

    ctx->pc = 0x3d75d0u;

    // 0x3d75d0: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x3d75d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x3d75d4: 0x2463c250  addiu       $v1, $v1, -0x3DB0
    ctx->pc = 0x3d75d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951504));
    // 0x3d75d8: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x3d75d8u;
    { uint32_t bits = FAST_READ32(0x68C250u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3d75dc: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x3d75dcu;
    { uint32_t bits = FAST_READ32(0x68C254u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3d75e0: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x3d75e0u;
    { uint32_t bits = FAST_READ32(0x68C258u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3d75e4: 0xe48206a0  swc1        $f2, 0x6A0($a0)
    ctx->pc = 0x3d75e4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1696), bits); }
    // 0x3d75e8: 0xe48106a4  swc1        $f1, 0x6A4($a0)
    ctx->pc = 0x3d75e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1700), bits); }
    // 0x3d75ec: 0x3e00008  jr          $ra
    ctx->pc = 0x3D75ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D75F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D75ECu;
        // 0x3d75f0: 0xe48006a8  swc1        $f0, 0x6A8($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1704), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D75ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D75F4u;
}
