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

// Function: sub_00230058
// Address: 0x230058 - 0x230090
void sub_00230058_0x230058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00230058_0x230058");
#endif

    switch (ctx->pc) {
        case 0x23006cu: goto label_23006c;
        case 0x230074u: goto label_230074;
        case 0x23007cu: goto label_23007c;
        default: break;
    }

    ctx->pc = 0x230058u;

    // 0x230058: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x230058u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23005c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23005cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x230060: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x230060u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x230064: 0xc08c732  jal         func_231CC8
    ctx->pc = 0x230064u;
    SET_GPR_U32(ctx, 31, 0x23006Cu);
    ctx->pc = 0x230068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230064u;
    // 0x230068: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231CC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231CC8u, 0x230064u, 0x23006Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23006Cu;
label_23006c:
    // 0x23006c: 0xc08c024  jal         func_230090
    ctx->pc = 0x23006Cu;
    SET_GPR_U32(ctx, 31, 0x230074u);
    ctx->pc = 0x230070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23006Cu;
    // 0x230070: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230090u, 0x23006Cu, 0x230074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230074u;
label_230074:
    // 0x230074: 0xc08c738  jal         func_231CE0
    ctx->pc = 0x230074u;
    SET_GPR_U32(ctx, 31, 0x23007Cu);
    ctx->pc = 0x230078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230074u;
    // 0x230078: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231CE0u, 0x230074u, 0x23007Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23007Cu;
label_23007c:
    // 0x23007c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x23007cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x230080: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x230080u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230084: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x230084u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x230088: 0x3e00008  jr          $ra
    ctx->pc = 0x230088u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23008Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230088u;
        // 0x23008c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x230088u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x230090u;
}
