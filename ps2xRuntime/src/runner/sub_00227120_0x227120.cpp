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

// Function: sub_00227120
// Address: 0x227120 - 0x227150
void sub_00227120_0x227120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00227120_0x227120");
#endif

    ctx->pc = 0x227120u;

    // 0x227120: 0x460c6836  c.le.s      $f13, $f12
    ctx->pc = 0x227120u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[13], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x227124: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x227124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x227128: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x227128u;
    {
        const bool branch_taken_0x227128 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x22712Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227128u;
        // 0x22712c: 0x460c6841  sub.s       $f1, $f13, $f12 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[13], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x227128) {
            ctx->pc = 0x227134u;
            goto label_227134;
        }
    }
    ctx->pc = 0x227130u;
    // 0x227130: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x227130u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_227134:
    // 0x227134: 0x3c01c160  lui         $at, 0xC160
    ctx->pc = 0x227134u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49504 << 16));
    // 0x227138: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x227138u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22713c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x22713cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x227140: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x227140u;
    {
        const bool branch_taken_0x227140 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x227140) {
            ctx->pc = 0x227144u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x227140u;
            // 0x227144: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x227148u;
            goto label_227148;
        }
    }
    ctx->pc = 0x227148u;
label_227148:
    // 0x227148: 0x3e00008  jr          $ra
    ctx->pc = 0x227148u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x227148u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x227150u;
}
