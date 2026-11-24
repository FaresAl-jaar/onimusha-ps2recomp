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

// Function: sub_00345C50
// Address: 0x345c50 - 0x345cc0
void sub_00345C50_0x345c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00345C50_0x345c50");
#endif

    ctx->pc = 0x345c50u;

    // 0x345c50: 0x8ca60080  lw          $a2, 0x80($a1)
    ctx->pc = 0x345c50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 128)));
    // 0x345c54: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x345c54u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x345c58: 0x27a30000  addiu       $v1, $sp, 0x0
    ctx->pc = 0x345c58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 0));
    // 0x345c5c: 0x84c500c8  lh          $a1, 0xC8($a2)
    ctx->pc = 0x345c5cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 200)));
    // 0x345c60: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x345c60u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x345c64: 0x0  nop
    ctx->pc = 0x345c64u;
    // NOP
    // 0x345c68: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x345c68u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x345c6c: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x345c6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x345c70: 0x84c500ca  lh          $a1, 0xCA($a2)
    ctx->pc = 0x345c70u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 202)));
    // 0x345c74: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x345c74u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x345c78: 0x0  nop
    ctx->pc = 0x345c78u;
    // NOP
    // 0x345c7c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x345c7cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x345c80: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x345c80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x345c84: 0x84c500cc  lh          $a1, 0xCC($a2)
    ctx->pc = 0x345c84u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 204)));
    // 0x345c88: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x345c88u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x345c8c: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x345c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x345c90: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x345c90u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x345c94: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x345c94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x345c98: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x345c98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x345c9c: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x345c9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x345ca0: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x345ca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x345ca4: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x345ca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x345ca8: 0xe4830000  swc1        $f3, 0x0($a0)
    ctx->pc = 0x345ca8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x345cac: 0xe4820004  swc1        $f2, 0x4($a0)
    ctx->pc = 0x345cacu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x345cb0: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x345cb0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x345cb4: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x345cb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x345cb8: 0x3e00008  jr          $ra
    ctx->pc = 0x345CB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x345CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345CB8u;
        // 0x345cbc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x345CB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x345CC0u;
}
