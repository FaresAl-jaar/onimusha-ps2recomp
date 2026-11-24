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

// Function: sub_00330810
// Address: 0x330810 - 0x331054
void sub_00330810_0x330810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00330810_0x330810");
#endif

    switch (ctx->pc) {
        case 0x330870u: goto label_330870;
        case 0x3308b8u: goto label_3308b8;
        case 0x3308f8u: goto label_3308f8;
        case 0x33091cu: goto label_33091c;
        case 0x3309d0u: goto label_3309d0;
        case 0x330b08u: goto label_330b08;
        case 0x330bb0u: goto label_330bb0;
        case 0x330c04u: goto label_330c04;
        case 0x330c1cu: goto label_330c1c;
        case 0x330c34u: goto label_330c34;
        case 0x330c70u: goto label_330c70;
        case 0x330cd0u: goto label_330cd0;
        case 0x330cf8u: goto label_330cf8;
        case 0x330d18u: goto label_330d18;
        case 0x330d20u: goto label_330d20;
        case 0x330d40u: goto label_330d40;
        case 0x330d48u: goto label_330d48;
        case 0x330d68u: goto label_330d68;
        case 0x330d70u: goto label_330d70;
        case 0x330d90u: goto label_330d90;
        case 0x330d98u: goto label_330d98;
        case 0x330db8u: goto label_330db8;
        case 0x330dc0u: goto label_330dc0;
        case 0x330de0u: goto label_330de0;
        case 0x330de8u: goto label_330de8;
        case 0x330e08u: goto label_330e08;
        case 0x330e10u: goto label_330e10;
        case 0x330e30u: goto label_330e30;
        case 0x330e38u: goto label_330e38;
        case 0x330e58u: goto label_330e58;
        case 0x330e60u: goto label_330e60;
        case 0x330e80u: goto label_330e80;
        case 0x330e88u: goto label_330e88;
        case 0x330ea8u: goto label_330ea8;
        case 0x330eb0u: goto label_330eb0;
        case 0x330ed0u: goto label_330ed0;
        case 0x330ed8u: goto label_330ed8;
        case 0x330ef8u: goto label_330ef8;
        case 0x330f28u: goto label_330f28;
        case 0x330f60u: goto label_330f60;
        case 0x330ff0u: goto label_330ff0;
        case 0x331024u: goto label_331024;
        default: break;
    }

    ctx->pc = 0x330810u;

    // 0x330810: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x330810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x330814: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x330814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x330818: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x330818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x33081c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x33081cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x330820: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x330820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x330824: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x330824u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x330828: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x330828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x33082c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x33082cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x330830: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x330830u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330834: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x330834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x330838: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x330838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x33083c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x33083cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x330840: 0x90821c49  lbu         $v0, 0x1C49($a0)
    ctx->pc = 0x330840u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 7241)));
    // 0x330844: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x330844u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x330848: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x330848u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x33084c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x33084cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x330850: 0x28a30002  slti        $v1, $a1, 0x2
    ctx->pc = 0x330850u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x330854: 0x24421c4a  addiu       $v0, $v0, 0x1C4A
    ctx->pc = 0x330854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7242));
    // 0x330858: 0x14600035  bnez        $v1, . + 4 + (0x35 << 2)
    ctx->pc = 0x330858u;
    {
        const bool branch_taken_0x330858 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x33085Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330858u;
        // 0x33085c: 0xafa20100  sw          $v0, 0x100($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330858) {
            ctx->pc = 0x330930u;
            goto label_330930;
        }
    }
    ctx->pc = 0x330860u;
    // 0x330860: 0x8e90000c  lw          $s0, 0xC($s4)
    ctx->pc = 0x330860u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x330864: 0x5082a  slt         $at, $zero, $a1
    ctx->pc = 0x330864u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x330868: 0x10200031  beqz        $at, . + 4 + (0x31 << 2)
    ctx->pc = 0x330868u;
    {
        const bool branch_taken_0x330868 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x33086Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330868u;
        // 0x33086c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330868) {
            ctx->pc = 0x330930u;
            goto label_330930;
        }
    }
    ctx->pc = 0x330870u;
label_330870:
    // 0x330870: 0x92821c49  lbu         $v0, 0x1C49($s4)
    ctx->pc = 0x330870u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 7241)));
    // 0x330874: 0x16220010  bne         $s1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x330874u;
    {
        const bool branch_taken_0x330874 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x330874) {
            ctx->pc = 0x3308B8u;
            goto label_3308b8;
        }
    }
    ctx->pc = 0x33087Cu;
    // 0x33087c: 0x96070004  lhu         $a3, 0x4($s0)
    ctx->pc = 0x33087cu;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x330880: 0x3c04004e  lui         $a0, 0x4E
    ctx->pc = 0x330880u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)78 << 16));
    // 0x330884: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x330884u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x330888: 0x24846940  addiu       $a0, $a0, 0x6940
    ctx->pc = 0x330888u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26944));
    // 0x33088c: 0x96020002  lhu         $v0, 0x2($s0)
    ctx->pc = 0x33088cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x330890: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x330890u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x330894: 0x8e891ca4  lw          $t1, 0x1CA4($s4)
    ctx->pc = 0x330894u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 7332)));
    // 0x330898: 0x3408fff5  ori         $t0, $zero, 0xFFF5
    ctx->pc = 0x330898u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65525);
    // 0x33089c: 0x73040  sll         $a2, $a3, 1
    ctx->pc = 0x33089cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x3308a0: 0xc73821  addu        $a3, $a2, $a3
    ctx->pc = 0x3308a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x3308a4: 0x24660004  addiu       $a2, $v1, 0x4
    ctx->pc = 0x3308a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x3308a8: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x3308a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x3308ac: 0x24470003  addiu       $a3, $v0, 0x3
    ctx->pc = 0x3308acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x3308b0: 0xc09c5f0  jal         func_2717C0
    ctx->pc = 0x3308B0u;
    SET_GPR_U32(ctx, 31, 0x3308B8u);
    ctx->pc = 0x3308B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3308B0u;
    // 0x3308b4: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2717C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2717C0u, 0x3308B0u, 0x3308B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3308B8u;
label_3308b8:
    // 0x3308b8: 0x96060004  lhu         $a2, 0x4($s0)
    ctx->pc = 0x3308b8u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3308bc: 0x96030002  lhu         $v1, 0x2($s0)
    ctx->pc = 0x3308bcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x3308c0: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x3308c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
    // 0x3308c4: 0x96040000  lhu         $a0, 0x0($s0)
    ctx->pc = 0x3308c4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3308c8: 0x34498080  ori         $t1, $v0, 0x8080
    ctx->pc = 0x3308c8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    // 0x3308cc: 0x3c0a004e  lui         $t2, 0x4E
    ctx->pc = 0x3308ccu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)78 << 16));
    // 0x3308d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3308d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3308d4: 0x254a6940  addiu       $t2, $t2, 0x6940
    ctx->pc = 0x3308d4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 26944));
    // 0x3308d8: 0x3408fff5  ori         $t0, $zero, 0xFFF5
    ctx->pc = 0x3308d8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65525);
    // 0x3308dc: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x3308dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x3308e0: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x3308e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x3308e4: 0x24670003  addiu       $a3, $v1, 0x3
    ctx->pc = 0x3308e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x3308e8: 0x24860004  addiu       $a2, $a0, 0x4
    ctx->pc = 0x3308e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x3308ec: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3308ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3308f0: 0xc09c5f0  jal         func_2717C0
    ctx->pc = 0x3308F0u;
    SET_GPR_U32(ctx, 31, 0x3308F8u);
    ctx->pc = 0x3308F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3308F0u;
    // 0x3308f4: 0x1422021  addu        $a0, $t2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2717C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2717C0u, 0x3308F0u, 0x3308F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3308F8u;
