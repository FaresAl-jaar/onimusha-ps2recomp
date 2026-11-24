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

// Function: sub_0014D770
// Address: 0x14d770 - 0x14dbe4
void sub_0014D770_0x14d770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014D770_0x14d770");
#endif

    switch (ctx->pc) {
        case 0x14d80cu: goto label_14d80c;
        case 0x14d83cu: goto label_14d83c;
        case 0x14d994u: goto label_14d994;
        case 0x14d9e8u: goto label_14d9e8;
        case 0x14da34u: goto label_14da34;
        case 0x14da9cu: goto label_14da9c;
        case 0x14dae0u: goto label_14dae0;
        default: break;
    }

    ctx->pc = 0x14d770u;

    // 0x14d770: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x14d770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x14d774: 0x240200c7  addiu       $v0, $zero, 0xC7
    ctx->pc = 0x14d774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 199));
    // 0x14d778: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x14d778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x14d77c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x14d77cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x14d780: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x14d780u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x14d784: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x14d784u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d788: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x14d788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x14d78c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x14d78cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d790: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x14d790u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x14d794: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x14d794u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d798: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14d798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x14d79c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14d79cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14d7a0: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x14d7a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x14d7a4: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x14D7A4u;
    {
        const bool branch_taken_0x14d7a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x14D7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D7A4u;
        // 0x14d7a8: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d7a4) {
            ctx->pc = 0x14D7D8u;
            goto label_14d7d8;
        }
    }
    ctx->pc = 0x14D7ACu;
    // 0x14d7ac: 0x240200c8  addiu       $v0, $zero, 0xC8
    ctx->pc = 0x14d7acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x14d7b0: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14D7B0u;
    {
        const bool branch_taken_0x14d7b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14d7b0) {
            ctx->pc = 0x14D7C0u;
            goto label_14d7c0;
        }
    }
    ctx->pc = 0x14D7B8u;
    // 0x14d7b8: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x14D7B8u;
    {
        const bool branch_taken_0x14d7b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d7b8) {
            ctx->pc = 0x14D840u;
            goto label_14d840;
        }
    }
    ctx->pc = 0x14D7C0u;
label_14d7c0:
    // 0x14d7c0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x14d7c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x14d7c4: 0x9023fc8e  lbu         $v1, -0x372($at)
    ctx->pc = 0x14d7c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x81FC8Eu));
    // 0x14d7c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14d7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14d7cc: 0x1062001c  beq         $v1, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x14D7CCu;
    {
        const bool branch_taken_0x14d7cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14d7cc) {
            ctx->pc = 0x14D840u;
            goto label_14d840;
        }
    }
    ctx->pc = 0x14D7D4u;
    // 0x14d7d4: 0x0  nop
    ctx->pc = 0x14d7d4u;
    // NOP
label_14d7d8:
    // 0x14d7d8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x14d7d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x14d7dc: 0x9023fc8e  lbu         $v1, -0x372($at)
    ctx->pc = 0x14d7dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x81FC8Eu));
    // 0x14d7e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14d7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14d7e4: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x14D7E4u;
    {
        const bool branch_taken_0x14d7e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14d7e4) {
            ctx->pc = 0x14D818u;
            goto label_14d818;
        }
    }
    ctx->pc = 0x14D7ECu;
    // 0x14d7ec: 0x92650001  lbu         $a1, 0x1($s3)
    ctx->pc = 0x14d7ecu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
    // 0x14d7f0: 0x92660002  lbu         $a2, 0x2($s3)
    ctx->pc = 0x14d7f0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x14d7f4: 0x92670003  lbu         $a3, 0x3($s3)
    ctx->pc = 0x14d7f4u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 3)));
    // 0x14d7f8: 0x9268000c  lbu         $t0, 0xC($s3)
    ctx->pc = 0x14d7f8u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x14d7fc: 0x9269000d  lbu         $t1, 0xD($s3)
    ctx->pc = 0x14d7fcu;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 13)));
    // 0x14d800: 0x926a000e  lbu         $t2, 0xE($s3)
    ctx->pc = 0x14d800u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 14)));
    // 0x14d804: 0xc0a2a5c  jal         func_28A970
    ctx->pc = 0x14D804u;
    SET_GPR_U32(ctx, 31, 0x14D80Cu);
    ctx->pc = 0x14D808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D804u;
    // 0x14d808: 0x240400c8  addiu       $a0, $zero, 0xC8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28A970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28A970u, 0x14D804u, 0x14D80Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D80Cu;
