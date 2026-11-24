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

// Function: sub_0032A910
// Address: 0x32a910 - 0x32b930
void sub_0032A910_0x32a910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032A910_0x32a910");
#endif

    switch (ctx->pc) {
        case 0x32a9c0u: goto label_32a9c0;
        case 0x32a9e8u: goto label_32a9e8;
        case 0x32ad24u: goto label_32ad24;
        case 0x32ae10u: goto label_32ae10;
        case 0x32af98u: goto label_32af98;
        case 0x32b070u: goto label_32b070;
        case 0x32b1acu: goto label_32b1ac;
        case 0x32b1f8u: goto label_32b1f8;
        case 0x32b220u: goto label_32b220;
        case 0x32b270u: goto label_32b270;
        case 0x32b284u: goto label_32b284;
        case 0x32b348u: goto label_32b348;
        case 0x32b368u: goto label_32b368;
        case 0x32b388u: goto label_32b388;
        case 0x32b454u: goto label_32b454;
        case 0x32b518u: goto label_32b518;
        case 0x32b538u: goto label_32b538;
        case 0x32b60cu: goto label_32b60c;
        case 0x32b644u: goto label_32b644;
        case 0x32b658u: goto label_32b658;
        case 0x32b804u: goto label_32b804;
        case 0x32b844u: goto label_32b844;
        case 0x32b854u: goto label_32b854;
        case 0x32b8bcu: goto label_32b8bc;
        case 0x32b8d0u: goto label_32b8d0;
        case 0x32b908u: goto label_32b908;
        default: break;
    }

    ctx->pc = 0x32a910u;

    // 0x32a910: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x32a910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x32a914: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x32a914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x32a918: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x32a918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x32a91c: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x32a91cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x32a920: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x32a920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x32a924: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x32a924u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x32a928: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x32a928u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32a92c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x32a92cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x32a930: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x32a930u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x32a934: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x32a934u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x32a938: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x32a938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x32a93c: 0x106003f2  beqz        $v1, . + 4 + (0x3F2 << 2)
    ctx->pc = 0x32A93Cu;
    {
        const bool branch_taken_0x32a93c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x32A940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A93Cu;
        // 0x32a940: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a93c) {
            ctx->pc = 0x32B908u;
            goto label_32b908;
        }
    }
    ctx->pc = 0x32A944u;
    // 0x32a944: 0x92850000  lbu         $a1, 0x0($s4)
    ctx->pc = 0x32a944u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x32a948: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x32a948u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x32a94c: 0x10a303ee  beq         $a1, $v1, . + 4 + (0x3EE << 2)
    ctx->pc = 0x32A94Cu;
    {
        const bool branch_taken_0x32a94c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x32A950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A94Cu;
        // 0x32a950: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a94c) {
            ctx->pc = 0x32B908u;
            goto label_32b908;
        }
    }
    ctx->pc = 0x32A954u;
    // 0x32a954: 0x10a30004  beq         $a1, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x32A954u;
    {
        const bool branch_taken_0x32a954 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x32a954) {
            ctx->pc = 0x32A968u;
            goto label_32a968;
        }
    }
    ctx->pc = 0x32A95Cu;
    // 0x32a95c: 0x100003ea  b           . + 4 + (0x3EA << 2)
    ctx->pc = 0x32A95Cu;
    {
        const bool branch_taken_0x32a95c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32a95c) {
            ctx->pc = 0x32B908u;
            goto label_32b908;
        }
    }
    ctx->pc = 0x32A964u;
    // 0x32a964: 0x0  nop
    ctx->pc = 0x32a964u;
    // NOP
label_32a968:
    // 0x32a968: 0x9282000c  lbu         $v0, 0xC($s4)
    ctx->pc = 0x32a968u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x32a96c: 0x104000f2  beqz        $v0, . + 4 + (0xF2 << 2)
    ctx->pc = 0x32A96Cu;
    {
        const bool branch_taken_0x32a96c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32a96c) {
            ctx->pc = 0x32AD38u;
            goto label_32ad38;
        }
    }
    ctx->pc = 0x32A974u;
    // 0x32a974: 0x9282000d  lbu         $v0, 0xD($s4)
    ctx->pc = 0x32a974u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 13)));
    // 0x32a978: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x32a978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x32a97c: 0xa282000d  sb          $v0, 0xD($s4)
    ctx->pc = 0x32a97cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 13), (uint8_t)GPR_U32(ctx, 2));
    // 0x32a980: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x32a980u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x32a984: 0x1c4000ec  bgtz        $v0, . + 4 + (0xEC << 2)
    ctx->pc = 0x32A984u;
    {
        const bool branch_taken_0x32a984 = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x32a984) {
            ctx->pc = 0x32AD38u;
            goto label_32ad38;
        }
    }
    ctx->pc = 0x32A98Cu;
    // 0x32a98c: 0x92820005  lbu         $v0, 0x5($s4)
    ctx->pc = 0x32a98cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 5)));
    // 0x32a990: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x32a990u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x32a994: 0x92860004  lbu         $a2, 0x4($s4)
    ctx->pc = 0x32a994u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x32a998: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x32a998u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32a99c: 0x9283000e  lbu         $v1, 0xE($s4)
    ctx->pc = 0x32a99cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 14)));
    // 0x32a9a0: 0x92870006  lbu         $a3, 0x6($s4)
    ctx->pc = 0x32a9a0u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 6)));
    // 0x32a9a4: 0x96880002  lhu         $t0, 0x2($s4)
    ctx->pc = 0x32a9a4u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x32a9a8: 0x30420006  andi        $v0, $v0, 0x6
    ctx->pc = 0x32a9a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)6);
    // 0x32a9ac: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x32a9acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x32a9b0: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x32a9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x32a9b4: 0x304900ff  andi        $t1, $v0, 0xFF
    ctx->pc = 0x32a9b4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x32a9b8: 0xc0cae4c  jal         func_32B930
    ctx->pc = 0x32A9B8u;
    SET_GPR_U32(ctx, 31, 0x32A9C0u);
    ctx->pc = 0x32A9BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A9B8u;
    // 0x32a9bc: 0x306600ff  andi        $a2, $v1, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x32B930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32B930u, 0x32A9B8u, 0x32A9C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A9C0u;
label_32a9c0:
    // 0x32a9c0: 0x96820154  lhu         $v0, 0x154($s4)
    ctx->pc = 0x32a9c0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 340)));
    // 0x32a9c4: 0xa282000d  sb          $v0, 0xD($s4)
    ctx->pc = 0x32a9c4u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 13), (uint8_t)GPR_U32(ctx, 2));
    // 0x32a9c8: 0x9282000e  lbu         $v0, 0xE($s4)
    ctx->pc = 0x32a9c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 14)));
    // 0x32a9cc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x32a9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x32a9d0: 0xa282000e  sb          $v0, 0xE($s4)
    ctx->pc = 0x32a9d0u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 14), (uint8_t)GPR_U32(ctx, 2));
    // 0x32a9d4: 0x9282000c  lbu         $v0, 0xC($s4)
    ctx->pc = 0x32a9d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x32a9d8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x32a9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x32a9dc: 0x100000d6  b           . + 4 + (0xD6 << 2)
    ctx->pc = 0x32A9DCu;
    {
        const bool branch_taken_0x32a9dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32A9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A9DCu;
        // 0x32a9e0: 0xa282000c  sb          $v0, 0xC($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 12), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a9dc) {
            ctx->pc = 0x32AD38u;
            goto label_32ad38;
        }
    }
    ctx->pc = 0x32A9E4u;
    // 0x32a9e4: 0x0  nop
    ctx->pc = 0x32a9e4u;
    // NOP
label_32a9e8:
    // 0x32a9e8: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x32a9e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x32a9ec: 0x12030304  beq         $s0, $v1, . + 4 + (0x304 << 2)
    ctx->pc = 0x32A9ECu;
    {
        const bool branch_taken_0x32a9ec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x32A9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A9ECu;
        // 0x32a9f0: 0x94420002  lhu         $v0, 0x2($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a9ec) {
            ctx->pc = 0x32B600u;
            goto label_32b600;
        }
    }
    ctx->pc = 0x32A9F4u;
    // 0x32a9f4: 0x3403fff7  ori         $v1, $zero, 0xFFF7
    ctx->pc = 0x32a9f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65527);
    // 0x32a9f8: 0x120300c7  beq         $s0, $v1, . + 4 + (0xC7 << 2)
    ctx->pc = 0x32A9F8u;
    {
        const bool branch_taken_0x32a9f8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x32A9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A9F8u;
        // 0x32a9fc: 0x3403fff6  ori         $v1, $zero, 0xFFF6 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65526);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a9f8) {
            ctx->pc = 0x32AD18u;
            goto label_32ad18;
        }
    }
    ctx->pc = 0x32AA00u;
    // 0x32aa00: 0x120300c3  beq         $s0, $v1, . + 4 + (0xC3 << 2)
    ctx->pc = 0x32AA00u;
    {
        const bool branch_taken_0x32aa00 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x32aa00) {
            ctx->pc = 0x32AD10u;
            goto label_32ad10;
        }
    }
    ctx->pc = 0x32AA08u;
    // 0x32aa08: 0x3403fff5  ori         $v1, $zero, 0xFFF5
    ctx->pc = 0x32aa08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65525);
    // 0x32aa0c: 0x1203009a  beq         $s0, $v1, . + 4 + (0x9A << 2)
    ctx->pc = 0x32AA0Cu;
    {
        const bool branch_taken_0x32aa0c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x32AA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AA0Cu;
        // 0x32aa10: 0x3403fff4  ori         $v1, $zero, 0xFFF4 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65524);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32aa0c) {
            ctx->pc = 0x32AC78u;
            goto label_32ac78;
        }
    }
    ctx->pc = 0x32AA14u;
    // 0x32aa14: 0x12030060  beq         $s0, $v1, . + 4 + (0x60 << 2)
    ctx->pc = 0x32AA14u;
    {
        const bool branch_taken_0x32aa14 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x32aa14) {
            ctx->pc = 0x32AB98u;
            goto label_32ab98;
        }
    }
    ctx->pc = 0x32AA1Cu;
    // 0x32aa1c: 0x3403fff3  ori         $v1, $zero, 0xFFF3
    ctx->pc = 0x32aa1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65523);
    // 0x32aa20: 0x12030037  beq         $s0, $v1, . + 4 + (0x37 << 2)
    ctx->pc = 0x32AA20u;
    {
        const bool branch_taken_0x32aa20 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x32AA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AA20u;
        // 0x32aa24: 0x3403fff2  ori         $v1, $zero, 0xFFF2 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65522);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32aa20) {
            ctx->pc = 0x32AB00u;
            goto label_32ab00;
        }
    }
    ctx->pc = 0x32AA28u;
    // 0x32aa28: 0x12030033  beq         $s0, $v1, . + 4 + (0x33 << 2)
    ctx->pc = 0x32AA28u;
    {
        const bool branch_taken_0x32aa28 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x32aa28) {
            ctx->pc = 0x32AAF8u;
            goto label_32aaf8;
        }
    }
    ctx->pc = 0x32AA30u;
    // 0x32aa30: 0x3403fff1  ori         $v1, $zero, 0xFFF1
    ctx->pc = 0x32aa30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65521);
    // 0x32aa34: 0x1203002e  beq         $s0, $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x32AA34u;
    {
        const bool branch_taken_0x32aa34 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x32AA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AA34u;
        // 0x32aa38: 0x3403fff0  ori         $v1, $zero, 0xFFF0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65520);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32aa34) {
            ctx->pc = 0x32AAF0u;
            goto label_32aaf0;
        }
    }
    ctx->pc = 0x32AA3Cu;
    // 0x32aa3c: 0x12030004  beq         $s0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x32AA3Cu;
    {
        const bool branch_taken_0x32aa3c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x32aa3c) {
            ctx->pc = 0x32AA50u;
            goto label_32aa50;
        }
    }
    ctx->pc = 0x32AA44u;
    // 0x32aa44: 0x100000b8  b           . + 4 + (0xB8 << 2)
    ctx->pc = 0x32AA44u;
    {
        const bool branch_taken_0x32aa44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32aa44) {
            ctx->pc = 0x32AD28u;
            goto label_32ad28;
        }
    }
    ctx->pc = 0x32AA4Cu;
    // 0x32aa4c: 0x0  nop
    ctx->pc = 0x32aa4cu;
    // NOP
label_32aa50:
    // 0x32aa50: 0x92830164  lbu         $v1, 0x164($s4)
    ctx->pc = 0x32aa50u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 356)));
    // 0x32aa54: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x32aa54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x32aa58: 0x1060001f  beqz        $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x32AA58u;
    {
        const bool branch_taken_0x32aa58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x32aa58) {
            ctx->pc = 0x32AAD8u;
            goto label_32aad8;
        }
    }
    ctx->pc = 0x32AA60u;
    // 0x32aa60: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x32AA60u;
    {
        const bool branch_taken_0x32aa60 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x32AA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AA60u;
        // 0x32aa64: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32aa60) {
            ctx->pc = 0x32AA74u;
            goto label_32aa74;
        }
    }
    ctx->pc = 0x32AA68u;
    // 0x32aa68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32aa68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32aa6c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x32AA6Cu;
    {
        const bool branch_taken_0x32aa6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32AA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AA6Cu;
        // 0x32aa70: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x32aa6c) {
            ctx->pc = 0x32AA8Cu;
            goto label_32aa8c;
        }
    }
    ctx->pc = 0x32AA74u;
