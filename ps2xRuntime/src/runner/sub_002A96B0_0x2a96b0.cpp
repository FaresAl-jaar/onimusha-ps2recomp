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

// Function: sub_002A96B0
// Address: 0x2a96b0 - 0x2a9790
void sub_002A96B0_0x2a96b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A96B0_0x2a96b0");
#endif

    switch (ctx->pc) {
        case 0x2a96fcu: goto label_2a96fc;
        case 0x2a973cu: goto label_2a973c;
        case 0x2a9770u: goto label_2a9770;
        default: break;
    }

    ctx->pc = 0x2a96b0u;

    // 0x2a96b0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2a96b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2a96b4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2a96b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2a96b8: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x2a96b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x2a96bc: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x2a96bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x2a96c0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2a96c0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a96c4: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x2a96c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x2a96c8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2a96c8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a96cc: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2a96ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2a96d0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2a96d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a96d4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2a96d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2a96d8: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x2a96d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a96dc: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x2a96dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x2a96e0: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x2a96e0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x2a96e4: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x2a96e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a96e8: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x2a96e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x2a96ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a96ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a96f0: 0x24c6b3f0  addiu       $a2, $a2, -0x4C10
    ctx->pc = 0x2a96f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294947824));
    // 0x2a96f4: 0xc05edcc  jal         func_17B730
    ctx->pc = 0x2A96F4u;
    SET_GPR_U32(ctx, 31, 0x2A96FCu);
    ctx->pc = 0x2A96F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A96F4u;
    // 0x2a96f8: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17B730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17B730u, 0x2A96F4u, 0x2A96FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A96FCu;
label_2a96fc:
    // 0x2a96fc: 0xffb30000  sd          $s3, 0x0($sp)
    ctx->pc = 0x2a96fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 19));
    // 0x2a9700: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2a9700u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9704: 0x8e47004c  lw          $a3, 0x4C($s2)
    ctx->pc = 0x2a9704u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x2a9708: 0x322200ff  andi        $v0, $s1, 0xFF
    ctx->pc = 0x2a9708u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x2a970c: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x2a970cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x2a9710: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x2a9710u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x2a9714: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x2a9714u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x2a9718: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a9718u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a971c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2a971cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9720: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2a9720u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9724: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2a9724u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9728: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2a9728u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a972c: 0x8ce20094  lw          $v0, 0x94($a3)
    ctx->pc = 0x2a972cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 148)));
    // 0x2a9730: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a9730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a9734: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x2A9734u;
    SET_GPR_U32(ctx, 31, 0x2A973Cu);
    ctx->pc = 0x2A9738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9734u;
    // 0x2a9738: 0x24470030  addiu       $a3, $v0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x2A9734u, 0x2A973Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A973Cu;
label_2a973c:
    // 0x2a973c: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x2a973cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a9740: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2a9740u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2a9744: 0xffa80000  sd          $t0, 0x0($sp)
    ctx->pc = 0x2a9744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 8));
    // 0x2a9748: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x2a9748u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a974c: 0xffb00008  sd          $s0, 0x8($sp)
    ctx->pc = 0x2a974cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 16));
    // 0x2a9750: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x2a9750u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9754: 0x240502d  daddu       $t2, $s2, $zero
    ctx->pc = 0x2a9754u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9758: 0x220582d  daddu       $t3, $s1, $zero
    ctx->pc = 0x2a9758u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a975c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2a975cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9760: 0x34459d38  ori         $a1, $v0, 0x9D38
    ctx->pc = 0x2a9760u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)40248);
    // 0x2a9764: 0x2406009c  addiu       $a2, $zero, 0x9C
    ctx->pc = 0x2a9764u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 156));
    // 0x2a9768: 0xc097df4  jal         func_25F7D0
    ctx->pc = 0x2A9768u;
    SET_GPR_U32(ctx, 31, 0x2A9770u);
    ctx->pc = 0x2A976Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9768u;
    // 0x2a976c: 0xffa00010  sd          $zero, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F7D0u, 0x2A9768u, 0x2A9770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9770u;
label_2a9770:
    // 0x2a9770: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2a9770u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2a9774: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x2a9774u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2a9778: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x2a9778u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a977c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x2a977cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a9780: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2a9780u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a9784: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2a9784u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a9788: 0x3e00008  jr          $ra
    ctx->pc = 0x2A9788u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A978Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9788u;
        // 0x2a978c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A9788u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A9790u;
}
