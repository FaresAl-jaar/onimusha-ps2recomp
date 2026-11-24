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

// Function: sub_003600A0
// Address: 0x3600a0 - 0x360310
void sub_003600A0_0x3600a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003600A0_0x3600a0");
#endif

    switch (ctx->pc) {
        case 0x3600d0u: goto label_3600d0;
        case 0x360104u: goto label_360104;
        case 0x36012cu: goto label_36012c;
        case 0x360148u: goto label_360148;
        case 0x360178u: goto label_360178;
        case 0x3601a0u: goto label_3601a0;
        case 0x3601a8u: goto label_3601a8;
        case 0x3601d8u: goto label_3601d8;
        case 0x3601e8u: goto label_3601e8;
        case 0x36025cu: goto label_36025c;
        case 0x36027cu: goto label_36027c;
        case 0x3602c0u: goto label_3602c0;
        case 0x3602f4u: goto label_3602f4;
        default: break;
    }

    ctx->pc = 0x3600a0u;

    // 0x3600a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3600a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3600a4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3600a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3600a8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3600a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3600ac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3600acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3600b0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3600b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3600b4: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x3600b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x3600b8: 0x1060008f  beqz        $v1, . + 4 + (0x8F << 2)
    ctx->pc = 0x3600B8u;
    {
        const bool branch_taken_0x3600b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3600BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3600B8u;
        // 0x3600bc: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3600b8) {
            ctx->pc = 0x3602F8u;
            goto label_3602f8;
        }
    }
    ctx->pc = 0x3600C0u;
    // 0x3600c0: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x3600c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x3600c4: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x3600c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3600c8: 0xc05e360  jal         func_178D80
    ctx->pc = 0x3600C8u;
    SET_GPR_U32(ctx, 31, 0x3600D0u);
    ctx->pc = 0x3600CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3600C8u;
    // 0x3600cc: 0x2484cea0  addiu       $a0, $a0, -0x3160 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178D80u, 0x3600C8u, 0x3600D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3600D0u;
label_3600d0:
    // 0x3600d0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x3600D0u;
    {
        const bool branch_taken_0x3600d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3600D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3600D0u;
        // 0x3600d4: 0x3c048000  lui         $a0, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3600d0) {
            ctx->pc = 0x360108u;
            goto label_360108;
        }
    }
    ctx->pc = 0x3600D8u;
    // 0x3600d8: 0x3c030410  lui         $v1, 0x410
    ctx->pc = 0x3600d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1040 << 16));
    // 0x3600dc: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x3600dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x3600e0: 0x34630014  ori         $v1, $v1, 0x14
    ctx->pc = 0x3600e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)20);
    // 0x3600e4: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x3600e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x3600e8: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3600e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3600ec: 0x24030061  addiu       $v1, $zero, 0x61
    ctx->pc = 0x3600ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
    // 0x3600f0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3600f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3600f4: 0xfc430008  sd          $v1, 0x8($v0)
    ctx->pc = 0x3600f4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
    // 0x3600f8: 0x2484cc60  addiu       $a0, $a0, -0x33A0
    ctx->pc = 0x3600f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954080));
    // 0x3600fc: 0xc04fb2c  jal         func_13ECB0
    ctx->pc = 0x3600FCu;
    SET_GPR_U32(ctx, 31, 0x360104u);
    ctx->pc = 0x360100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3600FCu;
    // 0x360100: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECB0u, 0x3600FCu, 0x360104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360104u;
label_360104:
    // 0x360104: 0x0  nop
    ctx->pc = 0x360104u;
    // NOP
label_360108:
    // 0x360108: 0x92420008  lbu         $v0, 0x8($s2)
    ctx->pc = 0x360108u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x36010c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x36010cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x360110: 0xa2420008  sb          $v0, 0x8($s2)
    ctx->pc = 0x360110u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 8), (uint8_t)GPR_U32(ctx, 2));
    // 0x360114: 0x92420002  lbu         $v0, 0x2($s2)
    ctx->pc = 0x360114u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x360118: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x360118u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x36011c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x36011Cu;
    {
        const bool branch_taken_0x36011c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x360120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36011Cu;
        // 0x360120: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36011c) {
            ctx->pc = 0x360130u;
            goto label_360130;
        }
    }
    ctx->pc = 0x360124u;
    // 0x360124: 0xc0d8334  jal         func_360CD0
    ctx->pc = 0x360124u;
    SET_GPR_U32(ctx, 31, 0x36012Cu);
    ctx->pc = 0x360128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360124u;
    // 0x360128: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x360CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x360CD0u, 0x360124u, 0x36012Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36012Cu;
