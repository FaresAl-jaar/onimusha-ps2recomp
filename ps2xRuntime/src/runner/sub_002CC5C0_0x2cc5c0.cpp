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

// Function: sub_002CC5C0
// Address: 0x2cc5c0 - 0x2cc60c
void sub_002CC5C0_0x2cc5c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CC5C0_0x2cc5c0");
#endif

    switch (ctx->pc) {
        case 0x2cc5d0u: goto label_2cc5d0;
        default: break;
    }

    ctx->pc = 0x2cc5c0u;

    // 0x2cc5c0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2cc5c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc5c4: 0x27858a58  addiu       $a1, $gp, -0x75A8
    ctx->pc = 0x2cc5c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937176));
    // 0x2cc5c8: 0x27848a54  addiu       $a0, $gp, -0x75AC
    ctx->pc = 0x2cc5c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937172));
    // 0x2cc5cc: 0x0  nop
    ctx->pc = 0x2cc5ccu;
    // NOP
label_2cc5d0:
    // 0x2cc5d0: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x2cc5d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2cc5d4: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2CC5D4u;
    {
        const bool branch_taken_0x2cc5d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cc5d4) {
            ctx->pc = 0x2CC5F0u;
            goto label_2cc5f0;
        }
    }
    ctx->pc = 0x2CC5DCu;
    // 0x2cc5dc: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2cc5dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2cc5e0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2cc5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2cc5e4: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x2cc5e4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2cc5e8: 0xa0a00000  sb          $zero, 0x0($a1)
    ctx->pc = 0x2cc5e8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cc5ec: 0x0  nop
    ctx->pc = 0x2cc5ecu;
    // NOP
label_2cc5f0:
    // 0x2cc5f0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2cc5f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2cc5f4: 0x28c30002  slti        $v1, $a2, 0x2
    ctx->pc = 0x2cc5f4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2cc5f8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2cc5f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2cc5fc: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x2CC5FCu;
    {
        const bool branch_taken_0x2cc5fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CC600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC5FCu;
        // 0x2cc600: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc5fc) {
            ctx->pc = 0x2CC5D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cc5d0;
        }
    }
    ctx->pc = 0x2CC604u;
    // 0x2cc604: 0x3e00008  jr          $ra
    ctx->pc = 0x2CC604u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CC604u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CC60Cu;
}
