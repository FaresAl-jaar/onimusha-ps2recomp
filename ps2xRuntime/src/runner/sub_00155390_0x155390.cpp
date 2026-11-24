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

// Function: sub_00155390
// Address: 0x155390 - 0x1553c4
void sub_00155390_0x155390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00155390_0x155390");
#endif

    switch (ctx->pc) {
        case 0x1553b4u: goto label_1553b4;
        default: break;
    }

    ctx->pc = 0x155390u;

    // 0x155390: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x155390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x155394: 0x3c010080  lui         $at, 0x80
    ctx->pc = 0x155394u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)128 << 16));
    // 0x155398: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x155398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15539c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x15539cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1553a0: 0x8c24ee90  lw          $a0, -0x1170($at)
    ctx->pc = 0x1553a0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x7FEE90u));
    // 0x1553a4: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1553A4u;
    {
        const bool branch_taken_0x1553a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1553a4) {
            ctx->pc = 0x1553B8u;
            goto label_1553b8;
        }
    }
    ctx->pc = 0x1553ACu;
    // 0x1553ac: 0xc055014  jal         func_154050
    ctx->pc = 0x1553ACu;
    SET_GPR_U32(ctx, 31, 0x1553B4u);
    ctx->pc = 0x154050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154050u, 0x1553ACu, 0x1553B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1553B4u;
label_1553b4:
    // 0x1553b4: 0x0  nop
    ctx->pc = 0x1553b4u;
    // NOP
label_1553b8:
    // 0x1553b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1553b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1553bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1553BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1553C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1553BCu;
        // 0x1553c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1553BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1553C4u;
}
