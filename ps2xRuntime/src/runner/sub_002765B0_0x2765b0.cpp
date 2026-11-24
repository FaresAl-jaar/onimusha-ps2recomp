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

// Function: sub_002765B0
// Address: 0x2765b0 - 0x2766cc
void sub_002765B0_0x2765b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002765B0_0x2765b0");
#endif

    switch (ctx->pc) {
        case 0x276618u: goto label_276618;
        case 0x276620u: goto label_276620;
        case 0x276638u: goto label_276638;
        case 0x276658u: goto label_276658;
        case 0x276694u: goto label_276694;
        default: break;
    }

    ctx->pc = 0x2765b0u;

    // 0x2765b0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2765b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2765b4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2765b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2765b8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2765b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2765bc: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2765bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2765c0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2765c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2765c4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2765c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2765c8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2765c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2765cc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2765ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2765d0: 0x80842903  lb          $a0, 0x2903($a0)
    ctx->pc = 0x2765d0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 10499)));
    // 0x2765d4: 0x14830036  bne         $a0, $v1, . + 4 + (0x36 << 2)
    ctx->pc = 0x2765D4u;
    {
        const bool branch_taken_0x2765d4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2765d4) {
            ctx->pc = 0x2766B0u;
            goto label_2766b0;
        }
    }
    ctx->pc = 0x2765DCu;
    // 0x2765dc: 0x8f83890c  lw          $v1, -0x76F4($gp)
    ctx->pc = 0x2765dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936844)));
    // 0x2765e0: 0x28610008  slti        $at, $v1, 0x8
    ctx->pc = 0x2765e0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2765e4: 0x10200032  beqz        $at, . + 4 + (0x32 << 2)
    ctx->pc = 0x2765E4u;
    {
        const bool branch_taken_0x2765e4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2765e4) {
            ctx->pc = 0x2766B0u;
            goto label_2766b0;
        }
    }
    ctx->pc = 0x2765ECu;
    // 0x2765ec: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x2765ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2765f0: 0x8f838908  lw          $v1, -0x76F8($gp)
    ctx->pc = 0x2765f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936840)));
    // 0x2765f4: 0xaf82890c  sw          $v0, -0x76F4($gp)
    ctx->pc = 0x2765f4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936844), GPR_U32(ctx, 2));
    // 0x2765f8: 0x31103  sra         $v0, $v1, 4
    ctx->pc = 0x2765f8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
    // 0x2765fc: 0x3071000f  andi        $s1, $v1, 0xF
    ctx->pc = 0x2765fcu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x276600: 0xaf828908  sw          $v0, -0x76F8($gp)
    ctx->pc = 0x276600u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936840), GPR_U32(ctx, 2));
    // 0x276604: 0xa2512903  sb          $s1, 0x2903($s2)
    ctx->pc = 0x276604u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 10499), (uint8_t)GPR_U32(ctx, 17));
    // 0x276608: 0x8e44290c  lw          $a0, 0x290C($s2)
    ctx->pc = 0x276608u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10508)));
    // 0x27660c: 0x92532901  lbu         $s3, 0x2901($s2)
    ctx->pc = 0x27660cu;
    SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 10497)));
    // 0x276610: 0xc096c4c  jal         func_25B130
    ctx->pc = 0x276610u;
    SET_GPR_U32(ctx, 31, 0x276618u);
    ctx->pc = 0x276614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276610u;
    // 0x276614: 0x26502910  addiu       $s0, $s2, 0x2910 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 10512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B130u, 0x276610u, 0x276618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276618u;
label_276618:
    // 0x276618: 0xc096fb8  jal         func_25BEE0
    ctx->pc = 0x276618u;
    SET_GPR_U32(ctx, 31, 0x276620u);
    ctx->pc = 0x27661Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276618u;
    // 0x27661c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25BEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BEE0u, 0x276618u, 0x276620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276620u;
label_276620:
    // 0x276620: 0x326700ff  andi        $a3, $s3, 0xFF
    ctx->pc = 0x276620u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
    // 0x276624: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x276624u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276628: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x276628u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27662c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x27662cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276630: 0xc0aa598  jal         func_2A9660
    ctx->pc = 0x276630u;
    SET_GPR_U32(ctx, 31, 0x276638u);
    ctx->pc = 0x276634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276630u;
    // 0x276634: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9660u, 0x276630u, 0x276638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276638u;
label_276638:
    // 0x276638: 0xae42290c  sw          $v0, 0x290C($s2)
    ctx->pc = 0x276638u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 10508), GPR_U32(ctx, 2));
    // 0x27663c: 0x131980  sll         $v1, $s3, 6
    ctx->pc = 0x27663cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 6));
    // 0x276640: 0x8e42004c  lw          $v0, 0x4C($s2)
    ctx->pc = 0x276640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x276644: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x276644u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276648: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x276648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x27664c: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x27664cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x276650: 0xc07679c  jal         func_1D9E70
    ctx->pc = 0x276650u;
    SET_GPR_U32(ctx, 31, 0x276658u);
    ctx->pc = 0x276654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276650u;
    // 0x276654: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E70u, 0x276650u, 0x276658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276658u;
label_276658:
    // 0x276658: 0x7ba30060  lq          $v1, 0x60($sp)
    ctx->pc = 0x276658u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x27665c: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x27665cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x276660: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x276660u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x276664: 0x34450500  ori         $a1, $v0, 0x500
    ctx->pc = 0x276664u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1280);
    // 0x276668: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x276668u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x27666c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x27666cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276670: 0x27a70060  addiu       $a3, $sp, 0x60
    ctx->pc = 0x276670u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x276674: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x276674u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276678: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x276678u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27667c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x27667cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276680: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x276680u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276684: 0x7e432920  sq          $v1, 0x2920($s2)
    ctx->pc = 0x276684u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 10528), GPR_VEC(ctx, 3));
    // 0x276688: 0x924208e8  lbu         $v0, 0x8E8($s2)
    ctx->pc = 0x276688u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2280)));
    // 0x27668c: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x27668Cu;
    SET_GPR_U32(ctx, 31, 0x276694u);
    ctx->pc = 0x276690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27668Cu;
    // 0x276690: 0xffa20000  sd          $v0, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x27668Cu, 0x276694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276694u;
label_276694:
    // 0x276694: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x276694u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x276698: 0x3c03008c  lui         $v1, 0x8C
    ctx->pc = 0x276698u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)140 << 16));
    // 0x27669c: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x27669cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2766a0: 0x246308f0  addiu       $v1, $v1, 0x8F0
    ctx->pc = 0x2766a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2288));
    // 0x2766a4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2766a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2766a8: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x2766a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x2766ac: 0x0  nop
    ctx->pc = 0x2766acu;
    // NOP
label_2766b0:
    // 0x2766b0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2766b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2766b4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2766b4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2766b8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2766b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2766bc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2766bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2766c0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2766c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2766c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2766C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2766C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2766C4u;
        // 0x2766c8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2766C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2766CCu;
}
