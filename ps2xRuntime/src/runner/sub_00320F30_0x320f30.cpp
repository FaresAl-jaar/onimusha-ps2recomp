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

// Function: sub_00320F30
// Address: 0x320f30 - 0x320f8c
void sub_00320F30_0x320f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00320F30_0x320f30");
#endif

    ctx->pc = 0x320f30u;

    // 0x320f30: 0xc4a30000  lwc1        $f3, 0x0($a1)
    ctx->pc = 0x320f30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x320f34: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x320f34u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x320f38: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x320f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x320f3c: 0x27a60000  addiu       $a2, $sp, 0x0
    ctx->pc = 0x320f3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 0));
    // 0x320f40: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x320f40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x320f44: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x320f44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x320f48: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x320f48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x320f4c: 0xe4c30000  swc1        $f3, 0x0($a2)
    ctx->pc = 0x320f4cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x320f50: 0xe4c20004  swc1        $f2, 0x4($a2)
    ctx->pc = 0x320f50u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x320f54: 0xe4c10008  swc1        $f1, 0x8($a2)
    ctx->pc = 0x320f54u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x320f58: 0xe4c0000c  swc1        $f0, 0xC($a2)
    ctx->pc = 0x320f58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
    // 0x320f5c: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x320f5cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x320f60: 0xc4c30000  lwc1        $f3, 0x0($a2)
    ctx->pc = 0x320f60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x320f64: 0xc4c20004  lwc1        $f2, 0x4($a2)
    ctx->pc = 0x320f64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x320f68: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x320f68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x320f6c: 0xc4c0000c  lwc1        $f0, 0xC($a2)
    ctx->pc = 0x320f6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x320f70: 0xe4830010  swc1        $f3, 0x10($a0)
    ctx->pc = 0x320f70u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x320f74: 0xe4820014  swc1        $f2, 0x14($a0)
    ctx->pc = 0x320f74u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x320f78: 0xe4810018  swc1        $f1, 0x18($a0)
    ctx->pc = 0x320f78u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x320f7c: 0xe480001c  swc1        $f0, 0x1C($a0)
    ctx->pc = 0x320f7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
    // 0x320f80: 0xe48c0020  swc1        $f12, 0x20($a0)
    ctx->pc = 0x320f80u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x320f84: 0x3e00008  jr          $ra
    ctx->pc = 0x320F84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x320F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320F84u;
        // 0x320f88: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x320F84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x320F8Cu;
}