label_32aa74:
    // 0x32aa74: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x32aa74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x32aa78: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x32aa78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x32aa7c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x32aa7cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32aa80: 0x0  nop
    ctx->pc = 0x32aa80u;
    // NOP
    // 0x32aa84: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x32aa84u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x32aa88: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x32aa88u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_32aa8c:
    // 0x32aa8c: 0xc6810168  lwc1        $f1, 0x168($s4)
    ctx->pc = 0x32aa8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x32aa90: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x32aa90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x32aa94: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32aa94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32aa98: 0x0  nop
    ctx->pc = 0x32aa98u;
    // NOP
    // 0x32aa9c: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x32aa9cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x32aaa0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x32aaa0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x32aaa4: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x32AAA4u;
    {
        const bool branch_taken_0x32aaa4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x32aaa4) {
            ctx->pc = 0x32AABCu;
            goto label_32aabc;
        }
    }
    ctx->pc = 0x32AAACu;
    // 0x32aaac: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x32aaacu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x32aab0: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x32aab0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x32aab4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x32AAB4u;
    {
        const bool branch_taken_0x32aab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32aab4) {
            ctx->pc = 0x32AAD4u;
            goto label_32aad4;
        }
    }
    ctx->pc = 0x32AABCu;
label_32aabc:
    // 0x32aabc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x32aabcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x32aac0: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x32aac0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x32aac4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x32aac4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x32aac8: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x32aac8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x32aacc: 0x0  nop
    ctx->pc = 0x32aaccu;
    // NOP
    // 0x32aad0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x32aad0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_32aad4:
    // 0x32aad4: 0x0  nop
    ctx->pc = 0x32aad4u;
    // NOP
label_32aad8:
    // 0x32aad8: 0x262082b  sltu        $at, $s3, $v0
    ctx->pc = 0x32aad8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x32aadc: 0x10200092  beqz        $at, . + 4 + (0x92 << 2)
    ctx->pc = 0x32AADCu;
    {
        const bool branch_taken_0x32aadc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x32aadc) {
            ctx->pc = 0x32AD28u;
            goto label_32ad28;
        }
    }
    ctx->pc = 0x32AAE4u;
    // 0x32aae4: 0x100002c6  b           . + 4 + (0x2C6 << 2)
    ctx->pc = 0x32AAE4u;
    {
        const bool branch_taken_0x32aae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32aae4) {
            ctx->pc = 0x32B600u;
            goto label_32b600;
        }
    }
    ctx->pc = 0x32AAECu;
    // 0x32aaec: 0x0  nop
    ctx->pc = 0x32aaecu;
    // NOP
label_32aaf0:
    // 0x32aaf0: 0x1000008d  b           . + 4 + (0x8D << 2)
    ctx->pc = 0x32AAF0u;
    {
        const bool branch_taken_0x32aaf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32AAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AAF0u;
        // 0x32aaf4: 0xa6820150  sh          $v0, 0x150($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 336), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32aaf0) {
            ctx->pc = 0x32AD28u;
            goto label_32ad28;
        }
    }
    ctx->pc = 0x32AAF8u;
label_32aaf8:
    // 0x32aaf8: 0x1000008b  b           . + 4 + (0x8B << 2)
    ctx->pc = 0x32AAF8u;
    {
        const bool branch_taken_0x32aaf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32AAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AAF8u;
        // 0x32aafc: 0xa6820152  sh          $v0, 0x152($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 338), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32aaf8) {
            ctx->pc = 0x32AD28u;
            goto label_32ad28;
        }
    }
    ctx->pc = 0x32AB00u;
label_32ab00:
    // 0x32ab00: 0x92830164  lbu         $v1, 0x164($s4)
    ctx->pc = 0x32ab00u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 356)));
    // 0x32ab04: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x32ab04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x32ab08: 0x1060001f  beqz        $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x32AB08u;
    {
        const bool branch_taken_0x32ab08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x32ab08) {
            ctx->pc = 0x32AB88u;
            goto label_32ab88;
        }
    }
    ctx->pc = 0x32AB10u;
    // 0x32ab10: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x32AB10u;
    {
        const bool branch_taken_0x32ab10 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x32AB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AB10u;
        // 0x32ab14: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ab10) {
            ctx->pc = 0x32AB24u;
            goto label_32ab24;
        }
    }
    ctx->pc = 0x32AB18u;
    // 0x32ab18: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32ab18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32ab1c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x32AB1Cu;
    {
        const bool branch_taken_0x32ab1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32AB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AB1Cu;
        // 0x32ab20: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ab1c) {
            ctx->pc = 0x32AB3Cu;
            goto label_32ab3c;
        }
    }
    ctx->pc = 0x32AB24u;
label_32ab24:
    // 0x32ab24: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x32ab24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x32ab28: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x32ab28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x32ab2c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x32ab2cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32ab30: 0x0  nop
    ctx->pc = 0x32ab30u;
    // NOP
    // 0x32ab34: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x32ab34u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x32ab38: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x32ab38u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_32ab3c:
    // 0x32ab3c: 0xc6810168  lwc1        $f1, 0x168($s4)
    ctx->pc = 0x32ab3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x32ab40: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x32ab40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x32ab44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32ab44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32ab48: 0x0  nop
    ctx->pc = 0x32ab48u;
    // NOP
    // 0x32ab4c: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x32ab4cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x32ab50: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x32ab50u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x32ab54: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x32AB54u;
    {
        const bool branch_taken_0x32ab54 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x32ab54) {
            ctx->pc = 0x32AB6Cu;
            goto label_32ab6c;
        }
    }
    ctx->pc = 0x32AB5Cu;
    // 0x32ab5c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x32ab5cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x32ab60: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x32ab60u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x32ab64: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x32AB64u;
    {
        const bool branch_taken_0x32ab64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32ab64) {
            ctx->pc = 0x32AB84u;
            goto label_32ab84;
        }
    }
    ctx->pc = 0x32AB6Cu;
label_32ab6c:
    // 0x32ab6c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x32ab6cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x32ab70: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x32ab70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x32ab74: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x32ab74u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x32ab78: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x32ab78u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x32ab7c: 0x0  nop
    ctx->pc = 0x32ab7cu;
    // NOP
    // 0x32ab80: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x32ab80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_32ab84:
    // 0x32ab84: 0x0  nop
    ctx->pc = 0x32ab84u;
    // NOP
label_32ab88:
    // 0x32ab88: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x32ab88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x32ab8c: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x32AB8Cu;
    {
        const bool branch_taken_0x32ab8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32AB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AB8Cu;
        // 0x32ab90: 0xa6820154  sh          $v0, 0x154($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 340), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ab8c) {
            ctx->pc = 0x32AD28u;
            goto label_32ad28;
        }
    }
    ctx->pc = 0x32AB94u;
    // 0x32ab94: 0x0  nop
    ctx->pc = 0x32ab94u;
    // NOP
label_32ab98:
    // 0x32ab98: 0x92830164  lbu         $v1, 0x164($s4)
    ctx->pc = 0x32ab98u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 356)));
    // 0x32ab9c: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x32ab9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x32aba0: 0x10600021  beqz        $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x32ABA0u;
    {
        const bool branch_taken_0x32aba0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x32aba0) {
            ctx->pc = 0x32AC28u;
            goto label_32ac28;
        }
    }
    ctx->pc = 0x32ABA8u;
    // 0x32aba8: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x32ABA8u;
    {
        const bool branch_taken_0x32aba8 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x32ABACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32ABA8u;
        // 0x32abac: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32aba8) {
            ctx->pc = 0x32ABBCu;
            goto label_32abbc;
        }
    }
    ctx->pc = 0x32ABB0u;
    // 0x32abb0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32abb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32abb4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x32ABB4u;
    {
        const bool branch_taken_0x32abb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32ABB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32ABB4u;
        // 0x32abb8: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x32abb4) {
            ctx->pc = 0x32ABD4u;
            goto label_32abd4;
        }
    }
    ctx->pc = 0x32ABBCu;
label_32abbc:
    // 0x32abbc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x32abbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x32abc0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x32abc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x32abc4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x32abc4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32abc8: 0x0  nop
    ctx->pc = 0x32abc8u;
    // NOP
    // 0x32abcc: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x32abccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x32abd0: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x32abd0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_32abd4:
    // 0x32abd4: 0xc6810168  lwc1        $f1, 0x168($s4)
    ctx->pc = 0x32abd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x32abd8: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x32abd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x32abdc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32abdcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32abe0: 0x0  nop
    ctx->pc = 0x32abe0u;
    // NOP
    // 0x32abe4: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x32abe4u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x32abe8: 0x0  nop
    ctx->pc = 0x32abe8u;
    // NOP
    // 0x32abec: 0x0  nop
    ctx->pc = 0x32abecu;
    // NOP
    // 0x32abf0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x32abf0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x32abf4: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x32ABF4u;
    {
        const bool branch_taken_0x32abf4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x32abf4) {
            ctx->pc = 0x32AC0Cu;
            goto label_32ac0c;
        }
    }
    ctx->pc = 0x32ABFCu;
    // 0x32abfc: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x32abfcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x32ac00: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x32ac00u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x32ac04: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x32AC04u;
    {
        const bool branch_taken_0x32ac04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32ac04) {
            ctx->pc = 0x32AC24u;
            goto label_32ac24;
        }
    }
    ctx->pc = 0x32AC0Cu;
label_32ac0c:
    // 0x32ac0c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x32ac0cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x32ac10: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x32ac10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x32ac14: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x32ac14u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x32ac18: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x32ac18u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x32ac1c: 0x0  nop
    ctx->pc = 0x32ac1cu;
    // NOP
    // 0x32ac20: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x32ac20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_32ac24:
    // 0x32ac24: 0x0  nop
    ctx->pc = 0x32ac24u;
    // NOP
label_32ac28:
    // 0x32ac28: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x32AC28u;
    {
        const bool branch_taken_0x32ac28 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x32AC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AC28u;
        // 0x32ac2c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ac28) {
            ctx->pc = 0x32AC3Cu;
            goto label_32ac3c;
        }
    }
    ctx->pc = 0x32AC30u;
    // 0x32ac30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32ac30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32ac34: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x32AC34u;
    {
        const bool branch_taken_0x32ac34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32AC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AC34u;
        // 0x32ac38: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ac34) {
            ctx->pc = 0x32AC54u;
            goto label_32ac54;
        }
    }
    ctx->pc = 0x32AC3Cu;
label_32ac3c:
    // 0x32ac3c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x32ac3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x32ac40: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x32ac40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x32ac44: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x32ac44u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32ac48: 0x0  nop
    ctx->pc = 0x32ac48u;
    // NOP
    // 0x32ac4c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x32ac4cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x32ac50: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x32ac50u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_32ac54:
    // 0x32ac54: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x32ac54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x32ac58: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32ac58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32ac5c: 0x0  nop
    ctx->pc = 0x32ac5cu;
    // NOP
    // 0x32ac60: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x32ac60u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x32ac64: 0x0  nop
    ctx->pc = 0x32ac64u;
    // NOP
    // 0x32ac68: 0x0  nop
    ctx->pc = 0x32ac68u;
    // NOP
    // 0x32ac6c: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x32AC6Cu;
    {
        const bool branch_taken_0x32ac6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32AC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AC6Cu;
        // 0x32ac70: 0xe6800158  swc1        $f0, 0x158($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 344), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ac6c) {
            ctx->pc = 0x32AD28u;
            goto label_32ad28;
        }
    }
    ctx->pc = 0x32AC74u;
    // 0x32ac74: 0x0  nop
    ctx->pc = 0x32ac74u;
    // NOP
label_32ac78:
    // 0x32ac78: 0x92830164  lbu         $v1, 0x164($s4)
    ctx->pc = 0x32ac78u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 356)));
    // 0x32ac7c: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x32ac7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x32ac80: 0x1060001f  beqz        $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x32AC80u;
    {
        const bool branch_taken_0x32ac80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x32ac80) {
            ctx->pc = 0x32AD00u;
            goto label_32ad00;
        }
    }
    ctx->pc = 0x32AC88u;
    // 0x32ac88: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x32AC88u;
    {
        const bool branch_taken_0x32ac88 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x32AC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AC88u;
        // 0x32ac8c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ac88) {
            ctx->pc = 0x32AC9Cu;
            goto label_32ac9c;
        }
    }
    ctx->pc = 0x32AC90u;
    // 0x32ac90: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32ac90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32ac94: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x32AC94u;
    {
        const bool branch_taken_0x32ac94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32AC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AC94u;
        // 0x32ac98: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ac94) {
            ctx->pc = 0x32ACB4u;
            goto label_32acb4;
        }
    }
    ctx->pc = 0x32AC9Cu;
label_32ac9c:
    // 0x32ac9c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x32ac9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x32aca0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x32aca0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x32aca4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x32aca4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32aca8: 0x0  nop
    ctx->pc = 0x32aca8u;
    // NOP
    // 0x32acac: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x32acacu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x32acb0: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x32acb0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_32acb4:
    // 0x32acb4: 0xc6810168  lwc1        $f1, 0x168($s4)
    ctx->pc = 0x32acb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x32acb8: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x32acb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x32acbc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32acbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32acc0: 0x0  nop
    ctx->pc = 0x32acc0u;
    // NOP
    // 0x32acc4: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x32acc4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x32acc8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x32acc8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x32accc: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x32ACCCu;
    {
        const bool branch_taken_0x32accc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x32accc) {
            ctx->pc = 0x32ACE4u;
            goto label_32ace4;
        }
    }
    ctx->pc = 0x32ACD4u;
    // 0x32acd4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x32acd4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x32acd8: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x32acd8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x32acdc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x32ACDCu;
    {
        const bool branch_taken_0x32acdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32acdc) {
            ctx->pc = 0x32ACFCu;
            goto label_32acfc;
        }
    }
    ctx->pc = 0x32ACE4u;
label_32ace4:
    // 0x32ace4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x32ace4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x32ace8: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x32ace8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x32acec: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x32acecu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x32acf0: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x32acf0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x32acf4: 0x0  nop
    ctx->pc = 0x32acf4u;
    // NOP
    // 0x32acf8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x32acf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_32acfc:
    // 0x32acfc: 0x0  nop
    ctx->pc = 0x32acfcu;
    // NOP
label_32ad00:
    // 0x32ad00: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x32ad00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x32ad04: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x32AD04u;
    {
        const bool branch_taken_0x32ad04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32AD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AD04u;
        // 0x32ad08: 0xa682015c  sh          $v0, 0x15C($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 348), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ad04) {
            ctx->pc = 0x32AD28u;
            goto label_32ad28;
        }
    }
    ctx->pc = 0x32AD0Cu;
    // 0x32ad0c: 0x0  nop
    ctx->pc = 0x32ad0cu;
    // NOP
