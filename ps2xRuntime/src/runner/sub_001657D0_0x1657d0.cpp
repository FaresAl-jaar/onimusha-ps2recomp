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

// Function: sub_001657D0
// Address: 0x1657d0 - 0x165964
void sub_001657D0_0x1657d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001657D0_0x1657d0");
#endif

    switch (ctx->pc) {
        case 0x165808u: goto label_165808;
        case 0x165818u: goto label_165818;
        case 0x165828u: goto label_165828;
        case 0x165838u: goto label_165838;
        case 0x165848u: goto label_165848;
        case 0x165858u: goto label_165858;
        case 0x165868u: goto label_165868;
        case 0x165878u: goto label_165878;
        case 0x165888u: goto label_165888;
        case 0x165898u: goto label_165898;
        case 0x1658a8u: goto label_1658a8;
        case 0x1658b8u: goto label_1658b8;
        case 0x1658c8u: goto label_1658c8;
        case 0x1658d8u: goto label_1658d8;
        case 0x1658e8u: goto label_1658e8;
        case 0x1658f8u: goto label_1658f8;
        case 0x165908u: goto label_165908;
        case 0x165918u: goto label_165918;
        case 0x165928u: goto label_165928;
        case 0x165938u: goto label_165938;
        case 0x165948u: goto label_165948;
        case 0x165958u: goto label_165958;
        default: break;
    }

    ctx->pc = 0x1657d0u;

    // 0x1657d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1657d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1657d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1657d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1657d8: 0x90830003  lbu         $v1, 0x3($a0)
    ctx->pc = 0x1657d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x1657dc: 0x2c610031  sltiu       $at, $v1, 0x31
    ctx->pc = 0x1657dcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)49) ? 1 : 0);
    // 0x1657e0: 0x1020005d  beqz        $at, . + 4 + (0x5D << 2)
    ctx->pc = 0x1657E0u;
    {
        const bool branch_taken_0x1657e0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1657E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1657E0u;
        // 0x1657e4: 0x3c050066  lui         $a1, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1657e0) {
            ctx->pc = 0x165958u;
            goto label_165958;
        }
    }
    ctx->pc = 0x1657E8u;
    // 0x1657e8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1657e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1657ec: 0x24a55170  addiu       $a1, $a1, 0x5170
    ctx->pc = 0x1657ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20848));
    // 0x1657f0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1657f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1657f4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1657f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1657f8: 0x600008  jr          $v1
    ctx->pc = 0x1657F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x165800u: goto label_165800;
            case 0x165810u: goto label_165810;
            case 0x165820u: goto label_165820;
            case 0x165830u: goto label_165830;
            case 0x165840u: goto label_165840;
            case 0x165850u: goto label_165850;
            case 0x165860u: goto label_165860;
            case 0x165870u: goto label_165870;
            case 0x165880u: goto label_165880;
            case 0x165890u: goto label_165890;
            case 0x1658A0u: goto label_1658a0;
            case 0x1658B0u: goto label_1658b0;
            case 0x1658C0u: goto label_1658c0;
            case 0x1658D0u: goto label_1658d0;
            case 0x1658E0u: goto label_1658e0;
            case 0x1658F0u: goto label_1658f0;
            case 0x165900u: goto label_165900;
            case 0x165910u: goto label_165910;
            case 0x165920u: goto label_165920;
            case 0x165930u: goto label_165930;
            case 0x165940u: goto label_165940;
            case 0x165950u: goto label_165950;
            case 0x165958u: goto label_165958;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1657F8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x165800u;
label_165800:
    // 0x165800: 0xc056f40  jal         func_15BD00
    ctx->pc = 0x165800u;
    SET_GPR_U32(ctx, 31, 0x165808u);
    ctx->pc = 0x15BD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BD00u, 0x165800u, 0x165808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165808u;
label_165808:
    // 0x165808: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x165808u;
    {
        const bool branch_taken_0x165808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x165808) {
            ctx->pc = 0x165958u;
            goto label_165958;
        }
    }
    ctx->pc = 0x165810u;
label_165810:
    // 0x165810: 0xc057044  jal         func_15C110
    ctx->pc = 0x165810u;
    SET_GPR_U32(ctx, 31, 0x165818u);
    ctx->pc = 0x15C110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C110u, 0x165810u, 0x165818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165818u;
label_165818:
    // 0x165818: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x165818u;
    {
        const bool branch_taken_0x165818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x165818) {
            ctx->pc = 0x165958u;
            goto label_165958;
        }
    }
    ctx->pc = 0x165820u;
label_165820:
    // 0x165820: 0xc057354  jal         func_15CD50
    ctx->pc = 0x165820u;
    SET_GPR_U32(ctx, 31, 0x165828u);
    ctx->pc = 0x15CD50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CD50u, 0x165820u, 0x165828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165828u;
label_165828:
    // 0x165828: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x165828u;
    {
        const bool branch_taken_0x165828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x165828) {
            ctx->pc = 0x165958u;
            goto label_165958;
        }
    }
    ctx->pc = 0x165830u;
