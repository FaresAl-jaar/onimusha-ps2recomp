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

// Function: sub_001D9D90
// Address: 0x1d9d90 - 0x1d9e14
void sub_001D9D90_0x1d9d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D9D90_0x1d9d90");
#endif

    switch (ctx->pc) {
        case 0x1d9da8u: goto label_1d9da8;
        default: break;
    }

    ctx->pc = 0x1d9d90u;

    // 0x1d9d90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d9d90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d9d94: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d9d94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d9d98: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d9d98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d9d9c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d9d9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9da0: 0xc076348  jal         func_1D8D20
    ctx->pc = 0x1D9DA0u;
    SET_GPR_U32(ctx, 31, 0x1D9DA8u);
    ctx->pc = 0x1D9DA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9DA0u;
    // 0x1d9da4: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8D20u, 0x1D9DA0u, 0x1D9DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9DA8u;
label_1d9da8:
    // 0x1d9da8: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x1d9da8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d9dac: 0x27a40024  addiu       $a0, $sp, 0x24
    ctx->pc = 0x1d9dacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    // 0x1d9db0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1d9db0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1d9db4: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x1d9db4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x1d9db8: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x1d9db8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d9dbc: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x1d9dbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x1d9dc0: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1d9dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x1d9dc4: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1d9dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x1d9dc8: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x1d9dc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d9dcc: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1d9dccu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1d9dd0: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x1d9dd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x1d9dd4: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x1d9dd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d9dd8: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x1d9dd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x1d9ddc: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x1d9ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x1d9de0: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x1d9de0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x1d9de4: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x1d9de4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x1d9de8: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1d9de8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1d9dec: 0xae030028  sw          $v1, 0x28($s0)
    ctx->pc = 0x1d9decu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 3));
    // 0x1d9df0: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x1d9df0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x1d9df4: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x1d9df4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x1d9df8: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x1d9df8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    // 0x1d9dfc: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x1d9dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
    // 0x1d9e00: 0xae03003c  sw          $v1, 0x3C($s0)
    ctx->pc = 0x1d9e00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 3));
    // 0x1d9e04: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d9e04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d9e08: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d9e08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d9e0c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D9E0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D9E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9E0Cu;
        // 0x1d9e10: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D9E0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D9E14u;
}
