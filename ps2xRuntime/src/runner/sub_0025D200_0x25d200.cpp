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

// Function: sub_0025D200
// Address: 0x25d200 - 0x25d258
void sub_0025D200_0x25d200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025D200_0x25d200");
#endif

    ctx->pc = 0x25d200u;

    // 0x25d200: 0x460c6841  sub.s       $f1, $f13, $f12
    ctx->pc = 0x25d200u;
    ctx->f[1] = FPU_SUB_S(ctx->f[13], ctx->f[12]);
    // 0x25d204: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x25d204u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25d208: 0x0  nop
    ctx->pc = 0x25d208u;
    // NOP
    // 0x25d20c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x25d20cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25d210: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x25D210u;
    {
        const bool branch_taken_0x25d210 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x25D214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D210u;
        // 0x25d214: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d210) {
            ctx->pc = 0x25D21Cu;
            goto label_25d21c;
        }
    }
    ctx->pc = 0x25D218u;
    // 0x25d218: 0x46000807  neg.s       $f0, $f1
    ctx->pc = 0x25d218u;
    ctx->f[0] = FPU_NEG_S(ctx->f[1]);
label_25d21c:
    // 0x25d21c: 0x460e0034  c.lt.s      $f0, $f14
    ctx->pc = 0x25d21cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[14])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25d220: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x25D220u;
    {
        const bool branch_taken_0x25d220 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25d220) {
            ctx->pc = 0x25D230u;
            goto label_25d230;
        }
    }
    ctx->pc = 0x25D228u;
    // 0x25d228: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x25D228u;
    {
        const bool branch_taken_0x25d228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D228u;
        // 0x25d22c: 0x46006806  mov.s       $f0, $f13 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d228) {
            ctx->pc = 0x25D250u;
            goto label_25d250;
        }
    }
    ctx->pc = 0x25D230u;
label_25d230:
    // 0x25d230: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x25d230u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25d234: 0x0  nop
    ctx->pc = 0x25d234u;
    // NOP
    // 0x25d238: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x25d238u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25d23c: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x25D23Cu;
    {
        const bool branch_taken_0x25d23c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x25D240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D23Cu;
        // 0x25d240: 0x460e6001  sub.s       $f0, $f12, $f14 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[14]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d23c) {
            ctx->pc = 0x25D24Cu;
            goto label_25d24c;
        }
    }
    ctx->pc = 0x25D244u;
    // 0x25d244: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x25D244u;
    {
        const bool branch_taken_0x25d244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D244u;
        // 0x25d248: 0x460e6000  add.s       $f0, $f12, $f14 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[14]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d244) {
            ctx->pc = 0x25D24Cu;
            goto label_25d24c;
        }
    }
    ctx->pc = 0x25D24Cu;
label_25d24c:
    // 0x25d24c: 0x0  nop
    ctx->pc = 0x25d24cu;
    // NOP
label_25d250:
    // 0x25d250: 0x3e00008  jr          $ra
    ctx->pc = 0x25D250u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25D250u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25D258u;
}
