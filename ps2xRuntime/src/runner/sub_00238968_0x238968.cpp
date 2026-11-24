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

// Function: sub_00238968
// Address: 0x238968 - 0x2389a0
void sub_00238968_0x238968(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00238968_0x238968");
#endif

    switch (ctx->pc) {
        case 0x23897cu: goto label_23897c;
        case 0x238984u: goto label_238984;
        case 0x23898cu: goto label_23898c;
        default: break;
    }

    ctx->pc = 0x238968u;

    // 0x238968: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x238968u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23896c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23896cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x238970: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x238970u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x238974: 0xc08b534  jal         func_22D4D0
    ctx->pc = 0x238974u;
    SET_GPR_U32(ctx, 31, 0x23897Cu);
    ctx->pc = 0x238978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238974u;
    // 0x238978: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4D0u, 0x238974u, 0x23897Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23897Cu;
label_23897c:
    // 0x23897c: 0xc08e268  jal         func_2389A0
    ctx->pc = 0x23897Cu;
    SET_GPR_U32(ctx, 31, 0x238984u);
    ctx->pc = 0x238980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23897Cu;
    // 0x238980: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2389A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2389A0u, 0x23897Cu, 0x238984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238984u;
label_238984:
    // 0x238984: 0xc08b536  jal         func_22D4D8
    ctx->pc = 0x238984u;
    SET_GPR_U32(ctx, 31, 0x23898Cu);
    ctx->pc = 0x238988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238984u;
    // 0x238988: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4D8u, 0x238984u, 0x23898Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23898Cu;
label_23898c:
    // 0x23898c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x23898cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x238990: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x238990u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238994: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x238994u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x238998: 0x3e00008  jr          $ra
    ctx->pc = 0x238998u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23899Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238998u;
        // 0x23899c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x238998u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2389A0u;
}