label_14d80c:
    // 0x14d80c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x14D80Cu;
    {
        const bool branch_taken_0x14d80c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14d80c) {
            ctx->pc = 0x14D840u;
            goto label_14d840;
        }
    }
    ctx->pc = 0x14D814u;
    // 0x14d814: 0x0  nop
    ctx->pc = 0x14d814u;
    // NOP
label_14d818:
    // 0x14d818: 0x92650000  lbu         $a1, 0x0($s3)
    ctx->pc = 0x14d818u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x14d81c: 0x92660001  lbu         $a2, 0x1($s3)
    ctx->pc = 0x14d81cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
    // 0x14d820: 0x92670002  lbu         $a3, 0x2($s3)
    ctx->pc = 0x14d820u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x14d824: 0x92680003  lbu         $t0, 0x3($s3)
    ctx->pc = 0x14d824u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 3)));
    // 0x14d828: 0x9269000c  lbu         $t1, 0xC($s3)
    ctx->pc = 0x14d828u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x14d82c: 0x926a000d  lbu         $t2, 0xD($s3)
    ctx->pc = 0x14d82cu;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 13)));
    // 0x14d830: 0x926b000e  lbu         $t3, 0xE($s3)
    ctx->pc = 0x14d830u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 14)));
    // 0x14d834: 0xc0a29d4  jal         func_28A750
    ctx->pc = 0x14D834u;
    SET_GPR_U32(ctx, 31, 0x14D83Cu);
    ctx->pc = 0x14D838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D834u;
    // 0x14d838: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28A750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28A750u, 0x14D834u, 0x14D83Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D83Cu;
label_14d83c:
    // 0x14d83c: 0x0  nop
    ctx->pc = 0x14d83cu;
    // NOP
label_14d840:
    // 0x14d840: 0x325000ff  andi        $s0, $s2, 0xFF
    ctx->pc = 0x14d840u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x14d844: 0x2e010009  sltiu       $at, $s0, 0x9
    ctx->pc = 0x14d844u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x14d848: 0x1020009d  beqz        $at, . + 4 + (0x9D << 2)
    ctx->pc = 0x14D848u;
    {
        const bool branch_taken_0x14d848 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D848u;
        // 0x14d84c: 0x3c030066  lui         $v1, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d848) {
            ctx->pc = 0x14DAC0u;
            goto label_14dac0;
        }
    }
    ctx->pc = 0x14D850u;
    // 0x14d850: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x14d850u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x14d854: 0x24634a20  addiu       $v1, $v1, 0x4A20
    ctx->pc = 0x14d854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18976));
    // 0x14d858: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14d858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14d85c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x14d85cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14d860: 0x400008  jr          $v0
    ctx->pc = 0x14D860u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14D868u: goto label_14d868;
            case 0x14D8A8u: goto label_14d8a8;
            case 0x14D8C8u: goto label_14d8c8;
            case 0x14D8E8u: goto label_14d8e8;
            case 0x14D9F0u: goto label_14d9f0;
            case 0x14DA58u: goto label_14da58;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14D860u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x14D868u;