label_3308f8:
    // 0x3308f8: 0x96060000  lhu         $a2, 0x0($s0)
    ctx->pc = 0x3308f8u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3308fc: 0x3c04004e  lui         $a0, 0x4E
    ctx->pc = 0x3308fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)78 << 16));
    // 0x330900: 0x96070002  lhu         $a3, 0x2($s0)
    ctx->pc = 0x330900u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x330904: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x330904u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
    // 0x330908: 0x24846b44  addiu       $a0, $a0, 0x6B44
    ctx->pc = 0x330908u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27460));
    // 0x33090c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x33090cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330910: 0x3408fff5  ori         $t0, $zero, 0xFFF5
    ctx->pc = 0x330910u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65525);
    // 0x330914: 0xc09c5f0  jal         func_2717C0
    ctx->pc = 0x330914u;
    SET_GPR_U32(ctx, 31, 0x33091Cu);
    ctx->pc = 0x330918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x330914u;
    // 0x330918: 0x34498080  ori         $t1, $v0, 0x8080 (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2717C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2717C0u, 0x330914u, 0x33091Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33091Cu;
label_33091c:
    // 0x33091c: 0x92820010  lbu         $v0, 0x10($s4)
    ctx->pc = 0x33091cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x330920: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x330920u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x330924: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x330924u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x330928: 0x1440ffd1  bnez        $v0, . + 4 + (-0x2F << 2)
    ctx->pc = 0x330928u;
    {
        const bool branch_taken_0x330928 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33092Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330928u;
        // 0x33092c: 0x2610000a  addiu       $s0, $s0, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330928) {
            ctx->pc = 0x330870u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_330870;
        }
    }
    ctx->pc = 0x330930u;
