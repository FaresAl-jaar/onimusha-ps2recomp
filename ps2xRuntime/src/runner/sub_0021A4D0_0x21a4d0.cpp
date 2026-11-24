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

// Function: sub_0021A4D0
// Address: 0x21a4d0 - 0x21a5e0
void sub_0021A4D0_0x21a4d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021A4D0_0x21a4d0");
#endif

    switch (ctx->pc) {
        case 0x21a530u: goto label_21a530;
        case 0x21a560u: goto label_21a560;
        case 0x21a580u: goto label_21a580;
        default: break;
    }

    ctx->pc = 0x21a4d0u;

    // 0x21a4d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x21a4d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x21a4d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21a4d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21a4d8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21a4d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21a4dc: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x21a4dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a4e0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x21a4e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x21a4e4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x21a4e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a4e8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x21a4e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x21a4ec: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x21a4ecu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a4f0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x21a4f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x21a4f4: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x21a4f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x21a4f8: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x21a4f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x21a4fc: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x21a4fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x21a500: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x21a500u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x21a504: 0x8c821fc0  lw          $v0, 0x1FC0($a0)
    ctx->pc = 0x21a504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8128)));
    // 0x21a508: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x21a508u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x21a50c: 0x8c430178  lw          $v1, 0x178($v0)
    ctx->pc = 0x21a50cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 376)));
    // 0x21a510: 0x24500180  addiu       $s0, $v0, 0x180
    ctx->pc = 0x21a510u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x21a514: 0x1860001f  blez        $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x21A514u;
    {
        const bool branch_taken_0x21a514 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x21A518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A514u;
        // 0x21a518: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a514) {
            ctx->pc = 0x21A594u;
            goto label_21a594;
        }
    }
    ctx->pc = 0x21A51Cu;
    // 0x21a51c: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x21a51cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a520: 0x24170002  addiu       $s7, $zero, 0x2
    ctx->pc = 0x21a520u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x21a524: 0x24160004  addiu       $s6, $zero, 0x4
    ctx->pc = 0x21a524u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x21a528: 0x2415ffff  addiu       $s5, $zero, -0x1
    ctx->pc = 0x21a528u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x21a52c: 0x0  nop
    ctx->pc = 0x21a52cu;
    // NOP
label_21a530:
    // 0x21a530: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x21a530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x21a534: 0x50570004  beql        $v0, $s7, . + 4 + (0x4 << 2)
    ctx->pc = 0x21A534u;
    {
        const bool branch_taken_0x21a534 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 23));
        if (branch_taken_0x21a534) {
            ctx->pc = 0x21A538u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21A534u;
            // 0x21a538: 0x8e020058  lw          $v0, 0x58($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21A548u;
            goto label_21a548;
        }
    }
    ctx->pc = 0x21A53Cu;
    // 0x21a53c: 0x54560013  bnel        $v0, $s6, . + 4 + (0x13 << 2)
    ctx->pc = 0x21A53Cu;
    {
        const bool branch_taken_0x21a53c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        if (branch_taken_0x21a53c) {
            ctx->pc = 0x21A540u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21A53Cu;
            // 0x21a540: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21A58Cu;
            goto label_21a58c;
        }
    }
    ctx->pc = 0x21A544u;
    // 0x21a544: 0x8e020058  lw          $v0, 0x58($s0)
    ctx->pc = 0x21a544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_21a548:
    // 0x21a548: 0x54550010  bnel        $v0, $s5, . + 4 + (0x10 << 2)
    ctx->pc = 0x21A548u;
    {
        const bool branch_taken_0x21a548 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        if (branch_taken_0x21a548) {
            ctx->pc = 0x21A54Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21A548u;
            // 0x21a54c: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21A58Cu;
            goto label_21a58c;
        }
    }
    ctx->pc = 0x21A550u;
    // 0x21a550: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x21a550u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x21a554: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x21a554u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a558: 0xc086978  jal         func_21A5E0
    ctx->pc = 0x21A558u;
    SET_GPR_U32(ctx, 31, 0x21A560u);
    ctx->pc = 0x21A55Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A558u;
    // 0x21a55c: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21A5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5E0u, 0x21A558u, 0x21A560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A560u;
