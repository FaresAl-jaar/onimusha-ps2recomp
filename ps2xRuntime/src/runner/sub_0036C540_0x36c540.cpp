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

// Function: sub_0036C540
// Address: 0x36c540 - 0x36c7b4
void sub_0036C540_0x36c540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036C540_0x36c540");
#endif

    switch (ctx->pc) {
        case 0x36c570u: goto label_36c570;
        case 0x36c584u: goto label_36c584;
        case 0x36c598u: goto label_36c598;
        case 0x36c5acu: goto label_36c5ac;
        case 0x36c5b0u: goto label_36c5b0;
        case 0x36c5c8u: goto label_36c5c8;
        case 0x36c5ecu: goto label_36c5ec;
        case 0x36c600u: goto label_36c600;
        case 0x36c614u: goto label_36c614;
        case 0x36c628u: goto label_36c628;
        case 0x36c63cu: goto label_36c63c;
        case 0x36c650u: goto label_36c650;
        case 0x36c664u: goto label_36c664;
        case 0x36c678u: goto label_36c678;
        case 0x36c698u: goto label_36c698;
        case 0x36c6acu: goto label_36c6ac;
        case 0x36c6c0u: goto label_36c6c0;
        case 0x36c6d4u: goto label_36c6d4;
        case 0x36c6d8u: goto label_36c6d8;
        case 0x36c6f0u: goto label_36c6f0;
        case 0x36c714u: goto label_36c714;
        case 0x36c728u: goto label_36c728;
        case 0x36c73cu: goto label_36c73c;
        case 0x36c750u: goto label_36c750;
        case 0x36c764u: goto label_36c764;
        case 0x36c778u: goto label_36c778;
        case 0x36c78cu: goto label_36c78c;
        case 0x36c7a0u: goto label_36c7a0;
        default: break;
    }

    ctx->pc = 0x36c540u;

    // 0x36c540: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x36c540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x36c544: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x36c544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x36c548: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x36c548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x36c54c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x36c54cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x36c550: 0x309000ff  andi        $s0, $a0, 0xFF
    ctx->pc = 0x36c550u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x36c554: 0x16000048  bnez        $s0, . + 4 + (0x48 << 2)
    ctx->pc = 0x36C554u;
    {
        const bool branch_taken_0x36c554 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x36c554) {
            ctx->pc = 0x36C678u;
            goto label_36c678;
        }
    }
    ctx->pc = 0x36C55Cu;
    // 0x36c55c: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36c55cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36c560: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x36c560u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x36c564: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x36c564u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x36c568: 0xc0a8edc  jal         func_2A3B70
    ctx->pc = 0x36C568u;
    SET_GPR_U32(ctx, 31, 0x36C570u);
    ctx->pc = 0x36C56Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C568u;
    // 0x36c56c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3B70u, 0x36C568u, 0x36C570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C570u;
label_36c570:
    // 0x36c570: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36c570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36c574: 0x24050045  addiu       $a1, $zero, 0x45
    ctx->pc = 0x36c574u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x36c578: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x36c578u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x36c57c: 0xc0a8edc  jal         func_2A3B70
    ctx->pc = 0x36C57Cu;
    SET_GPR_U32(ctx, 31, 0x36C584u);
    ctx->pc = 0x36C580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C57Cu;
    // 0x36c580: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3B70u, 0x36C57Cu, 0x36C584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C584u;
label_36c584:
    // 0x36c584: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36c584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36c588: 0x24050046  addiu       $a1, $zero, 0x46
    ctx->pc = 0x36c588u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x36c58c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x36c58cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x36c590: 0xc0a8edc  jal         func_2A3B70
    ctx->pc = 0x36C590u;
    SET_GPR_U32(ctx, 31, 0x36C598u);
    ctx->pc = 0x36C594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C590u;
    // 0x36c594: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3B70u, 0x36C590u, 0x36C598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C598u;
label_36c598:
    // 0x36c598: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36c598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36c59c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x36c59cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x36c5a0: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x36c5a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x36c5a4: 0xc0a8edc  jal         func_2A3B70
    ctx->pc = 0x36C5A4u;
    SET_GPR_U32(ctx, 31, 0x36C5ACu);
    ctx->pc = 0x36C5A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C5A4u;
    // 0x36c5a8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3B70u, 0x36C5A4u, 0x36C5ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C5ACu;