label_165830:
    // 0x165830: 0xc057494  jal         func_15D250
    ctx->pc = 0x165830u;
    SET_GPR_U32(ctx, 31, 0x165838u);
    ctx->pc = 0x15D250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D250u, 0x165830u, 0x165838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165838u;
label_165838:
    // 0x165838: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x165838u;
    {
        const bool branch_taken_0x165838 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x165838) {
            ctx->pc = 0x165958u;
            goto label_165958;
        }
    }
    ctx->pc = 0x165840u;
label_165840:
    // 0x165840: 0xc057498  jal         func_15D260
    ctx->pc = 0x165840u;
    SET_GPR_U32(ctx, 31, 0x165848u);
    ctx->pc = 0x15D260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D260u, 0x165840u, 0x165848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165848u;
label_165848:
    // 0x165848: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x165848u;
    {
        const bool branch_taken_0x165848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x165848) {
            ctx->pc = 0x165958u;
            goto label_165958;
        }
    }
    ctx->pc = 0x165850u;
label_165850:
    // 0x165850: 0xc057354  jal         func_15CD50
    ctx->pc = 0x165850u;
    SET_GPR_U32(ctx, 31, 0x165858u);
    ctx->pc = 0x15CD50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CD50u, 0x165850u, 0x165858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165858u;
label_165858:
    // 0x165858: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x165858u;
    {
        const bool branch_taken_0x165858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x165858) {
            ctx->pc = 0x165958u;
            goto label_165958;
        }
    }
    ctx->pc = 0x165860u;
label_165860:
    // 0x165860: 0xc057494  jal         func_15D250
    ctx->pc = 0x165860u;
    SET_GPR_U32(ctx, 31, 0x165868u);
    ctx->pc = 0x15D250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D250u, 0x165860u, 0x165868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165868u;
label_165868:
    // 0x165868: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x165868u;
    {
        const bool branch_taken_0x165868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x165868) {
            ctx->pc = 0x165958u;
            goto label_165958;
        }
    }
    ctx->pc = 0x165870u;
label_165870:
    // 0x165870: 0xc057c8c  jal         func_15F230
    ctx->pc = 0x165870u;
    SET_GPR_U32(ctx, 31, 0x165878u);
    ctx->pc = 0x15F230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15F230u, 0x165870u, 0x165878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165878u;
label_165878:
    // 0x165878: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x165878u;
    {
        const bool branch_taken_0x165878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x165878) {
            ctx->pc = 0x165958u;
            goto label_165958;
        }
    }
    ctx->pc = 0x165880u;
label_165880:
    // 0x165880: 0xc057d90  jal         func_15F640
    ctx->pc = 0x165880u;
    SET_GPR_U32(ctx, 31, 0x165888u);
    ctx->pc = 0x15F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15F640u, 0x165880u, 0x165888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165888u;
label_165888:
    // 0x165888: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x165888u;
    {
        const bool branch_taken_0x165888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x165888) {
            ctx->pc = 0x165958u;
            goto label_165958;
        }
    }
    ctx->pc = 0x165890u;
label_165890:
    // 0x165890: 0xc0580a0  jal         func_160280
    ctx->pc = 0x165890u;
    SET_GPR_U32(ctx, 31, 0x165898u);
    ctx->pc = 0x160280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x160280u, 0x165890u, 0x165898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165898u;
label_165898:
    // 0x165898: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x165898u;
    {
        const bool branch_taken_0x165898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x165898) {
            ctx->pc = 0x165958u;
            goto label_165958;
        }
    }
    ctx->pc = 0x1658A0u;
label_1658a0:
    // 0x1658a0: 0xc0581e0  jal         func_160780
    ctx->pc = 0x1658A0u;
    SET_GPR_U32(ctx, 31, 0x1658A8u);
    ctx->pc = 0x160780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x160780u, 0x1658A0u, 0x1658A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1658A8u;
label_1658a8:
    // 0x1658a8: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x1658A8u;
    {
        const bool branch_taken_0x1658a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1658a8) {
            ctx->pc = 0x165958u;
            goto label_165958;
        }
    }
    ctx->pc = 0x1658B0u;
label_1658b0:
    // 0x1658b0: 0xc0581e4  jal         func_160790
    ctx->pc = 0x1658B0u;
    SET_GPR_U32(ctx, 31, 0x1658B8u);
    ctx->pc = 0x160790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x160790u, 0x1658B0u, 0x1658B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1658B8u;
label_1658b8:
    // 0x1658b8: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x1658B8u;
    {
        const bool branch_taken_0x1658b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1658b8) {
            ctx->pc = 0x165958u;
            goto label_165958;
        }
    }
    ctx->pc = 0x1658C0u;
label_1658c0:
    // 0x1658c0: 0xc0580a0  jal         func_160280
    ctx->pc = 0x1658C0u;
    SET_GPR_U32(ctx, 31, 0x1658C8u);
    ctx->pc = 0x160280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x160280u, 0x1658C0u, 0x1658C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1658C8u;
