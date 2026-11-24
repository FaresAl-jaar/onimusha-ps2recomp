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

// Function: sub_002A15D0
// Address: 0x2a15d0 - 0x2a166c
void sub_002A15D0_0x2a15d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A15D0_0x2a15d0");
#endif

    switch (ctx->pc) {
        case 0x2a1608u: goto label_2a1608;
        case 0x2a1638u: goto label_2a1638;
        default: break;
    }

    ctx->pc = 0x2a15d0u;

    // 0x2a15d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2a15d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2a15d4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2a15d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2a15d8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2a15d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2a15dc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2a15dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2a15e0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2a15e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a15e4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2a15e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2a15e8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2a15e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a15ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a15ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2a15f0: 0x94830068  lhu         $v1, 0x68($a0)
    ctx->pc = 0x2a15f0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 104)));
    // 0x2a15f4: 0x3082b  sltu        $at, $zero, $v1
    ctx->pc = 0x2a15f4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2a15f8: 0x10200015  beqz        $at, . + 4 + (0x15 << 2)
    ctx->pc = 0x2A15F8u;
    {
        const bool branch_taken_0x2a15f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A15FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A15F8u;
        // 0x2a15fc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a15f8) {
            ctx->pc = 0x2A1650u;
            goto label_2a1650;
        }
    }
    ctx->pc = 0x2A1600u;
    // 0x2a1600: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2a1600u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1604: 0x0  nop
    ctx->pc = 0x2a1604u;
    // NOP
label_2a1608:
    // 0x2a1608: 0x8e63007c  lw          $v1, 0x7C($s3)
    ctx->pc = 0x2a1608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
    // 0x2a160c: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x2a160cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2a1610: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x2a1610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2a1614: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2a1614u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2a1618: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A1618u;
    {
        const bool branch_taken_0x2a1618 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A161Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1618u;
        // 0x2a161c: 0x24030080  addiu       $v1, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1618) {
            ctx->pc = 0x2A1628u;
            goto label_2a1628;
        }
    }
    ctx->pc = 0x2A1620u;
    // 0x2a1620: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2A1620u;
    {
        const bool branch_taken_0x2a1620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1620u;
        // 0x2a1624: 0xac830150  sw          $v1, 0x150($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 336), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1620) {
            ctx->pc = 0x2A1638u;
            goto label_2a1638;
        }
    }
    ctx->pc = 0x2A1628u;
label_2a1628:
    // 0x2a1628: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2a1628u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a162c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2a162cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1630: 0xc0a8540  jal         func_2A1500
    ctx->pc = 0x2A1630u;
    SET_GPR_U32(ctx, 31, 0x2A1638u);
    ctx->pc = 0x2A1634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1630u;
    // 0x2a1634: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A1500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A1500u, 0x2A1630u, 0x2A1638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1638u;
label_2a1638:
    // 0x2a1638: 0x96630068  lhu         $v1, 0x68($s3)
    ctx->pc = 0x2a1638u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 104)));
    // 0x2a163c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2a163cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2a1640: 0x223182b  sltu        $v1, $s1, $v1
    ctx->pc = 0x2a1640u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2a1644: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x2A1644u;
    {
        const bool branch_taken_0x2a1644 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A1648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1644u;
        // 0x2a1648: 0x261001f0  addiu       $s0, $s0, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 496));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1644) {
            ctx->pc = 0x2A1608u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a1608;
        }
    }
    ctx->pc = 0x2A164Cu;
    // 0x2a164c: 0x0  nop
    ctx->pc = 0x2a164cu;
    // NOP
label_2a1650:
    // 0x2a1650: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2a1650u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a1654: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2a1654u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a1658: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2a1658u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a165c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2a165cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a1660: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a1660u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a1664: 0x3e00008  jr          $ra
    ctx->pc = 0x2A1664u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A1668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1664u;
        // 0x2a1668: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A1664u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A166Cu;
}
