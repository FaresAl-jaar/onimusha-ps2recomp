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

// Function: sub_00341210
// Address: 0x341210 - 0x341240
void sub_00341210_0x341210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00341210_0x341210");
#endif

    ctx->pc = 0x341210u;

    // 0x341210: 0xa0800032  sb          $zero, 0x32($a0)
    ctx->pc = 0x341210u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 50), (uint8_t)GPR_U32(ctx, 0));
    // 0x341214: 0xc4c30000  lwc1        $f3, 0x0($a2)
    ctx->pc = 0x341214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x341218: 0xc4c20004  lwc1        $f2, 0x4($a2)
    ctx->pc = 0x341218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34121c: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x34121cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x341220: 0xc4c0000c  lwc1        $f0, 0xC($a2)
    ctx->pc = 0x341220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x341224: 0xe4830020  swc1        $f3, 0x20($a0)
    ctx->pc = 0x341224u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x341228: 0xe4820024  swc1        $f2, 0x24($a0)
    ctx->pc = 0x341228u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    // 0x34122c: 0xe4810028  swc1        $f1, 0x28($a0)
    ctx->pc = 0x34122cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
    // 0x341230: 0xe480002c  swc1        $f0, 0x2C($a0)
    ctx->pc = 0x341230u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 44), bits); }
    // 0x341234: 0xa48700c2  sh          $a3, 0xC2($a0)
    ctx->pc = 0x341234u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 194), (uint16_t)GPR_U32(ctx, 7));
    // 0x341238: 0x3e00008  jr          $ra
    ctx->pc = 0x341238u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34123Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341238u;
        // 0x34123c: 0xa4852ac4  sh          $a1, 0x2AC4($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 10948), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x341238u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x341240u;
}
