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

// Function: sub_0026B700
// Address: 0x26b700 - 0x26b880
void sub_0026B700_0x26b700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026B700_0x26b700");
#endif

    switch (ctx->pc) {
        case 0x26b744u: goto label_26b744;
        case 0x26b7a8u: goto label_26b7a8;
        case 0x26b7d4u: goto label_26b7d4;
        case 0x26b7ecu: goto label_26b7ec;
        case 0x26b81cu: goto label_26b81c;
        case 0x26b84cu: goto label_26b84c;
        case 0x26b86cu: goto label_26b86c;
        default: break;
    }

    ctx->pc = 0x26b700u;

    // 0x26b700: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x26b700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x26b704: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x26b704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x26b708: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x26b708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x26b70c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x26b70cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b710: 0x90840002  lbu         $a0, 0x2($a0)
    ctx->pc = 0x26b710u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x26b714: 0x10800044  beqz        $a0, . + 4 + (0x44 << 2)
    ctx->pc = 0x26B714u;
    {
        const bool branch_taken_0x26b714 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B714u;
        // 0x26b718: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b714) {
            ctx->pc = 0x26B828u;
            goto label_26b828;
        }
    }
    ctx->pc = 0x26B71Cu;
    // 0x26b71c: 0x10830030  beq         $a0, $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x26B71Cu;
    {
        const bool branch_taken_0x26b71c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x26b71c) {
            ctx->pc = 0x26B7E0u;
            goto label_26b7e0;
        }
    }
    ctx->pc = 0x26B724u;
    // 0x26b724: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x26b724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26b728: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x26B728u;
    {
        const bool branch_taken_0x26b728 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x26b728) {
            ctx->pc = 0x26B738u;
            goto label_26b738;
        }
    }
    ctx->pc = 0x26B730u;
    // 0x26b730: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x26B730u;
    {
        const bool branch_taken_0x26b730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26b730) {
            ctx->pc = 0x26B870u;
            goto label_26b870;
        }
    }
    ctx->pc = 0x26B738u;
label_26b738:
    // 0x26b738: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x26b738u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x26b73c: 0xc063d48  jal         func_18F520
    ctx->pc = 0x26B73Cu;
    SET_GPR_U32(ctx, 31, 0x26B744u);
    ctx->pc = 0x26B740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B73Cu;
    // 0x26b740: 0x2484cbe0  addiu       $a0, $a0, -0x3420 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F520u, 0x26B73Cu, 0x26B744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B744u;
label_26b744:
    // 0x26b744: 0x1440004a  bnez        $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x26B744u;
    {
        const bool branch_taken_0x26b744 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26b744) {
            ctx->pc = 0x26B870u;
            goto label_26b870;
        }
    }
    ctx->pc = 0x26B74Cu;
    // 0x26b74c: 0x86030010  lh          $v1, 0x10($s0)
    ctx->pc = 0x26b74cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x26b750: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x26b750u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x26b754: 0xa6030010  sh          $v1, 0x10($s0)
    ctx->pc = 0x26b754u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 3));
    // 0x26b758: 0x86030010  lh          $v1, 0x10($s0)
    ctx->pc = 0x26b758u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x26b75c: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x26B75Cu;
    {
        const bool branch_taken_0x26b75c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B75Cu;
        // 0x26b760: 0x3c01008f  lui         $at, 0x8F (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)143 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b75c) {
            ctx->pc = 0x26B7A8u;
            goto label_26b7a8;
        }
    }
    ctx->pc = 0x26B764u;
    // 0x26b764: 0x8c23ea24  lw          $v1, -0x15DC($at)
    ctx->pc = 0x26b764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961700)));
    // 0x26b768: 0x30636008  andi        $v1, $v1, 0x6008
    ctx->pc = 0x26b768u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)24584);
    // 0x26b76c: 0x10600040  beqz        $v1, . + 4 + (0x40 << 2)
    ctx->pc = 0x26B76Cu;
    {
        const bool branch_taken_0x26b76c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x26b76c) {
            ctx->pc = 0x26B870u;
            goto label_26b870;
        }
    }
    ctx->pc = 0x26B774u;
    // 0x26b774: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x26b774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x26b778: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x26b778u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x26b77c: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x26b77cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x26b780: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x26b780u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x26b784: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x26b784u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
    // 0x26b788: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x26b788u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b78c: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x26b78cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x26b790: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x26b790u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b794: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x26b794u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b798: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x26b798u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b79c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x26b79cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b7a0: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x26B7A0u;
    SET_GPR_U32(ctx, 31, 0x26B7A8u);
    ctx->pc = 0x26B7A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B7A0u;
    // 0x26b7a4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x26B7A0u, 0x26B7A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B7A8u;
label_26b7a8:
    // 0x26b7a8: 0x92020002  lbu         $v0, 0x2($s0)
    ctx->pc = 0x26b7a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x26b7ac: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x26b7acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x26b7b0: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x26b7b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x26b7b4: 0x2484cbe0  addiu       $a0, $a0, -0x3420
    ctx->pc = 0x26b7b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    // 0x26b7b8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x26b7b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b7bc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x26b7bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b7c0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x26b7c0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b7c4: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x26b7c4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x26b7c8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x26b7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x26b7cc: 0xc063cd0  jal         func_18F340
    ctx->pc = 0x26B7CCu;
    SET_GPR_U32(ctx, 31, 0x26B7D4u);
    ctx->pc = 0x26B7D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B7CCu;
    // 0x26b7d0: 0xa2020002  sb          $v0, 0x2($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F340u, 0x26B7CCu, 0x26B7D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B7D4u;