label_36c5ac:
    // 0x36c5ac: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x36c5acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_36c5b0:
    // 0x36c5b0: 0x8f838c00  lw          $v1, -0x7400($gp)
    ctx->pc = 0x36c5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36c5b4: 0x711021  addu        $v0, $v1, $s1
    ctx->pc = 0x36c5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x36c5b8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x36c5b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x36c5bc: 0x90451eac  lbu         $a1, 0x1EAC($v0)
    ctx->pc = 0x36c5bcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 7852)));
    // 0x36c5c0: 0xc0a8edc  jal         func_2A3B70
    ctx->pc = 0x36C5C0u;
    SET_GPR_U32(ctx, 31, 0x36C5C8u);
    ctx->pc = 0x36C5C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C5C0u;
    // 0x36c5c4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3B70u, 0x36C5C0u, 0x36C5C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C5C8u;
label_36c5c8:
    // 0x36c5c8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x36c5c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x36c5cc: 0x2a220042  slti        $v0, $s1, 0x42
    ctx->pc = 0x36c5ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)66) ? 1 : 0);
    // 0x36c5d0: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x36C5D0u;
    {
        const bool branch_taken_0x36c5d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x36c5d0) {
            ctx->pc = 0x36C5B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36c5b0;
        }
    }
    ctx->pc = 0x36C5D8u;
    // 0x36c5d8: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36c5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36c5dc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36c5dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36c5e0: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x36c5e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x36c5e4: 0xc0a8edc  jal         func_2A3B70
    ctx->pc = 0x36C5E4u;
    SET_GPR_U32(ctx, 31, 0x36C5ECu);
    ctx->pc = 0x36C5E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C5E4u;
    // 0x36c5e8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3B70u, 0x36C5E4u, 0x36C5ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C5ECu;
label_36c5ec:
    // 0x36c5ec: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36c5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36c5f0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x36c5f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x36c5f4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x36c5f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x36c5f8: 0xc0a8edc  jal         func_2A3B70
    ctx->pc = 0x36C5F8u;
    SET_GPR_U32(ctx, 31, 0x36C600u);
    ctx->pc = 0x36C5FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C5F8u;
    // 0x36c5fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3B70u, 0x36C5F8u, 0x36C600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C600u;
label_36c600:
    // 0x36c600: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36c600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36c604: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x36c604u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x36c608: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x36c608u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x36c60c: 0xc0a8edc  jal         func_2A3B70
    ctx->pc = 0x36C60Cu;
    SET_GPR_U32(ctx, 31, 0x36C614u);
    ctx->pc = 0x36C610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C60Cu;
    // 0x36c610: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3B70u, 0x36C60Cu, 0x36C614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C614u;
label_36c614:
    // 0x36c614: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36c614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36c618: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x36c618u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x36c61c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x36c61cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x36c620: 0xc0a8edc  jal         func_2A3B70
    ctx->pc = 0x36C620u;
    SET_GPR_U32(ctx, 31, 0x36C628u);
    ctx->pc = 0x36C624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C620u;
    // 0x36c624: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3B70u, 0x36C620u, 0x36C628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C628u;
label_36c628:
    // 0x36c628: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36c628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36c62c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x36c62cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x36c630: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x36c630u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x36c634: 0xc0a8edc  jal         func_2A3B70
    ctx->pc = 0x36C634u;
    SET_GPR_U32(ctx, 31, 0x36C63Cu);
    ctx->pc = 0x36C638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C634u;
    // 0x36c638: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3B70u, 0x36C634u, 0x36C63Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C63Cu;
label_36c63c:
    // 0x36c63c: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36c63cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36c640: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x36c640u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x36c644: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x36c644u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x36c648: 0xc0a8edc  jal         func_2A3B70
    ctx->pc = 0x36C648u;
    SET_GPR_U32(ctx, 31, 0x36C650u);
    ctx->pc = 0x36C64Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C648u;
    // 0x36c64c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3B70u, 0x36C648u, 0x36C650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C650u;
