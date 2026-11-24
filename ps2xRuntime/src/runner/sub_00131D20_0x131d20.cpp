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

// Function: sub_00131D20
// Address: 0x131d20 - 0x131d88
void sub_00131D20_0x131d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00131D20_0x131d20");
#endif

    switch (ctx->pc) {
        case 0x131d64u: goto label_131d64;
        case 0x131d74u: goto label_131d74;
        default: break;
    }

    ctx->pc = 0x131d20u;

    // 0x131d20: 0x2402022c  addiu       $v0, $zero, 0x22C
    ctx->pc = 0x131d20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 556));
    // 0x131d24: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x131d24u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x131d28: 0xc21818  mult        $v1, $a2, $v0
    ctx->pc = 0x131d28u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x131d2c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x131d2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x131d30: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x131d30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x131d34: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x131d34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x131d38: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x131d38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x131d3c: 0x838821  addu        $s1, $a0, $v1
    ctx->pc = 0x131d3cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x131d40: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x131d40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x131d44: 0x2406003c  addiu       $a2, $zero, 0x3C
    ctx->pc = 0x131d44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x131d48: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x131d48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x131d4c: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x131d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x131d50: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x131d50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x131d54: 0x262500d4  addiu       $a1, $s1, 0xD4
    ctx->pc = 0x131d54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 212));
    // 0x131d58: 0x828021  addu        $s0, $a0, $v0
    ctx->pc = 0x131d58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x131d5c: 0xc049522  jal         func_125488
    ctx->pc = 0x131D5Cu;
    SET_GPR_U32(ctx, 31, 0x131D64u);
    ctx->pc = 0x131D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131D5Cu;
    // 0x131d60: 0x26040458  addiu       $a0, $s0, 0x458 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x131D5Cu, 0x131D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131D64u;
label_131d64:
    // 0x131d64: 0x26040494  addiu       $a0, $s0, 0x494
    ctx->pc = 0x131d64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1172));
    // 0x131d68: 0x26250110  addiu       $a1, $s1, 0x110
    ctx->pc = 0x131d68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
    // 0x131d6c: 0xc049522  jal         func_125488
    ctx->pc = 0x131D6Cu;
    SET_GPR_U32(ctx, 31, 0x131D74u);
    ctx->pc = 0x131D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131D6Cu;
    // 0x131d70: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x131D6Cu, 0x131D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131D74u;
label_131d74:
    // 0x131d74: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x131d74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x131d78: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x131d78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x131d7c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x131d7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x131d80: 0x3e00008  jr          $ra
    ctx->pc = 0x131D80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x131D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131D80u;
        // 0x131d84: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x131D80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x131D88u;
}
