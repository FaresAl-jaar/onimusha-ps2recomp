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

// Function: sub_00252D58
// Address: 0x252d58 - 0x252d9c
void sub_00252D58_0x252d58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00252D58_0x252d58");
#endif

    switch (ctx->pc) {
        case 0x252d88u: goto label_252d88;
        default: break;
    }

    ctx->pc = 0x252d58u;

    // 0x252d58: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x252d58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x252d5c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x252d5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x252d60: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x252d60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x252d64: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x252d64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252d68: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x252d68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x252d6c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x252d6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252d70: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x252d70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x252d74: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x252d74u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252d78: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x252d78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x252d7c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x252d7cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252d80: 0xc091ee6  jal         func_247B98
    ctx->pc = 0x252D80u;
    SET_GPR_U32(ctx, 31, 0x252D88u);
    ctx->pc = 0x252D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252D80u;
    // 0x252d84: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x247B98u, 0x252D80u, 0x252D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252D88u;
label_252d88:
    // 0x252d88: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x252d88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x252d8c: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x252d8cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x252d90: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x252d90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x252d94: 0x3e00008  jr          $ra
    ctx->pc = 0x252D94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x252D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252D94u;
        // 0x252d98: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x252D94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x252D9Cu;
}