label_36c650:
    // 0x36c650: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36c650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36c654: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x36c654u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x36c658: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x36c658u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x36c65c: 0xc0a8edc  jal         func_2A3B70
    ctx->pc = 0x36C65Cu;
    SET_GPR_U32(ctx, 31, 0x36C664u);
    ctx->pc = 0x36C660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C65Cu;
    // 0x36c660: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3B70u, 0x36C65Cu, 0x36C664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C664u;
label_36c664:
    // 0x36c664: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36c664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36c668: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x36c668u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x36c66c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x36c66cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x36c670: 0xc0a8edc  jal         func_2A3B70
    ctx->pc = 0x36C670u;
    SET_GPR_U32(ctx, 31, 0x36C678u);
    ctx->pc = 0x36C674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C670u;
    // 0x36c674: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3B70u, 0x36C670u, 0x36C678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C678u;
label_36c678:
    // 0x36c678: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x36c678u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36c67c: 0x16030048  bne         $s0, $v1, . + 4 + (0x48 << 2)
    ctx->pc = 0x36C67Cu;
    {
        const bool branch_taken_0x36c67c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x36c67c) {
            ctx->pc = 0x36C7A0u;
            goto label_36c7a0;
        }
    }
    ctx->pc = 0x36C684u;
    // 0x36c684: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36c684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36c688: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x36c688u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x36c68c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x36c68cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x36c690: 0xc0a8edc  jal         func_2A3B70
    ctx->pc = 0x36C690u;
    SET_GPR_U32(ctx, 31, 0x36C698u);
    ctx->pc = 0x36C694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C690u;
    // 0x36c694: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3B70u, 0x36C690u, 0x36C698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C698u;
label_36c698:
    // 0x36c698: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36c698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36c69c: 0x24050045  addiu       $a1, $zero, 0x45
    ctx->pc = 0x36c69cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x36c6a0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x36c6a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x36c6a4: 0xc0a8edc  jal         func_2A3B70
    ctx->pc = 0x36C6A4u;
    SET_GPR_U32(ctx, 31, 0x36C6ACu);
    ctx->pc = 0x36C6A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C6A4u;
    // 0x36c6a8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3B70u, 0x36C6A4u, 0x36C6ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C6ACu;
label_36c6ac:
    // 0x36c6ac: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36c6acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36c6b0: 0x24050046  addiu       $a1, $zero, 0x46
    ctx->pc = 0x36c6b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x36c6b4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x36c6b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x36c6b8: 0xc0a8edc  jal         func_2A3B70
    ctx->pc = 0x36C6B8u;
    SET_GPR_U32(ctx, 31, 0x36C6C0u);
    ctx->pc = 0x36C6BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C6B8u;
    // 0x36c6bc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3B70u, 0x36C6B8u, 0x36C6C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C6C0u;
label_36c6c0:
    // 0x36c6c0: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36c6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36c6c4: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x36c6c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x36c6c8: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x36c6c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x36c6cc: 0xc0a8edc  jal         func_2A3B70
    ctx->pc = 0x36C6CCu;
    SET_GPR_U32(ctx, 31, 0x36C6D4u);
    ctx->pc = 0x36C6D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C6CCu;
    // 0x36c6d0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3B70u, 0x36C6CCu, 0x36C6D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C6D4u;
label_36c6d4:
    // 0x36c6d4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x36c6d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_36c6d8:
    // 0x36c6d8: 0x8f838c00  lw          $v1, -0x7400($gp)
    ctx->pc = 0x36c6d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36c6dc: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x36c6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x36c6e0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x36c6e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x36c6e4: 0x90451eac  lbu         $a1, 0x1EAC($v0)
    ctx->pc = 0x36c6e4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 7852)));
    // 0x36c6e8: 0xc0a8edc  jal         func_2A3B70
    ctx->pc = 0x36C6E8u;
    SET_GPR_U32(ctx, 31, 0x36C6F0u);
    ctx->pc = 0x36C6ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C6E8u;
    // 0x36c6ec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3B70u, 0x36C6E8u, 0x36C6F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C6F0u;
