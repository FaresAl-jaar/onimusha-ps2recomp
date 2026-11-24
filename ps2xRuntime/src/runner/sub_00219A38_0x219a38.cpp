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

// Function: sub_00219A38
// Address: 0x219a38 - 0x219a98
void sub_00219A38_0x219a38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00219A38_0x219a38");
#endif

    switch (ctx->pc) {
        case 0x219a60u: goto label_219a60;
        case 0x219a70u: goto label_219a70;
        case 0x219a7cu: goto label_219a7c;
        default: break;
    }

    ctx->pc = 0x219a38u;

    // 0x219a38: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x219a38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x219a3c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x219a3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x219a40: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x219a40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219a44: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x219a44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x219a48: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x219a48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219a4c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x219a4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x219a50: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x219a50u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219a54: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x219a54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x219a58: 0xc084990  jal         func_212640
    ctx->pc = 0x219A58u;
    SET_GPR_U32(ctx, 31, 0x219A60u);
    ctx->pc = 0x219A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219A58u;
    // 0x219a5c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212640u, 0x219A58u, 0x219A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219A60u;
label_219a60:
    // 0x219a60: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x219a60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219a64: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x219a64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219a68: 0xc0866a6  jal         func_219A98
    ctx->pc = 0x219A68u;
    SET_GPR_U32(ctx, 31, 0x219A70u);
    ctx->pc = 0x219A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219A68u;
    // 0x219a6c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219A98u, 0x219A68u, 0x219A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219A70u;
label_219a70:
    // 0x219a70: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x219a70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219a74: 0xc084996  jal         func_212658
    ctx->pc = 0x219A74u;
    SET_GPR_U32(ctx, 31, 0x219A7Cu);
    ctx->pc = 0x219A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219A74u;
    // 0x219a78: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212658u, 0x219A74u, 0x219A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219A7Cu;
label_219a7c:
    // 0x219a7c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x219a7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219a80: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x219a80u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x219a84: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x219a84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x219a88: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x219a88u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x219a8c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x219a8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x219a90: 0x3e00008  jr          $ra
    ctx->pc = 0x219A90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x219A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219A90u;
        // 0x219a94: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x219A90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x219A98u;
}
