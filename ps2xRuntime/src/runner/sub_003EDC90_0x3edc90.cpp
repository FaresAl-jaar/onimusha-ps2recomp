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

// Function: sub_003EDC90
// Address: 0x3edc90 - 0x3edcd4
void sub_003EDC90_0x3edc90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EDC90_0x3edc90");
#endif

    switch (ctx->pc) {
        case 0x3edcb0u: goto label_3edcb0;
        default: break;
    }

    ctx->pc = 0x3edc90u;

    // 0x3edc90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3edc90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3edc94: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3edc94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3edc98: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3edc98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3edc9c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3edc9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3edca0: 0x848400c2  lh          $a0, 0xC2($a0)
    ctx->pc = 0x3edca0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 194)));
    // 0x3edca4: 0x86052b50  lh          $a1, 0x2B50($s0)
    ctx->pc = 0x3edca4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11088)));
    // 0x3edca8: 0xc097498  jal         func_25D260
    ctx->pc = 0x3EDCA8u;
    SET_GPR_U32(ctx, 31, 0x3EDCB0u);
    ctx->pc = 0x3EDCACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EDCA8u;
    // 0x3edcac: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25D260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D260u, 0x3EDCA8u, 0x3EDCB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EDCB0u;
label_3edcb0:
    // 0x3edcb0: 0xa60200c2  sh          $v0, 0xC2($s0)
    ctx->pc = 0x3edcb0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 194), (uint16_t)GPR_U32(ctx, 2));
    // 0x3edcb4: 0x860300c2  lh          $v1, 0xC2($s0)
    ctx->pc = 0x3edcb4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 194)));
    // 0x3edcb8: 0x86022b50  lh          $v0, 0x2B50($s0)
    ctx->pc = 0x3edcb8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11088)));
    // 0x3edcbc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3edcbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3edcc0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3edcc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3edcc4: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x3edcc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x3edcc8: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x3edcc8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x3edccc: 0x3e00008  jr          $ra
    ctx->pc = 0x3EDCCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EDCD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EDCCCu;
        // 0x3edcd0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EDCCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3EDCD4u;
}