label_36c6f0:
    // 0x36c6f0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x36c6f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x36c6f4: 0x2a020042  slti        $v0, $s0, 0x42
    ctx->pc = 0x36c6f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)66) ? 1 : 0);
    // 0x36c6f8: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x36C6F8u;
    {
        const bool branch_taken_0x36c6f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x36c6f8) {
            ctx->pc = 0x36C6D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36c6d8;
        }
    }
    ctx->pc = 0x36C700u;
    // 0x36c700: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36c700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36c704: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36c704u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36c708: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x36c708u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x36c70c: 0xc0a8edc  jal         func_2A3B70
    ctx->pc = 0x36C70Cu;
    SET_GPR_U32(ctx, 31, 0x36C714u);
    ctx->pc = 0x36C710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C70Cu;
    // 0x36c710: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3B70u, 0x36C70Cu, 0x36C714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C714u;
label_36c714:
    // 0x36c714: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36c714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36c718: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x36c718u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x36c71c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x36c71cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x36c720: 0xc0a8edc  jal         func_2A3B70
    ctx->pc = 0x36C720u;
    SET_GPR_U32(ctx, 31, 0x36C728u);
    ctx->pc = 0x36C724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C720u;
    // 0x36c724: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3B70u, 0x36C720u, 0x36C728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C728u;
label_36c728:
    // 0x36c728: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36c728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36c72c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x36c72cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x36c730: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x36c730u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x36c734: 0xc0a8edc  jal         func_2A3B70
    ctx->pc = 0x36C734u;
    SET_GPR_U32(ctx, 31, 0x36C73Cu);
    ctx->pc = 0x36C738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C734u;
    // 0x36c738: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3B70u, 0x36C734u, 0x36C73Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C73Cu;
label_36c73c:
    // 0x36c73c: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36c73cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36c740: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x36c740u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x36c744: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x36c744u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x36c748: 0xc0a8edc  jal         func_2A3B70
    ctx->pc = 0x36C748u;
    SET_GPR_U32(ctx, 31, 0x36C750u);
    ctx->pc = 0x36C74Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C748u;
    // 0x36c74c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3B70u, 0x36C748u, 0x36C750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C750u;
label_36c750:
    // 0x36c750: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36c750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36c754: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x36c754u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x36c758: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x36c758u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x36c75c: 0xc0a8edc  jal         func_2A3B70
    ctx->pc = 0x36C75Cu;
    SET_GPR_U32(ctx, 31, 0x36C764u);
    ctx->pc = 0x36C760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C75Cu;
    // 0x36c760: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3B70u, 0x36C75Cu, 0x36C764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C764u;
label_36c764:
    // 0x36c764: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36c764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36c768: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x36c768u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x36c76c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x36c76cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x36c770: 0xc0a8edc  jal         func_2A3B70
    ctx->pc = 0x36C770u;
    SET_GPR_U32(ctx, 31, 0x36C778u);
    ctx->pc = 0x36C774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C770u;
    // 0x36c774: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3B70u, 0x36C770u, 0x36C778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C778u;
label_36c778:
    // 0x36c778: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36c778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36c77c: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x36c77cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x36c780: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x36c780u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x36c784: 0xc0a8edc  jal         func_2A3B70
    ctx->pc = 0x36C784u;
    SET_GPR_U32(ctx, 31, 0x36C78Cu);
    ctx->pc = 0x36C788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C784u;
    // 0x36c788: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3B70u, 0x36C784u, 0x36C78Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C78Cu;
label_36c78c:
    // 0x36c78c: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36c78cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36c790: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x36c790u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x36c794: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x36c794u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x36c798: 0xc0a8edc  jal         func_2A3B70
    ctx->pc = 0x36C798u;
    SET_GPR_U32(ctx, 31, 0x36C7A0u);
    ctx->pc = 0x36C79Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C798u;
    // 0x36c79c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3B70u, 0x36C798u, 0x36C7A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C7A0u;
label_36c7a0:
    // 0x36c7a0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x36c7a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36c7a4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x36c7a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36c7a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x36c7a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36c7ac: 0x3e00008  jr          $ra
    ctx->pc = 0x36C7ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36C7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C7ACu;
        // 0x36c7b0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36C7ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36C7B4u;
}
