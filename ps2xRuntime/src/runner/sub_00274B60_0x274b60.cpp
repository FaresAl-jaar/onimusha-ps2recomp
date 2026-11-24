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

// Function: sub_00274B60
// Address: 0x274b60 - 0x274bb8
void sub_00274B60_0x274b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00274B60_0x274b60");
#endif

    switch (ctx->pc) {
        case 0x274b84u: goto label_274b84;
        case 0x274b9cu: goto label_274b9c;
        default: break;
    }

    ctx->pc = 0x274b60u;

    // 0x274b60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x274b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x274b64: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x274b64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x274b68: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x274b68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x274b6c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x274b6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x274b70: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x274b70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274b74: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x274B74u;
    {
        const bool branch_taken_0x274b74 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x274B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274B74u;
        // 0x274b78: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274b74) {
            ctx->pc = 0x274BA0u;
            goto label_274ba0;
        }
    }
    ctx->pc = 0x274B7Cu;
    // 0x274b7c: 0xc09d234  jal         func_2748D0
    ctx->pc = 0x274B7Cu;
    SET_GPR_U32(ctx, 31, 0x274B84u);
    ctx->pc = 0x274B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274B7Cu;
    // 0x274b80: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2748D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2748D0u, 0x274B7Cu, 0x274B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274B84u;
label_274b84:
    // 0x274b84: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x274b84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x274b88: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x274b88u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x274b8c: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x274B8Cu;
    {
        const bool branch_taken_0x274b8c = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x274B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274B8Cu;
        // 0x274b90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274b8c) {
            ctx->pc = 0x274BA0u;
            goto label_274ba0;
        }
    }
    ctx->pc = 0x274B94u;
    // 0x274b94: 0xc040148  jal         func_100520
    ctx->pc = 0x274B94u;
    SET_GPR_U32(ctx, 31, 0x274B9Cu);
    ctx->pc = 0x100520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100520u, 0x274B94u, 0x274B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274B9Cu;
label_274b9c:
    // 0x274b9c: 0x0  nop
    ctx->pc = 0x274b9cu;
    // NOP
label_274ba0:
    // 0x274ba0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x274ba0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274ba4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x274ba4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x274ba8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x274ba8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x274bac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x274bacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x274bb0: 0x3e00008  jr          $ra
    ctx->pc = 0x274BB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x274BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274BB0u;
        // 0x274bb4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x274BB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x274BB8u;
}
