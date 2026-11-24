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

// Function: sub_001433C0
// Address: 0x1433c0 - 0x143444
void sub_001433C0_0x1433c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001433C0_0x1433c0");
#endif

    switch (ctx->pc) {
        case 0x1433fcu: goto label_1433fc;
        case 0x143428u: goto label_143428;
        default: break;
    }

    ctx->pc = 0x1433c0u;

    // 0x1433c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1433c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1433c4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1433c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1433c8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1433c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1433cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1433ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1433d0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1433d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1433d4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1433d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1433d8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1433d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1433dc: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1433dcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1433e0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1433e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1433e4: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x1433e4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x1433e8: 0x4600a503  div.s       $f20, $f20, $f0
    ctx->pc = 0x1433e8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[20], ctx->f[0]); }
    // 0x1433ec: 0x0  nop
    ctx->pc = 0x1433ecu;
    // NOP
    // 0x1433f0: 0x0  nop
    ctx->pc = 0x1433f0u;
    // NOP
    // 0x1433f4: 0xc047b2c  jal         func_11ECB0
    ctx->pc = 0x1433F4u;
    SET_GPR_U32(ctx, 31, 0x1433FCu);
    ctx->pc = 0x1433F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1433F4u;
    // 0x1433f8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11ECB0u, 0x1433F4u, 0x1433FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1433FCu;
label_1433fc:
    // 0x1433fc: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x1433fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x143400: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x143400u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x143404: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x143404u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x143408: 0xe6210000  swc1        $f1, 0x0($s1)
    ctx->pc = 0x143408u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x14340c: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x14340cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x143410: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x143410u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x143414: 0xe6210004  swc1        $f1, 0x4($s1)
    ctx->pc = 0x143414u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x143418: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x143418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14341c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x14341cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x143420: 0xc047a98  jal         func_11EA60
    ctx->pc = 0x143420u;
    SET_GPR_U32(ctx, 31, 0x143428u);
    ctx->pc = 0x143424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143420u;
    // 0x143424: 0xe6200008  swc1        $f0, 0x8($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EA60u, 0x143420u, 0x143428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143428u;
label_143428:
    // 0x143428: 0xe620000c  swc1        $f0, 0xC($s1)
    ctx->pc = 0x143428u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x14342c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x14342cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x143430: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x143430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x143434: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x143434u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x143438: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x143438u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14343c: 0x3e00008  jr          $ra
    ctx->pc = 0x14343Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x143440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14343Cu;
        // 0x143440: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14343Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x143444u;
}