label_14d868:
    // 0x14d868: 0x8eb10000  lw          $s1, 0x0($s5)
    ctx->pc = 0x14d868u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x14d86c: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x14d86cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x14d870: 0x2442a040  addiu       $v0, $v0, -0x5FC0
    ctx->pc = 0x14d870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942784));
    // 0x14d874: 0x2341821  addu        $v1, $s1, $s4
    ctx->pc = 0x14d874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
    // 0x14d878: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x14d878u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x14d87c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14D87Cu;
    {
        const bool branch_taken_0x14d87c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14D880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D87Cu;
        // 0x14d880: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d87c) {
            ctx->pc = 0x14D890u;
            goto label_14d890;
        }
    }
    ctx->pc = 0x14D884u;
    // 0x14d884: 0x100000ce  b           . + 4 + (0xCE << 2)
    ctx->pc = 0x14D884u;
    {
        const bool branch_taken_0x14d884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d884) {
            ctx->pc = 0x14DBC0u;
            goto label_14dbc0;
        }
    }
    ctx->pc = 0x14D88Cu;
    // 0x14d88c: 0x0  nop
    ctx->pc = 0x14d88cu;
    // NOP
label_14d890:
    // 0x14d890: 0x2463000f  addiu       $v1, $v1, 0xF
    ctx->pc = 0x14d890u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x14d894: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x14d894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x14d898: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x14d898u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x14d89c: 0x10000088  b           . + 4 + (0x88 << 2)
    ctx->pc = 0x14D89Cu;
    {
        const bool branch_taken_0x14d89c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D89Cu;
        // 0x14d8a0: 0xaea20000  sw          $v0, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d89c) {
            ctx->pc = 0x14DAC0u;
            goto label_14dac0;
        }
    }
    ctx->pc = 0x14D8A4u;
    // 0x14d8a4: 0x0  nop
    ctx->pc = 0x14d8a4u;
    // NOP
label_14d8a8:
    // 0x14d8a8: 0x8eb1001c  lw          $s1, 0x1C($s5)
    ctx->pc = 0x14d8a8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
    // 0x14d8ac: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x14d8acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x14d8b0: 0x2341821  addu        $v1, $s1, $s4
    ctx->pc = 0x14d8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
    // 0x14d8b4: 0x2463000f  addiu       $v1, $v1, 0xF
    ctx->pc = 0x14d8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x14d8b8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x14d8b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x14d8bc: 0x10000080  b           . + 4 + (0x80 << 2)
    ctx->pc = 0x14D8BCu;
    {
        const bool branch_taken_0x14d8bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D8BCu;
        // 0x14d8c0: 0xaea2001c  sw          $v0, 0x1C($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d8bc) {
            ctx->pc = 0x14DAC0u;
            goto label_14dac0;
        }
    }
    ctx->pc = 0x14D8C4u;
    // 0x14d8c4: 0x0  nop
    ctx->pc = 0x14d8c4u;
    // NOP
label_14d8c8:
    // 0x14d8c8: 0x8eb10028  lw          $s1, 0x28($s5)
    ctx->pc = 0x14d8c8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 40)));
    // 0x14d8cc: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x14d8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x14d8d0: 0x2341821  addu        $v1, $s1, $s4
    ctx->pc = 0x14d8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
    // 0x14d8d4: 0x2463000f  addiu       $v1, $v1, 0xF
    ctx->pc = 0x14d8d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x14d8d8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x14d8d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x14d8dc: 0x10000078  b           . + 4 + (0x78 << 2)
    ctx->pc = 0x14D8DCu;
    {
        const bool branch_taken_0x14d8dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D8DCu;
        // 0x14d8e0: 0xaea20028  sw          $v0, 0x28($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d8dc) {
            ctx->pc = 0x14DAC0u;
            goto label_14dac0;
        }
    }
    ctx->pc = 0x14D8E4u;
    // 0x14d8e4: 0x0  nop
    ctx->pc = 0x14d8e4u;
    // NOP
