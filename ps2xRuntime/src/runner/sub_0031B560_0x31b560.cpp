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

// Function: sub_0031B560
// Address: 0x31b560 - 0x31b5c4
void sub_0031B560_0x31b560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031B560_0x31b560");
#endif

    switch (ctx->pc) {
        case 0x31b584u: goto label_31b584;
        case 0x31b598u: goto label_31b598;
        case 0x31b5b8u: goto label_31b5b8;
        default: break;
    }

    ctx->pc = 0x31b560u;

    // 0x31b560: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x31b560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x31b564: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x31b564u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31b568: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31b568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x31b56c: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x31b56cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x31b570: 0xa0860001  sb          $a2, 0x1($a0)
    ctx->pc = 0x31b570u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 6));
    // 0x31b574: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x31b574u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x31b578: 0xa0800003  sb          $zero, 0x3($a0)
    ctx->pc = 0x31b578u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x31b57c: 0xc0c6df4  jal         func_31B7D0
    ctx->pc = 0x31B57Cu;
    SET_GPR_U32(ctx, 31, 0x31B584u);
    ctx->pc = 0x31B580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B57Cu;
    // 0x31b580: 0xa0800004  sb          $zero, 0x4($a0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31B7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31B7D0u, 0x31B57Cu, 0x31B584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B584u;
label_31b584:
    // 0x31b584: 0x3c040093  lui         $a0, 0x93
    ctx->pc = 0x31b584u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)147 << 16));
    // 0x31b588: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x31b588u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x31b58c: 0x2484fee0  addiu       $a0, $a0, -0x120
    ctx->pc = 0x31b58cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967008));
    // 0x31b590: 0xc0f0154  jal         func_3C0550
    ctx->pc = 0x31B590u;
    SET_GPR_U32(ctx, 31, 0x31B598u);
    ctx->pc = 0x31B594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B590u;
    // 0x31b594: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C0550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C0550u, 0x31B590u, 0x31B598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B598u;
label_31b598:
    // 0x31b598: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x31b598u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x31b59c: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x31b59cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x31b5a0: 0x2484cbe0  addiu       $a0, $a0, -0x3420
    ctx->pc = 0x31b5a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    // 0x31b5a4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x31b5a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b5a8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x31b5a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b5ac: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x31b5acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b5b0: 0xc063c70  jal         func_18F1C0
    ctx->pc = 0x31B5B0u;
    SET_GPR_U32(ctx, 31, 0x31B5B8u);
    ctx->pc = 0x31B5B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B5B0u;
    // 0x31b5b4: 0x2409ffff  addiu       $t1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F1C0u, 0x31B5B0u, 0x31B5B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B5B8u;
label_31b5b8:
    // 0x31b5b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31b5b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31b5bc: 0x3e00008  jr          $ra
    ctx->pc = 0x31B5BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31B5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B5BCu;
        // 0x31b5c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31B5BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31B5C4u;
}
