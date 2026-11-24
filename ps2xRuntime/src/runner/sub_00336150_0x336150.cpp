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

// Function: sub_00336150
// Address: 0x336150 - 0x3361d0
void sub_00336150_0x336150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00336150_0x336150");
#endif

    switch (ctx->pc) {
        case 0x336150u: goto label_336150;
        case 0x336154u: goto label_336154;
        case 0x336158u: goto label_336158;
        case 0x33615cu: goto label_33615c;
        case 0x336160u: goto label_336160;
        case 0x336164u: goto label_336164;
        case 0x336168u: goto label_336168;
        case 0x33616cu: goto label_33616c;
        case 0x336170u: goto label_336170;
        case 0x336174u: goto label_336174;
        case 0x336178u: goto label_336178;
        case 0x33617cu: goto label_33617c;
        case 0x336180u: goto label_336180;
        case 0x336184u: goto label_336184;
        case 0x336188u: goto label_336188;
        case 0x33618cu: goto label_33618c;
        case 0x336190u: goto label_336190;
        case 0x336194u: goto label_336194;
        case 0x336198u: goto label_336198;
        case 0x33619cu: goto label_33619c;
        case 0x3361a0u: goto label_3361a0;
        case 0x3361a4u: goto label_3361a4;
        case 0x3361a8u: goto label_3361a8;
        case 0x3361acu: goto label_3361ac;
        case 0x3361b0u: goto label_3361b0;
        case 0x3361b4u: goto label_3361b4;
        case 0x3361b8u: goto label_3361b8;
        case 0x3361bcu: goto label_3361bc;
        case 0x3361c0u: goto label_3361c0;
        case 0x3361c4u: goto label_3361c4;
        case 0x3361c8u: goto label_3361c8;
        case 0x3361ccu: goto label_3361cc;
        default: break;
    }

    ctx->pc = 0x336150u;

label_336150:
    // 0x336150: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x336150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_336154:
    // 0x336154: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x336154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_336158:
    // 0x336158: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x336158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_33615c:
    // 0x33615c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x33615cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_336160:
    // 0x336160: 0x8c840054  lw          $a0, 0x54($a0)
    ctx->pc = 0x336160u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
label_336164:
    // 0x336164: 0x10800010  beqz        $a0, . + 4 + (0x10 << 2)
label_336168:
    if (ctx->pc == 0x336168u) {
        ctx->pc = 0x33616Cu;
        goto label_33616c;
    }
    ctx->pc = 0x336164u;
    {
        const bool branch_taken_0x336164 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x336164) {
            ctx->pc = 0x3361A8u;
            goto label_3361a8;
        }
    }
    ctx->pc = 0x33616Cu;
label_33616c:
    // 0x33616c: 0x8e030148  lw          $v1, 0x148($s0)
    ctx->pc = 0x33616cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
label_336170:
    // 0x336170: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x336170u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
label_336174:
    // 0x336174: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x336174u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_336178:
    // 0x336178: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x336178u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_33617c:
    // 0x33617c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x33617cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_336180:
    // 0x336180: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
label_336184:
    if (ctx->pc == 0x336184u) {
        ctx->pc = 0x336188u;
        goto label_336188;
    }
    ctx->pc = 0x336180u;
    {
        const bool branch_taken_0x336180 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x336180) {
            ctx->pc = 0x3361A8u;
            goto label_3361a8;
        }
    }
    ctx->pc = 0x336188u;
label_336188:
    // 0x336188: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x336188u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_33618c:
    // 0x33618c: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x33618cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_336190:
    // 0x336190: 0x320f809  jalr        $t9
label_336194:
    if (ctx->pc == 0x336194u) {
        ctx->pc = 0x336194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336190u;
        // 0x336194: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x336198u;
        goto label_336198;
    }
    ctx->pc = 0x336190u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x336198u);
        ctx->pc = 0x336194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336190u;
        // 0x336194: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x336190u, 0x336198u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x336198u;
label_336198:
    // 0x336198: 0x920307f6  lbu         $v1, 0x7F6($s0)
    ctx->pc = 0x336198u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2038)));
label_33619c:
    // 0x33619c: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x33619cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_3361a0:
    // 0x3361a0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x3361a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_3361a4:
    // 0x3361a4: 0xa20307f6  sb          $v1, 0x7F6($s0)
    ctx->pc = 0x3361a4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 3));
label_3361a8:
    // 0x3361a8: 0x8e032ab4  lw          $v1, 0x2AB4($s0)
    ctx->pc = 0x3361a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10932)));
label_3361ac:
    // 0x3361ac: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_3361b0:
    if (ctx->pc == 0x3361B0u) {
        ctx->pc = 0x3361B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3361ACu;
        // 0x3361b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3361B4u;
        goto label_3361b4;
    }
    ctx->pc = 0x3361ACu;
    {
        const bool branch_taken_0x3361ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3361B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3361ACu;
        // 0x3361b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3361ac) {
            ctx->pc = 0x3361C0u;
            goto label_3361c0;
        }
    }
    ctx->pc = 0x3361B4u;
label_3361b4:
    // 0x3361b4: 0x60f809  jalr        $v1
label_3361b8:
    if (ctx->pc == 0x3361B8u) {
        ctx->pc = 0x3361BCu;
        goto label_3361bc;
    }
    ctx->pc = 0x3361B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3361BCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3361B4u, 0x3361BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3361BCu;
label_3361bc:
    // 0x3361bc: 0x0  nop
    ctx->pc = 0x3361bcu;
    // NOP
label_3361c0:
    // 0x3361c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3361c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3361c4:
    // 0x3361c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3361c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3361c8:
    // 0x3361c8: 0x3e00008  jr          $ra
label_3361cc:
    if (ctx->pc == 0x3361CCu) {
        ctx->pc = 0x3361CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3361C8u;
        // 0x3361cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3361D0u;
        goto label_fallthrough_0x3361c8;
    }
    ctx->pc = 0x3361C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3361CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3361C8u;
        // 0x3361cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3361C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3361c8:
    ctx->pc = 0x3361D0u;
}
