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

// Function: sub_00139C80
// Address: 0x139c80 - 0x139c9c
void sub_00139C80_0x139c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00139C80_0x139c80");
#endif

    ctx->pc = 0x139c80u;

    // 0x139c80: 0x78a50000  lq          $a1, 0x0($a1)
    ctx->pc = 0x139c80u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x139c84: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x139c84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x139c88: 0x24860f60  addiu       $a2, $a0, 0xF60
    ctx->pc = 0x139c88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 3936));
    // 0x139c8c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x139c8cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x139c90: 0x7cc50000  sq          $a1, 0x0($a2)
    ctx->pc = 0x139c90u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 5));
    // 0x139c94: 0x3e00008  jr          $ra
    ctx->pc = 0x139C94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x139C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139C94u;
        // 0x139c98: 0xe4800f6c  swc1        $f0, 0xF6C($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 3948), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x139C94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x139C9Cu;
}
