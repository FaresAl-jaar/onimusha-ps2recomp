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

// Function: sub_00350B60
// Address: 0x350b60 - 0x350ba0
void sub_00350B60_0x350b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00350B60_0x350b60");
#endif

    switch (ctx->pc) {
        case 0x350b94u: goto label_350b94;
        default: break;
    }

    ctx->pc = 0x350b60u;

    // 0x350b60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x350b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x350b64: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x350b64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x350b68: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x350b68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x350b6c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x350b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x350b70: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x350b70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x350b74: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x350b74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x350b78: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x350b78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350b7c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x350b7cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350b80: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x350b80u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350b84: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x350b84u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350b88: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x350b88u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350b8c: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x350B8Cu;
    SET_GPR_U32(ctx, 31, 0x350B94u);
    ctx->pc = 0x350B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x350B8Cu;
    // 0x350b90: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x350B8Cu, 0x350B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350B94u;
label_350b94:
    // 0x350b94: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x350b94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x350b98: 0x3e00008  jr          $ra
    ctx->pc = 0x350B98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x350B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350B98u;
        // 0x350b9c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x350B98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x350BA0u;
}
