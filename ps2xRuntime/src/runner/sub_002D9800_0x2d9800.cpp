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

// Function: sub_002D9800
// Address: 0x2d9800 - 0x2d9aa0
void sub_002D9800_0x2d9800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D9800_0x2d9800");
#endif

    switch (ctx->pc) {
        case 0x2d98e4u: goto label_2d98e4;
        case 0x2d9a90u: goto label_2d9a90;
        default: break;
    }

    ctx->pc = 0x2d9800u;

    // 0x2d9800: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d9800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d9804: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2d9804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2d9808: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d9808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d980c: 0x90860048  lbu         $a2, 0x48($a0)
    ctx->pc = 0x2d980cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x2d9810: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d9810u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9814: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x2d9814u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2d9818: 0x10c40085  beq         $a2, $a0, . + 4 + (0x85 << 2)
    ctx->pc = 0x2D9818u;
    {
        const bool branch_taken_0x2d9818 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        ctx->pc = 0x2D981Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9818u;
        // 0x2d981c: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9818) {
            ctx->pc = 0x2D9A30u;
            goto label_2d9a30;
        }
    }
    ctx->pc = 0x2D9820u;
    // 0x2d9820: 0x10c30081  beq         $a2, $v1, . + 4 + (0x81 << 2)
    ctx->pc = 0x2D9820u;
    {
        const bool branch_taken_0x2d9820 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x2D9824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9820u;
        // 0x2d9824: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9820) {
            ctx->pc = 0x2D9A28u;
            goto label_2d9a28;
        }
    }
    ctx->pc = 0x2D9828u;
    // 0x2d9828: 0x10c50043  beq         $a2, $a1, . + 4 + (0x43 << 2)
    ctx->pc = 0x2D9828u;
    {
        const bool branch_taken_0x2d9828 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        ctx->pc = 0x2D982Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9828u;
        // 0x2d982c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9828) {
            ctx->pc = 0x2D9938u;
            goto label_2d9938;
        }
    }
    ctx->pc = 0x2D9830u;
    // 0x2d9830: 0x10c30031  beq         $a2, $v1, . + 4 + (0x31 << 2)
    ctx->pc = 0x2D9830u;
    {
        const bool branch_taken_0x2d9830 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x2d9830) {
            ctx->pc = 0x2D98F8u;
            goto label_2d98f8;
        }
    }
    ctx->pc = 0x2D9838u;
    // 0x2d9838: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d9838u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d983c: 0x10c30004  beq         $a2, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D983Cu;
    {
        const bool branch_taken_0x2d983c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x2d983c) {
            ctx->pc = 0x2D9850u;
            goto label_2d9850;
        }
    }
    ctx->pc = 0x2D9844u;
    // 0x2d9844: 0x1000008c  b           . + 4 + (0x8C << 2)
    ctx->pc = 0x2D9844u;
    {
        const bool branch_taken_0x2d9844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d9844) {
            ctx->pc = 0x2D9A78u;
            goto label_2d9a78;
        }
    }
    ctx->pc = 0x2D984Cu;
    // 0x2d984c: 0x0  nop
    ctx->pc = 0x2d984cu;
    // NOP
