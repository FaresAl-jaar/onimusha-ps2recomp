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

// Function: sub_0024A598
// Address: 0x24a598 - 0x24a6ac
void sub_0024A598_0x24a598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024A598_0x24a598");
#endif

    switch (ctx->pc) {
        case 0x24a5bcu: goto label_24a5bc;
        case 0x24a5d0u: goto label_24a5d0;
        case 0x24a5d8u: goto label_24a5d8;
        case 0x24a5f8u: goto label_24a5f8;
        case 0x24a600u: goto label_24a600;
        case 0x24a644u: goto label_24a644;
        case 0x24a650u: goto label_24a650;
        case 0x24a658u: goto label_24a658;
        case 0x24a670u: goto label_24a670;
        default: break;
    }

    ctx->pc = 0x24a598u;

    // 0x24a598: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x24a598u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x24a59c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x24a59cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x24a5a0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x24a5a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a5a4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x24a5a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x24a5a8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x24a5a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a5ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24a5acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24a5b0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x24a5b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x24a5b4: 0xc092934  jal         func_24A4D0
    ctx->pc = 0x24A5B4u;
    SET_GPR_U32(ctx, 31, 0x24A5BCu);
    ctx->pc = 0x24A5B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A5B4u;
    // 0x24a5b8: 0xa2200000  sb          $zero, 0x0($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A4D0u, 0x24A5B4u, 0x24A5BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A5BCu;
label_24a5bc:
    // 0x24a5bc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x24A5BCu;
    {
        const bool branch_taken_0x24a5bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24A5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A5BCu;
        // 0x24a5c0: 0x3c05004d  lui         $a1, 0x4D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)77 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a5bc) {
            ctx->pc = 0x24A5D0u;
            goto label_24a5d0;
        }
    }
    ctx->pc = 0x24A5C4u;
    // 0x24a5c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x24a5c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a5c8: 0xc049ed2  jal         func_127B48
    ctx->pc = 0x24A5C8u;
    SET_GPR_U32(ctx, 31, 0x24A5D0u);
    ctx->pc = 0x24A5CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A5C8u;
    // 0x24a5cc: 0x24a51220  addiu       $a1, $a1, 0x1220 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127B48u, 0x24A5C8u, 0x24A5D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A5D0u;
label_24a5d0:
    // 0x24a5d0: 0xc092950  jal         func_24A540
    ctx->pc = 0x24A5D0u;
    SET_GPR_U32(ctx, 31, 0x24A5D8u);
    ctx->pc = 0x24A5D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A5D0u;
    // 0x24a5d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A540u, 0x24A5D0u, 0x24A5D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A5D8u;
label_24a5d8:
    // 0x24a5d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x24a5d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24a5dc: 0x5443001a  bnel        $v0, $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x24A5DCu;
    {
        const bool branch_taken_0x24a5dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x24a5dc) {
            ctx->pc = 0x24A5E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24A5DCu;
            // 0x24a5e0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24A648u;
            goto label_24a648;
        }
    }
    ctx->pc = 0x24A5E4u;
    // 0x24a5e4: 0x3c10004d  lui         $s0, 0x4D
    ctx->pc = 0x24a5e4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)77 << 16));
    // 0x24a5e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x24a5e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a5ec: 0x26101118  addiu       $s0, $s0, 0x1118
    ctx->pc = 0x24a5ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4376));
    // 0x24a5f0: 0xc049dd0  jal         func_127740
    ctx->pc = 0x24A5F0u;
    SET_GPR_U32(ctx, 31, 0x24A5F8u);
    ctx->pc = 0x24A5F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A5F0u;
    // 0x24a5f4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127740u, 0x24A5F0u, 0x24A5F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A5F8u;
label_24a5f8:
    // 0x24a5f8: 0xc049f18  jal         func_127C60
    ctx->pc = 0x24A5F8u;
    SET_GPR_U32(ctx, 31, 0x24A600u);
    ctx->pc = 0x24A5FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A5F8u;
    // 0x24a5fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127C60u, 0x24A5F8u, 0x24A600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A600u;
