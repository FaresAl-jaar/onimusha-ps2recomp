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

// Function: sub_00275C00
// Address: 0x275c00 - 0x275c34
void sub_00275C00_0x275c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00275C00_0x275c00");
#endif

    switch (ctx->pc) {
        case 0x275c28u: goto label_275c28;
        default: break;
    }

    ctx->pc = 0x275c00u;

    // 0x275c00: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x275c00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x275c04: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x275c04u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x275c08: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x275c08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x275c0c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x275c0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x275c10: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x275c10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x275c14: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x275c14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x275c18: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x275C18u;
    {
        const bool branch_taken_0x275c18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x275c18) {
            ctx->pc = 0x275C28u;
            goto label_275c28;
        }
    }
    ctx->pc = 0x275C20u;
    // 0x275c20: 0xc09d664  jal         func_275990
    ctx->pc = 0x275C20u;
    SET_GPR_U32(ctx, 31, 0x275C28u);
    ctx->pc = 0x275990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275990u, 0x275C20u, 0x275C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275C28u;
label_275c28:
    // 0x275c28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x275c28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x275c2c: 0x3e00008  jr          $ra
    ctx->pc = 0x275C2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x275C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275C2Cu;
        // 0x275c30: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x275C2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x275C34u;
}
