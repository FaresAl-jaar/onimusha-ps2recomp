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

// Function: sub_0017D500
// Address: 0x17d500 - 0x17d670
void sub_0017D500_0x17d500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017D500_0x17d500");
#endif

    switch (ctx->pc) {
        case 0x17d558u: goto label_17d558;
        case 0x17d5b4u: goto label_17d5b4;
        case 0x17d5f0u: goto label_17d5f0;
        case 0x17d618u: goto label_17d618;
        default: break;
    }

    ctx->pc = 0x17d500u;

    // 0x17d500: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x17d500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x17d504: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x17d504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x17d508: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x17d508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x17d50c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x17d50cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x17d510: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x17d510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x17d514: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x17d514u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d518: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x17d518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x17d51c: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x17d51cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d520: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x17d520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x17d524: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x17d524u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x17d528: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x17d528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x17d52c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17d52cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17d530: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17d530u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17d534: 0x8c820078  lw          $v0, 0x78($a0)
    ctx->pc = 0x17d534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 120)));
    // 0x17d538: 0x94830068  lhu         $v1, 0x68($a0)
    ctx->pc = 0x17d538u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 104)));
    // 0x17d53c: 0x8c95007c  lw          $s5, 0x7C($a0)
    ctx->pc = 0x17d53cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
    // 0x17d540: 0x24540010  addiu       $s4, $v0, 0x10
    ctx->pc = 0x17d540u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x17d544: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x17d544u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x17d548: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17d548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17d54c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x17d54cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x17d550: 0x282f021  addu        $fp, $s4, $v0
    ctx->pc = 0x17d550u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x17d554: 0x0  nop
    ctx->pc = 0x17d554u;
    // NOP
label_17d558:
    // 0x17d558: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17d558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17d55c: 0xa2a20000  sb          $v0, 0x0($s5)
    ctx->pc = 0x17d55cu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x17d560: 0x2c0882d  daddu       $s1, $s6, $zero
    ctx->pc = 0x17d560u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d564: 0xaea00004  sw          $zero, 0x4($s5)
    ctx->pc = 0x17d564u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 0));
    // 0x17d568: 0xaea00010  sw          $zero, 0x10($s5)
    ctx->pc = 0x17d568u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 16), GPR_U32(ctx, 0));
    // 0x17d56c: 0x92920024  lbu         $s2, 0x24($s4)
    ctx->pc = 0x17d56cu;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 36)));
    // 0x17d570: 0xa2b20001  sb          $s2, 0x1($s5)
    ctx->pc = 0x17d570u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 1), (uint8_t)GPR_U32(ctx, 18));
    // 0x17d574: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x17d574u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x17d578: 0xaeb6000c  sw          $s6, 0xC($s5)
    ctx->pc = 0x17d578u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 22));
    // 0x17d57c: 0x2c2b021  addu        $s6, $s6, $v0
    ctx->pc = 0x17d57cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x17d580: 0x32c3000f  andi        $v1, $s6, 0xF
    ctx->pc = 0x17d580u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)15);
    // 0x17d584: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x17D584u;
    {
        const bool branch_taken_0x17d584 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x17D588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D584u;
        // 0x17d588: 0xaeb400d8  sw          $s4, 0xD8($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 216), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d584) {
            ctx->pc = 0x17D598u;
            goto label_17d598;
        }
    }
    ctx->pc = 0x17D58Cu;
    // 0x17d58c: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x17d58cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x17d590: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x17D590u;
    {
        const bool branch_taken_0x17d590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17D594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D590u;
        // 0x17d594: 0x431023  subu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d590) {
            ctx->pc = 0x17D5A0u;
            goto label_17d5a0;
        }
    }
    ctx->pc = 0x17D598u;
label_17d598:
    // 0x17d598: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x17d598u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d59c: 0x0  nop
    ctx->pc = 0x17d59cu;
    // NOP
label_17d5a0:
    // 0x17d5a0: 0x26a500f0  addiu       $a1, $s5, 0xF0
    ctx->pc = 0x17d5a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 240));
    // 0x17d5a4: 0x2c2b021  addu        $s6, $s6, $v0
    ctx->pc = 0x17d5a4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x17d5a8: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x17d5a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d5ac: 0xc05f5c8  jal         func_17D720
    ctx->pc = 0x17D5ACu;
    SET_GPR_U32(ctx, 31, 0x17D5B4u);
    ctx->pc = 0x17D5B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D5ACu;
    // 0x17d5b0: 0xaea50008  sw          $a1, 0x8($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D720u, 0x17D5ACu, 0x17D5B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D5B4u;
