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

// Function: sub_003429C0
// Address: 0x3429c0 - 0x3429ec
void sub_003429C0_0x3429c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003429C0_0x3429c0");
#endif

    ctx->pc = 0x3429c0u;

    // 0x3429c0: 0x8c830400  lw          $v1, 0x400($a0)
    ctx->pc = 0x3429c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1024)));
    // 0x3429c4: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x3429c4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3429c8: 0x0  nop
    ctx->pc = 0x3429c8u;
    // NOP
    // 0x3429cc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3429ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3429d0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3429d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3429d4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x3429d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3429d8: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x3429d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x3429dc: 0x8c830400  lw          $v1, 0x400($a0)
    ctx->pc = 0x3429dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1024)));
    // 0x3429e0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3429e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3429e4: 0x3e00008  jr          $ra
    ctx->pc = 0x3429E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3429E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3429E4u;
        // 0x3429e8: 0xac830400  sw          $v1, 0x400($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1024), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3429E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3429ECu;
}