label_24a600:
    // 0x24a600: 0x2404005c  addiu       $a0, $zero, 0x5C
    ctx->pc = 0x24a600u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x24a604: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x24a604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x24a608: 0x8042ffff  lb          $v0, -0x1($v0)
    ctx->pc = 0x24a608u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294967295)));
    // 0x24a60c: 0x1044000d  beq         $v0, $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x24A60Cu;
    {
        const bool branch_taken_0x24a60c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x24A610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A60Cu;
        // 0x24a610: 0x2403002f  addiu       $v1, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a60c) {
            ctx->pc = 0x24A644u;
            goto label_24a644;
        }
    }
    ctx->pc = 0x24A614u;
    // 0x24a614: 0x1043000c  beq         $v0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x24A614u;
    {
        const bool branch_taken_0x24a614 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x24A618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A614u;
        // 0x24a618: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a614) {
            ctx->pc = 0x24A648u;
            goto label_24a648;
        }
    }
    ctx->pc = 0x24A61Cu;
    // 0x24a61c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x24A61Cu;
    {
        const bool branch_taken_0x24a61c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24a61c) {
            ctx->pc = 0x24A648u;
            goto label_24a648;
        }
    }
    ctx->pc = 0x24A624u;
    // 0x24a624: 0x82420000  lb          $v0, 0x0($s2)
    ctx->pc = 0x24a624u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x24a628: 0x10440007  beq         $v0, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x24A628u;
    {
        const bool branch_taken_0x24a628 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x24a628) {
            ctx->pc = 0x24A648u;
            goto label_24a648;
        }
    }
    ctx->pc = 0x24A630u;
    // 0x24a630: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x24A630u;
    {
        const bool branch_taken_0x24a630 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x24A634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A630u;
        // 0x24a634: 0x3c050067  lui         $a1, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a630) {
            ctx->pc = 0x24A644u;
            goto label_24a644;
        }
    }
    ctx->pc = 0x24A638u;
    // 0x24a638: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x24a638u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a63c: 0xc049dd0  jal         func_127740
    ctx->pc = 0x24A63Cu;
    SET_GPR_U32(ctx, 31, 0x24A644u);
    ctx->pc = 0x24A640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A63Cu;
    // 0x24a640: 0x24a5d580  addiu       $a1, $a1, -0x2A80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127740u, 0x24A63Cu, 0x24A644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A644u;
label_24a644:
    // 0x24a644: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x24a644u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_24a648:
    // 0x24a648: 0xc049dd0  jal         func_127740
    ctx->pc = 0x24A648u;
    SET_GPR_U32(ctx, 31, 0x24A650u);
    ctx->pc = 0x24A64Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A648u;
    // 0x24a64c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127740u, 0x24A648u, 0x24A650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A650u;
label_24a650:
    // 0x24a650: 0xc049f18  jal         func_127C60
    ctx->pc = 0x24A650u;
    SET_GPR_U32(ctx, 31, 0x24A658u);
    ctx->pc = 0x24A654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A650u;
    // 0x24a654: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127C60u, 0x24A650u, 0x24A658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A658u;
label_24a658:
    // 0x24a658: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x24a658u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a65c: 0x18c0000d  blez        $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x24A65Cu;
    {
        const bool branch_taken_0x24a65c = (GPR_S64(ctx, 6) <= 0);
        ctx->pc = 0x24A660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A65Cu;
        // 0x24a660: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a65c) {
            ctx->pc = 0x24A694u;
            goto label_24a694;
        }
    }
    ctx->pc = 0x24A664u;
    // 0x24a664: 0x2408005c  addiu       $t0, $zero, 0x5C
    ctx->pc = 0x24a664u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x24a668: 0x2407002f  addiu       $a3, $zero, 0x2F
    ctx->pc = 0x24a668u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x24a66c: 0x2252021  addu        $a0, $s1, $a1
    ctx->pc = 0x24a66cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
label_24a670:
    // 0x24a670: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x24a670u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x24a674: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x24a674u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x24a678: 0x14480002  bne         $v0, $t0, . + 4 + (0x2 << 2)
    ctx->pc = 0x24A678u;
    {
        const bool branch_taken_0x24a678 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 8));
        ctx->pc = 0x24A67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A678u;
        // 0x24a67c: 0xa6182a  slt         $v1, $a1, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a678) {
            ctx->pc = 0x24A684u;
            goto label_24a684;
        }
    }
    ctx->pc = 0x24A680u;
    // 0x24a680: 0xa0870000  sb          $a3, 0x0($a0)
    ctx->pc = 0x24a680u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 7));
label_24a684:
    // 0x24a684: 0x0  nop
    ctx->pc = 0x24a684u;
    // NOP
    // 0x24a688: 0x0  nop
    ctx->pc = 0x24a688u;
    // NOP
    // 0x24a68c: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x24A68Cu;
    {
        const bool branch_taken_0x24a68c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x24A690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A68Cu;
        // 0x24a690: 0x2252021  addu        $a0, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a68c) {
            ctx->pc = 0x24A670u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24a670;
        }
    }
    ctx->pc = 0x24A694u;
label_24a694:
    // 0x24a694: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24a694u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24a698: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x24a698u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x24a69c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x24a69cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24a6a0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x24a6a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x24a6a4: 0x3e00008  jr          $ra
    ctx->pc = 0x24A6A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24A6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A6A4u;
        // 0x24a6a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24A6A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24A6ACu;
}
