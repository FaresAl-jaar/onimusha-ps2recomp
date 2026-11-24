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

// Function: sub_00326AA0
// Address: 0x326aa0 - 0x326af0
void sub_00326AA0_0x326aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00326AA0_0x326aa0");
#endif

    switch (ctx->pc) {
        case 0x326ab4u: goto label_326ab4;
        case 0x326abcu: goto label_326abc;
        case 0x326ae0u: goto label_326ae0;
        default: break;
    }

    ctx->pc = 0x326aa0u;

    // 0x326aa0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x326aa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x326aa4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x326aa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x326aa8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x326aa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x326aac: 0xc0a6d70  jal         func_29B5C0
    ctx->pc = 0x326AACu;
    SET_GPR_U32(ctx, 31, 0x326AB4u);
    ctx->pc = 0x326AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326AACu;
    // 0x326ab0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29B5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29B5C0u, 0x326AACu, 0x326AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326AB4u;
label_326ab4:
    // 0x326ab4: 0xc0c9b74  jal         func_326DD0
    ctx->pc = 0x326AB4u;
    SET_GPR_U32(ctx, 31, 0x326ABCu);
    ctx->pc = 0x326AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326AB4u;
    // 0x326ab8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326DD0u, 0x326AB4u, 0x326ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326ABCu;
label_326abc:
    // 0x326abc: 0x8e030148  lw          $v1, 0x148($s0)
    ctx->pc = 0x326abcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x326ac0: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x326ac0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x326ac4: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x326ac4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x326ac8: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x326ac8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x326acc: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x326accu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x326ad0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x326AD0u;
    {
        const bool branch_taken_0x326ad0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x326AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326AD0u;
        // 0x326ad4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326ad0) {
            ctx->pc = 0x326AE0u;
            goto label_326ae0;
        }
    }
    ctx->pc = 0x326AD8u;
    // 0x326ad8: 0xc0a6e60  jal         func_29B980
    ctx->pc = 0x326AD8u;
    SET_GPR_U32(ctx, 31, 0x326AE0u);
    ctx->pc = 0x29B980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29B980u, 0x326AD8u, 0x326AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326AE0u;
label_326ae0:
    // 0x326ae0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x326ae0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x326ae4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x326ae4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x326ae8: 0x3e00008  jr          $ra
    ctx->pc = 0x326AE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x326AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326AE8u;
        // 0x326aec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x326AE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x326AF0u;
}
