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

// Function: sub_00234818
// Address: 0x234818 - 0x234940
void sub_00234818_0x234818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00234818_0x234818");
#endif

    switch (ctx->pc) {
        case 0x234818u: goto label_234818;
        case 0x23481cu: goto label_23481c;
        case 0x234820u: goto label_234820;
        case 0x234824u: goto label_234824;
        case 0x234828u: goto label_234828;
        case 0x23482cu: goto label_23482c;
        case 0x234830u: goto label_234830;
        case 0x234834u: goto label_234834;
        case 0x234838u: goto label_234838;
        case 0x23483cu: goto label_23483c;
        case 0x234840u: goto label_234840;
        case 0x234844u: goto label_234844;
        case 0x234848u: goto label_234848;
        case 0x23484cu: goto label_23484c;
        case 0x234850u: goto label_234850;
        case 0x234854u: goto label_234854;
        case 0x234858u: goto label_234858;
        case 0x23485cu: goto label_23485c;
        case 0x234860u: goto label_234860;
        case 0x234864u: goto label_234864;
        case 0x234868u: goto label_234868;
        case 0x23486cu: goto label_23486c;
        case 0x234870u: goto label_234870;
        case 0x234874u: goto label_234874;
        case 0x234878u: goto label_234878;
        case 0x23487cu: goto label_23487c;
        case 0x234880u: goto label_234880;
        case 0x234884u: goto label_234884;
        case 0x234888u: goto label_234888;
        case 0x23488cu: goto label_23488c;
        case 0x234890u: goto label_234890;
        case 0x234894u: goto label_234894;
        case 0x234898u: goto label_234898;
        case 0x23489cu: goto label_23489c;
        case 0x2348a0u: goto label_2348a0;
        case 0x2348a4u: goto label_2348a4;
        case 0x2348a8u: goto label_2348a8;
        case 0x2348acu: goto label_2348ac;
        case 0x2348b0u: goto label_2348b0;
        case 0x2348b4u: goto label_2348b4;
        case 0x2348b8u: goto label_2348b8;
        case 0x2348bcu: goto label_2348bc;
        case 0x2348c0u: goto label_2348c0;
        case 0x2348c4u: goto label_2348c4;
        case 0x2348c8u: goto label_2348c8;
        case 0x2348ccu: goto label_2348cc;
        case 0x2348d0u: goto label_2348d0;
        case 0x2348d4u: goto label_2348d4;
        case 0x2348d8u: goto label_2348d8;
        case 0x2348dcu: goto label_2348dc;
        case 0x2348e0u: goto label_2348e0;
        case 0x2348e4u: goto label_2348e4;
        case 0x2348e8u: goto label_2348e8;
        case 0x2348ecu: goto label_2348ec;
        case 0x2348f0u: goto label_2348f0;
        case 0x2348f4u: goto label_2348f4;
        case 0x2348f8u: goto label_2348f8;
        case 0x2348fcu: goto label_2348fc;
        case 0x234900u: goto label_234900;
        case 0x234904u: goto label_234904;
        case 0x234908u: goto label_234908;
        case 0x23490cu: goto label_23490c;
        case 0x234910u: goto label_234910;
        case 0x234914u: goto label_234914;
        case 0x234918u: goto label_234918;
        case 0x23491cu: goto label_23491c;
        case 0x234920u: goto label_234920;
        case 0x234924u: goto label_234924;
        case 0x234928u: goto label_234928;
        case 0x23492cu: goto label_23492c;
        case 0x234930u: goto label_234930;
        case 0x234934u: goto label_234934;
        case 0x234938u: goto label_234938;
        case 0x23493cu: goto label_23493c;
        default: break;
    }

    ctx->pc = 0x234818u;

label_234818:
    // 0x234818: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x234818u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_23481c:
    // 0x23481c: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x23481cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
label_234820:
    // 0x234820: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x234820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_234824:
    // 0x234824: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x234824u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_234828:
    // 0x234828: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x234828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_23482c:
    // 0x23482c: 0x3c12004c  lui         $s2, 0x4C
    ctx->pc = 0x23482cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)76 << 16));
