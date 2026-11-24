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

// Function: sub_002DE120
// Address: 0x2de120 - 0x2de14c
void sub_002DE120_0x2de120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DE120_0x2de120");
#endif

    ctx->pc = 0x2de120u;

    // 0x2de120: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2de120u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2de124: 0x0  nop
    ctx->pc = 0x2de124u;
    // NOP
    // 0x2de128: 0x46006834  c.lt.s      $f13, $f0
    ctx->pc = 0x2de128u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[13], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2de12c: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x2DE12Cu;
    {
        const bool branch_taken_0x2de12c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2DE130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE12Cu;
        // 0x2de130: 0xe48c0004  swc1        $f12, 0x4($a0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de12c) {
            ctx->pc = 0x2DE13Cu;
            goto label_2de13c;
        }
    }
    ctx->pc = 0x2DE134u;
    // 0x2de134: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2DE134u;
    {
        const bool branch_taken_0x2de134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE134u;
        // 0x2de138: 0xe48d0008  swc1        $f13, 0x8($a0) (Delay Slot)
        { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de134) {
            ctx->pc = 0x2DE144u;
            goto label_2de144;
        }
    }
    ctx->pc = 0x2DE13Cu;
label_2de13c:
    // 0x2de13c: 0x46006b47  neg.s       $f13, $f13
    ctx->pc = 0x2de13cu;
    ctx->f[13] = FPU_NEG_S(ctx->f[13]);
    // 0x2de140: 0xe48d0008  swc1        $f13, 0x8($a0)
    ctx->pc = 0x2de140u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
label_2de144:
    // 0x2de144: 0x3e00008  jr          $ra
    ctx->pc = 0x2DE144u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DE144u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DE14Cu;
}