label_21a560:
    // 0x21a560: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21A560u;
    {
        const bool branch_taken_0x21a560 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A560u;
        // 0x21a564: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a560) {
            ctx->pc = 0x21A578u;
            goto label_21a578;
        }
    }
    ctx->pc = 0x21A568u;
    // 0x21a568: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x21a568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x21a56c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x21a56cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x21a570: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x21A570u;
    {
        const bool branch_taken_0x21a570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A570u;
        // 0x21a574: 0xae500000  sw          $s0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a570) {
            ctx->pc = 0x21A588u;
            goto label_21a588;
        }
    }
    ctx->pc = 0x21A578u;
label_21a578:
    // 0x21a578: 0xc086978  jal         func_21A5E0
    ctx->pc = 0x21A578u;
    SET_GPR_U32(ctx, 31, 0x21A580u);
    ctx->pc = 0x21A57Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A578u;
    // 0x21a57c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21A5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5E0u, 0x21A578u, 0x21A580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A580u;
label_21a580:
    // 0x21a580: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x21A580u;
    {
        const bool branch_taken_0x21a580 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21a580) {
            ctx->pc = 0x21A584u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21A580u;
            // 0x21a584: 0xae300000  sw          $s0, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21A588u;
            goto label_21a588;
        }
    }
    ctx->pc = 0x21A588u;
label_21a588:
    // 0x21a588: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x21a588u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_21a58c:
    // 0x21a58c: 0x1660ffe8  bnez        $s3, . + 4 + (-0x18 << 2)
    ctx->pc = 0x21A58Cu;
    {
        const bool branch_taken_0x21a58c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x21A590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A58Cu;
        // 0x21a590: 0x261000f0  addiu       $s0, $s0, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a58c) {
            ctx->pc = 0x21A530u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21a530;
        }
    }
    ctx->pc = 0x21A594u;
label_21a594:
    // 0x21a594: 0x1e800004  bgtz        $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x21A594u;
    {
        const bool branch_taken_0x21a594 = (GPR_S64(ctx, 20) > 0);
        ctx->pc = 0x21A598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A594u;
        // 0x21a598: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a594) {
            ctx->pc = 0x21A5A8u;
            goto label_21a5a8;
        }
    }
    ctx->pc = 0x21A59Cu;
    // 0x21a59c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x21A59Cu;
    {
        const bool branch_taken_0x21a59c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A59Cu;
        // 0x21a5a0: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a59c) {
            ctx->pc = 0x21A5B0u;
            goto label_21a5b0;
        }
    }
    ctx->pc = 0x21A5A4u;
    // 0x21a5a4: 0x0  nop
    ctx->pc = 0x21a5a4u;
    // NOP
label_21a5a8:
    // 0x21a5a8: 0x16820003  bne         $s4, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21A5A8u;
    {
        const bool branch_taken_0x21a5a8 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x21A5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A5A8u;
        // 0x21a5ac: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a5a8) {
            ctx->pc = 0x21A5B8u;
            goto label_21a5b8;
        }
    }
    ctx->pc = 0x21A5B0u;
label_21a5b0:
    // 0x21a5b0: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x21a5b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x21a5b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21a5b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_21a5b8:
    // 0x21a5b8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21a5b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21a5bc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x21a5bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21a5c0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x21a5c0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21a5c4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x21a5c4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21a5c8: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x21a5c8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x21a5cc: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x21a5ccu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21a5d0: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x21a5d0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x21a5d4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x21a5d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x21a5d8: 0x3e00008  jr          $ra
    ctx->pc = 0x21A5D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21A5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A5D8u;
        // 0x21a5dc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21A5D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21A5E0u;
}
