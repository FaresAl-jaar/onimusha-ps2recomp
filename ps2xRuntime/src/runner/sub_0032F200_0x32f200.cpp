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

// Function: sub_0032F200
// Address: 0x32f200 - 0x32f250
void sub_0032F200_0x32f200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032F200_0x32f200");
#endif

    ctx->pc = 0x32f200u;

    // 0x32f200: 0x8c840060  lw          $a0, 0x60($a0)
    ctx->pc = 0x32f200u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
    // 0x32f204: 0x10800010  beqz        $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x32F204u;
    {
        const bool branch_taken_0x32f204 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x32F208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F204u;
        // 0x32f208: 0x3c033f80  lui         $v1, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32f204) {
            ctx->pc = 0x32F248u;
            goto label_32f248;
        }
    }
    ctx->pc = 0x32F20Cu;
    // 0x32f20c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x32f20cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32f210: 0x0  nop
    ctx->pc = 0x32f210u;
    // NOP
    // 0x32f214: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x32f214u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x32f218: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x32F218u;
    {
        const bool branch_taken_0x32f218 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x32f218) {
            ctx->pc = 0x32F228u;
            goto label_32f228;
        }
    }
    ctx->pc = 0x32F220u;
    // 0x32f220: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x32f220u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x32f224: 0x0  nop
    ctx->pc = 0x32f224u;
    // NOP
label_32f228:
    // 0x32f228: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x32f228u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32f22c: 0x0  nop
    ctx->pc = 0x32f22cu;
    // NOP
    // 0x32f230: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x32f230u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x32f234: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x32F234u;
    {
        const bool branch_taken_0x32f234 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x32f234) {
            ctx->pc = 0x32F240u;
            goto label_32f240;
        }
    }
    ctx->pc = 0x32F23Cu;
    // 0x32f23c: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x32f23cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_32f240:
    // 0x32f240: 0xe48c0000  swc1        $f12, 0x0($a0)
    ctx->pc = 0x32f240u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x32f244: 0x0  nop
    ctx->pc = 0x32f244u;
    // NOP
label_32f248:
    // 0x32f248: 0x3e00008  jr          $ra
    ctx->pc = 0x32F248u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32F248u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32F250u;
}
