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

// Function: sub_002A5A20
// Address: 0x2a5a20 - 0x2a5a68
void sub_002A5A20_0x2a5a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A5A20_0x2a5a20");
#endif

    switch (ctx->pc) {
        case 0x2a5a5cu: goto label_2a5a5c;
        default: break;
    }

    ctx->pc = 0x2a5a20u;

    // 0x2a5a20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2a5a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2a5a24: 0xe0582d  daddu       $t3, $a3, $zero
    ctx->pc = 0x2a5a24u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5a28: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2a5a28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2a5a2c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2a5a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2a5a30: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x2a5a30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x2a5a34: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x2a5a34u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5a38: 0xffa80008  sd          $t0, 0x8($sp)
    ctx->pc = 0x2a5a38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 8));
    // 0x2a5a3c: 0xc0502d  daddu       $t2, $a2, $zero
    ctx->pc = 0x2a5a3cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5a40: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2a5a40u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5a44: 0x24056634  addiu       $a1, $zero, 0x6634
    ctx->pc = 0x2a5a44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26164));
    // 0x2a5a48: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2a5a48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5a4c: 0x240601a8  addiu       $a2, $zero, 0x1A8
    ctx->pc = 0x2a5a4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 424));
    // 0x2a5a50: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x2a5a50u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a5a54: 0xc097df4  jal         func_25F7D0
    ctx->pc = 0x2A5A54u;
    SET_GPR_U32(ctx, 31, 0x2A5A5Cu);
    ctx->pc = 0x2A5A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5A54u;
    // 0x2a5a58: 0xffa00010  sd          $zero, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F7D0u, 0x2A5A54u, 0x2A5A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5A5Cu;
label_2a5a5c:
    // 0x2a5a5c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2a5a5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a5a60: 0x3e00008  jr          $ra
    ctx->pc = 0x2A5A60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A5A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5A60u;
        // 0x2a5a64: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A5A60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A5A68u;
}
