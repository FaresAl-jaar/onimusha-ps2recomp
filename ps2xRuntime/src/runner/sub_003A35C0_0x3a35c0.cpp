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

// Function: sub_003A35C0
// Address: 0x3a35c0 - 0x3a3688
void sub_003A35C0_0x3a35c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A35C0_0x3a35c0");
#endif

    switch (ctx->pc) {
        case 0x3a35e8u: goto label_3a35e8;
        case 0x3a3618u: goto label_3a3618;
        case 0x3a3660u: goto label_3a3660;
        default: break;
    }

    ctx->pc = 0x3a35c0u;

    // 0x3a35c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3a35c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3a35c4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3a35c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3a35c8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3a35c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3a35cc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3a35ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3a35d0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3a35d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a35d4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3a35d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3a35d8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3a35d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a35dc: 0x8f848c60  lw          $a0, -0x73A0($gp)
    ctx->pc = 0x3a35dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937696)));
    // 0x3a35e0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3a35e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a35e4: 0x0  nop
    ctx->pc = 0x3a35e4u;
    // NOP
label_3a35e8:
    // 0x3a35e8: 0x80831fb4  lb          $v1, 0x1FB4($a0)
    ctx->pc = 0x3a35e8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 8116)));
    // 0x3a35ec: 0x14720010  bne         $v1, $s2, . + 4 + (0x10 << 2)
    ctx->pc = 0x3A35ECu;
    {
        const bool branch_taken_0x3a35ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 18));
        if (branch_taken_0x3a35ec) {
            ctx->pc = 0x3A3630u;
            goto label_3a3630;
        }
    }
    ctx->pc = 0x3A35F4u;
    // 0x3a35f4: 0x1211001e  beq         $s0, $s1, . + 4 + (0x1E << 2)
    ctx->pc = 0x3A35F4u;
    {
        const bool branch_taken_0x3a35f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 17));
        if (branch_taken_0x3a35f4) {
            ctx->pc = 0x3A3670u;
            goto label_3a3670;
        }
    }
    ctx->pc = 0x3A35FCu;
    // 0x3a35fc: 0x8f838c60  lw          $v1, -0x73A0($gp)
    ctx->pc = 0x3a35fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937696)));
    // 0x3a3600: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x3a3600u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x3a3604: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3a3604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3a3608: 0x8c641fb0  lw          $a0, 0x1FB0($v1)
    ctx->pc = 0x3a3608u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8112)));
    // 0x3a360c: 0x90451fba  lbu         $a1, 0x1FBA($v0)
    ctx->pc = 0x3a360cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 8122)));
    // 0x3a3610: 0xc0d6afc  jal         func_35ABF0
    ctx->pc = 0x3A3610u;
    SET_GPR_U32(ctx, 31, 0x3A3618u);
    ctx->pc = 0x3A3614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A3610u;
    // 0x3a3614: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35ABF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35ABF0u, 0x3A3610u, 0x3A3618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A3618u;
label_3a3618:
    // 0x3a3618: 0x8f828c60  lw          $v0, -0x73A0($gp)
    ctx->pc = 0x3a3618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937696)));
    // 0x3a361c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3a361cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3a3620: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x3a3620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x3a3624: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3A3624u;
    {
        const bool branch_taken_0x3a3624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A3628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3624u;
        // 0x3a3628: 0xa0431fb4  sb          $v1, 0x1FB4($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 8116), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3624) {
            ctx->pc = 0x3A3640u;
            goto label_3a3640;
        }
    }
    ctx->pc = 0x3A362Cu;
    // 0x3a362c: 0x0  nop
    ctx->pc = 0x3a362cu;
    // NOP
label_3a3630:
    // 0x3a3630: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3a3630u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3a3634: 0x2a030005  slti        $v1, $s0, 0x5
    ctx->pc = 0x3a3634u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x3a3638: 0x1460ffeb  bnez        $v1, . + 4 + (-0x15 << 2)
    ctx->pc = 0x3A3638u;
    {
        const bool branch_taken_0x3a3638 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A363Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3638u;
        // 0x3a363c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3638) {
            ctx->pc = 0x3A35E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a35e8;
        }
    }
    ctx->pc = 0x3A3640u;
label_3a3640:
    // 0x3a3640: 0x8f838c60  lw          $v1, -0x73A0($gp)
    ctx->pc = 0x3a3640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937696)));
    // 0x3a3644: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x3a3644u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x3a3648: 0x324500ff  andi        $a1, $s2, 0xFF
    ctx->pc = 0x3a3648u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x3a364c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3a364cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3a3650: 0x8c641fb0  lw          $a0, 0x1FB0($v1)
    ctx->pc = 0x3a3650u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8112)));
    // 0x3a3654: 0x90461fba  lbu         $a2, 0x1FBA($v0)
    ctx->pc = 0x3a3654u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 8122)));
    // 0x3a3658: 0xc0d6a90  jal         func_35AA40
    ctx->pc = 0x3A3658u;
    SET_GPR_U32(ctx, 31, 0x3A3660u);
    ctx->pc = 0x3A365Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A3658u;
    // 0x3a365c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AA40u, 0x3A3658u, 0x3A3660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A3660u;
label_3a3660:
    // 0x3a3660: 0x8f838c60  lw          $v1, -0x73A0($gp)
    ctx->pc = 0x3a3660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937696)));
    // 0x3a3664: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x3a3664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x3a3668: 0xa0721fb4  sb          $s2, 0x1FB4($v1)
    ctx->pc = 0x3a3668u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 8116), (uint8_t)GPR_U32(ctx, 18));
    // 0x3a366c: 0x0  nop
    ctx->pc = 0x3a366cu;
    // NOP
label_3a3670:
    // 0x3a3670: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3a3670u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3a3674: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3a3674u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3a3678: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3a3678u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a367c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3a367cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a3680: 0x3e00008  jr          $ra
    ctx->pc = 0x3A3680u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A3684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3680u;
        // 0x3a3684: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A3680u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A3688u;
}
