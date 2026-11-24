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

// Function: sub_0011F7C0
// Address: 0x11f7c0 - 0x11f918
void sub_0011F7C0_0x11f7c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011F7C0_0x11f7c0");
#endif

    switch (ctx->pc) {
        case 0x11f7e0u: goto label_11f7e0;
        case 0x11f7ecu: goto label_11f7ec;
        case 0x11f818u: goto label_11f818;
        case 0x11f830u: goto label_11f830;
        case 0x11f844u: goto label_11f844;
        case 0x11f854u: goto label_11f854;
        case 0x11f868u: goto label_11f868;
        case 0x11f870u: goto label_11f870;
        case 0x11f890u: goto label_11f890;
        case 0x11f8a4u: goto label_11f8a4;
        case 0x11f8c8u: goto label_11f8c8;
        case 0x11f8d0u: goto label_11f8d0;
        default: break;
    }

    ctx->pc = 0x11f7c0u;

    // 0x11f7c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x11f7c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x11f7c4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x11f7c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x11f7c8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11f7c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11f7cc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x11f7ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f7d0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x11f7d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x11f7d4: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x11f7d4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    // 0x11f7d8: 0xc047c72  jal         func_11F1C8
    ctx->pc = 0x11F7D8u;
    SET_GPR_U32(ctx, 31, 0x11F7E0u);
    ctx->pc = 0x11F7DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F7D8u;
    // 0x11f7dc: 0xffb20020  sd          $s2, 0x20($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F1C8u, 0x11F7D8u, 0x11F7E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F7E0u;
label_11f7e0:
    // 0x11f7e0: 0x8e0441a8  lw          $a0, 0x41A8($s0)
    ctx->pc = 0x11f7e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16808)));
    // 0x11f7e4: 0xc04380c  jal         func_10E030
    ctx->pc = 0x11F7E4u;
    SET_GPR_U32(ctx, 31, 0x11F7ECu);
    ctx->pc = 0x10E030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E030u, 0x11F7E4u, 0x11F7ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F7ECu;
label_11f7ec:
    // 0x11f7ec: 0x8e0341a8  lw          $v1, 0x41A8($s0)
    ctx->pc = 0x11f7ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16808)));
    // 0x11f7f0: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x11F7F0u;
    {
        const bool branch_taken_0x11f7f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x11F7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F7F0u;
        // 0x11f7f4: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f7f0) {
            ctx->pc = 0x11F820u;
            goto label_11f820;
        }
    }
    ctx->pc = 0x11F7F8u;
    // 0x11f7f8: 0x8c434190  lw          $v1, 0x4190($v0)
    ctx->pc = 0x11f7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16784)));
    // 0x11f7fc: 0x18600011  blez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x11F7FCu;
    {
        const bool branch_taken_0x11f7fc = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x11F800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F7FCu;
        // 0x11f800: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f7fc) {
            ctx->pc = 0x11F844u;
            goto label_11f844;
        }
    }
    ctx->pc = 0x11F804u;
    // 0x11f804: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x11f804u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x11f808: 0x8c46419c  lw          $a2, 0x419C($v0)
    ctx->pc = 0x11f808u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16796)));
    // 0x11f80c: 0x248437c8  addiu       $a0, $a0, 0x37C8
    ctx->pc = 0x11f80cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14280));
    // 0x11f810: 0xc044332  jal         func_110CC8
    ctx->pc = 0x11F810u;
    SET_GPR_U32(ctx, 31, 0x11F818u);
    ctx->pc = 0x11F814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F810u;
    // 0x11f814: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110CC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110CC8u, 0x11F810u, 0x11F818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F818u;
label_11f818:
    // 0x11f818: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x11F818u;
    {
        const bool branch_taken_0x11f818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F818u;
        // 0x11f81c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f818) {
            ctx->pc = 0x11F900u;
            goto label_11f900;
        }
    }
    ctx->pc = 0x11F820u;
label_11f820:
    // 0x11f820: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x11f820u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x11f824: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x11f824u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11f828: 0xc047e6c  jal         func_11F9B0
    ctx->pc = 0x11F828u;
    SET_GPR_U32(ctx, 31, 0x11F830u);
    ctx->pc = 0x11F82Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F828u;
    // 0x11f82c: 0xac51419c  sw          $s1, 0x419C($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 16796), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x11F828u, 0x11F830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F830u;
label_11f830:
    // 0x11f830: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11F830u;
    {
        const bool branch_taken_0x11f830 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F830u;
        // 0x11f834: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f830) {
            ctx->pc = 0x11F84Cu;
            goto label_11f84c;
        }
    }
    ctx->pc = 0x11F838u;
    // 0x11f838: 0x8e0441a8  lw          $a0, 0x41A8($s0)
    ctx->pc = 0x11f838u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16808)));
    // 0x11f83c: 0xc043800  jal         func_10E000
    ctx->pc = 0x11F83Cu;
    SET_GPR_U32(ctx, 31, 0x11F844u);
    ctx->pc = 0x10E000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E000u, 0x11F83Cu, 0x11F844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F844u;
label_11f844:
    // 0x11f844: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x11F844u;
    {
        const bool branch_taken_0x11f844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F844u;
        // 0x11f848: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f844) {
            ctx->pc = 0x11F900u;
            goto label_11f900;
        }
    }
    ctx->pc = 0x11F84Cu;
label_11f84c:
    // 0x11f84c: 0xc044568  jal         func_1115A0
    ctx->pc = 0x11F84Cu;
    SET_GPR_U32(ctx, 31, 0x11F854u);
    ctx->pc = 0x11F850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F84Cu;
    // 0x11f850: 0x3c120040  lui         $s2, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)64 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1115A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1115A0u, 0x11F84Cu, 0x11F854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F854u;
