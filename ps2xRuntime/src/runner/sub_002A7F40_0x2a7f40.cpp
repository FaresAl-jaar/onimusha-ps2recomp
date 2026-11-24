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

// Function: sub_002A7F40
// Address: 0x2a7f40 - 0x2a7f8c
void sub_002A7F40_0x2a7f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A7F40_0x2a7f40");
#endif

    switch (ctx->pc) {
        case 0x2a7f80u: goto label_2a7f80;
        default: break;
    }

    ctx->pc = 0x2a7f40u;

    // 0x2a7f40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2a7f40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2a7f44: 0xe0582d  daddu       $t3, $a3, $zero
    ctx->pc = 0x2a7f44u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7f48: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2a7f48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2a7f4c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2a7f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a7f50: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x2a7f50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x2a7f54: 0xc0502d  daddu       $t2, $a2, $zero
    ctx->pc = 0x2a7f54u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7f58: 0xffa80008  sd          $t0, 0x8($sp)
    ctx->pc = 0x2a7f58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 8));
    // 0x2a7f5c: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2a7f5cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7f60: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x2a7f60u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7f64: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x2a7f64u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7f68: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2a7f68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2a7f6c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2a7f6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7f70: 0x24060058  addiu       $a2, $zero, 0x58
    ctx->pc = 0x2a7f70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x2a7f74: 0x3445074c  ori         $a1, $v0, 0x74C
    ctx->pc = 0x2a7f74u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1868);
    // 0x2a7f78: 0xc097df4  jal         func_25F7D0
    ctx->pc = 0x2A7F78u;
    SET_GPR_U32(ctx, 31, 0x2A7F80u);
    ctx->pc = 0x2A7F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A7F78u;
    // 0x2a7f7c: 0xffa00010  sd          $zero, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F7D0u, 0x2A7F78u, 0x2A7F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7F80u;
label_2a7f80:
    // 0x2a7f80: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2a7f80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a7f84: 0x3e00008  jr          $ra
    ctx->pc = 0x2A7F84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A7F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7F84u;
        // 0x2a7f88: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A7F84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A7F8Cu;
}