label_330930:
    // 0x330930: 0x8e880008  lw          $t0, 0x8($s4)
    ctx->pc = 0x330930u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x330934: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x330934u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x330938: 0x3c04004f  lui         $a0, 0x4F
    ctx->pc = 0x330938u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)79 << 16));
    // 0x33093c: 0x24a59c00  addiu       $a1, $a1, -0x6400
    ctx->pc = 0x33093cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941696));
    // 0x330940: 0x24849c04  addiu       $a0, $a0, -0x63FC
    ctx->pc = 0x330940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941700));
    // 0x330944: 0xa7a000e0  sh          $zero, 0xE0($sp)
    ctx->pc = 0x330944u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 224), (uint16_t)GPR_U32(ctx, 0));
    // 0x330948: 0x8e87000c  lw          $a3, 0xC($s4)
    ctx->pc = 0x330948u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x33094c: 0x92861c49  lbu         $a2, 0x1C49($s4)
    ctx->pc = 0x33094cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 7241)));
    // 0x330950: 0x95020000  lhu         $v0, 0x0($t0)
    ctx->pc = 0x330950u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x330954: 0xafa200f0  sw          $v0, 0xF0($sp)
    ctx->pc = 0x330954u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
    // 0x330958: 0x950a0002  lhu         $t2, 0x2($t0)
    ctx->pc = 0x330958u;
    SET_GPR_ZE32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 2)));
    // 0x33095c: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x33095cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x330960: 0x91090008  lbu         $t1, 0x8($t0)
    ctx->pc = 0x330960u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x330964: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x330964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x330968: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x330968u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x33096c: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x33096cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x330970: 0x94460006  lhu         $a2, 0x6($v0)
    ctx->pc = 0x330970u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x330974: 0x25500018  addiu       $s0, $t2, 0x18
    ctx->pc = 0x330974u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 10), 24));
    // 0x330978: 0x91080009  lbu         $t0, 0x9($t0)
    ctx->pc = 0x330978u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 9)));
    // 0x33097c: 0x2602fffc  addiu       $v0, $s0, -0x4
    ctx->pc = 0x33097cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
    // 0x330980: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x330980u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x330984: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x330984u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x330988: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x330988u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x33098c: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x33098cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
    // 0x330990: 0x1281018  mult        $v0, $t1, $t0
    ctx->pc = 0x330990u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x330994: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x330994u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x330998: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x330998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x33099c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x33099cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x3309a0: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x3309a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x3309a4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x3309a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3309a8: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x3309a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x3309ac: 0x90970000  lbu         $s7, 0x0($a0)
    ctx->pc = 0x3309acu;
    SET_GPR_ZE32(ctx, 23, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3309b0: 0x17082a  slt         $at, $zero, $s7
    ctx->pc = 0x3309b0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
    // 0x3309b4: 0x10200062  beqz        $at, . + 4 + (0x62 << 2)
    ctx->pc = 0x3309B4u;
    {
        const bool branch_taken_0x3309b4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3309B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3309B4u;
        // 0x3309b8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3309b4) {
            ctx->pc = 0x330B40u;
            goto label_330b40;
        }
    }
    ctx->pc = 0x3309BCu;
    // 0x3309bc: 0x2ae10009  slti        $at, $s7, 0x9
    ctx->pc = 0x3309bcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x3309c0: 0x14200049  bnez        $at, . + 4 + (0x49 << 2)
    ctx->pc = 0x3309C0u;
    {
        const bool branch_taken_0x3309c0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x3309C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3309C0u;
        // 0x3309c4: 0x26e6fff8  addiu       $a2, $s7, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3309c0) {
            ctx->pc = 0x330AE8u;
            goto label_330ae8;
        }
    }
    ctx->pc = 0x3309C8u;
    // 0x3309c8: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x3309c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x3309cc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3309ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3309d0:
    // 0x3309d0: 0x97a200e0  lhu         $v0, 0xE0($sp)
    ctx->pc = 0x3309d0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x3309d4: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x3309d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x3309d8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x3309d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3309dc: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x3309dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x3309e0: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x3309e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x3309e4: 0xa4a21c72  sh          $v0, 0x1C72($a1)
    ctx->pc = 0x3309e4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 7282), (uint16_t)GPR_U32(ctx, 2));
    // 0x3309e8: 0x94880000  lhu         $t0, 0x0($a0)
    ctx->pc = 0x3309e8u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3309ec: 0x66102a  slt         $v0, $v1, $a2
    ctx->pc = 0x3309ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x3309f0: 0x97a700e0  lhu         $a3, 0xE0($sp)
    ctx->pc = 0x3309f0u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x3309f4: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x3309f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x3309f8: 0xa7a700e0  sh          $a3, 0xE0($sp)
    ctx->pc = 0x3309f8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 224), (uint16_t)GPR_U32(ctx, 7));
    // 0x3309fc: 0x8fa800f0  lw          $t0, 0xF0($sp)
    ctx->pc = 0x3309fcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x330a00: 0x97a700e0  lhu         $a3, 0xE0($sp)
    ctx->pc = 0x330a00u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x330a04: 0x1073821  addu        $a3, $t0, $a3
    ctx->pc = 0x330a04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x330a08: 0xa4a71c74  sh          $a3, 0x1C74($a1)
    ctx->pc = 0x330a08u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 7284), (uint16_t)GPR_U32(ctx, 7));
    // 0x330a0c: 0x94880004  lhu         $t0, 0x4($a0)
    ctx->pc = 0x330a0cu;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x330a10: 0x97a700e0  lhu         $a3, 0xE0($sp)
    ctx->pc = 0x330a10u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x330a14: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x330a14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x330a18: 0xa7a700e0  sh          $a3, 0xE0($sp)
    ctx->pc = 0x330a18u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 224), (uint16_t)GPR_U32(ctx, 7));
    // 0x330a1c: 0x8fa800f0  lw          $t0, 0xF0($sp)
    ctx->pc = 0x330a1cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x330a20: 0x97a700e0  lhu         $a3, 0xE0($sp)
    ctx->pc = 0x330a20u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x330a24: 0x1073821  addu        $a3, $t0, $a3
    ctx->pc = 0x330a24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x330a28: 0xa4a71c76  sh          $a3, 0x1C76($a1)
    ctx->pc = 0x330a28u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 7286), (uint16_t)GPR_U32(ctx, 7));
    // 0x330a2c: 0x94880008  lhu         $t0, 0x8($a0)
    ctx->pc = 0x330a2cu;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x330a30: 0x97a700e0  lhu         $a3, 0xE0($sp)
    ctx->pc = 0x330a30u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x330a34: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x330a34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x330a38: 0xa7a700e0  sh          $a3, 0xE0($sp)
    ctx->pc = 0x330a38u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 224), (uint16_t)GPR_U32(ctx, 7));
    // 0x330a3c: 0x8fa800f0  lw          $t0, 0xF0($sp)
    ctx->pc = 0x330a3cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x330a40: 0x97a700e0  lhu         $a3, 0xE0($sp)
    ctx->pc = 0x330a40u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x330a44: 0x1073821  addu        $a3, $t0, $a3
    ctx->pc = 0x330a44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x330a48: 0xa4a71c78  sh          $a3, 0x1C78($a1)
    ctx->pc = 0x330a48u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 7288), (uint16_t)GPR_U32(ctx, 7));
    // 0x330a4c: 0x9488000c  lhu         $t0, 0xC($a0)
    ctx->pc = 0x330a4cu;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x330a50: 0x97a700e0  lhu         $a3, 0xE0($sp)
    ctx->pc = 0x330a50u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x330a54: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x330a54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x330a58: 0xa7a700e0  sh          $a3, 0xE0($sp)
    ctx->pc = 0x330a58u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 224), (uint16_t)GPR_U32(ctx, 7));
    // 0x330a5c: 0x8fa800f0  lw          $t0, 0xF0($sp)
    ctx->pc = 0x330a5cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x330a60: 0x97a700e0  lhu         $a3, 0xE0($sp)
    ctx->pc = 0x330a60u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x330a64: 0x1073821  addu        $a3, $t0, $a3
    ctx->pc = 0x330a64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x330a68: 0xa4a71c7a  sh          $a3, 0x1C7A($a1)
    ctx->pc = 0x330a68u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 7290), (uint16_t)GPR_U32(ctx, 7));
    // 0x330a6c: 0x94880010  lhu         $t0, 0x10($a0)
    ctx->pc = 0x330a6cu;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x330a70: 0x97a700e0  lhu         $a3, 0xE0($sp)
    ctx->pc = 0x330a70u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x330a74: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x330a74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x330a78: 0xa7a700e0  sh          $a3, 0xE0($sp)
    ctx->pc = 0x330a78u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 224), (uint16_t)GPR_U32(ctx, 7));
    // 0x330a7c: 0x8fa800f0  lw          $t0, 0xF0($sp)
    ctx->pc = 0x330a7cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x330a80: 0x97a700e0  lhu         $a3, 0xE0($sp)
    ctx->pc = 0x330a80u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x330a84: 0x1073821  addu        $a3, $t0, $a3
    ctx->pc = 0x330a84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x330a88: 0xa4a71c7c  sh          $a3, 0x1C7C($a1)
    ctx->pc = 0x330a88u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 7292), (uint16_t)GPR_U32(ctx, 7));
    // 0x330a8c: 0x94880014  lhu         $t0, 0x14($a0)
    ctx->pc = 0x330a8cu;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x330a90: 0x97a700e0  lhu         $a3, 0xE0($sp)
    ctx->pc = 0x330a90u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x330a94: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x330a94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x330a98: 0xa7a700e0  sh          $a3, 0xE0($sp)
    ctx->pc = 0x330a98u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 224), (uint16_t)GPR_U32(ctx, 7));
    // 0x330a9c: 0x8fa800f0  lw          $t0, 0xF0($sp)
    ctx->pc = 0x330a9cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x330aa0: 0x97a700e0  lhu         $a3, 0xE0($sp)
    ctx->pc = 0x330aa0u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x330aa4: 0x1073821  addu        $a3, $t0, $a3
    ctx->pc = 0x330aa4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x330aa8: 0xa4a71c7e  sh          $a3, 0x1C7E($a1)
    ctx->pc = 0x330aa8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 7294), (uint16_t)GPR_U32(ctx, 7));
    // 0x330aac: 0x94880018  lhu         $t0, 0x18($a0)
    ctx->pc = 0x330aacu;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x330ab0: 0x97a700e0  lhu         $a3, 0xE0($sp)
    ctx->pc = 0x330ab0u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x330ab4: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x330ab4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x330ab8: 0xa7a700e0  sh          $a3, 0xE0($sp)
    ctx->pc = 0x330ab8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 224), (uint16_t)GPR_U32(ctx, 7));
    // 0x330abc: 0x8fa800f0  lw          $t0, 0xF0($sp)
    ctx->pc = 0x330abcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x330ac0: 0x97a700e0  lhu         $a3, 0xE0($sp)
    ctx->pc = 0x330ac0u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x330ac4: 0x1073821  addu        $a3, $t0, $a3
    ctx->pc = 0x330ac4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x330ac8: 0xa4a71c80  sh          $a3, 0x1C80($a1)
    ctx->pc = 0x330ac8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 7296), (uint16_t)GPR_U32(ctx, 7));
    // 0x330acc: 0x9488001c  lhu         $t0, 0x1C($a0)
    ctx->pc = 0x330accu;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x330ad0: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x330ad0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x330ad4: 0x97a700e0  lhu         $a3, 0xE0($sp)
    ctx->pc = 0x330ad4u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x330ad8: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x330ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x330adc: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x330adcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x330ae0: 0x1440ffbb  bnez        $v0, . + 4 + (-0x45 << 2)
    ctx->pc = 0x330AE0u;
    {
        const bool branch_taken_0x330ae0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x330AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330AE0u;
        // 0x330ae4: 0xa7a700e0  sh          $a3, 0xE0($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 224), (uint16_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330ae0) {
            ctx->pc = 0x3309D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3309d0;
        }
    }
    ctx->pc = 0x330AE8u;
