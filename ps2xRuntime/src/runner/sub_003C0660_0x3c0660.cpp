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

// Function: sub_003C0660
// Address: 0x3c0660 - 0x3c0688
void sub_003C0660_0x3c0660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C0660_0x3c0660");
#endif

    ctx->pc = 0x3c0660u;

    // 0x3c0660: 0xc7838ca4  lwc1        $f3, -0x735C($gp)
    ctx->pc = 0x3c0660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937764)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3c0664: 0xc7828ca0  lwc1        $f2, -0x7360($gp)
    ctx->pc = 0x3c0664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3c0668: 0xc7818c9c  lwc1        $f1, -0x7364($gp)
    ctx->pc = 0x3c0668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937756)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3c066c: 0xc7808ca8  lwc1        $f0, -0x7358($gp)
    ctx->pc = 0x3c066cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c0670: 0x460360c0  add.s       $f3, $f12, $f3
    ctx->pc = 0x3c0670u;
    ctx->f[3] = FPU_ADD_S(ctx->f[12], ctx->f[3]);
    // 0x3c0674: 0x46031083  div.s       $f2, $f2, $f3
    ctx->pc = 0x3c0674u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[3]); }
    // 0x3c0678: 0x0  nop
    ctx->pc = 0x3c0678u;
    // NOP
    // 0x3c067c: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x3c067cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x3c0680: 0x3e00008  jr          $ra
    ctx->pc = 0x3C0680u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C0684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0680u;
        // 0x3c0684: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C0680u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C0688u;
}
