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

// Function: sub_0019C520
// Address: 0x19c520 - 0x19c6e0
void sub_0019C520_0x19c520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019C520_0x19c520");
#endif

    switch (ctx->pc) {
        case 0x19c590u: goto label_19c590;
        case 0x19c6b8u: goto label_19c6b8;
        default: break;
    }

    ctx->pc = 0x19c520u;

    // 0x19c520: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x19c520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x19c524: 0x61840  sll         $v1, $a2, 1
    ctx->pc = 0x19c524u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x19c528: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x19c528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x19c52c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x19c52cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x19c530: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x19c530u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x19c534: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x19c534u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c538: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x19c538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x19c53c: 0x662021  addu        $a0, $v1, $a2
    ctx->pc = 0x19c53cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x19c540: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x19c540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x19c544: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x19c544u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x19c548: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x19c548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x19c54c: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x19c54cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x19c550: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19c550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19c554: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x19c554u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c558: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19c558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19c55c: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x19c55cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c560: 0xa48021  addu        $s0, $a1, $a0
    ctx->pc = 0x19c560u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x19c564: 0x120982d  daddu       $s3, $t1, $zero
    ctx->pc = 0x19c564u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c568: 0x92040000  lbu         $a0, 0x0($s0)
    ctx->pc = 0x19c568u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x19c56c: 0x140902d  daddu       $s2, $t2, $zero
    ctx->pc = 0x19c56cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c570: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x19C570u;
    {
        const bool branch_taken_0x19c570 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x19C574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C570u;
        // 0x19c574: 0x160882d  daddu       $s1, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c570) {
            ctx->pc = 0x19C580u;
            goto label_19c580;
        }
    }
    ctx->pc = 0x19C578u;
    // 0x19c578: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x19C578u;
    {
        const bool branch_taken_0x19c578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c578) {
            ctx->pc = 0x19C6B8u;
            goto label_19c6b8;
        }
    }
    ctx->pc = 0x19C580u;
label_19c580:
    // 0x19c580: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x19c580u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x19c584: 0x2484cea0  addiu       $a0, $a0, -0x3160
    ctx->pc = 0x19c584u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954656));
    // 0x19c588: 0xc05e360  jal         func_178D80
    ctx->pc = 0x19C588u;
    SET_GPR_U32(ctx, 31, 0x19C590u);
    ctx->pc = 0x19C58Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C588u;
    // 0x19c58c: 0x24050030  addiu       $a1, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178D80u, 0x19C588u, 0x19C590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C590u;
