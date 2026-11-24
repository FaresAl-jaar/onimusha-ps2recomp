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

// Function: sub_00231A00
// Address: 0x231a00 - 0x231a38
void sub_00231A00_0x231a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00231A00_0x231a00");
#endif

    switch (ctx->pc) {
        case 0x231a14u: goto label_231a14;
        case 0x231a1cu: goto label_231a1c;
        case 0x231a24u: goto label_231a24;
        default: break;
    }

    ctx->pc = 0x231a00u;

    // 0x231a00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x231a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x231a04: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x231a04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x231a08: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x231a08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x231a0c: 0xc08c732  jal         func_231CC8
    ctx->pc = 0x231A0Cu;
    SET_GPR_U32(ctx, 31, 0x231A14u);
    ctx->pc = 0x231A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231A0Cu;
    // 0x231a10: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231CC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231CC8u, 0x231A0Cu, 0x231A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231A14u;
label_231a14:
    // 0x231a14: 0xc08c68e  jal         func_231A38
    ctx->pc = 0x231A14u;
    SET_GPR_U32(ctx, 31, 0x231A1Cu);
    ctx->pc = 0x231A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231A14u;
    // 0x231a18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A38u, 0x231A14u, 0x231A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231A1Cu;
label_231a1c:
    // 0x231a1c: 0xc08c738  jal         func_231CE0
    ctx->pc = 0x231A1Cu;
    SET_GPR_U32(ctx, 31, 0x231A24u);
    ctx->pc = 0x231A20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231A1Cu;
    // 0x231a20: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231CE0u, 0x231A1Cu, 0x231A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231A24u;
label_231a24:
    // 0x231a24: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x231a24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x231a28: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x231a28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231a2c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x231a2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x231a30: 0x3e00008  jr          $ra
    ctx->pc = 0x231A30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x231A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231A30u;
        // 0x231a34: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x231A30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x231A38u;
}
