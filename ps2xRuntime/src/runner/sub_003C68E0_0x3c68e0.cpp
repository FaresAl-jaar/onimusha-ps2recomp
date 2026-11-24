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

// Function: sub_003C68E0
// Address: 0x3c68e0 - 0x3c6918
void sub_003C68E0_0x3c68e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C68E0_0x3c68e0");
#endif

    switch (ctx->pc) {
        case 0x3c6904u: goto label_3c6904;
        default: break;
    }

    ctx->pc = 0x3c68e0u;

    // 0x3c68e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3c68e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3c68e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3c68e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3c68e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3c68e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3c68ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3c68ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c68f0: 0x8c8405b8  lw          $a0, 0x5B8($a0)
    ctx->pc = 0x3c68f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1464)));
    // 0x3c68f4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3C68F4u;
    {
        const bool branch_taken_0x3c68f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c68f4) {
            ctx->pc = 0x3C6908u;
            goto label_3c6908;
        }
    }
    ctx->pc = 0x3C68FCu;
    // 0x3c68fc: 0xc096c3c  jal         func_25B0F0
    ctx->pc = 0x3C68FCu;
    SET_GPR_U32(ctx, 31, 0x3C6904u);
    ctx->pc = 0x25B0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B0F0u, 0x3C68FCu, 0x3C6904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C6904u;
label_3c6904:
    // 0x3c6904: 0xae0005b8  sw          $zero, 0x5B8($s0)
    ctx->pc = 0x3c6904u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1464), GPR_U32(ctx, 0));
label_3c6908:
    // 0x3c6908: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3c6908u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3c690c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3c690cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3c6910: 0x3e00008  jr          $ra
    ctx->pc = 0x3C6910u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C6914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6910u;
        // 0x3c6914: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C6910u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C6918u;
}
