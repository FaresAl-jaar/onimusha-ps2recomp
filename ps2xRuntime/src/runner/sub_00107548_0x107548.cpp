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

// Function: sub_00107548
// Address: 0x107548 - 0x107970
void sub_00107548_0x107548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00107548_0x107548");
#endif

    switch (ctx->pc) {
        case 0x107598u: goto label_107598;
        case 0x1075bcu: goto label_1075bc;
        case 0x107634u: goto label_107634;
        case 0x1076ccu: goto label_1076cc;
        case 0x1076f0u: goto label_1076f0;
        case 0x10775cu: goto label_10775c;
        case 0x107780u: goto label_107780;
        case 0x1077f4u: goto label_1077f4;
        case 0x1078b8u: goto label_1078b8;
        case 0x1078dcu: goto label_1078dc;
        default: break;
    }

    ctx->pc = 0x107548u;

    // 0x107548: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x107548u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x10754c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x10754cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x107550: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x107550u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107554: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x107554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x107558: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x107558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x10755c: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x10755cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107560: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x107560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x107564: 0x120b82d  daddu       $s7, $t1, $zero
    ctx->pc = 0x107564u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107568: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x107568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x10756c: 0x140b02d  daddu       $s6, $t2, $zero
    ctx->pc = 0x10756cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107570: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x107570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x107574: 0x160a82d  daddu       $s5, $t3, $zero
    ctx->pc = 0x107574u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107578: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x107578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x10757c: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x10757cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107580: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x107580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x107584: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x107584u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107588: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x107588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x10758c: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x10758cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107590: 0xc0421b6  jal         func_1086D8
    ctx->pc = 0x107590u;
    SET_GPR_U32(ctx, 31, 0x107598u);
    ctx->pc = 0x107594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107590u;
    // 0x107594: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1086D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1086D8u, 0x107590u, 0x107598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107598u;
label_107598:
    // 0x107598: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x107598u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x10759c: 0x3c033800  lui         $v1, 0x3800
    ctx->pc = 0x10759cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)14336 << 16));
    // 0x1075a0: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x1075a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x1075a4: 0x3c053000  lui         $a1, 0x3000
    ctx->pc = 0x1075a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)12288 << 16));
    // 0x1075a8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1075a8u;
    runtime->Store32(rdram, ctx, 0x10002000u, GPR_U32(ctx, 3)); // MMIO: 0x10002000
    // 0x1075ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1075acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1075b0: 0xae200828  sw          $zero, 0x828($s1)
    ctx->pc = 0x1075b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2088), GPR_U32(ctx, 0));
    // 0x1075b4: 0xc0420d2  jal         func_108348
    ctx->pc = 0x1075B4u;
    SET_GPR_U32(ctx, 31, 0x1075BCu);
    ctx->pc = 0x1075B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1075B4u;
    // 0x1075b8: 0xae25082c  sw          $a1, 0x82C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 2092), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108348u, 0x1075B4u, 0x1075BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1075BCu;
label_1075bc:
    // 0x1075bc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1075bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1075c0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1075c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1075c4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1075c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1075c8: 0x34632030  ori         $v1, $v1, 0x2030
    ctx->pc = 0x1075c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8240);
    // 0x1075cc: 0x34422020  ori         $v0, $v0, 0x2020
    ctx->pc = 0x1075ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8224);
    // 0x1075d0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1075d0u;
    SET_GPR_S32(ctx, 5, (int32_t)runtime->Load32(rdram, ctx, 0x10002020u)); // MMIO: 0x10002020
    // 0x1075d4: 0xdc640000  ld          $a0, 0x0($v1)
    ctx->pc = 0x1075d4u;
    SET_GPR_U64(ctx, 4, runtime->Load64(rdram, ctx, 0x10002030u));
    // 0x1075d8: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x1075d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1075dc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1075dcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1075e0: 0x4810005  bgez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1075E0u;
    {
        const bool branch_taken_0x1075e0 = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x1075E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1075E0u;
        // 0x1075e4: 0xae220848  sw          $v0, 0x848($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2120), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1075e0) {
            ctx->pc = 0x1075F8u;
            goto label_1075f8;
        }
    }
    ctx->pc = 0x1075E8u;
    // 0x1075e8: 0x30a2001f  andi        $v0, $a1, 0x1F
    ctx->pc = 0x1075e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31);
    // 0x1075ec: 0x21023  negu        $v0, $v0
    ctx->pc = 0x1075ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x1075f0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1075F0u;
    {
        const bool branch_taken_0x1075f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1075F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1075F0u;
        // 0x1075f4: 0x3042001f  andi        $v0, $v0, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1075f0) {
            ctx->pc = 0x1075FCu;
            goto label_1075fc;
        }
    }
    ctx->pc = 0x1075F8u;
