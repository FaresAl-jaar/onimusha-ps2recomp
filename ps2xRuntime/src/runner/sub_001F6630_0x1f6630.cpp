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

// Function: sub_001F6630
// Address: 0x1f6630 - 0x1f6848
void sub_001F6630_0x1f6630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F6630_0x1f6630");
#endif

    switch (ctx->pc) {
        case 0x1f6780u: goto label_1f6780;
        case 0x1f680cu: goto label_1f680c;
        default: break;
    }

    ctx->pc = 0x1f6630u;

    // 0x1f6630: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f6630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f6634: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x1f6634u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6638: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1f6638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1f663c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1f663cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6640: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f6640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f6644: 0x25490160  addiu       $t1, $t2, 0x160
    ctx->pc = 0x1f6644u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 10), 352));
    // 0x1f6648: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1f6648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1f664c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1f664cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1f6650: 0x8d220434  lw          $v0, 0x434($t1)
    ctx->pc = 0x1f6650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 1076)));
    // 0x1f6654: 0x8d230308  lw          $v1, 0x308($t1)
    ctx->pc = 0x1f6654u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 776)));
    // 0x1f6658: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f6658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f665c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F665Cu;
    {
        const bool branch_taken_0x1f665c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F665Cu;
        // 0x1f6660: 0xad220434  sw          $v0, 0x434($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 1076), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f665c) {
            ctx->pc = 0x1F6670u;
            goto label_1f6670;
        }
    }
    ctx->pc = 0x1F6664u;
    // 0x1f6664: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x1f6664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1f6668: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F6668u;
    {
        const bool branch_taken_0x1f6668 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f6668) {
            ctx->pc = 0x1F666Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F6668u;
            // 0x1f666c: 0x8d220494  lw          $v0, 0x494($t1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 1172)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F6680u;
            goto label_1f6680;
        }
    }
    ctx->pc = 0x1F6670u;
label_1f6670:
    // 0x1f6670: 0x8d22030c  lw          $v0, 0x30C($t1)
    ctx->pc = 0x1f6670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 780)));
    // 0x1f6674: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F6674u;
    {
        const bool branch_taken_0x1f6674 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6674u;
        // 0x1f6678: 0x2402fffc  addiu       $v0, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6674) {
            ctx->pc = 0x1F668Cu;
            goto label_1f668c;
        }
    }
    ctx->pc = 0x1F667Cu;
    // 0x1f667c: 0x8d220494  lw          $v0, 0x494($t1)
    ctx->pc = 0x1f667cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 1172)));
