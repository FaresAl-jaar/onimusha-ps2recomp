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

// Function: sub_002AB2B0
// Address: 0x2ab2b0 - 0x2ab2fc
void sub_002AB2B0_0x2ab2b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AB2B0_0x2ab2b0");
#endif

    switch (ctx->pc) {
        case 0x2ab2f0u: goto label_2ab2f0;
        default: break;
    }

    ctx->pc = 0x2ab2b0u;

    // 0x2ab2b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2ab2b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2ab2b4: 0xe0582d  daddu       $t3, $a3, $zero
    ctx->pc = 0x2ab2b4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab2b8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2ab2b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2ab2bc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2ab2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ab2c0: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x2ab2c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x2ab2c4: 0xc0502d  daddu       $t2, $a2, $zero
    ctx->pc = 0x2ab2c4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab2c8: 0xffa80008  sd          $t0, 0x8($sp)
    ctx->pc = 0x2ab2c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 8));
    // 0x2ab2cc: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2ab2ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab2d0: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x2ab2d0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab2d4: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x2ab2d4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab2d8: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x2ab2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x2ab2dc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2ab2dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab2e0: 0x240600b4  addiu       $a2, $zero, 0xB4
    ctx->pc = 0x2ab2e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    // 0x2ab2e4: 0x34453640  ori         $a1, $v0, 0x3640
    ctx->pc = 0x2ab2e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13888);
    // 0x2ab2e8: 0xc097df4  jal         func_25F7D0
    ctx->pc = 0x2AB2E8u;
    SET_GPR_U32(ctx, 31, 0x2AB2F0u);
    ctx->pc = 0x2AB2ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB2E8u;
    // 0x2ab2ec: 0xffa00010  sd          $zero, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F7D0u, 0x2AB2E8u, 0x2AB2F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB2F0u;
label_2ab2f0:
    // 0x2ab2f0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2ab2f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ab2f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2AB2F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AB2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB2F4u;
        // 0x2ab2f8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AB2F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AB2FCu;
}
