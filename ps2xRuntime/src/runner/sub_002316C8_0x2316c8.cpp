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

// Function: sub_002316C8
// Address: 0x2316c8 - 0x231754
void sub_002316C8_0x2316c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002316C8_0x2316c8");
#endif

    switch (ctx->pc) {
        case 0x231704u: goto label_231704;
        case 0x231724u: goto label_231724;
        case 0x23172cu: goto label_23172c;
        default: break;
    }

    ctx->pc = 0x2316c8u;

    // 0x2316c8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2316c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2316cc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2316ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2316d0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2316d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2316d4: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2316d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x2316d8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2316d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2316dc: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2316dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2316e0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2316e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2316e4: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x2316e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x2316e8: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x2316e8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2316ec: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x2316ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x2316f0: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x2316f0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2316f4: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x2316f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x2316f8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2316f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2316fc: 0xc08c732  jal         func_231CC8
    ctx->pc = 0x2316FCu;
    SET_GPR_U32(ctx, 31, 0x231704u);
    ctx->pc = 0x231700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2316FCu;
    // 0x231700: 0x120a82d  daddu       $s5, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231CC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231CC8u, 0x2316FCu, 0x231704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231704u;
label_231704:
    // 0x231704: 0x3a0502d  daddu       $t2, $sp, $zero
    ctx->pc = 0x231704u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231708: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x231708u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23170c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x23170cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231710: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x231710u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231714: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x231714u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231718: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x231718u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23171c: 0xc08c5d6  jal         func_231758
    ctx->pc = 0x23171Cu;
    SET_GPR_U32(ctx, 31, 0x231724u);
    ctx->pc = 0x231720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23171Cu;
    // 0x231720: 0x2a0482d  daddu       $t1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231758u, 0x23171Cu, 0x231724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231724u;
label_231724:
    // 0x231724: 0xc08c738  jal         func_231CE0
    ctx->pc = 0x231724u;
    SET_GPR_U32(ctx, 31, 0x23172Cu);
    ctx->pc = 0x231728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231724u;
    // 0x231728: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231CE0u, 0x231724u, 0x23172Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23172Cu;
label_23172c:
    // 0x23172c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x23172cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x231730: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x231730u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231734: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x231734u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x231738: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x231738u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23173c: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x23173cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x231740: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x231740u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x231744: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x231744u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x231748: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x231748u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x23174c: 0x3e00008  jr          $ra
    ctx->pc = 0x23174Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x231750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23174Cu;
        // 0x231750: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23174Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x231754u;
}
