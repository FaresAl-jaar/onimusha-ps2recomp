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

// Function: sub_00206E30
// Address: 0x206e30 - 0x206e60
void sub_00206E30_0x206e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00206E30_0x206e30");
#endif

    switch (ctx->pc) {
        case 0x206e50u: goto label_206e50;
        default: break;
    }

    ctx->pc = 0x206e30u;

    // 0x206e30: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x206e30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206e34: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x206e34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x206e38: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x206e38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x206e3c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x206e3cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x206e40: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x206e40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206e44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x206e44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x206e48: 0xc049522  jal         func_125488
    ctx->pc = 0x206E48u;
    SET_GPR_U32(ctx, 31, 0x206E50u);
    ctx->pc = 0x206E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206E48u;
    // 0x206e4c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x206E48u, 0x206E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206E50u;
label_206e50:
    // 0x206e50: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x206e50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206e54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x206e54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x206e58: 0x3e00008  jr          $ra
    ctx->pc = 0x206E58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x206E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206E58u;
        // 0x206e5c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x206E58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x206E60u;
}