label_1f6680:
    // 0x1f6680: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f6680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f6684: 0xad220494  sw          $v0, 0x494($t1)
    ctx->pc = 0x1f6684u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 1172), GPR_U32(ctx, 2));
    // 0x1f6688: 0x2402fffc  addiu       $v0, $zero, -0x4
    ctx->pc = 0x1f6688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_1f668c:
    // 0x1f668c: 0x2428024  and         $s0, $s2, $v0
    ctx->pc = 0x1f668cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
    // 0x1f6690: 0x2501823  subu        $v1, $s2, $s0
    ctx->pc = 0x1f6690u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x1f6694: 0x82080000  lb          $t0, 0x0($s0)
    ctx->pc = 0x1f6694u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1f6698: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1f6698u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1f669c: 0x388c0  sll         $s1, $v1, 3
    ctx->pc = 0x1f669cu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1f66a0: 0x92040000  lbu         $a0, 0x0($s0)
    ctx->pc = 0x1f66a0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1f66a4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1f66a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1f66a8: 0x92050000  lbu         $a1, 0x0($s0)
    ctx->pc = 0x1f66a8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1f66ac: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1f66acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1f66b0: 0x92060000  lbu         $a2, 0x0($s0)
    ctx->pc = 0x1f66b0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1f66b4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1f66b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1f66b8: 0x82070000  lb          $a3, 0x0($s0)
    ctx->pc = 0x1f66b8u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1f66bc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1f66bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1f66c0: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x1f66c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1f66c4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1f66c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1f66c8: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1f66c8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1f66cc: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1f66ccu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1f66d0: 0x1044025  or          $t0, $t0, $a0
    ctx->pc = 0x1f66d0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 4));
    // 0x1f66d4: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1f66d4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x1f66d8: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x1f66d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1f66dc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1f66dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1f66e0: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1f66e0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1f66e4: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1f66e4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1f66e8: 0x1054025  or          $t0, $t0, $a1
    ctx->pc = 0x1f66e8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 5));
    // 0x1f66ec: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x1f66ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1f66f0: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x1f66f0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x1f66f4: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1f66f4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1f66f8: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1f66f8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1f66fc: 0x1064025  or          $t0, $t0, $a2
    ctx->pc = 0x1f66fcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 6));
    // 0x1f6700: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1f6700u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1f6704: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1f6704u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x1f6708: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F6708u;
    {
        const bool branch_taken_0x1f6708 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F670Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6708u;
        // 0x1f670c: 0x2284004  sllv        $t0, $t0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 17) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6708) {
            ctx->pc = 0x1F6728u;
            goto label_1f6728;
        }
    }
    ctx->pc = 0x1F6710u;
    // 0x1f6710: 0x111023  negu        $v0, $s1
    ctx->pc = 0x1f6710u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 17)));
    // 0x1f6714: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x1f6714u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x1f6718: 0x1021025  or          $v0, $t0, $v0
    ctx->pc = 0x1f6718u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x1f671c: 0x2274004  sllv        $t0, $a3, $s1
    ctx->pc = 0x1f671cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 17) & 0x1F));
    // 0x1f6720: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1F6720u;
    {
        const bool branch_taken_0x1f6720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6720u;
        // 0x1f6724: 0xad220030  sw          $v0, 0x30($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6720) {
            ctx->pc = 0x1F6730u;
            goto label_1f6730;
        }
    }
    ctx->pc = 0x1F6728u;
label_1f6728:
    // 0x1f6728: 0xad280030  sw          $t0, 0x30($t1)
    ctx->pc = 0x1f6728u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 48), GPR_U32(ctx, 8));
    // 0x1f672c: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x1f672cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1f6730:
    // 0x1f6730: 0x82070000  lb          $a3, 0x0($s0)
    ctx->pc = 0x1f6730u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1f6734: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1f6734u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1f6738: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x1f6738u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1f673c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1f673cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1f6740: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1f6740u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1f6744: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x1f6744u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1f6748: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1f6748u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x1f674c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1f674cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1f6750: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1f6750u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1f6754: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x1f6754u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1f6758: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x1f6758u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x1f675c: 0x3c04000f  lui         $a0, 0xF
    ctx->pc = 0x1f675cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15 << 16));
    // 0x1f6760: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1f6760u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1f6764: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1f6764u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1f6768: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1f6768u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x1f676c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f676cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6770: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x1f6770u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x1f6774: 0x24090028  addiu       $t1, $zero, 0x28
    ctx->pc = 0x1f6774u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x1f6778: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1F6778u;
    {
        const bool branch_taken_0x1f6778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F677Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6778u;
        // 0x1f677c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6778) {
            ctx->pc = 0x1F67CCu;
            goto label_1f67cc;
        }
    }
    ctx->pc = 0x1F6780u;
