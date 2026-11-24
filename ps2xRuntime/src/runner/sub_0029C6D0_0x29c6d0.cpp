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

// Function: sub_0029C6D0
// Address: 0x29c6d0 - 0x29c798
void sub_0029C6D0_0x29c6d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029C6D0_0x29c6d0");
#endif

    switch (ctx->pc) {
        case 0x29c6d0u: goto label_29c6d0;
        case 0x29c6d4u: goto label_29c6d4;
        case 0x29c6d8u: goto label_29c6d8;
        case 0x29c6dcu: goto label_29c6dc;
        case 0x29c6e0u: goto label_29c6e0;
        case 0x29c6e4u: goto label_29c6e4;
        case 0x29c6e8u: goto label_29c6e8;
        case 0x29c6ecu: goto label_29c6ec;
        case 0x29c6f0u: goto label_29c6f0;
        case 0x29c6f4u: goto label_29c6f4;
        case 0x29c6f8u: goto label_29c6f8;
        case 0x29c6fcu: goto label_29c6fc;
        case 0x29c700u: goto label_29c700;
        case 0x29c704u: goto label_29c704;
        case 0x29c708u: goto label_29c708;
        case 0x29c70cu: goto label_29c70c;
        case 0x29c710u: goto label_29c710;
        case 0x29c714u: goto label_29c714;
        case 0x29c718u: goto label_29c718;
        case 0x29c71cu: goto label_29c71c;
        case 0x29c720u: goto label_29c720;
        case 0x29c724u: goto label_29c724;
        case 0x29c728u: goto label_29c728;
        case 0x29c72cu: goto label_29c72c;
        case 0x29c730u: goto label_29c730;
        case 0x29c734u: goto label_29c734;
        case 0x29c738u: goto label_29c738;
        case 0x29c73cu: goto label_29c73c;
        case 0x29c740u: goto label_29c740;
        case 0x29c744u: goto label_29c744;
        case 0x29c748u: goto label_29c748;
        case 0x29c74cu: goto label_29c74c;
        case 0x29c750u: goto label_29c750;
        case 0x29c754u: goto label_29c754;
        case 0x29c758u: goto label_29c758;
        case 0x29c75cu: goto label_29c75c;
        case 0x29c760u: goto label_29c760;
        case 0x29c764u: goto label_29c764;
        case 0x29c768u: goto label_29c768;
        case 0x29c76cu: goto label_29c76c;
        case 0x29c770u: goto label_29c770;
        case 0x29c774u: goto label_29c774;
        case 0x29c778u: goto label_29c778;
        case 0x29c77cu: goto label_29c77c;
        case 0x29c780u: goto label_29c780;
        case 0x29c784u: goto label_29c784;
        case 0x29c788u: goto label_29c788;
        case 0x29c78cu: goto label_29c78c;
        case 0x29c790u: goto label_29c790;
        case 0x29c794u: goto label_29c794;
        default: break;
    }

    ctx->pc = 0x29c6d0u;

label_29c6d0:
    // 0x29c6d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x29c6d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_29c6d4:
    // 0x29c6d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x29c6d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_29c6d8:
    // 0x29c6d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29c6d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_29c6dc:
    // 0x29c6dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29c6dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_29c6e0:
    // 0x29c6e0: 0x9084050e  lbu         $a0, 0x50E($a0)
    ctx->pc = 0x29c6e0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1294)));
label_29c6e4:
    // 0x29c6e4: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
label_29c6e8:
    if (ctx->pc == 0x29C6E8u) {
        ctx->pc = 0x29C6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C6E4u;
        // 0x29c6e8: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29C6ECu;
        goto label_29c6ec;
    }
    ctx->pc = 0x29C6E4u;
    {
        const bool branch_taken_0x29c6e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C6E4u;
        // 0x29c6e8: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c6e4) {
            ctx->pc = 0x29C710u;
            goto label_29c710;
        }
    }
    ctx->pc = 0x29C6ECu;
label_29c6ec:
    // 0x29c6ec: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x29c6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_29c6f0:
    // 0x29c6f0: 0x8c22cec0  lw          $v0, -0x3140($at)
    ctx->pc = 0x29c6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954688)));
label_29c6f4:
    // 0x29c6f4: 0x831806  srlv        $v1, $v1, $a0
    ctx->pc = 0x29c6f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
label_29c6f8:
    // 0x29c6f8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x29c6f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_29c6fc:
    // 0x29c6fc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_29c700:
    if (ctx->pc == 0x29C700u) {
        ctx->pc = 0x29C704u;
        goto label_29c704;
    }
    ctx->pc = 0x29C6FCu;
    {
        const bool branch_taken_0x29c6fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29c6fc) {
            ctx->pc = 0x29C710u;
            goto label_29c710;
        }
    }
    ctx->pc = 0x29C704u;
label_29c704:
    // 0x29c704: 0x8e020148  lw          $v0, 0x148($s0)
    ctx->pc = 0x29c704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
label_29c708:
    // 0x29c708: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x29c708u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_29c70c:
    // 0x29c70c: 0xae020148  sw          $v0, 0x148($s0)
    ctx->pc = 0x29c70cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 2));
label_29c710:
    // 0x29c710: 0xc0a6d70  jal         func_29B5C0
label_29c714:
    if (ctx->pc == 0x29C714u) {
        ctx->pc = 0x29C714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C710u;
        // 0x29c714: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29C718u;
        goto label_29c718;
    }
    ctx->pc = 0x29C710u;
    SET_GPR_U32(ctx, 31, 0x29C718u);
    ctx->pc = 0x29C714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C710u;
    // 0x29c714: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29B5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29B5C0u, 0x29C710u, 0x29C718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C718u;
