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

// Function: sub_0028C780
// Address: 0x28c780 - 0x28c8b4
void sub_0028C780_0x28c780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028C780_0x28c780");
#endif

    switch (ctx->pc) {
        case 0x28c7c0u: goto label_28c7c0;
        case 0x28c7d0u: goto label_28c7d0;
        case 0x28c7e4u: goto label_28c7e4;
        case 0x28c7f4u: goto label_28c7f4;
        case 0x28c814u: goto label_28c814;
        case 0x28c824u: goto label_28c824;
        case 0x28c864u: goto label_28c864;
        case 0x28c874u: goto label_28c874;
        case 0x28c88cu: goto label_28c88c;
        default: break;
    }

    ctx->pc = 0x28c780u;

    // 0x28c780: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x28c780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x28c784: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x28c784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x28c788: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x28c788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x28c78c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x28c78cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x28c790: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x28c790u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c794: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x28c794u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x28c798: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x28c798u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c79c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x28c79cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x28c7a0: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x28c7a0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c7a4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x28c7a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x28c7a8: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x28c7a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c7ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x28c7acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x28c7b0: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x28c7b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c7b4: 0x120802d  daddu       $s0, $t1, $zero
    ctx->pc = 0x28c7b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c7b8: 0xc09d4d4  jal         func_275350
    ctx->pc = 0x28C7B8u;
    SET_GPR_U32(ctx, 31, 0x28C7C0u);
    ctx->pc = 0x28C7BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C7B8u;
    // 0x28c7bc: 0x27a4007c  addiu       $a0, $sp, 0x7C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275350u, 0x28C7B8u, 0x28C7C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C7C0u;
label_28c7c0:
    // 0x28c7c0: 0x16400005  bnez        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x28C7C0u;
    {
        const bool branch_taken_0x28c7c0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x28C7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C7C0u;
        // 0x28c7c4: 0x27a4007c  addiu       $a0, $sp, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c7c0) {
            ctx->pc = 0x28C7D8u;
            goto label_28c7d8;
        }
    }
    ctx->pc = 0x28C7C8u;
    // 0x28c7c8: 0xc09d4d8  jal         func_275360
    ctx->pc = 0x28C7C8u;
    SET_GPR_U32(ctx, 31, 0x28C7D0u);
    ctx->pc = 0x28C7CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C7C8u;
    // 0x28c7cc: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275360u, 0x28C7C8u, 0x28C7D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C7D0u;
label_28c7d0:
    // 0x28c7d0: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x28C7D0u;
    {
        const bool branch_taken_0x28c7d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C7D0u;
        // 0x28c7d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c7d0) {
            ctx->pc = 0x28C890u;
            goto label_28c890;
        }
    }
    ctx->pc = 0x28C7D8u;
label_28c7d8:
    // 0x28c7d8: 0x27a4007c  addiu       $a0, $sp, 0x7C
    ctx->pc = 0x28c7d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x28c7dc: 0xc09d4fc  jal         func_2753F0
    ctx->pc = 0x28C7DCu;
    SET_GPR_U32(ctx, 31, 0x28C7E4u);
    ctx->pc = 0x28C7E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C7DCu;
    // 0x28c7e0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2753F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2753F0u, 0x28C7DCu, 0x28C7E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C7E4u;
label_28c7e4:
    // 0x28c7e4: 0x320600ff  andi        $a2, $s0, 0xFF
    ctx->pc = 0x28c7e4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x28c7e8: 0x27a4007c  addiu       $a0, $sp, 0x7C
    ctx->pc = 0x28c7e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x28c7ec: 0xc09d524  jal         func_275490
    ctx->pc = 0x28C7ECu;
    SET_GPR_U32(ctx, 31, 0x28C7F4u);
    ctx->pc = 0x28C7F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C7ECu;
    // 0x28c7f0: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275490u, 0x28C7ECu, 0x28C7F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C7F4u;