label_330ae8:
    // 0x330ae8: 0x77082a  slt         $at, $v1, $s7
    ctx->pc = 0x330ae8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
    // 0x330aec: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
    ctx->pc = 0x330AECu;
    {
        const bool branch_taken_0x330aec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x330AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330AECu;
        // 0x330af0: 0x31040  sll         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330aec) {
            ctx->pc = 0x330B40u;
            goto label_330b40;
        }
    }
    ctx->pc = 0x330AF4u;
    // 0x330af4: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x330af4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x330af8: 0x2823821  addu        $a3, $s4, $v0
    ctx->pc = 0x330af8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x330afc: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x330afcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x330b00: 0x443021  addu        $a2, $v0, $a0
    ctx->pc = 0x330b00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x330b04: 0x0  nop
    ctx->pc = 0x330b04u;
    // NOP
label_330b08:
    // 0x330b08: 0x97a200e0  lhu         $v0, 0xE0($sp)
    ctx->pc = 0x330b08u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x330b0c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x330b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x330b10: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x330b10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330b14: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x330b14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x330b18: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x330b18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x330b1c: 0xa4e21c72  sh          $v0, 0x1C72($a3)
    ctx->pc = 0x330b1cu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 7282), (uint16_t)GPR_U32(ctx, 2));
    // 0x330b20: 0x77202a  slt         $a0, $v1, $s7
    ctx->pc = 0x330b20u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
    // 0x330b24: 0x94c50000  lhu         $a1, 0x0($a2)
    ctx->pc = 0x330b24u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x330b28: 0x24e70002  addiu       $a3, $a3, 0x2
    ctx->pc = 0x330b28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
    // 0x330b2c: 0x97a200e0  lhu         $v0, 0xE0($sp)
    ctx->pc = 0x330b2cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x330b30: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x330b30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x330b34: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x330b34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x330b38: 0x1480fff3  bnez        $a0, . + 4 + (-0xD << 2)
    ctx->pc = 0x330B38u;
    {
        const bool branch_taken_0x330b38 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x330B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330B38u;
        // 0x330b3c: 0xa7a200e0  sh          $v0, 0xE0($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 224), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330b38) {
            ctx->pc = 0x330B08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_330b08;
        }
    }
    ctx->pc = 0x330B40u;
label_330b40:
    // 0x330b40: 0x92820001  lbu         $v0, 0x1($s4)
    ctx->pc = 0x330b40u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1)));
    // 0x330b44: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x330b44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x330b48: 0x1440002f  bnez        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x330B48u;
    {
        const bool branch_taken_0x330b48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x330b48) {
            ctx->pc = 0x330C08u;
            goto label_330c08;
        }
    }
    ctx->pc = 0x330B50u;
    // 0x330b50: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x330b50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x330b54: 0x3c04004e  lui         $a0, 0x4E
    ctx->pc = 0x330b54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)78 << 16));
    // 0x330b58: 0x8e860008  lw          $a2, 0x8($s4)
    ctx->pc = 0x330b58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x330b5c: 0x24847078  addiu       $a0, $a0, 0x7078
    ctx->pc = 0x330b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28792));
    // 0x330b60: 0x8e8a1c8c  lw          $t2, 0x1C8C($s4)
    ctx->pc = 0x330b60u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 7308)));
    // 0x330b64: 0x3407fff7  ori         $a3, $zero, 0xFFF7
    ctx->pc = 0x330b64u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65527);
    // 0x330b68: 0x2445fff8  addiu       $a1, $v0, -0x8
    ctx->pc = 0x330b68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
    // 0x330b6c: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x330b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x330b70: 0x90c90009  lbu         $t1, 0x9($a2)
    ctx->pc = 0x330b70u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 9)));
    // 0x330b74: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x330b74u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x330b78: 0x97a200e0  lhu         $v0, 0xE0($sp)
    ctx->pc = 0x330b78u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x330b7c: 0x40102d  daddu       $v0, $v0, $zero
    ctx->pc = 0x330b7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330b80: 0x24480010  addiu       $t0, $v0, 0x10
    ctx->pc = 0x330b80u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x330b84: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x330b84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x330b88: 0x84420004  lh          $v0, 0x4($v0)
    ctx->pc = 0x330b88u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x330b8c: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x330b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x330b90: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x330b90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x330b94: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x330b94u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x330b98: 0x491818  mult        $v1, $v0, $t1
    ctx->pc = 0x330b98u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x330b9c: 0x91042  srl         $v0, $t1, 1
    ctx->pc = 0x330b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 1));
    // 0x330ba0: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x330ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x330ba4: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x330ba4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x330ba8: 0xc09c844  jal         func_272110
    ctx->pc = 0x330BA8u;
    SET_GPR_U32(ctx, 31, 0x330BB0u);
    ctx->pc = 0x330BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x330BA8u;
    // 0x330bac: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x272110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x272110u, 0x330BA8u, 0x330BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330BB0u;
label_330bb0:
    // 0x330bb0: 0x92821c8a  lbu         $v0, 0x1C8A($s4)
    ctx->pc = 0x330bb0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 7306)));
    // 0x330bb4: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x330BB4u;
    {
        const bool branch_taken_0x330bb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x330bb4) {
            ctx->pc = 0x330C08u;
            goto label_330c08;
        }
    }
    ctx->pc = 0x330BBCu;
    // 0x330bbc: 0x86820024  lh          $v0, 0x24($s4)
    ctx->pc = 0x330bbcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 36)));
    // 0x330bc0: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x330bc0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x330bc4: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x330BC4u;
    {
        const bool branch_taken_0x330bc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x330bc4) {
            ctx->pc = 0x330C08u;
            goto label_330c08;
        }
    }
    ctx->pc = 0x330BCCu;
    // 0x330bcc: 0x97a200e0  lhu         $v0, 0xE0($sp)
    ctx->pc = 0x330bccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x330bd0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x330bd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330bd4: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x330bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x330bd8: 0x3407fff7  ori         $a3, $zero, 0xFFF7
    ctx->pc = 0x330bd8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65527);
    // 0x330bdc: 0x40102d  daddu       $v0, $v0, $zero
    ctx->pc = 0x330bdcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330be0: 0x22042  srl         $a0, $v0, 1
    ctx->pc = 0x330be0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x330be4: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x330be4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x330be8: 0x442821  addu        $a1, $v0, $a0
    ctx->pc = 0x330be8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x330bec: 0x90620009  lbu         $v0, 0x9($v1)
    ctx->pc = 0x330becu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 9)));
    // 0x330bf0: 0x3c040092  lui         $a0, 0x92
    ctx->pc = 0x330bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)146 << 16));
    // 0x330bf4: 0x24841400  addiu       $a0, $a0, 0x1400
    ctx->pc = 0x330bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5120));
    // 0x330bf8: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x330bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x330bfc: 0xc0dc688  jal         func_371A20
    ctx->pc = 0x330BFCu;
    SET_GPR_U32(ctx, 31, 0x330C04u);
    ctx->pc = 0x330C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x330BFCu;
    // 0x330c00: 0x24480003  addiu       $t0, $v0, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x371A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x371A20u, 0x330BFCu, 0x330C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330C04u;
label_330c04:
    // 0x330c04: 0x0  nop
    ctx->pc = 0x330c04u;
    // NOP
label_330c08:
    // 0x330c08: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x330c08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x330c0c: 0x32f100ff  andi        $s1, $s7, 0xFF
    ctx->pc = 0x330c0cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)255);
    // 0x330c10: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x330c10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330c14: 0xc0cc418  jal         func_331060
    ctx->pc = 0x330C14u;
    SET_GPR_U32(ctx, 31, 0x330C1Cu);
    ctx->pc = 0x330C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x330C14u;
    // 0x330c18: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x331060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331060u, 0x330C14u, 0x330C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330C1Cu;
