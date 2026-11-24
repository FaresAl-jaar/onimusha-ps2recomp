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

// Function: sub_002ABA00
// Address: 0x2aba00 - 0x2aba40
void sub_002ABA00_0x2aba00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ABA00_0x2aba00");
#endif

    switch (ctx->pc) {
        case 0x2aba34u: goto label_2aba34;
        default: break;
    }

    ctx->pc = 0x2aba00u;

    // 0x2aba00: 0xe0582d  daddu       $t3, $a3, $zero
    ctx->pc = 0x2aba00u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aba04: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2aba04u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2aba08: 0xc0502d  daddu       $t2, $a2, $zero
    ctx->pc = 0x2aba08u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aba0c: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2aba0cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aba10: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2aba10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2aba14: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x2aba14u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aba18: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x2aba18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x2aba1c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2aba1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aba20: 0x240603f4  addiu       $a2, $zero, 0x3F4
    ctx->pc = 0x2aba20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1012));
    // 0x2aba24: 0x34458f20  ori         $a1, $v0, 0x8F20
    ctx->pc = 0x2aba24u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36640);
    // 0x2aba28: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x2aba28u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2aba2c: 0xc097bb8  jal         func_25EEE0
    ctx->pc = 0x2ABA2Cu;
    SET_GPR_U32(ctx, 31, 0x2ABA34u);
    ctx->pc = 0x2ABA30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ABA2Cu;
    // 0x2aba30: 0xffa00000  sd          $zero, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25EEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25EEE0u, 0x2ABA2Cu, 0x2ABA34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ABA34u;
label_2aba34:
    // 0x2aba34: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2aba34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2aba38: 0x3e00008  jr          $ra
    ctx->pc = 0x2ABA38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ABA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABA38u;
        // 0x2aba3c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ABA38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ABA40u;
}
