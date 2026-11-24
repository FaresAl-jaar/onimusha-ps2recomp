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

// Function: sub_00342600
// Address: 0x342600 - 0x342748
void sub_00342600_0x342600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00342600_0x342600");
#endif

    switch (ctx->pc) {
        case 0x342648u: goto label_342648;
        case 0x342684u: goto label_342684;
        case 0x34269cu: goto label_34269c;
        case 0x3426b4u: goto label_3426b4;
        case 0x3426d0u: goto label_3426d0;
        case 0x3426e4u: goto label_3426e4;
        case 0x3426fcu: goto label_3426fc;
        case 0x342714u: goto label_342714;
        default: break;
    }

    ctx->pc = 0x342600u;

    // 0x342600: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x342600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x342604: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x342604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x342608: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x342608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x34260c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x34260cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x342610: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x342610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x342614: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x342614u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x342618: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x342618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x34261c: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x34261cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x342620: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x342620u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x342624: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x342624u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x342628: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x342628u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x34262c: 0xac850030  sw          $a1, 0x30($a0)
    ctx->pc = 0x34262cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 5));
    // 0x342630: 0xac860034  sw          $a2, 0x34($a0)
    ctx->pc = 0x342630u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 6));
    // 0x342634: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x342634u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x342638: 0x8e650030  lw          $a1, 0x30($s3)
    ctx->pc = 0x342638u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x34263c: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x34263cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x342640: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x342640u;
    SET_GPR_U32(ctx, 31, 0x342648u);
    ctx->pc = 0x342644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342640u;
    // 0x342644: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x342640u, 0x342648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342648u;
label_342648:
    // 0x342648: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x342648u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34264c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x34264cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x342650: 0x1242002d  beq         $s2, $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x342650u;
    {
        const bool branch_taken_0x342650 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x342650) {
            ctx->pc = 0x342708u;
            goto label_342708;
        }
    }
    ctx->pc = 0x342658u;
    // 0x342658: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x342658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x34265c: 0x1242001e  beq         $s2, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x34265Cu;
    {
        const bool branch_taken_0x34265c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x342660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34265Cu;
        // 0x342660: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34265c) {
            ctx->pc = 0x3426D8u;
            goto label_3426d8;
        }
    }
    ctx->pc = 0x342664u;
    // 0x342664: 0x12420004  beq         $s2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x342664u;
    {
        const bool branch_taken_0x342664 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x342664) {
            ctx->pc = 0x342678u;
            goto label_342678;
        }
    }
    ctx->pc = 0x34266Cu;
    // 0x34266c: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x34266Cu;
    {
        const bool branch_taken_0x34266c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34266c) {
            ctx->pc = 0x342718u;
            goto label_342718;
        }
    }
    ctx->pc = 0x342674u;
    // 0x342674: 0x0  nop
    ctx->pc = 0x342674u;
    // NOP
label_342678:
    // 0x342678: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x342678u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x34267c: 0xc0d1668  jal         func_3459A0
    ctx->pc = 0x34267Cu;
    SET_GPR_U32(ctx, 31, 0x342684u);
    ctx->pc = 0x342680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34267Cu;
    // 0x342680: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3459A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3459A0u, 0x34267Cu, 0x342684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342684u;
label_342684:
    // 0x342684: 0x27848b94  addiu       $a0, $gp, -0x746C
    ctx->pc = 0x342684u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937492));
    // 0x342688: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x342688u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34268c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x34268cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x342690: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x342690u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x342694: 0xc0d0678  jal         func_3419E0
    ctx->pc = 0x342694u;
    SET_GPR_U32(ctx, 31, 0x34269Cu);
    ctx->pc = 0x342698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342694u;
    // 0x342698: 0xa20007f6  sb          $zero, 0x7F6($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3419E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3419E0u, 0x342694u, 0x34269Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34269Cu;
label_34269c:
    // 0x34269c: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x34269cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
    // 0x3426a0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3426a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3426a4: 0x92050002  lbu         $a1, 0x2($s0)
    ctx->pc = 0x3426a4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x3426a8: 0x27848b94  addiu       $a0, $gp, -0x746C
    ctx->pc = 0x3426a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937492));
    // 0x3426ac: 0xc0d0600  jal         func_341800
    ctx->pc = 0x3426ACu;
    SET_GPR_U32(ctx, 31, 0x3426B4u);
    ctx->pc = 0x3426B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3426ACu;
    // 0x3426b0: 0x27a7005c  addiu       $a3, $sp, 0x5C (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341800u, 0x3426ACu, 0x3426B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3426B4u;