label_19c590:
    // 0x19c590: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x19c590u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c594: 0x10a00048  beqz        $a1, . + 4 + (0x48 << 2)
    ctx->pc = 0x19C594u;
    {
        const bool branch_taken_0x19c594 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C594u;
        // 0x19c598: 0x3c048000  lui         $a0, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c594) {
            ctx->pc = 0x19C6B8u;
            goto label_19c6b8;
        }
    }
    ctx->pc = 0x19C59Cu;
    // 0x19c59c: 0x2541821  addu        $v1, $s2, $s4
    ctx->pc = 0x19c59cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
    // 0x19c5a0: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x19c5a0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x19c5a4: 0x2331021  addu        $v0, $s1, $s3
    ctx->pc = 0x19c5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
    // 0x19c5a8: 0x92060004  lbu         $a2, 0x4($s0)
    ctx->pc = 0x19c5a8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x19c5ac: 0x24630700  addiu       $v1, $v1, 0x700
    ctx->pc = 0x19c5acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1792));
    // 0x19c5b0: 0x24420f20  addiu       $v0, $v0, 0xF20
    ctx->pc = 0x19c5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3872));
    // 0x19c5b4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x19c5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x19c5b8: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x19c5b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x19c5bc: 0x214c0  sll         $v0, $v0, 19
    ctx->pc = 0x19c5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 19));
    // 0x19c5c0: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x19c5c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x19c5c4: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x19c5c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x19c5c8: 0x3c032028  lui         $v1, 0x2028
    ctx->pc = 0x19c5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8232 << 16));
    // 0x19c5cc: 0x6200a  movz        $a0, $zero, $a2
    ctx->pc = 0x19c5ccu;
    if (GPR_U64(ctx, 6) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
    // 0x19c5d0: 0x34840116  ori         $a0, $a0, 0x116
    ctx->pc = 0x19c5d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)278);
    // 0x19c5d4: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x19c5d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x19c5d8: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x19c5d8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    // 0x19c5dc: 0x8ec30014  lw          $v1, 0x14($s6)
    ctx->pc = 0x19c5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 20)));
    // 0x19c5e0: 0xaca30010  sw          $v1, 0x10($a1)
    ctx->pc = 0x19c5e0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 3));
    // 0x19c5e4: 0x96030002  lhu         $v1, 0x2($s0)
    ctx->pc = 0x19c5e4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x19c5e8: 0xa4a30014  sh          $v1, 0x14($a1)
    ctx->pc = 0x19c5e8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 20), (uint16_t)GPR_U32(ctx, 3));
    // 0x19c5ec: 0xa4b50016  sh          $s5, 0x16($a1)
    ctx->pc = 0x19c5ecu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 22), (uint16_t)GPR_U32(ctx, 21));
    // 0x19c5f0: 0xaca20020  sw          $v0, 0x20($a1)
    ctx->pc = 0x19c5f0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 2));
    // 0x19c5f4: 0x9602000a  lhu         $v0, 0xA($s0)
    ctx->pc = 0x19c5f4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x19c5f8: 0xaca20024  sw          $v0, 0x24($a1)
    ctx->pc = 0x19c5f8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 2));
    // 0x19c5fc: 0x96030010  lhu         $v1, 0x10($s0)
    ctx->pc = 0x19c5fcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x19c600: 0x96020012  lhu         $v0, 0x12($s0)
    ctx->pc = 0x19c600u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x19c604: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x19c604u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x19c608: 0x21500  sll         $v0, $v0, 20
    ctx->pc = 0x19c608u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 20));
    // 0x19c60c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x19c60cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x19c610: 0xaca20028  sw          $v0, 0x28($a1)
    ctx->pc = 0x19c610u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 2));
    // 0x19c614: 0x9603000c  lhu         $v1, 0xC($s0)
    ctx->pc = 0x19c614u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x19c618: 0x9602000e  lhu         $v0, 0xE($s0)
    ctx->pc = 0x19c618u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x19c61c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x19c61cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x19c620: 0x21500  sll         $v0, $v0, 20
    ctx->pc = 0x19c620u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 20));
    // 0x19c624: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x19c624u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x19c628: 0xaca20018  sw          $v0, 0x18($a1)
    ctx->pc = 0x19c628u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 2));
    // 0x19c62c: 0x9606000c  lhu         $a2, 0xC($s0)
    ctx->pc = 0x19c62cu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x19c630: 0x96040010  lhu         $a0, 0x10($s0)
    ctx->pc = 0x19c630u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x19c634: 0x9603000e  lhu         $v1, 0xE($s0)
    ctx->pc = 0x19c634u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x19c638: 0x96020012  lhu         $v0, 0x12($s0)
    ctx->pc = 0x19c638u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x19c63c: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x19c63cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x19c640: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x19c640u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x19c644: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x19c644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x19c648: 0x21500  sll         $v0, $v0, 20
    ctx->pc = 0x19c648u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 20));
    // 0x19c64c: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x19c64cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x19c650: 0xaca2001c  sw          $v0, 0x1C($a1)
    ctx->pc = 0x19c650u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 2));
    // 0x19c654: 0x92040015  lbu         $a0, 0x15($s0)
    ctx->pc = 0x19c654u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 21)));
    // 0x19c658: 0x92030016  lbu         $v1, 0x16($s0)
    ctx->pc = 0x19c658u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 22)));
    // 0x19c65c: 0x92020017  lbu         $v0, 0x17($s0)
    ctx->pc = 0x19c65cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 23)));
    // 0x19c660: 0x92060014  lbu         $a2, 0x14($s0)
    ctx->pc = 0x19c660u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x19c664: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x19c664u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x19c668: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x19c668u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x19c66c: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x19c66cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x19c670: 0xc42025  or          $a0, $a2, $a0
    ctx->pc = 0x19c670u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
    // 0x19c674: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x19c674u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x19c678: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x19c678u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x19c67c: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x19c67cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
    // 0x19c680: 0x92020004  lbu         $v0, 0x4($s0)
    ctx->pc = 0x19c680u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x19c684: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x19C684u;
    {
        const bool branch_taken_0x19c684 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c684) {
            ctx->pc = 0x19C6A8u;
            goto label_19c6a8;
        }
    }
    ctx->pc = 0x19C68Cu;
    // 0x19c68c: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x19c68cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x19c690: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x19c690u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x19c694: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x19c694u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x19c698: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x19c698u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x19c69c: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x19c69cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x19c6a0: 0x92020017  lbu         $v0, 0x17($s0)
    ctx->pc = 0x19c6a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 23)));
    // 0x19c6a4: 0xa0a2000f  sb          $v0, 0xF($a1)
    ctx->pc = 0x19c6a4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 15), (uint8_t)GPR_U32(ctx, 2));
label_19c6a8:
    // 0x19c6a8: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x19c6a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x19c6ac: 0x2484cc40  addiu       $a0, $a0, -0x33C0
    ctx->pc = 0x19c6acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954048));
    // 0x19c6b0: 0xc04fb2c  jal         func_13ECB0
    ctx->pc = 0x19C6B0u;
    SET_GPR_U32(ctx, 31, 0x19C6B8u);
    ctx->pc = 0x19C6B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C6B0u;
    // 0x19c6b4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECB0u, 0x19C6B0u, 0x19C6B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C6B8u;
label_19c6b8:
    // 0x19c6b8: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x19c6b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x19c6bc: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x19c6bcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19c6c0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x19c6c0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19c6c4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x19c6c4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19c6c8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x19c6c8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19c6cc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x19c6ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19c6d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19c6d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19c6d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19c6d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19c6d8: 0x3e00008  jr          $ra
    ctx->pc = 0x19C6D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19C6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C6D8u;
        // 0x19c6dc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C6D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19C6E0u;
}
