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

// Function: sub_0029D7A0
// Address: 0x29d7a0 - 0x29d8e4
void sub_0029D7A0_0x29d7a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029D7A0_0x29d7a0");
#endif

    switch (ctx->pc) {
        case 0x29d7c8u: goto label_29d7c8;
        case 0x29d80cu: goto label_29d80c;
        case 0x29d834u: goto label_29d834;
        case 0x29d85cu: goto label_29d85c;
        case 0x29d884u: goto label_29d884;
        case 0x29d89cu: goto label_29d89c;
        case 0x29d8b4u: goto label_29d8b4;
        case 0x29d8c8u: goto label_29d8c8;
        default: break;
    }

    ctx->pc = 0x29d7a0u;

    // 0x29d7a0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x29d7a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x29d7a4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x29d7a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x29d7a8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x29d7a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x29d7ac: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x29d7acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x29d7b0: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x29d7b0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d7b4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x29d7b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x29d7b8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x29d7b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d7bc: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x29d7bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d7c0: 0xc0745d0  jal         func_1D1740
    ctx->pc = 0x29D7C0u;
    SET_GPR_U32(ctx, 31, 0x29D7C8u);
    ctx->pc = 0x29D7C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D7C0u;
    // 0x29d7c4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1740u, 0x29D7C0u, 0x29D7C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D7C8u;
label_29d7c8:
    // 0x29d7c8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x29d7c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d7cc: 0x131c3c  dsll32      $v1, $s3, 16
    ctx->pc = 0x29d7ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) << (32 + 16));
    // 0x29d7d0: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x29d7d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x29d7d4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x29d7d4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x29d7d8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x29d7d8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x29d7dc: 0x8e470088  lw          $a3, 0x88($s2)
    ctx->pc = 0x29d7dcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
    // 0x29d7e0: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x29d7e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x29d7e4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x29d7e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d7e8: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x29d7e8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x29d7ec: 0x29c3c  dsll32      $s3, $v0, 16
    ctx->pc = 0x29d7ecu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) << (32 + 16));
    // 0x29d7f0: 0x10e00007  beqz        $a3, . + 4 + (0x7 << 2)
    ctx->pc = 0x29D7F0u;
    {
        const bool branch_taken_0x29d7f0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D7F0u;
        // 0x29d7f4: 0x139c3f  dsra32      $s3, $s3, 16 (Delay Slot)
        SET_GPR_S64(ctx, 19, GPR_S64(ctx, 19) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d7f0) {
            ctx->pc = 0x29D810u;
            goto label_29d810;
        }
    }
    ctx->pc = 0x29D7F8u;
    // 0x29d7f8: 0x8e46008c  lw          $a2, 0x8C($s2)
    ctx->pc = 0x29d7f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
    // 0x29d7fc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x29d7fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d800: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x29d800u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d804: 0xc0a141c  jal         func_285070
    ctx->pc = 0x29D804u;
    SET_GPR_U32(ctx, 31, 0x29D80Cu);
    ctx->pc = 0x29D808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D804u;
    // 0x29d808: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285070u, 0x29D804u, 0x29D80Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D80Cu;
label_29d80c:
    // 0x29d80c: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x29d80cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_29d810:
    // 0x29d810: 0x8e470098  lw          $a3, 0x98($s2)
    ctx->pc = 0x29d810u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 152)));
    // 0x29d814: 0x10e00008  beqz        $a3, . + 4 + (0x8 << 2)
    ctx->pc = 0x29D814u;
    {
        const bool branch_taken_0x29d814 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x29d814) {
            ctx->pc = 0x29D838u;
            goto label_29d838;
        }
    }
    ctx->pc = 0x29D81Cu;
    // 0x29d81c: 0x8e46009c  lw          $a2, 0x9C($s2)
    ctx->pc = 0x29d81cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
    // 0x29d820: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x29d820u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x29d824: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x29d824u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d828: 0x2022821  addu        $a1, $s0, $v0
    ctx->pc = 0x29d828u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x29d82c: 0xc0a141c  jal         func_285070
    ctx->pc = 0x29D82Cu;
    SET_GPR_U32(ctx, 31, 0x29D834u);
    ctx->pc = 0x29D830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D82Cu;
    // 0x29d830: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285070u, 0x29D82Cu, 0x29D834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D834u;
