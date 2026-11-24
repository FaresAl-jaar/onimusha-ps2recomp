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

// Function: sub_0020F7D8
// Address: 0x20f7d8 - 0x20f8cc
void sub_0020F7D8_0x20f7d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020F7D8_0x20f7d8");
#endif

    switch (ctx->pc) {
        case 0x20f7d8u: goto label_20f7d8;
        case 0x20f7dcu: goto label_20f7dc;
        case 0x20f7e0u: goto label_20f7e0;
        case 0x20f7e4u: goto label_20f7e4;
        case 0x20f7e8u: goto label_20f7e8;
        case 0x20f7ecu: goto label_20f7ec;
        case 0x20f7f0u: goto label_20f7f0;
        case 0x20f7f4u: goto label_20f7f4;
        case 0x20f7f8u: goto label_20f7f8;
        case 0x20f7fcu: goto label_20f7fc;
        case 0x20f800u: goto label_20f800;
        case 0x20f804u: goto label_20f804;
        case 0x20f808u: goto label_20f808;
        case 0x20f80cu: goto label_20f80c;
        case 0x20f810u: goto label_20f810;
        case 0x20f814u: goto label_20f814;
        case 0x20f818u: goto label_20f818;
        case 0x20f81cu: goto label_20f81c;
        case 0x20f820u: goto label_20f820;
        case 0x20f824u: goto label_20f824;
        case 0x20f828u: goto label_20f828;
        case 0x20f82cu: goto label_20f82c;
        case 0x20f830u: goto label_20f830;
        case 0x20f834u: goto label_20f834;
        case 0x20f838u: goto label_20f838;
        case 0x20f83cu: goto label_20f83c;
        case 0x20f840u: goto label_20f840;
        case 0x20f844u: goto label_20f844;
        case 0x20f848u: goto label_20f848;
        case 0x20f84cu: goto label_20f84c;
        case 0x20f850u: goto label_20f850;
        case 0x20f854u: goto label_20f854;
        case 0x20f858u: goto label_20f858;
        case 0x20f85cu: goto label_20f85c;
        case 0x20f860u: goto label_20f860;
        case 0x20f864u: goto label_20f864;
        case 0x20f868u: goto label_20f868;
        case 0x20f86cu: goto label_20f86c;
        case 0x20f870u: goto label_20f870;
        case 0x20f874u: goto label_20f874;
        case 0x20f878u: goto label_20f878;
        case 0x20f87cu: goto label_20f87c;
        case 0x20f880u: goto label_20f880;
        case 0x20f884u: goto label_20f884;
        case 0x20f888u: goto label_20f888;
        case 0x20f88cu: goto label_20f88c;
        case 0x20f890u: goto label_20f890;
        case 0x20f894u: goto label_20f894;
        case 0x20f898u: goto label_20f898;
        case 0x20f89cu: goto label_20f89c;
        case 0x20f8a0u: goto label_20f8a0;
        case 0x20f8a4u: goto label_20f8a4;
        case 0x20f8a8u: goto label_20f8a8;
        case 0x20f8acu: goto label_20f8ac;
        case 0x20f8b0u: goto label_20f8b0;
        case 0x20f8b4u: goto label_20f8b4;
        case 0x20f8b8u: goto label_20f8b8;
        case 0x20f8bcu: goto label_20f8bc;
        case 0x20f8c0u: goto label_20f8c0;
        case 0x20f8c4u: goto label_20f8c4;
        case 0x20f8c8u: goto label_20f8c8;
        default: break;
    }

    ctx->pc = 0x20f7d8u;

label_20f7d8:
    // 0x20f7d8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x20f7d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_20f7dc:
    // 0x20f7dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20f7dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_20f7e0:
    // 0x20f7e0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20f7e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_20f7e4:
    // 0x20f7e4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x20f7e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_20f7e8:
    // 0x20f7e8: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x20f7e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_20f7ec:
    // 0x20f7ec: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x20f7ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_20f7f0:
    // 0x20f7f0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x20f7f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_20f7f4:
    // 0x20f7f4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x20f7f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_20f7f8:
    // 0x20f7f8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x20f7f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_20f7fc:
    // 0x20f7fc: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x20f7fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_20f800:
    // 0x20f800: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x20f800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_20f804:
    // 0x20f804: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x20f804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_20f808:
    // 0x20f808: 0x40f809  jalr        $v0
label_20f80c:
    if (ctx->pc == 0x20F80Cu) {
        ctx->pc = 0x20F80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F808u;
        // 0x20f80c: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F810u;
        goto label_20f810;
    }
    ctx->pc = 0x20F808u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20F810u);
        ctx->pc = 0x20F80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F808u;
        // 0x20f80c: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20F808u, 0x20F810u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20F810u;
label_20f810:
    // 0x20f810: 0x3c067fff  lui         $a2, 0x7FFF
    ctx->pc = 0x20f810u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32767 << 16));
label_20f814:
    // 0x20f814: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x20f814u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20f818:
    // 0x20f818: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x20f818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_20f81c:
    // 0x20f81c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20f81cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20f820:
    // 0x20f820: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x20f820u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_20f824:
    // 0x20f824: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x20f824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_20f828:
    // 0x20f828: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x20f828u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_20f82c:
    // 0x20f82c: 0x60f809  jalr        $v1
