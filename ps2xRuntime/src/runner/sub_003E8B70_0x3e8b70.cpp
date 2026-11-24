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

// Function: sub_003E8B70
// Address: 0x3e8b70 - 0x3e8bb4
void sub_003E8B70_0x3e8b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E8B70_0x3e8b70");
#endif

    switch (ctx->pc) {
        case 0x3e8ba4u: goto label_3e8ba4;
        default: break;
    }

    ctx->pc = 0x3e8b70u;

    // 0x3e8b70: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x3e8b70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x3e8b74: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3e8b74u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3e8b78: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x3e8b78u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3e8b7c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3e8b7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3e8b80: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x3e8b80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x3e8b84: 0x24634a40  addiu       $v1, $v1, 0x4A40
    ctx->pc = 0x3e8b84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19008));
    // 0x3e8b88: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x3e8b88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3e8b8c: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x3e8b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3e8b90: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3e8b90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3e8b94: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E8B94u;
    {
        const bool branch_taken_0x3e8b94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3e8b94) {
            ctx->pc = 0x3E8BA8u;
            goto label_3e8ba8;
        }
    }
    ctx->pc = 0x3E8B9Cu;
    // 0x3e8b9c: 0xc0db234  jal         func_36C8D0
    ctx->pc = 0x3E8B9Cu;
    SET_GPR_U32(ctx, 31, 0x3E8BA4u);
    ctx->pc = 0x3E8BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E8B9Cu;
    // 0x3e8ba0: 0x308400ff  andi        $a0, $a0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C8D0u, 0x3E8B9Cu, 0x3E8BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E8BA4u;
label_3e8ba4:
    // 0x3e8ba4: 0x0  nop
    ctx->pc = 0x3e8ba4u;
    // NOP
label_3e8ba8:
    // 0x3e8ba8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3e8ba8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e8bac: 0x3e00008  jr          $ra
    ctx->pc = 0x3E8BACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E8BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8BACu;
        // 0x3e8bb0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E8BACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E8BB4u;
}
