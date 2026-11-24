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

// Function: sub_0014B720
// Address: 0x14b720 - 0x14b95c
void sub_0014B720_0x14b720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014B720_0x14b720");
#endif

    switch (ctx->pc) {
        case 0x14b754u: goto label_14b754;
        case 0x14b75cu: goto label_14b75c;
        case 0x14b768u: goto label_14b768;
        case 0x14b770u: goto label_14b770;
        case 0x14b778u: goto label_14b778;
        case 0x14b780u: goto label_14b780;
        case 0x14b7a4u: goto label_14b7a4;
        case 0x14b7acu: goto label_14b7ac;
        case 0x14b7b8u: goto label_14b7b8;
        case 0x14b7c0u: goto label_14b7c0;
        case 0x14b7c8u: goto label_14b7c8;
        case 0x14b7d0u: goto label_14b7d0;
        case 0x14b820u: goto label_14b820;
        case 0x14b828u: goto label_14b828;
        case 0x14b830u: goto label_14b830;
        case 0x14b838u: goto label_14b838;
        case 0x14b840u: goto label_14b840;
        case 0x14b848u: goto label_14b848;
        case 0x14b86cu: goto label_14b86c;
        case 0x14b874u: goto label_14b874;
        case 0x14b880u: goto label_14b880;
        case 0x14b888u: goto label_14b888;
        case 0x14b890u: goto label_14b890;
        case 0x14b898u: goto label_14b898;
        case 0x14b8bcu: goto label_14b8bc;
        case 0x14b8c4u: goto label_14b8c4;
        case 0x14b8d0u: goto label_14b8d0;
        case 0x14b8d8u: goto label_14b8d8;
        case 0x14b8e0u: goto label_14b8e0;
        case 0x14b8e8u: goto label_14b8e8;
        case 0x14b8f8u: goto label_14b8f8;
        case 0x14b914u: goto label_14b914;
        case 0x14b920u: goto label_14b920;
        case 0x14b928u: goto label_14b928;
        case 0x14b930u: goto label_14b930;
        case 0x14b938u: goto label_14b938;
        case 0x14b940u: goto label_14b940;
        default: break;
    }

    ctx->pc = 0x14b720u;

    // 0x14b720: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x14b720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x14b724: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14b724u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x14b728: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x14b728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x14b72c: 0x3c060015  lui         $a2, 0x15
    ctx->pc = 0x14b72cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)21 << 16));
    // 0x14b730: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14b730u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14b734: 0x2442a040  addiu       $v0, $v0, -0x5FC0
    ctx->pc = 0x14b734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942784));
    // 0x14b738: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x14b738u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x14b73c: 0x3c070015  lui         $a3, 0x15
    ctx->pc = 0x14b73cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)21 << 16));
    // 0x14b740: 0x24050027  addiu       $a1, $zero, 0x27
    ctx->pc = 0x14b740u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x14b744: 0x278485b0  addiu       $a0, $gp, -0x7A50
    ctx->pc = 0x14b744u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    // 0x14b748: 0x24c6b980  addiu       $a2, $a2, -0x4680
    ctx->pc = 0x14b748u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949248));
    // 0x14b74c: 0xc054d34  jal         func_1534D0
    ctx->pc = 0x14B74Cu;
    SET_GPR_U32(ctx, 31, 0x14B754u);
    ctx->pc = 0x14B750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B74Cu;
    // 0x14b750: 0x24e7b960  addiu       $a3, $a3, -0x46A0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294949216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1534D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1534D0u, 0x14B74Cu, 0x14B754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B754u;
label_14b754:
    // 0x14b754: 0xc0554f4  jal         func_1553D0
    ctx->pc = 0x14B754u;
    SET_GPR_U32(ctx, 31, 0x14B75Cu);
    ctx->pc = 0x14B758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B754u;
    // 0x14b758: 0x278485b0  addiu       $a0, $gp, -0x7A50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1553D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1553D0u, 0x14B754u, 0x14B75Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B75Cu;
