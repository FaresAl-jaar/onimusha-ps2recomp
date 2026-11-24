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

// Function: sub_00249550
// Address: 0x249550 - 0x249574
void sub_00249550_0x249550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00249550_0x249550");
#endif

    switch (ctx->pc) {
        case 0x249560u: goto label_249560;
        default: break;
    }

    ctx->pc = 0x249550u;

    // 0x249550: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x249550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x249554: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x249554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x249558: 0xc09246a  jal         func_2491A8
    ctx->pc = 0x249558u;
    SET_GPR_U32(ctx, 31, 0x249560u);
    ctx->pc = 0x24955Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249558u;
    // 0x24955c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2491A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2491A8u, 0x249558u, 0x249560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249560u;
label_249560:
    // 0x249560: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x249560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x249564: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x249564u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x249568: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x249568u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x24956c: 0x3e00008  jr          $ra
    ctx->pc = 0x24956Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x249570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24956Cu;
        // 0x249570: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24956Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x249574u;
}
