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

// Function: sub_0025B2E0
// Address: 0x25b2e0 - 0x25b31c
void sub_0025B2E0_0x25b2e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025B2E0_0x25b2e0");
#endif

    switch (ctx->pc) {
        case 0x25b304u: goto label_25b304;
        default: break;
    }

    ctx->pc = 0x25b2e0u;

    // 0x25b2e0: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x25b2e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b2e4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x25b2e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x25b2e8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x25b2e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b2ec: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x25b2ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b2f0: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x25b2f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x25b2f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25b2f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25b2f8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x25b2f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b2fc: 0xc04ed64  jal         func_13B590
    ctx->pc = 0x25B2FCu;
    SET_GPR_U32(ctx, 31, 0x25B304u);
    ctx->pc = 0x25B300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B2FCu;
    // 0x25b300: 0x24846710  addiu       $a0, $a0, 0x6710 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13B590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13B590u, 0x25B2FCu, 0x25B304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B304u;
label_25b304:
    // 0x25b304: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25b304u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25b308: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x25b308u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x25b30c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x25b30cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x25b310: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x25b310u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25b314: 0x3e00008  jr          $ra
    ctx->pc = 0x25B314u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25B318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B314u;
        // 0x25b318: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25B314u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25B31Cu;
}