label_14b75c:
    // 0x14b75c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x14B75Cu;
    {
        const bool branch_taken_0x14b75c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14b75c) {
            ctx->pc = 0x14B788u;
            goto label_14b788;
        }
    }
    ctx->pc = 0x14B764u;
    // 0x14b764: 0x0  nop
    ctx->pc = 0x14b764u;
    // NOP
label_14b768:
    // 0x14b768: 0xc0551e8  jal         func_1547A0
    ctx->pc = 0x14B768u;
    SET_GPR_U32(ctx, 31, 0x14B770u);
    ctx->pc = 0x14B76Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B768u;
    // 0x14b76c: 0x278485b0  addiu       $a0, $gp, -0x7A50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1547A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1547A0u, 0x14B768u, 0x14B770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B770u;
label_14b770:
    // 0x14b770: 0xc040d08  jal         func_103420
    ctx->pc = 0x14B770u;
    SET_GPR_U32(ctx, 31, 0x14B778u);
    ctx->pc = 0x14B774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B770u;
    // 0x14b774: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x103420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103420u, 0x14B770u, 0x14B778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B778u;
label_14b778:
    // 0x14b778: 0xc0554f4  jal         func_1553D0
    ctx->pc = 0x14B778u;
    SET_GPR_U32(ctx, 31, 0x14B780u);
    ctx->pc = 0x14B77Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B778u;
    // 0x14b77c: 0x278485b0  addiu       $a0, $gp, -0x7A50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1553D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1553D0u, 0x14B778u, 0x14B780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B780u;
label_14b780:
    // 0x14b780: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x14B780u;
    {
        const bool branch_taken_0x14b780 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14b780) {
            ctx->pc = 0x14B768u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14b768;
        }
    }
    ctx->pc = 0x14B788u;
label_14b788:
    // 0x14b788: 0x3c060015  lui         $a2, 0x15
    ctx->pc = 0x14b788u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)21 << 16));
    // 0x14b78c: 0x3c070015  lui         $a3, 0x15
    ctx->pc = 0x14b78cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)21 << 16));
    // 0x14b790: 0x278485b0  addiu       $a0, $gp, -0x7A50
    ctx->pc = 0x14b790u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    // 0x14b794: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x14b794u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x14b798: 0x24c6b980  addiu       $a2, $a2, -0x4680
    ctx->pc = 0x14b798u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949248));
    // 0x14b79c: 0xc054d34  jal         func_1534D0
    ctx->pc = 0x14B79Cu;
    SET_GPR_U32(ctx, 31, 0x14B7A4u);
    ctx->pc = 0x14B7A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B79Cu;
    // 0x14b7a0: 0x24e7b960  addiu       $a3, $a3, -0x46A0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294949216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1534D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1534D0u, 0x14B79Cu, 0x14B7A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B7A4u;
label_14b7a4:
    // 0x14b7a4: 0xc0554f4  jal         func_1553D0
    ctx->pc = 0x14B7A4u;
    SET_GPR_U32(ctx, 31, 0x14B7ACu);
    ctx->pc = 0x14B7A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B7A4u;
    // 0x14b7a8: 0x278485b0  addiu       $a0, $gp, -0x7A50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1553D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1553D0u, 0x14B7A4u, 0x14B7ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B7ACu;
label_14b7ac:
    // 0x14b7ac: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x14B7ACu;
    {
        const bool branch_taken_0x14b7ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14b7ac) {
            ctx->pc = 0x14B7D8u;
            goto label_14b7d8;
        }
    }
    ctx->pc = 0x14B7B4u;
    // 0x14b7b4: 0x0  nop
    ctx->pc = 0x14b7b4u;
    // NOP
label_14b7b8:
    // 0x14b7b8: 0xc0551e8  jal         func_1547A0
    ctx->pc = 0x14B7B8u;
    SET_GPR_U32(ctx, 31, 0x14B7C0u);
    ctx->pc = 0x14B7BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B7B8u;
    // 0x14b7bc: 0x278485b0  addiu       $a0, $gp, -0x7A50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1547A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1547A0u, 0x14B7B8u, 0x14B7C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B7C0u;
