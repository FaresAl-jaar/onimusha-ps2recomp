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

// Function: sub_00272530
// Address: 0x272530 - 0x272588
void sub_00272530_0x272530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00272530_0x272530");
#endif

    switch (ctx->pc) {
        case 0x27255cu: goto label_27255c;
        case 0x27257cu: goto label_27257c;
        default: break;
    }

    ctx->pc = 0x272530u;

    // 0x272530: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x272530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x272534: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x272534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x272538: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x272538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x27253c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x27253cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272540: 0xa0820002  sb          $v0, 0x2($a0)
    ctx->pc = 0x272540u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x272544: 0xa0800003  sb          $zero, 0x3($a0)
    ctx->pc = 0x272544u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x272548: 0xa0800004  sb          $zero, 0x4($a0)
    ctx->pc = 0x272548u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x27254c: 0x90850004  lbu         $a1, 0x4($a0)
    ctx->pc = 0x27254cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x272550: 0x3c040093  lui         $a0, 0x93
    ctx->pc = 0x272550u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)147 << 16));
    // 0x272554: 0xc0f0154  jal         func_3C0550
    ctx->pc = 0x272554u;
    SET_GPR_U32(ctx, 31, 0x27255Cu);
    ctx->pc = 0x272558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272554u;
    // 0x272558: 0x2484fee0  addiu       $a0, $a0, -0x120 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967008));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C0550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C0550u, 0x272554u, 0x27255Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27255Cu;
label_27255c:
    // 0x27255c: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x27255cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x272560: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x272560u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x272564: 0x2484cbe0  addiu       $a0, $a0, -0x3420
    ctx->pc = 0x272564u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    // 0x272568: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x272568u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27256c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x27256cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272570: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x272570u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272574: 0xc063c70  jal         func_18F1C0
    ctx->pc = 0x272574u;
    SET_GPR_U32(ctx, 31, 0x27257Cu);
    ctx->pc = 0x272578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272574u;
    // 0x272578: 0x2409ffff  addiu       $t1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F1C0u, 0x272574u, 0x27257Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27257Cu;
label_27257c:
    // 0x27257c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27257cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x272580: 0x3e00008  jr          $ra
    ctx->pc = 0x272580u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x272584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272580u;
        // 0x272584: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x272580u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x272588u;
}
