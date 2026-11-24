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

// Function: sub_0020F5F8
// Address: 0x20f5f8 - 0x20f744
void sub_0020F5F8_0x20f5f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020F5F8_0x20f5f8");
#endif

    switch (ctx->pc) {
        case 0x20f688u: goto label_20f688;
        case 0x20f6acu: goto label_20f6ac;
        case 0x20f6c8u: goto label_20f6c8;
        case 0x20f6e8u: goto label_20f6e8;
        default: break;
    }

    ctx->pc = 0x20f5f8u;

    // 0x20f5f8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x20f5f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x20f5fc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x20f5fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f600: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x20f600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x20f604: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x20f604u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f608: 0x1518c0  sll         $v1, $s5, 3
    ctx->pc = 0x20f608u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 3));
    // 0x20f60c: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x20f60cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x20f610: 0x751823  subu        $v1, $v1, $s5
    ctx->pc = 0x20f610u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x20f614: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x20f614u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f618: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x20f618u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x20f61c: 0x26c41310  addiu       $a0, $s6, 0x1310
    ctx->pc = 0x20f61cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4880));
    // 0x20f620: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x20f620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x20f624: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x20f624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x20f628: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x20f628u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x20f62c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x20f62cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x20f630: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x20f630u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x20f634: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x20f634u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f638: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x20f638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x20f63c: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x20f63cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f640: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20f640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x20f644: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x20f644u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x20f648: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x20f648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x20f64c: 0x24920010  addiu       $s2, $a0, 0x10
    ctx->pc = 0x20f64cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x20f650: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x20f650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x20f654: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x20f654u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f658: 0x1280002f  beqz        $s4, . + 4 + (0x2F << 2)
    ctx->pc = 0x20F658u;
    {
        const bool branch_taken_0x20f658 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F658u;
        // 0x20f65c: 0x8e510004  lw          $s1, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f658) {
            ctx->pc = 0x20F718u;
            goto label_20f718;
        }
    }
    ctx->pc = 0x20F660u;
    // 0x20f660: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x20f660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x20f664: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x20F664u;
    {
        const bool branch_taken_0x20f664 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F664u;
        // 0x20f668: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f664) {
            ctx->pc = 0x20F718u;
            goto label_20f718;
        }
    }
    ctx->pc = 0x20F66Cu;
    // 0x20f66c: 0x16200004  bnez        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x20F66Cu;
    {
        const bool branch_taken_0x20f66c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x20F670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F66Cu;
        // 0x20f670: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f66c) {
            ctx->pc = 0x20F680u;
            goto label_20f680;
        }
    }
    ctx->pc = 0x20F674u;
    // 0x20f674: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x20F674u;
    {
        const bool branch_taken_0x20f674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F674u;
        // 0x20f678: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f674) {
            ctx->pc = 0x20F71Cu;
            goto label_20f71c;
        }
    }
    ctx->pc = 0x20F67Cu;
    // 0x20f67c: 0x0  nop
    ctx->pc = 0x20f67cu;
    // NOP
label_20f680:
    // 0x20f680: 0xc083e34  jal         func_20F8D0
    ctx->pc = 0x20F680u;
    SET_GPR_U32(ctx, 31, 0x20F688u);
    ctx->pc = 0x20F684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F680u;
    // 0x20f684: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20F8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20F8D0u, 0x20F680u, 0x20F688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F688u;
label_20f688:
    // 0x20f688: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x20f688u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f68c: 0x74102a  slt         $v0, $v1, $s4
    ctx->pc = 0x20f68cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x20f690: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x20F690u;
    {
        const bool branch_taken_0x20f690 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20f690) {
            ctx->pc = 0x20F694u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20F690u;
            // 0x20f694: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20F6D0u;
            goto label_20f6d0;
        }
    }
    ctx->pc = 0x20F698u;
    // 0x20f698: 0x2838023  subu        $s0, $s4, $v1
    ctx->pc = 0x20f698u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x20f69c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20f69cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f6a0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x20f6a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f6a4: 0xc083e34  jal         func_20F8D0
    ctx->pc = 0x20F6A4u;
    SET_GPR_U32(ctx, 31, 0x20F6ACu);
    ctx->pc = 0x20F6A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F6A4u;
    // 0x20f6a8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20F8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20F8D0u, 0x20F6A4u, 0x20F6ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F6ACu;