label_14b7c0:
    // 0x14b7c0: 0xc040d08  jal         func_103420
    ctx->pc = 0x14B7C0u;
    SET_GPR_U32(ctx, 31, 0x14B7C8u);
    ctx->pc = 0x14B7C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B7C0u;
    // 0x14b7c4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x103420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103420u, 0x14B7C0u, 0x14B7C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B7C8u;
label_14b7c8:
    // 0x14b7c8: 0xc0554f4  jal         func_1553D0
    ctx->pc = 0x14B7C8u;
    SET_GPR_U32(ctx, 31, 0x14B7D0u);
    ctx->pc = 0x14B7CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B7C8u;
    // 0x14b7cc: 0x278485b0  addiu       $a0, $gp, -0x7A50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1553D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1553D0u, 0x14B7C8u, 0x14B7D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B7D0u;
label_14b7d0:
    // 0x14b7d0: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x14B7D0u;
    {
        const bool branch_taken_0x14b7d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14b7d0) {
            ctx->pc = 0x14B7B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14b7b8;
        }
    }
    ctx->pc = 0x14B7D8u;
label_14b7d8:
    // 0x14b7d8: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x14b7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x14b7dc: 0x2442ac30  addiu       $v0, $v0, -0x53D0
    ctx->pc = 0x14b7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945840));
    // 0x14b7e0: 0x3c060015  lui         $a2, 0x15
    ctx->pc = 0x14b7e0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)21 << 16));
    // 0x14b7e4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x14b7e4u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x40AC30u));
    // 0x14b7e8: 0x3c070015  lui         $a3, 0x15
    ctx->pc = 0x14b7e8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)21 << 16));
    // 0x14b7ec: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x14b7ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x14b7f0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x14b7f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x14b7f4: 0x278485b0  addiu       $a0, $gp, -0x7A50
    ctx->pc = 0x14b7f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    // 0x14b7f8: 0x24c6b980  addiu       $a2, $a2, -0x4680
    ctx->pc = 0x14b7f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949248));
    // 0x14b7fc: 0x78420010  lq          $v0, 0x10($v0)
    ctx->pc = 0x14b7fcu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x40AC40u));
    // 0x14b800: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x14b800u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x14b804: 0x7ca20010  sq          $v0, 0x10($a1)
    ctx->pc = 0x14b804u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), GPR_VEC(ctx, 2));
    // 0x14b808: 0x9022fc8d  lbu         $v0, -0x373($at)
    ctx->pc = 0x14b808u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x81FC8Du));
    // 0x14b80c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x14b80cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x14b810: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x14b810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x14b814: 0x8c45001c  lw          $a1, 0x1C($v0)
    ctx->pc = 0x14b814u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x14b818: 0xc054d34  jal         func_1534D0
    ctx->pc = 0x14B818u;
    SET_GPR_U32(ctx, 31, 0x14B820u);
    ctx->pc = 0x14B81Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B818u;
    // 0x14b81c: 0x24e7b960  addiu       $a3, $a3, -0x46A0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294949216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1534D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1534D0u, 0x14B818u, 0x14B820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B820u;
label_14b820:
    // 0x14b820: 0xc0554f4  jal         func_1553D0
    ctx->pc = 0x14B820u;
    SET_GPR_U32(ctx, 31, 0x14B828u);
    ctx->pc = 0x14B824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B820u;
    // 0x14b824: 0x278485b0  addiu       $a0, $gp, -0x7A50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1553D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1553D0u, 0x14B820u, 0x14B828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B828u;
label_14b828:
    // 0x14b828: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x14B828u;
    {
        const bool branch_taken_0x14b828 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14b828) {
            ctx->pc = 0x14B850u;
            goto label_14b850;
        }
    }
    ctx->pc = 0x14B830u;
