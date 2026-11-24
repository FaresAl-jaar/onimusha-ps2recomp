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

// Function: sub_002BC800
// Address: 0x2bc800 - 0x2bc84c
void sub_002BC800_0x2bc800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BC800_0x2bc800");
#endif

    switch (ctx->pc) {
        case 0x2bc838u: goto label_2bc838;
        default: break;
    }

    ctx->pc = 0x2bc800u;

    // 0x2bc800: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2bc800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2bc804: 0x3c040090  lui         $a0, 0x90
    ctx->pc = 0x2bc804u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)144 << 16));
    // 0x2bc808: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2bc808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2bc80c: 0x3c020f00  lui         $v0, 0xF00
    ctx->pc = 0x2bc80cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3840 << 16));
    // 0x2bc810: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2bc810u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2bc814: 0x24844aa0  addiu       $a0, $a0, 0x4AA0
    ctx->pc = 0x2bc814u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19104));
    // 0x2bc818: 0x8ca3004c  lw          $v1, 0x4C($a1)
    ctx->pc = 0x2bc818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 76)));
    // 0x2bc81c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2bc81cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc820: 0x8ca60004  lw          $a2, 0x4($a1)
    ctx->pc = 0x2bc820u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2bc824: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2bc824u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc828: 0x8c630094  lw          $v1, 0x94($v1)
    ctx->pc = 0x2bc828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
    // 0x2bc82c: 0x34454b02  ori         $a1, $v0, 0x4B02
    ctx->pc = 0x2bc82cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)19202);
    // 0x2bc830: 0xc0c99d0  jal         func_326740
    ctx->pc = 0x2BC830u;
    SET_GPR_U32(ctx, 31, 0x2BC838u);
    ctx->pc = 0x2BC834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC830u;
    // 0x2bc834: 0x24670030  addiu       $a3, $v1, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326740u, 0x2BC830u, 0x2BC838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC838u;
label_2bc838:
    // 0x2bc838: 0x26020006  addiu       $v0, $s0, 0x6
    ctx->pc = 0x2bc838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 6));
    // 0x2bc83c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2bc83cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bc840: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2bc840u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bc844: 0x3e00008  jr          $ra
    ctx->pc = 0x2BC844u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BC848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC844u;
        // 0x2bc848: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BC844u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BC84Cu;
}