label_29d834:
    // 0x29d834: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x29d834u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_29d838:
    // 0x29d838: 0x8e470090  lw          $a3, 0x90($s2)
    ctx->pc = 0x29d838u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 144)));
    // 0x29d83c: 0x10e00008  beqz        $a3, . + 4 + (0x8 << 2)
    ctx->pc = 0x29D83Cu;
    {
        const bool branch_taken_0x29d83c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x29d83c) {
            ctx->pc = 0x29D860u;
            goto label_29d860;
        }
    }
    ctx->pc = 0x29D844u;
    // 0x29d844: 0x8e460094  lw          $a2, 0x94($s2)
    ctx->pc = 0x29d844u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 148)));
    // 0x29d848: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x29d848u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x29d84c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x29d84cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d850: 0x2022821  addu        $a1, $s0, $v0
    ctx->pc = 0x29d850u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x29d854: 0xc0a1bfc  jal         func_286FF0
    ctx->pc = 0x29D854u;
    SET_GPR_U32(ctx, 31, 0x29D85Cu);
    ctx->pc = 0x29D858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D854u;
    // 0x29d858: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x286FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286FF0u, 0x29D854u, 0x29D85Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D85Cu;
label_29d85c:
    // 0x29d85c: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x29d85cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_29d860:
    // 0x29d860: 0x8e4700a0  lw          $a3, 0xA0($s2)
    ctx->pc = 0x29d860u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
    // 0x29d864: 0x10e00008  beqz        $a3, . + 4 + (0x8 << 2)
    ctx->pc = 0x29D864u;
    {
        const bool branch_taken_0x29d864 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x29d864) {
            ctx->pc = 0x29D888u;
            goto label_29d888;
        }
    }
    ctx->pc = 0x29D86Cu;
    // 0x29d86c: 0x8e4600a4  lw          $a2, 0xA4($s2)
    ctx->pc = 0x29d86cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 164)));
    // 0x29d870: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x29d870u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x29d874: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x29d874u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d878: 0x2022821  addu        $a1, $s0, $v0
    ctx->pc = 0x29d878u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x29d87c: 0xc0a1bfc  jal         func_286FF0
    ctx->pc = 0x29D87Cu;
    SET_GPR_U32(ctx, 31, 0x29D884u);
    ctx->pc = 0x29D880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D87Cu;
    // 0x29d880: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x286FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286FF0u, 0x29D87Cu, 0x29D884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D884u;
label_29d884:
    // 0x29d884: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x29d884u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_29d888:
    // 0x29d888: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x29d888u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x29d88c: 0x26460040  addiu       $a2, $s2, 0x40
    ctx->pc = 0x29d88cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x29d890: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x29d890u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x29d894: 0xc076788  jal         func_1D9E20
    ctx->pc = 0x29D894u;
    SET_GPR_U32(ctx, 31, 0x29D89Cu);
    ctx->pc = 0x29D898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D894u;
    // 0x29d898: 0x24a56a20  addiu       $a1, $a1, 0x6A20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E20u, 0x29D894u, 0x29D89Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D89Cu;
label_29d89c:
    // 0x29d89c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x29d89cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29d8a0: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x29D8A0u;
    {
        const bool branch_taken_0x29d8a0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D8A0u;
        // 0x29d8a4: 0x39283  sra         $s2, $v1, 10 (Delay Slot)
        SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 3), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d8a0) {
            ctx->pc = 0x29D8C8u;
            goto label_29d8c8;
        }
    }
    ctx->pc = 0x29D8A8u;
    // 0x29d8a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29d8a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d8ac: 0xc07463c  jal         func_1D18F0
    ctx->pc = 0x29D8ACu;
    SET_GPR_U32(ctx, 31, 0x29D8B4u);
    ctx->pc = 0x29D8B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D8ACu;
    // 0x29d8b0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D18F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D18F0u, 0x29D8ACu, 0x29D8B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D8B4u;
label_29d8b4:
    // 0x29d8b4: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x29d8b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x29d8b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29d8b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d8bc: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x29d8bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d8c0: 0xc0745fc  jal         func_1D17F0
    ctx->pc = 0x29D8C0u;
    SET_GPR_U32(ctx, 31, 0x29D8C8u);
    ctx->pc = 0x29D8C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D8C0u;
    // 0x29d8c4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D17F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D17F0u, 0x29D8C0u, 0x29D8C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D8C8u;
label_29d8c8:
    // 0x29d8c8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x29d8c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29d8cc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x29d8ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29d8d0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x29d8d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29d8d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x29d8d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29d8d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29d8d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29d8dc: 0x3e00008  jr          $ra
    ctx->pc = 0x29D8DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29D8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D8DCu;
        // 0x29d8e0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29D8DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29D8E4u;
}
