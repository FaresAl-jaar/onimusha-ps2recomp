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

// Function: sub_003516C0
// Address: 0x3516c0 - 0x3517d4
void sub_003516C0_0x3516c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003516C0_0x3516c0");
#endif

    switch (ctx->pc) {
        case 0x3516e8u: goto label_3516e8;
        case 0x351728u: goto label_351728;
        case 0x351738u: goto label_351738;
        case 0x351748u: goto label_351748;
        case 0x351758u: goto label_351758;
        case 0x351768u: goto label_351768;
        case 0x351778u: goto label_351778;
        case 0x351788u: goto label_351788;
        case 0x351798u: goto label_351798;
        case 0x3517a8u: goto label_3517a8;
        case 0x3517b8u: goto label_3517b8;
        default: break;
    }

    ctx->pc = 0x3516c0u;

    // 0x3516c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3516c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3516c4: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x3516C4u;
    {
        const bool branch_taken_0x3516c4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3516C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3516C4u;
        // 0x3516c8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3516c4) {
            ctx->pc = 0x3516F0u;
            goto label_3516f0;
        }
    }
    ctx->pc = 0x3516CCu;
    // 0x3516cc: 0x90820012  lbu         $v0, 0x12($a0)
    ctx->pc = 0x3516ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 18)));
    // 0x3516d0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3516d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3516d4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3516D4u;
    {
        const bool branch_taken_0x3516d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3516D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3516D4u;
        // 0x3516d8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3516d4) {
            ctx->pc = 0x3516F0u;
            goto label_3516f0;
        }
    }
    ctx->pc = 0x3516DCu;
    // 0x3516dc: 0x3c040092  lui         $a0, 0x92
    ctx->pc = 0x3516dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)146 << 16));
    // 0x3516e0: 0xc0d39d0  jal         func_34E740
    ctx->pc = 0x3516E0u;
    SET_GPR_U32(ctx, 31, 0x3516E8u);
    ctx->pc = 0x3516E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3516E0u;
    // 0x3516e4: 0x2484a090  addiu       $a0, $a0, -0x5F70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34E740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34E740u, 0x3516E0u, 0x3516E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3516E8u;
label_3516e8:
    // 0x3516e8: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x3516E8u;
    {
        const bool branch_taken_0x3516e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3516ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3516E8u;
        // 0x3516ec: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3516e8) {
            ctx->pc = 0x3517C8u;
            goto label_3517c8;
        }
    }
    ctx->pc = 0x3516F0u;
label_3516f0:
    // 0x3516f0: 0x90820010  lbu         $v0, 0x10($a0)
    ctx->pc = 0x3516f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x3516f4: 0x2c41000c  sltiu       $at, $v0, 0xC
    ctx->pc = 0x3516f4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
    // 0x3516f8: 0x10200031  beqz        $at, . + 4 + (0x31 << 2)
    ctx->pc = 0x3516F8u;
    {
        const bool branch_taken_0x3516f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3516FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3516F8u;
        // 0x3516fc: 0x3c030068  lui         $v1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3516f8) {
            ctx->pc = 0x3517C0u;
            goto label_3517c0;
        }
    }
    ctx->pc = 0x351700u;
    // 0x351700: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x351700u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x351704: 0x2463f7b0  addiu       $v1, $v1, -0x850
    ctx->pc = 0x351704u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965168));
    // 0x351708: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x351708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x35170c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x35170cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x351710: 0x400008  jr          $v0
    ctx->pc = 0x351710u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x351718u: goto label_351718;
            case 0x351720u: goto label_351720;
            case 0x351730u: goto label_351730;
            case 0x351740u: goto label_351740;
            case 0x351750u: goto label_351750;
            case 0x351760u: goto label_351760;
            case 0x351770u: goto label_351770;
            case 0x351780u: goto label_351780;
            case 0x351790u: goto label_351790;
            case 0x3517A0u: goto label_3517a0;
            case 0x3517B0u: goto label_3517b0;
            case 0x3517C0u: goto label_3517c0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x351710u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x351718u;
label_351718:
    // 0x351718: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x351718u;
    {
        const bool branch_taken_0x351718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35171Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351718u;
        // 0x35171c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351718) {
            ctx->pc = 0x3517C8u;
            goto label_3517c8;
        }
    }
    ctx->pc = 0x351720u;
label_351720:
    // 0x351720: 0xc0d45f8  jal         func_3517E0
    ctx->pc = 0x351720u;
    SET_GPR_U32(ctx, 31, 0x351728u);
    ctx->pc = 0x3517E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3517E0u, 0x351720u, 0x351728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351728u;
label_351728:
    // 0x351728: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x351728u;
    {
        const bool branch_taken_0x351728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x351728) {
            ctx->pc = 0x3517C8u;
            goto label_3517c8;
        }
    }
    ctx->pc = 0x351730u;
label_351730:
    // 0x351730: 0xc0d4600  jal         func_351800
    ctx->pc = 0x351730u;
    SET_GPR_U32(ctx, 31, 0x351738u);
    ctx->pc = 0x351800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x351800u, 0x351730u, 0x351738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351738u;