label_36012c:
    // 0x36012c: 0x0  nop
    ctx->pc = 0x36012cu;
    // NOP
label_360130:
    // 0x360130: 0x92420002  lbu         $v0, 0x2($s2)
    ctx->pc = 0x360130u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x360134: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x360134u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x360138: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x360138u;
    {
        const bool branch_taken_0x360138 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36013Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x360138u;
        // 0x36013c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x360138) {
            ctx->pc = 0x360148u;
            goto label_360148;
        }
    }
    ctx->pc = 0x360140u;
    // 0x360140: 0xc0d8334  jal         func_360CD0
    ctx->pc = 0x360140u;
    SET_GPR_U32(ctx, 31, 0x360148u);
    ctx->pc = 0x360144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360140u;
    // 0x360144: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x360CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x360CD0u, 0x360140u, 0x360148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360148u;
label_360148:
    // 0x360148: 0x92420002  lbu         $v0, 0x2($s2)
    ctx->pc = 0x360148u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x36014c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x36014cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x360150: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x360150u;
    {
        const bool branch_taken_0x360150 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x360154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x360150u;
        // 0x360154: 0x3c01008d  lui         $at, 0x8D (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x360150) {
            ctx->pc = 0x3601A0u;
            goto label_3601a0;
        }
    }
    ctx->pc = 0x360158u;
    // 0x360158: 0x27828060  addiu       $v0, $gp, -0x7FA0
    ctx->pc = 0x360158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x36015c: 0x90236c1c  lbu         $v1, 0x6C1C($at)
    ctx->pc = 0x36015cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 27676)));
    // 0x360160: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x360160u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360164: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x360164u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x360168: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x360168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x36016c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x36016cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x360170: 0xc0d82b0  jal         func_360AC0
    ctx->pc = 0x360170u;
    SET_GPR_U32(ctx, 31, 0x360178u);
    ctx->pc = 0x360174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360170u;
    // 0x360174: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x360AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x360AC0u, 0x360170u, 0x360178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360178u;
label_360178:
    // 0x360178: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x360178u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x36017c: 0x27828060  addiu       $v0, $gp, -0x7FA0
    ctx->pc = 0x36017cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x360180: 0x90236c1c  lbu         $v1, 0x6C1C($at)
    ctx->pc = 0x360180u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x360184: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x360184u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360188: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x360188u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x36018c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x36018cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x360190: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x360190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x360194: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x360194u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x360198: 0xc0d82b0  jal         func_360AC0
    ctx->pc = 0x360198u;
    SET_GPR_U32(ctx, 31, 0x3601A0u);
    ctx->pc = 0x36019Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360198u;
    // 0x36019c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x360AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x360AC0u, 0x360198u, 0x3601A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3601A0u;
label_3601a0:
    // 0x3601a0: 0xc0d839c  jal         func_360E70
    ctx->pc = 0x3601A0u;
    SET_GPR_U32(ctx, 31, 0x3601A8u);
    ctx->pc = 0x3601A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3601A0u;
    // 0x3601a4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x360E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x360E70u, 0x3601A0u, 0x3601A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3601A8u;
label_3601a8:
    // 0x3601a8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x3601a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3601ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3601acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3601b0: 0x1462003f  bne         $v1, $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x3601B0u;
    {
        const bool branch_taken_0x3601b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3601b0) {
            ctx->pc = 0x3602B0u;
            goto label_3602b0;
        }
    }
    ctx->pc = 0x3601B8u;
    // 0x3601b8: 0x86430004  lh          $v1, 0x4($s2)
    ctx->pc = 0x3601b8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x3601bc: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x3601bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x3601c0: 0x1062003b  beq         $v1, $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x3601C0u;
    {
        const bool branch_taken_0x3601c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3601c0) {
            ctx->pc = 0x3602B0u;
            goto label_3602b0;
        }
    }
    ctx->pc = 0x3601C8u;
    // 0x3601c8: 0x86421fae  lh          $v0, 0x1FAE($s2)
    ctx->pc = 0x3601c8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 8110)));
    // 0x3601cc: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x3601ccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3601d0: 0x10200037  beqz        $at, . + 4 + (0x37 << 2)
    ctx->pc = 0x3601D0u;
    {
        const bool branch_taken_0x3601d0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3601D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3601D0u;
        // 0x3601d4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3601d0) {
            ctx->pc = 0x3602B0u;
            goto label_3602b0;
        }
    }
    ctx->pc = 0x3601D8u;