label_14d8e8:
    // 0x14d8e8: 0x92640000  lbu         $a0, 0x0($s3)
    ctx->pc = 0x14d8e8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x14d8ec: 0x240200c2  addiu       $v0, $zero, 0xC2
    ctx->pc = 0x14d8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 194));
    // 0x14d8f0: 0x14820007  bne         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x14D8F0u;
    {
        const bool branch_taken_0x14d8f0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x14d8f0) {
            ctx->pc = 0x14D910u;
            goto label_14d910;
        }
    }
    ctx->pc = 0x14D8F8u;
    // 0x14d8f8: 0x9263000c  lbu         $v1, 0xC($s3)
    ctx->pc = 0x14d8f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x14d8fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14d8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14d900: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14D900u;
    {
        const bool branch_taken_0x14d900 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x14D904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D900u;
        // 0x14d904: 0x3c028000  lui         $v0, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d900) {
            ctx->pc = 0x14D910u;
            goto label_14d910;
        }
    }
    ctx->pc = 0x14D908u;
    // 0x14d908: 0x100000ad  b           . + 4 + (0xAD << 2)
    ctx->pc = 0x14D908u;
    {
        const bool branch_taken_0x14d908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d908) {
            ctx->pc = 0x14DBC0u;
            goto label_14dbc0;
        }
    }
    ctx->pc = 0x14D910u;
label_14d910:
    // 0x14d910: 0x240200c3  addiu       $v0, $zero, 0xC3
    ctx->pc = 0x14d910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 195));
    // 0x14d914: 0x14820008  bne         $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x14D914u;
    {
        const bool branch_taken_0x14d914 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x14d914) {
            ctx->pc = 0x14D938u;
            goto label_14d938;
        }
    }
    ctx->pc = 0x14D91Cu;
    // 0x14d91c: 0x9263000c  lbu         $v1, 0xC($s3)
    ctx->pc = 0x14d91cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x14d920: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14d920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14d924: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14D924u;
    {
        const bool branch_taken_0x14d924 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x14D928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D924u;
        // 0x14d928: 0x3c028000  lui         $v0, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d924) {
            ctx->pc = 0x14D938u;
            goto label_14d938;
        }
    }
    ctx->pc = 0x14D92Cu;
    // 0x14d92c: 0x100000a4  b           . + 4 + (0xA4 << 2)
    ctx->pc = 0x14D92Cu;
    {
        const bool branch_taken_0x14d92c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d92c) {
            ctx->pc = 0x14DBC0u;
            goto label_14dbc0;
        }
    }
    ctx->pc = 0x14D934u;
    // 0x14d934: 0x0  nop
    ctx->pc = 0x14d934u;
    // NOP
label_14d938:
    // 0x14d938: 0x240200c4  addiu       $v0, $zero, 0xC4
    ctx->pc = 0x14d938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 196));
    // 0x14d93c: 0x14820008  bne         $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x14D93Cu;
    {
        const bool branch_taken_0x14d93c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x14d93c) {
            ctx->pc = 0x14D960u;
            goto label_14d960;
        }
    }
    ctx->pc = 0x14D944u;
    // 0x14d944: 0x9263000c  lbu         $v1, 0xC($s3)
    ctx->pc = 0x14d944u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x14d948: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14d948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14d94c: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14D94Cu;
    {
        const bool branch_taken_0x14d94c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x14D950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D94Cu;
        // 0x14d950: 0x3c028000  lui         $v0, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d94c) {
            ctx->pc = 0x14D960u;
            goto label_14d960;
        }
    }
    ctx->pc = 0x14D954u;
    // 0x14d954: 0x1000009a  b           . + 4 + (0x9A << 2)
    ctx->pc = 0x14D954u;
    {
        const bool branch_taken_0x14d954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d954) {
            ctx->pc = 0x14DBC0u;
            goto label_14dbc0;
        }
    }
    ctx->pc = 0x14D95Cu;
    // 0x14d95c: 0x0  nop
    ctx->pc = 0x14d95cu;
    // NOP
