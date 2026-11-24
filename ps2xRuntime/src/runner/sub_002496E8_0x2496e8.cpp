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

// Function: sub_002496E8
// Address: 0x2496e8 - 0x249720
void sub_002496E8_0x2496e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002496E8_0x2496e8");
#endif

    switch (ctx->pc) {
        case 0x249704u: goto label_249704;
        case 0x24970cu: goto label_24970c;
        default: break;
    }

    ctx->pc = 0x2496e8u;

    // 0x2496e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2496e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2496ec: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x2496ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
    // 0x2496f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2496f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2496f4: 0x24420ce8  addiu       $v0, $v0, 0xCE8
    ctx->pc = 0x2496f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3304));
    // 0x2496f8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2496f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2496fc: 0xc092c24  jal         func_24B090
    ctx->pc = 0x2496FCu;
    SET_GPR_U32(ctx, 31, 0x249704u);
    ctx->pc = 0x249700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2496FCu;
    // 0x249700: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B090u, 0x2496FCu, 0x249704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249704u;
label_249704:
    // 0x249704: 0xc092c48  jal         func_24B120
    ctx->pc = 0x249704u;
    SET_GPR_U32(ctx, 31, 0x24970Cu);
    ctx->pc = 0x249708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249704u;
    // 0x249708: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B120u, 0x249704u, 0x24970Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24970Cu;
label_24970c:
    // 0x24970c: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x24970cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
    // 0x249710: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x249710u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x249714: 0x24420cf8  addiu       $v0, $v0, 0xCF8
    ctx->pc = 0x249714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3320));
    // 0x249718: 0x3e00008  jr          $ra
    ctx->pc = 0x249718u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24971Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249718u;
        // 0x24971c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x249718u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x249720u;
}