label_234830:
    // 0x234830: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x234830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_234834:
    // 0x234834: 0x2442ef80  addiu       $v0, $v0, -0x1080
    ctx->pc = 0x234834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963072));
label_234838:
    // 0x234838: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x234838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_23483c:
    // 0x23483c: 0x2645fd2c  addiu       $a1, $s2, -0x2D4
    ctx->pc = 0x23483cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294966572));
label_234840:
    // 0x234840: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x234840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_234844:
    // 0x234844: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x234844u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_234848:
    // 0x234848: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x234848u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_23484c:
    // 0x23484c: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x23484cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_234850:
    // 0x234850: 0x1480002d  bnez        $a0, . + 4 + (0x2D << 2)
label_234854:
    if (ctx->pc == 0x234854u) {
        ctx->pc = 0x234854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234850u;
        // 0x234854: 0x3c02004c  lui         $v0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234858u;
        goto label_234858;
    }
    ctx->pc = 0x234850u;
    {
        const bool branch_taken_0x234850 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x234854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234850u;
        // 0x234854: 0x3c02004c  lui         $v0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234850) {
            ctx->pc = 0x234908u;
            goto label_234908;
        }
    }
    ctx->pc = 0x234858u;
label_234858:
    // 0x234858: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x234858u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
label_23485c:
    // 0x23485c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x23485cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_234860:
    // 0x234860: 0x8c43fc14  lw          $v1, -0x3EC($v0)
    ctx->pc = 0x234860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294966292)));
label_234864:
    // 0x234864: 0xacb00000  sw          $s0, 0x0($a1)
    ctx->pc = 0x234864u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 16));
label_234868:
    // 0x234868: 0x18600022  blez        $v1, . + 4 + (0x22 << 2)
label_23486c:
    if (ctx->pc == 0x23486Cu) {
        ctx->pc = 0x23486Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234868u;
        // 0x23486c: 0x3c02004c  lui         $v0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234870u;
        goto label_234870;
    }
    ctx->pc = 0x234868u;
    {
        const bool branch_taken_0x234868 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x23486Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234868u;
        // 0x23486c: 0x3c02004c  lui         $v0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234868) {
            ctx->pc = 0x2348F4u;
            goto label_2348f4;
        }
    }
    ctx->pc = 0x234870u;
label_234870:
    // 0x234870: 0x2442fc58  addiu       $v0, $v0, -0x3A8
    ctx->pc = 0x234870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966360));
label_234874:
    // 0x234874: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x234874u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_234878:
    // 0x234878: 0x10700004  beq         $v1, $s0, . + 4 + (0x4 << 2)
label_23487c:
    if (ctx->pc == 0x23487Cu) {
        ctx->pc = 0x23487Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234878u;
        // 0x23487c: 0x3c02004c  lui         $v0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234880u;
        goto label_234880;
    }
    ctx->pc = 0x234878u;
    {
        const bool branch_taken_0x234878 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        ctx->pc = 0x23487Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234878u;
        // 0x23487c: 0x3c02004c  lui         $v0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234878) {
            ctx->pc = 0x23488Cu;
            goto label_23488c;
        }
    }
    ctx->pc = 0x234880u;
label_234880:
    // 0x234880: 0x2442fcb0  addiu       $v0, $v0, -0x350
    ctx->pc = 0x234880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966448));
label_234884:
    // 0x234884: 0xc08cea4  jal         func_233A90
label_234888:
    if (ctx->pc == 0x234888u) {
        ctx->pc = 0x234888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234884u;
        // 0x234888: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23488Cu;
        goto label_23488c;
    }
    ctx->pc = 0x234884u;
    SET_GPR_U32(ctx, 31, 0x23488Cu);
    ctx->pc = 0x234888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234884u;
    // 0x234888: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x233A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233A90u, 0x234884u, 0x23488Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23488Cu;
label_23488c:
    // 0x23488c: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x23488cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
label_234890:
    // 0x234890: 0x2442fc60  addiu       $v0, $v0, -0x3A0
    ctx->pc = 0x234890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966368));
