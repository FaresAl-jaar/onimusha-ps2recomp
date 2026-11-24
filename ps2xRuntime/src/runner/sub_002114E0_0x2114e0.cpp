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

// Function: sub_002114E0
// Address: 0x2114e0 - 0x211644
void sub_002114E0_0x2114e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002114E0_0x2114e0");
#endif

    switch (ctx->pc) {
        case 0x211520u: goto label_211520;
        case 0x21152cu: goto label_21152c;
        default: break;
    }

    ctx->pc = 0x2114e0u;

    // 0x2114e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2114e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2114e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2114e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2114e8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2114e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2114ec: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2114ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2114f0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2114f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2114f4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2114f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2114f8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2114f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2114fc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2114fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x211500: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x211500u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x211504: 0x1a000046  blez        $s0, . + 4 + (0x46 << 2)
    ctx->pc = 0x211504u;
    {
        const bool branch_taken_0x211504 = (GPR_S64(ctx, 16) <= 0);
        ctx->pc = 0x211508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211504u;
        // 0x211508: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211504) {
            ctx->pc = 0x211620u;
            goto label_211620;
        }
    }
    ctx->pc = 0x21150Cu;
    // 0x21150c: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x21150cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x211510: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x211510u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x211514: 0x245387b8  addiu       $s3, $v0, -0x7848
    ctx->pc = 0x211514u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936504));
    // 0x211518: 0x247489e0  addiu       $s4, $v1, -0x7620
    ctx->pc = 0x211518u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 4294937056));
    // 0x21151c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21151cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_211520:
    // 0x211520: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x211520u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211524: 0xc07f6bc  jal         func_1FDAF0
    ctx->pc = 0x211524u;
    SET_GPR_U32(ctx, 31, 0x21152Cu);
    ctx->pc = 0x211528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211524u;
    // 0x211528: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDAF0u, 0x211524u, 0x21152Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21152Cu;
label_21152c:
    // 0x21152c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x21152cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211530: 0x10a0003c  beqz        $a1, . + 4 + (0x3C << 2)
    ctx->pc = 0x211530u;
    {
        const bool branch_taken_0x211530 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x211534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211530u;
        // 0x211534: 0xb12023  subu        $a0, $a1, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211530) {
            ctx->pc = 0x211624u;
            goto label_211624;
        }
    }
    ctx->pc = 0x211538u;
    // 0x211538: 0x90a60007  lbu         $a2, 0x7($a1)
    ctx->pc = 0x211538u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 7)));
    // 0x21153c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x21153cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x211540: 0x2048023  subu        $s0, $s0, $a0
    ctx->pc = 0x211540u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x211544: 0x2248821  addu        $s1, $s1, $a0
    ctx->pc = 0x211544u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x211548: 0x61902  srl         $v1, $a2, 4
    ctx->pc = 0x211548u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 4));
    // 0x21154c: 0x30c6000f  andi        $a2, $a2, 0xF
    ctx->pc = 0x21154cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)15);
    // 0x211550: 0x24c200ff  addiu       $v0, $a2, 0xFF
    ctx->pc = 0x211550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 255));
    // 0x211554: 0x90ac000b  lbu         $t4, 0xB($a1)
    ctx->pc = 0x211554u;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 11)));
    // 0x211558: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x211558u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21155c: 0x90a7000a  lbu         $a3, 0xA($a1)
    ctx->pc = 0x21155cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 10)));
    // 0x211560: 0x2c420008  sltiu       $v0, $v0, 0x8
    ctx->pc = 0x211560u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x211564: 0x90a80004  lbu         $t0, 0x4($a1)
    ctx->pc = 0x211564u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x211568: 0x90a40005  lbu         $a0, 0x5($a1)
    ctx->pc = 0x211568u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 5)));
    // 0x21156c: 0x90a90006  lbu         $t1, 0x6($a1)
    ctx->pc = 0x21156cu;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x211570: 0x90aa0008  lbu         $t2, 0x8($a1)
    ctx->pc = 0x211570u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x211574: 0x10600028  beqz        $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x211574u;
    {
        const bool branch_taken_0x211574 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x211578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211574u;
        // 0x211578: 0x90ab0009  lbu         $t3, 0x9($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211574) {
            ctx->pc = 0x211618u;
            goto label_211618;
        }
    }
    ctx->pc = 0x21157Cu;
    // 0x21157c: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x21157Cu;
    {
        const bool branch_taken_0x21157c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x211580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21157Cu;
        // 0x211580: 0x71142  srl         $v0, $a3, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21157c) {
            ctx->pc = 0x211618u;
            goto label_211618;
        }
    }
    ctx->pc = 0x211584u;
    // 0x211584: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x211584u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x211588: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x211588u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21158c: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x21158Cu;
    {
        const bool branch_taken_0x21158c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x211590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21158Cu;
        // 0x211590: 0x3082000f  andi        $v0, $a0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21158c) {
            ctx->pc = 0x211618u;
            goto label_211618;
        }
    }
    ctx->pc = 0x211594u;
    // 0x211594: 0x42102  srl         $a0, $a0, 4
    ctx->pc = 0x211594u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 4));
    // 0x211598: 0x81900  sll         $v1, $t0, 4
    ctx->pc = 0x211598u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x21159c: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x21159cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2115a0: 0x8e45001c  lw          $a1, 0x1C($s2)
    ctx->pc = 0x2115a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x2115a4: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2115a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2115a8: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x2115a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x2115ac: 0xae430014  sw          $v1, 0x14($s2)
    ctx->pc = 0x2115acu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 3));
    // 0x2115b0: 0x14a0000c  bnez        $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x2115B0u;
    {
        const bool branch_taken_0x2115b0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2115B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2115B0u;
        // 0x2115b4: 0xae420018  sw          $v0, 0x18($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2115b0) {
            ctx->pc = 0x2115E4u;
            goto label_2115e4;
        }
    }
    ctx->pc = 0x2115B8u;
    // 0x2115b8: 0xb1080  sll         $v0, $t3, 2
    ctx->pc = 0x2115b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
    // 0x2115bc: 0xa1a80  sll         $v1, $t2, 10
    ctx->pc = 0x2115bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 10));
    // 0x2115c0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2115c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2115c4: 0x72182  srl         $a0, $a3, 6
    ctx->pc = 0x2115c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 7), 6));
    // 0x2115c8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2115c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2115cc: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2115ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2115d0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2115d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2115d4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2115d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2115d8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2115d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2115dc: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2115dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2115e0: 0xae42001c  sw          $v0, 0x1C($s2)
    ctx->pc = 0x2115e0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 2));
