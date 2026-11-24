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

// Function: sub_001D9D00
// Address: 0x1d9d00 - 0x1d9d84
void sub_001D9D00_0x1d9d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D9D00_0x1d9d00");
#endif

    switch (ctx->pc) {
        case 0x1d9d18u: goto label_1d9d18;
        default: break;
    }

    ctx->pc = 0x1d9d00u;

    // 0x1d9d00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d9d00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d9d04: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d9d04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d9d08: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d9d08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d9d0c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d9d0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9d10: 0xc076348  jal         func_1D8D20
    ctx->pc = 0x1D9D10u;
    SET_GPR_U32(ctx, 31, 0x1D9D18u);
    ctx->pc = 0x1D9D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9D10u;
    // 0x1d9d14: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8D20u, 0x1D9D10u, 0x1D9D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9D18u;
label_1d9d18:
    // 0x1d9d18: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x1d9d18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d9d1c: 0x27a40024  addiu       $a0, $sp, 0x24
    ctx->pc = 0x1d9d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    // 0x1d9d20: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1d9d20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1d9d24: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x1d9d24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x1d9d28: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1d9d28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1d9d2c: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x1d9d2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d9d30: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1d9d30u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1d9d34: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x1d9d34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x1d9d38: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1d9d38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x1d9d3c: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x1d9d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x1d9d40: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x1d9d40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    // 0x1d9d44: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x1d9d44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x1d9d48: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x1d9d48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x1d9d4c: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x1d9d4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d9d50: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x1d9d50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x1d9d54: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1d9d54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1d9d58: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x1d9d58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d9d5c: 0xe6000028  swc1        $f0, 0x28($s0)
    ctx->pc = 0x1d9d5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x1d9d60: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x1d9d60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x1d9d64: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x1d9d64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x1d9d68: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x1d9d68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    // 0x1d9d6c: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x1d9d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
    // 0x1d9d70: 0xae03003c  sw          $v1, 0x3C($s0)
    ctx->pc = 0x1d9d70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 3));
    // 0x1d9d74: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d9d74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d9d78: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d9d78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d9d7c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D9D7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D9D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9D7Cu;
        // 0x1d9d80: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D9D7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D9D84u;
}
