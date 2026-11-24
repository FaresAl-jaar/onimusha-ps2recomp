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

// Function: sub_0029A5F0
// Address: 0x29a5f0 - 0x29a654
void sub_0029A5F0_0x29a5f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029A5F0_0x29a5f0");
#endif

    switch (ctx->pc) {
        case 0x29a5f0u: goto label_29a5f0;
        case 0x29a5f4u: goto label_29a5f4;
        case 0x29a5f8u: goto label_29a5f8;
        case 0x29a5fcu: goto label_29a5fc;
        case 0x29a600u: goto label_29a600;
        case 0x29a604u: goto label_29a604;
        case 0x29a608u: goto label_29a608;
        case 0x29a60cu: goto label_29a60c;
        case 0x29a610u: goto label_29a610;
        case 0x29a614u: goto label_29a614;
        case 0x29a618u: goto label_29a618;
        case 0x29a61cu: goto label_29a61c;
        case 0x29a620u: goto label_29a620;
        case 0x29a624u: goto label_29a624;
        case 0x29a628u: goto label_29a628;
        case 0x29a62cu: goto label_29a62c;
        case 0x29a630u: goto label_29a630;
        case 0x29a634u: goto label_29a634;
        case 0x29a638u: goto label_29a638;
        case 0x29a63cu: goto label_29a63c;
        case 0x29a640u: goto label_29a640;
        case 0x29a644u: goto label_29a644;
        case 0x29a648u: goto label_29a648;
        case 0x29a64cu: goto label_29a64c;
        case 0x29a650u: goto label_29a650;
        default: break;
    }

    ctx->pc = 0x29a5f0u;

label_29a5f0:
    // 0x29a5f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x29a5f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_29a5f4:
    // 0x29a5f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x29a5f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_29a5f8:
    // 0x29a5f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x29a5f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_29a5fc:
    // 0x29a5fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29a5fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_29a600:
    // 0x29a600: 0xc0a6e50  jal         func_29B940
label_29a604:
    if (ctx->pc == 0x29A604u) {
        ctx->pc = 0x29A604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A600u;
        // 0x29a604: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29A608u;
        goto label_29a608;
    }
    ctx->pc = 0x29A600u;
    SET_GPR_U32(ctx, 31, 0x29A608u);
    ctx->pc = 0x29A604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A600u;
    // 0x29a604: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29B940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29B940u, 0x29A600u, 0x29A608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A608u;
label_29a608:
    // 0x29a608: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x29a608u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_29a60c:
    // 0x29a60c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x29a60cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29a610:
    // 0x29a610: 0x8e040858  lw          $a0, 0x858($s0)
    ctx->pc = 0x29a610u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2136)));
label_29a614:
    // 0x29a614: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_29a618:
    if (ctx->pc == 0x29A618u) {
        ctx->pc = 0x29A61Cu;
        goto label_29a61c;
    }
    ctx->pc = 0x29A614u;
    {
        const bool branch_taken_0x29a614 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x29a614) {
            ctx->pc = 0x29A630u;
            goto label_29a630;
        }
    }
    ctx->pc = 0x29A61Cu;
label_29a61c:
    // 0x29a61c: 0x8c9904d4  lw          $t9, 0x4D4($a0)
    ctx->pc = 0x29a61cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1236)));
label_29a620:
    // 0x29a620: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x29a620u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_29a624:
    // 0x29a624: 0x320f809  jalr        $t9
label_29a628:
    if (ctx->pc == 0x29A628u) {
        ctx->pc = 0x29A62Cu;
        goto label_29a62c;
    }
    ctx->pc = 0x29A624u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x29A62Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29A624u, 0x29A62Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29A62Cu;
label_29a62c:
    // 0x29a62c: 0x0  nop
    ctx->pc = 0x29a62cu;
    // NOP
label_29a630:
    // 0x29a630: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x29a630u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_29a634:
    // 0x29a634: 0x2a230004  slti        $v1, $s1, 0x4
    ctx->pc = 0x29a634u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
label_29a638:
    // 0x29a638: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
label_29a63c:
    if (ctx->pc == 0x29A63Cu) {
        ctx->pc = 0x29A63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A638u;
        // 0x29a63c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29A640u;
        goto label_29a640;
    }
    ctx->pc = 0x29A638u;
    {
        const bool branch_taken_0x29a638 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x29A63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A638u;
        // 0x29a63c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a638) {
            ctx->pc = 0x29A610u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29a610;
        }
    }
    ctx->pc = 0x29A640u;
label_29a640:
    // 0x29a640: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x29a640u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_29a644:
    // 0x29a644: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x29a644u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_29a648:
    // 0x29a648: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29a648u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_29a64c:
    // 0x29a64c: 0x3e00008  jr          $ra
label_29a650:
    if (ctx->pc == 0x29A650u) {
        ctx->pc = 0x29A650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A64Cu;
        // 0x29a650: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29A654u;
        goto label_fallthrough_0x29a64c;
    }
    ctx->pc = 0x29A64Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29A650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A64Cu;
        // 0x29a650: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29A64Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x29a64c:
    ctx->pc = 0x29A654u;
}