label_234894:
    // 0x234894: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x234894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_234898:
    // 0x234898: 0x10700004  beq         $v1, $s0, . + 4 + (0x4 << 2)
label_23489c:
    if (ctx->pc == 0x23489Cu) {
        ctx->pc = 0x23489Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234898u;
        // 0x23489c: 0x3c02004c  lui         $v0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2348A0u;
        goto label_2348a0;
    }
    ctx->pc = 0x234898u;
    {
        const bool branch_taken_0x234898 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        ctx->pc = 0x23489Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234898u;
        // 0x23489c: 0x3c02004c  lui         $v0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234898) {
            ctx->pc = 0x2348ACu;
            goto label_2348ac;
        }
    }
    ctx->pc = 0x2348A0u;
label_2348a0:
    // 0x2348a0: 0x2442fcb4  addiu       $v0, $v0, -0x34C
    ctx->pc = 0x2348a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966452));
label_2348a4:
    // 0x2348a4: 0xc08cea4  jal         func_233A90
label_2348a8:
    if (ctx->pc == 0x2348A8u) {
        ctx->pc = 0x2348A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2348A4u;
        // 0x2348a8: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2348ACu;
        goto label_2348ac;
    }
    ctx->pc = 0x2348A4u;
    SET_GPR_U32(ctx, 31, 0x2348ACu);
    ctx->pc = 0x2348A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2348A4u;
    // 0x2348a8: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x233A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233A90u, 0x2348A4u, 0x2348ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2348ACu;
label_2348ac:
    // 0x2348ac: 0xc08cffa  jal         func_233FE8
label_2348b0:
    if (ctx->pc == 0x2348B0u) {
        ctx->pc = 0x2348B4u;
        goto label_2348b4;
    }
    ctx->pc = 0x2348ACu;
    SET_GPR_U32(ctx, 31, 0x2348B4u);
    ctx->pc = 0x233FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233FE8u, 0x2348ACu, 0x2348B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2348B4u;
label_2348b4:
    // 0x2348b4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2348b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2348b8:
    // 0x2348b8: 0x1490000a  bne         $a0, $s0, . + 4 + (0xA << 2)
label_2348bc:
    if (ctx->pc == 0x2348BCu) {
        ctx->pc = 0x2348BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2348B8u;
        // 0x2348bc: 0x3c03004c  lui         $v1, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2348C0u;
        goto label_2348c0;
    }
    ctx->pc = 0x2348B8u;
    {
        const bool branch_taken_0x2348b8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 16));
        ctx->pc = 0x2348BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2348B8u;
        // 0x2348bc: 0x3c03004c  lui         $v1, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2348b8) {
            ctx->pc = 0x2348E4u;
            goto label_2348e4;
        }
    }
    ctx->pc = 0x2348C0u;
label_2348c0:
    // 0x2348c0: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x2348c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
label_2348c4:
    // 0x2348c4: 0x2442fc5c  addiu       $v0, $v0, -0x3A4
    ctx->pc = 0x2348c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966364));
label_2348c8:
    // 0x2348c8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2348c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2348cc:
    // 0x2348cc: 0x10640004  beq         $v1, $a0, . + 4 + (0x4 << 2)
label_2348d0:
    if (ctx->pc == 0x2348D0u) {
        ctx->pc = 0x2348D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2348CCu;
        // 0x2348d0: 0x3c02004c  lui         $v0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2348D4u;
        goto label_2348d4;
    }
    ctx->pc = 0x2348CCu;
    {
        const bool branch_taken_0x2348cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x2348D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2348CCu;
        // 0x2348d0: 0x3c02004c  lui         $v0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2348cc) {
            ctx->pc = 0x2348E0u;
            goto label_2348e0;
        }
    }
    ctx->pc = 0x2348D4u;
label_2348d4:
    // 0x2348d4: 0x2442fcac  addiu       $v0, $v0, -0x354
    ctx->pc = 0x2348d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966444));
label_2348d8:
    // 0x2348d8: 0xc08cea4  jal         func_233A90
