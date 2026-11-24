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

// Function: sub_0038F830
// Address: 0x38f830 - 0x38f888
void sub_0038F830_0x38f830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038F830_0x38f830");
#endif

    switch (ctx->pc) {
        case 0x38f844u: goto label_38f844;
        case 0x38f85cu: goto label_38f85c;
        case 0x38f870u: goto label_38f870;
        default: break;
    }

    ctx->pc = 0x38f830u;

    // 0x38f830: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x38f830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x38f834: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x38f834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x38f838: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x38f838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x38f83c: 0xc0e3d80  jal         func_38F600
    ctx->pc = 0x38F83Cu;
    SET_GPR_U32(ctx, 31, 0x38F844u);
    ctx->pc = 0x38F840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38F83Cu;
    // 0x38f840: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F600u, 0x38F83Cu, 0x38F844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38F844u;
label_38f844:
    // 0x38f844: 0x8e0229c0  lw          $v0, 0x29C0($s0)
    ctx->pc = 0x38f844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10688)));
    // 0x38f848: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x38f848u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x38f84c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x38F84Cu;
    {
        const bool branch_taken_0x38f84c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38F850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F84Cu;
        // 0x38f850: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f84c) {
            ctx->pc = 0x38F868u;
            goto label_38f868;
        }
    }
    ctx->pc = 0x38F854u;
    // 0x38f854: 0xc0a0ab0  jal         func_282AC0
    ctx->pc = 0x38F854u;
    SET_GPR_U32(ctx, 31, 0x38F85Cu);
    ctx->pc = 0x282AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282AC0u, 0x38F854u, 0x38F85Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38F85Cu;
label_38f85c:
    // 0x38f85c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x38F85Cu;
    {
        const bool branch_taken_0x38f85c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x38f85c) {
            ctx->pc = 0x38F878u;
            goto label_38f878;
        }
    }
    ctx->pc = 0x38F864u;
    // 0x38f864: 0x0  nop
    ctx->pc = 0x38f864u;
    // NOP
label_38f868:
    // 0x38f868: 0xc0e3cd8  jal         func_38F360
    ctx->pc = 0x38F868u;
    SET_GPR_U32(ctx, 31, 0x38F870u);
    ctx->pc = 0x38F86Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38F868u;
    // 0x38f86c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F360u, 0x38F868u, 0x38F870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38F870u;
label_38f870:
    // 0x38f870: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x38f870u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x38f874: 0xa2032b07  sb          $v1, 0x2B07($s0)
    ctx->pc = 0x38f874u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11015), (uint8_t)GPR_U32(ctx, 3));
label_38f878:
    // 0x38f878: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x38f878u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38f87c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x38f87cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38f880: 0x3e00008  jr          $ra
    ctx->pc = 0x38F880u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38F884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F880u;
        // 0x38f884: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38F880u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38F888u;
}
