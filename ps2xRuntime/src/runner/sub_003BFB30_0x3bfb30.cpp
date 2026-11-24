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

// Function: sub_003BFB30
// Address: 0x3bfb30 - 0x3bfb88
void sub_003BFB30_0x3bfb30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BFB30_0x3bfb30");
#endif

    switch (ctx->pc) {
        case 0x3bfb5cu: goto label_3bfb5c;
        case 0x3bfb70u: goto label_3bfb70;
        default: break;
    }

    ctx->pc = 0x3bfb30u;

    // 0x3bfb30: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3bfb30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3bfb34: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3bfb34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3bfb38: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3bfb38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3bfb3c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3bfb3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3bfb40: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3bfb40u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bfb44: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3bfb44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bfb48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3bfb48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3bfb4c: 0x3085ffff  andi        $a1, $a0, 0xFFFF
    ctx->pc = 0x3bfb4cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x3bfb50: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x3bfb50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bfb54: 0xc0efe3c  jal         func_3BF8F0
    ctx->pc = 0x3BFB54u;
    SET_GPR_U32(ctx, 31, 0x3BFB5Cu);
    ctx->pc = 0x3BFB58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BFB54u;
    // 0x3bfb58: 0x27848c94  addiu       $a0, $gp, -0x736C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937748));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF8F0u, 0x3BFB54u, 0x3BFB5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BFB5Cu;
label_3bfb5c:
    // 0x3bfb5c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3bfb5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bfb60: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3bfb60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bfb64: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x3bfb64u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bfb68: 0xc0efe44  jal         func_3BF910
    ctx->pc = 0x3BFB68u;
    SET_GPR_U32(ctx, 31, 0x3BFB70u);
    ctx->pc = 0x3BFB6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BFB68u;
    // 0x3bfb6c: 0x27848c94  addiu       $a0, $gp, -0x736C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937748));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF910u, 0x3BFB68u, 0x3BFB70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BFB70u;
label_3bfb70:
    // 0x3bfb70: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3bfb70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3bfb74: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3bfb74u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3bfb78: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3bfb78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3bfb7c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3bfb7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3bfb80: 0x3e00008  jr          $ra
    ctx->pc = 0x3BFB80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BFB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFB80u;
        // 0x3bfb84: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BFB80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BFB88u;
}