label_2348dc:
    if (ctx->pc == 0x2348DCu) {
        ctx->pc = 0x2348DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2348D8u;
        // 0x2348dc: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2348E0u;
        goto label_2348e0;
    }
    ctx->pc = 0x2348D8u;
    SET_GPR_U32(ctx, 31, 0x2348E0u);
    ctx->pc = 0x2348DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2348D8u;
    // 0x2348dc: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x233A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233A90u, 0x2348D8u, 0x2348E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2348E0u;
label_2348e0:
    // 0x2348e0: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x2348e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
label_2348e4:
    // 0x2348e4: 0x2463fca0  addiu       $v1, $v1, -0x360
    ctx->pc = 0x2348e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966432));
label_2348e8:
    // 0x2348e8: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x2348e8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
label_2348ec:
    // 0x2348ec: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x2348ecu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
label_2348f0:
    // 0x2348f0: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x2348f0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
label_2348f4:
    // 0x2348f4: 0xc08cc5a  jal         func_233168
label_2348f8:
    if (ctx->pc == 0x2348F8u) {
        ctx->pc = 0x2348FCu;
        goto label_2348fc;
    }
    ctx->pc = 0x2348F4u;
    SET_GPR_U32(ctx, 31, 0x2348FCu);
    ctx->pc = 0x233168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233168u, 0x2348F4u, 0x2348FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2348FCu;
label_2348fc:
    // 0x2348fc: 0x2643fd2c  addiu       $v1, $s2, -0x2D4
    ctx->pc = 0x2348fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294966572));
label_234900:
    // 0x234900: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x234900u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_234904:
    // 0x234904: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x234904u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
label_234908:
    // 0x234908: 0x8c42fd30  lw          $v0, -0x2D0($v0)
    ctx->pc = 0x234908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294966576)));
label_23490c:
    // 0x23490c: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_234910:
    if (ctx->pc == 0x234910u) {
        ctx->pc = 0x234910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23490Cu;
        // 0x234910: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234914u;
        goto label_234914;
    }
    ctx->pc = 0x23490Cu;
    {
        const bool branch_taken_0x23490c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23490c) {
            ctx->pc = 0x234910u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23490Cu;
            // 0x234910: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x234928u;
            goto label_234928;
        }
    }
    ctx->pc = 0x234914u;
label_234914:
    // 0x234914: 0x40f809  jalr        $v0
label_234918:
    if (ctx->pc == 0x234918u) {
        ctx->pc = 0x234918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234914u;
        // 0x234918: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23491Cu;
        goto label_23491c;
    }
    ctx->pc = 0x234914u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23491Cu);
        ctx->pc = 0x234918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234914u;
        // 0x234918: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x234914u, 0x23491Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23491Cu;
label_23491c:
    // 0x23491c: 0x10000003  b           . + 4 + (0x3 << 2)
label_234920:
    if (ctx->pc == 0x234920u) {
        ctx->pc = 0x234920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23491Cu;
        // 0x234920: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234924u;
        goto label_234924;
    }
    ctx->pc = 0x23491Cu;
    {
        const bool branch_taken_0x23491c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x234920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23491Cu;
        // 0x234920: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23491c) {
            ctx->pc = 0x23492Cu;
            goto label_23492c;
        }
    }
    ctx->pc = 0x234924u;
label_234924:
    // 0x234924: 0x0  nop
    ctx->pc = 0x234924u;
    // NOP
label_234928:
    // 0x234928: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x234928u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23492c:
    // 0x23492c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x23492cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_234930:
    // 0x234930: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x234930u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_234934:
    // 0x234934: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x234934u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_234938:
    // 0x234938: 0x3e00008  jr          $ra
label_23493c:
    if (ctx->pc == 0x23493Cu) {
        ctx->pc = 0x23493Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234938u;
        // 0x23493c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234940u;
        goto label_fallthrough_0x234938;
    }
    ctx->pc = 0x234938u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23493Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234938u;
        // 0x23493c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x234938u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x234938:
    ctx->pc = 0x234940u;
}
