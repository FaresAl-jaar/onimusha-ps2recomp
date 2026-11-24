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

// Function: sub_00103BD8
// Address: 0x103bd8 - 0x103c14
void sub_00103BD8_0x103bd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00103BD8_0x103bd8");
#endif

    switch (ctx->pc) {
        case 0x103bf0u: goto label_103bf0;
        case 0x103bfcu: goto label_103bfc;
        default: break;
    }

    ctx->pc = 0x103bd8u;

    // 0x103bd8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x103bd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x103bdc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x103bdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x103be0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x103be0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x103be4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x103be4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x103be8: 0xc0438c0  jal         func_10E300
    ctx->pc = 0x103BE8u;
    SET_GPR_U32(ctx, 31, 0x103BF0u);
    ctx->pc = 0x103BECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103BE8u;
    // 0x103bec: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E300u, 0x103BE8u, 0x103BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103BF0u;
label_103bf0:
    // 0x103bf0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x103bf0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103bf4: 0xc0438c8  jal         func_10E320
    ctx->pc = 0x103BF4u;
    SET_GPR_U32(ctx, 31, 0x103BFCu);
    ctx->pc = 0x103BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103BF4u;
    // 0x103bf8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E320u, 0x103BF4u, 0x103BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103BFCu;
label_103bfc:
    // 0x103bfc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x103bfcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103c00: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x103c00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x103c04: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x103c04u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x103c08: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x103c08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x103c0c: 0x3e00008  jr          $ra
    ctx->pc = 0x103C0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x103C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103C0Cu;
        // 0x103c10: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x103C0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x103C14u;
}