label_330c1c:
    // 0x330c1c: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x330c1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x330c20: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x330c20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330c24: 0x8fa700d0  lw          $a3, 0xD0($sp)
    ctx->pc = 0x330c24u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x330c28: 0x8fa800c0  lw          $t0, 0xC0($sp)
    ctx->pc = 0x330c28u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x330c2c: 0xc0cc464  jal         func_331190
    ctx->pc = 0x330C2Cu;
    SET_GPR_U32(ctx, 31, 0x330C34u);
    ctx->pc = 0x330C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x330C2Cu;
    // 0x330c30: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x331190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331190u, 0x330C2Cu, 0x330C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330C34u;
label_330c34:
    // 0x330c34: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x330c34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x330c38: 0x84450004  lh          $a1, 0x4($v0)
    ctx->pc = 0x330c38u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x330c3c: 0xafa000a0  sw          $zero, 0xA0($sp)
    ctx->pc = 0x330c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 0));
    // 0x330c40: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x330c40u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x330c44: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x330c44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x330c48: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x330c48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x330c4c: 0x84420006  lh          $v0, 0x6($v0)
    ctx->pc = 0x330c4cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x330c50: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x330c50u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x330c54: 0x2842021  addu        $a0, $s4, $a0
    ctx->pc = 0x330c54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
    // 0x330c58: 0x24920028  addiu       $s2, $a0, 0x28
    ctx->pc = 0x330c58u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 40));
    // 0x330c5c: 0x90630009  lbu         $v1, 0x9($v1)
    ctx->pc = 0x330c5cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 9)));
    // 0x330c60: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x330c60u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x330c64: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x330c64u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x330c68: 0x102000cf  beqz        $at, . + 4 + (0xCF << 2)
    ctx->pc = 0x330C68u;
    {
        const bool branch_taken_0x330c68 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x330C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330C68u;
        // 0x330c6c: 0x2039821  addu        $s3, $s0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330c68) {
            ctx->pc = 0x330FA8u;
            goto label_330fa8;
        }
    }
    ctx->pc = 0x330C70u;
label_330c70:
    // 0x330c70: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x330c70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x330c74: 0x84440004  lh          $a0, 0x4($v0)
    ctx->pc = 0x330c74u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x330c78: 0x84430002  lh          $v1, 0x2($v0)
    ctx->pc = 0x330c78u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x330c7c: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x330c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x330c80: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x330c80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x330c84: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x330c84u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x330c88: 0x102000a1  beqz        $at, . + 4 + (0xA1 << 2)
    ctx->pc = 0x330C88u;
    {
        const bool branch_taken_0x330c88 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x330c88) {
            ctx->pc = 0x330F10u;
            goto label_330f10;
        }
    }
    ctx->pc = 0x330C90u;
    // 0x330c90: 0x92440008  lbu         $a0, 0x8($s2)
    ctx->pc = 0x330c90u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x330c94: 0x3c03004f  lui         $v1, 0x4F
    ctx->pc = 0x330c94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)79 << 16));
    // 0x330c98: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x330c98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x330c9c: 0x24639a78  addiu       $v1, $v1, -0x6588
    ctx->pc = 0x330c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941304));
    // 0x330ca0: 0x24420960  addiu       $v0, $v0, 0x960
    ctx->pc = 0x330ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2400));
    // 0x330ca4: 0x17082a  slt         $at, $zero, $s7
    ctx->pc = 0x330ca4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
    // 0x330ca8: 0x3084000f  andi        $a0, $a0, 0xF
    ctx->pc = 0x330ca8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x330cac: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x330cacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x330cb0: 0x90750000  lbu         $s5, 0x0($v1)
    ctx->pc = 0x330cb0u;
    SET_GPR_ZE32(ctx, 21, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x330cb4: 0x151880  sll         $v1, $s5, 2
    ctx->pc = 0x330cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x330cb8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x330cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x330cbc: 0x8c560000  lw          $s6, 0x0($v0)
    ctx->pc = 0x330cbcu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x330cc0: 0x10200093  beqz        $at, . + 4 + (0x93 << 2)
    ctx->pc = 0x330CC0u;
    {
        const bool branch_taken_0x330cc0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x330CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330CC0u;
        // 0x330cc4: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330cc0) {
            ctx->pc = 0x330F10u;
            goto label_330f10;
        }
    }
    ctx->pc = 0x330CC8u;
    // 0x330cc8: 0x8fb100b0  lw          $s1, 0xB0($sp)
    ctx->pc = 0x330cc8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x330ccc: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x330cccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_330cd0:
    // 0x330cd0: 0x92220003  lbu         $v0, 0x3($s1)
    ctx->pc = 0x330cd0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x330cd4: 0x2c41000e  sltiu       $at, $v0, 0xE
    ctx->pc = 0x330cd4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)14) ? 1 : 0);
    // 0x330cd8: 0x10200087  beqz        $at, . + 4 + (0x87 << 2)
    ctx->pc = 0x330CD8u;
    {
        const bool branch_taken_0x330cd8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x330CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330CD8u;
        // 0x330cdc: 0x3c030068  lui         $v1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330cd8) {
            ctx->pc = 0x330EF8u;
            goto label_330ef8;
        }
    }
    ctx->pc = 0x330CE0u;
    // 0x330ce0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x330ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x330ce4: 0x2463cdc0  addiu       $v1, $v1, -0x3240
    ctx->pc = 0x330ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954432));
    // 0x330ce8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x330ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x330cec: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x330cecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x330cf0: 0x400008  jr          $v0
    ctx->pc = 0x330CF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x330CF8u: goto label_330cf8;
            case 0x330D20u: goto label_330d20;
            case 0x330D48u: goto label_330d48;
            case 0x330D70u: goto label_330d70;
            case 0x330D98u: goto label_330d98;
            case 0x330DC0u: goto label_330dc0;
            case 0x330DE8u: goto label_330de8;
            case 0x330E10u: goto label_330e10;
            case 0x330E38u: goto label_330e38;
            case 0x330E60u: goto label_330e60;
            case 0x330E88u: goto label_330e88;
            case 0x330EB0u: goto label_330eb0;
            case 0x330ED8u: goto label_330ed8;
            case 0x330EF8u: goto label_330ef8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x330CF0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x330CF8u;
label_330cf8:
    // 0x330cf8: 0x96051c72  lhu         $a1, 0x1C72($s0)
    ctx->pc = 0x330cf8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 7282)));
    // 0x330cfc: 0x96270000  lhu         $a3, 0x0($s1)
    ctx->pc = 0x330cfcu;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x330d00: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x330d00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330d04: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x330d04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330d08: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x330d08u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330d0c: 0x2a0482d  daddu       $t1, $s5, $zero
    ctx->pc = 0x330d0cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330d10: 0xc0cc488  jal         func_331220
    ctx->pc = 0x330D10u;
    SET_GPR_U32(ctx, 31, 0x330D18u);
    ctx->pc = 0x330D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x330D10u;
    // 0x330d14: 0x2c0502d  daddu       $t2, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x331220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331220u, 0x330D10u, 0x330D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330D18u;
