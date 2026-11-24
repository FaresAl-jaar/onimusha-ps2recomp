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

// Function: sub_0029A580
// Address: 0x29a580 - 0x29a5f0
void sub_0029A580_0x29a580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029A580_0x29a580");
#endif

    switch (ctx->pc) {
        case 0x29a580u: goto label_29a580;
        case 0x29a584u: goto label_29a584;
        case 0x29a588u: goto label_29a588;
        case 0x29a58cu: goto label_29a58c;
        case 0x29a590u: goto label_29a590;
        case 0x29a594u: goto label_29a594;
        case 0x29a598u: goto label_29a598;
        case 0x29a59cu: goto label_29a59c;
        case 0x29a5a0u: goto label_29a5a0;
        case 0x29a5a4u: goto label_29a5a4;
        case 0x29a5a8u: goto label_29a5a8;
        case 0x29a5acu: goto label_29a5ac;
        case 0x29a5b0u: goto label_29a5b0;
        case 0x29a5b4u: goto label_29a5b4;
        case 0x29a5b8u: goto label_29a5b8;
        case 0x29a5bcu: goto label_29a5bc;
        case 0x29a5c0u: goto label_29a5c0;
        case 0x29a5c4u: goto label_29a5c4;
        case 0x29a5c8u: goto label_29a5c8;
        case 0x29a5ccu: goto label_29a5cc;
        case 0x29a5d0u: goto label_29a5d0;
        case 0x29a5d4u: goto label_29a5d4;
        case 0x29a5d8u: goto label_29a5d8;
        case 0x29a5dcu: goto label_29a5dc;
        case 0x29a5e0u: goto label_29a5e0;
        case 0x29a5e4u: goto label_29a5e4;
        case 0x29a5e8u: goto label_29a5e8;
        case 0x29a5ecu: goto label_29a5ec;
        default: break;
    }

    ctx->pc = 0x29a580u;

label_29a580:
    // 0x29a580: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x29a580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_29a584:
    // 0x29a584: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x29a584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_29a588:
    // 0x29a588: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x29a588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_29a58c:
    // 0x29a58c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x29a58cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_29a590:
    // 0x29a590: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x29a590u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_29a594:
    // 0x29a594: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29a594u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_29a598:
    // 0x29a598: 0xc0a6e44  jal         func_29B910
label_29a59c:
    if (ctx->pc == 0x29A59Cu) {
        ctx->pc = 0x29A59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A598u;
        // 0x29a59c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29A5A0u;
        goto label_29a5a0;
    }
    ctx->pc = 0x29A598u;
    SET_GPR_U32(ctx, 31, 0x29A5A0u);
    ctx->pc = 0x29A59Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A598u;
    // 0x29a59c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29B910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29B910u, 0x29A598u, 0x29A5A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A5A0u;
label_29a5a0:
    // 0x29a5a0: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x29a5a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_29a5a4:
    // 0x29a5a4: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x29a5a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29a5a8:
    // 0x29a5a8: 0x8e040858  lw          $a0, 0x858($s0)
    ctx->pc = 0x29a5a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2136)));
label_29a5ac:
    // 0x29a5ac: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_29a5b0:
    if (ctx->pc == 0x29A5B0u) {
        ctx->pc = 0x29A5B4u;
        goto label_29a5b4;
    }
    ctx->pc = 0x29A5ACu;
    {
        const bool branch_taken_0x29a5ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x29a5ac) {
            ctx->pc = 0x29A5C8u;
            goto label_29a5c8;
        }
    }
    ctx->pc = 0x29A5B4u;
label_29a5b4:
    // 0x29a5b4: 0x8c9904d4  lw          $t9, 0x4D4($a0)
    ctx->pc = 0x29a5b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1236)));
label_29a5b8:
    // 0x29a5b8: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x29a5b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_29a5bc:
    // 0x29a5bc: 0x320f809  jalr        $t9
label_29a5c0:
    if (ctx->pc == 0x29A5C0u) {
        ctx->pc = 0x29A5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A5BCu;
        // 0x29a5c0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29A5C4u;
        goto label_29a5c4;
    }
    ctx->pc = 0x29A5BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x29A5C4u);
        ctx->pc = 0x29A5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A5BCu;
        // 0x29a5c0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29A5BCu, 0x29A5C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29A5C4u;
label_29a5c4:
    // 0x29a5c4: 0x0  nop
    ctx->pc = 0x29a5c4u;
    // NOP
label_29a5c8:
    // 0x29a5c8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x29a5c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_29a5cc:
    // 0x29a5cc: 0x2a230004  slti        $v1, $s1, 0x4
    ctx->pc = 0x29a5ccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
label_29a5d0:
    // 0x29a5d0: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
label_29a5d4:
    if (ctx->pc == 0x29A5D4u) {
        ctx->pc = 0x29A5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A5D0u;
        // 0x29a5d4: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29A5D8u;
        goto label_29a5d8;
    }
    ctx->pc = 0x29A5D0u;
    {
        const bool branch_taken_0x29a5d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x29A5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A5D0u;
        // 0x29a5d4: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a5d0) {
            ctx->pc = 0x29A5A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29a5a8;
        }
    }
    ctx->pc = 0x29A5D8u;
label_29a5d8:
    // 0x29a5d8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x29a5d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_29a5dc:
    // 0x29a5dc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x29a5dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_29a5e0:
    // 0x29a5e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x29a5e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_29a5e4:
    // 0x29a5e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29a5e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_29a5e8:
    // 0x29a5e8: 0x3e00008  jr          $ra
label_29a5ec:
    if (ctx->pc == 0x29A5ECu) {
        ctx->pc = 0x29A5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A5E8u;
        // 0x29a5ec: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29A5F0u;
        goto label_fallthrough_0x29a5e8;
    }
    ctx->pc = 0x29A5E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29A5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A5E8u;
        // 0x29a5ec: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29A5E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x29a5e8:
    ctx->pc = 0x29A5F0u;
}
