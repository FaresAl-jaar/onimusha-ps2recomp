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

// Function: sub_0025B320
// Address: 0x25b320 - 0x25b3d4
void sub_0025B320_0x25b320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025B320_0x25b320");
#endif

    switch (ctx->pc) {
        case 0x25b354u: goto label_25b354;
        case 0x25b364u: goto label_25b364;
        case 0x25b384u: goto label_25b384;
        case 0x25b3a4u: goto label_25b3a4;
        case 0x25b3b4u: goto label_25b3b4;
        default: break;
    }

    ctx->pc = 0x25b320u;

    // 0x25b320: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x25b320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x25b324: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x25b324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x25b328: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x25b328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x25b32c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x25b32cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x25b330: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x25b330u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b334: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x25b334u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x25b338: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x25b338u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x25b33c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25b33cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25b340: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x25b340u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b344: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x25b344u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b348: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x25b348u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b34c: 0xc04e720  jal         func_139C80
    ctx->pc = 0x25B34Cu;
    SET_GPR_U32(ctx, 31, 0x25B354u);
    ctx->pc = 0x25B350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B34Cu;
    // 0x25b350: 0x24846710  addiu       $a0, $a0, 0x6710 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x139C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139C80u, 0x25B34Cu, 0x25B354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B354u;
label_25b354:
    // 0x25b354: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x25b354u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x25b358: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x25b358u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b35c: 0xc04e728  jal         func_139CA0
    ctx->pc = 0x25B35Cu;
    SET_GPR_U32(ctx, 31, 0x25B364u);
    ctx->pc = 0x25B360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B35Cu;
    // 0x25b360: 0x24846710  addiu       $a0, $a0, 0x6710 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x139CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139CA0u, 0x25B35Cu, 0x25B364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B364u;
label_25b364:
    // 0x25b364: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x25b364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x25b368: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x25b368u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x25b36c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x25B36Cu;
    {
        const bool branch_taken_0x25b36c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B36Cu;
        // 0x25b370: 0x3c04006b  lui         $a0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b36c) {
            ctx->pc = 0x25B388u;
            goto label_25b388;
        }
    }
    ctx->pc = 0x25B374u;
    // 0x25b374: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x25b374u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x25b378: 0x24846710  addiu       $a0, $a0, 0x6710
    ctx->pc = 0x25b378u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26384));
    // 0x25b37c: 0xc04e710  jal         func_139C40
    ctx->pc = 0x25B37Cu;
    SET_GPR_U32(ctx, 31, 0x25B384u);
    ctx->pc = 0x25B380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B37Cu;
    // 0x25b380: 0x34451100  ori         $a1, $v0, 0x1100 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4352);
    ctx->in_delay_slot = false;
    ctx->pc = 0x139C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139C40u, 0x25B37Cu, 0x25B384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B384u;
label_25b384:
    // 0x25b384: 0x0  nop
    ctx->pc = 0x25b384u;
    // NOP
label_25b388:
    // 0x25b388: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x25b388u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x25b38c: 0x24846710  addiu       $a0, $a0, 0x6710
    ctx->pc = 0x25b38cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26384));
    // 0x25b390: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x25b390u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b394: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x25b394u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b398: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x25b398u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b39c: 0xc04e954  jal         func_13A550
    ctx->pc = 0x25B39Cu;
    SET_GPR_U32(ctx, 31, 0x25B3A4u);
    ctx->pc = 0x25B3A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B39Cu;
    // 0x25b3a0: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13A550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13A550u, 0x25B39Cu, 0x25B3A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B3A4u;
label_25b3a4:
    // 0x25b3a4: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x25b3a4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25b3a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25b3a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b3ac: 0xc0766dc  jal         func_1D9B70
    ctx->pc = 0x25B3ACu;
    SET_GPR_U32(ctx, 31, 0x25B3B4u);
    ctx->pc = 0x25B3B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B3ACu;
    // 0x25b3b0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9B70u, 0x25B3ACu, 0x25B3B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B3B4u;
label_25b3b4:
    // 0x25b3b4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x25b3b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b3b8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x25b3b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25b3bc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x25b3bcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25b3c0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x25b3c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25b3c4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25b3c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25b3c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25b3c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25b3cc: 0x3e00008  jr          $ra
    ctx->pc = 0x25B3CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25B3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B3CCu;
        // 0x25b3d0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25B3CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25B3D4u;
}
