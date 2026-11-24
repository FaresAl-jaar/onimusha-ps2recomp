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

// Function: sub_002C6810
// Address: 0x2c6810 - 0x2c6844
void sub_002C6810_0x2c6810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C6810_0x2c6810");
#endif

    ctx->pc = 0x2c6810u;

    // 0x2c6810: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x2c6810u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x2c6814: 0xa0800046  sb          $zero, 0x46($a0)
    ctx->pc = 0x2c6814u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 70), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c6818: 0x24a55200  addiu       $a1, $a1, 0x5200
    ctx->pc = 0x2c6818u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20992));
    // 0x2c681c: 0x24c30002  addiu       $v1, $a2, 0x2
    ctx->pc = 0x2c681cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x2c6820: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x2c6820u;
    { uint32_t bits = FAST_READ32(0x4E5200u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c6824: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c6824u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6828: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x2c6828u;
    { uint32_t bits = FAST_READ32(0x4E5204u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c682c: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x2c682cu;
    { uint32_t bits = FAST_READ32(0x4E5208u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c6830: 0xe4820008  swc1        $f2, 0x8($a0)
    ctx->pc = 0x2c6830u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x2c6834: 0xe481000c  swc1        $f1, 0xC($a0)
    ctx->pc = 0x2c6834u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x2c6838: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x2c6838u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x2c683c: 0x3e00008  jr          $ra
    ctx->pc = 0x2C683Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C6840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C683Cu;
        // 0x2c6840: 0xac83002c  sw          $v1, 0x2C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C683Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C6844u;
}
