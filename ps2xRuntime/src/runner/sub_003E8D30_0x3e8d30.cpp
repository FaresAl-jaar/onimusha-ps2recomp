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

// Function: sub_003E8D30
// Address: 0x3e8d30 - 0x3e8d88
void sub_003E8D30_0x3e8d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E8D30_0x3e8d30");
#endif

    switch (ctx->pc) {
        case 0x3e8d48u: goto label_3e8d48;
        default: break;
    }

    ctx->pc = 0x3e8d30u;

    // 0x3e8d30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3e8d30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3e8d34: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3e8d34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3e8d38: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3e8d38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3e8d3c: 0x8c8229c0  lw          $v0, 0x29C0($a0)
    ctx->pc = 0x3e8d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 10688)));
    // 0x3e8d40: 0xc0a6998  jal         func_29A660
    ctx->pc = 0x3E8D40u;
    SET_GPR_U32(ctx, 31, 0x3E8D48u);
    ctx->pc = 0x3E8D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E8D40u;
    // 0x3e8d44: 0x94500000  lhu         $s0, 0x0($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A660u, 0x3E8D40u, 0x3E8D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E8D48u;
label_3e8d48:
    // 0x3e8d48: 0x3204ffff  andi        $a0, $s0, 0xFFFF
    ctx->pc = 0x3e8d48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x3e8d4c: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x3e8d4cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3e8d50: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x3e8d50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3e8d54: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x3e8d54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x3e8d58: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3e8d58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3e8d5c: 0x24424d50  addiu       $v0, $v0, 0x4D50
    ctx->pc = 0x3e8d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19792));
    // 0x3e8d60: 0x65001a  div         $zero, $v1, $a1
    ctx->pc = 0x3e8d60u;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3e8d64: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3e8d64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e8d68: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3e8d68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e8d6c: 0x1812  mflo        $v1
    ctx->pc = 0x3e8d6cu;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x3e8d70: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3e8d70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3e8d74: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3e8d74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3e8d78: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3e8d78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3e8d7c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3e8d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3e8d80: 0x3e00008  jr          $ra
    ctx->pc = 0x3E8D80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E8D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8D80u;
        // 0x3e8d84: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E8D80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E8D88u;
}
