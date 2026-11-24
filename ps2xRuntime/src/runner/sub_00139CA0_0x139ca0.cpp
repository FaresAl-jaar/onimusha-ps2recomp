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

// Function: sub_00139CA0
// Address: 0x139ca0 - 0x139cbc
void sub_00139CA0_0x139ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00139CA0_0x139ca0");
#endif

    ctx->pc = 0x139ca0u;

    // 0x139ca0: 0x78a50000  lq          $a1, 0x0($a1)
    ctx->pc = 0x139ca0u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x139ca4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x139ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x139ca8: 0x24860f70  addiu       $a2, $a0, 0xF70
    ctx->pc = 0x139ca8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 3952));
    // 0x139cac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x139cacu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x139cb0: 0x7cc50000  sq          $a1, 0x0($a2)
    ctx->pc = 0x139cb0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 5));
    // 0x139cb4: 0x3e00008  jr          $ra
    ctx->pc = 0x139CB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x139CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139CB4u;
        // 0x139cb8: 0xe4800f7c  swc1        $f0, 0xF7C($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 3964), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x139CB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x139CBCu;
}
