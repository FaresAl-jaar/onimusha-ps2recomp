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

// Function: sub_00259E10
// Address: 0x259e10 - 0x259e5c
void sub_00259E10_0x259e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00259E10_0x259e10");
#endif

    switch (ctx->pc) {
        case 0x259e2cu: goto label_259e2c;
        case 0x259e3cu: goto label_259e3c;
        default: break;
    }

    ctx->pc = 0x259e10u;

    // 0x259e10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x259e10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x259e14: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x259e14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x259e18: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x259e18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x259e1c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x259e1cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x259e20: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x259e20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259e24: 0xc047b2c  jal         func_11ECB0
    ctx->pc = 0x259E24u;
    SET_GPR_U32(ctx, 31, 0x259E2Cu);
    ctx->pc = 0x259E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259E24u;
    // 0x259e28: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11ECB0u, 0x259E24u, 0x259E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259E2Cu;
label_259e2c:
    // 0x259e2c: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x259e2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x259e30: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x259e30u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x259e34: 0xc047a98  jal         func_11EA60
    ctx->pc = 0x259E34u;
    SET_GPR_U32(ctx, 31, 0x259E3Cu);
    ctx->pc = 0x259E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259E34u;
    // 0x259e38: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EA60u, 0x259E34u, 0x259E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259E3Cu;
label_259e3c:
    // 0x259e3c: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x259e3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x259e40: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x259e40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x259e44: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x259e44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x259e48: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x259e48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x259e4c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x259e4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x259e50: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x259e50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x259e54: 0x3e00008  jr          $ra
    ctx->pc = 0x259E54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x259E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259E54u;
        // 0x259e58: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x259E54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x259E5Cu;
}
