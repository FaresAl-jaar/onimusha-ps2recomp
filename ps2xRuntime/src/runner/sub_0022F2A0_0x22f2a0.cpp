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

// Function: sub_0022F2A0
// Address: 0x22f2a0 - 0x22f31c
void sub_0022F2A0_0x22f2a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022F2A0_0x22f2a0");
#endif

    switch (ctx->pc) {
        case 0x22f310u: goto label_22f310;
        default: break;
    }

    ctx->pc = 0x22f2a0u;

    // 0x22f2a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x22f2a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x22f2a4: 0x3c0a004c  lui         $t2, 0x4C
    ctx->pc = 0x22f2a4u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)76 << 16));
    // 0x22f2a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22f2a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22f2ac: 0x2402ffc0  addiu       $v0, $zero, -0x40
    ctx->pc = 0x22f2acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x22f2b0: 0x254ace8f  addiu       $t2, $t2, -0x3171
    ctx->pc = 0x22f2b0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294954639));
    // 0x22f2b4: 0x240b0800  addiu       $t3, $zero, 0x800
    ctx->pc = 0x22f2b4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x22f2b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22f2b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22f2bc: 0x1425024  and         $t2, $t2, $v0
    ctx->pc = 0x22f2bcu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 2));
    // 0x22f2c0: 0x808bcb2  j           func_22F2C8
    ctx->pc = 0x22F2C0u;
    ctx->pc = 0x22F2C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F2C0u;
    // 0x22f2c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F2C8u;
    goto label_22f2c8;
    ctx->pc = 0x22F2C8u;
label_22f2c8:
    // 0x22f2c8: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x22f2c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f2cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x22f2ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f2d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x22f2d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x22f2d4: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x22f2d4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f2d8: 0xe0602d  daddu       $t4, $a3, $zero
    ctx->pc = 0x22f2d8u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f2dc: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x22f2dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f2e0: 0x100682d  daddu       $t5, $t0, $zero
    ctx->pc = 0x22f2e0u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f2e4: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x22f2e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f2e8: 0x120102d  daddu       $v0, $t1, $zero
    ctx->pc = 0x22f2e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f2ec: 0x180482d  daddu       $t1, $t4, $zero
    ctx->pc = 0x22f2ecu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f2f0: 0xafaa0000  sw          $t2, 0x0($sp)
    ctx->pc = 0x22f2f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 10));
    // 0x22f2f4: 0x1a0502d  daddu       $t2, $t5, $zero
    ctx->pc = 0x22f2f4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f2f8: 0xafab0008  sw          $t3, 0x8($sp)
    ctx->pc = 0x22f2f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 11));
    // 0x22f2fc: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x22f2fcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f300: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x22f300u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f304: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x22f304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x22f308: 0xc08be04  jal         func_22F810
    ctx->pc = 0x22F308u;
    SET_GPR_U32(ctx, 31, 0x22F310u);
    ctx->pc = 0x22F30Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F308u;
    // 0x22f30c: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F810u, 0x22F308u, 0x22F310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F310u;
label_22f310:
    // 0x22f310: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x22f310u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22f314: 0x3e00008  jr          $ra
    ctx->pc = 0x22F314u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22F318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F314u;
        // 0x22f318: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22F314u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22F31Cu;
}