label_330d18:
    // 0x330d18: 0x10000077  b           . + 4 + (0x77 << 2)
    ctx->pc = 0x330D18u;
    {
        const bool branch_taken_0x330d18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x330d18) {
            ctx->pc = 0x330EF8u;
            goto label_330ef8;
        }
    }
    ctx->pc = 0x330D20u;
label_330d20:
    // 0x330d20: 0x96051c72  lhu         $a1, 0x1C72($s0)
    ctx->pc = 0x330d20u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 7282)));
    // 0x330d24: 0x96270000  lhu         $a3, 0x0($s1)
    ctx->pc = 0x330d24u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x330d28: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x330d28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330d2c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x330d2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330d30: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x330d30u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330d34: 0x2a0482d  daddu       $t1, $s5, $zero
    ctx->pc = 0x330d34u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330d38: 0xc0cc498  jal         func_331260
    ctx->pc = 0x330D38u;
    SET_GPR_U32(ctx, 31, 0x330D40u);
    ctx->pc = 0x330D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x330D38u;
    // 0x330d3c: 0x2c0502d  daddu       $t2, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x331260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331260u, 0x330D38u, 0x330D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330D40u;
label_330d40:
    // 0x330d40: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x330D40u;
    {
        const bool branch_taken_0x330d40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x330d40) {
            ctx->pc = 0x330EF8u;
            goto label_330ef8;
        }
    }
    ctx->pc = 0x330D48u;
label_330d48:
    // 0x330d48: 0x96051c72  lhu         $a1, 0x1C72($s0)
    ctx->pc = 0x330d48u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 7282)));
    // 0x330d4c: 0x96270000  lhu         $a3, 0x0($s1)
    ctx->pc = 0x330d4cu;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x330d50: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x330d50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330d54: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x330d54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330d58: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x330d58u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330d5c: 0x2a0482d  daddu       $t1, $s5, $zero
    ctx->pc = 0x330d5cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330d60: 0xc0cc4b8  jal         func_3312E0
    ctx->pc = 0x330D60u;
    SET_GPR_U32(ctx, 31, 0x330D68u);
    ctx->pc = 0x330D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x330D60u;
    // 0x330d64: 0x2c0502d  daddu       $t2, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3312E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3312E0u, 0x330D60u, 0x330D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330D68u;
label_330d68:
    // 0x330d68: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x330D68u;
    {
        const bool branch_taken_0x330d68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x330d68) {
            ctx->pc = 0x330EF8u;
            goto label_330ef8;
        }
    }
    ctx->pc = 0x330D70u;
label_330d70:
    // 0x330d70: 0x96051c72  lhu         $a1, 0x1C72($s0)
    ctx->pc = 0x330d70u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 7282)));
    // 0x330d74: 0x96270000  lhu         $a3, 0x0($s1)
    ctx->pc = 0x330d74u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x330d78: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x330d78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330d7c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x330d7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330d80: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x330d80u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330d84: 0x2a0482d  daddu       $t1, $s5, $zero
    ctx->pc = 0x330d84u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330d88: 0xc0cc518  jal         func_331460
    ctx->pc = 0x330D88u;
    SET_GPR_U32(ctx, 31, 0x330D90u);
    ctx->pc = 0x330D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x330D88u;
    // 0x330d8c: 0x2c0502d  daddu       $t2, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x331460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331460u, 0x330D88u, 0x330D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330D90u;
label_330d90:
    // 0x330d90: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x330D90u;
    {
        const bool branch_taken_0x330d90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x330d90) {
            ctx->pc = 0x330EF8u;
            goto label_330ef8;
        }
    }
    ctx->pc = 0x330D98u;
label_330d98:
    // 0x330d98: 0x96051c72  lhu         $a1, 0x1C72($s0)
    ctx->pc = 0x330d98u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 7282)));
    // 0x330d9c: 0x96270000  lhu         $a3, 0x0($s1)
    ctx->pc = 0x330d9cu;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x330da0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x330da0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330da4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x330da4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330da8: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x330da8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330dac: 0x2a0482d  daddu       $t1, $s5, $zero
    ctx->pc = 0x330dacu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330db0: 0xc0cc52c  jal         func_3314B0
    ctx->pc = 0x330DB0u;
    SET_GPR_U32(ctx, 31, 0x330DB8u);
    ctx->pc = 0x330DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x330DB0u;
    // 0x330db4: 0x2c0502d  daddu       $t2, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3314B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3314B0u, 0x330DB0u, 0x330DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330DB8u;
label_330db8:
    // 0x330db8: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x330DB8u;
    {
        const bool branch_taken_0x330db8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x330db8) {
            ctx->pc = 0x330EF8u;
            goto label_330ef8;
        }
    }
    ctx->pc = 0x330DC0u;
label_330dc0:
    // 0x330dc0: 0x96051c72  lhu         $a1, 0x1C72($s0)
    ctx->pc = 0x330dc0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 7282)));
    // 0x330dc4: 0x96270000  lhu         $a3, 0x0($s1)
    ctx->pc = 0x330dc4u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x330dc8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x330dc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330dcc: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x330dccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330dd0: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x330dd0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330dd4: 0x2a0482d  daddu       $t1, $s5, $zero
    ctx->pc = 0x330dd4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330dd8: 0xc0cc54c  jal         func_331530
    ctx->pc = 0x330DD8u;
    SET_GPR_U32(ctx, 31, 0x330DE0u);
    ctx->pc = 0x330DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x330DD8u;
    // 0x330ddc: 0x2c0502d  daddu       $t2, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x331530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331530u, 0x330DD8u, 0x330DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330DE0u;
label_330de0:
    // 0x330de0: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x330DE0u;
    {
        const bool branch_taken_0x330de0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x330de0) {
            ctx->pc = 0x330EF8u;
            goto label_330ef8;
        }
    }
    ctx->pc = 0x330DE8u;
label_330de8:
    // 0x330de8: 0x96051c72  lhu         $a1, 0x1C72($s0)
    ctx->pc = 0x330de8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 7282)));
    // 0x330dec: 0x96270000  lhu         $a3, 0x0($s1)
    ctx->pc = 0x330decu;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x330df0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x330df0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330df4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x330df4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330df8: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x330df8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330dfc: 0x2a0482d  daddu       $t1, $s5, $zero
    ctx->pc = 0x330dfcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330e00: 0xc0cc588  jal         func_331620
    ctx->pc = 0x330E00u;
    SET_GPR_U32(ctx, 31, 0x330E08u);
    ctx->pc = 0x330E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x330E00u;
    // 0x330e04: 0x2c0502d  daddu       $t2, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x331620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331620u, 0x330E00u, 0x330E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330E08u;
label_330e08:
    // 0x330e08: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x330E08u;
    {
        const bool branch_taken_0x330e08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x330e08) {
            ctx->pc = 0x330EF8u;
            goto label_330ef8;
        }
    }
    ctx->pc = 0x330E10u;
label_330e10:
    // 0x330e10: 0x96051c72  lhu         $a1, 0x1C72($s0)
    ctx->pc = 0x330e10u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 7282)));
    // 0x330e14: 0x96270000  lhu         $a3, 0x0($s1)
    ctx->pc = 0x330e14u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x330e18: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x330e18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330e1c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x330e1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330e20: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x330e20u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330e24: 0x2a0482d  daddu       $t1, $s5, $zero
    ctx->pc = 0x330e24u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330e28: 0xc0cc598  jal         func_331660
    ctx->pc = 0x330E28u;
    SET_GPR_U32(ctx, 31, 0x330E30u);
    ctx->pc = 0x330E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x330E28u;
    // 0x330e2c: 0x2c0502d  daddu       $t2, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x331660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331660u, 0x330E28u, 0x330E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330E30u;
