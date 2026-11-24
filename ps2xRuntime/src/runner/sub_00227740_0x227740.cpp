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

// Function: sub_00227740
// Address: 0x227740 - 0x2277d0
void sub_00227740_0x227740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00227740_0x227740");
#endif

    switch (ctx->pc) {
        case 0x227768u: goto label_227768;
        case 0x22777cu: goto label_22777c;
        case 0x22778cu: goto label_22778c;
        case 0x2277a0u: goto label_2277a0;
        case 0x2277acu: goto label_2277ac;
        case 0x2277bcu: goto label_2277bc;
        default: break;
    }

    ctx->pc = 0x227740u;

    // 0x227740: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x227740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x227744: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x227744u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x227748: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x227748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x22774c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x22774cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227750: 0x24a59538  addiu       $a1, $a1, -0x6AC8
    ctx->pc = 0x227750u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939960));
    // 0x227754: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x227754u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x227758: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x227758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x22775c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x22775cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x227760: 0xc04a040  jal         func_128100
    ctx->pc = 0x227760u;
    SET_GPR_U32(ctx, 31, 0x227768u);
    ctx->pc = 0x227764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227760u;
    // 0x227764: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128100u, 0x227760u, 0x227768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227768u;
label_227768:
    // 0x227768: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x227768u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x22776c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x22776cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227770: 0x24060013  addiu       $a2, $zero, 0x13
    ctx->pc = 0x227770u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x227774: 0xc049ce8  jal         func_1273A0
    ctx->pc = 0x227774u;
    SET_GPR_U32(ctx, 31, 0x22777Cu);
    ctx->pc = 0x227778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227774u;
    // 0x227778: 0x24a59548  addiu       $a1, $a1, -0x6AB8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939976));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1273A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1273A0u, 0x227774u, 0x22777Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22777Cu;
label_22777c:
    // 0x22777c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22777cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227780: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x227780u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227784: 0xc049dd0  jal         func_127740
    ctx->pc = 0x227784u;
    SET_GPR_U32(ctx, 31, 0x22778Cu);
    ctx->pc = 0x227788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227784u;
    // 0x227788: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127740u, 0x227784u, 0x22778Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22778Cu;
label_22778c:
    // 0x22778c: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x22778cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x227790: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x227790u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x227794: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x227794u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227798: 0xc04a040  jal         func_128100
    ctx->pc = 0x227798u;
    SET_GPR_U32(ctx, 31, 0x2277A0u);
    ctx->pc = 0x22779Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227798u;
    // 0x22779c: 0x24a59550  addiu       $a1, $a1, -0x6AB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128100u, 0x227798u, 0x2277A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2277A0u;
label_2277a0:
    // 0x2277a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2277a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2277a4: 0xc089df4  jal         func_2277D0
    ctx->pc = 0x2277A4u;
    SET_GPR_U32(ctx, 31, 0x2277ACu);
    ctx->pc = 0x2277A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2277A4u;
    // 0x2277a8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2277D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2277D0u, 0x2277A4u, 0x2277ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2277ACu;
label_2277ac:
    // 0x2277ac: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x2277acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x2277b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2277b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2277b4: 0xc049dd0  jal         func_127740
    ctx->pc = 0x2277B4u;
    SET_GPR_U32(ctx, 31, 0x2277BCu);
    ctx->pc = 0x2277B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2277B4u;
    // 0x2277b8: 0x24a59558  addiu       $a1, $a1, -0x6AA8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127740u, 0x2277B4u, 0x2277BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2277BCu;
label_2277bc:
    // 0x2277bc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2277bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2277c0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2277c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2277c4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2277c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2277c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2277C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2277CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2277C8u;
        // 0x2277cc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2277C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2277D0u;
}
