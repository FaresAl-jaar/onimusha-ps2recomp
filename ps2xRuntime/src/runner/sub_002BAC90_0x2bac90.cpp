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

// Function: sub_002BAC90
// Address: 0x2bac90 - 0x2bacb4
void sub_002BAC90_0x2bac90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BAC90_0x2bac90");
#endif

    ctx->pc = 0x2bac90u;

    // 0x2bac90: 0x90840002  lbu         $a0, 0x2($a0)
    ctx->pc = 0x2bac90u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x2bac94: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x2bac94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x2bac98: 0x2442f38c  addiu       $v0, $v0, -0xC74
    ctx->pc = 0x2bac98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964108));
    // 0x2bac9c: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x2bac9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x2baca0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2baca0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2baca4: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2baca4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2baca8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2baca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2bacac: 0x3e00008  jr          $ra
    ctx->pc = 0x2BACACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BACB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BACACu;
        // 0x2bacb0: 0xc4400000  lwc1        $f0, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BACACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BACB4u;
}