label_29c718:
    // 0x29c718: 0x8e020148  lw          $v0, 0x148($s0)
    ctx->pc = 0x29c718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
label_29c71c:
    // 0x29c71c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x29c71cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_29c720:
    // 0x29c720: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x29c720u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_29c724:
    // 0x29c724: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x29c724u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_29c728:
    // 0x29c728: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29c728u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_29c72c:
    // 0x29c72c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_29c730:
    if (ctx->pc == 0x29C730u) {
        ctx->pc = 0x29C730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C72Cu;
        // 0x29c730: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29C734u;
        goto label_29c734;
    }
    ctx->pc = 0x29C72Cu;
    {
        const bool branch_taken_0x29c72c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C72Cu;
        // 0x29c730: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c72c) {
            ctx->pc = 0x29C740u;
            goto label_29c740;
        }
    }
    ctx->pc = 0x29C734u;
label_29c734:
    // 0x29c734: 0xc0a7148  jal         func_29C520
label_29c738:
    if (ctx->pc == 0x29C738u) {
        ctx->pc = 0x29C73Cu;
        goto label_29c73c;
    }
    ctx->pc = 0x29C734u;
    SET_GPR_U32(ctx, 31, 0x29C73Cu);
    ctx->pc = 0x29C520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C520u, 0x29C734u, 0x29C73Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C73Cu;
label_29c73c:
    // 0x29c73c: 0x0  nop
    ctx->pc = 0x29c73cu;
    // NOP
label_29c740:
    // 0x29c740: 0xc0a6da0  jal         func_29B680
label_29c744:
    if (ctx->pc == 0x29C744u) {
        ctx->pc = 0x29C744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C740u;
        // 0x29c744: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29C748u;
        goto label_29c748;
    }
    ctx->pc = 0x29C740u;
    SET_GPR_U32(ctx, 31, 0x29C748u);
    ctx->pc = 0x29C744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C740u;
    // 0x29c744: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29B680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29B680u, 0x29C740u, 0x29C748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C748u;
label_29c748:
    // 0x29c748: 0x8e1904d4  lw          $t9, 0x4D4($s0)
    ctx->pc = 0x29c748u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1236)));
label_29c74c:
    // 0x29c74c: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x29c74cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_29c750:
    // 0x29c750: 0x320f809  jalr        $t9
label_29c754:
    if (ctx->pc == 0x29C754u) {
        ctx->pc = 0x29C754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C750u;
        // 0x29c754: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29C758u;
        goto label_29c758;
    }
    ctx->pc = 0x29C750u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x29C758u);
        ctx->pc = 0x29C754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C750u;
        // 0x29c754: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29C750u, 0x29C758u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29C758u;
label_29c758:
    // 0x29c758: 0xc09f918  jal         func_27E460
label_29c75c:
    if (ctx->pc == 0x29C75Cu) {
        ctx->pc = 0x29C75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C758u;
        // 0x29c75c: 0x260401c0  addiu       $a0, $s0, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 448));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29C760u;
        goto label_29c760;
    }
    ctx->pc = 0x29C758u;
    SET_GPR_U32(ctx, 31, 0x29C760u);
    ctx->pc = 0x29C75Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C758u;
    // 0x29c75c: 0x260401c0  addiu       $a0, $s0, 0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27E460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27E460u, 0x29C758u, 0x29C760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C760u;
label_29c760:
    // 0x29c760: 0x8e030148  lw          $v1, 0x148($s0)
    ctx->pc = 0x29c760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
label_29c764:
    // 0x29c764: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x29c764u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_29c768:
    // 0x29c768: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x29c768u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_29c76c:
    // 0x29c76c: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x29c76cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_29c770:
    // 0x29c770: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x29c770u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_29c774:
    // 0x29c774: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_29c778:
    if (ctx->pc == 0x29C778u) {
        ctx->pc = 0x29C778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C774u;
        // 0x29c778: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29C77Cu;
        goto label_29c77c;
    }
    ctx->pc = 0x29C774u;
    {
        const bool branch_taken_0x29c774 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C774u;
        // 0x29c778: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c774) {
            ctx->pc = 0x29C788u;
            goto label_29c788;
        }
    }
    ctx->pc = 0x29C77Cu;
label_29c77c:
    // 0x29c77c: 0xc0a6e60  jal         func_29B980
label_29c780:
    if (ctx->pc == 0x29C780u) {
        ctx->pc = 0x29C784u;
        goto label_29c784;
    }
    ctx->pc = 0x29C77Cu;
    SET_GPR_U32(ctx, 31, 0x29C784u);
    ctx->pc = 0x29B980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29B980u, 0x29C77Cu, 0x29C784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C784u;
label_29c784:
    // 0x29c784: 0x0  nop
    ctx->pc = 0x29c784u;
    // NOP
label_29c788:
    // 0x29c788: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x29c788u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_29c78c:
    // 0x29c78c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29c78cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_29c790:
    // 0x29c790: 0x3e00008  jr          $ra
label_29c794:
    if (ctx->pc == 0x29C794u) {
        ctx->pc = 0x29C794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C790u;
        // 0x29c794: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29C798u;
        goto label_fallthrough_0x29c790;
    }
    ctx->pc = 0x29C790u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29C794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C790u;
        // 0x29c794: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29C790u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x29c790:
    ctx->pc = 0x29C798u;
}
