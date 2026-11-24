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

// Function: sub_0022F670
// Address: 0x22f670 - 0x22f6f8
void sub_0022F670_0x22f670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022F670_0x22f670");
#endif

    switch (ctx->pc) {
        case 0x22f6acu: goto label_22f6ac;
        case 0x22f6c8u: goto label_22f6c8;
        case 0x22f6d0u: goto label_22f6d0;
        default: break;
    }

    ctx->pc = 0x22f670u;

    // 0x22f670: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x22f670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x22f674: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x22f674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22f678: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22f678u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f67c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x22f67cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x22f680: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x22f680u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f684: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x22f684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x22f688: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x22f688u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f68c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x22f68cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x22f690: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x22f690u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f694: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x22f694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x22f698: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x22f698u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f69c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x22f69cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x22f6a0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x22f6a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x22f6a4: 0xc08c732  jal         func_231CC8
    ctx->pc = 0x22F6A4u;
    SET_GPR_U32(ctx, 31, 0x22F6ACu);
    ctx->pc = 0x22F6A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F6A4u;
    // 0x22f6a8: 0x120a82d  daddu       $s5, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231CC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231CC8u, 0x22F6A4u, 0x22F6ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F6ACu;
label_22f6ac:
    // 0x22f6ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22f6acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f6b0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x22f6b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f6b4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x22f6b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f6b8: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x22f6b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f6bc: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x22f6bcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f6c0: 0xc08bdbe  jal         func_22F6F8
    ctx->pc = 0x22F6C0u;
    SET_GPR_U32(ctx, 31, 0x22F6C8u);
    ctx->pc = 0x22F6C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F6C0u;
    // 0x22f6c4: 0x2a0482d  daddu       $t1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F6F8u, 0x22F6C0u, 0x22F6C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F6C8u;
label_22f6c8:
    // 0x22f6c8: 0xc08c738  jal         func_231CE0
    ctx->pc = 0x22F6C8u;
    SET_GPR_U32(ctx, 31, 0x22F6D0u);
    ctx->pc = 0x22F6CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F6C8u;
    // 0x22f6cc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231CE0u, 0x22F6C8u, 0x22F6D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F6D0u;
label_22f6d0:
    // 0x22f6d0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x22f6d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x22f6d4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x22f6d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f6d8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x22f6d8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22f6dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22f6dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22f6e0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x22f6e0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x22f6e4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x22f6e4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22f6e8: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x22f6e8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x22f6ec: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x22f6ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22f6f0: 0x3e00008  jr          $ra
    ctx->pc = 0x22F6F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22F6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F6F0u;
        // 0x22f6f4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22F6F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22F6F8u;
}
