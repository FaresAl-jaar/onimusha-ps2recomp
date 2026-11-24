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

// Function: sub_00249CF8
// Address: 0x249cf8 - 0x249d2c
void sub_00249CF8_0x249cf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00249CF8_0x249cf8");
#endif

    switch (ctx->pc) {
        case 0x249d08u: goto label_249d08;
        default: break;
    }

    ctx->pc = 0x249cf8u;

    // 0x249cf8: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x249cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
    // 0x249cfc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x249cfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249d00: 0x24430d60  addiu       $v1, $v0, 0xD60
    ctx->pc = 0x249d00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 3424));
    // 0x249d04: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x249d04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_249d08:
    // 0x249d08: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x249d08u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x249d0c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x249d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x249d10: 0x38420000  xori        $v0, $v0, 0x0
    ctx->pc = 0x249d10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)0);
    // 0x249d14: 0x62280a  movz        $a1, $v1, $v0
    ctx->pc = 0x249d14u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x249d18: 0x0  nop
    ctx->pc = 0x249d18u;
    // NOP
    // 0x249d1c: 0x481fffa  bgez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x249D1Cu;
    {
        const bool branch_taken_0x249d1c = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x249D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249D1Cu;
        // 0x249d20: 0x24630030  addiu       $v1, $v1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249d1c) {
            ctx->pc = 0x249D08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_249d08;
        }
    }
    ctx->pc = 0x249D24u;
    // 0x249d24: 0x3e00008  jr          $ra
    ctx->pc = 0x249D24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x249D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249D24u;
        // 0x249d28: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x249D24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x249D2Cu;
}
