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

// Function: sub_0014A750
// Address: 0x14a750 - 0x14a8e4
void sub_0014A750_0x14a750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014A750_0x14a750");
#endif

    switch (ctx->pc) {
        case 0x14a7b4u: goto label_14a7b4;
        case 0x14a7f8u: goto label_14a7f8;
        case 0x14a820u: goto label_14a820;
        case 0x14a880u: goto label_14a880;
        default: break;
    }

    ctx->pc = 0x14a750u;

    // 0x14a750: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x14a750u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x14a754: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x14a754u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x14a758: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x14a758u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x14a75c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x14a75cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x14a760: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x14a760u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x14a764: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14a764u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x14a768: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x14a768u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x14a76c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14a76cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14a770: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x14a770u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x14a774: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x14a774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14a778: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x14a778u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x14a77c: 0x24700220  addiu       $s0, $v1, 0x220
    ctx->pc = 0x14a77cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 544));
    // 0x14a780: 0x8c630220  lw          $v1, 0x220($v1)
    ctx->pc = 0x14a780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 544)));
    // 0x14a784: 0x10620022  beq         $v1, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x14A784u;
    {
        const bool branch_taken_0x14a784 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x14A788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A784u;
        // 0x14a788: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a784) {
            ctx->pc = 0x14A810u;
            goto label_14a810;
        }
    }
    ctx->pc = 0x14A78Cu;
    // 0x14a78c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x14a78cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14a790: 0x10640015  beq         $v1, $a0, . + 4 + (0x15 << 2)
    ctx->pc = 0x14A790u;
    {
        const bool branch_taken_0x14a790 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x14a790) {
            ctx->pc = 0x14A7E8u;
            goto label_14a7e8;
        }
    }
    ctx->pc = 0x14A798u;
    // 0x14a798: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x14A798u;
    {
        const bool branch_taken_0x14a798 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a798) {
            ctx->pc = 0x14A7A8u;
            goto label_14a7a8;
        }
    }
    ctx->pc = 0x14A7A0u;
    // 0x14a7a0: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x14A7A0u;
    {
        const bool branch_taken_0x14a7a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a7a0) {
            ctx->pc = 0x14A8C8u;
            goto label_14a8c8;
        }
    }
    ctx->pc = 0x14A7A8u;
label_14a7a8:
    // 0x14a7a8: 0x26050004  addiu       $a1, $s0, 0x4
    ctx->pc = 0x14a7a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x14a7ac: 0xc048566  jal         func_121598
    ctx->pc = 0x14A7ACu;
    SET_GPR_U32(ctx, 31, 0x14A7B4u);
    ctx->pc = 0x14A7B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A7ACu;
    // 0x14a7b0: 0x26060010  addiu       $a2, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121598u, 0x14A7ACu, 0x14A7B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A7B4u;
label_14a7b4:
    // 0x14a7b4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14A7B4u;
    {
        const bool branch_taken_0x14a7b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14a7b4) {
            ctx->pc = 0x14A7C8u;
            goto label_14a7c8;
        }
    }
    ctx->pc = 0x14A7BCu;
    // 0x14a7bc: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x14A7BCu;
    {
        const bool branch_taken_0x14a7bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A7BCu;
        // 0x14a7c0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a7bc) {
            ctx->pc = 0x14A8D0u;
            goto label_14a8d0;
        }
    }
    ctx->pc = 0x14A7C4u;
    // 0x14a7c4: 0x0  nop
    ctx->pc = 0x14a7c4u;
    // NOP
label_14a7c8:
    // 0x14a7c8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x14a7c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x14a7cc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x14a7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14a7d0: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x14a7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x14a7d4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x14a7d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x14a7d8: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x14a7d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x14a7dc: 0xa2230001  sb          $v1, 0x1($s1)
    ctx->pc = 0x14a7dcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x14a7e0: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x14a7e0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x14a7e4: 0x0  nop
    ctx->pc = 0x14a7e4u;
    // NOP
label_14a7e8:
    // 0x14a7e8: 0x8e250018  lw          $a1, 0x18($s1)
    ctx->pc = 0x14a7e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x14a7ec: 0x8e040064  lw          $a0, 0x64($s0)
    ctx->pc = 0x14a7ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x14a7f0: 0xc048508  jal         func_121420
    ctx->pc = 0x14A7F0u;
    SET_GPR_U32(ctx, 31, 0x14A7F8u);
    ctx->pc = 0x14A7F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A7F0u;
    // 0x14a7f4: 0x8e26001c  lw          $a2, 0x1C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121420u, 0x14A7F0u, 0x14A7F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A7F8u;
label_14a7f8:
    // 0x14a7f8: 0x14400033  bnez        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x14A7F8u;
    {
        const bool branch_taken_0x14a7f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14a7f8) {
            ctx->pc = 0x14A8C8u;
            goto label_14a8c8;
        }
    }
    ctx->pc = 0x14A800u;
    // 0x14a800: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x14a800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x14a804: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x14a804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x14a808: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x14A808u;
    {
        const bool branch_taken_0x14a808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A808u;
        // 0x14a80c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a808) {
            ctx->pc = 0x14A8C8u;
            goto label_14a8c8;
        }
    }
    ctx->pc = 0x14A810u;
label_14a810:
    // 0x14a810: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x14a810u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14a814: 0x26050004  addiu       $a1, $s0, 0x4
    ctx->pc = 0x14a814u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x14a818: 0xc048566  jal         func_121598
    ctx->pc = 0x14A818u;
    SET_GPR_U32(ctx, 31, 0x14A820u);
    ctx->pc = 0x14A81Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A818u;
    // 0x14a81c: 0x26060010  addiu       $a2, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121598u, 0x14A818u, 0x14A820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A820u;
