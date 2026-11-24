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

// Function: sub_00202590
// Address: 0x202590 - 0x20269c
void sub_00202590_0x202590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00202590_0x202590");
#endif

    switch (ctx->pc) {
        case 0x202650u: goto label_202650;
        case 0x202660u: goto label_202660;
        default: break;
    }

    ctx->pc = 0x202590u;

    // 0x202590: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x202590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x202594: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x202594u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x202598: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x202598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x20259c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x20259cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2025a0: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2025a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x2025a4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2025a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2025a8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2025a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2025ac: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2025acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2025b0: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2025b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x2025b4: 0x3c080008  lui         $t0, 0x8
    ctx->pc = 0x2025b4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)8 << 16));
    // 0x2025b8: 0x8c4986d0  lw          $t1, -0x7930($v0)
    ctx->pc = 0x2025b8u;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x4B86D0u));
    // 0x2025bc: 0x350840d0  ori         $t0, $t0, 0x40D0
    ctx->pc = 0x2025bcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)16592);
    // 0x2025c0: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x2025c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x2025c4: 0x8ca70008  lw          $a3, 0x8($a1)
    ctx->pc = 0x2025c4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2025c8: 0xafa80004  sw          $t0, 0x4($sp)
    ctx->pc = 0x2025c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 8));
    // 0x2025cc: 0xe33818  mult        $a3, $a3, $v1
    ctx->pc = 0x2025ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x2025d0: 0x710c0  sll         $v0, $a3, 3
    ctx->pc = 0x2025d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x2025d4: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x2025d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2025d8: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x2025d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x2025dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2025dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2025e0: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x2025e0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2025e4: 0x24452840  addiu       $a1, $v0, 0x2840
    ctx->pc = 0x2025e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 10304));
    // 0x2025e8: 0x11200017  beqz        $t1, . + 4 + (0x17 << 2)
    ctx->pc = 0x2025E8u;
    {
        const bool branch_taken_0x2025e8 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x2025ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2025E8u;
        // 0x2025ec: 0xafa50000  sw          $a1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2025e8) {
            ctx->pc = 0x202648u;
            goto label_202648;
        }
    }
    ctx->pc = 0x2025F0u;
    // 0x2025f0: 0x29220002  slti        $v0, $t1, 0x2
    ctx->pc = 0x2025f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2025f4: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x2025F4u;
    {
        const bool branch_taken_0x2025f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2025f4) {
            ctx->pc = 0x2025F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2025F4u;
            // 0x2025f8: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x202638u;
            goto label_202638;
        }
    }
    ctx->pc = 0x2025FCu;
    // 0x2025fc: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x2025fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x202600: 0x8c4286d4  lw          $v0, -0x792C($v0)
    ctx->pc = 0x202600u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4B86D4u));
    // 0x202604: 0x45182a  slt         $v1, $v0, $a1
    ctx->pc = 0x202604u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x202608: 0x5460000b  bnel        $v1, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x202608u;
    {
        const bool branch_taken_0x202608 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x202608) {
            ctx->pc = 0x20260Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x202608u;
            // 0x20260c: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x202638u;
            goto label_202638;
        }
    }
    ctx->pc = 0x202610u;
    // 0x202610: 0x48102a  slt         $v0, $v0, $t0
    ctx->pc = 0x202610u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x202614: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x202614u;
    {
        const bool branch_taken_0x202614 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x202614) {
            ctx->pc = 0x202618u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x202614u;
            // 0x202618: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x202638u;
            goto label_202638;
        }
    }
    ctx->pc = 0x20261Cu;
    // 0x20261c: 0x3c020087  lui         $v0, 0x87
    ctx->pc = 0x20261cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)135 << 16));
    // 0x202620: 0x24427808  addiu       $v0, $v0, 0x7808
    ctx->pc = 0x202620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30728));
    // 0x202624: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x202624u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x87780Cu));
    // 0x202628: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x202628u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x877808u));
    // 0x20262c: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x20262cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x202630: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x202630u;
    {
        const bool branch_taken_0x202630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202630u;
        // 0x202634: 0xae040000  sw          $a0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202630) {
            ctx->pc = 0x202664u;
            goto label_202664;
        }
    }
    ctx->pc = 0x202638u;
label_202638:
    // 0x202638: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x202638u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20263c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x20263Cu;
    {
        const bool branch_taken_0x20263c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20263Cu;
        // 0x202640: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20263c) {
            ctx->pc = 0x202664u;
            goto label_202664;
        }
    }
    ctx->pc = 0x202644u;
    // 0x202644: 0x0  nop
    ctx->pc = 0x202644u;
    // NOP
label_202648:
    // 0x202648: 0xc080f8e  jal         func_203E38
    ctx->pc = 0x202648u;
    SET_GPR_U32(ctx, 31, 0x202650u);
    ctx->pc = 0x203E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203E38u, 0x202648u, 0x202650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202650u;
label_202650:
    // 0x202650: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x202650u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202654: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x202654u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x202658: 0xc080f8e  jal         func_203E38
    ctx->pc = 0x202658u;
    SET_GPR_U32(ctx, 31, 0x202660u);
    ctx->pc = 0x20265Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202658u;
    // 0x20265c: 0x8fa50004  lw          $a1, 0x4($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203E38u, 0x202658u, 0x202660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202660u;
label_202660:
    // 0x202660: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x202660u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_202664:
    // 0x202664: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x202664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x202668: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x202668u;
    {
        const bool branch_taken_0x202668 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x202668) {
            ctx->pc = 0x20266Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x202668u;
            // 0x20266c: 0x2412ffff  addiu       $s2, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x202680u;
            goto label_202680;
        }
    }
    ctx->pc = 0x202670u;
    // 0x202670: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x202670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x202674: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x202674u;
    {
        const bool branch_taken_0x202674 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x202678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202674u;
        // 0x202678: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202674) {
            ctx->pc = 0x202684u;
            goto label_202684;
        }
    }
    ctx->pc = 0x20267Cu;
    // 0x20267c: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x20267cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_202680:
    // 0x202680: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x202680u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_202684:
    // 0x202684: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x202684u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x202688: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x202688u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20268c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x20268cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x202690: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x202690u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x202694: 0x3e00008  jr          $ra
    ctx->pc = 0x202694u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x202698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202694u;
        // 0x202698: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x202694u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20269Cu;
}
