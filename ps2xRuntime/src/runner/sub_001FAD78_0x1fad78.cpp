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

// Function: sub_001FAD78
// Address: 0x1fad78 - 0x1fad9c
void sub_001FAD78_0x1fad78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FAD78_0x1fad78");
#endif

    ctx->pc = 0x1fad78u;

    // 0x1fad78: 0x3c020087  lui         $v0, 0x87
    ctx->pc = 0x1fad78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)135 << 16));
    // 0x1fad7c: 0xac443f28  sw          $a0, 0x3F28($v0)
    ctx->pc = 0x1fad7cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x873F28u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x873F28u, _value); } while (0);
    // 0x1fad80: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FAD80u;
    {
        const bool branch_taken_0x1fad80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FAD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAD80u;
        // 0x1fad84: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fad80) {
            ctx->pc = 0x1FAD94u;
            goto label_1fad94;
        }
    }
    ctx->pc = 0x1FAD88u;
    // 0x1fad88: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1fad88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fad8c: 0x38630002  xori        $v1, $v1, 0x2
    ctx->pc = 0x1fad8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
    // 0x1fad90: 0x3100a  movz        $v0, $zero, $v1
    ctx->pc = 0x1fad90u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_1fad94:
    // 0x1fad94: 0x3e00008  jr          $ra
    ctx->pc = 0x1FAD94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FAD94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FAD9Cu;
}