label_1075f8:
    // 0x1075f8: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x1075f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1075fc:
    // 0x1075fc: 0xae22084c  sw          $v0, 0x84C($s1)
    ctx->pc = 0x1075fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2124), GPR_U32(ctx, 2));
    // 0x107600: 0x30c3ffff  andi        $v1, $a2, 0xFFFF
    ctx->pc = 0x107600u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x107604: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x107604u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
    // 0x107608: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x107608u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x10760c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x10760cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x107610: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x107610u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x107614: 0xae22012c  sw          $v0, 0x12C($s1)
    ctx->pc = 0x107614u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 300), GPR_U32(ctx, 2));
    // 0x107618: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x107618u;
    {
        const bool branch_taken_0x107618 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x10761Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107618u;
        // 0x10761c: 0x38403  sra         $s0, $v1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107618) {
            ctx->pc = 0x10763Cu;
            goto label_10763c;
        }
    }
    ctx->pc = 0x107620u;
    // 0x107620: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x107620u;
    {
        const bool branch_taken_0x107620 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x107624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107620u;
        // 0x107624: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107620) {
            ctx->pc = 0x107640u;
            goto label_107640;
        }
    }
    ctx->pc = 0x107628u;
    // 0x107628: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x107628u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10762c: 0xc042132  jal         func_1084C8
    ctx->pc = 0x10762Cu;
    SET_GPR_U32(ctx, 31, 0x107634u);
    ctx->pc = 0x107630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10762Cu;
    // 0x107630: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1084C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1084C8u, 0x10762Cu, 0x107634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107634u;
label_107634:
    // 0x107634: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x107634u;
    {
        const bool branch_taken_0x107634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x107638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107634u;
        // 0x107638: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107634) {
            ctx->pc = 0x107640u;
            goto label_107640;
        }
    }
    ctx->pc = 0x10763Cu;
label_10763c:
    // 0x10763c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x10763cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_107640:
    // 0x107640: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x107640u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x107644: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x107644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x107648: 0x2423004  sllv        $a2, $v0, $s2
    ctx->pc = 0x107648u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 18) & 0x1F));
    // 0x10764c: 0x41843  sra         $v1, $a0, 1
    ctx->pc = 0x10764cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 1));
    // 0x107650: 0x1a00000c  blez        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x107650u;
    {
        const bool branch_taken_0x107650 = (GPR_S64(ctx, 16) <= 0);
        ctx->pc = 0x107654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107650u;
        // 0x107654: 0x75200b  movn        $a0, $v1, $s5 (Delay Slot)
        if (GPR_U64(ctx, 21) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107650) {
            ctx->pc = 0x107684u;
            goto label_107684;
        }
    }
    ctx->pc = 0x107658u;
    // 0x107658: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x107658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x10765c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x10765cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x107660: 0x2421004  sllv        $v0, $v0, $s2
    ctx->pc = 0x107660u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 18) & 0x1F));
    // 0x107664: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x107664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x107668: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x107668u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x10766c: 0x86182a  slt         $v1, $a0, $a2
    ctx->pc = 0x10766cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x107670: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x107670u;
    {
        const bool branch_taken_0x107670 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x107674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107670u;
        // 0x107674: 0x41040  sll         $v0, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107670) {
            ctx->pc = 0x1076B8u;
            goto label_1076b8;
        }
    }
    ctx->pc = 0x107678u;
    // 0x107678: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x107678u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x10767c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x10767Cu;
    {
        const bool branch_taken_0x10767c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x107680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10767Cu;
        // 0x107680: 0x822023  subu        $a0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10767c) {
            ctx->pc = 0x1076B4u;
            goto label_1076b4;
        }
    }
    ctx->pc = 0x107684u;