label_14d960:
    // 0x14d960: 0x240200c6  addiu       $v0, $zero, 0xC6
    ctx->pc = 0x14d960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 198));
    // 0x14d964: 0x14820008  bne         $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x14D964u;
    {
        const bool branch_taken_0x14d964 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x14d964) {
            ctx->pc = 0x14D988u;
            goto label_14d988;
        }
    }
    ctx->pc = 0x14D96Cu;
    // 0x14d96c: 0x9263000c  lbu         $v1, 0xC($s3)
    ctx->pc = 0x14d96cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x14d970: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14d970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14d974: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14D974u;
    {
        const bool branch_taken_0x14d974 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x14D978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D974u;
        // 0x14d978: 0x3c028000  lui         $v0, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d974) {
            ctx->pc = 0x14D988u;
            goto label_14d988;
        }
    }
    ctx->pc = 0x14D97Cu;
    // 0x14d97c: 0x10000090  b           . + 4 + (0x90 << 2)
    ctx->pc = 0x14D97Cu;
    {
        const bool branch_taken_0x14d97c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d97c) {
            ctx->pc = 0x14DBC0u;
            goto label_14dbc0;
        }
    }
    ctx->pc = 0x14D984u;
    // 0x14d984: 0x0  nop
    ctx->pc = 0x14d984u;
    // NOP
label_14d988:
    // 0x14d988: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x14d988u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d98c: 0xc05374c  jal         func_14DD30
    ctx->pc = 0x14D98Cu;
    SET_GPR_U32(ctx, 31, 0x14D994u);
    ctx->pc = 0x14D990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D98Cu;
    // 0x14d990: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DD30u, 0x14D98Cu, 0x14D994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D994u;
label_14d994:
    // 0x14d994: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14D994u;
    {
        const bool branch_taken_0x14d994 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d994) {
            ctx->pc = 0x14D9A8u;
            goto label_14d9a8;
        }
    }
    ctx->pc = 0x14D99Cu;
    // 0x14d99c: 0x10000088  b           . + 4 + (0x88 << 2)
    ctx->pc = 0x14D99Cu;
    {
        const bool branch_taken_0x14d99c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D99Cu;
        // 0x14d9a0: 0x3c028000  lui         $v0, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d99c) {
            ctx->pc = 0x14DBC0u;
            goto label_14dbc0;
        }
    }
    ctx->pc = 0x14D9A4u;
    // 0x14d9a4: 0x0  nop
    ctx->pc = 0x14d9a4u;
    // NOP
label_14d9a8:
    // 0x14d9a8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x14d9a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x14d9ac: 0x8c31fc98  lw          $s1, -0x368($at)
    ctx->pc = 0x14d9acu;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x81FC98u));
    // 0x14d9b0: 0x3c0201b2  lui         $v0, 0x1B2
    ctx->pc = 0x14d9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)434 << 16));
    // 0x14d9b4: 0x2341821  addu        $v1, $s1, $s4
    ctx->pc = 0x14d9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
    // 0x14d9b8: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x14d9b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x14d9bc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14D9BCu;
    {
        const bool branch_taken_0x14d9bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14D9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D9BCu;
        // 0x14d9c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d9bc) {
            ctx->pc = 0x14D9D0u;
            goto label_14d9d0;
        }
    }
    ctx->pc = 0x14D9C4u;
    // 0x14d9c4: 0x1000007e  b           . + 4 + (0x7E << 2)
    ctx->pc = 0x14D9C4u;
    {
        const bool branch_taken_0x14d9c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d9c4) {
            ctx->pc = 0x14DBC0u;
            goto label_14dbc0;
        }
    }
    ctx->pc = 0x14D9CCu;
    // 0x14d9cc: 0x0  nop
    ctx->pc = 0x14d9ccu;
    // NOP
label_14d9d0:
    // 0x14d9d0: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x14d9d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x14d9d4: 0x2463000f  addiu       $v1, $v1, 0xF
    ctx->pc = 0x14d9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x14d9d8: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x14d9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x14d9dc: 0x2484cea0  addiu       $a0, $a0, -0x3160
    ctx->pc = 0x14d9dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954656));
    // 0x14d9e0: 0xc05e390  jal         func_178E40
    ctx->pc = 0x14D9E0u;
    SET_GPR_U32(ctx, 31, 0x14D9E8u);
    ctx->pc = 0x14D9E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D9E0u;
    // 0x14d9e4: 0x622824  and         $a1, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178E40u, 0x14D9E0u, 0x14D9E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D9E8u;