label_11f854:
    // 0x11f854: 0x8e4241bc  lw          $v0, 0x41BC($s2)
    ctx->pc = 0x11f854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16828)));
    // 0x11f858: 0x4410029  bgez        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x11F858u;
    {
        const bool branch_taken_0x11f858 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x11F85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F858u;
        // 0x11f85c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f858) {
            ctx->pc = 0x11F900u;
            goto label_11f900;
        }
    }
    ctx->pc = 0x11F860u;
    // 0x11f860: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x11F860u;
    {
        const bool branch_taken_0x11f860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F860u;
        // 0x11f864: 0x3c110040  lui         $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f860) {
            ctx->pc = 0x11F88Cu;
            goto label_11f88c;
        }
    }
    ctx->pc = 0x11F868u;
label_11f868:
    // 0x11f868: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x11f868u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x11f86c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x11f86cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_11f870:
    // 0x11f870: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x11f870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x11f874: 0x0  nop
    ctx->pc = 0x11f874u;
    // NOP
    // 0x11f878: 0x0  nop
    ctx->pc = 0x11f878u;
    // NOP
    // 0x11f87c: 0x0  nop
    ctx->pc = 0x11f87cu;
    // NOP
    // 0x11f880: 0x0  nop
    ctx->pc = 0x11f880u;
    // NOP
    // 0x11f884: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x11F884u;
    {
        const bool branch_taken_0x11f884 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x11f884) {
            ctx->pc = 0x11F870u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11f870;
        }
    }
    ctx->pc = 0x11F88Cu;
label_11f88c:
    // 0x11f88c: 0x26305350  addiu       $s0, $s1, 0x5350
    ctx->pc = 0x11f88cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 21328));
label_11f890:
    // 0x11f890: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x11f890u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x11f894: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11f894u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f898: 0x34a50595  ori         $a1, $a1, 0x595
    ctx->pc = 0x11f898u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1429);
    // 0x11f89c: 0xc044752  jal         func_111D48
    ctx->pc = 0x11F89Cu;
    SET_GPR_U32(ctx, 31, 0x11F8A4u);
    ctx->pc = 0x11F8A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F89Cu;
    // 0x11f8a0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111D48u, 0x11F89Cu, 0x11F8A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F8A4u;
label_11f8a4:
    // 0x11f8a4: 0x4430013  bgezl       $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x11F8A4u;
    {
        const bool branch_taken_0x11f8a4 = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x11f8a4) {
            ctx->pc = 0x11F8A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11F8A4u;
            // 0x11f8a8: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11F8F4u;
            goto label_11f8f4;
        }
    }
    ctx->pc = 0x11F8ACu;
    // 0x11f8ac: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x11f8acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x11f8b0: 0x8c434190  lw          $v1, 0x4190($v0)
    ctx->pc = 0x11f8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x404190u));
    // 0x11f8b4: 0x18600005  blez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x11F8B4u;
    {
        const bool branch_taken_0x11f8b4 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x11F8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F8B4u;
        // 0x11f8b8: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f8b4) {
            ctx->pc = 0x11F8CCu;
            goto label_11f8cc;
        }
    }
    ctx->pc = 0x11F8BCu;
    // 0x11f8bc: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x11f8bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x11f8c0: 0xc044332  jal         func_110CC8
    ctx->pc = 0x11F8C0u;
    SET_GPR_U32(ctx, 31, 0x11F8C8u);
    ctx->pc = 0x11F8C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F8C0u;
    // 0x11f8c4: 0x248437f0  addiu       $a0, $a0, 0x37F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110CC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110CC8u, 0x11F8C0u, 0x11F8C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F8C8u;
label_11f8c8:
    // 0x11f8c8: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x11f8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
label_11f8cc:
    // 0x11f8cc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x11f8ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_11f8d0:
    // 0x11f8d0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x11f8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x11f8d4: 0x0  nop
    ctx->pc = 0x11f8d4u;
    // NOP
    // 0x11f8d8: 0x0  nop
    ctx->pc = 0x11f8d8u;
    // NOP
    // 0x11f8dc: 0x0  nop
    ctx->pc = 0x11f8dcu;
    // NOP
    // 0x11f8e0: 0x0  nop
    ctx->pc = 0x11f8e0u;
    // NOP
    // 0x11f8e4: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x11F8E4u;
    {
        const bool branch_taken_0x11f8e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x11f8e4) {
            ctx->pc = 0x11F8D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11f8d0;
        }
    }
    ctx->pc = 0x11F8ECu;
    // 0x11f8ec: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
    ctx->pc = 0x11F8ECu;
    {
        const bool branch_taken_0x11f8ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F8ECu;
        // 0x11f8f0: 0x26305350  addiu       $s0, $s1, 0x5350 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 21328));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f8ec) {
            ctx->pc = 0x11F890u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11f890;
        }
    }
    ctx->pc = 0x11F8F4u;
label_11f8f4:
    // 0x11f8f4: 0x1040ffdc  beqz        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x11F8F4u;
    {
        const bool branch_taken_0x11f8f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F8F4u;
        // 0x11f8f8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f8f4) {
            ctx->pc = 0x11F868u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11f868;
        }
    }
    ctx->pc = 0x11F8FCu;
    // 0x11f8fc: 0xae4041bc  sw          $zero, 0x41BC($s2)
    ctx->pc = 0x11f8fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16828), GPR_U32(ctx, 0));
label_11f900:
    // 0x11f900: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x11f900u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11f904: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x11f904u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11f908: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x11f908u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11f90c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11f90cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11f910: 0x3e00008  jr          $ra
    ctx->pc = 0x11F910u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11F914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F910u;
        // 0x11f914: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11F910u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11F918u;
}
