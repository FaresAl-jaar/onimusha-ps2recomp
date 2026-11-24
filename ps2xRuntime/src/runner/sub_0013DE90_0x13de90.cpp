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

// Function: sub_0013DE90
// Address: 0x13de90 - 0x13ded8
void sub_0013DE90_0x13de90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013DE90_0x13de90");
#endif

    ctx->pc = 0x13de90u;

    // 0x13de90: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x13de90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13de94: 0xac830fb8  sw          $v1, 0xFB8($a0)
    ctx->pc = 0x13de94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4024), GPR_U32(ctx, 3));
    // 0x13de98: 0xac800fbc  sw          $zero, 0xFBC($a0)
    ctx->pc = 0x13de98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4028), GPR_U32(ctx, 0));
    // 0x13de9c: 0xac800fc0  sw          $zero, 0xFC0($a0)
    ctx->pc = 0x13de9cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4032), GPR_U32(ctx, 0));
    // 0x13dea0: 0xac800fc4  sw          $zero, 0xFC4($a0)
    ctx->pc = 0x13dea0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4036), GPR_U32(ctx, 0));
    // 0x13dea4: 0xa0800fcc  sb          $zero, 0xFCC($a0)
    ctx->pc = 0x13dea4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4044), (uint8_t)GPR_U32(ctx, 0));
    // 0x13dea8: 0xa0800fcd  sb          $zero, 0xFCD($a0)
    ctx->pc = 0x13dea8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4045), (uint8_t)GPR_U32(ctx, 0));
    // 0x13deac: 0xa4800fc8  sh          $zero, 0xFC8($a0)
    ctx->pc = 0x13deacu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4040), (uint16_t)GPR_U32(ctx, 0));
    // 0x13deb0: 0xe48c0fac  swc1        $f12, 0xFAC($a0)
    ctx->pc = 0x13deb0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4012), bits); }
    // 0x13deb4: 0xe48d0fb0  swc1        $f13, 0xFB0($a0)
    ctx->pc = 0x13deb4u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4016), bits); }
    // 0x13deb8: 0xe48e0fb4  swc1        $f14, 0xFB4($a0)
    ctx->pc = 0x13deb8u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4020), bits); }
    // 0x13debc: 0xac850f80  sw          $a1, 0xF80($a0)
    ctx->pc = 0x13debcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3968), GPR_U32(ctx, 5));
    // 0x13dec0: 0xac800fa0  sw          $zero, 0xFA0($a0)
    ctx->pc = 0x13dec0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4000), GPR_U32(ctx, 0));
    // 0x13dec4: 0xac800f9c  sw          $zero, 0xF9C($a0)
    ctx->pc = 0x13dec4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3996), GPR_U32(ctx, 0));
    // 0x13dec8: 0xac800f98  sw          $zero, 0xF98($a0)
    ctx->pc = 0x13dec8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3992), GPR_U32(ctx, 0));
    // 0x13decc: 0xac800f94  sw          $zero, 0xF94($a0)
    ctx->pc = 0x13deccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3988), GPR_U32(ctx, 0));
    // 0x13ded0: 0x3e00008  jr          $ra
    ctx->pc = 0x13DED0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13DED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DED0u;
        // 0x13ded4: 0xac800f90  sw          $zero, 0xF90($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 3984), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13DED0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13DED8u;
}