label_330e30:
    // 0x330e30: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x330E30u;
    {
        const bool branch_taken_0x330e30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x330e30) {
            ctx->pc = 0x330EF8u;
            goto label_330ef8;
        }
    }
    ctx->pc = 0x330E38u;
label_330e38:
    // 0x330e38: 0x96051c72  lhu         $a1, 0x1C72($s0)
    ctx->pc = 0x330e38u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 7282)));
    // 0x330e3c: 0x96270000  lhu         $a3, 0x0($s1)
    ctx->pc = 0x330e3cu;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x330e40: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x330e40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330e44: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x330e44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330e48: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x330e48u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330e4c: 0x2a0482d  daddu       $t1, $s5, $zero
    ctx->pc = 0x330e4cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330e50: 0xc0cc5c4  jal         func_331710
    ctx->pc = 0x330E50u;
    SET_GPR_U32(ctx, 31, 0x330E58u);
    ctx->pc = 0x330E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x330E50u;
    // 0x330e54: 0x2c0502d  daddu       $t2, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x331710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331710u, 0x330E50u, 0x330E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330E58u;
label_330e58:
    // 0x330e58: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x330E58u;
    {
        const bool branch_taken_0x330e58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x330e58) {
            ctx->pc = 0x330EF8u;
            goto label_330ef8;
        }
    }
    ctx->pc = 0x330E60u;
label_330e60:
    // 0x330e60: 0x96051c72  lhu         $a1, 0x1C72($s0)
    ctx->pc = 0x330e60u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 7282)));
    // 0x330e64: 0x96270000  lhu         $a3, 0x0($s1)
    ctx->pc = 0x330e64u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x330e68: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x330e68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330e6c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x330e6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330e70: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x330e70u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330e74: 0x2a0482d  daddu       $t1, $s5, $zero
    ctx->pc = 0x330e74u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330e78: 0xc0cc5e8  jal         func_3317A0
    ctx->pc = 0x330E78u;
    SET_GPR_U32(ctx, 31, 0x330E80u);
    ctx->pc = 0x330E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x330E78u;
    // 0x330e7c: 0x2c0502d  daddu       $t2, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3317A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3317A0u, 0x330E78u, 0x330E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330E80u;
label_330e80:
    // 0x330e80: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x330E80u;
    {
        const bool branch_taken_0x330e80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x330e80) {
            ctx->pc = 0x330EF8u;
            goto label_330ef8;
        }
    }
    ctx->pc = 0x330E88u;
label_330e88:
    // 0x330e88: 0x96051c72  lhu         $a1, 0x1C72($s0)
    ctx->pc = 0x330e88u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 7282)));
    // 0x330e8c: 0x96270000  lhu         $a3, 0x0($s1)
    ctx->pc = 0x330e8cu;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x330e90: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x330e90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330e94: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x330e94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330e98: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x330e98u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330e9c: 0x2a0482d  daddu       $t1, $s5, $zero
    ctx->pc = 0x330e9cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330ea0: 0xc0cc624  jal         func_331890
    ctx->pc = 0x330EA0u;
    SET_GPR_U32(ctx, 31, 0x330EA8u);
    ctx->pc = 0x330EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x330EA0u;
    // 0x330ea4: 0x2c0502d  daddu       $t2, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x331890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331890u, 0x330EA0u, 0x330EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330EA8u;
label_330ea8:
    // 0x330ea8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x330EA8u;
    {
        const bool branch_taken_0x330ea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x330ea8) {
            ctx->pc = 0x330EF8u;
            goto label_330ef8;
        }
    }
    ctx->pc = 0x330EB0u;
label_330eb0:
    // 0x330eb0: 0x96051c72  lhu         $a1, 0x1C72($s0)
    ctx->pc = 0x330eb0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 7282)));
    // 0x330eb4: 0x96270000  lhu         $a3, 0x0($s1)
    ctx->pc = 0x330eb4u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x330eb8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x330eb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330ebc: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x330ebcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330ec0: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x330ec0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330ec4: 0x2a0482d  daddu       $t1, $s5, $zero
    ctx->pc = 0x330ec4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330ec8: 0xc0cc660  jal         func_331980
    ctx->pc = 0x330EC8u;
    SET_GPR_U32(ctx, 31, 0x330ED0u);
    ctx->pc = 0x330ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x330EC8u;
    // 0x330ecc: 0x2c0502d  daddu       $t2, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x331980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331980u, 0x330EC8u, 0x330ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330ED0u;
label_330ed0:
    // 0x330ed0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x330ED0u;
    {
        const bool branch_taken_0x330ed0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x330ed0) {
            ctx->pc = 0x330EF8u;
            goto label_330ef8;
        }
    }
    ctx->pc = 0x330ED8u;
label_330ed8:
    // 0x330ed8: 0x96051c72  lhu         $a1, 0x1C72($s0)
    ctx->pc = 0x330ed8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 7282)));
    // 0x330edc: 0x96270000  lhu         $a3, 0x0($s1)
    ctx->pc = 0x330edcu;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x330ee0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x330ee0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330ee4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x330ee4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330ee8: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x330ee8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330eec: 0x2a0482d  daddu       $t1, $s5, $zero
    ctx->pc = 0x330eecu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330ef0: 0xc0cc680  jal         func_331A00
    ctx->pc = 0x330EF0u;
    SET_GPR_U32(ctx, 31, 0x330EF8u);
    ctx->pc = 0x330EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x330EF0u;
    // 0x330ef4: 0x2c0502d  daddu       $t2, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x331A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331A00u, 0x330EF0u, 0x330EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330EF8u;
label_330ef8:
    // 0x330ef8: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x330ef8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x330efc: 0x3d7102a  slt         $v0, $fp, $s7
    ctx->pc = 0x330efcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 30) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
    // 0x330f00: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x330f00u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x330f04: 0x1440ff72  bnez        $v0, . + 4 + (-0x8E << 2)
    ctx->pc = 0x330F04u;
    {
        const bool branch_taken_0x330f04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x330F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330F04u;
        // 0x330f08: 0x26100002  addiu       $s0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330f04) {
            ctx->pc = 0x330CD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_330cd0;
        }
    }
    ctx->pc = 0x330F0Cu;
    // 0x330f0c: 0x0  nop
    ctx->pc = 0x330f0cu;
    // NOP
label_330f10:
    // 0x330f10: 0x17082a  slt         $at, $zero, $s7
    ctx->pc = 0x330f10u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
    // 0x330f14: 0x10200018  beqz        $at, . + 4 + (0x18 << 2)
    ctx->pc = 0x330F14u;
    {
        const bool branch_taken_0x330f14 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x330F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330F14u;
        // 0x330f18: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330f14) {
            ctx->pc = 0x330F78u;
            goto label_330f78;
        }
    }
    ctx->pc = 0x330F1Cu;
    // 0x330f1c: 0x8fb100b0  lw          $s1, 0xB0($sp)
    ctx->pc = 0x330f1cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x330f20: 0x280a82d  daddu       $s5, $s4, $zero
    ctx->pc = 0x330f20u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330f24: 0x0  nop
    ctx->pc = 0x330f24u;
    // NOP