label_2115e4:
    // 0x2115e4: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x2115e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2115e8: 0x30e2001f  andi        $v0, $a3, 0x1F
    ctx->pc = 0x2115e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)31);
    // 0x2115ec: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x2115ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x2115f0: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2115f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2115f4: 0xc20c2  srl         $a0, $t4, 3
    ctx->pc = 0x2115f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 12), 3));
    // 0x2115f8: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x2115f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2115fc: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x2115fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x211600: 0xae540008  sw          $s4, 0x8($s2)
    ctx->pc = 0x211600u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 20));
    // 0x211604: 0x212c0  sll         $v0, $v0, 11
    ctx->pc = 0x211604u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
    // 0x211608: 0xae450020  sw          $a1, 0x20($s2)
    ctx->pc = 0x211608u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 5));
    // 0x21160c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x21160Cu;
    {
        const bool branch_taken_0x21160c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x211610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21160Cu;
        // 0x211610: 0xae420024  sw          $v0, 0x24($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21160c) {
            ctx->pc = 0x211620u;
            goto label_211620;
        }
    }
    ctx->pc = 0x211614u;
    // 0x211614: 0x0  nop
    ctx->pc = 0x211614u;
    // NOP
label_211618:
    // 0x211618: 0x1e00ffc1  bgtz        $s0, . + 4 + (-0x3F << 2)
    ctx->pc = 0x211618u;
    {
        const bool branch_taken_0x211618 = (GPR_S64(ctx, 16) > 0);
        ctx->pc = 0x21161Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211618u;
        // 0x21161c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211618) {
            ctx->pc = 0x211520u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_211520;
        }
    }
    ctx->pc = 0x211620u;
label_211620:
    // 0x211620: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x211620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_211624:
    // 0x211624: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x211624u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x211628: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x211628u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21162c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x21162cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x211630: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x211630u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x211634: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x211634u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x211638: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x211638u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x21163c: 0x3e00008  jr          $ra
    ctx->pc = 0x21163Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x211640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21163Cu;
        // 0x211640: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21163Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x211644u;
}
