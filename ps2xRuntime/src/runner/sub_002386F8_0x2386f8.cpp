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

// Function: sub_002386F8
// Address: 0x2386f8 - 0x238740
void sub_002386F8_0x2386f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002386F8_0x2386f8");
#endif

    switch (ctx->pc) {
        case 0x238714u: goto label_238714;
        case 0x238720u: goto label_238720;
        case 0x238728u: goto label_238728;
        default: break;
    }

    ctx->pc = 0x2386f8u;

    // 0x2386f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2386f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2386fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2386fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x238700: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x238700u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238704: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x238704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x238708: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x238708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x23870c: 0xc08e2bc  jal         func_238AF0
    ctx->pc = 0x23870Cu;
    SET_GPR_U32(ctx, 31, 0x238714u);
    ctx->pc = 0x238710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23870Cu;
    // 0x238710: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238AF0u, 0x23870Cu, 0x238714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238714u;
label_238714:
    // 0x238714: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x238714u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238718: 0xc08e1d0  jal         func_238740
    ctx->pc = 0x238718u;
    SET_GPR_U32(ctx, 31, 0x238720u);
    ctx->pc = 0x23871Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238718u;
    // 0x23871c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238740u, 0x238718u, 0x238720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238720u;
label_238720:
    // 0x238720: 0xc08e2c2  jal         func_238B08
    ctx->pc = 0x238720u;
    SET_GPR_U32(ctx, 31, 0x238728u);
    ctx->pc = 0x238724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238720u;
    // 0x238724: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238B08u, 0x238720u, 0x238728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238728u;
label_238728:
    // 0x238728: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x238728u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23872c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x23872cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238730: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x238730u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x238734: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x238734u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x238738: 0x3e00008  jr          $ra
    ctx->pc = 0x238738u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23873Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238738u;
        // 0x23873c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x238738u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x238740u;
}