label_14d9e8:
    // 0x14d9e8: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x14D9E8u;
    {
        const bool branch_taken_0x14d9e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d9e8) {
            ctx->pc = 0x14DAC0u;
            goto label_14dac0;
        }
    }
    ctx->pc = 0x14D9F0u;
label_14d9f0:
    // 0x14d9f0: 0x8eb1000c  lw          $s1, 0xC($s5)
    ctx->pc = 0x14d9f0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x14d9f4: 0x3c02007e  lui         $v0, 0x7E
    ctx->pc = 0x14d9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)126 << 16));
    // 0x14d9f8: 0x2442a070  addiu       $v0, $v0, -0x5F90
    ctx->pc = 0x14d9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942832));
    // 0x14d9fc: 0x2341821  addu        $v1, $s1, $s4
    ctx->pc = 0x14d9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
    // 0x14da00: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x14da00u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x14da04: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14DA04u;
    {
        const bool branch_taken_0x14da04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14DA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DA04u;
        // 0x14da08: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14da04) {
            ctx->pc = 0x14DA18u;
            goto label_14da18;
        }
    }
    ctx->pc = 0x14DA0Cu;
    // 0x14da0c: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x14DA0Cu;
    {
        const bool branch_taken_0x14da0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14da0c) {
            ctx->pc = 0x14DBC0u;
            goto label_14dbc0;
        }
    }
    ctx->pc = 0x14DA14u;
    // 0x14da14: 0x0  nop
    ctx->pc = 0x14da14u;
    // NOP
label_14da18:
    // 0x14da18: 0x2463000f  addiu       $v1, $v1, 0xF
    ctx->pc = 0x14da18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x14da1c: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x14da1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x14da20: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x14da20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14da24: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x14da24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x14da28: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x14da28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14da2c: 0xc05374c  jal         func_14DD30
    ctx->pc = 0x14DA2Cu;
    SET_GPR_U32(ctx, 31, 0x14DA34u);
    ctx->pc = 0x14DA30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14DA2Cu;
    // 0x14da30: 0xaea2000c  sw          $v0, 0xC($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DD30u, 0x14DA2Cu, 0x14DA34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14DA34u;
label_14da34:
    // 0x14da34: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x14DA34u;
    {
        const bool branch_taken_0x14da34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14DA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DA34u;
        // 0x14da38: 0x11183c  dsll32      $v1, $s1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14da34) {
            ctx->pc = 0x14DAC0u;
            goto label_14dac0;
        }
    }
    ctx->pc = 0x14DA3Cu;
    // 0x14da3c: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x14da3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x14da40: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x14da40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x14da44: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x14da44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x14da48: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x14da48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x14da4c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x14da4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x14da50: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x14DA50u;
    {
        const bool branch_taken_0x14da50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14DA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DA50u;
        // 0x14da54: 0x2103f  dsra32      $v0, $v0, 0 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14da50) {
            ctx->pc = 0x14DBC0u;
            goto label_14dbc0;
        }
    }
    ctx->pc = 0x14DA58u;
label_14da58:
    // 0x14da58: 0x8eb10010  lw          $s1, 0x10($s5)
    ctx->pc = 0x14da58u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x14da5c: 0x3c02007e  lui         $v0, 0x7E
    ctx->pc = 0x14da5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)126 << 16));
    // 0x14da60: 0x2442a070  addiu       $v0, $v0, -0x5F90
    ctx->pc = 0x14da60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942832));
    // 0x14da64: 0x2341821  addu        $v1, $s1, $s4
    ctx->pc = 0x14da64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
    // 0x14da68: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x14da68u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x14da6c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14DA6Cu;
    {
        const bool branch_taken_0x14da6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14DA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DA6Cu;
        // 0x14da70: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14da6c) {
            ctx->pc = 0x14DA80u;
            goto label_14da80;
        }
    }
    ctx->pc = 0x14DA74u;
    // 0x14da74: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x14DA74u;
    {
        const bool branch_taken_0x14da74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14da74) {
            ctx->pc = 0x14DBC0u;
            goto label_14dbc0;
        }
    }
    ctx->pc = 0x14DA7Cu;
    // 0x14da7c: 0x0  nop
    ctx->pc = 0x14da7cu;
    // NOP