label_32ad10:
    // 0x32ad10: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x32AD10u;
    {
        const bool branch_taken_0x32ad10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32AD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AD10u;
        // 0x32ad14: 0xa682015e  sh          $v0, 0x15E($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 350), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ad10) {
            ctx->pc = 0x32AD28u;
            goto label_32ad28;
        }
    }
    ctx->pc = 0x32AD18u;
label_32ad18:
    // 0x32ad18: 0x3c040092  lui         $a0, 0x92
    ctx->pc = 0x32ad18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)146 << 16));
    // 0x32ad1c: 0xc0e8198  jal         func_3A0660
    ctx->pc = 0x32AD1Cu;
    SET_GPR_U32(ctx, 31, 0x32AD24u);
    ctx->pc = 0x32AD20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32AD1Cu;
    // 0x32ad20: 0x24843320  addiu       $a0, $a0, 0x3320 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13088));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A0660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A0660u, 0x32AD1Cu, 0x32AD24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32AD24u;
label_32ad24:
    // 0x32ad24: 0x0  nop
    ctx->pc = 0x32ad24u;
    // NOP
label_32ad28:
    // 0x32ad28: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x32ad28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x32ad2c: 0x24420006  addiu       $v0, $v0, 0x6
    ctx->pc = 0x32ad2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6));
    // 0x32ad30: 0xae820008  sw          $v0, 0x8($s4)
    ctx->pc = 0x32ad30u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 2));
    // 0x32ad34: 0x0  nop
    ctx->pc = 0x32ad34u;
    // NOP
label_32ad38:
    // 0x32ad38: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x32ad38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x32ad3c: 0x3401fff0  ori         $at, $zero, 0xFFF0
    ctx->pc = 0x32ad3cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65520);
    // 0x32ad40: 0x94500000  lhu         $s0, 0x0($v0)
    ctx->pc = 0x32ad40u;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x32ad44: 0x201082a  slt         $at, $s0, $at
    ctx->pc = 0x32ad44u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x32ad48: 0x1020ff27  beqz        $at, . + 4 + (-0xD9 << 2)
    ctx->pc = 0x32AD48u;
    {
        const bool branch_taken_0x32ad48 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x32ad48) {
            ctx->pc = 0x32A9E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32a9e8;
        }
    }
    ctx->pc = 0x32AD50u;
    // 0x32ad50: 0x92830164  lbu         $v1, 0x164($s4)
    ctx->pc = 0x32ad50u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 356)));
    // 0x32ad54: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x32ad54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x32ad58: 0x1060001f  beqz        $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x32AD58u;
    {
        const bool branch_taken_0x32ad58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x32ad58) {
            ctx->pc = 0x32ADD8u;
            goto label_32add8;
        }
    }
    ctx->pc = 0x32AD60u;
    // 0x32ad60: 0x6000004  bltz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x32AD60u;
    {
        const bool branch_taken_0x32ad60 = (GPR_S64(ctx, 16) < 0);
        ctx->pc = 0x32AD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AD60u;
        // 0x32ad64: 0x102042  srl         $a0, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ad60) {
            ctx->pc = 0x32AD74u;
            goto label_32ad74;
        }
    }
    ctx->pc = 0x32AD68u;
    // 0x32ad68: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x32ad68u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32ad6c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x32AD6Cu;
    {
        const bool branch_taken_0x32ad6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32AD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AD6Cu;
        // 0x32ad70: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ad6c) {
            ctx->pc = 0x32AD8Cu;
            goto label_32ad8c;
        }
    }
    ctx->pc = 0x32AD74u;
label_32ad74:
    // 0x32ad74: 0x32030001  andi        $v1, $s0, 0x1
    ctx->pc = 0x32ad74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x32ad78: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x32ad78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x32ad7c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x32ad7cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32ad80: 0x0  nop
    ctx->pc = 0x32ad80u;
    // NOP
    // 0x32ad84: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x32ad84u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x32ad88: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x32ad88u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_32ad8c:
    // 0x32ad8c: 0xc6810168  lwc1        $f1, 0x168($s4)
    ctx->pc = 0x32ad8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x32ad90: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x32ad90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x32ad94: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x32ad94u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32ad98: 0x0  nop
    ctx->pc = 0x32ad98u;
    // NOP
    // 0x32ad9c: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x32ad9cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x32ada0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x32ada0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x32ada4: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x32ADA4u;
    {
        const bool branch_taken_0x32ada4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x32ada4) {
            ctx->pc = 0x32ADBCu;
            goto label_32adbc;
        }
    }
    ctx->pc = 0x32ADACu;
    // 0x32adac: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x32adacu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x32adb0: 0x44100800  mfc1        $s0, $f1
    ctx->pc = 0x32adb0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
    // 0x32adb4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x32ADB4u;
    {
        const bool branch_taken_0x32adb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32adb4) {
            ctx->pc = 0x32ADD4u;
            goto label_32add4;
        }
    }
    ctx->pc = 0x32ADBCu;
label_32adbc:
    // 0x32adbc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x32adbcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x32adc0: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x32adc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x32adc4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x32adc4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x32adc8: 0x44100800  mfc1        $s0, $f1
    ctx->pc = 0x32adc8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
    // 0x32adcc: 0x0  nop
    ctx->pc = 0x32adccu;
    // NOP
    // 0x32add0: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x32add0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
label_32add4:
    // 0x32add4: 0x0  nop
    ctx->pc = 0x32add4u;
    // NOP
label_32add8:
    // 0x32add8: 0x270182b  sltu        $v1, $s3, $s0
    ctx->pc = 0x32add8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x32addc: 0x14600208  bnez        $v1, . + 4 + (0x208 << 2)
    ctx->pc = 0x32ADDCu;
    {
        const bool branch_taken_0x32addc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x32addc) {
            ctx->pc = 0x32B600u;
            goto label_32b600;
        }
    }
    ctx->pc = 0x32ADE4u;
    // 0x32ade4: 0x90440005  lbu         $a0, 0x5($v0)
    ctx->pc = 0x32ade4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5)));
    // 0x32ade8: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x32ade8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x32adec: 0x14830008  bne         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x32ADECu;
    {
        const bool branch_taken_0x32adec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x32adec) {
            ctx->pc = 0x32AE10u;
            goto label_32ae10;
        }
    }
    ctx->pc = 0x32ADF4u;
    // 0x32adf4: 0x92830000  lbu         $v1, 0x0($s4)
    ctx->pc = 0x32adf4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x32adf8: 0x240200fe  addiu       $v0, $zero, 0xFE
    ctx->pc = 0x32adf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
    // 0x32adfc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x32adfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x32ae00: 0xa2830000  sb          $v1, 0x0($s4)
    ctx->pc = 0x32ae00u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x32ae04: 0x100001fe  b           . + 4 + (0x1FE << 2)
    ctx->pc = 0x32AE04u;
    {
        const bool branch_taken_0x32ae04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32AE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AE04u;
        // 0x32ae08: 0xa2820004  sb          $v0, 0x4($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 4), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ae04) {
            ctx->pc = 0x32B600u;
            goto label_32b600;
        }
    }
    ctx->pc = 0x32AE0Cu;
    // 0x32ae0c: 0x0  nop
    ctx->pc = 0x32ae0cu;
    // NOP
label_32ae10:
    // 0x32ae10: 0x90450004  lbu         $a1, 0x4($v0)
    ctx->pc = 0x32ae10u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x32ae14: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x32ae14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x32ae18: 0xa2850005  sb          $a1, 0x5($s4)
    ctx->pc = 0x32ae18u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 5), (uint8_t)GPR_U32(ctx, 5));
    // 0x32ae1c: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x32ae1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
    // 0x32ae20: 0x8e850008  lw          $a1, 0x8($s4)
    ctx->pc = 0x32ae20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x32ae24: 0x34436667  ori         $v1, $v0, 0x6667
    ctx->pc = 0x32ae24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
    // 0x32ae28: 0x24020017  addiu       $v0, $zero, 0x17
    ctx->pc = 0x32ae28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x32ae2c: 0x94a50002  lhu         $a1, 0x2($a1)
    ctx->pc = 0x32ae2cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x32ae30: 0xa6850002  sh          $a1, 0x2($s4)
    ctx->pc = 0x32ae30u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 2), (uint16_t)GPR_U32(ctx, 5));
    // 0x32ae34: 0x8e850008  lw          $a1, 0x8($s4)
    ctx->pc = 0x32ae34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x32ae38: 0x90a50005  lbu         $a1, 0x5($a1)
    ctx->pc = 0x32ae38u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 5)));
    // 0x32ae3c: 0xa2850004  sb          $a1, 0x4($s4)
    ctx->pc = 0x32ae3cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 4), (uint8_t)GPR_U32(ctx, 5));
    // 0x32ae40: 0x92850005  lbu         $a1, 0x5($s4)
    ctx->pc = 0x32ae40u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 5)));
    // 0x32ae44: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x32ae44u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x32ae48: 0x0  nop
    ctx->pc = 0x32ae48u;
    // NOP
    // 0x32ae4c: 0x0  nop
    ctx->pc = 0x32ae4cu;
    // NOP
    // 0x32ae50: 0x2010  mfhi        $a0
    ctx->pc = 0x32ae50u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x32ae54: 0xa2840006  sb          $a0, 0x6($s4)
    ctx->pc = 0x32ae54u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 6), (uint8_t)GPR_U32(ctx, 4));
    // 0x32ae58: 0x92840005  lbu         $a0, 0x5($s4)
    ctx->pc = 0x32ae58u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 5)));
    // 0x32ae5c: 0x640018  mult        $zero, $v1, $a0
    ctx->pc = 0x32ae5cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x32ae60: 0x0  nop
    ctx->pc = 0x32ae60u;
    // NOP
    // 0x32ae64: 0x0  nop
    ctx->pc = 0x32ae64u;
    // NOP
    // 0x32ae68: 0x1810  mfhi        $v1
    ctx->pc = 0x32ae68u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x32ae6c: 0x427c2  srl         $a0, $a0, 31
    ctx->pc = 0x32ae6cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x32ae70: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x32ae70u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x32ae74: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x32ae74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x32ae78: 0x10820179  beq         $a0, $v0, . + 4 + (0x179 << 2)
    ctx->pc = 0x32AE78u;
    {
        const bool branch_taken_0x32ae78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x32ae78) {
            ctx->pc = 0x32B460u;
            goto label_32b460;
        }
    }
    ctx->pc = 0x32AE80u;
    // 0x32ae80: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x32ae80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x32ae84: 0x10820142  beq         $a0, $v0, . + 4 + (0x142 << 2)
    ctx->pc = 0x32AE84u;
    {
        const bool branch_taken_0x32ae84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x32AE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AE84u;
        // 0x32ae88: 0x24020015  addiu       $v0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ae84) {
            ctx->pc = 0x32B390u;
            goto label_32b390;
        }
    }
    ctx->pc = 0x32AE8Cu;
    // 0x32ae8c: 0x1082013a  beq         $a0, $v0, . + 4 + (0x13A << 2)
    ctx->pc = 0x32AE8Cu;
    {
        const bool branch_taken_0x32ae8c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x32ae8c) {
            ctx->pc = 0x32B378u;
            goto label_32b378;
        }
    }
    ctx->pc = 0x32AE94u;
    // 0x32ae94: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x32ae94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x32ae98: 0x108200fd  beq         $a0, $v0, . + 4 + (0xFD << 2)
    ctx->pc = 0x32AE98u;
    {
        const bool branch_taken_0x32ae98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x32AE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AE98u;
        // 0x32ae9c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ae98) {
            ctx->pc = 0x32B290u;
            goto label_32b290;
        }
    }
    ctx->pc = 0x32AEA0u;
    // 0x32aea0: 0x108200f5  beq         $a0, $v0, . + 4 + (0xF5 << 2)
    ctx->pc = 0x32AEA0u;
    {
        const bool branch_taken_0x32aea0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x32AEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AEA0u;
        // 0x32aea4: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32aea0) {
            ctx->pc = 0x32B278u;
            goto label_32b278;
        }
    }
    ctx->pc = 0x32AEA8u;
    // 0x32aea8: 0x108300ed  beq         $a0, $v1, . + 4 + (0xED << 2)
    ctx->pc = 0x32AEA8u;
    {
        const bool branch_taken_0x32aea8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x32AEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AEA8u;
        // 0x32aeac: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32aea8) {
            ctx->pc = 0x32B260u;
            goto label_32b260;
        }
    }
    ctx->pc = 0x32AEB0u;
    // 0x32aeb0: 0x108200c1  beq         $a0, $v0, . + 4 + (0xC1 << 2)
    ctx->pc = 0x32AEB0u;
    {
        const bool branch_taken_0x32aeb0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x32aeb0) {
            ctx->pc = 0x32B1B8u;
            goto label_32b1b8;
        }
    }
    ctx->pc = 0x32AEB8u;
    // 0x32aeb8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x32aeb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x32aebc: 0x10820070  beq         $a0, $v0, . + 4 + (0x70 << 2)
    ctx->pc = 0x32AEBCu;
    {
        const bool branch_taken_0x32aebc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x32aebc) {
            ctx->pc = 0x32B080u;
            goto label_32b080;
        }
    }
    ctx->pc = 0x32AEC4u;
    // 0x32aec4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32aec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32aec8: 0x1082003b  beq         $a0, $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x32AEC8u;
    {
        const bool branch_taken_0x32aec8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x32aec8) {
            ctx->pc = 0x32AFB8u;
            goto label_32afb8;
        }
    }
    ctx->pc = 0x32AED0u;
    // 0x32aed0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x32AED0u;
    {
        const bool branch_taken_0x32aed0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x32aed0) {
            ctx->pc = 0x32AEE0u;
            goto label_32aee0;
        }
    }
    ctx->pc = 0x32AED8u;
    // 0x32aed8: 0x10000199  b           . + 4 + (0x199 << 2)
    ctx->pc = 0x32AED8u;
    {
        const bool branch_taken_0x32aed8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32aed8) {
            ctx->pc = 0x32B540u;
            goto label_32b540;
        }
    }
    ctx->pc = 0x32AEE0u;