label_3601d8:
    // 0x3601d8: 0x86421fac  lh          $v0, 0x1FAC($s2)
    ctx->pc = 0x3601d8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 8108)));
    // 0x3601dc: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x3601dcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3601e0: 0x1020002d  beqz        $at, . + 4 + (0x2D << 2)
    ctx->pc = 0x3601E0u;
    {
        const bool branch_taken_0x3601e0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3601E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3601E0u;
        // 0x3601e4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3601e0) {
            ctx->pc = 0x360298u;
            goto label_360298;
        }
    }
    ctx->pc = 0x3601E8u;
label_3601e8:
    // 0x3601e8: 0x86430004  lh          $v1, 0x4($s2)
    ctx->pc = 0x3601e8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x3601ec: 0x111143  sra         $v0, $s1, 5
    ctx->pc = 0x3601ecu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 17), 5));
    // 0x3601f0: 0x319c0  sll         $v1, $v1, 7
    ctx->pc = 0x3601f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x3601f4: 0x6210003  bgez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3601F4u;
    {
        const bool branch_taken_0x3601f4 = (GPR_S64(ctx, 17) >= 0);
        ctx->pc = 0x3601F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3601F4u;
        // 0x3601f8: 0x2432821  addu        $a1, $s2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3601f4) {
            ctx->pc = 0x360204u;
            goto label_360204;
        }
    }
    ctx->pc = 0x3601FCu;
    // 0x3601fc: 0x2622001f  addiu       $v0, $s1, 0x1F
    ctx->pc = 0x3601fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 31));
    // 0x360200: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x360200u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
label_360204:
    // 0x360204: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x360204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x360208: 0x3223001f  andi        $v1, $s1, 0x1F
    ctx->pc = 0x360208u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)31);
    // 0x36020c: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x36020cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x360210: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x360210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x360214: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x360214u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x360218: 0x621804  sllv        $v1, $v0, $v1
    ctx->pc = 0x360218u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x36021c: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x36021cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x360220: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x360220u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x360224: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x360224u;
    {
        const bool branch_taken_0x360224 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x360228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x360224u;
        // 0x360228: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x360224) {
            ctx->pc = 0x360280u;
            goto label_360280;
        }
    }
    ctx->pc = 0x36022Cu;
    // 0x36022c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x36022cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x360230: 0x9023fc8c  lbu         $v1, -0x374($at)
    ctx->pc = 0x360230u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294966412)));
    // 0x360234: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x360234u;
    {
        const bool branch_taken_0x360234 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x360234) {
            ctx->pc = 0x360268u;
            goto label_360268;
        }
    }
    ctx->pc = 0x36023Cu;
    // 0x36023c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x36023cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x360240: 0x8c22ceb8  lw          $v0, -0x3148($at)
    ctx->pc = 0x360240u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x81CEB8u));
    // 0x360244: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x360244u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x360248: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x360248u;
    {
        const bool branch_taken_0x360248 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36024Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x360248u;
        // 0x36024c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x360248) {
            ctx->pc = 0x360268u;
            goto label_360268;
        }
    }
    ctx->pc = 0x360250u;
    // 0x360250: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x360250u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360254: 0xc0d80c4  jal         func_360310
    ctx->pc = 0x360254u;
    SET_GPR_U32(ctx, 31, 0x36025Cu);
    ctx->pc = 0x360258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360254u;
    // 0x360258: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x360310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x360310u, 0x360254u, 0x36025Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36025Cu;
label_36025c:
    // 0x36025c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x36025Cu;
    {
        const bool branch_taken_0x36025c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36025c) {
            ctx->pc = 0x360280u;
            goto label_360280;
        }
    }
    ctx->pc = 0x360264u;
    // 0x360264: 0x0  nop
    ctx->pc = 0x360264u;
    // NOP
