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

// Function: sub_003C1790
// Address: 0x3c1790 - 0x3c17c0
void sub_003C1790_0x3c1790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C1790_0x3c1790");
#endif

    switch (ctx->pc) {
        case 0x3c17acu: goto label_3c17ac;
        default: break;
    }

    ctx->pc = 0x3c1790u;

    // 0x3c1790: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3c1790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3c1794: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3c1794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3c1798: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3c1798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3c179c: 0xac8500b8  sw          $a1, 0xB8($a0)
    ctx->pc = 0x3c179cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 184), GPR_U32(ctx, 5));
    // 0x3c17a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3c17a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c17a4: 0xc0f0748  jal         func_3C1D20
    ctx->pc = 0x3C17A4u;
    SET_GPR_U32(ctx, 31, 0x3C17ACu);
    ctx->pc = 0x3C17A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C17A4u;
    // 0x3c17a8: 0x8c8400b8  lw          $a0, 0xB8($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 184)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C1D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C1D20u, 0x3C17A4u, 0x3C17ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C17ACu;
label_3c17ac:
    // 0x3c17ac: 0xa20200bc  sb          $v0, 0xBC($s0)
    ctx->pc = 0x3c17acu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 188), (uint8_t)GPR_U32(ctx, 2));
    // 0x3c17b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3c17b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3c17b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3c17b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3c17b8: 0x3e00008  jr          $ra
    ctx->pc = 0x3C17B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C17BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C17B8u;
        // 0x3c17bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C17B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C17C0u;
}