label_3426b4:
    // 0x3426b4: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x3426B4u;
    {
        const bool branch_taken_0x3426b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3426B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3426B4u;
        // 0x3426b8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3426b4) {
            ctx->pc = 0x342718u;
            goto label_342718;
        }
    }
    ctx->pc = 0x3426BCu;
    // 0x3426bc: 0xae630004  sw          $v1, 0x4($s3)
    ctx->pc = 0x3426bcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 3));
    // 0x3426c0: 0xae620008  sw          $v0, 0x8($s3)
    ctx->pc = 0x3426c0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
    // 0x3426c4: 0x8fa5005c  lw          $a1, 0x5C($sp)
    ctx->pc = 0x3426c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x3426c8: 0xc0d0ae8  jal         func_342BA0
    ctx->pc = 0x3426C8u;
    SET_GPR_U32(ctx, 31, 0x3426D0u);
    ctx->pc = 0x3426CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3426C8u;
    // 0x3426cc: 0x26640038  addiu       $a0, $s3, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342BA0u, 0x3426C8u, 0x3426D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3426D0u;
label_3426d0:
    // 0x3426d0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x3426D0u;
    {
        const bool branch_taken_0x3426d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3426d0) {
            ctx->pc = 0x342718u;
            goto label_342718;
        }
    }
    ctx->pc = 0x3426D8u;
label_3426d8:
    // 0x3426d8: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x3426d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x3426dc: 0xc0d166c  jal         func_3459B0
    ctx->pc = 0x3426DCu;
    SET_GPR_U32(ctx, 31, 0x3426E4u);
    ctx->pc = 0x3426E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3426DCu;
    // 0x3426e0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3459B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3459B0u, 0x3426DCu, 0x3426E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3426E4u;
label_3426e4:
    // 0x3426e4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3426e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3426e8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3426e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3426ec: 0x27848b94  addiu       $a0, $gp, -0x746C
    ctx->pc = 0x3426ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937492));
    // 0x3426f0: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x3426f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3426f4: 0xc0d0678  jal         func_3419E0
    ctx->pc = 0x3426F4u;
    SET_GPR_U32(ctx, 31, 0x3426FCu);
    ctx->pc = 0x3426F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3426F4u;
    // 0x3426f8: 0xa20007f6  sb          $zero, 0x7F6($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3419E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3419E0u, 0x3426F4u, 0x3426FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3426FCu;
label_3426fc:
    // 0x3426fc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3426FCu;
    {
        const bool branch_taken_0x3426fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3426fc) {
            ctx->pc = 0x342718u;
            goto label_342718;
        }
    }
    ctx->pc = 0x342704u;
    // 0x342704: 0x0  nop
    ctx->pc = 0x342704u;
    // NOP
label_342708:
    // 0x342708: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x342708u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x34270c: 0xc0d1664  jal         func_345990
    ctx->pc = 0x34270Cu;
    SET_GPR_U32(ctx, 31, 0x342714u);
    ctx->pc = 0x342710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34270Cu;
    // 0x342710: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x345990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x345990u, 0x34270Cu, 0x342714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342714u;
label_342714:
    // 0x342714: 0x0  nop
    ctx->pc = 0x342714u;
    // NOP
label_342718:
    // 0x342718: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x342718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x34271c: 0x16420002  bne         $s2, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x34271Cu;
    {
        const bool branch_taken_0x34271c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x34271c) {
            ctx->pc = 0x342728u;
            goto label_342728;
        }
    }
    ctx->pc = 0x342724u;
    // 0x342724: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x342724u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
label_342728:
    // 0x342728: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x342728u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x34272c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x34272cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x342730: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x342730u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x342734: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x342734u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x342738: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x342738u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34273c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x34273cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x342740: 0x3e00008  jr          $ra
    ctx->pc = 0x342740u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x342744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342740u;
        // 0x342744: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x342740u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x342748u;
}
