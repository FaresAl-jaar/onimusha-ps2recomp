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

// Function: sub_00364830
// Address: 0x364830 - 0x364a04
void sub_00364830_0x364830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00364830_0x364830");
#endif

    switch (ctx->pc) {
        case 0x364874u: goto label_364874;
        case 0x3648ecu: goto label_3648ec;
        case 0x364900u: goto label_364900;
        case 0x3649b4u: goto label_3649b4;
        case 0x3649d4u: goto label_3649d4;
        default: break;
    }

    ctx->pc = 0x364830u;

    // 0x364830: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x364830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x364834: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x364834u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
    // 0x364838: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x364838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x36483c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x36483cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364840: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x364840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x364844: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x364844u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x364848: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x364848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x36484c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x36484cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364850: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x364850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x364854: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x364854u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x364858: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x364858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x36485c: 0x2484a878  addiu       $a0, $a0, -0x5788
    ctx->pc = 0x36485cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944888));
    // 0x364860: 0x2407003a  addiu       $a3, $zero, 0x3A
    ctx->pc = 0x364860u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x364864: 0x3408fffa  ori         $t0, $zero, 0xFFFA
    ctx->pc = 0x364864u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65530);
    // 0x364868: 0x34498080  ori         $t1, $v0, 0x8080
    ctx->pc = 0x364868u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    // 0x36486c: 0xc09c5fc  jal         func_2717F0
    ctx->pc = 0x36486Cu;
    SET_GPR_U32(ctx, 31, 0x364874u);
    ctx->pc = 0x364870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36486Cu;
    // 0x364870: 0x7fb00010  sq          $s0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2717F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2717F0u, 0x36486Cu, 0x364874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364874u;
label_364874:
    // 0x364874: 0x92820004  lbu         $v0, 0x4($s4)
    ctx->pc = 0x364874u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x364878: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x364878u;
    {
        const bool branch_taken_0x364878 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x364878) {
            ctx->pc = 0x3648F0u;
            goto label_3648f0;
        }
    }
    ctx->pc = 0x364880u;
    // 0x364880: 0x93828bd0  lbu         $v0, -0x7430($gp)
    ctx->pc = 0x364880u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937552)));
    // 0x364884: 0x3c0a0066  lui         $t2, 0x66
    ctx->pc = 0x364884u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)102 << 16));
    // 0x364888: 0x3c0d0068  lui         $t5, 0x68
    ctx->pc = 0x364888u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)104 << 16));
    // 0x36488c: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x36488cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x364890: 0x254aa890  addiu       $t2, $t2, -0x5770
    ctx->pc = 0x364890u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294944912));
    // 0x364894: 0x25ad1850  addiu       $t5, $t5, 0x1850
    ctx->pc = 0x364894u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 6224));
    // 0x364898: 0x3c0c0100  lui         $t4, 0x100
    ctx->pc = 0x364898u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)256 << 16));
    // 0x36489c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x36489cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3648a0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3648a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3648a4: 0x24090018  addiu       $t1, $zero, 0x18
    ctx->pc = 0x3648a4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x3648a8: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x3648a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x3648ac: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x3648acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x3648b0: 0x270c0  sll         $t6, $v0, 3
    ctx->pc = 0x3648b0u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x3648b4: 0x2406016d  addiu       $a2, $zero, 0x16D
    ctx->pc = 0x3648b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 365));
    // 0x3648b8: 0x14e7021  addu        $t6, $t2, $t6
    ctx->pc = 0x3648b8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 14)));
    // 0x3648bc: 0x431004  sllv        $v0, $v1, $v0
    ctx->pc = 0x3648bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x3648c0: 0x91ce0000  lbu         $t6, 0x0($t6)
    ctx->pc = 0x3648c0u;
    SET_GPR_ZE32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x3648c4: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x3648c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x3648c8: 0x240b0011  addiu       $t3, $zero, 0x11
    ctx->pc = 0x3648c8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x3648cc: 0x120502d  daddu       $t2, $t1, $zero
    ctx->pc = 0x3648ccu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3648d0: 0x1cc6025  or          $t4, $t6, $t4
    ctx->pc = 0x3648d0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 14) | GPR_U64(ctx, 12));
    // 0x3648d4: 0xffad0000  sd          $t5, 0x0($sp)
    ctx->pc = 0x3648d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 13));
    // 0x3648d8: 0xffac0008  sd          $t4, 0x8($sp)
    ctx->pc = 0x3648d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 12));
    // 0x3648dc: 0x938c8bd4  lbu         $t4, -0x742C($gp)
    ctx->pc = 0x3648dcu;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937556)));
    // 0x3648e0: 0x1821024  and         $v0, $t4, $v0
    ctx->pc = 0x3648e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 12) & GPR_U64(ctx, 2));
    // 0x3648e4: 0xc095fa8  jal         func_257EA0
    ctx->pc = 0x3648E4u;
    SET_GPR_U32(ctx, 31, 0x3648ECu);
    ctx->pc = 0x3648E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3648E4u;
    // 0x3648e8: 0x62380a  movz        $a3, $v1, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257EA0u, 0x3648E4u, 0x3648ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3648ECu;