label_107684:
    // 0x107684: 0x601000c  bgez        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x107684u;
    {
        const bool branch_taken_0x107684 = (GPR_S64(ctx, 16) >= 0);
        ctx->pc = 0x107688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107684u;
        // 0x107688: 0x41040  sll         $v0, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107684) {
            ctx->pc = 0x1076B8u;
            goto label_1076b8;
        }
    }
    ctx->pc = 0x10768Cu;
    // 0x10768c: 0x101027  nor         $v0, $zero, $s0
    ctx->pc = 0x10768cu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 16)));
    // 0x107690: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x107690u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x107694: 0x2421004  sllv        $v0, $v0, $s2
    ctx->pc = 0x107694u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 18) & 0x1F));
    // 0x107698: 0x61823  negu        $v1, $a2
    ctx->pc = 0x107698u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
    // 0x10769c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x10769cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1076a0: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x1076a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1076a4: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x1076a4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1076a8: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1076A8u;
    {
        const bool branch_taken_0x1076a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1076ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1076A8u;
        // 0x1076ac: 0x61040  sll         $v0, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1076a8) {
            ctx->pc = 0x1076B4u;
            goto label_1076b4;
        }
    }
    ctx->pc = 0x1076B0u;
    // 0x1076b0: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1076b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1076b4:
    // 0x1076b4: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x1076b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_1076b8:
    // 0x1076b8: 0x95100a  movz        $v0, $a0, $s5
    ctx->pc = 0x1076b8u;
    if (GPR_U64(ctx, 21) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x1076bc: 0x12e00025  beqz        $s7, . + 4 + (0x25 << 2)
    ctx->pc = 0x1076BCu;
    {
        const bool branch_taken_0x1076bc = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x1076C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1076BCu;
        // 0x1076c0: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1076bc) {
            ctx->pc = 0x107754u;
            goto label_107754;
        }
    }
    ctx->pc = 0x1076C4u;
    // 0x1076c4: 0xc0421b6  jal         func_1086D8
    ctx->pc = 0x1076C4u;
    SET_GPR_U32(ctx, 31, 0x1076CCu);
    ctx->pc = 0x1076C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1076C4u;
    // 0x1076c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1086D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1086D8u, 0x1076C4u, 0x1076CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1076CCu;
label_1076cc:
    // 0x1076cc: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1076ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1076d0: 0x3c033c00  lui         $v1, 0x3C00
    ctx->pc = 0x1076d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15360 << 16));
    // 0x1076d4: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x1076d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x1076d8: 0x3c053000  lui         $a1, 0x3000
    ctx->pc = 0x1076d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)12288 << 16));
    // 0x1076dc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1076dcu;
    runtime->Store32(rdram, ctx, 0x10002000u, GPR_U32(ctx, 3)); // MMIO: 0x10002000
    // 0x1076e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1076e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1076e4: 0xae200828  sw          $zero, 0x828($s1)
    ctx->pc = 0x1076e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2088), GPR_U32(ctx, 0));
    // 0x1076e8: 0xc0420d2  jal         func_108348
    ctx->pc = 0x1076E8u;
    SET_GPR_U32(ctx, 31, 0x1076F0u);
    ctx->pc = 0x1076ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1076E8u;
    // 0x1076ec: 0xae25082c  sw          $a1, 0x82C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 2092), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108348u, 0x1076E8u, 0x1076F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1076F0u;
