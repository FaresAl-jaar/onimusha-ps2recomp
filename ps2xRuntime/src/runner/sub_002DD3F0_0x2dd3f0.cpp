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

// Function: sub_002DD3F0
// Address: 0x2dd3f0 - 0x2dd50c
void sub_002DD3F0_0x2dd3f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DD3F0_0x2dd3f0");
#endif

    switch (ctx->pc) {
        case 0x2dd418u: goto label_2dd418;
        case 0x2dd45cu: goto label_2dd45c;
        case 0x2dd484u: goto label_2dd484;
        case 0x2dd4acu: goto label_2dd4ac;
        case 0x2dd4c4u: goto label_2dd4c4;
        case 0x2dd4dcu: goto label_2dd4dc;
        case 0x2dd4f0u: goto label_2dd4f0;
        default: break;
    }

    ctx->pc = 0x2dd3f0u;

    // 0x2dd3f0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2dd3f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2dd3f4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2dd3f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2dd3f8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2dd3f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2dd3fc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2dd3fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2dd400: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2dd400u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd404: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2dd404u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2dd408: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2dd408u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd40c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2dd40cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd410: 0xc0745d0  jal         func_1D1740
    ctx->pc = 0x2DD410u;
    SET_GPR_U32(ctx, 31, 0x2DD418u);
    ctx->pc = 0x2DD414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD410u;
    // 0x2dd414: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1740u, 0x2DD410u, 0x2DD418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD418u;
label_2dd418:
    // 0x2dd418: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2dd418u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd41c: 0x131c3c  dsll32      $v1, $s3, 16
    ctx->pc = 0x2dd41cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) << (32 + 16));
    // 0x2dd420: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x2dd420u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x2dd424: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2dd424u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2dd428: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2dd428u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2dd42c: 0x8e470084  lw          $a3, 0x84($s2)
    ctx->pc = 0x2dd42cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 132)));
    // 0x2dd430: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x2dd430u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2dd434: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2dd434u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd438: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x2dd438u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x2dd43c: 0x29c3c  dsll32      $s3, $v0, 16
    ctx->pc = 0x2dd43cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2dd440: 0x10e00007  beqz        $a3, . + 4 + (0x7 << 2)
    ctx->pc = 0x2DD440u;
    {
        const bool branch_taken_0x2dd440 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DD444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD440u;
        // 0x2dd444: 0x139c3f  dsra32      $s3, $s3, 16 (Delay Slot)
        SET_GPR_S64(ctx, 19, GPR_S64(ctx, 19) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd440) {
            ctx->pc = 0x2DD460u;
            goto label_2dd460;
        }
    }
    ctx->pc = 0x2DD448u;
    // 0x2dd448: 0x8e460090  lw          $a2, 0x90($s2)
    ctx->pc = 0x2dd448u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 144)));
    // 0x2dd44c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2dd44cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd450: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2dd450u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd454: 0xc0b6d68  jal         func_2DB5A0
    ctx->pc = 0x2DD454u;
    SET_GPR_U32(ctx, 31, 0x2DD45Cu);
    ctx->pc = 0x2DD458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD454u;
    // 0x2dd458: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB5A0u, 0x2DD454u, 0x2DD45Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD45Cu;
label_2dd45c:
    // 0x2dd45c: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x2dd45cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_2dd460:
    // 0x2dd460: 0x8e470088  lw          $a3, 0x88($s2)
    ctx->pc = 0x2dd460u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
    // 0x2dd464: 0x10e00008  beqz        $a3, . + 4 + (0x8 << 2)
    ctx->pc = 0x2DD464u;
    {
        const bool branch_taken_0x2dd464 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dd464) {
            ctx->pc = 0x2DD488u;
            goto label_2dd488;
        }
    }
    ctx->pc = 0x2DD46Cu;
    // 0x2dd46c: 0x8e460094  lw          $a2, 0x94($s2)
    ctx->pc = 0x2dd46cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 148)));
    // 0x2dd470: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x2dd470u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x2dd474: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2dd474u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd478: 0x2022821  addu        $a1, $s0, $v0
    ctx->pc = 0x2dd478u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2dd47c: 0xc0b6d68  jal         func_2DB5A0
    ctx->pc = 0x2DD47Cu;
    SET_GPR_U32(ctx, 31, 0x2DD484u);
    ctx->pc = 0x2DD480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD47Cu;
    // 0x2dd480: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB5A0u, 0x2DD47Cu, 0x2DD484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD484u;
