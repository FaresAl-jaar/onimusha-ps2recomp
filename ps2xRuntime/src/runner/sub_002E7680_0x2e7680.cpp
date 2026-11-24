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

// Function: sub_002E7680
// Address: 0x2e7680 - 0x2e76bc
void sub_002E7680_0x2e7680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E7680_0x2e7680");
#endif

    switch (ctx->pc) {
        case 0x2e76acu: goto label_2e76ac;
        default: break;
    }

    ctx->pc = 0x2e7680u;

    // 0x2e7680: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e7680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2e7684: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x2e7684u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2e7688: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e7688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e768c: 0x18600008  blez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2E768Cu;
    {
        const bool branch_taken_0x2e768c = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x2E7690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E768Cu;
        // 0x2e7690: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e768c) {
            ctx->pc = 0x2E76B0u;
            goto label_2e76b0;
        }
    }
    ctx->pc = 0x2E7694u;
    // 0x2e7694: 0x28610065  slti        $at, $v1, 0x65
    ctx->pc = 0x2e7694u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)101) ? 1 : 0);
    // 0x2e7698: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E7698u;
    {
        const bool branch_taken_0x2e7698 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E769Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7698u;
        // 0x2e769c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7698) {
            ctx->pc = 0x2E76B0u;
            goto label_2e76b0;
        }
    }
    ctx->pc = 0x2E76A0u;
    // 0x2e76a0: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x2e76a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x2e76a4: 0xc0b9ebc  jal         func_2E7AF0
    ctx->pc = 0x2E76A4u;
    SET_GPR_U32(ctx, 31, 0x2E76ACu);
    ctx->pc = 0x2E76A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E76A4u;
    // 0x2e76a8: 0x2484b7f0  addiu       $a0, $a0, -0x4810 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E7AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E7AF0u, 0x2E76A4u, 0x2E76ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E76ACu;
label_2e76ac:
    // 0x2e76ac: 0x0  nop
    ctx->pc = 0x2e76acu;
    // NOP
label_2e76b0:
    // 0x2e76b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e76b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e76b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2E76B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E76B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E76B4u;
        // 0x2e76b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E76B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E76BCu;
}
