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

// Function: sub_00275A80
// Address: 0x275a80 - 0x275ad8
void sub_00275A80_0x275a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00275A80_0x275a80");
#endif

    switch (ctx->pc) {
        case 0x275aa4u: goto label_275aa4;
        case 0x275abcu: goto label_275abc;
        default: break;
    }

    ctx->pc = 0x275a80u;

    // 0x275a80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x275a80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x275a84: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x275a84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x275a88: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x275a88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x275a8c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x275a8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x275a90: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x275a90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275a94: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x275A94u;
    {
        const bool branch_taken_0x275a94 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x275A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275A94u;
        // 0x275a98: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275a94) {
            ctx->pc = 0x275AC0u;
            goto label_275ac0;
        }
    }
    ctx->pc = 0x275A9Cu;
    // 0x275a9c: 0xc09d6d4  jal         func_275B50
    ctx->pc = 0x275A9Cu;
    SET_GPR_U32(ctx, 31, 0x275AA4u);
    ctx->pc = 0x275B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275B50u, 0x275A9Cu, 0x275AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275AA4u;
label_275aa4:
    // 0x275aa4: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x275aa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x275aa8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x275aa8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x275aac: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x275AACu;
    {
        const bool branch_taken_0x275aac = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x275AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275AACu;
        // 0x275ab0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275aac) {
            ctx->pc = 0x275AC0u;
            goto label_275ac0;
        }
    }
    ctx->pc = 0x275AB4u;
    // 0x275ab4: 0xc040148  jal         func_100520
    ctx->pc = 0x275AB4u;
    SET_GPR_U32(ctx, 31, 0x275ABCu);
    ctx->pc = 0x100520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100520u, 0x275AB4u, 0x275ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275ABCu;
label_275abc:
    // 0x275abc: 0x0  nop
    ctx->pc = 0x275abcu;
    // NOP
label_275ac0:
    // 0x275ac0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x275ac0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275ac4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x275ac4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x275ac8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x275ac8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x275acc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x275accu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x275ad0: 0x3e00008  jr          $ra
    ctx->pc = 0x275AD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x275AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275AD0u;
        // 0x275ad4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x275AD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x275AD8u;
}
