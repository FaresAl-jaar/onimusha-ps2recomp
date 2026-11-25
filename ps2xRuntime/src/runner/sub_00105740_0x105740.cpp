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

// Function: sub_00105740
// Address: 0x105740 - 0x1057f0
void sub_00105740_0x105740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00105740_0x105740");
#endif

    switch (ctx->pc) {
        case 0x105774u: goto label_105774;
        case 0x105788u: goto label_105788;
        case 0x105794u: goto label_105794;
        case 0x1057a4u: goto label_1057a4;
        case 0x1057b4u: goto label_1057b4;
        case 0x1057c4u: goto label_1057c4;
        case 0x1057d0u: goto label_1057d0;
        default: break;
    }

    ctx->pc = 0x105740u;

    // 0x105740: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x105740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x105744: 0xffb40090  sd          $s4, 0x90($sp)
    ctx->pc = 0x105744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 20));
    // 0x105748: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x105748u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10574c: 0xffb30080  sd          $s3, 0x80($sp)
    ctx->pc = 0x10574cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 19));
    // 0x105750: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x105750u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x105754: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x105754u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105758: 0xffb10060  sd          $s1, 0x60($sp)
    ctx->pc = 0x105758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 17));
    // 0x10575c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x10575cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105760: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x105760u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105764: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x105764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x105768: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x105768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x10576c: 0xc04150c  jal         func_105430
    ctx->pc = 0x10576Cu;
    SET_GPR_U32(ctx, 31, 0x105774u);
    ctx->pc = 0x105770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10576Cu;
    // 0x105770: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105430u, 0x10576Cu, 0x105774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105774u;
label_105774:
    // 0x105774: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x105774u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x105778: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x105778u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10577c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10577cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105780: 0xc041460  jal         func_105180
    ctx->pc = 0x105780u;
    SET_GPR_U32(ctx, 31, 0x105788u);
    ctx->pc = 0x105784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105780u;
    // 0x105784: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105180u, 0x105780u, 0x105788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105788u;
label_105788:
    // 0x105788: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x105788u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10578c: 0xc041472  jal         func_1051C8
    ctx->pc = 0x10578Cu;
    SET_GPR_U32(ctx, 31, 0x105794u);
    ctx->pc = 0x105790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10578Cu;
    // 0x105790: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x10578Cu, 0x105794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105794u;
label_105794:
    // 0x105794: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x105794u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x105798: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x105798u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10579c: 0xc041472  jal         func_1051C8
    ctx->pc = 0x10579Cu;
    SET_GPR_U32(ctx, 31, 0x1057A4u);
    ctx->pc = 0x1057A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10579Cu;
    // 0x1057a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x10579Cu, 0x1057A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1057A4u;
label_1057a4:
    // 0x1057a4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1057a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1057a8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1057a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1057ac: 0xc041460  jal         func_105180
    ctx->pc = 0x1057ACu;
    SET_GPR_U32(ctx, 31, 0x1057B4u);
    ctx->pc = 0x1057B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1057ACu;
    // 0x1057b0: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105180u, 0x1057ACu, 0x1057B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1057B4u;
label_1057b4:
    // 0x1057b4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1057b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1057b8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1057b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1057bc: 0xc0414e2  jal         func_105388
    ctx->pc = 0x1057BCu;
    SET_GPR_U32(ctx, 31, 0x1057C4u);
    ctx->pc = 0x1057C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1057BCu;
    // 0x1057c0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105388u, 0x1057BCu, 0x1057C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1057C4u;
label_1057c4:
    // 0x1057c4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1057c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1057c8: 0xc041494  jal         func_105250
    ctx->pc = 0x1057C8u;
    SET_GPR_U32(ctx, 31, 0x1057D0u);
    ctx->pc = 0x1057CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1057C8u;
    // 0x1057cc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105250u, 0x1057C8u, 0x1057D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1057D0u;
label_1057d0:
    // 0x1057d0: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x1057d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1057d4: 0xdfb40090  ld          $s4, 0x90($sp)
    ctx->pc = 0x1057d4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1057d8: 0xdfb30080  ld          $s3, 0x80($sp)
    ctx->pc = 0x1057d8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1057dc: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x1057dcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1057e0: 0xdfb10060  ld          $s1, 0x60($sp)
    ctx->pc = 0x1057e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1057e4: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x1057e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1057e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1057E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1057ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1057E8u;
        // 0x1057ec: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1057E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1057F0u;
}