label_3648ec:
    // 0x3648ec: 0x0  nop
    ctx->pc = 0x3648ecu;
    // NOP
label_3648f0:
    // 0x3648f0: 0x3c130066  lui         $s3, 0x66
    ctx->pc = 0x3648f0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)102 << 16));
    // 0x3648f4: 0x2673a890  addiu       $s3, $s3, -0x5770
    ctx->pc = 0x3648f4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294944912));
    // 0x3648f8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3648f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3648fc: 0x0  nop
    ctx->pc = 0x3648fcu;
    // NOP
label_364900:
    // 0x364900: 0x92680001  lbu         $t0, 0x1($s3)
    ctx->pc = 0x364900u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
    // 0x364904: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x364904u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
    // 0x364908: 0x93858bd4  lbu         $a1, -0x742C($gp)
    ctx->pc = 0x364908u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937556)));
    // 0x36490c: 0x34508080  ori         $s0, $v0, 0x8080
    ctx->pc = 0x36490cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    // 0x364910: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x364910u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x364914: 0x92820004  lbu         $v0, 0x4($s4)
    ctx->pc = 0x364914u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x364918: 0x2432004  sllv        $a0, $v1, $s2
    ctx->pc = 0x364918u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 18) & 0x1F));
    // 0x36491c: 0x3c038020  lui         $v1, 0x8020
    ctx->pc = 0x36491cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32800 << 16));
    // 0x364920: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x364920u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
    // 0x364924: 0x34632020  ori         $v1, $v1, 0x2020
    ctx->pc = 0x364924u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8224);
    // 0x364928: 0x24c6a800  addiu       $a2, $a2, -0x5800
    ctx->pc = 0x364928u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294944768));
    // 0x36492c: 0x83840  sll         $a3, $t0, 1
    ctx->pc = 0x36492cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x364930: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x364930u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x364934: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x364934u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x364938: 0x64800a  movz        $s0, $v1, $a0
    ctx->pc = 0x364938u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    // 0x36493c: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x36493cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x364940: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x364940u;
    {
        const bool branch_taken_0x364940 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x364944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364940u;
        // 0x364944: 0xc38821  addu        $s1, $a2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x364940) {
            ctx->pc = 0x3649B8u;
            goto label_3649b8;
        }
    }
    ctx->pc = 0x364948u;
    // 0x364948: 0x93828bd0  lbu         $v0, -0x7430($gp)
    ctx->pc = 0x364948u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937552)));
    // 0x36494c: 0x1452001a  bne         $v0, $s2, . + 4 + (0x1A << 2)
    ctx->pc = 0x36494Cu;
    {
        const bool branch_taken_0x36494c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x36494c) {
            ctx->pc = 0x3649B8u;
            goto label_3649b8;
        }
    }
    ctx->pc = 0x364954u;
    // 0x364954: 0x86260008  lh          $a2, 0x8($s1)
    ctx->pc = 0x364954u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x364958: 0x8628000a  lh          $t0, 0xA($s1)
    ctx->pc = 0x364958u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
    // 0x36495c: 0x4c10003  bgez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x36495Cu;
    {
        const bool branch_taken_0x36495c = (GPR_S64(ctx, 6) >= 0);
        ctx->pc = 0x364960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36495Cu;
        // 0x364960: 0x61843  sra         $v1, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36495c) {
            ctx->pc = 0x36496Cu;
            goto label_36496c;
        }
    }
    ctx->pc = 0x364964u;
    // 0x364964: 0x24c20001  addiu       $v0, $a2, 0x1
    ctx->pc = 0x364964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x364968: 0x21843  sra         $v1, $v0, 1
    ctx->pc = 0x364968u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
