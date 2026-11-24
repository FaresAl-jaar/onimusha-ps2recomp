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

// Function: sub_002BA4A0
// Address: 0x2ba4a0 - 0x2ba504
void sub_002BA4A0_0x2ba4a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BA4A0_0x2ba4a0");
#endif

    switch (ctx->pc) {
        case 0x2ba4bcu: goto label_2ba4bc;
        case 0x2ba4ccu: goto label_2ba4cc;
        case 0x2ba4f0u: goto label_2ba4f0;
        default: break;
    }

    ctx->pc = 0x2ba4a0u;

    // 0x2ba4a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2ba4a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2ba4a4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2ba4a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2ba4a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ba4a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2ba4ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ba4acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ba4b0: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x2ba4b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x2ba4b4: 0xc04e720  jal         func_139C80
    ctx->pc = 0x2BA4B4u;
    SET_GPR_U32(ctx, 31, 0x2BA4BCu);
    ctx->pc = 0x2BA4B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA4B4u;
    // 0x2ba4b8: 0x24846710  addiu       $a0, $a0, 0x6710 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x139C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139C80u, 0x2BA4B4u, 0x2BA4BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA4BCu;
label_2ba4bc:
    // 0x2ba4bc: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x2ba4bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x2ba4c0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2ba4c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ba4c4: 0xc04e728  jal         func_139CA0
    ctx->pc = 0x2BA4C4u;
    SET_GPR_U32(ctx, 31, 0x2BA4CCu);
    ctx->pc = 0x2BA4C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA4C4u;
    // 0x2ba4c8: 0x24846710  addiu       $a0, $a0, 0x6710 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x139CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139CA0u, 0x2BA4C4u, 0x2BA4CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA4CCu;
label_2ba4cc:
    // 0x2ba4cc: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x2ba4ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x2ba4d0: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2ba4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2ba4d4: 0x24846710  addiu       $a0, $a0, 0x6710
    ctx->pc = 0x2ba4d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26384));
    // 0x2ba4d8: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x2ba4d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x2ba4dc: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2ba4dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ba4e0: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2ba4e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2ba4e4: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x2ba4e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2ba4e8: 0xc04e954  jal         func_13A550
    ctx->pc = 0x2BA4E8u;
    SET_GPR_U32(ctx, 31, 0x2BA4F0u);
    ctx->pc = 0x2BA4ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA4E8u;
    // 0x2ba4ec: 0x27a8004c  addiu       $t0, $sp, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13A550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13A550u, 0x2BA4E8u, 0x2BA4F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA4F0u;
label_2ba4f0:
    // 0x2ba4f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2ba4f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ba4f4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2ba4f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2ba4f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ba4f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ba4fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2BA4FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BA500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA4FCu;
        // 0x2ba500: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BA4FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BA504u;
}