label_20f830:
    if (ctx->pc == 0x20F830u) {
        ctx->pc = 0x20F830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F82Cu;
        // 0x20f830: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F834u;
        goto label_20f834;
    }
    ctx->pc = 0x20F82Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x20F834u);
        ctx->pc = 0x20F830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F82Cu;
        // 0x20f830: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20F82Cu, 0x20F834u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20F834u;
label_20f834:
    // 0x20f834: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20f834u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20f838:
    // 0x20f838: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x20f838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_20f83c:
    // 0x20f83c: 0x3c067fff  lui         $a2, 0x7FFF
    ctx->pc = 0x20f83cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32767 << 16));
label_20f840:
    // 0x20f840: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x20f840u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_20f844:
    // 0x20f844: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x20f844u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_20f848:
    // 0x20f848: 0x54102a  slt         $v0, $v0, $s4
    ctx->pc = 0x20f848u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
label_20f84c:
    // 0x20f84c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_20f850:
    if (ctx->pc == 0x20F850u) {
        ctx->pc = 0x20F850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F84Cu;
        // 0x20f850: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F854u;
        goto label_20f854;
    }
    ctx->pc = 0x20F84Cu;
    {
        const bool branch_taken_0x20f84c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F84Cu;
        // 0x20f850: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f84c) {
            ctx->pc = 0x20F888u;
            goto label_20f888;
        }
    }
    ctx->pc = 0x20F854u;
label_20f854:
    // 0x20f854: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x20f854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_20f858:
    // 0x20f858: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x20f858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_20f85c:
    // 0x20f85c: 0x60f809  jalr        $v1
label_20f860:
    if (ctx->pc == 0x20F860u) {
        ctx->pc = 0x20F864u;
        goto label_20f864;
    }
    ctx->pc = 0x20F85Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x20F864u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20F85Cu, 0x20F864u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20F864u;
label_20f864:
    // 0x20f864: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x20f864u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_20f868:
    // 0x20f868: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x20f868u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_20f86c:
    // 0x20f86c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20f86cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20f870:
    // 0x20f870: 0x8ca2001c  lw          $v0, 0x1C($a1)
    ctx->pc = 0x20f870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
label_20f874:
    // 0x20f874: 0x40f809  jalr        $v0
label_20f878:
    if (ctx->pc == 0x20F878u) {
        ctx->pc = 0x20F878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F874u;
        // 0x20f878: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F87Cu;
        goto label_20f87c;
    }
    ctx->pc = 0x20F874u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20F87Cu);
        ctx->pc = 0x20F878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F874u;
        // 0x20f878: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20F874u, 0x20F87Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20F87Cu;
label_20f87c:
    // 0x20f87c: 0x10000005  b           . + 4 + (0x5 << 2)
label_20f880:
    if (ctx->pc == 0x20F880u) {
        ctx->pc = 0x20F880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F87Cu;
        // 0x20f880: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F884u;
        goto label_20f884;
    }
    ctx->pc = 0x20F87Cu;
    {
        const bool branch_taken_0x20f87c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F87Cu;
        // 0x20f880: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f87c) {
            ctx->pc = 0x20F894u;
            goto label_20f894;
        }
    }
    ctx->pc = 0x20F884u;
label_20f884:
    // 0x20f884: 0x0  nop
    ctx->pc = 0x20f884u;
    // NOP
label_20f888:
    // 0x20f888: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x20f888u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_20f88c:
    // 0x20f88c: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x20f88cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_20f890:
    // 0x20f890: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x20f890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_20f894:
    // 0x20f894: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20f894u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20f898:
    // 0x20f898: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x20f898u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_20f89c:
    // 0x20f89c: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x20f89cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_20f8a0:
    // 0x20f8a0: 0x40f809  jalr        $v0
label_20f8a4:
    if (ctx->pc == 0x20F8A4u) {
        ctx->pc = 0x20F8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F8A0u;
        // 0x20f8a4: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F8A8u;
        goto label_20f8a8;
    }
    ctx->pc = 0x20F8A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20F8A8u);
        ctx->pc = 0x20F8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F8A0u;
        // 0x20f8a4: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20F8A0u, 0x20F8A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20F8A8u;
label_20f8a8:
    // 0x20f8a8: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x20f8a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_20f8ac:
    // 0x20f8ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20f8acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20f8b0:
    // 0x20f8b0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x20f8b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_20f8b4:
    // 0x20f8b4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x20f8b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_20f8b8:
    // 0x20f8b8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x20f8b8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_20f8bc:
    // 0x20f8bc: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x20f8bcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_20f8c0:
    // 0x20f8c0: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x20f8c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_20f8c4:
    // 0x20f8c4: 0x3e00008  jr          $ra
label_20f8c8:
    if (ctx->pc == 0x20F8C8u) {
        ctx->pc = 0x20F8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F8C4u;
        // 0x20f8c8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F8CCu;
        goto label_fallthrough_0x20f8c4;
    }
    ctx->pc = 0x20F8C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20F8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F8C4u;
        // 0x20f8c8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20F8C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x20f8c4:
    ctx->pc = 0x20F8CCu;
}
