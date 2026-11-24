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

// Function: sub_0024BE68
// Address: 0x24be68 - 0x24bea0
void sub_0024BE68_0x24be68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024BE68_0x24be68");
#endif

    switch (ctx->pc) {
        case 0x24be7cu: goto label_24be7c;
        case 0x24be84u: goto label_24be84;
        case 0x24be8cu: goto label_24be8c;
        default: break;
    }

    ctx->pc = 0x24be68u;

    // 0x24be68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x24be68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24be6c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24be6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24be70: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x24be70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x24be74: 0xc092fee  jal         func_24BFB8
    ctx->pc = 0x24BE74u;
    SET_GPR_U32(ctx, 31, 0x24BE7Cu);
    ctx->pc = 0x24BE78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24BE74u;
    // 0x24be78: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24BFB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24BFB8u, 0x24BE74u, 0x24BE7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24BE7Cu;
label_24be7c:
    // 0x24be7c: 0xc092fa8  jal         func_24BEA0
    ctx->pc = 0x24BE7Cu;
    SET_GPR_U32(ctx, 31, 0x24BE84u);
    ctx->pc = 0x24BE80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24BE7Cu;
    // 0x24be80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24BEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24BEA0u, 0x24BE7Cu, 0x24BE84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24BE84u;
label_24be84:
    // 0x24be84: 0xc092ff0  jal         func_24BFC0
    ctx->pc = 0x24BE84u;
    SET_GPR_U32(ctx, 31, 0x24BE8Cu);
    ctx->pc = 0x24BE88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24BE84u;
    // 0x24be88: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24BFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24BFC0u, 0x24BE84u, 0x24BE8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24BE8Cu;
label_24be8c:
    // 0x24be8c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x24be8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x24be90: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x24be90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24be94: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24be94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24be98: 0x3e00008  jr          $ra
    ctx->pc = 0x24BE98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24BE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BE98u;
        // 0x24be9c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24BE98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24BEA0u;
}