label_14b830:
    // 0x14b830: 0xc0551e8  jal         func_1547A0
    ctx->pc = 0x14B830u;
    SET_GPR_U32(ctx, 31, 0x14B838u);
    ctx->pc = 0x14B834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B830u;
    // 0x14b834: 0x278485b0  addiu       $a0, $gp, -0x7A50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1547A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1547A0u, 0x14B830u, 0x14B838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B838u;
label_14b838:
    // 0x14b838: 0xc040d08  jal         func_103420
    ctx->pc = 0x14B838u;
    SET_GPR_U32(ctx, 31, 0x14B840u);
    ctx->pc = 0x14B83Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B838u;
    // 0x14b83c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x103420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103420u, 0x14B838u, 0x14B840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B840u;
label_14b840:
    // 0x14b840: 0xc0554f4  jal         func_1553D0
    ctx->pc = 0x14B840u;
    SET_GPR_U32(ctx, 31, 0x14B848u);
    ctx->pc = 0x14B844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B840u;
    // 0x14b844: 0x278485b0  addiu       $a0, $gp, -0x7A50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1553D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1553D0u, 0x14B840u, 0x14B848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B848u;
label_14b848:
    // 0x14b848: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x14B848u;
    {
        const bool branch_taken_0x14b848 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14b848) {
            ctx->pc = 0x14B830u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14b830;
        }
    }
    ctx->pc = 0x14B850u;
label_14b850:
    // 0x14b850: 0x3c060015  lui         $a2, 0x15
    ctx->pc = 0x14b850u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)21 << 16));
    // 0x14b854: 0x3c070015  lui         $a3, 0x15
    ctx->pc = 0x14b854u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)21 << 16));
    // 0x14b858: 0x278485b0  addiu       $a0, $gp, -0x7A50
    ctx->pc = 0x14b858u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    // 0x14b85c: 0x24050e77  addiu       $a1, $zero, 0xE77
    ctx->pc = 0x14b85cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3703));
    // 0x14b860: 0x24c6b980  addiu       $a2, $a2, -0x4680
    ctx->pc = 0x14b860u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949248));
    // 0x14b864: 0xc054d34  jal         func_1534D0
    ctx->pc = 0x14B864u;
    SET_GPR_U32(ctx, 31, 0x14B86Cu);
    ctx->pc = 0x14B868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B864u;
    // 0x14b868: 0x24e7b960  addiu       $a3, $a3, -0x46A0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294949216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1534D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1534D0u, 0x14B864u, 0x14B86Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B86Cu;
label_14b86c:
    // 0x14b86c: 0xc0554f4  jal         func_1553D0
    ctx->pc = 0x14B86Cu;
    SET_GPR_U32(ctx, 31, 0x14B874u);
    ctx->pc = 0x14B870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B86Cu;
    // 0x14b870: 0x278485b0  addiu       $a0, $gp, -0x7A50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1553D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1553D0u, 0x14B86Cu, 0x14B874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B874u;
label_14b874:
    // 0x14b874: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x14B874u;
    {
        const bool branch_taken_0x14b874 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14b874) {
            ctx->pc = 0x14B8A0u;
            goto label_14b8a0;
        }
    }
    ctx->pc = 0x14B87Cu;
    // 0x14b87c: 0x0  nop
    ctx->pc = 0x14b87cu;
    // NOP
label_14b880:
    // 0x14b880: 0xc0551e8  jal         func_1547A0
    ctx->pc = 0x14B880u;
    SET_GPR_U32(ctx, 31, 0x14B888u);
    ctx->pc = 0x14B884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B880u;
    // 0x14b884: 0x278485b0  addiu       $a0, $gp, -0x7A50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1547A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1547A0u, 0x14B880u, 0x14B888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B888u;
label_14b888:
    // 0x14b888: 0xc040d08  jal         func_103420
    ctx->pc = 0x14B888u;
    SET_GPR_U32(ctx, 31, 0x14B890u);
    ctx->pc = 0x14B88Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B888u;
    // 0x14b88c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x103420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103420u, 0x14B888u, 0x14B890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B890u;
