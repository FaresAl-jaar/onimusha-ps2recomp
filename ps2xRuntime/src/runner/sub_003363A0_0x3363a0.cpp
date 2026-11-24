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

// Function: sub_003363A0
// Address: 0x3363a0 - 0x3363f0
void sub_003363A0_0x3363a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003363A0_0x3363a0");
#endif

    switch (ctx->pc) {
        case 0x3363d4u: goto label_3363d4;
        case 0x3363e0u: goto label_3363e0;
        default: break;
    }

    ctx->pc = 0x3363a0u;

    // 0x3363a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3363a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3363a4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3363a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3363a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3363a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3363ac: 0x8c820148  lw          $v0, 0x148($a0)
    ctx->pc = 0x3363acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
    // 0x3363b0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3363b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3363b4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x3363b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3363b8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x3363b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x3363bc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3363bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3363c0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3363C0u;
    {
        const bool branch_taken_0x3363c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3363C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3363C0u;
        // 0x3363c4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3363c0) {
            ctx->pc = 0x3363D8u;
            goto label_3363d8;
        }
    }
    ctx->pc = 0x3363C8u;
    // 0x3363c8: 0x260401c0  addiu       $a0, $s0, 0x1C0
    ctx->pc = 0x3363c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 448));
    // 0x3363cc: 0xc09ec64  jal         func_27B190
    ctx->pc = 0x3363CCu;
    SET_GPR_U32(ctx, 31, 0x3363D4u);
    ctx->pc = 0x3363D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3363CCu;
    // 0x3363d0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27B190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27B190u, 0x3363CCu, 0x3363D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3363D4u;
label_3363d4:
    // 0x3363d4: 0x0  nop
    ctx->pc = 0x3363d4u;
    // NOP
label_3363d8:
    // 0x3363d8: 0xc0a6d88  jal         func_29B620
    ctx->pc = 0x3363D8u;
    SET_GPR_U32(ctx, 31, 0x3363E0u);
    ctx->pc = 0x3363DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3363D8u;
    // 0x3363dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29B620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29B620u, 0x3363D8u, 0x3363E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3363E0u;
label_3363e0:
    // 0x3363e0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3363e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3363e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3363e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3363e8: 0x3e00008  jr          $ra
    ctx->pc = 0x3363E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3363ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3363E8u;
        // 0x3363ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3363E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3363F0u;
}
