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

// Function: sub_003C68A0
// Address: 0x3c68a0 - 0x3c68e0
void sub_003C68A0_0x3c68a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C68A0_0x3c68a0");
#endif

    switch (ctx->pc) {
        case 0x3c68b8u: goto label_3c68b8;
        default: break;
    }

    ctx->pc = 0x3c68a0u;

    // 0x3c68a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3c68a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3c68a4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3c68a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3c68a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3c68a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3c68ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3c68acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c68b0: 0xc096c80  jal         func_25B200
    ctx->pc = 0x3C68B0u;
    SET_GPR_U32(ctx, 31, 0x3C68B8u);
    ctx->pc = 0x3C68B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C68B0u;
    // 0x3c68b4: 0x8c8405b8  lw          $a0, 0x5B8($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1464)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B200u, 0x3C68B0u, 0x3C68B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C68B8u;
label_3c68b8:
    // 0x3c68b8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3C68B8u;
    {
        const bool branch_taken_0x3c68b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C68BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C68B8u;
        // 0x3c68bc: 0x26030020  addiu       $v1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c68b8) {
            ctx->pc = 0x3C68D0u;
            goto label_3c68d0;
        }
    }
    ctx->pc = 0x3C68C0u;
    // 0x3c68c0: 0x24440040  addiu       $a0, $v0, 0x40
    ctx->pc = 0x3c68c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x3c68c4: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x3c68c4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3c68c8: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x3c68c8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x3c68cc: 0x0  nop
    ctx->pc = 0x3c68ccu;
    // NOP
label_3c68d0:
    // 0x3c68d0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3c68d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3c68d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3c68d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3c68d8: 0x3e00008  jr          $ra
    ctx->pc = 0x3C68D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C68DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C68D8u;
        // 0x3c68dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C68D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C68E0u;
}
