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

// Function: sub_00111C38
// Address: 0x111c38 - 0x111c78
void sub_00111C38_0x111c38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00111C38_0x111c38");
#endif

    switch (ctx->pc) {
        case 0x111c60u: goto label_111c60;
        default: break;
    }

    ctx->pc = 0x111c38u;

    // 0x111c38: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x111c38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x111c3c: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x111c3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111c40: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x111c40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x111c44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x111c44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x111c48: 0x34840008  ori         $a0, $a0, 0x8
    ctx->pc = 0x111c48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8);
    // 0x111c4c: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x111c4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x111c50: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x111c50u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111c54: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x111c54u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111c58: 0xc0444da  jal         func_111368
    ctx->pc = 0x111C58u;
    SET_GPR_U32(ctx, 31, 0x111C60u);
    ctx->pc = 0x111C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111C58u;
    // 0x111c5c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111368u, 0x111C58u, 0x111C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111C60u;
label_111c60:
    // 0x111c60: 0x24030800  addiu       $v1, $zero, 0x800
    ctx->pc = 0x111c60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x111c64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x111c64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x111c68: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x111c68u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x111c6c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x111c6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111c70: 0x3e00008  jr          $ra
    ctx->pc = 0x111C70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x111C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111C70u;
        // 0x111c74: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x111C70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x111C78u;
}