label_26b7d4:
    // 0x26b7d4: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x26B7D4u;
    {
        const bool branch_taken_0x26b7d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26b7d4) {
            ctx->pc = 0x26B870u;
            goto label_26b870;
        }
    }
    ctx->pc = 0x26B7DCu;
    // 0x26b7dc: 0x0  nop
    ctx->pc = 0x26b7dcu;
    // NOP
label_26b7e0:
    // 0x26b7e0: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x26b7e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x26b7e4: 0xc063d48  jal         func_18F520
    ctx->pc = 0x26B7E4u;
    SET_GPR_U32(ctx, 31, 0x26B7ECu);
    ctx->pc = 0x26B7E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B7E4u;
    // 0x26b7e8: 0x2484cbe0  addiu       $a0, $a0, -0x3420 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F520u, 0x26B7E4u, 0x26B7ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B7ECu;
label_26b7ec:
    // 0x26b7ec: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x26B7ECu;
    {
        const bool branch_taken_0x26b7ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26b7ec) {
            ctx->pc = 0x26B870u;
            goto label_26b870;
        }
    }
    ctx->pc = 0x26B7F4u;
    // 0x26b7f4: 0x8202000f  lb          $v0, 0xF($s0)
    ctx->pc = 0x26b7f4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 15)));
    // 0x26b7f8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x26b7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x26b7fc: 0xa202000f  sb          $v0, 0xF($s0)
    ctx->pc = 0x26b7fcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 15), (uint8_t)GPR_U32(ctx, 2));
    // 0x26b800: 0x8203000f  lb          $v1, 0xF($s0)
    ctx->pc = 0x26b800u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 15)));
    // 0x26b804: 0x8202000e  lb          $v0, 0xE($s0)
    ctx->pc = 0x26b804u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x26b808: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x26b808u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x26b80c: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x26B80Cu;
    {
        const bool branch_taken_0x26b80c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B80Cu;
        // 0x26b810: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b80c) {
            ctx->pc = 0x26B828u;
            goto label_26b828;
        }
    }
    ctx->pc = 0x26B814u;
    // 0x26b814: 0xc09ad60  jal         func_26B580
    ctx->pc = 0x26B814u;
    SET_GPR_U32(ctx, 31, 0x26B81Cu);
    ctx->pc = 0x26B580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B580u, 0x26B814u, 0x26B81Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B81Cu;
label_26b81c:
    // 0x26b81c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x26B81Cu;
    {
        const bool branch_taken_0x26b81c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26b81c) {
            ctx->pc = 0x26B870u;
            goto label_26b870;
        }
    }
    ctx->pc = 0x26B824u;
    // 0x26b824: 0x0  nop
    ctx->pc = 0x26b824u;
    // NOP
label_26b828:
    // 0x26b828: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26b828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26b82c: 0xa2020002  sb          $v0, 0x2($s0)
    ctx->pc = 0x26b82cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x26b830: 0x3c040093  lui         $a0, 0x93
    ctx->pc = 0x26b830u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)147 << 16));
    // 0x26b834: 0x2402012c  addiu       $v0, $zero, 0x12C
    ctx->pc = 0x26b834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x26b838: 0x2484fee0  addiu       $a0, $a0, -0x120
    ctx->pc = 0x26b838u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967008));
    // 0x26b83c: 0xa6020010  sh          $v0, 0x10($s0)
    ctx->pc = 0x26b83cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x26b840: 0x8205000f  lb          $a1, 0xF($s0)
    ctx->pc = 0x26b840u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 15)));
    // 0x26b844: 0xc0f0154  jal         func_3C0550
    ctx->pc = 0x26B844u;
    SET_GPR_U32(ctx, 31, 0x26B84Cu);
    ctx->pc = 0x26B848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B844u;
    // 0x26b848: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C0550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C0550u, 0x26B844u, 0x26B84Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B84Cu;
label_26b84c:
    // 0x26b84c: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x26b84cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x26b850: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x26b850u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x26b854: 0x2484cbe0  addiu       $a0, $a0, -0x3420
    ctx->pc = 0x26b854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    // 0x26b858: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x26b858u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b85c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x26b85cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b860: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x26b860u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b864: 0xc063c70  jal         func_18F1C0
    ctx->pc = 0x26B864u;
    SET_GPR_U32(ctx, 31, 0x26B86Cu);
    ctx->pc = 0x26B868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B864u;
    // 0x26b868: 0x2409ffff  addiu       $t1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F1C0u, 0x26B864u, 0x26B86Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B86Cu;
label_26b86c:
    // 0x26b86c: 0x0  nop
    ctx->pc = 0x26b86cu;
    // NOP
label_26b870:
    // 0x26b870: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x26b870u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26b874: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x26b874u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26b878: 0x3e00008  jr          $ra
    ctx->pc = 0x26B878u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26B87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B878u;
        // 0x26b87c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26B878u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26B880u;
}
