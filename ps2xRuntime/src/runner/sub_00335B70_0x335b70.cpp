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

// Function: sub_00335B70
// Address: 0x335b70 - 0x335bc4
void sub_00335B70_0x335b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00335B70_0x335b70");
#endif

    switch (ctx->pc) {
        case 0x335b90u: goto label_335b90;
        case 0x335b9cu: goto label_335b9c;
        default: break;
    }

    ctx->pc = 0x335b70u;

    // 0x335b70: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x335b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x335b74: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x335b74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x335b78: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x335b78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x335b7c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x335b7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x335b80: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x335b80u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335b84: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x335b84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x335b88: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x335b88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335b8c: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x335b8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_335b90:
    // 0x335b90: 0x8e050590  lw          $a1, 0x590($s0)
    ctx->pc = 0x335b90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1424)));
    // 0x335b94: 0xc0c0844  jal         func_302110
    ctx->pc = 0x335B94u;
    SET_GPR_U32(ctx, 31, 0x335B9Cu);
    ctx->pc = 0x335B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335B94u;
    // 0x335b98: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302110u, 0x335B94u, 0x335B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335B9Cu;
label_335b9c:
    // 0x335b9c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x335b9cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x335ba0: 0x2a230006  slti        $v1, $s1, 0x6
    ctx->pc = 0x335ba0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x335ba4: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x335BA4u;
    {
        const bool branch_taken_0x335ba4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x335BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335BA4u;
        // 0x335ba8: 0x26100050  addiu       $s0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335ba4) {
            ctx->pc = 0x335B90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_335b90;
        }
    }
    ctx->pc = 0x335BACu;
    // 0x335bac: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x335bacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x335bb0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x335bb0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x335bb4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x335bb4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x335bb8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x335bb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x335bbc: 0x3e00008  jr          $ra
    ctx->pc = 0x335BBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x335BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335BBCu;
        // 0x335bc0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x335BBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x335BC4u;
}