label_2d9850:
    // 0x2d9850: 0x3c03004e  lui         $v1, 0x4E
    ctx->pc = 0x2d9850u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)78 << 16));
    // 0x2d9854: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x2d9854u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d9858: 0x24636660  addiu       $v1, $v1, 0x6660
    ctx->pc = 0x2d9858u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26208));
    // 0x2d985c: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x2d985cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x2d9860: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x2d9860u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d9864: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x2d9864u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x2d9868: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x2d9868u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d986c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x2d986cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2d9870: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x2d9870u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d9874: 0x84850006  lh          $a1, 0x6($a0)
    ctx->pc = 0x2d9874u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x2d9878: 0x306300fb  andi        $v1, $v1, 0xFB
    ctx->pc = 0x2d9878u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)251);
    // 0x2d987c: 0x84840008  lh          $a0, 0x8($a0)
    ctx->pc = 0x2d987cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2d9880: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x2d9880u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d9884: 0x42023  negu        $a0, $a0
    ctx->pc = 0x2d9884u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    // 0x2d9888: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x2d9888u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d988c: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x2d988cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x2d9890: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x2d9890u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d9894: 0xa6040008  sh          $a0, 0x8($s0)
    ctx->pc = 0x2d9894u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 4));
    // 0x2d9898: 0xa605000a  sh          $a1, 0xA($s0)
    ctx->pc = 0x2d9898u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 5));
    // 0x2d989c: 0xae00005c  sw          $zero, 0x5C($s0)
    ctx->pc = 0x2d989cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 0));
    // 0x2d98a0: 0x92030064  lbu         $v1, 0x64($s0)
    ctx->pc = 0x2d98a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x2d98a4: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2d98a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2d98a8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D98A8u;
    {
        const bool branch_taken_0x2d98a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d98a8) {
            ctx->pc = 0x2D98C0u;
            goto label_2d98c0;
        }
    }
    ctx->pc = 0x2D98B0u;
    // 0x2d98b0: 0x8e03005c  lw          $v1, 0x5C($s0)
    ctx->pc = 0x2d98b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x2d98b4: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x2d98b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x2d98b8: 0xae03005c  sw          $v1, 0x5C($s0)
    ctx->pc = 0x2d98b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 3));
    // 0x2d98bc: 0x0  nop
    ctx->pc = 0x2d98bcu;
    // NOP
label_2d98c0:
    // 0x2d98c0: 0x92030064  lbu         $v1, 0x64($s0)
    ctx->pc = 0x2d98c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x2d98c4: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x2d98c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x2d98c8: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D98C8u;
    {
        const bool branch_taken_0x2d98c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d98c8) {
            ctx->pc = 0x2D98E8u;
            goto label_2d98e8;
        }
    }
    ctx->pc = 0x2D98D0u;
    // 0x2d98d0: 0x8e02005c  lw          $v0, 0x5C($s0)
    ctx->pc = 0x2d98d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x2d98d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d98d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d98d8: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x2d98d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x2d98dc: 0xc0b66a8  jal         func_2D9AA0
    ctx->pc = 0x2D98DCu;
    SET_GPR_U32(ctx, 31, 0x2D98E4u);
    ctx->pc = 0x2D98E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D98DCu;
    // 0x2d98e0: 0xae02005c  sw          $v0, 0x5C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9AA0u, 0x2D98DCu, 0x2D98E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D98E4u;
label_2d98e4:
    // 0x2d98e4: 0x0  nop
    ctx->pc = 0x2d98e4u;
    // NOP
label_2d98e8:
    // 0x2d98e8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2d98e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d98ec: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x2D98ECu;
    {
        const bool branch_taken_0x2d98ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D98F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D98ECu;
        // 0x2d98f0: 0xa2030048  sb          $v1, 0x48($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 72), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d98ec) {
            ctx->pc = 0x2D9A78u;
            goto label_2d9a78;
        }
    }
    ctx->pc = 0x2D98F4u;
    // 0x2d98f4: 0x0  nop
    ctx->pc = 0x2d98f4u;
    // NOP
