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

// Function: sub_00384020
// Address: 0x384020 - 0x384060
void sub_00384020_0x384020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00384020_0x384020");
#endif

    ctx->pc = 0x384020u;

    // 0x384020: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x384020u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x384024: 0xa0830001  sb          $v1, 0x1($a0)
    ctx->pc = 0x384024u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x384028: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x384028u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x38402c: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x38402cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x384030: 0x2463c658  addiu       $v1, $v1, -0x39A8
    ctx->pc = 0x384030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952536));
    // 0x384034: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x384034u;
    { uint32_t bits = FAST_READ32(0x65C658u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x384038: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x384038u;
    { uint32_t bits = FAST_READ32(0x65C65Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x38403c: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x38403cu;
    { uint32_t bits = FAST_READ32(0x65C660u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x384040: 0xe4820010  swc1        $f2, 0x10($a0)
    ctx->pc = 0x384040u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x384044: 0xe4810014  swc1        $f1, 0x14($a0)
    ctx->pc = 0x384044u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x384048: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x384048u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x38404c: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x38404cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x384050: 0xa080001d  sb          $zero, 0x1D($a0)
    ctx->pc = 0x384050u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 29), (uint8_t)GPR_U32(ctx, 0));
    // 0x384054: 0xa080001e  sb          $zero, 0x1E($a0)
    ctx->pc = 0x384054u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 30), (uint8_t)GPR_U32(ctx, 0));
    // 0x384058: 0x3e00008  jr          $ra
    ctx->pc = 0x384058u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38405Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384058u;
        // 0x38405c: 0xa4800020  sh          $zero, 0x20($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 32), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x384058u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x384060u;
}
