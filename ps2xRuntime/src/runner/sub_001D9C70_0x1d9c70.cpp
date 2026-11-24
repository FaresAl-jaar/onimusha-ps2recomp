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

// Function: sub_001D9C70
// Address: 0x1d9c70 - 0x1d9cf4
void sub_001D9C70_0x1d9c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D9C70_0x1d9c70");
#endif

    switch (ctx->pc) {
        case 0x1d9c88u: goto label_1d9c88;
        default: break;
    }

    ctx->pc = 0x1d9c70u;

    // 0x1d9c70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d9c70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d9c74: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d9c74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d9c78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d9c78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d9c7c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d9c7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9c80: 0xc076348  jal         func_1D8D20
    ctx->pc = 0x1D9C80u;
    SET_GPR_U32(ctx, 31, 0x1D9C88u);
    ctx->pc = 0x1D9C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9C80u;
    // 0x1d9c84: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8D20u, 0x1D9C80u, 0x1D9C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9C88u;
label_1d9c88:
    // 0x1d9c88: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1d9c88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1d9c8c: 0x27a40024  addiu       $a0, $sp, 0x24
    ctx->pc = 0x1d9c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    // 0x1d9c90: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1d9c90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1d9c94: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1d9c94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1d9c98: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1d9c98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x1d9c9c: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1d9c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x1d9ca0: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x1d9ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x1d9ca4: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x1d9ca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d9ca8: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x1d9ca8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x1d9cac: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x1d9cacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d9cb0: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x1d9cb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x1d9cb4: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x1d9cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x1d9cb8: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x1d9cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x1d9cbc: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x1d9cbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d9cc0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1d9cc0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1d9cc4: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x1d9cc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x1d9cc8: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x1d9cc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d9ccc: 0xe6000028  swc1        $f0, 0x28($s0)
    ctx->pc = 0x1d9cccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x1d9cd0: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x1d9cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x1d9cd4: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x1d9cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x1d9cd8: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x1d9cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    // 0x1d9cdc: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x1d9cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
    // 0x1d9ce0: 0xae03003c  sw          $v1, 0x3C($s0)
    ctx->pc = 0x1d9ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 3));
    // 0x1d9ce4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d9ce4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d9ce8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d9ce8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d9cec: 0x3e00008  jr          $ra
    ctx->pc = 0x1D9CECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D9CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9CECu;
        // 0x1d9cf0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D9CECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D9CF4u;
}
