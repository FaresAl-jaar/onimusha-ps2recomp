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

// Function: sub_00259E60
// Address: 0x259e60 - 0x259eac
void sub_00259E60_0x259e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00259E60_0x259e60");
#endif

    switch (ctx->pc) {
        case 0x259e7cu: goto label_259e7c;
        case 0x259e88u: goto label_259e88;
        default: break;
    }

    ctx->pc = 0x259e60u;

    // 0x259e60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x259e60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x259e64: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x259e64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x259e68: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x259e68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x259e6c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x259e6cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x259e70: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x259e70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259e74: 0xc047a98  jal         func_11EA60
    ctx->pc = 0x259E74u;
    SET_GPR_U32(ctx, 31, 0x259E7Cu);
    ctx->pc = 0x259E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259E74u;
    // 0x259e78: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EA60u, 0x259E74u, 0x259E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259E7Cu;
label_259e7c:
    // 0x259e7c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x259e7cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x259e80: 0xc047b2c  jal         func_11ECB0
    ctx->pc = 0x259E80u;
    SET_GPR_U32(ctx, 31, 0x259E88u);
    ctx->pc = 0x259E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259E80u;
    // 0x259e84: 0xe6000000  swc1        $f0, 0x0($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x11ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11ECB0u, 0x259E80u, 0x259E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259E88u;
label_259e88:
    // 0x259e88: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x259e88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x259e8c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x259e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x259e90: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x259e90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x259e94: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x259e94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x259e98: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x259e98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x259e9c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x259e9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x259ea0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x259ea0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x259ea4: 0x3e00008  jr          $ra
    ctx->pc = 0x259EA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x259EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259EA4u;
        // 0x259ea8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x259EA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x259EACu;
}
