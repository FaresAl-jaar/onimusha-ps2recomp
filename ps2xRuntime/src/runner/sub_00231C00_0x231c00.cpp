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

// Function: sub_00231C00
// Address: 0x231c00 - 0x231c38
void sub_00231C00_0x231c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00231C00_0x231c00");
#endif

    switch (ctx->pc) {
        case 0x231c14u: goto label_231c14;
        case 0x231c1cu: goto label_231c1c;
        case 0x231c24u: goto label_231c24;
        default: break;
    }

    ctx->pc = 0x231c00u;

    // 0x231c00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x231c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x231c04: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x231c04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x231c08: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x231c08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x231c0c: 0xc08c732  jal         func_231CC8
    ctx->pc = 0x231C0Cu;
    SET_GPR_U32(ctx, 31, 0x231C14u);
    ctx->pc = 0x231C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231C0Cu;
    // 0x231c10: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231CC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231CC8u, 0x231C0Cu, 0x231C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231C14u;
label_231c14:
    // 0x231c14: 0xc08c70e  jal         func_231C38
    ctx->pc = 0x231C14u;
    SET_GPR_U32(ctx, 31, 0x231C1Cu);
    ctx->pc = 0x231C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231C14u;
    // 0x231c18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231C38u, 0x231C14u, 0x231C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231C1Cu;
label_231c1c:
    // 0x231c1c: 0xc08c738  jal         func_231CE0
    ctx->pc = 0x231C1Cu;
    SET_GPR_U32(ctx, 31, 0x231C24u);
    ctx->pc = 0x231C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231C1Cu;
    // 0x231c20: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231CE0u, 0x231C1Cu, 0x231C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231C24u;
label_231c24:
    // 0x231c24: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x231c24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x231c28: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x231c28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231c2c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x231c2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x231c30: 0x3e00008  jr          $ra
    ctx->pc = 0x231C30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x231C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231C30u;
        // 0x231c34: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x231C30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x231C38u;
}