label_28c7f4:
    // 0x28c7f4: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x28C7F4u;
    {
        const bool branch_taken_0x28c7f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28C7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C7F4u;
        // 0x28c7f8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c7f4) {
            ctx->pc = 0x28C830u;
            goto label_28c830;
        }
    }
    ctx->pc = 0x28C7FCu;
    // 0x28c7fc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x28c7fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c800: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x28c800u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c804: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x28c804u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c808: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x28c808u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c80c: 0xc0a3248  jal         func_28C920
    ctx->pc = 0x28C80Cu;
    SET_GPR_U32(ctx, 31, 0x28C814u);
    ctx->pc = 0x28C810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C80Cu;
    // 0x28c810: 0x200482d  daddu       $t1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28C920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28C920u, 0x28C80Cu, 0x28C814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C814u;
label_28c814:
    // 0x28c814: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x28c814u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c818: 0x27a4007c  addiu       $a0, $sp, 0x7C
    ctx->pc = 0x28c818u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x28c81c: 0xc09d4d8  jal         func_275360
    ctx->pc = 0x28C81Cu;
    SET_GPR_U32(ctx, 31, 0x28C824u);
    ctx->pc = 0x28C820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C81Cu;
    // 0x28c820: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275360u, 0x28C81Cu, 0x28C824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C824u;
label_28c824:
    // 0x28c824: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x28C824u;
    {
        const bool branch_taken_0x28c824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C824u;
        // 0x28c828: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c824) {
            ctx->pc = 0x28C890u;
            goto label_28c890;
        }
    }
    ctx->pc = 0x28C82Cu;
    // 0x28c82c: 0x0  nop
    ctx->pc = 0x28c82cu;
    // NOP
label_28c830:
    // 0x28c830: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x28c830u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x28c834: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28C834u;
    {
        const bool branch_taken_0x28c834 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28c834) {
            ctx->pc = 0x28C848u;
            goto label_28c848;
        }
    }
    ctx->pc = 0x28C83Cu;
    // 0x28c83c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x28C83Cu;
    {
        const bool branch_taken_0x28c83c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28c83c) {
            ctx->pc = 0x28C880u;
            goto label_28c880;
        }
    }
    ctx->pc = 0x28C844u;
    // 0x28c844: 0x0  nop
    ctx->pc = 0x28c844u;
    // NOP
label_28c848:
    // 0x28c848: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x28c848u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c84c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x28c84cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c850: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x28c850u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c854: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x28c854u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c858: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x28c858u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c85c: 0xc0a3248  jal         func_28C920
    ctx->pc = 0x28C85Cu;
    SET_GPR_U32(ctx, 31, 0x28C864u);
    ctx->pc = 0x28C860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C85Cu;
    // 0x28c860: 0x200482d  daddu       $t1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28C920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28C920u, 0x28C85Cu, 0x28C864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C864u;
label_28c864:
    // 0x28c864: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x28c864u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c868: 0x27a4007c  addiu       $a0, $sp, 0x7C
    ctx->pc = 0x28c868u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x28c86c: 0xc09d4d8  jal         func_275360
    ctx->pc = 0x28C86Cu;
    SET_GPR_U32(ctx, 31, 0x28C874u);
    ctx->pc = 0x28C870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C86Cu;
    // 0x28c870: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275360u, 0x28C86Cu, 0x28C874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C874u;
label_28c874:
    // 0x28c874: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x28C874u;
    {
        const bool branch_taken_0x28c874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C874u;
        // 0x28c878: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c874) {
            ctx->pc = 0x28C890u;
            goto label_28c890;
        }
    }
    ctx->pc = 0x28C87Cu;
    // 0x28c87c: 0x0  nop
    ctx->pc = 0x28c87cu;
    // NOP
label_28c880:
    // 0x28c880: 0x27a4007c  addiu       $a0, $sp, 0x7C
    ctx->pc = 0x28c880u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x28c884: 0xc09d4d8  jal         func_275360
    ctx->pc = 0x28C884u;
    SET_GPR_U32(ctx, 31, 0x28C88Cu);
    ctx->pc = 0x28C888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28C884u;
    // 0x28c888: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275360u, 0x28C884u, 0x28C88Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C88Cu;
label_28c88c:
    // 0x28c88c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x28c88cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28c890:
    // 0x28c890: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x28c890u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x28c894: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x28c894u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x28c898: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x28c898u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28c89c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x28c89cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28c8a0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x28c8a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28c8a4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x28c8a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28c8a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x28c8a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28c8ac: 0x3e00008  jr          $ra
    ctx->pc = 0x28C8ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28C8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28C8ACu;
        // 0x28c8b0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28C8ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28C8B4u;
}