label_14da80:
    // 0x14da80: 0x2463000f  addiu       $v1, $v1, 0xF
    ctx->pc = 0x14da80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x14da84: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x14da84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x14da88: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x14da88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14da8c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x14da8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x14da90: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x14da90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14da94: 0xc05374c  jal         func_14DD30
    ctx->pc = 0x14DA94u;
    SET_GPR_U32(ctx, 31, 0x14DA9Cu);
    ctx->pc = 0x14DA98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14DA94u;
    // 0x14da98: 0xaea20010  sw          $v0, 0x10($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DD30u, 0x14DA94u, 0x14DA9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14DA9Cu;
label_14da9c:
    // 0x14da9c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x14DA9Cu;
    {
        const bool branch_taken_0x14da9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14DAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DA9Cu;
        // 0x14daa0: 0x11183c  dsll32      $v1, $s1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14da9c) {
            ctx->pc = 0x14DAC0u;
            goto label_14dac0;
        }
    }
    ctx->pc = 0x14DAA4u;
    // 0x14daa4: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x14daa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x14daa8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x14daa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x14daac: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x14daacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x14dab0: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x14dab0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x14dab4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x14dab4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x14dab8: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x14DAB8u;
    {
        const bool branch_taken_0x14dab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14DABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DAB8u;
        // 0x14dabc: 0x2103f  dsra32      $v0, $v0, 0 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14dab8) {
            ctx->pc = 0x14DBC0u;
            goto label_14dbc0;
        }
    }
    ctx->pc = 0x14DAC0u;
label_14dac0:
    // 0x14dac0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x14dac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x14dac4: 0x1602003c  bne         $s0, $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x14DAC4u;
    {
        const bool branch_taken_0x14dac4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x14DAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DAC4u;
        // 0x14dac8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14dac4) {
            ctx->pc = 0x14DBB8u;
            goto label_14dbb8;
        }
    }
    ctx->pc = 0x14DACCu;
    // 0x14dacc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x14daccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14dad0: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x14dad0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14dad4: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x14dad4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14dad8: 0xc053778  jal         func_14DDE0
    ctx->pc = 0x14DAD8u;
    SET_GPR_U32(ctx, 31, 0x14DAE0u);
    ctx->pc = 0x14DADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14DAD8u;
    // 0x14dadc: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DDE0u, 0x14DAD8u, 0x14DAE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14DAE0u;