label_2dd484:
    // 0x2dd484: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x2dd484u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_2dd488:
    // 0x2dd488: 0x8e47008c  lw          $a3, 0x8C($s2)
    ctx->pc = 0x2dd488u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
    // 0x2dd48c: 0x10e00008  beqz        $a3, . + 4 + (0x8 << 2)
    ctx->pc = 0x2DD48Cu;
    {
        const bool branch_taken_0x2dd48c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dd48c) {
            ctx->pc = 0x2DD4B0u;
            goto label_2dd4b0;
        }
    }
    ctx->pc = 0x2DD494u;
    // 0x2dd494: 0x8e460098  lw          $a2, 0x98($s2)
    ctx->pc = 0x2dd494u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 152)));
    // 0x2dd498: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x2dd498u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x2dd49c: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x2dd49cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd4a0: 0x2022821  addu        $a1, $s0, $v0
    ctx->pc = 0x2dd4a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2dd4a4: 0xc0b6f88  jal         func_2DBE20
    ctx->pc = 0x2DD4A4u;
    SET_GPR_U32(ctx, 31, 0x2DD4ACu);
    ctx->pc = 0x2DD4A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD4A4u;
    // 0x2dd4a8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DBE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DBE20u, 0x2DD4A4u, 0x2DD4ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD4ACu;
label_2dd4ac:
    // 0x2dd4ac: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x2dd4acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_2dd4b0:
    // 0x2dd4b0: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x2dd4b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x2dd4b4: 0x26460040  addiu       $a2, $s2, 0x40
    ctx->pc = 0x2dd4b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x2dd4b8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2dd4b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2dd4bc: 0xc076788  jal         func_1D9E20
    ctx->pc = 0x2DD4BCu;
    SET_GPR_U32(ctx, 31, 0x2DD4C4u);
    ctx->pc = 0x2DD4C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD4BCu;
    // 0x2dd4c0: 0x24a56a20  addiu       $a1, $a1, 0x6A20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E20u, 0x2DD4BCu, 0x2DD4C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD4C4u;
label_2dd4c4:
    // 0x2dd4c4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2dd4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2dd4c8: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2DD4C8u;
    {
        const bool branch_taken_0x2dd4c8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DD4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD4C8u;
        // 0x2dd4cc: 0x39283  sra         $s2, $v1, 10 (Delay Slot)
        SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 3), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd4c8) {
            ctx->pc = 0x2DD4F0u;
            goto label_2dd4f0;
        }
    }
    ctx->pc = 0x2DD4D0u;
    // 0x2dd4d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2dd4d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd4d4: 0xc07463c  jal         func_1D18F0
    ctx->pc = 0x2DD4D4u;
    SET_GPR_U32(ctx, 31, 0x2DD4DCu);
    ctx->pc = 0x2DD4D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD4D4u;
    // 0x2dd4d8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D18F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D18F0u, 0x2DD4D4u, 0x2DD4DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD4DCu;
label_2dd4dc:
    // 0x2dd4dc: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x2dd4dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2dd4e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2dd4e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd4e4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2dd4e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd4e8: 0xc0745fc  jal         func_1D17F0
    ctx->pc = 0x2DD4E8u;
    SET_GPR_U32(ctx, 31, 0x2DD4F0u);
    ctx->pc = 0x2DD4ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD4E8u;
    // 0x2dd4ec: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D17F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D17F0u, 0x2DD4E8u, 0x2DD4F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD4F0u;
label_2dd4f0:
    // 0x2dd4f0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2dd4f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2dd4f4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2dd4f4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2dd4f8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2dd4f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2dd4fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2dd4fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dd500: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2dd500u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dd504: 0x3e00008  jr          $ra
    ctx->pc = 0x2DD504u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DD508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD504u;
        // 0x2dd508: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DD504u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DD50Cu;
}