label_14a820:
    // 0x14a820: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x14a820u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14a824: 0x14430028  bne         $v0, $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x14A824u;
    {
        const bool branch_taken_0x14a824 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x14a824) {
            ctx->pc = 0x14A8C8u;
            goto label_14a8c8;
        }
    }
    ctx->pc = 0x14A82Cu;
    // 0x14a82c: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x14a82cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x14a830: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x14A830u;
    {
        const bool branch_taken_0x14a830 = (GPR_S64(ctx, 3) < 0);
        if (branch_taken_0x14a830) {
            ctx->pc = 0x14A848u;
            goto label_14a848;
        }
    }
    ctx->pc = 0x14A838u;
    // 0x14a838: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x14a838u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x14a83c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x14a83cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a840: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x14A840u;
    {
        const bool branch_taken_0x14a840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A840u;
        // 0x14a844: 0xa2200001  sb          $zero, 0x1($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a840) {
            ctx->pc = 0x14A8D0u;
            goto label_14a8d0;
        }
    }
    ctx->pc = 0x14A848u;
label_14a848:
    // 0x14a848: 0x2402fff8  addiu       $v0, $zero, -0x8
    ctx->pc = 0x14a848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
    // 0x14a84c: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x14A84Cu;
    {
        const bool branch_taken_0x14a84c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x14A850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A84Cu;
        // 0x14a850: 0x2402fffb  addiu       $v0, $zero, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a84c) {
            ctx->pc = 0x14A898u;
            goto label_14a898;
        }
    }
    ctx->pc = 0x14A854u;
    // 0x14a854: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x14A854u;
    {
        const bool branch_taken_0x14a854 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14a854) {
            ctx->pc = 0x14A898u;
            goto label_14a898;
        }
    }
    ctx->pc = 0x14A85Cu;
    // 0x14a85c: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x14a85cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x14a860: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x14A860u;
    {
        const bool branch_taken_0x14a860 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x14A864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A860u;
        // 0x14a864: 0x2402fffc  addiu       $v0, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a860) {
            ctx->pc = 0x14A898u;
            goto label_14a898;
        }
    }
    ctx->pc = 0x14A868u;
    // 0x14a868: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x14A868u;
    {
        const bool branch_taken_0x14a868 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14a868) {
            ctx->pc = 0x14A888u;
            goto label_14a888;
        }
    }
    ctx->pc = 0x14A870u;
    // 0x14a870: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x14a870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x14a874: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14A874u;
    {
        const bool branch_taken_0x14a874 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14a874) {
            ctx->pc = 0x14A888u;
            goto label_14a888;
        }
    }
    ctx->pc = 0x14A87Cu;
    // 0x14a87c: 0x10000006  b           . + 4 + (0x6 << 2)
label_14a880:
    if (ctx->pc == 0x14A880u) {
        ctx->pc = 0x14A884u;
        goto label_fallthrough_0x14a87c;
    }
    ctx->pc = 0x14A87Cu;
    {
        const bool branch_taken_0x14a87c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a87c) {
            ctx->pc = 0x14A898u;
            goto label_14a898;
        }
    }
label_fallthrough_0x14a87c:
    ctx->pc = 0x14A884u;
    // 0x14a884: 0x0  nop
    ctx->pc = 0x14a884u;
    // NOP
label_14a888:
    // 0x14a888: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x14a888u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x14a88c: 0xa2200001  sb          $zero, 0x1($s1)
    ctx->pc = 0x14a88cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x14a890: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x14A890u;
    {
        const bool branch_taken_0x14a890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A890u;
        // 0x14a894: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a890) {
            ctx->pc = 0x14A8D0u;
            goto label_14a8d0;
        }
    }
    ctx->pc = 0x14A898u;
label_14a898:
    // 0x14a898: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x14a898u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x14a89c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x14A89Cu;
    {
        const bool branch_taken_0x14a89c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A89Cu;
        // 0x14a8a0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a89c) {
            ctx->pc = 0x14A8B8u;
            goto label_14a8b8;
        }
    }
    ctx->pc = 0x14A8A4u;
    // 0x14a8a4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x14a8a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x14a8a8: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x14a8a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x14a8ac: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x14a8acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x14a8b0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x14A8B0u;
    {
        const bool branch_taken_0x14a8b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A8B0u;
        // 0x14a8b4: 0xa2220000  sb          $v0, 0x0($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a8b0) {
            ctx->pc = 0x14A8C8u;
            goto label_14a8c8;
        }
    }
    ctx->pc = 0x14A8B8u;
label_14a8b8:
    // 0x14a8b8: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x14a8b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x14a8bc: 0xa2200001  sb          $zero, 0x1($s1)
    ctx->pc = 0x14a8bcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x14a8c0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x14A8C0u;
    {
        const bool branch_taken_0x14a8c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A8C0u;
        // 0x14a8c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a8c0) {
            ctx->pc = 0x14A8D0u;
            goto label_14a8d0;
        }
    }
    ctx->pc = 0x14A8C8u;
label_14a8c8:
    // 0x14a8c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14a8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14a8cc: 0x0  nop
    ctx->pc = 0x14a8ccu;
    // NOP
label_14a8d0:
    // 0x14a8d0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x14a8d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14a8d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14a8d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14a8d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14a8d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14a8dc: 0x3e00008  jr          $ra
    ctx->pc = 0x14A8DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14A8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A8DCu;
        // 0x14a8e0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14A8DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14A8E4u;
}
