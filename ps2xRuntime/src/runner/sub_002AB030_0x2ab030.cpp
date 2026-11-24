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

// Function: sub_002AB030
// Address: 0x2ab030 - 0x2ab07c
void sub_002AB030_0x2ab030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AB030_0x2ab030");
#endif

    switch (ctx->pc) {
        case 0x2ab070u: goto label_2ab070;
        default: break;
    }

    ctx->pc = 0x2ab030u;

    // 0x2ab030: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2ab030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2ab034: 0xe0582d  daddu       $t3, $a3, $zero
    ctx->pc = 0x2ab034u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab038: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2ab038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2ab03c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2ab03cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2ab040: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x2ab040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x2ab044: 0xc0502d  daddu       $t2, $a2, $zero
    ctx->pc = 0x2ab044u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab048: 0xffa80008  sd          $t0, 0x8($sp)
    ctx->pc = 0x2ab048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 8));
    // 0x2ab04c: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2ab04cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab050: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x2ab050u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab054: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x2ab054u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x2ab058: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2ab058u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab05c: 0x344513bc  ori         $a1, $v0, 0x13BC
    ctx->pc = 0x2ab05cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5052);
    // 0x2ab060: 0x240607c4  addiu       $a2, $zero, 0x7C4
    ctx->pc = 0x2ab060u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1988));
    // 0x2ab064: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x2ab064u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ab068: 0xc097df4  jal         func_25F7D0
    ctx->pc = 0x2AB068u;
    SET_GPR_U32(ctx, 31, 0x2AB070u);
    ctx->pc = 0x2AB06Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB068u;
    // 0x2ab06c: 0xffa00010  sd          $zero, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F7D0u, 0x2AB068u, 0x2AB070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB070u;
label_2ab070:
    // 0x2ab070: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2ab070u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ab074: 0x3e00008  jr          $ra
    ctx->pc = 0x2AB074u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AB078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB074u;
        // 0x2ab078: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AB074u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AB07Cu;
}