label_1076f0:
    // 0x1076f0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1076f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1076f4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1076f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1076f8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1076f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1076fc: 0x34632030  ori         $v1, $v1, 0x2030
    ctx->pc = 0x1076fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8240);
    // 0x107700: 0x34422020  ori         $v0, $v0, 0x2020
    ctx->pc = 0x107700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8224);
    // 0x107704: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x107704u;
    SET_GPR_S32(ctx, 5, (int32_t)runtime->Load32(rdram, ctx, 0x10002020u)); // MMIO: 0x10002020
    // 0x107708: 0xdc640000  ld          $a0, 0x0($v1)
    ctx->pc = 0x107708u;
    SET_GPR_U64(ctx, 4, runtime->Load64(rdram, ctx, 0x10002030u));
    // 0x10770c: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x10770cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x107710: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x107710u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x107714: 0x4810005  bgez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x107714u;
    {
        const bool branch_taken_0x107714 = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x107718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107714u;
        // 0x107718: 0xae220848  sw          $v0, 0x848($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2120), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107714) {
            ctx->pc = 0x10772Cu;
            goto label_10772c;
        }
    }
    ctx->pc = 0x10771Cu;
    // 0x10771c: 0x30a2001f  andi        $v0, $a1, 0x1F
    ctx->pc = 0x10771cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31);
    // 0x107720: 0x21023  negu        $v0, $v0
    ctx->pc = 0x107720u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x107724: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x107724u;
    {
        const bool branch_taken_0x107724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x107728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107724u;
        // 0x107728: 0x3042001f  andi        $v0, $v0, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        if (branch_taken_0x107724) {
            ctx->pc = 0x107730u;
            goto label_107730;
        }
    }
    ctx->pc = 0x10772Cu;
label_10772c:
    // 0x10772c: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x10772cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_107730:
    // 0x107730: 0xae22084c  sw          $v0, 0x84C($s1)
    ctx->pc = 0x107730u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2124), GPR_U32(ctx, 2));
    // 0x107734: 0x30c3ffff  andi        $v1, $a2, 0xFFFF
    ctx->pc = 0x107734u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x107738: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x107738u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
    // 0x10773c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x10773cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x107740: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x107740u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x107744: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x107744u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x107748: 0xae22012c  sw          $v0, 0x12C($s1)
    ctx->pc = 0x107748u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 300), GPR_U32(ctx, 2));
    // 0x10774c: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x10774cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x107750: 0xafc30000  sw          $v1, 0x0($fp)
    ctx->pc = 0x107750u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 3));
label_107754:
    // 0x107754: 0xc0421b6  jal         func_1086D8
    ctx->pc = 0x107754u;
    SET_GPR_U32(ctx, 31, 0x10775Cu);
    ctx->pc = 0x107758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107754u;
    // 0x107758: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1086D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1086D8u, 0x107754u, 0x10775Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10775Cu;
label_10775c:
    // 0x10775c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x10775cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x107760: 0x3c033800  lui         $v1, 0x3800
    ctx->pc = 0x107760u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)14336 << 16));
    // 0x107764: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x107764u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x107768: 0x3c053000  lui         $a1, 0x3000
    ctx->pc = 0x107768u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)12288 << 16));
    // 0x10776c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x10776cu;
    runtime->Store32(rdram, ctx, 0x10002000u, GPR_U32(ctx, 3)); // MMIO: 0x10002000
    // 0x107770: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x107770u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107774: 0xae200828  sw          $zero, 0x828($s1)
    ctx->pc = 0x107774u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2088), GPR_U32(ctx, 0));
    // 0x107778: 0xc0420d2  jal         func_108348
    ctx->pc = 0x107778u;
    SET_GPR_U32(ctx, 31, 0x107780u);
    ctx->pc = 0x10777Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107778u;
    // 0x10777c: 0xae25082c  sw          $a1, 0x82C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 2092), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108348u, 0x107778u, 0x107780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107780u;
