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

// Function: sub_0024B978
// Address: 0x24b978 - 0x24b9b0
void sub_0024B978_0x24b978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024B978_0x24b978");
#endif

    switch (ctx->pc) {
        case 0x24b98cu: goto label_24b98c;
        case 0x24b994u: goto label_24b994;
        case 0x24b99cu: goto label_24b99c;
        default: break;
    }

    ctx->pc = 0x24b978u;

    // 0x24b978: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x24b978u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24b97c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24b97cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24b980: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x24b980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x24b984: 0xc092fee  jal         func_24BFB8
    ctx->pc = 0x24B984u;
    SET_GPR_U32(ctx, 31, 0x24B98Cu);
    ctx->pc = 0x24B988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B984u;
    // 0x24b988: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24BFB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24BFB8u, 0x24B984u, 0x24B98Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B98Cu;
label_24b98c:
    // 0x24b98c: 0xc092e6c  jal         func_24B9B0
    ctx->pc = 0x24B98Cu;
    SET_GPR_U32(ctx, 31, 0x24B994u);
    ctx->pc = 0x24B990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B98Cu;
    // 0x24b990: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B9B0u, 0x24B98Cu, 0x24B994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B994u;
label_24b994:
    // 0x24b994: 0xc092ff0  jal         func_24BFC0
    ctx->pc = 0x24B994u;
    SET_GPR_U32(ctx, 31, 0x24B99Cu);
    ctx->pc = 0x24B998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B994u;
    // 0x24b998: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24BFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24BFC0u, 0x24B994u, 0x24B99Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B99Cu;
label_24b99c:
    // 0x24b99c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x24b99cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x24b9a0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x24b9a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b9a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24b9a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24b9a8: 0x3e00008  jr          $ra
    ctx->pc = 0x24B9A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24B9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B9A8u;
        // 0x24b9ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24B9A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24B9B0u;
}
