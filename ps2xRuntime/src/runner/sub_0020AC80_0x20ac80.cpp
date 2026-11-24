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

// Function: sub_0020AC80
// Address: 0x20ac80 - 0x20ad04
void sub_0020AC80_0x20ac80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020AC80_0x20ac80");
#endif

    switch (ctx->pc) {
        case 0x20acccu: goto label_20accc;
        case 0x20ace4u: goto label_20ace4;
        default: break;
    }

    ctx->pc = 0x20ac80u;

    // 0x20ac80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x20ac80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x20ac84: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x20ac84u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ac88: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20ac88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x20ac8c: 0x58140  sll         $s0, $a1, 5
    ctx->pc = 0x20ac8cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x20ac90: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x20ac90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x20ac94: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x20ac94u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ac98: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x20ac98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x20ac9c: 0x908021  addu        $s0, $a0, $s0
    ctx->pc = 0x20ac9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x20aca0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x20aca0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x20aca4: 0x26100284  addiu       $s0, $s0, 0x284
    ctx->pc = 0x20aca4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 644));
    // 0x20aca8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x20aca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x20acac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x20acacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20acb0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x20acb0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20acb4: 0x8c91003c  lw          $s1, 0x3C($a0)
    ctx->pc = 0x20acb4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x20acb8: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x20acb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x20acbc: 0x8e120014  lw          $s2, 0x14($s0)
    ctx->pc = 0x20acbcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x20acc0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20acc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20acc4: 0xc0849da  jal         func_212768
    ctx->pc = 0x20ACC4u;
    SET_GPR_U32(ctx, 31, 0x20ACCCu);
    ctx->pc = 0x20ACC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20ACC4u;
    // 0x20acc8: 0x24a500c0  addiu       $a1, $a1, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212768u, 0x20ACC4u, 0x20ACCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20ACCCu;
label_20accc:
    // 0x20accc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20acccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20acd0: 0x266500c0  addiu       $a1, $s3, 0xC0
    ctx->pc = 0x20acd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 192));
    // 0x20acd4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x20acd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20acd8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x20acd8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20acdc: 0xc0849da  jal         func_212768
    ctx->pc = 0x20ACDCu;
    SET_GPR_U32(ctx, 31, 0x20ACE4u);
    ctx->pc = 0x20ACE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20ACDCu;
    // 0x20ace0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212768u, 0x20ACDCu, 0x20ACE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20ACE4u;
label_20ace4:
    // 0x20ace4: 0xae130018  sw          $s3, 0x18($s0)
    ctx->pc = 0x20ace4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 19));
    // 0x20ace8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x20ace8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20acec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20acecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20acf0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x20acf0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20acf4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x20acf4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20acf8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x20acf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20acfc: 0x3e00008  jr          $ra
    ctx->pc = 0x20ACFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20AD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ACFCu;
        // 0x20ad00: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20ACFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20AD04u;
}