label_36496c:
    // 0x36496c: 0x96650002  lhu         $a1, 0x2($s3)
    ctx->pc = 0x36496cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x364970: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x364970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x364974: 0x432023  subu        $a0, $v0, $v1
    ctx->pc = 0x364974u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x364978: 0x81c3c  dsll32      $v1, $t0, 16
    ctx->pc = 0x364978u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) << (32 + 16));
    // 0x36497c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x36497cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x364980: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x364980u;
    {
        const bool branch_taken_0x364980 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x364984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364980u;
        // 0x364984: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x364980) {
            ctx->pc = 0x364990u;
            goto label_364990;
        }
    }
    ctx->pc = 0x364988u;
    // 0x364988: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x364988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x36498c: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x36498cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_364990:
    // 0x364990: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x364990u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x364994: 0x63c3c  dsll32      $a3, $a2, 16
    ctx->pc = 0x364994u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) << (32 + 16));
    // 0x364998: 0x8c297184  lw          $t1, 0x7184($at)
    ctx->pc = 0x364998u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 29060)));
    // 0x36499c: 0x8443c  dsll32      $t0, $t0, 16
    ctx->pc = 0x36499cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 16));
    // 0x3649a0: 0xa22823  subu        $a1, $a1, $v0
    ctx->pc = 0x3649a0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x3649a4: 0x73c3f  dsra32      $a3, $a3, 16
    ctx->pc = 0x3649a4u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    // 0x3649a8: 0x8443f  dsra32      $t0, $t0, 16
    ctx->pc = 0x3649a8u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
    // 0x3649ac: 0xc09c4e0  jal         func_271380
    ctx->pc = 0x3649ACu;
    SET_GPR_U32(ctx, 31, 0x3649B4u);
    ctx->pc = 0x3649B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3649ACu;
    // 0x3649b0: 0x3406fffa  ori         $a2, $zero, 0xFFFA (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65530);
    ctx->in_delay_slot = false;
    ctx->pc = 0x271380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x271380u, 0x3649ACu, 0x3649B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3649B4u;
label_3649b4:
    // 0x3649b4: 0x0  nop
    ctx->pc = 0x3649b4u;
    // NOP
label_3649b8:
    // 0x3649b8: 0x96670002  lhu         $a3, 0x2($s3)
    ctx->pc = 0x3649b8u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x3649bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3649bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3649c0: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x3649c0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3649c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3649c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3649c8: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x3649c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x3649cc: 0xc09c5fc  jal         func_2717F0
    ctx->pc = 0x3649CCu;
    SET_GPR_U32(ctx, 31, 0x3649D4u);
    ctx->pc = 0x3649D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3649CCu;
    // 0x3649d0: 0x3408fffa  ori         $t0, $zero, 0xFFFA (Delay Slot)
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65530);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2717F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2717F0u, 0x3649CCu, 0x3649D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3649D4u;
label_3649d4:
    // 0x3649d4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3649d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x3649d8: 0x2e430003  sltiu       $v1, $s2, 0x3
    ctx->pc = 0x3649d8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x3649dc: 0x1460ffc8  bnez        $v1, . + 4 + (-0x38 << 2)
    ctx->pc = 0x3649DCu;
    {
        const bool branch_taken_0x3649dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3649E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3649DCu;
        // 0x3649e0: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3649dc) {
            ctx->pc = 0x364900u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_364900;
        }
    }
    ctx->pc = 0x3649E4u;
    // 0x3649e4: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x3649e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3649e8: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x3649e8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3649ec: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3649ecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3649f0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3649f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3649f4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3649f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3649f8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3649f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3649fc: 0x3e00008  jr          $ra
    ctx->pc = 0x3649FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x364A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3649FCu;
        // 0x364a00: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3649FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x364A04u;
}