label_20f6ac:
    // 0x20f6ac: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x20f6acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x20f6b0: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x20F6B0u;
    {
        const bool branch_taken_0x20f6b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20f6b0) {
            ctx->pc = 0x20F6B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20F6B0u;
            // 0x20f6b4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20F6D0u;
            goto label_20f6d0;
        }
    }
    ctx->pc = 0x20F6B8u;
    // 0x20f6b8: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x20f6b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x20f6bc: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x20f6bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f6c0: 0xc0848e0  jal         func_212380
    ctx->pc = 0x20F6C0u;
    SET_GPR_U32(ctx, 31, 0x20F6C8u);
    ctx->pc = 0x20F6C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F6C0u;
    // 0x20f6c4: 0x34a5040b  ori         $a1, $a1, 0x40B (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1035);
    ctx->in_delay_slot = false;
    ctx->pc = 0x212380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212380u, 0x20F6C0u, 0x20F6C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F6C8u;
label_20f6c8:
    // 0x20f6c8: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x20f6c8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f6cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20f6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20f6d0:
    // 0x20f6d0: 0x5662000b  bnel        $s3, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x20F6D0u;
    {
        const bool branch_taken_0x20f6d0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x20f6d0) {
            ctx->pc = 0x20F6D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20F6D0u;
            // 0x20f6d4: 0x8e420020  lw          $v0, 0x20($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20F700u;
            goto label_20f700;
        }
    }
    ctx->pc = 0x20F6D8u;
    // 0x20f6d8: 0x56b30004  bnel        $s5, $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x20F6D8u;
    {
        const bool branch_taken_0x20f6d8 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 19));
        if (branch_taken_0x20f6d8) {
            ctx->pc = 0x20F6DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20F6D8u;
            // 0x20f6dc: 0x8e420024  lw          $v0, 0x24($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20F6ECu;
            goto label_20f6ec;
        }
    }
    ctx->pc = 0x20F6E0u;
    // 0x20f6e0: 0xc083dd2  jal         func_20F748
    ctx->pc = 0x20F6E0u;
    SET_GPR_U32(ctx, 31, 0x20F6E8u);
    ctx->pc = 0x20F6E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F6E0u;
    // 0x20f6e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20F748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20F748u, 0x20F6E0u, 0x20F6E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F6E8u;
label_20f6e8:
    // 0x20f6e8: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x20f6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_20f6ec:
    // 0x20f6ec: 0x4400007  bltz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x20F6ECu;
    {
        const bool branch_taken_0x20f6ec = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x20F6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F6ECu;
        // 0x20f6f0: 0x541021  addu        $v0, $v0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f6ec) {
            ctx->pc = 0x20F70Cu;
            goto label_20f70c;
        }
    }
    ctx->pc = 0x20F6F4u;
    // 0x20f6f4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x20F6F4u;
    {
        const bool branch_taken_0x20f6f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F6F4u;
        // 0x20f6f8: 0xae420024  sw          $v0, 0x24($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f6f4) {
            ctx->pc = 0x20F70Cu;
            goto label_20f70c;
        }
    }
    ctx->pc = 0x20F6FCu;
    // 0x20f6fc: 0x0  nop
    ctx->pc = 0x20f6fcu;
    // NOP
label_20f700:
    // 0x20f700: 0x4400002  bltz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x20F700u;
    {
        const bool branch_taken_0x20f700 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x20F704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F700u;
        // 0x20f704: 0x541021  addu        $v0, $v0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f700) {
            ctx->pc = 0x20F70Cu;
            goto label_20f70c;
        }
    }
    ctx->pc = 0x20F708u;
    // 0x20f708: 0xae420020  sw          $v0, 0x20($s2)
    ctx->pc = 0x20f708u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 2));
label_20f70c:
    // 0x20f70c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20f70cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20f710: 0x2e0102d  daddu       $v0, $s7, $zero
    ctx->pc = 0x20f710u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f714: 0xaec30044  sw          $v1, 0x44($s6)
    ctx->pc = 0x20f714u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 68), GPR_U32(ctx, 3));
label_20f718:
    // 0x20f718: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20f718u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20f71c:
    // 0x20f71c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x20f71cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20f720: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x20f720u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20f724: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x20f724u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20f728: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x20f728u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20f72c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x20f72cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x20f730: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x20f730u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20f734: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x20f734u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20f738: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x20f738u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x20f73c: 0x3e00008  jr          $ra
    ctx->pc = 0x20F73Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20F740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F73Cu;
        // 0x20f740: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20F73Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20F744u;
}
