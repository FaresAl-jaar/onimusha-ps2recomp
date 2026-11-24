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

// Function: sub_003672D0
// Address: 0x3672d0 - 0x3673cc
void sub_003672D0_0x3672d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003672D0_0x3672d0");
#endif

    switch (ctx->pc) {
        case 0x3672f4u: goto label_3672f4;
        case 0x367334u: goto label_367334;
        case 0x36735cu: goto label_36735c;
        case 0x367374u: goto label_367374;
        case 0x3673a0u: goto label_3673a0;
        default: break;
    }

    ctx->pc = 0x3672d0u;

    // 0x3672d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3672d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3672d4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3672d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x3672d8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3672d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3672dc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3672dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3672e0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3672e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3672e4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3672e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3672e8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3672e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3672ec: 0xc0d263c  jal         func_3498F0
    ctx->pc = 0x3672ECu;
    SET_GPR_U32(ctx, 31, 0x3672F4u);
    ctx->pc = 0x3672F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3672ECu;
    // 0x3672f0: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3498F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3498F0u, 0x3672ECu, 0x3672F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3672F4u;
label_3672f4:
    // 0x3672f4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3672f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3672f8: 0x82420334  lb          $v0, 0x334($s2)
    ctx->pc = 0x3672f8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 820)));
    // 0x3672fc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3672fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x367300: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x367300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x367304: 0x2450011c  addiu       $s0, $v0, 0x11C
    ctx->pc = 0x367304u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 284));
    // 0x367308: 0x8c420120  lw          $v0, 0x120($v0)
    ctx->pc = 0x367308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 288)));
    // 0x36730c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x36730Cu;
    {
        const bool branch_taken_0x36730c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x36730c) {
            ctx->pc = 0x367320u;
            goto label_367320;
        }
    }
    ctx->pc = 0x367314u;
    // 0x367314: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x367314u;
    {
        const bool branch_taken_0x367314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x367318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367314u;
        // 0x367318: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x367314) {
            ctx->pc = 0x3673B0u;
            goto label_3673b0;
        }
    }
    ctx->pc = 0x36731Cu;
    // 0x36731c: 0x0  nop
    ctx->pc = 0x36731cu;
    // NOP
label_367320:
    // 0x367320: 0x94450004  lhu         $a1, 0x4($v0)
    ctx->pc = 0x367320u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x367324: 0x9213000c  lbu         $s3, 0xC($s0)
    ctx->pc = 0x367324u;
    SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x367328: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x367328u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x36732c: 0xc0bd168  jal         func_2F45A0
    ctx->pc = 0x36732Cu;
    SET_GPR_U32(ctx, 31, 0x367334u);
    ctx->pc = 0x367330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36732Cu;
    // 0x367330: 0x2484bb30  addiu       $a0, $a0, -0x44D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F45A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F45A0u, 0x36732Cu, 0x367334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367334u;
label_367334:
    // 0x367334: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x367334u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x367338: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x367338u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x36733c: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x36733Cu;
    {
        const bool branch_taken_0x36733c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x36733c) {
            ctx->pc = 0x367380u;
            goto label_367380;
        }
    }
    ctx->pc = 0x367344u;
    // 0x367344: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x367344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x367348: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x367348u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x36734c: 0x2484bb30  addiu       $a0, $a0, -0x44D0
    ctx->pc = 0x36734cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949680));
    // 0x367350: 0x94450004  lhu         $a1, 0x4($v0)
    ctx->pc = 0x367350u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x367354: 0xc0bd1d0  jal         func_2F4740
    ctx->pc = 0x367354u;
    SET_GPR_U32(ctx, 31, 0x36735Cu);
    ctx->pc = 0x367358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367354u;
    // 0x367358: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F4740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F4740u, 0x367354u, 0x36735Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36735Cu;
label_36735c:
    // 0x36735c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x36735cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367360: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x367360u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367364: 0x3c020103  lui         $v0, 0x103
    ctx->pc = 0x367364u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)259 << 16));
    // 0x367368: 0x24070050  addiu       $a3, $zero, 0x50
    ctx->pc = 0x367368u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x36736c: 0xc0dc81c  jal         func_372070
    ctx->pc = 0x36736Cu;
    SET_GPR_U32(ctx, 31, 0x367374u);
    ctx->pc = 0x367370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36736Cu;
    // 0x367370: 0x3445000d  ori         $a1, $v0, 0xD (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13);
    ctx->in_delay_slot = false;
    ctx->pc = 0x372070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x372070u, 0x36736Cu, 0x367374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367374u;
label_367374:
    // 0x367374: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x367374u;
    {
        const bool branch_taken_0x367374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x367378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367374u;
        // 0x367378: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x367374) {
            ctx->pc = 0x3673B0u;
            goto label_3673b0;
        }
    }
    ctx->pc = 0x36737Cu;
    // 0x36737c: 0x0  nop
    ctx->pc = 0x36737cu;
    // NOP
label_367380:
    // 0x367380: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x367380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x367384: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x367384u;
    {
        const bool branch_taken_0x367384 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x367388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367384u;
        // 0x367388: 0x3c020103  lui         $v0, 0x103 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)259 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x367384) {
            ctx->pc = 0x3673A8u;
            goto label_3673a8;
        }
    }
    ctx->pc = 0x36738Cu;
    // 0x36738c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x36738cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367390: 0x3445000c  ori         $a1, $v0, 0xC
    ctx->pc = 0x367390u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12);
    // 0x367394: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x367394u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x367398: 0xc0dc81c  jal         func_372070
    ctx->pc = 0x367398u;
    SET_GPR_U32(ctx, 31, 0x3673A0u);
    ctx->pc = 0x36739Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367398u;
    // 0x36739c: 0x24070050  addiu       $a3, $zero, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x372070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x372070u, 0x367398u, 0x3673A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3673A0u;
label_3673a0:
    // 0x3673a0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3673A0u;
    {
        const bool branch_taken_0x3673a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3673A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3673A0u;
        // 0x3673a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3673a0) {
            ctx->pc = 0x3673B0u;
            goto label_3673b0;
        }
    }
    ctx->pc = 0x3673A8u;
label_3673a8:
    // 0x3673a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3673a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3673ac: 0x0  nop
    ctx->pc = 0x3673acu;
    // NOP
label_3673b0:
    // 0x3673b0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3673b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3673b4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3673b4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3673b8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3673b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3673bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3673bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3673c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3673c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3673c4: 0x3e00008  jr          $ra
    ctx->pc = 0x3673C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3673C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3673C4u;
        // 0x3673c8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3673C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3673CCu;
}