label_32aee0:
    // 0x32aee0: 0x92820164  lbu         $v0, 0x164($s4)
    ctx->pc = 0x32aee0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 356)));
    // 0x32aee4: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x32aee4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x32aee8: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x32AEE8u;
    {
        const bool branch_taken_0x32aee8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32aee8) {
            ctx->pc = 0x32AF70u;
            goto label_32af70;
        }
    }
    ctx->pc = 0x32AEF0u;
    // 0x32aef0: 0x96820002  lhu         $v0, 0x2($s4)
    ctx->pc = 0x32aef0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x32aef4: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x32AEF4u;
    {
        const bool branch_taken_0x32aef4 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x32AEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AEF4u;
        // 0x32aef8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32aef4) {
            ctx->pc = 0x32AF08u;
            goto label_32af08;
        }
    }
    ctx->pc = 0x32AEFCu;
    // 0x32aefc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32aefcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32af00: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x32AF00u;
    {
        const bool branch_taken_0x32af00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32AF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AF00u;
        // 0x32af04: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x32af00) {
            ctx->pc = 0x32AF20u;
            goto label_32af20;
        }
    }
    ctx->pc = 0x32AF08u;
label_32af08:
    // 0x32af08: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x32af08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x32af0c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x32af0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x32af10: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x32af10u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32af14: 0x0  nop
    ctx->pc = 0x32af14u;
    // NOP
    // 0x32af18: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x32af18u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x32af1c: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x32af1cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_32af20:
    // 0x32af20: 0xc6810168  lwc1        $f1, 0x168($s4)
    ctx->pc = 0x32af20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x32af24: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x32af24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x32af28: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32af28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32af2c: 0x0  nop
    ctx->pc = 0x32af2cu;
    // NOP
    // 0x32af30: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x32af30u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x32af34: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x32af34u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x32af38: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x32AF38u;
    {
        const bool branch_taken_0x32af38 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x32af38) {
            ctx->pc = 0x32AF50u;
            goto label_32af50;
        }
    }
    ctx->pc = 0x32AF40u;
    // 0x32af40: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x32af40u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x32af44: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x32af44u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x32af48: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x32AF48u;
    {
        const bool branch_taken_0x32af48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32AF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AF48u;
        // 0x32af4c: 0xa6830002  sh          $v1, 0x2($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 2), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32af48) {
            ctx->pc = 0x32AF6Cu;
            goto label_32af6c;
        }
    }
    ctx->pc = 0x32AF50u;
label_32af50:
    // 0x32af50: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x32af50u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x32af54: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x32af54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x32af58: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x32af58u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x32af5c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x32af5cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x32af60: 0x0  nop
    ctx->pc = 0x32af60u;
    // NOP
    // 0x32af64: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x32af64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x32af68: 0xa6830002  sh          $v1, 0x2($s4)
    ctx->pc = 0x32af68u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 2), (uint16_t)GPR_U32(ctx, 3));
label_32af6c:
    // 0x32af6c: 0x0  nop
    ctx->pc = 0x32af6cu;
    // NOP
label_32af70:
    // 0x32af70: 0x96820002  lhu         $v0, 0x2($s4)
    ctx->pc = 0x32af70u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x32af74: 0x92860004  lbu         $a2, 0x4($s4)
    ctx->pc = 0x32af74u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x32af78: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x32af78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32af7c: 0x92870006  lbu         $a3, 0x6($s4)
    ctx->pc = 0x32af7cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 6)));
    // 0x32af80: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x32af80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32af84: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x32af84u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32af88: 0x240a0080  addiu       $t2, $zero, 0x80
    ctx->pc = 0x32af88u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x32af8c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x32af8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x32af90: 0xc0cae4c  jal         func_32B930
    ctx->pc = 0x32AF90u;
    SET_GPR_U32(ctx, 31, 0x32AF98u);
    ctx->pc = 0x32AF94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32AF90u;
    // 0x32af94: 0x3048ffff  andi        $t0, $v0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x32B930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32B930u, 0x32AF90u, 0x32AF98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32AF98u;
label_32af98:
    // 0x32af98: 0xa2800005  sb          $zero, 0x5($s4)
    ctx->pc = 0x32af98u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x32af9c: 0xa280000c  sb          $zero, 0xC($s4)
    ctx->pc = 0x32af9cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 12), (uint8_t)GPR_U32(ctx, 0));
    // 0x32afa0: 0x96820002  lhu         $v0, 0x2($s4)
    ctx->pc = 0x32afa0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x32afa4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x32afa4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x32afa8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x32afa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x32afac: 0x10000164  b           . + 4 + (0x164 << 2)
    ctx->pc = 0x32AFACu;
    {
        const bool branch_taken_0x32afac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32AFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AFACu;
        // 0x32afb0: 0xaf828b78  sw          $v0, -0x7488($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937464), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32afac) {
            ctx->pc = 0x32B540u;
            goto label_32b540;
        }
    }
    ctx->pc = 0x32AFB4u;
    // 0x32afb4: 0x0  nop
    ctx->pc = 0x32afb4u;
    // NOP
label_32afb8:
    // 0x32afb8: 0x92820164  lbu         $v0, 0x164($s4)
    ctx->pc = 0x32afb8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 356)));
    // 0x32afbc: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x32afbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x32afc0: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x32AFC0u;
    {
        const bool branch_taken_0x32afc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32afc0) {
            ctx->pc = 0x32B048u;
            goto label_32b048;
        }
    }
    ctx->pc = 0x32AFC8u;
    // 0x32afc8: 0x96820002  lhu         $v0, 0x2($s4)
    ctx->pc = 0x32afc8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x32afcc: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x32AFCCu;
    {
        const bool branch_taken_0x32afcc = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x32AFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AFCCu;
        // 0x32afd0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32afcc) {
            ctx->pc = 0x32AFE0u;
            goto label_32afe0;
        }
    }
    ctx->pc = 0x32AFD4u;
    // 0x32afd4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32afd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32afd8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x32AFD8u;
    {
        const bool branch_taken_0x32afd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32AFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AFD8u;
        // 0x32afdc: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x32afd8) {
            ctx->pc = 0x32AFF8u;
            goto label_32aff8;
        }
    }
    ctx->pc = 0x32AFE0u;
label_32afe0:
    // 0x32afe0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x32afe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x32afe4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x32afe4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x32afe8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x32afe8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32afec: 0x0  nop
    ctx->pc = 0x32afecu;
    // NOP
    // 0x32aff0: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x32aff0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x32aff4: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x32aff4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_32aff8:
    // 0x32aff8: 0xc6810168  lwc1        $f1, 0x168($s4)
    ctx->pc = 0x32aff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x32affc: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x32affcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x32b000: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32b000u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32b004: 0x0  nop
    ctx->pc = 0x32b004u;
    // NOP
    // 0x32b008: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x32b008u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x32b00c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x32b00cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x32b010: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x32B010u;
    {
        const bool branch_taken_0x32b010 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x32b010) {
            ctx->pc = 0x32B028u;
            goto label_32b028;
        }
    }
    ctx->pc = 0x32B018u;
    // 0x32b018: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x32b018u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x32b01c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x32b01cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x32b020: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x32B020u;
    {
        const bool branch_taken_0x32b020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B020u;
        // 0x32b024: 0xa6830002  sh          $v1, 0x2($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 2), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b020) {
            ctx->pc = 0x32B044u;
            goto label_32b044;
        }
    }
    ctx->pc = 0x32B028u;
label_32b028:
    // 0x32b028: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x32b028u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x32b02c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x32b02cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x32b030: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x32b030u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x32b034: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x32b034u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x32b038: 0x0  nop
    ctx->pc = 0x32b038u;
    // NOP
    // 0x32b03c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x32b03cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x32b040: 0xa6830002  sh          $v1, 0x2($s4)
    ctx->pc = 0x32b040u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 2), (uint16_t)GPR_U32(ctx, 3));
label_32b044:
    // 0x32b044: 0x0  nop
    ctx->pc = 0x32b044u;
    // NOP
label_32b048:
    // 0x32b048: 0x96820002  lhu         $v0, 0x2($s4)
    ctx->pc = 0x32b048u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x32b04c: 0x92860004  lbu         $a2, 0x4($s4)
    ctx->pc = 0x32b04cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x32b050: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x32b050u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32b054: 0x92870006  lbu         $a3, 0x6($s4)
    ctx->pc = 0x32b054u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 6)));
    // 0x32b058: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x32b058u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32b05c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x32b05cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32b060: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x32b060u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32b064: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x32b064u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x32b068: 0xc0cae4c  jal         func_32B930
    ctx->pc = 0x32B068u;
    SET_GPR_U32(ctx, 31, 0x32B070u);
    ctx->pc = 0x32B06Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B068u;
    // 0x32b06c: 0x3048ffff  andi        $t0, $v0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x32B930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32B930u, 0x32B068u, 0x32B070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B070u;
label_32b070:
    // 0x32b070: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32b070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32b074: 0xa2820005  sb          $v0, 0x5($s4)
    ctx->pc = 0x32b074u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 5), (uint8_t)GPR_U32(ctx, 2));
    // 0x32b078: 0x10000131  b           . + 4 + (0x131 << 2)
    ctx->pc = 0x32B078u;
    {
        const bool branch_taken_0x32b078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B078u;
        // 0x32b07c: 0xa280000c  sb          $zero, 0xC($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 12), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b078) {
            ctx->pc = 0x32B540u;
            goto label_32b540;
        }
    }
    ctx->pc = 0x32B080u;
label_32b080:
    // 0x32b080: 0xa2820005  sb          $v0, 0x5($s4)
    ctx->pc = 0x32b080u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 5), (uint8_t)GPR_U32(ctx, 2));
    // 0x32b084: 0x9682015e  lhu         $v0, 0x15E($s4)
    ctx->pc = 0x32b084u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 350)));
    // 0x32b088: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x32B088u;
    {
        const bool branch_taken_0x32b088 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x32B08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B088u;
        // 0x32b08c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b088) {
            ctx->pc = 0x32B09Cu;
            goto label_32b09c;
        }
    }
    ctx->pc = 0x32B090u;
    // 0x32b090: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32b090u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32b094: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x32B094u;
    {
        const bool branch_taken_0x32b094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B094u;
        // 0x32b098: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b094) {
            ctx->pc = 0x32B0B4u;
            goto label_32b0b4;
        }
    }
    ctx->pc = 0x32B09Cu;
label_32b09c:
    // 0x32b09c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x32b09cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x32b0a0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x32b0a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x32b0a4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x32b0a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32b0a8: 0x0  nop
    ctx->pc = 0x32b0a8u;
    // NOP
    // 0x32b0ac: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x32b0acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x32b0b0: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x32b0b0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_32b0b4:
    // 0x32b0b4: 0xc6810158  lwc1        $f1, 0x158($s4)
    ctx->pc = 0x32b0b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x32b0b8: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x32b0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x32b0bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32b0bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32b0c0: 0x0  nop
    ctx->pc = 0x32b0c0u;
    // NOP
    // 0x32b0c4: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x32b0c4u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x32b0c8: 0x0  nop
    ctx->pc = 0x32b0c8u;
    // NOP
    // 0x32b0cc: 0x0  nop
    ctx->pc = 0x32b0ccu;
    // NOP
    // 0x32b0d0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x32b0d0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x32b0d4: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x32B0D4u;
    {
        const bool branch_taken_0x32b0d4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x32b0d4) {
            ctx->pc = 0x32B0ECu;
            goto label_32b0ec;
        }
    }
    ctx->pc = 0x32B0DCu;
    // 0x32b0dc: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x32b0dcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x32b0e0: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x32b0e0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x32b0e4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x32B0E4u;
    {
        const bool branch_taken_0x32b0e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B0E4u;
        // 0x32b0e8: 0xa6830154  sh          $v1, 0x154($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 340), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b0e4) {
            ctx->pc = 0x32B108u;
            goto label_32b108;
        }
    }
    ctx->pc = 0x32B0ECu;
label_32b0ec:
    // 0x32b0ec: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x32b0ecu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x32b0f0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x32b0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x32b0f4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x32b0f4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x32b0f8: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x32b0f8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x32b0fc: 0x0  nop
    ctx->pc = 0x32b0fcu;
    // NOP
    // 0x32b100: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x32b100u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x32b104: 0xa6830154  sh          $v1, 0x154($s4)
    ctx->pc = 0x32b104u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 340), (uint16_t)GPR_U32(ctx, 3));
label_32b108:
    // 0x32b108: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x32b108u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x32b10c: 0x96840154  lhu         $a0, 0x154($s4)
    ctx->pc = 0x32b10cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 340)));
    // 0x32b110: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32b110u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32b114: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x32b114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32b118: 0xa284000d  sb          $a0, 0xD($s4)
    ctx->pc = 0x32b118u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 13), (uint8_t)GPR_U32(ctx, 4));
    // 0x32b11c: 0x96820002  lhu         $v0, 0x2($s4)
    ctx->pc = 0x32b11cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x32b120: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x32b120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x32b124: 0xa282000c  sb          $v0, 0xC($s4)
    ctx->pc = 0x32b124u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 12), (uint8_t)GPR_U32(ctx, 2));
    // 0x32b128: 0xa283000e  sb          $v1, 0xE($s4)
    ctx->pc = 0x32b128u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 14), (uint8_t)GPR_U32(ctx, 3));
    // 0x32b12c: 0x86830152  lh          $v1, 0x152($s4)
    ctx->pc = 0x32b12cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 338)));
    // 0x32b130: 0xc6810158  lwc1        $f1, 0x158($s4)
    ctx->pc = 0x32b130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x32b134: 0x86820150  lh          $v0, 0x150($s4)
    ctx->pc = 0x32b134u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 336)));
    // 0x32b138: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x32b138u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x32b13c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x32b13cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x32b140: 0x0  nop
    ctx->pc = 0x32b140u;
    // NOP
    // 0x32b144: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x32b144u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x32b148: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x32b148u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x32b14c: 0x0  nop
    ctx->pc = 0x32b14cu;
    // NOP
    // 0x32b150: 0x0  nop
    ctx->pc = 0x32b150u;
    // NOP
    // 0x32b154: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x32b154u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x32b158: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x32B158u;
    {
        const bool branch_taken_0x32b158 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x32b158) {
            ctx->pc = 0x32B170u;
            goto label_32b170;
        }
    }
    ctx->pc = 0x32B160u;
    // 0x32b160: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x32b160u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x32b164: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x32b164u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x32b168: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x32B168u;
    {
        const bool branch_taken_0x32b168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B168u;
        // 0x32b16c: 0xa6830002  sh          $v1, 0x2($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 2), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b168) {
            ctx->pc = 0x32B18Cu;
            goto label_32b18c;
        }
    }
    ctx->pc = 0x32B170u;
