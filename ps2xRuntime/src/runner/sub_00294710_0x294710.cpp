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

// Function: sub_00294710
// Address: 0x294710 - 0x294748
void sub_00294710_0x294710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00294710_0x294710");
#endif

    switch (ctx->pc) {
        case 0x294728u: goto label_294728;
        case 0x294730u: goto label_294730;
        case 0x294738u: goto label_294738;
        default: break;
    }

    ctx->pc = 0x294710u;

    // 0x294710: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x294710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x294714: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x294714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x294718: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x294718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x29471c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29471cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294720: 0xc096c4c  jal         func_25B130
    ctx->pc = 0x294720u;
    SET_GPR_U32(ctx, 31, 0x294728u);
    ctx->pc = 0x294724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294720u;
    // 0x294724: 0x8c842950  lw          $a0, 0x2950($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 10576)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B130u, 0x294720u, 0x294728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294728u;
label_294728:
    // 0x294728: 0xc096c4c  jal         func_25B130
    ctx->pc = 0x294728u;
    SET_GPR_U32(ctx, 31, 0x294730u);
    ctx->pc = 0x29472Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294728u;
    // 0x29472c: 0x8e042954  lw          $a0, 0x2954($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10580)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B130u, 0x294728u, 0x294730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294730u;
label_294730:
    // 0x294730: 0xc096c4c  jal         func_25B130
    ctx->pc = 0x294730u;
    SET_GPR_U32(ctx, 31, 0x294738u);
    ctx->pc = 0x294734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294730u;
    // 0x294734: 0x8e042958  lw          $a0, 0x2958($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10584)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B130u, 0x294730u, 0x294738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294738u;
label_294738:
    // 0x294738: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x294738u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29473c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29473cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x294740: 0x3e00008  jr          $ra
    ctx->pc = 0x294740u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x294744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294740u;
        // 0x294744: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x294740u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x294748u;
}