label_107780:
    // 0x107780: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x107780u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107784: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x107784u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x107788: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x107788u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x10778c: 0x34632030  ori         $v1, $v1, 0x2030
    ctx->pc = 0x10778cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8240);
    // 0x107790: 0x34422020  ori         $v0, $v0, 0x2020
    ctx->pc = 0x107790u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8224);
    // 0x107794: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x107794u;
    SET_GPR_S32(ctx, 5, (int32_t)runtime->Load32(rdram, ctx, 0x10002020u)); // MMIO: 0x10002020
    // 0x107798: 0xdc640000  ld          $a0, 0x0($v1)
    ctx->pc = 0x107798u;
    SET_GPR_U64(ctx, 4, runtime->Load64(rdram, ctx, 0x10002030u));
    // 0x10779c: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x10779cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1077a0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1077a0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1077a4: 0x4810005  bgez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1077A4u;
    {
        const bool branch_taken_0x1077a4 = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x1077A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1077A4u;
        // 0x1077a8: 0xae220848  sw          $v0, 0x848($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2120), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1077a4) {
            ctx->pc = 0x1077BCu;
            goto label_1077bc;
        }
    }
    ctx->pc = 0x1077ACu;
    // 0x1077ac: 0x30a2001f  andi        $v0, $a1, 0x1F
    ctx->pc = 0x1077acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31);
    // 0x1077b0: 0x21023  negu        $v0, $v0
    ctx->pc = 0x1077b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x1077b4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1077B4u;
    {
        const bool branch_taken_0x1077b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1077B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1077B4u;
        // 0x1077b8: 0x3042001f  andi        $v0, $v0, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1077b4) {
            ctx->pc = 0x1077C0u;
            goto label_1077c0;
        }
    }
    ctx->pc = 0x1077BCu;
label_1077bc:
    // 0x1077bc: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x1077bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1077c0:
    // 0x1077c0: 0xae22084c  sw          $v0, 0x84C($s1)
    ctx->pc = 0x1077c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2124), GPR_U32(ctx, 2));
    // 0x1077c4: 0x30c3ffff  andi        $v1, $a2, 0xFFFF
    ctx->pc = 0x1077c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x1077c8: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x1077c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
    // 0x1077cc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1077ccu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1077d0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1077d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1077d4: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x1077d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1077d8: 0xae22012c  sw          $v0, 0x12C($s1)
    ctx->pc = 0x1077d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 300), GPR_U32(ctx, 2));
    // 0x1077dc: 0x12800007  beqz        $s4, . + 4 + (0x7 << 2)
    ctx->pc = 0x1077DCu;
    {
        const bool branch_taken_0x1077dc = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1077E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1077DCu;
        // 0x1077e0: 0x38403  sra         $s0, $v1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1077dc) {
            ctx->pc = 0x1077FCu;
            goto label_1077fc;
        }
    }
    ctx->pc = 0x1077E4u;
    // 0x1077e4: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1077E4u;
    {
        const bool branch_taken_0x1077e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1077E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1077E4u;
        // 0x1077e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1077e4) {
            ctx->pc = 0x1077FCu;
            goto label_1077fc;
        }
    }
    ctx->pc = 0x1077ECu;
    // 0x1077ec: 0xc042132  jal         func_1084C8
    ctx->pc = 0x1077ECu;
    SET_GPR_U32(ctx, 31, 0x1077F4u);
    ctx->pc = 0x1077F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1077ECu;
    // 0x1077f0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1084C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1084C8u, 0x1077ECu, 0x1077F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1077F4u;
label_1077f4:
    // 0x1077f4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1077F4u;
    {
        const bool branch_taken_0x1077f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1077F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1077F4u;
        // 0x1077f8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1077f4) {
            ctx->pc = 0x107800u;
            goto label_107800;
        }
    }
    ctx->pc = 0x1077FCu;