label_1f6780:
    // 0x1f6780: 0x2a220020  slti        $v0, $s1, 0x20
    ctx->pc = 0x1f6780u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1f6784: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1F6784u;
    {
        const bool branch_taken_0x1f6784 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F6788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6784u;
        // 0x1f6788: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6784) {
            ctx->pc = 0x1F67CCu;
            goto label_1f67cc;
        }
    }
    ctx->pc = 0x1F678Cu;
    // 0x1f678c: 0x2631ffe0  addiu       $s1, $s1, -0x20
    ctx->pc = 0x1f678cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967264));
    // 0x1f6790: 0x2274004  sllv        $t0, $a3, $s1
    ctx->pc = 0x1f6790u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 17) & 0x1F));
    // 0x1f6794: 0x82070000  lb          $a3, 0x0($s0)
    ctx->pc = 0x1f6794u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1f6798: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1f6798u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1f679c: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x1f679cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1f67a0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1f67a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1f67a4: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1f67a4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1f67a8: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x1f67a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1f67ac: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1f67acu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x1f67b0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1f67b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1f67b4: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1f67b4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1f67b8: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x1f67b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1f67bc: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x1f67bcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x1f67c0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1f67c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1f67c4: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1f67c4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1f67c8: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1f67c8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_1f67cc:
    // 0x1f67cc: 0x86102a  slt         $v0, $a0, $a2
    ctx->pc = 0x1f67ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1f67d0: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x1F67D0u;
    {
        const bool branch_taken_0x1f67d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f67d0) {
            ctx->pc = 0x1F67D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F67D0u;
            // 0x1f67d4: 0x140202d  daddu       $a0, $t2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F6800u;
            goto label_1f6800;
        }
    }
    ctx->pc = 0x1F67D8u;
    // 0x1f67d8: 0x2a220009  slti        $v0, $s1, 0x9
    ctx->pc = 0x1f67d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x1f67dc: 0x81a02  srl         $v1, $t0, 8
    ctx->pc = 0x1f67dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), 8));
    // 0x1f67e0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F67E0u;
    {
        const bool branch_taken_0x1f67e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F67E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F67E0u;
        // 0x1f67e4: 0x84200  sll         $t0, $t0, 8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f67e0) {
            ctx->pc = 0x1F67F4u;
            goto label_1f67f4;
        }
    }
    ctx->pc = 0x1F67E8u;
    // 0x1f67e8: 0x1311023  subu        $v0, $t1, $s1
    ctx->pc = 0x1f67e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 17)));
    // 0x1f67ec: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x1f67ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x1f67f0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1f67f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1f67f4:
    // 0x1f67f4: 0x5465ffe2  bnel        $v1, $a1, . + 4 + (-0x1E << 2)
    ctx->pc = 0x1F67F4u;
    {
        const bool branch_taken_0x1f67f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x1f67f4) {
            ctx->pc = 0x1F67F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F67F4u;
            // 0x1f67f8: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F6780u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f6780;
        }
    }
    ctx->pc = 0x1F67FCu;
    // 0x1f67fc: 0x140202d  daddu       $a0, $t2, $zero
    ctx->pc = 0x1f67fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_1f6800:
    // 0x1f6800: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1f6800u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6804: 0xc07da12  jal         func_1F6848
    ctx->pc = 0x1F6804u;
    SET_GPR_U32(ctx, 31, 0x1F680Cu);
    ctx->pc = 0x1F6808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6804u;
    // 0x1f6808: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F6848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F6848u, 0x1F6804u, 0x1F680Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F680Cu;
label_1f680c:
    // 0x1f680c: 0x2121823  subu        $v1, $s0, $s2
    ctx->pc = 0x1f680cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x1f6810: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1f6810u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1f6814: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1f6814u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f6818: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x1f6818u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1f681c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f681cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f6820: 0x2462ffc7  addiu       $v0, $v1, -0x39
    ctx->pc = 0x1f6820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967239));
    // 0x1f6824: 0x2463ffce  addiu       $v1, $v1, -0x32
    ctx->pc = 0x1f6824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967246));
    // 0x1f6828: 0x28440000  slti        $a0, $v0, 0x0
    ctx->pc = 0x1f6828u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1f682c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f682cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f6830: 0x64100b  movn        $v0, $v1, $a0
    ctx->pc = 0x1f6830u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x1f6834: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x1f6834u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x1f6838: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1f6838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1f683c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1f683cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f6840: 0x3e00008  jr          $ra
    ctx->pc = 0x1F6840u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F6844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6840u;
        // 0x1f6844: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F6840u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F6848u;
}
