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

// Function: sub_0019CD30
// Address: 0x19cd30 - 0x19cd78
void sub_0019CD30_0x19cd30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019CD30_0x19cd30");
#endif

    switch (ctx->pc) {
        case 0x19cd6cu: goto label_19cd6c;
        default: break;
    }

    ctx->pc = 0x19cd30u;

    // 0x19cd30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19cd30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19cd34: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x19cd34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x19cd38: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x19cd38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19cd3c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x19cd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19cd40: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x19cd40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x19cd44: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x19cd44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x19cd48: 0x51600  sll         $v0, $a1, 24
    ctx->pc = 0x19cd48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x19cd4c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19cd4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19cd50: 0x3445007f  ori         $a1, $v0, 0x7F
    ctx->pc = 0x19cd50u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)127);
    // 0x19cd54: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x19cd54u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19cd58: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x19cd58u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19cd5c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x19cd5cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19cd60: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x19cd60u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19cd64: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x19CD64u;
    SET_GPR_U32(ctx, 31, 0x19CD6Cu);
    ctx->pc = 0x19CD68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19CD64u;
    // 0x19cd68: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x19CD64u, 0x19CD6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19CD6Cu;
label_19cd6c:
    // 0x19cd6c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19cd6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19cd70: 0x3e00008  jr          $ra
    ctx->pc = 0x19CD70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19CD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CD70u;
        // 0x19cd74: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19CD70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19CD78u;
}
