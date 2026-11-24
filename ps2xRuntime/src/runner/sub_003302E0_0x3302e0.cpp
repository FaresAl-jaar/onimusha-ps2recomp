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

// Function: sub_003302E0
// Address: 0x3302e0 - 0x3303f4
void sub_003302E0_0x3302e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003302E0_0x3302e0");
#endif

    switch (ctx->pc) {
        case 0x330318u: goto label_330318;
        case 0x330348u: goto label_330348;
        case 0x3303a4u: goto label_3303a4;
        case 0x3303acu: goto label_3303ac;
        case 0x3303d0u: goto label_3303d0;
        case 0x3303dcu: goto label_3303dc;
        default: break;
    }

    ctx->pc = 0x3302e0u;

    // 0x3302e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3302e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3302e4: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x3302e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3302e8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3302e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3302ec: 0x30a2ffff  andi        $v0, $a1, 0xFFFF
    ctx->pc = 0x3302ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x3302f0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3302f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3302f4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3302f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3302f8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3302f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3302fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3302fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x330300: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x330300u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330304: 0x1043001e  beq         $v0, $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x330304u;
    {
        const bool branch_taken_0x330304 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x330308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330304u;
        // 0x330308: 0x3070ffff  andi        $s0, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x330304) {
            ctx->pc = 0x330380u;
            goto label_330380;
        }
    }
    ctx->pc = 0x33030Cu;
    // 0x33030c: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x33030cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x330310: 0xc0bce3c  jal         func_2F38F0
    ctx->pc = 0x330310u;
    SET_GPR_U32(ctx, 31, 0x330318u);
    ctx->pc = 0x330314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x330310u;
    // 0x330314: 0x2484bb30  addiu       $a0, $a0, -0x44D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F38F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F38F0u, 0x330310u, 0x330318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330318u;
label_330318:
    // 0x330318: 0x94430004  lhu         $v1, 0x4($v0)
    ctx->pc = 0x330318u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x33031c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x33031cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330320: 0x92440010  lbu         $a0, 0x10($s2)
    ctx->pc = 0x330320u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x330324: 0x30630f00  andi        $v1, $v1, 0xF00
    ctx->pc = 0x330324u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3840);
    // 0x330328: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x330328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33032c: 0x31a03  sra         $v1, $v1, 8
    ctx->pc = 0x33032cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 8));
    // 0x330330: 0x4082a  slt         $at, $zero, $a0
    ctx->pc = 0x330330u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x330334: 0x621004  sllv        $v0, $v0, $v1
    ctx->pc = 0x330334u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x330338: 0x10200011  beqz        $at, . + 4 + (0x11 << 2)
    ctx->pc = 0x330338u;
    {
        const bool branch_taken_0x330338 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x33033Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330338u;
        // 0x33033c: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x330338) {
            ctx->pc = 0x330380u;
            goto label_330380;
        }
    }
    ctx->pc = 0x330340u;
    // 0x330340: 0x8e45000c  lw          $a1, 0xC($s2)
    ctx->pc = 0x330340u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x330344: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x330344u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_330348:
    // 0x330348: 0x94a20008  lhu         $v0, 0x8($a1)
    ctx->pc = 0x330348u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x33034c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x33034cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x330350: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x330350u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x330354: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x330354u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x330358: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x330358u;
    {
        const bool branch_taken_0x330358 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x330358) {
            ctx->pc = 0x330370u;
            goto label_330370;
        }
    }
    ctx->pc = 0x330360u;
    // 0x330360: 0xa2461c49  sb          $a2, 0x1C49($s2)
    ctx->pc = 0x330360u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 7241), (uint8_t)GPR_U32(ctx, 6));
    // 0x330364: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x330364u;
    {
        const bool branch_taken_0x330364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x330368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330364u;
        // 0x330368: 0x3230ffff  andi        $s0, $s1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x330364) {
            ctx->pc = 0x330380u;
            goto label_330380;
        }
    }
    ctx->pc = 0x33036Cu;
    // 0x33036c: 0x0  nop
    ctx->pc = 0x33036cu;
    // NOP
label_330370:
    // 0x330370: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x330370u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x330374: 0xc4102a  slt         $v0, $a2, $a0
    ctx->pc = 0x330374u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x330378: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x330378u;
    {
        const bool branch_taken_0x330378 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33037Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330378u;
        // 0x33037c: 0x24a5000a  addiu       $a1, $a1, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330378) {
            ctx->pc = 0x330348u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_330348;
        }
    }
    ctx->pc = 0x330380u;
label_330380:
    // 0x330380: 0x92451c49  lbu         $a1, 0x1C49($s2)
    ctx->pc = 0x330380u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 7241)));
    // 0x330384: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x330384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x330388: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x330388u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x33038c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x33038cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x330390: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x330390u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x330394: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x330394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x330398: 0x94450008  lhu         $a1, 0x8($v0)
    ctx->pc = 0x330398u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x33039c: 0xc0cd92c  jal         func_3364B0
    ctx->pc = 0x33039Cu;
    SET_GPR_U32(ctx, 31, 0x3303A4u);
    ctx->pc = 0x3303A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33039Cu;
    // 0x3303a0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3364B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3364B0u, 0x33039Cu, 0x3303A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3303A4u;
label_3303a4:
    // 0x3303a4: 0xc0cdd94  jal         func_337650
    ctx->pc = 0x3303A4u;
    SET_GPR_U32(ctx, 31, 0x3303ACu);
    ctx->pc = 0x3303A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3303A4u;
    // 0x3303a8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337650u, 0x3303A4u, 0x3303ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3303ACu;
label_3303ac:
    // 0x3303ac: 0xae400014  sw          $zero, 0x14($s2)
    ctx->pc = 0x3303acu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 0));
    // 0x3303b0: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x3303b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x3303b4: 0x92431c49  lbu         $v1, 0x1C49($s2)
    ctx->pc = 0x3303b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 7241)));
    // 0x3303b8: 0x86450024  lh          $a1, 0x24($s2)
    ctx->pc = 0x3303b8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x3303bc: 0x90460008  lbu         $a2, 0x8($v0)
    ctx->pc = 0x3303bcu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x3303c0: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x3303c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x3303c4: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x3303c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x3303c8: 0xc0cde20  jal         func_337880
    ctx->pc = 0x3303C8u;
    SET_GPR_U32(ctx, 31, 0x3303D0u);
    ctx->pc = 0x3303CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3303C8u;
    // 0x3303cc: 0x24641c4a  addiu       $a0, $v1, 0x1C4A (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 7242));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337880u, 0x3303C8u, 0x3303D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3303D0u;
label_3303d0:
    // 0x3303d0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3303d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3303d4: 0xc0cc100  jal         func_330400
    ctx->pc = 0x3303D4u;
    SET_GPR_U32(ctx, 31, 0x3303DCu);
    ctx->pc = 0x3303D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3303D4u;
    // 0x3303d8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x330400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x330400u, 0x3303D4u, 0x3303DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3303DCu;
label_3303dc:
    // 0x3303dc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3303dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3303e0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3303e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3303e4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3303e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3303e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3303e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3303ec: 0x3e00008  jr          $ra
    ctx->pc = 0x3303ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3303F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3303ECu;
        // 0x3303f0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3303ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3303F4u;
}