label_360268:
    // 0x360268: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x360268u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36026c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x36026cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360270: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x360270u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360274: 0xc0d813c  jal         func_3604F0
    ctx->pc = 0x360274u;
    SET_GPR_U32(ctx, 31, 0x36027Cu);
    ctx->pc = 0x360278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360274u;
    // 0x360278: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3604F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3604F0u, 0x360274u, 0x36027Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36027Cu;
label_36027c:
    // 0x36027c: 0x0  nop
    ctx->pc = 0x36027cu;
    // NOP
label_360280:
    // 0x360280: 0x86421fac  lh          $v0, 0x1FAC($s2)
    ctx->pc = 0x360280u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 8108)));
    // 0x360284: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x360284u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x360288: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x360288u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x36028c: 0x1440ffd6  bnez        $v0, . + 4 + (-0x2A << 2)
    ctx->pc = 0x36028Cu;
    {
        const bool branch_taken_0x36028c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x36028c) {
            ctx->pc = 0x3601E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3601e8;
        }
    }
    ctx->pc = 0x360294u;
    // 0x360294: 0x0  nop
    ctx->pc = 0x360294u;
    // NOP
label_360298:
    // 0x360298: 0x86421fae  lh          $v0, 0x1FAE($s2)
    ctx->pc = 0x360298u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 8110)));
    // 0x36029c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x36029cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3602a0: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x3602a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3602a4: 0x1440ffcc  bnez        $v0, . + 4 + (-0x34 << 2)
    ctx->pc = 0x3602A4u;
    {
        const bool branch_taken_0x3602a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3602a4) {
            ctx->pc = 0x3601D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3601d8;
        }
    }
    ctx->pc = 0x3602ACu;
    // 0x3602ac: 0x0  nop
    ctx->pc = 0x3602acu;
    // NOP
label_3602b0:
    // 0x3602b0: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x3602b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x3602b4: 0x2484cea0  addiu       $a0, $a0, -0x3160
    ctx->pc = 0x3602b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954656));
    // 0x3602b8: 0xc05e360  jal         func_178D80
    ctx->pc = 0x3602B8u;
    SET_GPR_U32(ctx, 31, 0x3602C0u);
    ctx->pc = 0x3602BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3602B8u;
    // 0x3602bc: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178D80u, 0x3602B8u, 0x3602C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3602C0u;
label_3602c0:
    // 0x3602c0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3602c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3602c4: 0x10a0000c  beqz        $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x3602C4u;
    {
        const bool branch_taken_0x3602c4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3602C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3602C4u;
        // 0x3602c8: 0x3c038000  lui         $v1, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3602c4) {
            ctx->pc = 0x3602F8u;
            goto label_3602f8;
        }
    }
    ctx->pc = 0x3602CCu;
    // 0x3602cc: 0x3c020410  lui         $v0, 0x410
    ctx->pc = 0x3602ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1040 << 16));
    // 0x3602d0: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x3602d0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x3602d4: 0x34420014  ori         $v0, $v0, 0x14
    ctx->pc = 0x3602d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20);
    // 0x3602d8: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x3602d8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x3602dc: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3602dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3602e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3602e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3602e4: 0x2484cc60  addiu       $a0, $a0, -0x33A0
    ctx->pc = 0x3602e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954080));
    // 0x3602e8: 0xfca20008  sd          $v0, 0x8($a1)
    ctx->pc = 0x3602e8u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 2));
    // 0x3602ec: 0xc04fb2c  jal         func_13ECB0
    ctx->pc = 0x3602ECu;
    SET_GPR_U32(ctx, 31, 0x3602F4u);
    ctx->pc = 0x3602F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3602ECu;
    // 0x3602f0: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECB0u, 0x3602ECu, 0x3602F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3602F4u;
label_3602f4:
    // 0x3602f4: 0x0  nop
    ctx->pc = 0x3602f4u;
    // NOP
label_3602f8:
    // 0x3602f8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3602f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3602fc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3602fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x360300: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x360300u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x360304: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x360304u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x360308: 0x3e00008  jr          $ra
    ctx->pc = 0x360308u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36030Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x360308u;
        // 0x36030c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x360308u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x360310u;
}
