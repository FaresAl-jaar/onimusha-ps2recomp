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

// Function: sub_003E8FF0
// Address: 0x3e8ff0 - 0x3e9034
void sub_003E8FF0_0x3e8ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E8FF0_0x3e8ff0");
#endif

    switch (ctx->pc) {
        case 0x3e9020u: goto label_3e9020;
        default: break;
    }

    ctx->pc = 0x3e8ff0u;

    // 0x3e8ff0: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x3e8ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x3e8ff4: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3e8ff4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3e8ff8: 0x34428885  ori         $v0, $v0, 0x8885
    ctx->pc = 0x3e8ff8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34949);
    // 0x3e8ffc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3e8ffcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3e9000: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3e9000u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3e9004: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3e9004u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3e9008: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3e9008u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e900c: 0x460c0002  mul.s       $f0, $f0, $f12
    ctx->pc = 0x3e900cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x3e9010: 0xe4802b40  swc1        $f0, 0x2B40($a0)
    ctx->pc = 0x3e9010u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 11072), bits); }
    // 0x3e9014: 0xc60c2b40  lwc1        $f12, 0x2B40($s0)
    ctx->pc = 0x3e9014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 11072)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3e9018: 0xc0764e4  jal         func_1D9390
    ctx->pc = 0x3E9018u;
    SET_GPR_U32(ctx, 31, 0x3E9020u);
    ctx->pc = 0x3E901Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E9018u;
    // 0x3e901c: 0x26042b44  addiu       $a0, $s0, 0x2B44 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 11076));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9390u, 0x3E9018u, 0x3E9020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E9020u;
label_3e9020:
    // 0x3e9020: 0xe6002b48  swc1        $f0, 0x2B48($s0)
    ctx->pc = 0x3e9020u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 11080), bits); }
    // 0x3e9024: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3e9024u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e9028: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3e9028u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e902c: 0x3e00008  jr          $ra
    ctx->pc = 0x3E902Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E9030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E902Cu;
        // 0x3e9030: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E902Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E9034u;
}
