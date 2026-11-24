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

// Function: sub_003E8C70
// Address: 0x3e8c70 - 0x3e8cc8
void sub_003E8C70_0x3e8c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E8C70_0x3e8c70");
#endif

    switch (ctx->pc) {
        case 0x3e8c88u: goto label_3e8c88;
        default: break;
    }

    ctx->pc = 0x3e8c70u;

    // 0x3e8c70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3e8c70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3e8c74: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3e8c74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3e8c78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3e8c78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3e8c7c: 0x8c8229c0  lw          $v0, 0x29C0($a0)
    ctx->pc = 0x3e8c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 10688)));
    // 0x3e8c80: 0xc0a6998  jal         func_29A660
    ctx->pc = 0x3E8C80u;
    SET_GPR_U32(ctx, 31, 0x3E8C88u);
    ctx->pc = 0x3E8C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E8C80u;
    // 0x3e8c84: 0x94500000  lhu         $s0, 0x0($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A660u, 0x3E8C80u, 0x3E8C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E8C88u;
label_3e8c88:
    // 0x3e8c88: 0x3204ffff  andi        $a0, $s0, 0xFFFF
    ctx->pc = 0x3e8c88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x3e8c8c: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x3e8c8cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3e8c90: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x3e8c90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3e8c94: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x3e8c94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x3e8c98: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3e8c98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3e8c9c: 0x24424d10  addiu       $v0, $v0, 0x4D10
    ctx->pc = 0x3e8c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19728));
    // 0x3e8ca0: 0x65001a  div         $zero, $v1, $a1
    ctx->pc = 0x3e8ca0u;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3e8ca4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3e8ca4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e8ca8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3e8ca8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e8cac: 0x1812  mflo        $v1
    ctx->pc = 0x3e8cacu;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x3e8cb0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3e8cb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3e8cb4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3e8cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3e8cb8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3e8cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3e8cbc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3e8cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3e8cc0: 0x3e00008  jr          $ra
    ctx->pc = 0x3E8CC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E8CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8CC0u;
        // 0x3e8cc4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E8CC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E8CC8u;
}