label_32b170:
    // 0x32b170: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x32b170u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x32b174: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x32b174u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x32b178: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x32b178u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x32b17c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x32b17cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x32b180: 0x0  nop
    ctx->pc = 0x32b180u;
    // NOP
    // 0x32b184: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x32b184u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x32b188: 0xa6830002  sh          $v1, 0x2($s4)
    ctx->pc = 0x32b188u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 2), (uint16_t)GPR_U32(ctx, 3));
label_32b18c:
    // 0x32b18c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x32b18cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32b190: 0x92860004  lbu         $a2, 0x4($s4)
    ctx->pc = 0x32b190u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x32b194: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x32b194u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x32b198: 0x92870006  lbu         $a3, 0x6($s4)
    ctx->pc = 0x32b198u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 6)));
    // 0x32b19c: 0x24090003  addiu       $t1, $zero, 0x3
    ctx->pc = 0x32b19cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x32b1a0: 0x96880002  lhu         $t0, 0x2($s4)
    ctx->pc = 0x32b1a0u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x32b1a4: 0xc0cae4c  jal         func_32B930
    ctx->pc = 0x32B1A4u;
    SET_GPR_U32(ctx, 31, 0x32B1ACu);
    ctx->pc = 0x32B1A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B1A4u;
    // 0x32b1a8: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32B930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32B930u, 0x32B1A4u, 0x32B1ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B1ACu;
label_32b1ac:
    // 0x32b1ac: 0x100000e4  b           . + 4 + (0xE4 << 2)
    ctx->pc = 0x32B1ACu;
    {
        const bool branch_taken_0x32b1ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32b1ac) {
            ctx->pc = 0x32B540u;
            goto label_32b540;
        }
    }
    ctx->pc = 0x32B1B4u;
    // 0x32b1b4: 0x0  nop
    ctx->pc = 0x32b1b4u;
    // NOP
label_32b1b8:
    // 0x32b1b8: 0xa2830005  sb          $v1, 0x5($s4)
    ctx->pc = 0x32b1b8u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 5), (uint8_t)GPR_U32(ctx, 3));
    // 0x32b1bc: 0x96820154  lhu         $v0, 0x154($s4)
    ctx->pc = 0x32b1bcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 340)));
    // 0x32b1c0: 0xa282000d  sb          $v0, 0xD($s4)
    ctx->pc = 0x32b1c0u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 13), (uint8_t)GPR_U32(ctx, 2));
    // 0x32b1c4: 0x96820002  lhu         $v0, 0x2($s4)
    ctx->pc = 0x32b1c4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x32b1c8: 0xa282000c  sb          $v0, 0xC($s4)
    ctx->pc = 0x32b1c8u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 12), (uint8_t)GPR_U32(ctx, 2));
    // 0x32b1cc: 0x96820154  lhu         $v0, 0x154($s4)
    ctx->pc = 0x32b1ccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 340)));
    // 0x32b1d0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x32B1D0u;
    {
        const bool branch_taken_0x32b1d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32b1d0) {
            ctx->pc = 0x32B1E0u;
            goto label_32b1e0;
        }
    }
    ctx->pc = 0x32B1D8u;
    // 0x32b1d8: 0xa6800002  sh          $zero, 0x2($s4)
    ctx->pc = 0x32b1d8u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x32b1dc: 0x0  nop
    ctx->pc = 0x32b1dcu;
    // NOP
label_32b1e0:
    // 0x32b1e0: 0xa280000e  sb          $zero, 0xE($s4)
    ctx->pc = 0x32b1e0u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 14), (uint8_t)GPR_U32(ctx, 0));
    // 0x32b1e4: 0x9283000e  lbu         $v1, 0xE($s4)
    ctx->pc = 0x32b1e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 14)));
    // 0x32b1e8: 0x96820002  lhu         $v0, 0x2($s4)
    ctx->pc = 0x32b1e8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x32b1ec: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x32b1ecu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x32b1f0: 0x10200017  beqz        $at, . + 4 + (0x17 << 2)
    ctx->pc = 0x32B1F0u;
    {
        const bool branch_taken_0x32b1f0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x32b1f0) {
            ctx->pc = 0x32B250u;
            goto label_32b250;
        }
    }
    ctx->pc = 0x32B1F8u;
label_32b1f8:
    // 0x32b1f8: 0x92820004  lbu         $v0, 0x4($s4)
    ctx->pc = 0x32b1f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x32b1fc: 0x92870006  lbu         $a3, 0x6($s4)
    ctx->pc = 0x32b1fcu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 6)));
    // 0x32b200: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x32b200u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32b204: 0x9688015c  lhu         $t0, 0x15C($s4)
    ctx->pc = 0x32b204u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 348)));
    // 0x32b208: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x32b208u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x32b20c: 0x24090005  addiu       $t1, $zero, 0x5
    ctx->pc = 0x32b20cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x32b210: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x32b210u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32b214: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x32b214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x32b218: 0xc0cae4c  jal         func_32B930
    ctx->pc = 0x32B218u;
    SET_GPR_U32(ctx, 31, 0x32B220u);
    ctx->pc = 0x32B21Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B218u;
    // 0x32b21c: 0x304600ff  andi        $a2, $v0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x32B930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32B930u, 0x32B218u, 0x32B220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B220u;
label_32b220:
    // 0x32b220: 0x9282000c  lbu         $v0, 0xC($s4)
    ctx->pc = 0x32b220u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x32b224: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x32b224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x32b228: 0xa282000c  sb          $v0, 0xC($s4)
    ctx->pc = 0x32b228u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 12), (uint8_t)GPR_U32(ctx, 2));
    // 0x32b22c: 0x9282000e  lbu         $v0, 0xE($s4)
    ctx->pc = 0x32b22cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 14)));
    // 0x32b230: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x32b230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x32b234: 0xa282000e  sb          $v0, 0xE($s4)
    ctx->pc = 0x32b234u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 14), (uint8_t)GPR_U32(ctx, 2));
    // 0x32b238: 0x9283000e  lbu         $v1, 0xE($s4)
    ctx->pc = 0x32b238u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 14)));
    // 0x32b23c: 0x96820002  lhu         $v0, 0x2($s4)
    ctx->pc = 0x32b23cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x32b240: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x32b240u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x32b244: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x32B244u;
    {
        const bool branch_taken_0x32b244 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32b244) {
            ctx->pc = 0x32B1F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32b1f8;
        }
    }
    ctx->pc = 0x32B24Cu;
    // 0x32b24c: 0x0  nop
    ctx->pc = 0x32b24cu;
    // NOP
label_32b250:
    // 0x32b250: 0x9682015c  lhu         $v0, 0x15C($s4)
    ctx->pc = 0x32b250u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 348)));
    // 0x32b254: 0x100000ba  b           . + 4 + (0xBA << 2)
    ctx->pc = 0x32B254u;
    {
        const bool branch_taken_0x32b254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B254u;
        // 0x32b258: 0xa6820002  sh          $v0, 0x2($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b254) {
            ctx->pc = 0x32B540u;
            goto label_32b540;
        }
    }
    ctx->pc = 0x32B25Cu;
    // 0x32b25c: 0x0  nop
    ctx->pc = 0x32b25cu;
    // NOP
label_32b260:
    // 0x32b260: 0x92850004  lbu         $a1, 0x4($s4)
    ctx->pc = 0x32b260u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x32b264: 0x92860006  lbu         $a2, 0x6($s4)
    ctx->pc = 0x32b264u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 6)));
    // 0x32b268: 0xc0e4a3c  jal         func_3928F0
    ctx->pc = 0x32B268u;
    SET_GPR_U32(ctx, 31, 0x32B270u);
    ctx->pc = 0x32B26Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B268u;
    // 0x32b26c: 0x2684016c  addiu       $a0, $s4, 0x16C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 364));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3928F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3928F0u, 0x32B268u, 0x32B270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B270u;
label_32b270:
    // 0x32b270: 0x100000b3  b           . + 4 + (0xB3 << 2)
    ctx->pc = 0x32B270u;
    {
        const bool branch_taken_0x32b270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B270u;
        // 0x32b274: 0xa2800006  sb          $zero, 0x6($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 6), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b270) {
            ctx->pc = 0x32B540u;
            goto label_32b540;
        }
    }
    ctx->pc = 0x32B278u;
label_32b278:
    // 0x32b278: 0x92850006  lbu         $a1, 0x6($s4)
    ctx->pc = 0x32b278u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 6)));
    // 0x32b27c: 0xc0e4a5c  jal         func_392970
    ctx->pc = 0x32B27Cu;
    SET_GPR_U32(ctx, 31, 0x32B284u);
    ctx->pc = 0x32B280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B27Cu;
    // 0x32b280: 0x2684016c  addiu       $a0, $s4, 0x16C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 364));
    ctx->in_delay_slot = false;
    ctx->pc = 0x392970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x392970u, 0x32B27Cu, 0x32B284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B284u;
label_32b284:
    // 0x32b284: 0x100000ae  b           . + 4 + (0xAE << 2)
    ctx->pc = 0x32B284u;
    {
        const bool branch_taken_0x32b284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B284u;
        // 0x32b288: 0xa2800006  sb          $zero, 0x6($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 6), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b284) {
            ctx->pc = 0x32B540u;
            goto label_32b540;
        }
    }
    ctx->pc = 0x32B28Cu;
    // 0x32b28c: 0x0  nop
    ctx->pc = 0x32b28cu;
    // NOP
label_32b290:
    // 0x32b290: 0x92820164  lbu         $v0, 0x164($s4)
    ctx->pc = 0x32b290u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 356)));
    // 0x32b294: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x32b294u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x32b298: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x32B298u;
    {
        const bool branch_taken_0x32b298 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32b298) {
            ctx->pc = 0x32B320u;
            goto label_32b320;
        }
    }
    ctx->pc = 0x32B2A0u;
    // 0x32b2a0: 0x96820002  lhu         $v0, 0x2($s4)
    ctx->pc = 0x32b2a0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x32b2a4: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x32B2A4u;
    {
        const bool branch_taken_0x32b2a4 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x32B2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B2A4u;
        // 0x32b2a8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b2a4) {
            ctx->pc = 0x32B2B8u;
            goto label_32b2b8;
        }
    }
    ctx->pc = 0x32B2ACu;
    // 0x32b2ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32b2acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32b2b0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x32B2B0u;
    {
        const bool branch_taken_0x32b2b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B2B0u;
        // 0x32b2b4: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b2b0) {
            ctx->pc = 0x32B2D0u;
            goto label_32b2d0;
        }
    }
    ctx->pc = 0x32B2B8u;
label_32b2b8:
    // 0x32b2b8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x32b2b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x32b2bc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x32b2bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x32b2c0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x32b2c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32b2c4: 0x0  nop
    ctx->pc = 0x32b2c4u;
    // NOP
    // 0x32b2c8: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x32b2c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x32b2cc: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x32b2ccu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_32b2d0:
    // 0x32b2d0: 0xc6810168  lwc1        $f1, 0x168($s4)
    ctx->pc = 0x32b2d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x32b2d4: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x32b2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x32b2d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32b2d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32b2dc: 0x0  nop
    ctx->pc = 0x32b2dcu;
    // NOP
    // 0x32b2e0: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x32b2e0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x32b2e4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x32b2e4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x32b2e8: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x32B2E8u;
    {
        const bool branch_taken_0x32b2e8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x32b2e8) {
            ctx->pc = 0x32B300u;
            goto label_32b300;
        }
    }
    ctx->pc = 0x32B2F0u;
    // 0x32b2f0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x32b2f0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x32b2f4: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x32b2f4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x32b2f8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x32B2F8u;
    {
        const bool branch_taken_0x32b2f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B2F8u;
        // 0x32b2fc: 0xa6830002  sh          $v1, 0x2($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 2), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b2f8) {
            ctx->pc = 0x32B31Cu;
            goto label_32b31c;
        }
    }
    ctx->pc = 0x32B300u;
label_32b300:
    // 0x32b300: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x32b300u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x32b304: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x32b304u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x32b308: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x32b308u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x32b30c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x32b30cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x32b310: 0x0  nop
    ctx->pc = 0x32b310u;
    // NOP
    // 0x32b314: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x32b314u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x32b318: 0xa6830002  sh          $v1, 0x2($s4)
    ctx->pc = 0x32b318u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 2), (uint16_t)GPR_U32(ctx, 3));
label_32b31c:
    // 0x32b31c: 0x0  nop
    ctx->pc = 0x32b31cu;
    // NOP
label_32b320:
    // 0x32b320: 0x96820002  lhu         $v0, 0x2($s4)
    ctx->pc = 0x32b320u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x32b324: 0x92860004  lbu         $a2, 0x4($s4)
    ctx->pc = 0x32b324u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x32b328: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x32b328u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32b32c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x32b32cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32b330: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x32b330u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x32b334: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x32b334u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32b338: 0x240a0080  addiu       $t2, $zero, 0x80
    ctx->pc = 0x32b338u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x32b33c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x32b33cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x32b340: 0xc0cae4c  jal         func_32B930
    ctx->pc = 0x32B340u;
    SET_GPR_U32(ctx, 31, 0x32B348u);
    ctx->pc = 0x32B344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B340u;
    // 0x32b344: 0x3048ffff  andi        $t0, $v0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x32B930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32B930u, 0x32B340u, 0x32B348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B348u;