label_1658c8:
    // 0x1658c8: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x1658C8u;
    {
        const bool branch_taken_0x1658c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1658c8) {
            ctx->pc = 0x165958u;
            goto label_165958;
        }
    }
    ctx->pc = 0x1658D0u;
label_1658d0:
    // 0x1658d0: 0xc0581e0  jal         func_160780
    ctx->pc = 0x1658D0u;
    SET_GPR_U32(ctx, 31, 0x1658D8u);
    ctx->pc = 0x160780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x160780u, 0x1658D0u, 0x1658D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1658D8u;
label_1658d8:
    // 0x1658d8: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x1658D8u;
    {
        const bool branch_taken_0x1658d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1658d8) {
            ctx->pc = 0x165958u;
            goto label_165958;
        }
    }
    ctx->pc = 0x1658E0u;
label_1658e0:
    // 0x1658e0: 0xc0589d8  jal         func_162760
    ctx->pc = 0x1658E0u;
    SET_GPR_U32(ctx, 31, 0x1658E8u);
    ctx->pc = 0x162760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x162760u, 0x1658E0u, 0x1658E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1658E8u;
label_1658e8:
    // 0x1658e8: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1658E8u;
    {
        const bool branch_taken_0x1658e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1658e8) {
            ctx->pc = 0x165958u;
            goto label_165958;
        }
    }
    ctx->pc = 0x1658F0u;
label_1658f0:
    // 0x1658f0: 0xc058adc  jal         func_162B70
    ctx->pc = 0x1658F0u;
    SET_GPR_U32(ctx, 31, 0x1658F8u);
    ctx->pc = 0x162B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x162B70u, 0x1658F0u, 0x1658F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1658F8u;
label_1658f8:
    // 0x1658f8: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1658F8u;
    {
        const bool branch_taken_0x1658f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1658f8) {
            ctx->pc = 0x165958u;
            goto label_165958;
        }
    }
    ctx->pc = 0x165900u;
label_165900:
    // 0x165900: 0xc058dec  jal         func_1637B0
    ctx->pc = 0x165900u;
    SET_GPR_U32(ctx, 31, 0x165908u);
    ctx->pc = 0x1637B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1637B0u, 0x165900u, 0x165908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165908u;
label_165908:
    // 0x165908: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x165908u;
    {
        const bool branch_taken_0x165908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x165908) {
            ctx->pc = 0x165958u;
            goto label_165958;
        }
    }
    ctx->pc = 0x165910u;
label_165910:
    // 0x165910: 0xc058f2c  jal         func_163CB0
    ctx->pc = 0x165910u;
    SET_GPR_U32(ctx, 31, 0x165918u);
    ctx->pc = 0x163CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163CB0u, 0x165910u, 0x165918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165918u;
label_165918:
    // 0x165918: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x165918u;
    {
        const bool branch_taken_0x165918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x165918) {
            ctx->pc = 0x165958u;
            goto label_165958;
        }
    }
    ctx->pc = 0x165920u;
label_165920:
    // 0x165920: 0xc058f30  jal         func_163CC0
    ctx->pc = 0x165920u;
    SET_GPR_U32(ctx, 31, 0x165928u);
    ctx->pc = 0x163CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163CC0u, 0x165920u, 0x165928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165928u;
label_165928:
    // 0x165928: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x165928u;
    {
        const bool branch_taken_0x165928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x165928) {
            ctx->pc = 0x165958u;
            goto label_165958;
        }
    }
    ctx->pc = 0x165930u;
label_165930:
    // 0x165930: 0xc058dec  jal         func_1637B0
    ctx->pc = 0x165930u;
    SET_GPR_U32(ctx, 31, 0x165938u);
    ctx->pc = 0x1637B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1637B0u, 0x165930u, 0x165938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165938u;
label_165938:
    // 0x165938: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x165938u;
    {
        const bool branch_taken_0x165938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x165938) {
            ctx->pc = 0x165958u;
            goto label_165958;
        }
    }
    ctx->pc = 0x165940u;
label_165940:
    // 0x165940: 0xc058f2c  jal         func_163CB0
    ctx->pc = 0x165940u;
    SET_GPR_U32(ctx, 31, 0x165948u);
    ctx->pc = 0x163CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163CB0u, 0x165940u, 0x165948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165948u;
label_165948:
    // 0x165948: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x165948u;
    {
        const bool branch_taken_0x165948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x165948) {
            ctx->pc = 0x165958u;
            goto label_165958;
        }
    }
    ctx->pc = 0x165950u;
label_165950:
    // 0x165950: 0xc059820  jal         func_166080
    ctx->pc = 0x165950u;
    SET_GPR_U32(ctx, 31, 0x165958u);
    ctx->pc = 0x166080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166080u, 0x165950u, 0x165958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165958u;
label_165958:
    // 0x165958: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x165958u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16595c: 0x3e00008  jr          $ra
    ctx->pc = 0x16595Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x165960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16595Cu;
        // 0x165960: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16595Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x165964u;
}
