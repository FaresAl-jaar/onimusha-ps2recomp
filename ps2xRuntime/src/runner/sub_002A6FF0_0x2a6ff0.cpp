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

// Function: sub_002A6FF0
// Address: 0x2a6ff0 - 0x2a7038
void sub_002A6FF0_0x2a6ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A6FF0_0x2a6ff0");
#endif

    switch (ctx->pc) {
        case 0x2a702cu: goto label_2a702c;
        default: break;
    }

    ctx->pc = 0x2a6ff0u;

    // 0x2a6ff0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2a6ff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2a6ff4: 0xe0582d  daddu       $t3, $a3, $zero
    ctx->pc = 0x2a6ff4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6ff8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2a6ff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2a6ffc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2a6ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a7000: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x2a7000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x2a7004: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x2a7004u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7008: 0xffa80008  sd          $t0, 0x8($sp)
    ctx->pc = 0x2a7008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 8));
    // 0x2a700c: 0xc0502d  daddu       $t2, $a2, $zero
    ctx->pc = 0x2a700cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7010: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2a7010u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7014: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x2a7014u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7018: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2a7018u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a701c: 0x3405b97c  ori         $a1, $zero, 0xB97C
    ctx->pc = 0x2a701cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)47484);
    // 0x2a7020: 0x2406003c  addiu       $a2, $zero, 0x3C
    ctx->pc = 0x2a7020u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x2a7024: 0xc097df4  jal         func_25F7D0
    ctx->pc = 0x2A7024u;
    SET_GPR_U32(ctx, 31, 0x2A702Cu);
    ctx->pc = 0x2A7028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A7024u;
    // 0x2a7028: 0xffa00010  sd          $zero, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F7D0u, 0x2A7024u, 0x2A702Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A702Cu;
label_2a702c:
    // 0x2a702c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2a702cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a7030: 0x3e00008  jr          $ra
    ctx->pc = 0x2A7030u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A7034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7030u;
        // 0x2a7034: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A7030u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A7038u;
}