label_2d98f8:
    // 0x2d98f8: 0x86030008  lh          $v1, 0x8($s0)
    ctx->pc = 0x2d98f8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2d98fc: 0x2463000f  addiu       $v1, $v1, 0xF
    ctx->pc = 0x2d98fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x2d9900: 0xa6030008  sh          $v1, 0x8($s0)
    ctx->pc = 0x2d9900u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x2d9904: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x2d9904u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2d9908: 0x86030008  lh          $v1, 0x8($s0)
    ctx->pc = 0x2d9908u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2d990c: 0x84840004  lh          $a0, 0x4($a0)
    ctx->pc = 0x2d990cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2d9910: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x2d9910u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2d9914: 0x10200058  beqz        $at, . + 4 + (0x58 << 2)
    ctx->pc = 0x2D9914u;
    {
        const bool branch_taken_0x2d9914 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d9914) {
            ctx->pc = 0x2D9A78u;
            goto label_2d9a78;
        }
    }
    ctx->pc = 0x2D991Cu;
    // 0x2d991c: 0xa6040008  sh          $a0, 0x8($s0)
    ctx->pc = 0x2d991cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 4));
    // 0x2d9920: 0xa2050048  sb          $a1, 0x48($s0)
    ctx->pc = 0x2d9920u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 72), (uint8_t)GPR_U32(ctx, 5));
    // 0x2d9924: 0x8e03005c  lw          $v1, 0x5C($s0)
    ctx->pc = 0x2d9924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x2d9928: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x2d9928u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x2d992c: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x2D992Cu;
    {
        const bool branch_taken_0x2d992c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D992Cu;
        // 0x2d9930: 0xae03005c  sw          $v1, 0x5C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d992c) {
            ctx->pc = 0x2D9A78u;
            goto label_2d9a78;
        }
    }
    ctx->pc = 0x2D9934u;
    // 0x2d9934: 0x0  nop
    ctx->pc = 0x2d9934u;
    // NOP
label_2d9938:
    // 0x2d9938: 0x96030054  lhu         $v1, 0x54($s0)
    ctx->pc = 0x2d9938u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x2d993c: 0x28610258  slti        $at, $v1, 0x258
    ctx->pc = 0x2d993cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)600) ? 1 : 0);
    // 0x2d9940: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D9940u;
    {
        const bool branch_taken_0x2d9940 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d9940) {
            ctx->pc = 0x2D9958u;
            goto label_2d9958;
        }
    }
    ctx->pc = 0x2D9948u;
    // 0x2d9948: 0x8e03005c  lw          $v1, 0x5C($s0)
    ctx->pc = 0x2d9948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x2d994c: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x2d994cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x2d9950: 0xae03005c  sw          $v1, 0x5C($s0)
    ctx->pc = 0x2d9950u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 3));
    // 0x2d9954: 0x0  nop
    ctx->pc = 0x2d9954u;
    // NOP
label_2d9958:
    // 0x2d9958: 0x9203004b  lbu         $v1, 0x4B($s0)
    ctx->pc = 0x2d9958u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 75)));
    // 0x2d995c: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x2d995cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x2d9960: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x2D9960u;
    {
        const bool branch_taken_0x2d9960 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9960u;
        // 0x2d9964: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9960) {
            ctx->pc = 0x2D9990u;
            goto label_2d9990;
        }
    }
    ctx->pc = 0x2D9968u;
    // 0x2d9968: 0x2404fffe  addiu       $a0, $zero, -0x2
    ctx->pc = 0x2d9968u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x2d996c: 0xa2030048  sb          $v1, 0x48($s0)
    ctx->pc = 0x2d996cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 72), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d9970: 0x8e05005c  lw          $a1, 0x5C($s0)
    ctx->pc = 0x2d9970u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x2d9974: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x2d9974u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x2d9978: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x2d9978u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x2d997c: 0xae04005c  sw          $a0, 0x5C($s0)
    ctx->pc = 0x2d997cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 4));
    // 0x2d9980: 0x8e04005c  lw          $a0, 0x5C($s0)
    ctx->pc = 0x2d9980u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x2d9984: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2d9984u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2d9988: 0xae03005c  sw          $v1, 0x5C($s0)
    ctx->pc = 0x2d9988u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 3));
    // 0x2d998c: 0x0  nop
    ctx->pc = 0x2d998cu;
    // NOP