label_14dae0:
    // 0x14dae0: 0x96a34060  lhu         $v1, 0x4060($s5)
    ctx->pc = 0x14dae0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 16480)));
    // 0x14dae4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x14dae4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14dae8: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x14dae8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x14daec: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x14daecu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14daf0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x14daf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x14daf4: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x14daf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x14daf8: 0xa044085c  sb          $a0, 0x85C($v0)
    ctx->pc = 0x14daf8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2140), (uint8_t)GPR_U32(ctx, 4));
    // 0x14dafc: 0x96a34060  lhu         $v1, 0x4060($s5)
    ctx->pc = 0x14dafcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 16480)));
    // 0x14db00: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x14db00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x14db04: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x14db04u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14db08: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x14db08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x14db0c: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x14db0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x14db10: 0xa052085d  sb          $s2, 0x85D($v0)
    ctx->pc = 0x14db10u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2141), (uint8_t)GPR_U32(ctx, 18));
    // 0x14db14: 0x96a34060  lhu         $v1, 0x4060($s5)
    ctx->pc = 0x14db14u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 16480)));
    // 0x14db18: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x14db18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x14db1c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x14db1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14db20: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x14db20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x14db24: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x14db24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x14db28: 0xa044085e  sb          $a0, 0x85E($v0)
    ctx->pc = 0x14db28u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2142), (uint8_t)GPR_U32(ctx, 4));
    // 0x14db2c: 0x96a34060  lhu         $v1, 0x4060($s5)
    ctx->pc = 0x14db2cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 16480)));
    // 0x14db30: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x14db30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x14db34: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x14db34u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14db38: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x14db38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x14db3c: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x14db3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x14db40: 0xac510860  sw          $s1, 0x860($v0)
    ctx->pc = 0x14db40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2144), GPR_U32(ctx, 17));
    // 0x14db44: 0x96a34060  lhu         $v1, 0x4060($s5)
    ctx->pc = 0x14db44u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 16480)));
    // 0x14db48: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x14db48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x14db4c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x14db4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14db50: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x14db50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x14db54: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x14db54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x14db58: 0xac540864  sw          $s4, 0x864($v0)
    ctx->pc = 0x14db58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2148), GPR_U32(ctx, 20));
    // 0x14db5c: 0x96a44060  lhu         $a0, 0x4060($s5)
    ctx->pc = 0x14db5cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 16480)));
    // 0x14db60: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x14db60u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x14db64: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x14db64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x14db68: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x14db68u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x14db6c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x14db6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x14db70: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x14db70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x14db74: 0xa0620868  sb          $v0, 0x868($v1)
    ctx->pc = 0x14db74u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2152), (uint8_t)GPR_U32(ctx, 2));
    // 0x14db78: 0x92620001  lbu         $v0, 0x1($s3)
    ctx->pc = 0x14db78u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
    // 0x14db7c: 0xa0620869  sb          $v0, 0x869($v1)
    ctx->pc = 0x14db7cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2153), (uint8_t)GPR_U32(ctx, 2));
    // 0x14db80: 0x92620002  lbu         $v0, 0x2($s3)
    ctx->pc = 0x14db80u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x14db84: 0xa062086a  sb          $v0, 0x86A($v1)
    ctx->pc = 0x14db84u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2154), (uint8_t)GPR_U32(ctx, 2));
    // 0x14db88: 0x92620003  lbu         $v0, 0x3($s3)
    ctx->pc = 0x14db88u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 3)));
    // 0x14db8c: 0xa062086b  sb          $v0, 0x86B($v1)
    ctx->pc = 0x14db8cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2155), (uint8_t)GPR_U32(ctx, 2));
    // 0x14db90: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x14db90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x14db94: 0xac62086c  sw          $v0, 0x86C($v1)
    ctx->pc = 0x14db94u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2156), GPR_U32(ctx, 2));
    // 0x14db98: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x14db98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x14db9c: 0xac620870  sw          $v0, 0x870($v1)
    ctx->pc = 0x14db9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2160), GPR_U32(ctx, 2));
    // 0x14dba0: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x14dba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x14dba4: 0xac620874  sw          $v0, 0x874($v1)
    ctx->pc = 0x14dba4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2164), GPR_U32(ctx, 2));
    // 0x14dba8: 0x96a24060  lhu         $v0, 0x4060($s5)
    ctx->pc = 0x14dba8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 16480)));
    // 0x14dbac: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x14dbacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x14dbb0: 0xa6a24060  sh          $v0, 0x4060($s5)
    ctx->pc = 0x14dbb0u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 16480), (uint16_t)GPR_U32(ctx, 2));
    // 0x14dbb4: 0x0  nop
    ctx->pc = 0x14dbb4u;
    // NOP
label_14dbb8:
    // 0x14dbb8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x14dbb8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14dbbc: 0x0  nop
    ctx->pc = 0x14dbbcu;
    // NOP
label_14dbc0:
    // 0x14dbc0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x14dbc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x14dbc4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x14dbc4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x14dbc8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x14dbc8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14dbcc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x14dbccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14dbd0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x14dbd0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14dbd4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14dbd4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14dbd8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14dbd8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14dbdc: 0x3e00008  jr          $ra
    ctx->pc = 0x14DBDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14DBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DBDCu;
        // 0x14dbe0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14DBDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14DBE4u;
}
