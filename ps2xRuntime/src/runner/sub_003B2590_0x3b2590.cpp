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

// Function: sub_003B2590
// Address: 0x3b2590 - 0x3b2650
void sub_003B2590_0x3b2590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B2590_0x3b2590");
#endif

    switch (ctx->pc) {
        case 0x3b25c0u: goto label_3b25c0;
        case 0x3b25d0u: goto label_3b25d0;
        case 0x3b25e4u: goto label_3b25e4;
        case 0x3b25f4u: goto label_3b25f4;
        case 0x3b2610u: goto label_3b2610;
        default: break;
    }

    ctx->pc = 0x3b2590u;

    // 0x3b2590: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3b2590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x3b2594: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3b2594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3b2598: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3b2598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3b259c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3b259cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3b25a0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3b25a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b25a4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3b25a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3b25a8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3b25a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b25ac: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x3b25acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x3b25b0: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x3b25b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b25b4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x3b25b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b25b8: 0xc04e720  jal         func_139C80
    ctx->pc = 0x3B25B8u;
    SET_GPR_U32(ctx, 31, 0x3B25C0u);
    ctx->pc = 0x3B25BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B25B8u;
    // 0x3b25bc: 0x24846710  addiu       $a0, $a0, 0x6710 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x139C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139C80u, 0x3B25B8u, 0x3B25C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B25C0u;
label_3b25c0:
    // 0x3b25c0: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x3b25c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x3b25c4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3b25c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b25c8: 0xc04e728  jal         func_139CA0
    ctx->pc = 0x3B25C8u;
    SET_GPR_U32(ctx, 31, 0x3B25D0u);
    ctx->pc = 0x3B25CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B25C8u;
    // 0x3b25cc: 0x24846710  addiu       $a0, $a0, 0x6710 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x139CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139CA0u, 0x3B25C8u, 0x3B25D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B25D0u;
label_3b25d0:
    // 0x3b25d0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3b25d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3b25d4: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x3b25d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x3b25d8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3b25d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3b25dc: 0xc04e714  jal         func_139C50
    ctx->pc = 0x3B25DCu;
    SET_GPR_U32(ctx, 31, 0x3B25E4u);
    ctx->pc = 0x3B25E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B25DCu;
    // 0x3b25e0: 0x24846710  addiu       $a0, $a0, 0x6710 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x139C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139C50u, 0x3B25DCu, 0x3B25E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B25E4u;
label_3b25e4:
    // 0x3b25e4: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x3b25e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x3b25e8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3b25e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b25ec: 0xc04e710  jal         func_139C40
    ctx->pc = 0x3B25ECu;
    SET_GPR_U32(ctx, 31, 0x3B25F4u);
    ctx->pc = 0x3B25F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B25ECu;
    // 0x3b25f0: 0x24846710  addiu       $a0, $a0, 0x6710 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x139C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139C40u, 0x3B25ECu, 0x3B25F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B25F4u;
label_3b25f4:
    // 0x3b25f4: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x3b25f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x3b25f8: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x3b25f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3b25fc: 0x24846710  addiu       $a0, $a0, 0x6710
    ctx->pc = 0x3b25fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26384));
    // 0x3b2600: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x3b2600u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3b2604: 0x27a7006c  addiu       $a3, $sp, 0x6C
    ctx->pc = 0x3b2604u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x3b2608: 0xc04eab0  jal         func_13AAC0
    ctx->pc = 0x3B2608u;
    SET_GPR_U32(ctx, 31, 0x3B2610u);
    ctx->pc = 0x3B260Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B2608u;
    // 0x3b260c: 0xafb0006c  sw          $s0, 0x6C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13AAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13AAC0u, 0x3B2608u, 0x3B2610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B2610u;
label_3b2610:
    // 0x3b2610: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3B2610u;
    {
        const bool branch_taken_0x3b2610 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b2610) {
            ctx->pc = 0x3B2630u;
            goto label_3b2630;
        }
    }
    ctx->pc = 0x3B2618u;
    // 0x3b2618: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x3B2618u;
    {
        const bool branch_taken_0x3b2618 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b2618) {
            ctx->pc = 0x3B2628u;
            goto label_3b2628;
        }
    }
    ctx->pc = 0x3B2620u;
    // 0x3b2620: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x3b2620u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3b2624: 0x7e420000  sq          $v0, 0x0($s2)
    ctx->pc = 0x3b2624u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 2));
label_3b2628:
    // 0x3b2628: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3B2628u;
    {
        const bool branch_taken_0x3b2628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B262Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2628u;
        // 0x3b262c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2628) {
            ctx->pc = 0x3B2638u;
            goto label_3b2638;
        }
    }
    ctx->pc = 0x3B2630u;
label_3b2630:
    // 0x3b2630: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3b2630u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b2634: 0x0  nop
    ctx->pc = 0x3b2634u;
    // NOP
label_3b2638:
    // 0x3b2638: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3b2638u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3b263c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3b263cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b2640: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3b2640u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b2644: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3b2644u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b2648: 0x3e00008  jr          $ra
    ctx->pc = 0x3B2648u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B264Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2648u;
        // 0x3b264c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B2648u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B2650u;
}
