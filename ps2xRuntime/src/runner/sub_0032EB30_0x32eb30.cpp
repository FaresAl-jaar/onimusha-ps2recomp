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

// Function: sub_0032EB30
// Address: 0x32eb30 - 0x32eb74
void sub_0032EB30_0x32eb30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032EB30_0x32eb30");
#endif

    ctx->pc = 0x32eb30u;

    // 0x32eb30: 0x3c07004f  lui         $a3, 0x4F
    ctx->pc = 0x32eb30u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)79 << 16));
    // 0x32eb34: 0x14c0000a  bnez        $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x32EB34u;
    {
        const bool branch_taken_0x32eb34 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x32EB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32EB34u;
        // 0x32eb38: 0x24e79a30  addiu       $a3, $a3, -0x65D0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294941232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32eb34) {
            ctx->pc = 0x32EB60u;
            goto label_32eb60;
        }
    }
    ctx->pc = 0x32EB3Cu;
    // 0x32eb3c: 0x90830004  lbu         $v1, 0x4($a0)
    ctx->pc = 0x32eb3cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x32eb40: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x32eb40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x32eb44: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x32eb44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x32eb48: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x32eb48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x32eb4c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x32eb4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x32eb50: 0x8042002b  lb          $v0, 0x2B($v0)
    ctx->pc = 0x32eb50u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 43)));
    // 0x32eb54: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x32EB54u;
    {
        const bool branch_taken_0x32eb54 = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x32eb54) {
            ctx->pc = 0x32EB68u;
            goto label_32eb68;
        }
    }
    ctx->pc = 0x32EB5Cu;
    // 0x32eb5c: 0x0  nop
    ctx->pc = 0x32eb5cu;
    // NOP
label_32eb60:
    // 0x32eb60: 0x3c07004f  lui         $a3, 0x4F
    ctx->pc = 0x32eb60u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)79 << 16));
    // 0x32eb64: 0x24e79a50  addiu       $a3, $a3, -0x65B0
    ctx->pc = 0x32eb64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294941264));
label_32eb68:
    // 0x32eb68: 0xe51021  addu        $v0, $a3, $a1
    ctx->pc = 0x32eb68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x32eb6c: 0x3e00008  jr          $ra
    ctx->pc = 0x32EB6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32EB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32EB6Cu;
        // 0x32eb70: 0x80420000  lb          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32EB6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32EB74u;
}
