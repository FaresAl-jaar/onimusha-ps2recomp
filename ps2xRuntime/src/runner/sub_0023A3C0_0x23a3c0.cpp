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

// Function: sub_0023A3C0
// Address: 0x23a3c0 - 0x23a410
void sub_0023A3C0_0x23a3c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023A3C0_0x23a3c0");
#endif

    switch (ctx->pc) {
        case 0x23a3d4u: goto label_23a3d4;
        default: break;
    }

    ctx->pc = 0x23a3c0u;

    // 0x23a3c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x23a3c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x23a3c4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x23a3c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a3c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x23a3c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x23a3cc: 0xc08e824  jal         func_23A090
    ctx->pc = 0x23A3CCu;
    SET_GPR_U32(ctx, 31, 0x23A3D4u);
    ctx->pc = 0x23A3D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A3CCu;
    // 0x23a3d0: 0x27a60004  addiu       $a2, $sp, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A090u, 0x23A3CCu, 0x23A3D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A3D4u;
label_23a3d4:
    // 0x23a3d4: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x23a3d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23a3d8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x23a3d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x23a3dc: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x23a3dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x23a3e0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x23a3e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23a3e4: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x23a3e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x23a3e8: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x23a3e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x23a3ec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x23a3ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23a3f0: 0x0  nop
    ctx->pc = 0x23a3f0u;
    // NOP
    // 0x23a3f4: 0x0  nop
    ctx->pc = 0x23a3f4u;
    // NOP
    // 0x23a3f8: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x23a3f8u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[2]); }
    // 0x23a3fc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x23a3fcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x23a400: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x23a400u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x23a404: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x23a404u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x23a408: 0x3e00008  jr          $ra
    ctx->pc = 0x23A408u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23A40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A408u;
        // 0x23a40c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23A408u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23A410u;
}