label_351738:
    // 0x351738: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x351738u;
    {
        const bool branch_taken_0x351738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x351738) {
            ctx->pc = 0x3517C8u;
            goto label_3517c8;
        }
    }
    ctx->pc = 0x351740u;
label_351740:
    // 0x351740: 0xc0d461c  jal         func_351870
    ctx->pc = 0x351740u;
    SET_GPR_U32(ctx, 31, 0x351748u);
    ctx->pc = 0x351870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x351870u, 0x351740u, 0x351748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351748u;
label_351748:
    // 0x351748: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x351748u;
    {
        const bool branch_taken_0x351748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x351748) {
            ctx->pc = 0x3517C8u;
            goto label_3517c8;
        }
    }
    ctx->pc = 0x351750u;
label_351750:
    // 0x351750: 0xc0d463c  jal         func_3518F0
    ctx->pc = 0x351750u;
    SET_GPR_U32(ctx, 31, 0x351758u);
    ctx->pc = 0x3518F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3518F0u, 0x351750u, 0x351758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351758u;
label_351758:
    // 0x351758: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x351758u;
    {
        const bool branch_taken_0x351758 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x351758) {
            ctx->pc = 0x3517C8u;
            goto label_3517c8;
        }
    }
    ctx->pc = 0x351760u;
label_351760:
    // 0x351760: 0xc0d4640  jal         func_351900
    ctx->pc = 0x351760u;
    SET_GPR_U32(ctx, 31, 0x351768u);
    ctx->pc = 0x351900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x351900u, 0x351760u, 0x351768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351768u;
label_351768:
    // 0x351768: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x351768u;
    {
        const bool branch_taken_0x351768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x351768) {
            ctx->pc = 0x3517C8u;
            goto label_3517c8;
        }
    }
    ctx->pc = 0x351770u;
label_351770:
    // 0x351770: 0xc0d4648  jal         func_351920
    ctx->pc = 0x351770u;
    SET_GPR_U32(ctx, 31, 0x351778u);
    ctx->pc = 0x351920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x351920u, 0x351770u, 0x351778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351778u;
label_351778:
    // 0x351778: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x351778u;
    {
        const bool branch_taken_0x351778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x351778) {
            ctx->pc = 0x3517C8u;
            goto label_3517c8;
        }
    }
    ctx->pc = 0x351780u;
label_351780:
    // 0x351780: 0xc0d4650  jal         func_351940
    ctx->pc = 0x351780u;
    SET_GPR_U32(ctx, 31, 0x351788u);
    ctx->pc = 0x351940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x351940u, 0x351780u, 0x351788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351788u;
label_351788:
    // 0x351788: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x351788u;
    {
        const bool branch_taken_0x351788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x351788) {
            ctx->pc = 0x3517C8u;
            goto label_3517c8;
        }
    }
    ctx->pc = 0x351790u;
label_351790:
    // 0x351790: 0xc0d4658  jal         func_351960
    ctx->pc = 0x351790u;
    SET_GPR_U32(ctx, 31, 0x351798u);
    ctx->pc = 0x351960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x351960u, 0x351790u, 0x351798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351798u;
label_351798:
    // 0x351798: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x351798u;
    {
        const bool branch_taken_0x351798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x351798) {
            ctx->pc = 0x3517C8u;
            goto label_3517c8;
        }
    }
    ctx->pc = 0x3517A0u;
label_3517a0:
    // 0x3517a0: 0xc0d4660  jal         func_351980
    ctx->pc = 0x3517A0u;
    SET_GPR_U32(ctx, 31, 0x3517A8u);
    ctx->pc = 0x351980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x351980u, 0x3517A0u, 0x3517A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3517A8u;
label_3517a8:
    // 0x3517a8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3517A8u;
    {
        const bool branch_taken_0x3517a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3517a8) {
            ctx->pc = 0x3517C8u;
            goto label_3517c8;
        }
    }
    ctx->pc = 0x3517B0u;
label_3517b0:
    // 0x3517b0: 0xc0d4684  jal         func_351A10
    ctx->pc = 0x3517B0u;
    SET_GPR_U32(ctx, 31, 0x3517B8u);
    ctx->pc = 0x351A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x351A10u, 0x3517B0u, 0x3517B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3517B8u;
label_3517b8:
    // 0x3517b8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3517B8u;
    {
        const bool branch_taken_0x3517b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3517b8) {
            ctx->pc = 0x3517C8u;
            goto label_3517c8;
        }
    }
    ctx->pc = 0x3517C0u;
label_3517c0:
    // 0x3517c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3517c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3517c4: 0x0  nop
    ctx->pc = 0x3517c4u;
    // NOP
label_3517c8:
    // 0x3517c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3517c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3517cc: 0x3e00008  jr          $ra
    ctx->pc = 0x3517CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3517D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3517CCu;
        // 0x3517d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3517CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3517D4u;
}
