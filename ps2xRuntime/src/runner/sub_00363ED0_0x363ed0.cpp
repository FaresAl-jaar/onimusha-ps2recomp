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

// Function: sub_00363ED0
// Address: 0x363ed0 - 0x363f08
void sub_00363ED0_0x363ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00363ED0_0x363ed0");
#endif

    ctx->pc = 0x363ed0u;

    // 0x363ed0: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x363ed0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x363ed4: 0x2c410006  sltiu       $at, $v0, 0x6
    ctx->pc = 0x363ed4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x363ed8: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x363ED8u;
    {
        const bool branch_taken_0x363ed8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x363EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363ED8u;
        // 0x363edc: 0x21880  sll         $v1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x363ed8) {
            ctx->pc = 0x363EFCu;
            goto label_363efc;
        }
    }
    ctx->pc = 0x363EE0u;
    // 0x363ee0: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x363ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x363ee4: 0x2442a7e0  addiu       $v0, $v0, -0x5820
    ctx->pc = 0x363ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944736));
    // 0x363ee8: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x363ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x363eec: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x363eecu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x363ef0: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x363ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x363ef4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x363EF4u;
    {
        const bool branch_taken_0x363ef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x363EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363EF4u;
        // 0x363ef8: 0x621025  or          $v0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x363ef4) {
            ctx->pc = 0x363F00u;
            goto label_363f00;
        }
    }
    ctx->pc = 0x363EFCu;
label_363efc:
    // 0x363efc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x363efcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_363f00:
    // 0x363f00: 0x3e00008  jr          $ra
    ctx->pc = 0x363F00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x363F00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x363F08u;
}
