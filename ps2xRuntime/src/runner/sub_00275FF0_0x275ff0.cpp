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

// Function: sub_00275FF0
// Address: 0x275ff0 - 0x276034
void sub_00275FF0_0x275ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00275FF0_0x275ff0");
#endif

    switch (ctx->pc) {
        case 0x276020u: goto label_276020;
        default: break;
    }

    ctx->pc = 0x275ff0u;

    // 0x275ff0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x275ff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x275ff4: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x275ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x275ff8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x275ff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x275ffc: 0x8c8306ac  lw          $v1, 0x6AC($a0)
    ctx->pc = 0x275ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1708)));
    // 0x276000: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x276000u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x276004: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x276004u;
    {
        const bool branch_taken_0x276004 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x276008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276004u;
        // 0x276008: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276004) {
            ctx->pc = 0x276018u;
            goto label_276018;
        }
    }
    ctx->pc = 0x27600Cu;
    // 0x27600c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x27600Cu;
    {
        const bool branch_taken_0x27600c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27600c) {
            ctx->pc = 0x276028u;
            goto label_276028;
        }
    }
    ctx->pc = 0x276014u;
    // 0x276014: 0x0  nop
    ctx->pc = 0x276014u;
    // NOP
label_276018:
    // 0x276018: 0xc0a256c  jal         func_2895B0
    ctx->pc = 0x276018u;
    SET_GPR_U32(ctx, 31, 0x276020u);
    ctx->pc = 0x2895B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2895B0u, 0x276018u, 0x276020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276020u;
label_276020:
    // 0x276020: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x276020u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276024: 0x0  nop
    ctx->pc = 0x276024u;
    // NOP
label_276028:
    // 0x276028: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x276028u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27602c: 0x3e00008  jr          $ra
    ctx->pc = 0x27602Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x276030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27602Cu;
        // 0x276030: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27602Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x276034u;
}
