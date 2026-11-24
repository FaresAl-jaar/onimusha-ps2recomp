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

// Function: sub_003BB670
// Address: 0x3bb670 - 0x3bb6a0
void sub_003BB670_0x3bb670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BB670_0x3bb670");
#endif

    switch (ctx->pc) {
        case 0x3bb684u: goto label_3bb684;
        default: break;
    }

    ctx->pc = 0x3bb670u;

    // 0x3bb670: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3bb670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3bb674: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3bb674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3bb678: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3bb678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3bb67c: 0xc0a0a34  jal         func_2828D0
    ctx->pc = 0x3BB67Cu;
    SET_GPR_U32(ctx, 31, 0x3BB684u);
    ctx->pc = 0x3BB680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BB67Cu;
    // 0x3bb680: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2828D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2828D0u, 0x3BB67Cu, 0x3BB684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BB684u;
label_3bb684:
    // 0x3bb684: 0x92032b4b  lbu         $v1, 0x2B4B($s0)
    ctx->pc = 0x3bb684u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11083)));
    // 0x3bb688: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x3bb688u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x3bb68c: 0xa2032b4b  sb          $v1, 0x2B4B($s0)
    ctx->pc = 0x3bb68cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11083), (uint8_t)GPR_U32(ctx, 3));
    // 0x3bb690: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3bb690u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3bb694: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3bb694u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3bb698: 0x3e00008  jr          $ra
    ctx->pc = 0x3BB698u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BB69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB698u;
        // 0x3bb69c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BB698u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BB6A0u;
}
