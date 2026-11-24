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

// Function: sub_00230A60
// Address: 0x230a60 - 0x230ab8
void sub_00230A60_0x230a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00230A60_0x230a60");
#endif

    switch (ctx->pc) {
        case 0x230a84u: goto label_230a84;
        case 0x230a94u: goto label_230a94;
        case 0x230a9cu: goto label_230a9c;
        default: break;
    }

    ctx->pc = 0x230a60u;

    // 0x230a60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x230a60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x230a64: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x230a64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x230a68: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x230a68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230a6c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x230a6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x230a70: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x230a70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230a74: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x230a74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x230a78: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x230a78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x230a7c: 0xc08c732  jal         func_231CC8
    ctx->pc = 0x230A7Cu;
    SET_GPR_U32(ctx, 31, 0x230A84u);
    ctx->pc = 0x230A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230A7Cu;
    // 0x230a80: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231CC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231CC8u, 0x230A7Cu, 0x230A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230A84u;
label_230a84:
    // 0x230a84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x230a84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230a88: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x230a88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230a8c: 0xc08c2ae  jal         func_230AB8
    ctx->pc = 0x230A8Cu;
    SET_GPR_U32(ctx, 31, 0x230A94u);
    ctx->pc = 0x230A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230A8Cu;
    // 0x230a90: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230AB8u, 0x230A8Cu, 0x230A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230A94u;
label_230a94:
    // 0x230a94: 0xc08c738  jal         func_231CE0
    ctx->pc = 0x230A94u;
    SET_GPR_U32(ctx, 31, 0x230A9Cu);
    ctx->pc = 0x230A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230A94u;
    // 0x230a98: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231CE0u, 0x230A94u, 0x230A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230A9Cu;
label_230a9c:
    // 0x230a9c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x230a9cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x230aa0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x230aa0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230aa4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x230aa4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x230aa8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x230aa8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x230aac: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x230aacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x230ab0: 0x3e00008  jr          $ra
    ctx->pc = 0x230AB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x230AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230AB0u;
        // 0x230ab4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x230AB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x230AB8u;
}