label_330f28:
    // 0x330f28: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x330f28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x330f2c: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x330f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
    // 0x330f30: 0x96a51c72  lhu         $a1, 0x1C72($s5)
    ctx->pc = 0x330f30u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 7282)));
    // 0x330f34: 0x344a8080  ori         $t2, $v0, 0x8080
    ctx->pc = 0x330f34u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    // 0x330f38: 0x96280000  lhu         $t0, 0x0($s1)
    ctx->pc = 0x330f38u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x330f3c: 0x3c04004e  lui         $a0, 0x4E
    ctx->pc = 0x330f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)78 << 16));
    // 0x330f40: 0x2666ffff  addiu       $a2, $s3, -0x1
    ctx->pc = 0x330f40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x330f44: 0x2484703c  addiu       $a0, $a0, 0x703C
    ctx->pc = 0x330f44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28732));
    // 0x330f48: 0x3407fff5  ori         $a3, $zero, 0xFFF5
    ctx->pc = 0x330f48u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65525);
    // 0x330f4c: 0x90620009  lbu         $v0, 0x9($v1)
    ctx->pc = 0x330f4cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 9)));
    // 0x330f50: 0x24a50007  addiu       $a1, $a1, 0x7
    ctx->pc = 0x330f50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7));
    // 0x330f54: 0x2508fff2  addiu       $t0, $t0, -0xE
    ctx->pc = 0x330f54u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967282));
    // 0x330f58: 0xc09c844  jal         func_272110
    ctx->pc = 0x330F58u;
    SET_GPR_U32(ctx, 31, 0x330F60u);
    ctx->pc = 0x330F5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x330F58u;
    // 0x330f5c: 0x2449fff4  addiu       $t1, $v0, -0xC (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967284));
    ctx->in_delay_slot = false;
    ctx->pc = 0x272110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x272110u, 0x330F58u, 0x330F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330F60u;
label_330f60:
    // 0x330f60: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x330f60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x330f64: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x330f64u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x330f68: 0x217102a  slt         $v0, $s0, $s7
    ctx->pc = 0x330f68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
    // 0x330f6c: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x330F6Cu;
    {
        const bool branch_taken_0x330f6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x330F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330F6Cu;
        // 0x330f70: 0x26b50002  addiu       $s5, $s5, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330f6c) {
            ctx->pc = 0x330F28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_330f28;
        }
    }
    ctx->pc = 0x330F74u;
    // 0x330f74: 0x0  nop
    ctx->pc = 0x330f74u;
    // NOP
label_330f78:
    // 0x330f78: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x330f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x330f7c: 0x8e840008  lw          $a0, 0x8($s4)
    ctx->pc = 0x330f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x330f80: 0x2652000c  addiu       $s2, $s2, 0xC
    ctx->pc = 0x330f80u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
    // 0x330f84: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x330f84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x330f88: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x330f88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
    // 0x330f8c: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x330f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x330f90: 0x90840009  lbu         $a0, 0x9($a0)
    ctx->pc = 0x330f90u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 9)));
    // 0x330f94: 0x84430006  lh          $v1, 0x6($v0)
    ctx->pc = 0x330f94u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x330f98: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x330f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x330f9c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x330f9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x330fa0: 0x1440ff33  bnez        $v0, . + 4 + (-0xCD << 2)
    ctx->pc = 0x330FA0u;
    {
        const bool branch_taken_0x330fa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x330FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330FA0u;
        // 0x330fa4: 0x2649821  addu        $s3, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330fa0) {
            ctx->pc = 0x330C70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_330c70;
        }
    }
    ctx->pc = 0x330FA8u;
label_330fa8:
    // 0x330fa8: 0x240301e9  addiu       $v1, $zero, 0x1E9
    ctx->pc = 0x330fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 489));
    // 0x330fac: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x330facu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x330fb0: 0xa7a30118  sh          $v1, 0x118($sp)
    ctx->pc = 0x330fb0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 280), (uint16_t)GPR_U32(ctx, 3));
    // 0x330fb4: 0xa7a2011c  sh          $v0, 0x11C($sp)
    ctx->pc = 0x330fb4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 284), (uint16_t)GPR_U32(ctx, 2));
    // 0x330fb8: 0x3c040092  lui         $a0, 0x92
    ctx->pc = 0x330fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)146 << 16));
    // 0x330fbc: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x330fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x330fc0: 0x27a3011a  addiu       $v1, $sp, 0x11A
    ctx->pc = 0x330fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 282));
    // 0x330fc4: 0x8fa60100  lw          $a2, 0x100($sp)
    ctx->pc = 0x330fc4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x330fc8: 0x24841400  addiu       $a0, $a0, 0x1400
    ctx->pc = 0x330fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5120));
    // 0x330fcc: 0x27a50118  addiu       $a1, $sp, 0x118
    ctx->pc = 0x330fccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 280));
    // 0x330fd0: 0x94420002  lhu         $v0, 0x2($v0)
    ctx->pc = 0x330fd0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x330fd4: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x330fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x330fd8: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x330fd8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x330fdc: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x330fdcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x330fe0: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x330fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x330fe4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x330fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x330fe8: 0xc0dc8a0  jal         func_372280
    ctx->pc = 0x330FE8u;
    SET_GPR_U32(ctx, 31, 0x330FF0u);
    ctx->pc = 0x330FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x330FE8u;
    // 0x330fec: 0xa7a2011e  sh          $v0, 0x11E($sp) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 29), 286), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x372280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x372280u, 0x330FE8u, 0x330FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330FF0u;
label_330ff0:
    // 0x330ff0: 0x97a200e0  lhu         $v0, 0xE0($sp)
    ctx->pc = 0x330ff0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x330ff4: 0x3c04004e  lui         $a0, 0x4E
    ctx->pc = 0x330ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)78 << 16));
    // 0x330ff8: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x330ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x330ffc: 0x24847000  addiu       $a0, $a0, 0x7000
    ctx->pc = 0x330ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28672));
    // 0x331000: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x331000u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x331004: 0x3407fff5  ori         $a3, $zero, 0xFFF5
    ctx->pc = 0x331004u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65525);
    // 0x331008: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x331008u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33100c: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x33100cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x331010: 0x624823  subu        $t1, $v1, $v0
    ctx->pc = 0x331010u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x331014: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x331014u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331018: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x331018u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
    // 0x33101c: 0xc09c720  jal         func_271C80
    ctx->pc = 0x33101Cu;
    SET_GPR_U32(ctx, 31, 0x331024u);
    ctx->pc = 0x331020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33101Cu;
    // 0x331020: 0x344a8080  ori         $t2, $v0, 0x8080 (Delay Slot)
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    ctx->in_delay_slot = false;
    ctx->pc = 0x271C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x271C80u, 0x33101Cu, 0x331024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331024u;
label_331024:
    // 0x331024: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x331024u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x331028: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x331028u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x33102c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x33102cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x331030: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x331030u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x331034: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x331034u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x331038: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x331038u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x33103c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x33103cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x331040: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x331040u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x331044: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x331044u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x331048: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x331048u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33104c: 0x3e00008  jr          $ra
    ctx->pc = 0x33104Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x331050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33104Cu;
        // 0x331050: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33104Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x331054u;
}