label_1077fc:
    // 0x1077fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1077fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_107800:
    // 0x107800: 0x52c00005  beql        $s6, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x107800u;
    {
        const bool branch_taken_0x107800 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x107800) {
            ctx->pc = 0x107804u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x107800u;
            // 0x107804: 0x8e640004  lw          $a0, 0x4($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x107818u;
            goto label_107818;
        }
    }
    ctx->pc = 0x107808u;
    // 0x107808: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x107808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x10780c: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x10780cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x107810: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x107810u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
    // 0x107814: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x107814u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_107818:
    // 0x107818: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x107818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x10781c: 0x2823004  sllv        $a2, $v0, $s4
    ctx->pc = 0x10781cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 20) & 0x1F));
    // 0x107820: 0x26670004  addiu       $a3, $s3, 0x4
    ctx->pc = 0x107820u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x107824: 0x41043  sra         $v0, $a0, 1
    ctx->pc = 0x107824u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), 1));
    // 0x107828: 0x1a00000c  blez        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x107828u;
    {
        const bool branch_taken_0x107828 = (GPR_S64(ctx, 16) <= 0);
        ctx->pc = 0x10782Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107828u;
        // 0x10782c: 0x55200b  movn        $a0, $v0, $s5 (Delay Slot)
        if (GPR_U64(ctx, 21) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107828) {
            ctx->pc = 0x10785Cu;
            goto label_10785c;
        }
    }
    ctx->pc = 0x107830u;
    // 0x107830: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x107830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x107834: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x107834u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x107838: 0x2821004  sllv        $v0, $v0, $s4
    ctx->pc = 0x107838u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 20) & 0x1F));
    // 0x10783c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x10783cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x107840: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x107840u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x107844: 0x86182a  slt         $v1, $a0, $a2
    ctx->pc = 0x107844u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x107848: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x107848u;
    {
        const bool branch_taken_0x107848 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x10784Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107848u;
        // 0x10784c: 0x41040  sll         $v0, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107848) {
            ctx->pc = 0x107890u;
            goto label_107890;
        }
    }
    ctx->pc = 0x107850u;
    // 0x107850: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x107850u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x107854: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x107854u;
    {
        const bool branch_taken_0x107854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x107858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107854u;
        // 0x107858: 0x822023  subu        $a0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107854) {
            ctx->pc = 0x10788Cu;
            goto label_10788c;
        }
    }
    ctx->pc = 0x10785Cu;
label_10785c:
    // 0x10785c: 0x601000c  bgez        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x10785Cu;
    {
        const bool branch_taken_0x10785c = (GPR_S64(ctx, 16) >= 0);
        ctx->pc = 0x107860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10785Cu;
        // 0x107860: 0x41040  sll         $v0, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10785c) {
            ctx->pc = 0x107890u;
            goto label_107890;
        }
    }
    ctx->pc = 0x107864u;
    // 0x107864: 0x101027  nor         $v0, $zero, $s0
    ctx->pc = 0x107864u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 16)));
    // 0x107868: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x107868u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x10786c: 0x2821004  sllv        $v0, $v0, $s4
    ctx->pc = 0x10786cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 20) & 0x1F));
    // 0x107870: 0x61823  negu        $v1, $a2
    ctx->pc = 0x107870u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
    // 0x107874: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x107874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x107878: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x107878u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x10787c: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x10787cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x107880: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x107880u;
    {
        const bool branch_taken_0x107880 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x107884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107880u;
        // 0x107884: 0x61040  sll         $v0, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107880) {
            ctx->pc = 0x10788Cu;
            goto label_10788c;
        }
    }
    ctx->pc = 0x107888u;
    // 0x107888: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x107888u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_10788c:
    // 0x10788c: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x10788cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_107890:
    // 0x107890: 0x95100a  movz        $v0, $a0, $s5
    ctx->pc = 0x107890u;
    if (GPR_U64(ctx, 21) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x107894: 0x12c00004  beqz        $s6, . + 4 + (0x4 << 2)
    ctx->pc = 0x107894u;
    {
        const bool branch_taken_0x107894 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x107898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107894u;
        // 0x107898: 0xace20000  sw          $v0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107894) {
            ctx->pc = 0x1078A8u;
            goto label_1078a8;
        }
    }
    ctx->pc = 0x10789Cu;
    // 0x10789c: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x10789cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1078a0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1078a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1078a4: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x1078a4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
label_1078a8:
    // 0x1078a8: 0x12e00026  beqz        $s7, . + 4 + (0x26 << 2)
    ctx->pc = 0x1078A8u;
    {
        const bool branch_taken_0x1078a8 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x1078ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1078A8u;
        // 0x1078ac: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1078a8) {
            ctx->pc = 0x107944u;
            goto label_107944;
        }
    }
    ctx->pc = 0x1078B0u;
    // 0x1078b0: 0xc0421b6  jal         func_1086D8
    ctx->pc = 0x1078B0u;
    SET_GPR_U32(ctx, 31, 0x1078B8u);
    ctx->pc = 0x1078B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1078B0u;
    // 0x1078b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1086D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1086D8u, 0x1078B0u, 0x1078B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1078B8u;