label_17d5b4:
    // 0x17d5b4: 0xaea00140  sw          $zero, 0x140($s5)
    ctx->pc = 0x17d5b4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 320), GPR_U32(ctx, 0));
    // 0x17d5b8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x17d5b8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d5bc: 0xaea00144  sw          $zero, 0x144($s5)
    ctx->pc = 0x17d5bcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 324), GPR_U32(ctx, 0));
    // 0x17d5c0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x17d5c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d5c4: 0xaea00148  sw          $zero, 0x148($s5)
    ctx->pc = 0x17d5c4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 328), GPR_U32(ctx, 0));
    // 0x17d5c8: 0xaea0014c  sw          $zero, 0x14C($s5)
    ctx->pc = 0x17d5c8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 332), GPR_U32(ctx, 0));
    // 0x17d5cc: 0xaea00150  sw          $zero, 0x150($s5)
    ctx->pc = 0x17d5ccu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 336), GPR_U32(ctx, 0));
    // 0x17d5d0: 0xaea00154  sw          $zero, 0x154($s5)
    ctx->pc = 0x17d5d0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 340), GPR_U32(ctx, 0));
    // 0x17d5d4: 0xaea00158  sw          $zero, 0x158($s5)
    ctx->pc = 0x17d5d4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 344), GPR_U32(ctx, 0));
    // 0x17d5d8: 0xaea0015c  sw          $zero, 0x15C($s5)
    ctx->pc = 0x17d5d8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 348), GPR_U32(ctx, 0));
    // 0x17d5dc: 0xaea00160  sw          $zero, 0x160($s5)
    ctx->pc = 0x17d5dcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 352), GPR_U32(ctx, 0));
    // 0x17d5e0: 0xaea00164  sw          $zero, 0x164($s5)
    ctx->pc = 0x17d5e0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 356), GPR_U32(ctx, 0));
    // 0x17d5e4: 0xaea00168  sw          $zero, 0x168($s5)
    ctx->pc = 0x17d5e4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 360), GPR_U32(ctx, 0));
    // 0x17d5e8: 0xaea0016c  sw          $zero, 0x16C($s5)
    ctx->pc = 0x17d5e8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 364), GPR_U32(ctx, 0));
    // 0x17d5ec: 0x0  nop
    ctx->pc = 0x17d5ecu;
    // NOP
label_17d5f0:
    // 0x17d5f0: 0x8ea20018  lw          $v0, 0x18($s5)
    ctx->pc = 0x17d5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
    // 0x17d5f4: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x17d5f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d5f8: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x17d5f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d5fc: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x17d5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x17d600: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x17d600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17d604: 0xae360000  sw          $s6, 0x0($s1)
    ctx->pc = 0x17d604u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 22));
    // 0x17d608: 0x90460002  lbu         $a2, 0x2($v0)
    ctx->pc = 0x17d608u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x17d60c: 0x90470003  lbu         $a3, 0x3($v0)
    ctx->pc = 0x17d60cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x17d610: 0xc05f5dc  jal         func_17D770
    ctx->pc = 0x17D610u;
    SET_GPR_U32(ctx, 31, 0x17D618u);
    ctx->pc = 0x17D614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D610u;
    // 0x17d614: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D770u, 0x17D610u, 0x17D618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D618u;
label_17d618:
    // 0x17d618: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x17d618u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x17d61c: 0x26d60040  addiu       $s6, $s6, 0x40
    ctx->pc = 0x17d61cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 64));
    // 0x17d620: 0x272102b  sltu        $v0, $s3, $s2
    ctx->pc = 0x17d620u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x17d624: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x17D624u;
    {
        const bool branch_taken_0x17d624 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17D628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D624u;
        // 0x17d628: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d624) {
            ctx->pc = 0x17D5F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17d5f0;
        }
    }
    ctx->pc = 0x17D62Cu;
    // 0x17d62c: 0x26940050  addiu       $s4, $s4, 0x50
    ctx->pc = 0x17d62cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 80));
    // 0x17d630: 0x29e102b  sltu        $v0, $s4, $fp
    ctx->pc = 0x17d630u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 30)) ? 1 : 0);
    // 0x17d634: 0x1440ffc8  bnez        $v0, . + 4 + (-0x38 << 2)
    ctx->pc = 0x17D634u;
    {
        const bool branch_taken_0x17d634 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17D638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D634u;
        // 0x17d638: 0x26b501f0  addiu       $s5, $s5, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 496));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d634) {
            ctx->pc = 0x17D558u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17d558;
        }
    }
    ctx->pc = 0x17D63Cu;
    // 0x17d63c: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x17d63cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d640: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x17d640u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x17d644: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x17d644u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x17d648: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x17d648u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x17d64c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x17d64cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x17d650: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x17d650u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17d654: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x17d654u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17d658: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x17d658u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17d65c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x17d65cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17d660: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17d660u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17d664: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17d664u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17d668: 0x3e00008  jr          $ra
    ctx->pc = 0x17D668u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D668u;
        // 0x17d66c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17D668u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17D670u;
}
