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

// Function: sub_003826C0
// Address: 0x3826c0 - 0x3827bc
void sub_003826C0_0x3826c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003826C0_0x3826c0");
#endif

    switch (ctx->pc) {
        case 0x3826f0u: goto label_3826f0;
        case 0x38271cu: goto label_38271c;
        case 0x382728u: goto label_382728;
        case 0x382740u: goto label_382740;
        case 0x38276cu: goto label_38276c;
        case 0x382798u: goto label_382798;
        default: break;
    }

    ctx->pc = 0x3826c0u;

    // 0x3826c0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3826c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x3826c4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x3826c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x3826c8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3826c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x3826cc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3826ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x3826d0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x3826d0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3826d4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3826d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3826d8: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x3826d8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3826dc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3826dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3826e0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3826e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3826e4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3826e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3826e8: 0xc0e0f00  jal         func_383C00
    ctx->pc = 0x3826E8u;
    SET_GPR_U32(ctx, 31, 0x3826F0u);
    ctx->pc = 0x3826ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3826E8u;
    // 0x3826ec: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x383C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x383C00u, 0x3826E8u, 0x3826F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3826F0u;
label_3826f0:
    // 0x3826f0: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x3826F0u;
    {
        const bool branch_taken_0x3826f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3826F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3826F0u;
        // 0x3826f4: 0x3204ffff  andi        $a0, $s0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3826f0) {
            ctx->pc = 0x382798u;
            goto label_382798;
        }
    }
    ctx->pc = 0x3826F8u;
    // 0x3826f8: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x3826f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3826fc: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x3826fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x382700: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x382700u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x382704: 0x94850044  lhu         $a1, 0x44($a0)
    ctx->pc = 0x382704u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x382708: 0x10a30023  beq         $a1, $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x382708u;
    {
        const bool branch_taken_0x382708 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x382708) {
            ctx->pc = 0x382798u;
            goto label_382798;
        }
    }
    ctx->pc = 0x382710u;
    // 0x382710: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x382710u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x382714: 0xc0bce3c  jal         func_2F38F0
    ctx->pc = 0x382714u;
    SET_GPR_U32(ctx, 31, 0x38271Cu);
    ctx->pc = 0x382718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x382714u;
    // 0x382718: 0x2484bb30  addiu       $a0, $a0, -0x44D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F38F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F38F0u, 0x382714u, 0x38271Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38271Cu;
label_38271c:
    // 0x38271c: 0x94440004  lhu         $a0, 0x4($v0)
    ctx->pc = 0x38271cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x382720: 0xc0d23ec  jal         func_348FB0
    ctx->pc = 0x382720u;
    SET_GPR_U32(ctx, 31, 0x382728u);
    ctx->pc = 0x382724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x382720u;
    // 0x382724: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x348FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348FB0u, 0x382720u, 0x382728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x382728u;
label_382728:
    // 0x382728: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x382728u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38272c: 0x1240001a  beqz        $s2, . + 4 + (0x1A << 2)
    ctx->pc = 0x38272Cu;
    {
        const bool branch_taken_0x38272c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x382730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38272Cu;
        // 0x382730: 0x3203ffff  andi        $v1, $s0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x38272c) {
            ctx->pc = 0x382798u;
            goto label_382798;
        }
    }
    ctx->pc = 0x382734u;
    // 0x382734: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x382734u;
    {
        const bool branch_taken_0x382734 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x382738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382734u;
        // 0x382738: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382734) {
            ctx->pc = 0x382788u;
            goto label_382788;
        }
    }
    ctx->pc = 0x38273Cu;
    // 0x38273c: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x38273cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_382740:
    // 0x382740: 0x2511821  addu        $v1, $s2, $s1
    ctx->pc = 0x382740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x382744: 0x9064001c  lbu         $a0, 0x1C($v1)
    ctx->pc = 0x382744u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x382748: 0x92630001  lbu         $v1, 0x1($s3)
    ctx->pc = 0x382748u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
    // 0x38274c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x38274cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x382750: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x382750u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x382754: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x382754u;
    {
        const bool branch_taken_0x382754 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x382754) {
            ctx->pc = 0x382770u;
            goto label_382770;
        }
    }
    ctx->pc = 0x38275Cu;
    // 0x38275c: 0x96050016  lhu         $a1, 0x16($s0)
    ctx->pc = 0x38275cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
    // 0x382760: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x382760u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x382764: 0xc0e09f0  jal         func_3827C0
    ctx->pc = 0x382764u;
    SET_GPR_U32(ctx, 31, 0x38276Cu);
    ctx->pc = 0x382768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x382764u;
    // 0x382768: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3827C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3827C0u, 0x382764u, 0x38276Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38276Cu;
label_38276c:
    // 0x38276c: 0x0  nop
    ctx->pc = 0x38276cu;
    // NOP
label_382770:
    // 0x382770: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x382770u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x382774: 0x2a230003  slti        $v1, $s1, 0x3
    ctx->pc = 0x382774u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x382778: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
    ctx->pc = 0x382778u;
    {
        const bool branch_taken_0x382778 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x38277Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382778u;
        // 0x38277c: 0x26100002  addiu       $s0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382778) {
            ctx->pc = 0x382740u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_382740;
        }
    }
    ctx->pc = 0x382780u;
    // 0x382780: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x382780u;
    {
        const bool branch_taken_0x382780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x382780) {
            ctx->pc = 0x382798u;
            goto label_382798;
        }
    }
    ctx->pc = 0x382788u;
label_382788:
    // 0x382788: 0x9645000a  lhu         $a1, 0xA($s2)
    ctx->pc = 0x382788u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 10)));
    // 0x38278c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x38278cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x382790: 0xc0e09f0  jal         func_3827C0
    ctx->pc = 0x382790u;
    SET_GPR_U32(ctx, 31, 0x382798u);
    ctx->pc = 0x382794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x382790u;
    // 0x382794: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3827C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3827C0u, 0x382790u, 0x382798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x382798u;
label_382798:
    // 0x382798: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x382798u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x38279c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x38279cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3827a0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3827a0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3827a4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3827a4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3827a8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3827a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3827ac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3827acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3827b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3827b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3827b4: 0x3e00008  jr          $ra
    ctx->pc = 0x3827B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3827B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3827B4u;
        // 0x3827b8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3827B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3827BCu;
}