label_32b348:
    // 0x32b348: 0xa2800005  sb          $zero, 0x5($s4)
    ctx->pc = 0x32b348u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x32b34c: 0x3c040092  lui         $a0, 0x92
    ctx->pc = 0x32b34cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)146 << 16));
    // 0x32b350: 0xa280000c  sb          $zero, 0xC($s4)
    ctx->pc = 0x32b350u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 12), (uint8_t)GPR_U32(ctx, 0));
    // 0x32b354: 0x24843320  addiu       $a0, $a0, 0x3320
    ctx->pc = 0x32b354u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13088));
    // 0x32b358: 0x96820002  lhu         $v0, 0x2($s4)
    ctx->pc = 0x32b358u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x32b35c: 0x82850006  lb          $a1, 0x6($s4)
    ctx->pc = 0x32b35cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 6)));
    // 0x32b360: 0xc0e80f0  jal         func_3A03C0
    ctx->pc = 0x32B360u;
    SET_GPR_U32(ctx, 31, 0x32B368u);
    ctx->pc = 0x32B364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B360u;
    // 0x32b364: 0x23040  sll         $a2, $v0, 1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A03C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A03C0u, 0x32B360u, 0x32B368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B368u;
label_32b368:
    // 0x32b368: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x32b368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x32b36c: 0x10000074  b           . + 4 + (0x74 << 2)
    ctx->pc = 0x32B36Cu;
    {
        const bool branch_taken_0x32b36c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B36Cu;
        // 0x32b370: 0xa2820006  sb          $v0, 0x6($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 6), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b36c) {
            ctx->pc = 0x32B540u;
            goto label_32b540;
        }
    }
    ctx->pc = 0x32B374u;
    // 0x32b374: 0x0  nop
    ctx->pc = 0x32b374u;
    // NOP
label_32b378:
    // 0x32b378: 0x82850004  lb          $a1, 0x4($s4)
    ctx->pc = 0x32b378u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x32b37c: 0x3c040092  lui         $a0, 0x92
    ctx->pc = 0x32b37cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)146 << 16));
    // 0x32b380: 0xc0e806c  jal         func_3A01B0
    ctx->pc = 0x32B380u;
    SET_GPR_U32(ctx, 31, 0x32B388u);
    ctx->pc = 0x32B384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B380u;
    // 0x32b384: 0x24843320  addiu       $a0, $a0, 0x3320 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13088));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A01B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A01B0u, 0x32B380u, 0x32B388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B388u;
label_32b388:
    // 0x32b388: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x32B388u;
    {
        const bool branch_taken_0x32b388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32b388) {
            ctx->pc = 0x32B540u;
            goto label_32b540;
        }
    }
    ctx->pc = 0x32B390u;
label_32b390:
    // 0x32b390: 0x92820164  lbu         $v0, 0x164($s4)
    ctx->pc = 0x32b390u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 356)));
    // 0x32b394: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x32b394u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x32b398: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x32B398u;
    {
        const bool branch_taken_0x32b398 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32b398) {
            ctx->pc = 0x32B438u;
            goto label_32b438;
        }
    }
    ctx->pc = 0x32B3A0u;
    // 0x32b3a0: 0x96830002  lhu         $v1, 0x2($s4)
    ctx->pc = 0x32b3a0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x32b3a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32b3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32b3a8: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x32B3A8u;
    {
        const bool branch_taken_0x32b3a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x32B3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B3A8u;
        // 0x32b3ac: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b3a8) {
            ctx->pc = 0x32B3B8u;
            goto label_32b3b8;
        }
    }
    ctx->pc = 0x32B3B0u;
    // 0x32b3b0: 0xa6820002  sh          $v0, 0x2($s4)
    ctx->pc = 0x32b3b0u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x32b3b4: 0x0  nop
    ctx->pc = 0x32b3b4u;
    // NOP
label_32b3b8:
    // 0x32b3b8: 0x96820002  lhu         $v0, 0x2($s4)
    ctx->pc = 0x32b3b8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x32b3bc: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x32B3BCu;
    {
        const bool branch_taken_0x32b3bc = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x32B3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B3BCu;
        // 0x32b3c0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b3bc) {
            ctx->pc = 0x32B3D0u;
            goto label_32b3d0;
        }
    }
    ctx->pc = 0x32B3C4u;
    // 0x32b3c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32b3c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32b3c8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x32B3C8u;
    {
        const bool branch_taken_0x32b3c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B3C8u;
        // 0x32b3cc: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b3c8) {
            ctx->pc = 0x32B3E8u;
            goto label_32b3e8;
        }
    }
    ctx->pc = 0x32B3D0u;
label_32b3d0:
    // 0x32b3d0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x32b3d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x32b3d4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x32b3d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x32b3d8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x32b3d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32b3dc: 0x0  nop
    ctx->pc = 0x32b3dcu;
    // NOP
    // 0x32b3e0: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x32b3e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x32b3e4: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x32b3e4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_32b3e8:
    // 0x32b3e8: 0xc6810168  lwc1        $f1, 0x168($s4)
    ctx->pc = 0x32b3e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x32b3ec: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x32b3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x32b3f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32b3f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32b3f4: 0x0  nop
    ctx->pc = 0x32b3f4u;
    // NOP
    // 0x32b3f8: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x32b3f8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x32b3fc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x32b3fcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x32b400: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x32B400u;
    {
        const bool branch_taken_0x32b400 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x32b400) {
            ctx->pc = 0x32B418u;
            goto label_32b418;
        }
    }
    ctx->pc = 0x32B408u;
    // 0x32b408: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x32b408u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x32b40c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x32b40cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x32b410: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x32B410u;
    {
        const bool branch_taken_0x32b410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B410u;
        // 0x32b414: 0xa6830002  sh          $v1, 0x2($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 2), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b410) {
            ctx->pc = 0x32B434u;
            goto label_32b434;
        }
    }
    ctx->pc = 0x32B418u;
label_32b418:
    // 0x32b418: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x32b418u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x32b41c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x32b41cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x32b420: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x32b420u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x32b424: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x32b424u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x32b428: 0x0  nop
    ctx->pc = 0x32b428u;
    // NOP
    // 0x32b42c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x32b42cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x32b430: 0xa6830002  sh          $v1, 0x2($s4)
    ctx->pc = 0x32b430u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 2), (uint16_t)GPR_U32(ctx, 3));
label_32b434:
    // 0x32b434: 0x0  nop
    ctx->pc = 0x32b434u;
    // NOP
label_32b438:
    // 0x32b438: 0x96820002  lhu         $v0, 0x2($s4)
    ctx->pc = 0x32b438u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x32b43c: 0x82850006  lb          $a1, 0x6($s4)
    ctx->pc = 0x32b43cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 6)));
    // 0x32b440: 0x3c040092  lui         $a0, 0x92
    ctx->pc = 0x32b440u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)146 << 16));
    // 0x32b444: 0x92860004  lbu         $a2, 0x4($s4)
    ctx->pc = 0x32b444u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x32b448: 0x24843320  addiu       $a0, $a0, 0x3320
    ctx->pc = 0x32b448u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13088));
    // 0x32b44c: 0xc0e8074  jal         func_3A01D0
    ctx->pc = 0x32B44Cu;
    SET_GPR_U32(ctx, 31, 0x32B454u);
    ctx->pc = 0x32B450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B44Cu;
    // 0x32b450: 0x23840  sll         $a3, $v0, 1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A01D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A01D0u, 0x32B44Cu, 0x32B454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B454u;
label_32b454:
    // 0x32b454: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x32B454u;
    {
        const bool branch_taken_0x32b454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B454u;
        // 0x32b458: 0xa2800006  sb          $zero, 0x6($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 6), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b454) {
            ctx->pc = 0x32B540u;
            goto label_32b540;
        }
    }
    ctx->pc = 0x32B45Cu;
    // 0x32b45c: 0x0  nop
    ctx->pc = 0x32b45cu;
    // NOP
label_32b460:
    // 0x32b460: 0x92820164  lbu         $v0, 0x164($s4)
    ctx->pc = 0x32b460u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 356)));
    // 0x32b464: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x32b464u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x32b468: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x32B468u;
    {
        const bool branch_taken_0x32b468 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32b468) {
            ctx->pc = 0x32B4F0u;
            goto label_32b4f0;
        }
    }
    ctx->pc = 0x32B470u;
    // 0x32b470: 0x96820002  lhu         $v0, 0x2($s4)
    ctx->pc = 0x32b470u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x32b474: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x32B474u;
    {
        const bool branch_taken_0x32b474 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x32B478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B474u;
        // 0x32b478: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b474) {
            ctx->pc = 0x32B488u;
            goto label_32b488;
        }
    }
    ctx->pc = 0x32B47Cu;
    // 0x32b47c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32b47cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32b480: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x32B480u;
    {
        const bool branch_taken_0x32b480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B480u;
        // 0x32b484: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b480) {
            ctx->pc = 0x32B4A0u;
            goto label_32b4a0;
        }
    }
    ctx->pc = 0x32B488u;
label_32b488:
    // 0x32b488: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x32b488u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x32b48c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x32b48cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x32b490: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x32b490u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32b494: 0x0  nop
    ctx->pc = 0x32b494u;
    // NOP
    // 0x32b498: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x32b498u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x32b49c: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x32b49cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_32b4a0:
    // 0x32b4a0: 0xc6810168  lwc1        $f1, 0x168($s4)
    ctx->pc = 0x32b4a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x32b4a4: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x32b4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x32b4a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32b4a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32b4ac: 0x0  nop
    ctx->pc = 0x32b4acu;
    // NOP
    // 0x32b4b0: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x32b4b0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x32b4b4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x32b4b4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x32b4b8: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x32B4B8u;
    {
        const bool branch_taken_0x32b4b8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x32b4b8) {
            ctx->pc = 0x32B4D0u;
            goto label_32b4d0;
        }
    }
    ctx->pc = 0x32B4C0u;
    // 0x32b4c0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x32b4c0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x32b4c4: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x32b4c4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x32b4c8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x32B4C8u;
    {
        const bool branch_taken_0x32b4c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B4C8u;
        // 0x32b4cc: 0xa6830002  sh          $v1, 0x2($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 2), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b4c8) {
            ctx->pc = 0x32B4ECu;
            goto label_32b4ec;
        }
    }
    ctx->pc = 0x32B4D0u;
label_32b4d0:
    // 0x32b4d0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x32b4d0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x32b4d4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x32b4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x32b4d8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x32b4d8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x32b4dc: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x32b4dcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x32b4e0: 0x0  nop
    ctx->pc = 0x32b4e0u;
    // NOP
    // 0x32b4e4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x32b4e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x32b4e8: 0xa6830002  sh          $v1, 0x2($s4)
    ctx->pc = 0x32b4e8u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 2), (uint16_t)GPR_U32(ctx, 3));
label_32b4ec:
    // 0x32b4ec: 0x0  nop
    ctx->pc = 0x32b4ecu;
    // NOP
label_32b4f0:
    // 0x32b4f0: 0x96820002  lhu         $v0, 0x2($s4)
    ctx->pc = 0x32b4f0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x32b4f4: 0x92860004  lbu         $a2, 0x4($s4)
    ctx->pc = 0x32b4f4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x32b4f8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x32b4f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32b4fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x32b4fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32b500: 0x24070006  addiu       $a3, $zero, 0x6
    ctx->pc = 0x32b500u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x32b504: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x32b504u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32b508: 0x240a0080  addiu       $t2, $zero, 0x80
    ctx->pc = 0x32b508u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x32b50c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x32b50cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x32b510: 0xc0cae4c  jal         func_32B930
    ctx->pc = 0x32B510u;
    SET_GPR_U32(ctx, 31, 0x32B518u);
    ctx->pc = 0x32B514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B510u;
    // 0x32b514: 0x3048ffff  andi        $t0, $v0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x32B930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32B930u, 0x32B510u, 0x32B518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B518u;
label_32b518:
    // 0x32b518: 0xa2800005  sb          $zero, 0x5($s4)
    ctx->pc = 0x32b518u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x32b51c: 0x3c040092  lui         $a0, 0x92
    ctx->pc = 0x32b51cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)146 << 16));
    // 0x32b520: 0xa280000c  sb          $zero, 0xC($s4)
    ctx->pc = 0x32b520u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 12), (uint8_t)GPR_U32(ctx, 0));
    // 0x32b524: 0x24843320  addiu       $a0, $a0, 0x3320
    ctx->pc = 0x32b524u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13088));
    // 0x32b528: 0x96820002  lhu         $v0, 0x2($s4)
    ctx->pc = 0x32b528u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x32b52c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x32b52cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x32b530: 0xc0e80f0  jal         func_3A03C0
    ctx->pc = 0x32B530u;
    SET_GPR_U32(ctx, 31, 0x32B538u);
    ctx->pc = 0x32B534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B530u;
    // 0x32b534: 0x23040  sll         $a2, $v0, 1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A03C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A03C0u, 0x32B530u, 0x32B538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B538u;
label_32b538:
    // 0x32b538: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x32b538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x32b53c: 0xa2820006  sb          $v0, 0x6($s4)
    ctx->pc = 0x32b53cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 6), (uint8_t)GPR_U32(ctx, 2));
label_32b540:
    // 0x32b540: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x32b540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x32b544: 0x24420006  addiu       $v0, $v0, 0x6
    ctx->pc = 0x32b544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6));
    // 0x32b548: 0xae820008  sw          $v0, 0x8($s4)
    ctx->pc = 0x32b548u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 2));
    // 0x32b54c: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x32b54cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x32b550: 0x92830164  lbu         $v1, 0x164($s4)
    ctx->pc = 0x32b550u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 356)));
    // 0x32b554: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x32b554u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x32b558: 0x1060001f  beqz        $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x32B558u;
    {
        const bool branch_taken_0x32b558 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B558u;
        // 0x32b55c: 0x94500000  lhu         $s0, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b558) {
            ctx->pc = 0x32B5D8u;
            goto label_32b5d8;
        }
    }
    ctx->pc = 0x32B560u;
    // 0x32b560: 0x6000004  bltz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x32B560u;
    {
        const bool branch_taken_0x32b560 = (GPR_S64(ctx, 16) < 0);
        ctx->pc = 0x32B564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B560u;
        // 0x32b564: 0x102042  srl         $a0, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b560) {
            ctx->pc = 0x32B574u;
            goto label_32b574;
        }
    }
    ctx->pc = 0x32B568u;
    // 0x32b568: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x32b568u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32b56c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x32B56Cu;
    {
        const bool branch_taken_0x32b56c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B56Cu;
        // 0x32b570: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b56c) {
            ctx->pc = 0x32B58Cu;
            goto label_32b58c;
        }
    }
    ctx->pc = 0x32B574u;
