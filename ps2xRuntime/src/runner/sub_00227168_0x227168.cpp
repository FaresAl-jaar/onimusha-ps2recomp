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

// Function: sub_00227168
// Address: 0x227168 - 0x227194
void sub_00227168_0x227168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00227168_0x227168");
#endif

    ctx->pc = 0x227168u;

    // 0x227168: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x227168u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x22716c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22716cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x227170: 0xc480003c  lwc1        $f0, 0x3C($a0)
    ctx->pc = 0x227170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x227174: 0x46020032  c.eq.s      $f0, $f2
    ctx->pc = 0x227174u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x227178: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x227178u;
    {
        const bool branch_taken_0x227178 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x22717Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227178u;
        // 0x22717c: 0xc4810040  lwc1        $f1, 0x40($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x227178) {
            ctx->pc = 0x22718Cu;
            goto label_22718c;
        }
    }
    ctx->pc = 0x227180u;
    // 0x227180: 0x46020832  c.eq.s      $f1, $f2
    ctx->pc = 0x227180u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x227184: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x227184u;
    {
        const bool branch_taken_0x227184 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x227184) {
            ctx->pc = 0x227188u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x227184u;
            // 0x227188: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22718Cu;
            goto label_22718c;
        }
    }
    ctx->pc = 0x22718Cu;
label_22718c:
    // 0x22718c: 0x3e00008  jr          $ra
    ctx->pc = 0x22718Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22718Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x227194u;
}