label_1078b8:
    // 0x1078b8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1078b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1078bc: 0x3c033c00  lui         $v1, 0x3C00
    ctx->pc = 0x1078bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15360 << 16));
    // 0x1078c0: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x1078c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x1078c4: 0x3c053000  lui         $a1, 0x3000
    ctx->pc = 0x1078c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)12288 << 16));
    // 0x1078c8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1078c8u;
    runtime->Store32(rdram, ctx, 0x10002000u, GPR_U32(ctx, 3)); // MMIO: 0x10002000
    // 0x1078cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1078ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1078d0: 0xae200828  sw          $zero, 0x828($s1)
    ctx->pc = 0x1078d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2088), GPR_U32(ctx, 0));
    // 0x1078d4: 0xc0420d2  jal         func_108348
    ctx->pc = 0x1078D4u;
    SET_GPR_U32(ctx, 31, 0x1078DCu);
    ctx->pc = 0x1078D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1078D4u;
    // 0x1078d8: 0xae25082c  sw          $a1, 0x82C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 2092), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108348u, 0x1078D4u, 0x1078DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1078DCu;
label_1078dc:
    // 0x1078dc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1078dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1078e0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1078e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1078e4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1078e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1078e8: 0x34632030  ori         $v1, $v1, 0x2030
    ctx->pc = 0x1078e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8240);
    // 0x1078ec: 0x34422020  ori         $v0, $v0, 0x2020
    ctx->pc = 0x1078ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8224);
    // 0x1078f0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1078f0u;
    SET_GPR_S32(ctx, 5, (int32_t)runtime->Load32(rdram, ctx, 0x10002020u)); // MMIO: 0x10002020
    // 0x1078f4: 0xdc640000  ld          $a0, 0x0($v1)
    ctx->pc = 0x1078f4u;
    SET_GPR_U64(ctx, 4, runtime->Load64(rdram, ctx, 0x10002030u));
    // 0x1078f8: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x1078f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1078fc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1078fcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x107900: 0x4810005  bgez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x107900u;
    {
        const bool branch_taken_0x107900 = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x107904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107900u;
        // 0x107904: 0xae220848  sw          $v0, 0x848($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2120), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107900) {
            ctx->pc = 0x107918u;
            goto label_107918;
        }
    }
    ctx->pc = 0x107908u;
    // 0x107908: 0x30a2001f  andi        $v0, $a1, 0x1F
    ctx->pc = 0x107908u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31);
    // 0x10790c: 0x21023  negu        $v0, $v0
    ctx->pc = 0x10790cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x107910: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x107910u;
    {
        const bool branch_taken_0x107910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x107914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107910u;
        // 0x107914: 0x3042001f  andi        $v0, $v0, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        if (branch_taken_0x107910) {
            ctx->pc = 0x10791Cu;
            goto label_10791c;
        }
    }
    ctx->pc = 0x107918u;
label_107918:
    // 0x107918: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x107918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_10791c:
    // 0x10791c: 0xae22084c  sw          $v0, 0x84C($s1)
    ctx->pc = 0x10791cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2124), GPR_U32(ctx, 2));
    // 0x107920: 0x30c3ffff  andi        $v1, $a2, 0xFFFF
    ctx->pc = 0x107920u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x107924: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x107924u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
    // 0x107928: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x107928u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x10792c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x10792cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x107930: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x107930u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x107934: 0xae22012c  sw          $v0, 0x12C($s1)
    ctx->pc = 0x107934u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 300), GPR_U32(ctx, 2));
    // 0x107938: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x107938u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x10793c: 0xafc30004  sw          $v1, 0x4($fp)
    ctx->pc = 0x10793cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 3));
    // 0x107940: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x107940u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_107944:
    // 0x107944: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x107944u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x107948: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x107948u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x10794c: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x10794cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x107950: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x107950u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x107954: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x107954u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x107958: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x107958u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10795c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x10795cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x107960: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x107960u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x107964: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x107964u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x107968: 0x3e00008  jr          $ra
    ctx->pc = 0x107968u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10796Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107968u;
        // 0x10796c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x107968u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x107970u;
}