label_32b574:
    // 0x32b574: 0x32030001  andi        $v1, $s0, 0x1
    ctx->pc = 0x32b574u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x32b578: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x32b578u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x32b57c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x32b57cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32b580: 0x0  nop
    ctx->pc = 0x32b580u;
    // NOP
    // 0x32b584: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x32b584u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x32b588: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x32b588u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_32b58c:
    // 0x32b58c: 0xc6810168  lwc1        $f1, 0x168($s4)
    ctx->pc = 0x32b58cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x32b590: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x32b590u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x32b594: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x32b594u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32b598: 0x0  nop
    ctx->pc = 0x32b598u;
    // NOP
    // 0x32b59c: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x32b59cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x32b5a0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x32b5a0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x32b5a4: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x32B5A4u;
    {
        const bool branch_taken_0x32b5a4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x32b5a4) {
            ctx->pc = 0x32B5BCu;
            goto label_32b5bc;
        }
    }
    ctx->pc = 0x32B5ACu;
    // 0x32b5ac: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x32b5acu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x32b5b0: 0x44100800  mfc1        $s0, $f1
    ctx->pc = 0x32b5b0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
    // 0x32b5b4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x32B5B4u;
    {
        const bool branch_taken_0x32b5b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32b5b4) {
            ctx->pc = 0x32B5D4u;
            goto label_32b5d4;
        }
    }
    ctx->pc = 0x32B5BCu;
label_32b5bc:
    // 0x32b5bc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x32b5bcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x32b5c0: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x32b5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x32b5c4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x32b5c4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x32b5c8: 0x44100800  mfc1        $s0, $f1
    ctx->pc = 0x32b5c8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
    // 0x32b5cc: 0x0  nop
    ctx->pc = 0x32b5ccu;
    // NOP
    // 0x32b5d0: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x32b5d0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
label_32b5d4:
    // 0x32b5d4: 0x0  nop
    ctx->pc = 0x32b5d4u;
    // NOP
label_32b5d8:
    // 0x32b5d8: 0x92840001  lbu         $a0, 0x1($s4)
    ctx->pc = 0x32b5d8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1)));
    // 0x32b5dc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x32b5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32b5e0: 0x14830007  bne         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x32B5E0u;
    {
        const bool branch_taken_0x32b5e0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x32B5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B5E0u;
        // 0x32b5e4: 0x270182b  sltu        $v1, $s3, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b5e0) {
            ctx->pc = 0x32B600u;
            goto label_32b600;
        }
    }
    ctx->pc = 0x32B5E8u;
    // 0x32b5e8: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x32B5E8u;
    {
        const bool branch_taken_0x32b5e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x32b5e8) {
            ctx->pc = 0x32B600u;
            goto label_32b600;
        }
    }
    ctx->pc = 0x32B5F0u;
    // 0x32b5f0: 0x90430005  lbu         $v1, 0x5($v0)
    ctx->pc = 0x32b5f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5)));
    // 0x32b5f4: 0x286300fe  slti        $v1, $v1, 0xFE
    ctx->pc = 0x32b5f4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)254) ? 1 : 0);
    // 0x32b5f8: 0x1460fe05  bnez        $v1, . + 4 + (-0x1FB << 2)
    ctx->pc = 0x32B5F8u;
    {
        const bool branch_taken_0x32b5f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x32b5f8) {
            ctx->pc = 0x32AE10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32ae10;
        }
    }
    ctx->pc = 0x32B600u;
label_32b600:
    // 0x32b600: 0x2684016c  addiu       $a0, $s4, 0x16C
    ctx->pc = 0x32b600u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 364));
    // 0x32b604: 0xc0e4a74  jal         func_3929D0
    ctx->pc = 0x32B604u;
    SET_GPR_U32(ctx, 31, 0x32B60Cu);
    ctx->pc = 0x32B608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B604u;
    // 0x32b608: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3929D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3929D0u, 0x32B604u, 0x32B60Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B60Cu;
label_32b60c:
    // 0x32b60c: 0x92840005  lbu         $a0, 0x5($s4)
    ctx->pc = 0x32b60cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 5)));
    // 0x32b610: 0x24150014  addiu       $s5, $zero, 0x14
    ctx->pc = 0x32b610u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x32b614: 0x82820007  lb          $v0, 0x7($s4)
    ctx->pc = 0x32b614u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 7)));
    // 0x32b618: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x32b618u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32b61c: 0x26920010  addiu       $s2, $s4, 0x10
    ctx->pc = 0x32b61cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x32b620: 0x30840006  andi        $a0, $a0, 0x6
    ctx->pc = 0x32b620u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)6);
    // 0x32b624: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x32B624u;
    {
        const bool branch_taken_0x32b624 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B624u;
        // 0x32b628: 0x64a80a  movz        $s5, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b624) {
            ctx->pc = 0x32B634u;
            goto label_32b634;
        }
    }
    ctx->pc = 0x32B62Cu;
    // 0x32b62c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x32B62Cu;
    {
        const bool branch_taken_0x32b62c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B62Cu;
        // 0x32b630: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b62c) {
            ctx->pc = 0x32B644u;
            goto label_32b644;
        }
    }
    ctx->pc = 0x32B634u;
label_32b634:
    // 0x32b634: 0x3c04008c  lui         $a0, 0x8C
    ctx->pc = 0x32b634u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)140 << 16));
    // 0x32b638: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x32b638u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x32b63c: 0xc09bcc8  jal         func_26F320
    ctx->pc = 0x32B63Cu;
    SET_GPR_U32(ctx, 31, 0x32B644u);
    ctx->pc = 0x32B640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B63Cu;
    // 0x32b640: 0x24840500  addiu       $a0, $a0, 0x500 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26F320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26F320u, 0x32B63Cu, 0x32B644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B644u;
label_32b644:
    // 0x32b644: 0x15082a  slt         $at, $zero, $s5
    ctx->pc = 0x32b644u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x32b648: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x32b648u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32b64c: 0x102000ac  beqz        $at, . + 4 + (0xAC << 2)
    ctx->pc = 0x32B64Cu;
    {
        const bool branch_taken_0x32b64c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B64Cu;
        // 0x32b650: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b64c) {
            ctx->pc = 0x32B900u;
            goto label_32b900;
        }
    }
    ctx->pc = 0x32B654u;
    // 0x32b654: 0x0  nop
    ctx->pc = 0x32b654u;
    // NOP
label_32b658:
    // 0x32b658: 0x9242000a  lbu         $v0, 0xA($s2)
    ctx->pc = 0x32b658u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 10)));
    // 0x32b65c: 0x284100fe  slti        $at, $v0, 0xFE
    ctx->pc = 0x32b65cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)254) ? 1 : 0);
    // 0x32b660: 0x1020009b  beqz        $at, . + 4 + (0x9B << 2)
    ctx->pc = 0x32B660u;
    {
        const bool branch_taken_0x32b660 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x32b660) {
            ctx->pc = 0x32B8D0u;
            goto label_32b8d0;
        }
    }
    ctx->pc = 0x32B668u;
    // 0x32b668: 0x9643000c  lhu         $v1, 0xC($s2)
    ctx->pc = 0x32b668u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x32b66c: 0x10600098  beqz        $v1, . + 4 + (0x98 << 2)
    ctx->pc = 0x32B66Cu;
    {
        const bool branch_taken_0x32b66c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x32b66c) {
            ctx->pc = 0x32B8D0u;
            goto label_32b8d0;
        }
    }
    ctx->pc = 0x32B674u;
    // 0x32b674: 0x92420008  lbu         $v0, 0x8($s2)
    ctx->pc = 0x32b674u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x32b678: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x32b678u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x32b67c: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x32B67Cu;
    {
        const bool branch_taken_0x32b67c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B67Cu;
        // 0x32b680: 0x3062ffff  andi        $v0, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b67c) {
            ctx->pc = 0x32B6F0u;
            goto label_32b6f0;
        }
    }
    ctx->pc = 0x32B684u;
    // 0x32b684: 0x28410010  slti        $at, $v0, 0x10
    ctx->pc = 0x32b684u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x32b688: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x32B688u;
    {
        const bool branch_taken_0x32b688 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x32b688) {
            ctx->pc = 0x32B6C0u;
            goto label_32b6c0;
        }
    }
    ctx->pc = 0x32B690u;
    // 0x32b690: 0x92420009  lbu         $v0, 0x9($s2)
    ctx->pc = 0x32b690u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 9)));
    // 0x32b694: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x32B694u;
    {
        const bool branch_taken_0x32b694 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32b694) {
            ctx->pc = 0x32B6C0u;
            goto label_32b6c0;
        }
    }
    ctx->pc = 0x32B69Cu;
    // 0x32b69c: 0x2442fff8  addiu       $v0, $v0, -0x8
    ctx->pc = 0x32b69cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
    // 0x32b6a0: 0xa2420009  sb          $v0, 0x9($s2)
    ctx->pc = 0x32b6a0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 9), (uint8_t)GPR_U32(ctx, 2));
    // 0x32b6a4: 0x92420009  lbu         $v0, 0x9($s2)
    ctx->pc = 0x32b6a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 9)));
    // 0x32b6a8: 0x28410081  slti        $at, $v0, 0x81
    ctx->pc = 0x32b6a8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)129) ? 1 : 0);
    // 0x32b6ac: 0x14200010  bnez        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x32B6ACu;
    {
        const bool branch_taken_0x32b6ac = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x32b6ac) {
            ctx->pc = 0x32B6F0u;
            goto label_32b6f0;
        }
    }
    ctx->pc = 0x32B6B4u;
    // 0x32b6b4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x32B6B4u;
    {
        const bool branch_taken_0x32b6b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B6B4u;
        // 0x32b6b8: 0xa2400009  sb          $zero, 0x9($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 9), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b6b4) {
            ctx->pc = 0x32B6F0u;
            goto label_32b6f0;
        }
    }
    ctx->pc = 0x32B6BCu;
    // 0x32b6bc: 0x0  nop
    ctx->pc = 0x32b6bcu;
    // NOP
label_32b6c0:
    // 0x32b6c0: 0x92420009  lbu         $v0, 0x9($s2)
    ctx->pc = 0x32b6c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 9)));
    // 0x32b6c4: 0x28410080  slti        $at, $v0, 0x80
    ctx->pc = 0x32b6c4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x32b6c8: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x32B6C8u;
    {
        const bool branch_taken_0x32b6c8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x32b6c8) {
            ctx->pc = 0x32B6F0u;
            goto label_32b6f0;
        }
    }
    ctx->pc = 0x32B6D0u;
    // 0x32b6d0: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x32b6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x32b6d4: 0xa2420009  sb          $v0, 0x9($s2)
    ctx->pc = 0x32b6d4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 9), (uint8_t)GPR_U32(ctx, 2));
    // 0x32b6d8: 0x92420009  lbu         $v0, 0x9($s2)
    ctx->pc = 0x32b6d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 9)));
    // 0x32b6dc: 0x28410081  slti        $at, $v0, 0x81
    ctx->pc = 0x32b6dcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)129) ? 1 : 0);
    // 0x32b6e0: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x32B6E0u;
    {
        const bool branch_taken_0x32b6e0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x32b6e0) {
            ctx->pc = 0x32B6F0u;
            goto label_32b6f0;
        }
    }
    ctx->pc = 0x32B6E8u;
    // 0x32b6e8: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x32b6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x32b6ec: 0xa2420009  sb          $v0, 0x9($s2)
    ctx->pc = 0x32b6ecu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 9), (uint8_t)GPR_U32(ctx, 2));
label_32b6f0:
    // 0x32b6f0: 0x92420008  lbu         $v0, 0x8($s2)
    ctx->pc = 0x32b6f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x32b6f4: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x32b6f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x32b6f8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x32B6F8u;
    {
        const bool branch_taken_0x32b6f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32b6f8) {
            ctx->pc = 0x32B720u;
            goto label_32b720;
        }
    }
    ctx->pc = 0x32B700u;
    // 0x32b700: 0xc6810158  lwc1        $f1, 0x158($s4)
    ctx->pc = 0x32b700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x32b704: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x32b704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32b708: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x32b708u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x32b70c: 0xe6400004  swc1        $f0, 0x4($s2)
    ctx->pc = 0x32b70cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x32b710: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x32b710u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x32b714: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x32b714u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x32b718: 0x0  nop
    ctx->pc = 0x32b718u;
    // NOP
    // 0x32b71c: 0xa6420002  sh          $v0, 0x2($s2)
    ctx->pc = 0x32b71cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2), (uint16_t)GPR_U32(ctx, 2));