label_2d9990:
    // 0x2d9990: 0x96040056  lhu         $a0, 0x56($s0)
    ctx->pc = 0x2d9990u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 86)));
    // 0x2d9994: 0x3c0351eb  lui         $v1, 0x51EB
    ctx->pc = 0x2d9994u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20971 << 16));
    // 0x2d9998: 0x3463851f  ori         $v1, $v1, 0x851F
    ctx->pc = 0x2d9998u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34079);
    // 0x2d999c: 0x640018  mult        $zero, $v1, $a0
    ctx->pc = 0x2d999cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x2d99a0: 0x0  nop
    ctx->pc = 0x2d99a0u;
    // NOP
    // 0x2d99a4: 0x0  nop
    ctx->pc = 0x2d99a4u;
    // NOP
    // 0x2d99a8: 0x1810  mfhi        $v1
    ctx->pc = 0x2d99a8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2d99ac: 0x427c2  srl         $a0, $a0, 31
    ctx->pc = 0x2d99acu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x2d99b0: 0x31943  sra         $v1, $v1, 5
    ctx->pc = 0x2d99b0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
    // 0x2d99b4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2d99b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2d99b8: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x2d99b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2d99bc: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2D99BCu;
    {
        const bool branch_taken_0x2d99bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d99bc) {
            ctx->pc = 0x2D99C8u;
            goto label_2d99c8;
        }
    }
    ctx->pc = 0x2D99C4u;
    // 0x2d99c4: 0x64030001  daddiu      $v1, $zero, 0x1
    ctx->pc = 0x2d99c4u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_2d99c8:
    // 0x2d99c8: 0x9606005a  lhu         $a2, 0x5A($s0)
    ctx->pc = 0x2d99c8u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 90)));
    // 0x2d99cc: 0x96050058  lhu         $a1, 0x58($s0)
    ctx->pc = 0x2d99ccu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x2d99d0: 0xc5082a  slt         $at, $a2, $a1
    ctx->pc = 0x2d99d0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2d99d4: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D99D4u;
    {
        const bool branch_taken_0x2d99d4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D99D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D99D4u;
        // 0x2d99d8: 0x3064ffff  andi        $a0, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d99d4) {
            ctx->pc = 0x2D99F8u;
            goto label_2d99f8;
        }
    }
    ctx->pc = 0x2D99DCu;
    // 0x2d99dc: 0xa41823  subu        $v1, $a1, $a0
    ctx->pc = 0x2d99dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2d99e0: 0xc3082a  slt         $at, $a2, $v1
    ctx->pc = 0x2d99e0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2d99e4: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x2D99E4u;
    {
        const bool branch_taken_0x2d99e4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d99e4) {
            ctx->pc = 0x2D99F0u;
            goto label_2d99f0;
        }
    }
    ctx->pc = 0x2D99ECu;
    // 0x2d99ec: 0xc42821  addu        $a1, $a2, $a0
    ctx->pc = 0x2d99ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_2d99f0:
    // 0x2d99f0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2D99F0u;
    {
        const bool branch_taken_0x2d99f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D99F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D99F0u;
        // 0x2d99f4: 0x30a6ffff  andi        $a2, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d99f0) {
            ctx->pc = 0x2D9A20u;
            goto label_2d9a20;
        }
    }
    ctx->pc = 0x2D99F8u;
label_2d99f8:
    // 0x2d99f8: 0xa6082a  slt         $at, $a1, $a2
    ctx->pc = 0x2d99f8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x2d99fc: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D99FCu;
    {
        const bool branch_taken_0x2d99fc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D99FCu;
        // 0x2d9a00: 0x3064ffff  andi        $a0, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d99fc) {
            ctx->pc = 0x2D9A20u;
            goto label_2d9a20;
        }
    }
    ctx->pc = 0x2D9A04u;
    // 0x2d9a04: 0xa41821  addu        $v1, $a1, $a0
    ctx->pc = 0x2d9a04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2d9a08: 0x66082a  slt         $at, $v1, $a2
    ctx->pc = 0x2d9a08u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x2d9a0c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x2D9A0Cu;
    {
        const bool branch_taken_0x2d9a0c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d9a0c) {
            ctx->pc = 0x2D9A18u;
            goto label_2d9a18;
        }
    }
    ctx->pc = 0x2D9A14u;
    // 0x2d9a14: 0xc42823  subu        $a1, $a2, $a0
    ctx->pc = 0x2d9a14u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_2d9a18:
    // 0x2d9a18: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x2D9A18u;
    {
        const bool branch_taken_0x2d9a18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9A18u;
        // 0x2d9a1c: 0x30a6ffff  andi        $a2, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9a18) {
            ctx->pc = 0x2D9A20u;
            goto label_2d9a20;
        }
    }
    ctx->pc = 0x2D9A20u;
