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

// Function: sub_00231238
// Address: 0x231238 - 0x231270
void sub_00231238_0x231238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00231238_0x231238");
#endif

    switch (ctx->pc) {
        case 0x23124cu: goto label_23124c;
        case 0x231254u: goto label_231254;
        case 0x23125cu: goto label_23125c;
        default: break;
    }

    ctx->pc = 0x231238u;

    // 0x231238: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x231238u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23123c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23123cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x231240: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x231240u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x231244: 0xc08c732  jal         func_231CC8
    ctx->pc = 0x231244u;
    SET_GPR_U32(ctx, 31, 0x23124Cu);
    ctx->pc = 0x231248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231244u;
    // 0x231248: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231CC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231CC8u, 0x231244u, 0x23124Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23124Cu;
label_23124c:
    // 0x23124c: 0xc08c49c  jal         func_231270
    ctx->pc = 0x23124Cu;
    SET_GPR_U32(ctx, 31, 0x231254u);
    ctx->pc = 0x231250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23124Cu;
    // 0x231250: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231270u, 0x23124Cu, 0x231254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231254u;
label_231254:
    // 0x231254: 0xc08c738  jal         func_231CE0
    ctx->pc = 0x231254u;
    SET_GPR_U32(ctx, 31, 0x23125Cu);
    ctx->pc = 0x231258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231254u;
    // 0x231258: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231CE0u, 0x231254u, 0x23125Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23125Cu;
label_23125c:
    // 0x23125c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x23125cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x231260: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x231260u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231264: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x231264u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x231268: 0x3e00008  jr          $ra
    ctx->pc = 0x231268u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23126Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231268u;
        // 0x23126c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x231268u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x231270u;
}
