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

// Function: sub_0017B2C0
// Address: 0x17b2c0 - 0x17b2f4
void sub_0017B2C0_0x17b2c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017B2C0_0x17b2c0");
#endif

    ctx->pc = 0x17b2c0u;

    // 0x17b2c0: 0x4a00004  bltz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x17B2C0u;
    {
        const bool branch_taken_0x17b2c0 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x17B2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B2C0u;
        // 0x17b2c4: 0x53042  srl         $a2, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b2c0) {
            ctx->pc = 0x17B2D4u;
            goto label_17b2d4;
        }
    }
    ctx->pc = 0x17B2C8u;
    // 0x17b2c8: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x17b2c8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17b2cc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x17B2CCu;
    {
        const bool branch_taken_0x17b2cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B2CCu;
        // 0x17b2d0: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b2cc) {
            ctx->pc = 0x17B2ECu;
            goto label_17b2ec;
        }
    }
    ctx->pc = 0x17B2D4u;
label_17b2d4:
    // 0x17b2d4: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x17b2d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x17b2d8: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x17b2d8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x17b2dc: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x17b2dcu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17b2e0: 0x0  nop
    ctx->pc = 0x17b2e0u;
    // NOP
    // 0x17b2e4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x17b2e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x17b2e8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x17b2e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_17b2ec:
    // 0x17b2ec: 0x3e00008  jr          $ra
    ctx->pc = 0x17B2ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17B2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B2ECu;
        // 0x17b2f0: 0xe4802c90  swc1        $f0, 0x2C90($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 11408), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17B2ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17B2F4u;
}
