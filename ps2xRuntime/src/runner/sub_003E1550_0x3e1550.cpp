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

// Function: sub_003E1550
// Address: 0x3e1550 - 0x3e1584
void sub_003E1550_0x3e1550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E1550_0x3e1550");
#endif

    switch (ctx->pc) {
        case 0x3e1560u: goto label_3e1560;
        default: break;
    }

    ctx->pc = 0x3e1550u;

    // 0x3e1550: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3e1550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3e1554: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3e1554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3e1558: 0xc0f854c  jal         func_3E1530
    ctx->pc = 0x3E1558u;
    SET_GPR_U32(ctx, 31, 0x3E1560u);
    ctx->pc = 0x3E1530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1530u, 0x3E1558u, 0x3E1560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E1560u;
label_3e1560:
    // 0x3e1560: 0x8f838cf8  lw          $v1, -0x7308($gp)
    ctx->pc = 0x3e1560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937848)));
    // 0x3e1564: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x3e1564u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x3e1568: 0x24040055  addiu       $a0, $zero, 0x55
    ctx->pc = 0x3e1568u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 85));
    // 0x3e156c: 0xa0650290  sb          $a1, 0x290($v1)
    ctx->pc = 0x3e156cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 656), (uint8_t)GPR_U32(ctx, 5));
    // 0x3e1570: 0x8f838cf8  lw          $v1, -0x7308($gp)
    ctx->pc = 0x3e1570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937848)));
    // 0x3e1574: 0xac640228  sw          $a0, 0x228($v1)
    ctx->pc = 0x3e1574u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 552), GPR_U32(ctx, 4));
    // 0x3e1578: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3e1578u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e157c: 0x3e00008  jr          $ra
    ctx->pc = 0x3E157Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E1580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E157Cu;
        // 0x3e1580: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E157Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E1584u;
}
