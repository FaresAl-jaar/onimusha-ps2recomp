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

// Function: sub_002A65E0
// Address: 0x2a65e0 - 0x2a6628
void sub_002A65E0_0x2a65e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A65E0_0x2a65e0");
#endif

    switch (ctx->pc) {
        case 0x2a661cu: goto label_2a661c;
        default: break;
    }

    ctx->pc = 0x2a65e0u;

    // 0x2a65e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2a65e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2a65e4: 0xe0582d  daddu       $t3, $a3, $zero
    ctx->pc = 0x2a65e4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a65e8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2a65e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2a65ec: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2a65ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a65f0: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x2a65f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x2a65f4: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x2a65f4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a65f8: 0xffa80008  sd          $t0, 0x8($sp)
    ctx->pc = 0x2a65f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 8));
    // 0x2a65fc: 0xc0502d  daddu       $t2, $a2, $zero
    ctx->pc = 0x2a65fcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6600: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2a6600u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6604: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x2a6604u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6608: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2a6608u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a660c: 0x34059624  ori         $a1, $zero, 0x9624
    ctx->pc = 0x2a660cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)38436);
    // 0x2a6610: 0x24060108  addiu       $a2, $zero, 0x108
    ctx->pc = 0x2a6610u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 264));
    // 0x2a6614: 0xc097df4  jal         func_25F7D0
    ctx->pc = 0x2A6614u;
    SET_GPR_U32(ctx, 31, 0x2A661Cu);
    ctx->pc = 0x2A6618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6614u;
    // 0x2a6618: 0xffa00010  sd          $zero, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F7D0u, 0x2A6614u, 0x2A661Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A661Cu;
label_2a661c:
    // 0x2a661c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2a661cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a6620: 0x3e00008  jr          $ra
    ctx->pc = 0x2A6620u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A6624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6620u;
        // 0x2a6624: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A6620u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A6628u;
}