label_2d9a20:
    // 0x2d9a20: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2D9A20u;
    {
        const bool branch_taken_0x2d9a20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9A20u;
        // 0x2d9a24: 0xa606005a  sh          $a2, 0x5A($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 90), (uint16_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9a20) {
            ctx->pc = 0x2D9A78u;
            goto label_2d9a78;
        }
    }
    ctx->pc = 0x2D9A28u;
label_2d9a28:
    // 0x2d9a28: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2D9A28u;
    {
        const bool branch_taken_0x2d9a28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9A28u;
        // 0x2d9a2c: 0xa2040048  sb          $a0, 0x48($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 72), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9a28) {
            ctx->pc = 0x2D9A78u;
            goto label_2d9a78;
        }
    }
    ctx->pc = 0x2D9A30u;
label_2d9a30:
    // 0x2d9a30: 0x86030008  lh          $v1, 0x8($s0)
    ctx->pc = 0x2d9a30u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2d9a34: 0x2463fff1  addiu       $v1, $v1, -0xF
    ctx->pc = 0x2d9a34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967281));
    // 0x2d9a38: 0xa6030008  sh          $v1, 0x8($s0)
    ctx->pc = 0x2d9a38u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x2d9a3c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x2d9a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2d9a40: 0x86040008  lh          $a0, 0x8($s0)
    ctx->pc = 0x2d9a40u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2d9a44: 0x84630008  lh          $v1, 0x8($v1)
    ctx->pc = 0x2d9a44u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2d9a48: 0x31823  negu        $v1, $v1
    ctx->pc = 0x2d9a48u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x2d9a4c: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x2d9a4cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2d9a50: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x2D9A50u;
    {
        const bool branch_taken_0x2d9a50 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d9a50) {
            ctx->pc = 0x2D9A78u;
            goto label_2d9a78;
        }
    }
    ctx->pc = 0x2D9A58u;
    // 0x2d9a58: 0x9203004b  lbu         $v1, 0x4B($s0)
    ctx->pc = 0x2d9a58u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 75)));
    // 0x2d9a5c: 0x306300fd  andi        $v1, $v1, 0xFD
    ctx->pc = 0x2d9a5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)253);
    // 0x2d9a60: 0xa203004b  sb          $v1, 0x4B($s0)
    ctx->pc = 0x2d9a60u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 75), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d9a64: 0xa2000048  sb          $zero, 0x48($s0)
    ctx->pc = 0x2d9a64u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 72), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d9a68: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x2d9a68u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d9a6c: 0x306300fe  andi        $v1, $v1, 0xFE
    ctx->pc = 0x2d9a6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)254);
    // 0x2d9a70: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x2d9a70u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d9a74: 0x0  nop
    ctx->pc = 0x2d9a74u;
    // NOP
label_2d9a78:
    // 0x2d9a78: 0x8e03005c  lw          $v1, 0x5C($s0)
    ctx->pc = 0x2d9a78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x2d9a7c: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x2d9a7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x2d9a80: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D9A80u;
    {
        const bool branch_taken_0x2d9a80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9A80u;
        // 0x2d9a84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9a80) {
            ctx->pc = 0x2D9A90u;
            goto label_2d9a90;
        }
    }
    ctx->pc = 0x2D9A88u;
    // 0x2d9a88: 0xc0b66b0  jal         func_2D9AC0
    ctx->pc = 0x2D9A88u;
    SET_GPR_U32(ctx, 31, 0x2D9A90u);
    ctx->pc = 0x2D9AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9AC0u, 0x2D9A88u, 0x2D9A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9A90u;
label_2d9a90:
    // 0x2d9a90: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2d9a90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d9a94: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d9a94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d9a98: 0x3e00008  jr          $ra
    ctx->pc = 0x2D9A98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D9A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9A98u;
        // 0x2d9a9c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D9A98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D9AA0u;
}
