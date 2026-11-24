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

// Function: sub_0028CC70
// Address: 0x28cc70 - 0x28cc9c
void sub_0028CC70_0x28cc70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028CC70_0x28cc70");
#endif

    switch (ctx->pc) {
        case 0x28cc90u: goto label_28cc90;
        default: break;
    }

    ctx->pc = 0x28cc70u;

    // 0x28cc70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x28cc70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x28cc74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28cc74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28cc78: 0x9083015e  lbu         $v1, 0x15E($a0)
    ctx->pc = 0x28cc78u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 350)));
    // 0x28cc7c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x28CC7Cu;
    {
        const bool branch_taken_0x28cc7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28CC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CC7Cu;
        // 0x28cc80: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cc7c) {
            ctx->pc = 0x28CC90u;
            goto label_28cc90;
        }
    }
    ctx->pc = 0x28CC84u;
    // 0x28cc84: 0x8c860154  lw          $a2, 0x154($a0)
    ctx->pc = 0x28cc84u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
    // 0x28cc88: 0xc0a2dd4  jal         func_28B750
    ctx->pc = 0x28CC88u;
    SET_GPR_U32(ctx, 31, 0x28CC90u);
    ctx->pc = 0x28CC8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28CC88u;
    // 0x28cc8c: 0x248500e0  addiu       $a1, $a0, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28B750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28B750u, 0x28CC88u, 0x28CC90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28CC90u;
label_28cc90:
    // 0x28cc90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28cc90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28cc94: 0x3e00008  jr          $ra
    ctx->pc = 0x28CC94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28CC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CC94u;
        // 0x28cc98: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28CC94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28CC9Cu;
}
