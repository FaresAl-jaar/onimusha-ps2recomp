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

// Function: sub_002A9CD0
// Address: 0x2a9cd0 - 0x2a9d1c
void sub_002A9CD0_0x2a9cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A9CD0_0x2a9cd0");
#endif

    switch (ctx->pc) {
        case 0x2a9d10u: goto label_2a9d10;
        default: break;
    }

    ctx->pc = 0x2a9cd0u;

    // 0x2a9cd0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2a9cd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2a9cd4: 0xe0582d  daddu       $t3, $a3, $zero
    ctx->pc = 0x2a9cd4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9cd8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2a9cd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2a9cdc: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x2a9cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2a9ce0: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x2a9ce0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x2a9ce4: 0xc0502d  daddu       $t2, $a2, $zero
    ctx->pc = 0x2a9ce4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9ce8: 0xffa80008  sd          $t0, 0x8($sp)
    ctx->pc = 0x2a9ce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 8));
    // 0x2a9cec: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2a9cecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9cf0: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x2a9cf0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9cf4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2a9cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2a9cf8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2a9cf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9cfc: 0x3445aefc  ori         $a1, $v0, 0xAEFC
    ctx->pc = 0x2a9cfcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)44796);
    // 0x2a9d00: 0x24060078  addiu       $a2, $zero, 0x78
    ctx->pc = 0x2a9d00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x2a9d04: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x2a9d04u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a9d08: 0xc097df4  jal         func_25F7D0
    ctx->pc = 0x2A9D08u;
    SET_GPR_U32(ctx, 31, 0x2A9D10u);
    ctx->pc = 0x2A9D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9D08u;
    // 0x2a9d0c: 0xffa00010  sd          $zero, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F7D0u, 0x2A9D08u, 0x2A9D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9D10u;
label_2a9d10:
    // 0x2a9d10: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2a9d10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a9d14: 0x3e00008  jr          $ra
    ctx->pc = 0x2A9D14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A9D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9D14u;
        // 0x2a9d18: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A9D14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A9D1Cu;
}