label_14b890:
    // 0x14b890: 0xc0554f4  jal         func_1553D0
    ctx->pc = 0x14B890u;
    SET_GPR_U32(ctx, 31, 0x14B898u);
    ctx->pc = 0x14B894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B890u;
    // 0x14b894: 0x278485b0  addiu       $a0, $gp, -0x7A50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1553D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1553D0u, 0x14B890u, 0x14B898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B898u;
label_14b898:
    // 0x14b898: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x14B898u;
    {
        const bool branch_taken_0x14b898 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14b898) {
            ctx->pc = 0x14B880u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14b880;
        }
    }
    ctx->pc = 0x14B8A0u;
label_14b8a0:
    // 0x14b8a0: 0x3c060015  lui         $a2, 0x15
    ctx->pc = 0x14b8a0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)21 << 16));
    // 0x14b8a4: 0x3c070015  lui         $a3, 0x15
    ctx->pc = 0x14b8a4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)21 << 16));
    // 0x14b8a8: 0x278485b0  addiu       $a0, $gp, -0x7A50
    ctx->pc = 0x14b8a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    // 0x14b8ac: 0x24050980  addiu       $a1, $zero, 0x980
    ctx->pc = 0x14b8acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2432));
    // 0x14b8b0: 0x24c6b980  addiu       $a2, $a2, -0x4680
    ctx->pc = 0x14b8b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949248));
    // 0x14b8b4: 0xc054d34  jal         func_1534D0
    ctx->pc = 0x14B8B4u;
    SET_GPR_U32(ctx, 31, 0x14B8BCu);
    ctx->pc = 0x14B8B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B8B4u;
    // 0x14b8b8: 0x24e7b960  addiu       $a3, $a3, -0x46A0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294949216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1534D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1534D0u, 0x14B8B4u, 0x14B8BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B8BCu;
label_14b8bc:
    // 0x14b8bc: 0xc0554f4  jal         func_1553D0
    ctx->pc = 0x14B8BCu;
    SET_GPR_U32(ctx, 31, 0x14B8C4u);
    ctx->pc = 0x14B8C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B8BCu;
    // 0x14b8c0: 0x278485b0  addiu       $a0, $gp, -0x7A50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1553D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1553D0u, 0x14B8BCu, 0x14B8C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B8C4u;
label_14b8c4:
    // 0x14b8c4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x14B8C4u;
    {
        const bool branch_taken_0x14b8c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14b8c4) {
            ctx->pc = 0x14B8F0u;
            goto label_14b8f0;
        }
    }
    ctx->pc = 0x14B8CCu;
    // 0x14b8cc: 0x0  nop
    ctx->pc = 0x14b8ccu;
    // NOP
label_14b8d0:
    // 0x14b8d0: 0xc0551e8  jal         func_1547A0
    ctx->pc = 0x14B8D0u;
    SET_GPR_U32(ctx, 31, 0x14B8D8u);
    ctx->pc = 0x14B8D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B8D0u;
    // 0x14b8d4: 0x278485b0  addiu       $a0, $gp, -0x7A50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1547A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1547A0u, 0x14B8D0u, 0x14B8D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B8D8u;
label_14b8d8:
    // 0x14b8d8: 0xc040d08  jal         func_103420
    ctx->pc = 0x14B8D8u;
    SET_GPR_U32(ctx, 31, 0x14B8E0u);
    ctx->pc = 0x14B8DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B8D8u;
    // 0x14b8dc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x103420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103420u, 0x14B8D8u, 0x14B8E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B8E0u;
label_14b8e0:
    // 0x14b8e0: 0xc0554f4  jal         func_1553D0
    ctx->pc = 0x14B8E0u;
    SET_GPR_U32(ctx, 31, 0x14B8E8u);
    ctx->pc = 0x14B8E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B8E0u;
    // 0x14b8e4: 0x278485b0  addiu       $a0, $gp, -0x7A50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1553D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1553D0u, 0x14B8E0u, 0x14B8E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B8E8u;
label_14b8e8:
    // 0x14b8e8: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x14B8E8u;
    {
        const bool branch_taken_0x14b8e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14b8e8) {
            ctx->pc = 0x14B8D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14b8d0;
        }
    }
    ctx->pc = 0x14B8F0u;
