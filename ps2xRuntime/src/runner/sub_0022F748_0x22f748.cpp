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

// Function: sub_0022F748
// Address: 0x22f748 - 0x22f7d0
void sub_0022F748_0x22f748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022F748_0x22f748");
#endif

    switch (ctx->pc) {
        case 0x22f784u: goto label_22f784;
        case 0x22f7a0u: goto label_22f7a0;
        case 0x22f7a8u: goto label_22f7a8;
        default: break;
    }

    ctx->pc = 0x22f748u;

    // 0x22f748: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x22f748u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x22f74c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x22f74cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22f750: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22f750u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f754: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x22f754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x22f758: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x22f758u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f75c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x22f75cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x22f760: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x22f760u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f764: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x22f764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x22f768: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x22f768u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f76c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x22f76cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x22f770: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x22f770u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f774: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x22f774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x22f778: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x22f778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x22f77c: 0xc08c732  jal         func_231CC8
    ctx->pc = 0x22F77Cu;
    SET_GPR_U32(ctx, 31, 0x22F784u);
    ctx->pc = 0x22F780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F77Cu;
    // 0x22f780: 0x120a82d  daddu       $s5, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231CC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231CC8u, 0x22F77Cu, 0x22F784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F784u;
label_22f784:
    // 0x22f784: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22f784u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f788: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x22f788u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f78c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x22f78cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f790: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x22f790u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f794: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x22f794u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f798: 0xc08bdf4  jal         func_22F7D0
    ctx->pc = 0x22F798u;
    SET_GPR_U32(ctx, 31, 0x22F7A0u);
    ctx->pc = 0x22F79Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F798u;
    // 0x22f79c: 0x2a0482d  daddu       $t1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F7D0u, 0x22F798u, 0x22F7A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F7A0u;
label_22f7a0:
    // 0x22f7a0: 0xc08c738  jal         func_231CE0
    ctx->pc = 0x22F7A0u;
    SET_GPR_U32(ctx, 31, 0x22F7A8u);
    ctx->pc = 0x22F7A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F7A0u;
    // 0x22f7a4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231CE0u, 0x22F7A0u, 0x22F7A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F7A8u;
label_22f7a8:
    // 0x22f7a8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x22f7a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x22f7ac: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x22f7acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f7b0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x22f7b0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22f7b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22f7b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22f7b8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x22f7b8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x22f7bc: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x22f7bcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22f7c0: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x22f7c0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x22f7c4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x22f7c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22f7c8: 0x3e00008  jr          $ra
    ctx->pc = 0x22F7C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22F7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F7C8u;
        // 0x22f7cc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22F7C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22F7D0u;
}
