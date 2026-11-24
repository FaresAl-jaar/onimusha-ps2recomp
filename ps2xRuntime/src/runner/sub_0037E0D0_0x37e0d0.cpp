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

// Function: sub_0037E0D0
// Address: 0x37e0d0 - 0x37e110
void sub_0037E0D0_0x37e0d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037E0D0_0x37e0d0");
#endif

    switch (ctx->pc) {
        case 0x37e0f8u: goto label_37e0f8;
        default: break;
    }

    ctx->pc = 0x37e0d0u;

    // 0x37e0d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x37e0d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x37e0d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x37e0d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x37e0d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x37e0d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x37e0dc: 0xa0852b96  sb          $a1, 0x2B96($a0)
    ctx->pc = 0x37e0dcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 11158), (uint8_t)GPR_U32(ctx, 5));
    // 0x37e0e0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x37e0e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37e0e4: 0x8c842b98  lw          $a0, 0x2B98($a0)
    ctx->pc = 0x37e0e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11160)));
    // 0x37e0e8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x37E0E8u;
    {
        const bool branch_taken_0x37e0e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x37e0e8) {
            ctx->pc = 0x37E100u;
            goto label_37e100;
        }
    }
    ctx->pc = 0x37E0F0u;
    // 0x37e0f0: 0xc096c4c  jal         func_25B130
    ctx->pc = 0x37E0F0u;
    SET_GPR_U32(ctx, 31, 0x37E0F8u);
    ctx->pc = 0x25B130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B130u, 0x37E0F0u, 0x37E0F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37E0F8u;
label_37e0f8:
    // 0x37e0f8: 0xae002b98  sw          $zero, 0x2B98($s0)
    ctx->pc = 0x37e0f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11160), GPR_U32(ctx, 0));
    // 0x37e0fc: 0x0  nop
    ctx->pc = 0x37e0fcu;
    // NOP
label_37e100:
    // 0x37e100: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x37e100u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37e104: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x37e104u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37e108: 0x3e00008  jr          $ra
    ctx->pc = 0x37E108u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37E10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E108u;
        // 0x37e10c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37E108u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37E110u;
}