label_14b8f0:
    // 0x14b8f0: 0xc0e0924  jal         func_382490
    ctx->pc = 0x14B8F0u;
    SET_GPR_U32(ctx, 31, 0x14B8F8u);
    ctx->pc = 0x14B8F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B8F0u;
    // 0x14b8f4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x382490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x382490u, 0x14B8F0u, 0x14B8F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B8F8u;
label_14b8f8:
    // 0x14b8f8: 0x3c060015  lui         $a2, 0x15
    ctx->pc = 0x14b8f8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)21 << 16));
    // 0x14b8fc: 0x3c070015  lui         $a3, 0x15
    ctx->pc = 0x14b8fcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)21 << 16));
    // 0x14b900: 0x278485b0  addiu       $a0, $gp, -0x7A50
    ctx->pc = 0x14b900u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    // 0x14b904: 0x2405002a  addiu       $a1, $zero, 0x2A
    ctx->pc = 0x14b904u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x14b908: 0x24c6b980  addiu       $a2, $a2, -0x4680
    ctx->pc = 0x14b908u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949248));
    // 0x14b90c: 0xc054d34  jal         func_1534D0
    ctx->pc = 0x14B90Cu;
    SET_GPR_U32(ctx, 31, 0x14B914u);
    ctx->pc = 0x14B910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B90Cu;
    // 0x14b910: 0x24e7b960  addiu       $a3, $a3, -0x46A0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294949216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1534D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1534D0u, 0x14B90Cu, 0x14B914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B914u;
label_14b914:
    // 0x14b914: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x14b914u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b918: 0xc0554f4  jal         func_1553D0
    ctx->pc = 0x14B918u;
    SET_GPR_U32(ctx, 31, 0x14B920u);
    ctx->pc = 0x14B91Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B918u;
    // 0x14b91c: 0x278485b0  addiu       $a0, $gp, -0x7A50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1553D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1553D0u, 0x14B918u, 0x14B920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B920u;
label_14b920:
    // 0x14b920: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x14B920u;
    {
        const bool branch_taken_0x14b920 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14b920) {
            ctx->pc = 0x14B948u;
            goto label_14b948;
        }
    }
    ctx->pc = 0x14B928u;
label_14b928:
    // 0x14b928: 0xc0551e8  jal         func_1547A0
    ctx->pc = 0x14B928u;
    SET_GPR_U32(ctx, 31, 0x14B930u);
    ctx->pc = 0x14B92Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B928u;
    // 0x14b92c: 0x278485b0  addiu       $a0, $gp, -0x7A50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1547A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1547A0u, 0x14B928u, 0x14B930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B930u;
label_14b930:
    // 0x14b930: 0xc040d08  jal         func_103420
    ctx->pc = 0x14B930u;
    SET_GPR_U32(ctx, 31, 0x14B938u);
    ctx->pc = 0x14B934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B930u;
    // 0x14b934: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x103420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103420u, 0x14B930u, 0x14B938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B938u;
label_14b938:
    // 0x14b938: 0xc0554f4  jal         func_1553D0
    ctx->pc = 0x14B938u;
    SET_GPR_U32(ctx, 31, 0x14B940u);
    ctx->pc = 0x14B93Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B938u;
    // 0x14b93c: 0x278485b0  addiu       $a0, $gp, -0x7A50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1553D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1553D0u, 0x14B938u, 0x14B940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B940u;
label_14b940:
    // 0x14b940: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x14B940u;
    {
        const bool branch_taken_0x14b940 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14b940) {
            ctx->pc = 0x14B928u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14b928;
        }
    }
    ctx->pc = 0x14B948u;
label_14b948:
    // 0x14b948: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x14b948u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b94c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x14b94cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14b950: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14b950u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14b954: 0x3e00008  jr          $ra
    ctx->pc = 0x14B954u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14B958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B954u;
        // 0x14b958: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14B954u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14B95Cu;
}