label_32b720:
    // 0x32b720: 0x16c0006b  bnez        $s6, . + 4 + (0x6B << 2)
    ctx->pc = 0x32B720u;
    {
        const bool branch_taken_0x32b720 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x32b720) {
            ctx->pc = 0x32B8D0u;
            goto label_32b8d0;
        }
    }
    ctx->pc = 0x32B728u;
    // 0x32b728: 0x92820001  lbu         $v0, 0x1($s4)
    ctx->pc = 0x32b728u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1)));
    // 0x32b72c: 0x14400038  bnez        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x32B72Cu;
    {
        const bool branch_taken_0x32b72c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32B730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B72Cu;
        // 0x32b730: 0x86500002  lh          $s0, 0x2($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b72c) {
            ctx->pc = 0x32B810u;
            goto label_32b810;
        }
    }
    ctx->pc = 0x32B734u;
    // 0x32b734: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x32b734u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x32b738: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x32b738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x32b73c: 0x9023fc8c  lbu         $v1, -0x374($at)
    ctx->pc = 0x32b73cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x81FC8Cu));
    // 0x32b740: 0x14620015  bne         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x32B740u;
    {
        const bool branch_taken_0x32b740 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x32B744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B740u;
        // 0x32b744: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b740) {
            ctx->pc = 0x32B798u;
            goto label_32b798;
        }
    }
    ctx->pc = 0x32B748u;
    // 0x32b748: 0x8c22ceb8  lw          $v0, -0x3148($at)
    ctx->pc = 0x32b748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954680)));
    // 0x32b74c: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x32b74cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x32b750: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x32B750u;
    {
        const bool branch_taken_0x32b750 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32b750) {
            ctx->pc = 0x32B798u;
            goto label_32b798;
        }
    }
    ctx->pc = 0x32B758u;
    // 0x32b758: 0x92820164  lbu         $v0, 0x164($s4)
    ctx->pc = 0x32b758u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 356)));
    // 0x32b75c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x32b75cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x32b760: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x32B760u;
    {
        const bool branch_taken_0x32b760 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32b760) {
            ctx->pc = 0x32B790u;
            goto label_32b790;
        }
    }
    ctx->pc = 0x32B768u;
    // 0x32b768: 0x92830006  lbu         $v1, 0x6($s4)
    ctx->pc = 0x32b768u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 6)));
    // 0x32b76c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x32b76cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x32b770: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x32B770u;
    {
        const bool branch_taken_0x32b770 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x32B774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B770u;
        // 0x32b774: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b770) {
            ctx->pc = 0x32B780u;
            goto label_32b780;
        }
    }
    ctx->pc = 0x32B778u;
    // 0x32b778: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x32B778u;
    {
        const bool branch_taken_0x32b778 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x32b778) {
            ctx->pc = 0x32B788u;
            goto label_32b788;
        }
    }
    ctx->pc = 0x32B780u;
label_32b780:
    // 0x32b780: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x32B780u;
    {
        const bool branch_taken_0x32b780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B780u;
        // 0x32b784: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b780) {
            ctx->pc = 0x32B798u;
            goto label_32b798;
        }
    }
    ctx->pc = 0x32B788u;
label_32b788:
    // 0x32b788: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x32B788u;
    {
        const bool branch_taken_0x32b788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B788u;
        // 0x32b78c: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b788) {
            ctx->pc = 0x32B798u;
            goto label_32b798;
        }
    }
    ctx->pc = 0x32B790u;
label_32b790:
    // 0x32b790: 0x26100038  addiu       $s0, $s0, 0x38
    ctx->pc = 0x32b790u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    // 0x32b794: 0x0  nop
    ctx->pc = 0x32b794u;
    // NOP
label_32b798:
    // 0x32b798: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x32b798u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x32b79c: 0x9023fc8d  lbu         $v1, -0x373($at)
    ctx->pc = 0x32b79cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x81FC8Du));
    // 0x32b7a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32b7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32b7a4: 0x64090013  daddiu      $t1, $zero, 0x13
    ctx->pc = 0x32b7a4u;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)19);
    // 0x32b7a8: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x32B7A8u;
    {
        const bool branch_taken_0x32b7a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x32B7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B7A8u;
        // 0x32b7ac: 0x640a0015  daddiu      $t2, $zero, 0x15 (Delay Slot)
        SET_GPR_S64(ctx, 10, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)21);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b7a8) {
            ctx->pc = 0x32B7C8u;
            goto label_32b7c8;
        }
    }
    ctx->pc = 0x32B7B0u;
    // 0x32b7b0: 0x92830006  lbu         $v1, 0x6($s4)
    ctx->pc = 0x32b7b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 6)));
    // 0x32b7b4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x32b7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x32b7b8: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x32B7B8u;
    {
        const bool branch_taken_0x32b7b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x32b7b8) {
            ctx->pc = 0x32B7C8u;
            goto label_32b7c8;
        }
    }
    ctx->pc = 0x32B7C0u;
    // 0x32b7c0: 0x64090010  daddiu      $t1, $zero, 0x10
    ctx->pc = 0x32b7c0u;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)16);
    // 0x32b7c4: 0x120502d  daddu       $t2, $t1, $zero
    ctx->pc = 0x32b7c4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_32b7c8:
    // 0x32b7c8: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x32b7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x32b7cc: 0x2463cd68  addiu       $v1, $v1, -0x3298
    ctx->pc = 0x32b7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954344));
    // 0x32b7d0: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x32b7d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x32b7d4: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x32b7d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x32b7d8: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x32b7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x32b7dc: 0x9243000a  lbu         $v1, 0xA($s2)
    ctx->pc = 0x32b7dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 10)));
    // 0x32b7e0: 0x3206ffff  andi        $a2, $s0, 0xFFFF
    ctx->pc = 0x32b7e0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x32b7e4: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x32b7e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x32b7e8: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x32b7e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x32b7ec: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x32b7ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x32b7f0: 0x96450000  lhu         $a1, 0x0($s2)
    ctx->pc = 0x32b7f0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x32b7f4: 0x92480009  lbu         $t0, 0x9($s2)
    ctx->pc = 0x32b7f4u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 9)));
    // 0x32b7f8: 0x924b000b  lbu         $t3, 0xB($s2)
    ctx->pc = 0x32b7f8u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 11)));
    // 0x32b7fc: 0xc095fa8  jal         func_257EA0
    ctx->pc = 0x32B7FCu;
    SET_GPR_U32(ctx, 31, 0x32B804u);
    ctx->pc = 0x32B800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B7FCu;
    // 0x32b800: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257EA0u, 0x32B7FCu, 0x32B804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B804u;
label_32b804:
    // 0x32b804: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x32B804u;
    {
        const bool branch_taken_0x32b804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32b804) {
            ctx->pc = 0x32B8D0u;
            goto label_32b8d0;
        }
    }
    ctx->pc = 0x32B80Cu;
    // 0x32b80c: 0x0  nop
    ctx->pc = 0x32b80cu;
    // NOP
label_32b810:
    // 0x32b810: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x32b810u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x32b814: 0x9023fc8c  lbu         $v1, -0x374($at)
    ctx->pc = 0x32b814u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x81FC8Cu));
    // 0x32b818: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x32b818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x32b81c: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x32B81Cu;
    {
        const bool branch_taken_0x32b81c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x32B820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B81Cu;
        // 0x32b820: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b81c) {
            ctx->pc = 0x32B838u;
            goto label_32b838;
        }
    }
    ctx->pc = 0x32B824u;
    // 0x32b824: 0x8c22ceb8  lw          $v0, -0x3148($at)
    ctx->pc = 0x32b824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954680)));
    // 0x32b828: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x32b828u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x32b82c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x32B82Cu;
    {
        const bool branch_taken_0x32b82c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32b82c) {
            ctx->pc = 0x32B838u;
            goto label_32b838;
        }
    }
    ctx->pc = 0x32B834u;
    // 0x32b834: 0x26100040  addiu       $s0, $s0, 0x40
    ctx->pc = 0x32b834u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_32b838:
    // 0x32b838: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x32b838u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x32b83c: 0xc0bd478  jal         func_2F51E0
    ctx->pc = 0x32B83Cu;
    SET_GPR_U32(ctx, 31, 0x32B844u);
    ctx->pc = 0x32B840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B83Cu;
    // 0x32b840: 0x2484e000  addiu       $a0, $a0, -0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F51E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F51E0u, 0x32B83Cu, 0x32B844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B844u;
label_32b844:
    // 0x32b844: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x32B844u;
    {
        const bool branch_taken_0x32b844 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32B848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B844u;
        // 0x32b848: 0x3c040089  lui         $a0, 0x89 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b844) {
            ctx->pc = 0x32B8D0u;
            goto label_32b8d0;
        }
    }
    ctx->pc = 0x32B84Cu;
    // 0x32b84c: 0xc095150  jal         func_254540
    ctx->pc = 0x32B84Cu;
    SET_GPR_U32(ctx, 31, 0x32B854u);
    ctx->pc = 0x32B850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B84Cu;
    // 0x32b850: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254540u, 0x32B84Cu, 0x32B854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B854u;
label_32b854:
    // 0x32b854: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x32B854u;
    {
        const bool branch_taken_0x32b854 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32b854) {
            ctx->pc = 0x32B8D0u;
            goto label_32b8d0;
        }
    }
    ctx->pc = 0x32B85Cu;
    // 0x32b85c: 0x8f828b78  lw          $v0, -0x7488($gp)
    ctx->pc = 0x32b85cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937464)));
    // 0x32b860: 0x53082b  sltu        $at, $v0, $s3
    ctx->pc = 0x32b860u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x32b864: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x32B864u;
    {
        const bool branch_taken_0x32b864 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x32b864) {
            ctx->pc = 0x32B878u;
            goto label_32b878;
        }
    }
    ctx->pc = 0x32B86Cu;
    // 0x32b86c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x32B86Cu;
    {
        const bool branch_taken_0x32b86c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B86Cu;
        // 0x32b870: 0xa640000c  sh          $zero, 0xC($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 12), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b86c) {
            ctx->pc = 0x32B8D0u;
            goto label_32b8d0;
        }
    }
    ctx->pc = 0x32B874u;
    // 0x32b874: 0x0  nop
    ctx->pc = 0x32b874u;
    // NOP
label_32b878:
    // 0x32b878: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x32b878u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x32b87c: 0x2442cd68  addiu       $v0, $v0, -0x3298
    ctx->pc = 0x32b87cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954344));
    // 0x32b880: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x32b880u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x32b884: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x32b884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x32b888: 0x3206ffff  andi        $a2, $s0, 0xFFFF
    ctx->pc = 0x32b888u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x32b88c: 0x9243000a  lbu         $v1, 0xA($s2)
    ctx->pc = 0x32b88cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 10)));
    // 0x32b890: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x32b890u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x32b894: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x32b894u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x32b898: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x32b898u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32b89c: 0x24090013  addiu       $t1, $zero, 0x13
    ctx->pc = 0x32b89cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x32b8a0: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x32b8a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x32b8a4: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x32b8a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x32b8a8: 0x96450000  lhu         $a1, 0x0($s2)
    ctx->pc = 0x32b8a8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x32b8ac: 0x92480009  lbu         $t0, 0x9($s2)
    ctx->pc = 0x32b8acu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 9)));
    // 0x32b8b0: 0x924b000b  lbu         $t3, 0xB($s2)
    ctx->pc = 0x32b8b0u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 11)));
    // 0x32b8b4: 0xc095fa8  jal         func_257EA0
    ctx->pc = 0x32B8B4u;
    SET_GPR_U32(ctx, 31, 0x32B8BCu);
    ctx->pc = 0x32B8B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B8B4u;
    // 0x32b8b8: 0x240a0015  addiu       $t2, $zero, 0x15 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257EA0u, 0x32B8B4u, 0x32B8BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B8BCu;
label_32b8bc:
    // 0x32b8bc: 0x102c3c  dsll32      $a1, $s0, 16
    ctx->pc = 0x32b8bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) << (32 + 16));
    // 0x32b8c0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x32b8c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32b8c4: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x32b8c4u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x32b8c8: 0xc0caed4  jal         func_32BB50
    ctx->pc = 0x32B8C8u;
    SET_GPR_U32(ctx, 31, 0x32B8D0u);
    ctx->pc = 0x32B8CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B8C8u;
    // 0x32b8cc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32BB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32BB50u, 0x32B8C8u, 0x32B8D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B8D0u;
label_32b8d0:
    // 0x32b8d0: 0x9642000c  lhu         $v0, 0xC($s2)
    ctx->pc = 0x32b8d0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x32b8d4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x32b8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x32b8d8: 0xa642000c  sh          $v0, 0xC($s2)
    ctx->pc = 0x32b8d8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x32b8dc: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x32b8dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x32b8e0: 0x1c400003  bgtz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x32B8E0u;
    {
        const bool branch_taken_0x32b8e0 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x32B8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B8E0u;
        // 0x32b8e4: 0x240200fe  addiu       $v0, $zero, 0xFE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b8e0) {
            ctx->pc = 0x32B8F0u;
            goto label_32b8f0;
        }
    }
    ctx->pc = 0x32B8E8u;
    // 0x32b8e8: 0xa242000a  sb          $v0, 0xA($s2)
    ctx->pc = 0x32b8e8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 10), (uint8_t)GPR_U32(ctx, 2));
    // 0x32b8ec: 0x0  nop
    ctx->pc = 0x32b8ecu;
    // NOP
label_32b8f0:
    // 0x32b8f0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x32b8f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x32b8f4: 0x235102a  slt         $v0, $s1, $s5
    ctx->pc = 0x32b8f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x32b8f8: 0x1440ff57  bnez        $v0, . + 4 + (-0xA9 << 2)
    ctx->pc = 0x32B8F8u;
    {
        const bool branch_taken_0x32b8f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32B8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B8F8u;
        // 0x32b8fc: 0x26520010  addiu       $s2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b8f8) {
            ctx->pc = 0x32B658u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32b658;
        }
    }
    ctx->pc = 0x32B900u;
label_32b900:
    // 0x32b900: 0xc0e5004  jal         func_394010
    ctx->pc = 0x32B900u;
    SET_GPR_U32(ctx, 31, 0x32B908u);
    ctx->pc = 0x32B904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B900u;
    // 0x32b904: 0x2684016c  addiu       $a0, $s4, 0x16C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 364));
    ctx->in_delay_slot = false;
    ctx->pc = 0x394010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x394010u, 0x32B900u, 0x32B908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B908u;
label_32b908:
    // 0x32b908: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x32b908u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x32b90c: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x32b90cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x32b910: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x32b910u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x32b914: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x32b914u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x32b918: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x32b918u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x32b91c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x32b91cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x32b920: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x32b920u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32b924: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x32b924u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32b928: 0x3e00008  jr          $ra
    ctx->pc = 0x32B928u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32B92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B928u;
        // 0x32b92c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32B928u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32B930u;
}
