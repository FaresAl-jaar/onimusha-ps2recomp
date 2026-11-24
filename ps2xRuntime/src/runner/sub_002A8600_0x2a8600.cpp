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

// Function: sub_002A8600
// Address: 0x2a8600 - 0x2a864c
void sub_002A8600_0x2a8600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A8600_0x2a8600");
#endif

    switch (ctx->pc) {
        case 0x2a8640u: goto label_2a8640;
        default: break;
    }

    ctx->pc = 0x2a8600u;

    // 0x2a8600: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2a8600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2a8604: 0xe0582d  daddu       $t3, $a3, $zero
    ctx->pc = 0x2a8604u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8608: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2a8608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2a860c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2a860cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2a8610: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x2a8610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x2a8614: 0xc0502d  daddu       $t2, $a2, $zero
    ctx->pc = 0x2a8614u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8618: 0xffa80008  sd          $t0, 0x8($sp)
    ctx->pc = 0x2a8618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 8));
    // 0x2a861c: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2a861cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8620: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x2a8620u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8624: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2a8624u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2a8628: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2a8628u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a862c: 0x3445209c  ori         $a1, $v0, 0x209C
    ctx->pc = 0x2a862cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8348);
    // 0x2a8630: 0x24060240  addiu       $a2, $zero, 0x240
    ctx->pc = 0x2a8630u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 576));
    // 0x2a8634: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x2a8634u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a8638: 0xc097df4  jal         func_25F7D0
    ctx->pc = 0x2A8638u;
    SET_GPR_U32(ctx, 31, 0x2A8640u);
    ctx->pc = 0x2A863Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A8638u;
    // 0x2a863c: 0xffa00010  sd          $zero, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F7D0u, 0x2A8638u, 0x2A8640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8640u;
label_2a8640:
    // 0x2a8640: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2a8640u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a8644: 0x3e00008  jr          $ra
    ctx->pc = 0x2A8644u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A8648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8644u;
        // 0x2a8648: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A8644u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A864Cu;
}
