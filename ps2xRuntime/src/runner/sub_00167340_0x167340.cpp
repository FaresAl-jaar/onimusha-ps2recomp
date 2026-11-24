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

// Function: sub_00167340
// Address: 0x167340 - 0x167374
void sub_00167340_0x167340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00167340_0x167340");
#endif

    switch (ctx->pc) {
        case 0x167358u: goto label_167358;
        case 0x167364u: goto label_167364;
        default: break;
    }

    ctx->pc = 0x167340u;

    // 0x167340: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x167340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x167344: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x167344u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167348: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x167348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x16734c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16734cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x167350: 0xc059ce0  jal         func_167380
    ctx->pc = 0x167350u;
    SET_GPR_U32(ctx, 31, 0x167358u);
    ctx->pc = 0x167354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167350u;
    // 0x167354: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x167380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167380u, 0x167350u, 0x167358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167358u;
label_167358:
    // 0x167358: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x167358u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16735c: 0xc059ce0  jal         func_167380
    ctx->pc = 0x16735Cu;
    SET_GPR_U32(ctx, 31, 0x167364u);
    ctx->pc = 0x167360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16735Cu;
    // 0x167360: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x167380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167380u, 0x16735Cu, 0x167364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167364u;
label_167364:
    // 0x167364: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x167364u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x167368: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x167368u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16736c: 0x3e00008  jr          $ra
    ctx->pc = 0x16736Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x167370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16736Cu;
        // 0x167370: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16736Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x167374u;
}
