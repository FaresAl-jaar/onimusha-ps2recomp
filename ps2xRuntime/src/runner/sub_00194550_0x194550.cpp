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

// Function: sub_00194550
// Address: 0x194550 - 0x1945d0
void sub_00194550_0x194550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00194550_0x194550");
#endif

    ctx->pc = 0x194550u;

    // 0x194550: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x194550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x194554: 0x46006001  sub.s       $f0, $f12, $f0
    ctx->pc = 0x194554u;
    ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x194558: 0x460d0083  div.s       $f2, $f0, $f13
    ctx->pc = 0x194558u;
    { if (ctx->f[13] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[0], ctx->f[13]); }
    // 0x19455c: 0x0  nop
    ctx->pc = 0x19455cu;
    // NOP
    // 0x194560: 0x0  nop
    ctx->pc = 0x194560u;
    // NOP
    // 0x194564: 0x460e1036  c.le.s      $f2, $f14
    ctx->pc = 0x194564u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[14])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x194568: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x194568u;
    {
        const bool branch_taken_0x194568 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x194568) {
            ctx->pc = 0x194578u;
            goto label_194578;
        }
    }
    ctx->pc = 0x194570u;
    // 0x194570: 0x46007086  mov.s       $f2, $f14
    ctx->pc = 0x194570u;
    ctx->f[2] = FPU_MOV_S(ctx->f[14]);
    // 0x194574: 0x0  nop
    ctx->pc = 0x194574u;
    // NOP
label_194578:
    // 0x194578: 0x46007007  neg.s       $f0, $f14
    ctx->pc = 0x194578u;
    ctx->f[0] = FPU_NEG_S(ctx->f[14]);
    // 0x19457c: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x19457cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x194580: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x194580u;
    {
        const bool branch_taken_0x194580 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x194580) {
            ctx->pc = 0x194590u;
            goto label_194590;
        }
    }
    ctx->pc = 0x194588u;
    // 0x194588: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x194588u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
    // 0x19458c: 0x0  nop
    ctx->pc = 0x19458cu;
    // NOP
label_194590:
    // 0x194590: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x194590u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
    // 0x194594: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x194594u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x194598: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x194598u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19459c: 0x46001045  abs.s       $f1, $f2
    ctx->pc = 0x19459cu;
    ctx->f[1] = FPU_ABS_S(ctx->f[2]);
    // 0x1945a0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1945a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1945a4: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1945A4u;
    {
        const bool branch_taken_0x1945a4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1945a4) {
            ctx->pc = 0x1945B8u;
            goto label_1945b8;
        }
    }
    ctx->pc = 0x1945ACu;
    // 0x1945ac: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1945ACu;
    {
        const bool branch_taken_0x1945ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1945B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1945ACu;
        // 0x1945b0: 0xe48c0000  swc1        $f12, 0x0($a0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1945ac) {
            ctx->pc = 0x1945C8u;
            goto label_1945c8;
        }
    }
    ctx->pc = 0x1945B4u;
    // 0x1945b4: 0x0  nop
    ctx->pc = 0x1945b4u;
    // NOP
label_1945b8:
    // 0x1945b8: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x1945b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1945bc: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1945bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1945c0: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1945c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x1945c4: 0x0  nop
    ctx->pc = 0x1945c4u;
    // NOP
label_1945c8:
    // 0x1945c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1945C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1945C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1945D0u;
}
