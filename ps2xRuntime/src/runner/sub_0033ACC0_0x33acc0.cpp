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

// Function: sub_0033ACC0
// Address: 0x33acc0 - 0x33ad14
void sub_0033ACC0_0x33acc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033ACC0_0x33acc0");
#endif

    switch (ctx->pc) {
        case 0x33acfcu: goto label_33acfc;
        case 0x33ad04u: goto label_33ad04;
        default: break;
    }

    ctx->pc = 0x33acc0u;

    // 0x33acc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x33acc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x33acc4: 0x3c040090  lui         $a0, 0x90
    ctx->pc = 0x33acc4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)144 << 16));
    // 0x33acc8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x33acc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x33accc: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x33acccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x33acd0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x33acd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x33acd4: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x33acd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x33acd8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x33acd8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33acdc: 0x24844aa0  addiu       $a0, $a0, 0x4AA0
    ctx->pc = 0x33acdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19104));
    // 0x33ace0: 0x50180a  movz        $v1, $v0, $s0
    ctx->pc = 0x33ace0u;
    if (GPR_U64(ctx, 16) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
    // 0x33ace4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x33ace4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33ace8: 0x31200  sll         $v0, $v1, 8
    ctx->pc = 0x33ace8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x33acec: 0x3407ffff  ori         $a3, $zero, 0xFFFF
    ctx->pc = 0x33acecu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x33acf0: 0x34450004  ori         $a1, $v0, 0x4
    ctx->pc = 0x33acf0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x33acf4: 0xc0c9a00  jal         func_326800
    ctx->pc = 0x33ACF4u;
    SET_GPR_U32(ctx, 31, 0x33ACFCu);
    ctx->pc = 0x33ACF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33ACF4u;
    // 0x33acf8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326800u, 0x33ACF4u, 0x33ACFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33ACFCu;
label_33acfc:
    // 0x33acfc: 0xc0c9a58  jal         func_326960
    ctx->pc = 0x33ACFCu;
    SET_GPR_U32(ctx, 31, 0x33AD04u);
    ctx->pc = 0x33AD00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33ACFCu;
    // 0x33ad00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326960u, 0x33ACFCu, 0x33AD04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33AD04u;
label_33ad04:
    // 0x33ad04: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x33ad04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33ad08: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x33ad08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33ad0c: 0x3e00008  jr          $ra
    ctx->pc = 0x33AD0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33AD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AD0Cu;
        // 0x33ad10: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33AD0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33AD14u;
}
