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

// Function: sub_0033EE10
// Address: 0x33ee10 - 0x33ee48
void sub_0033EE10_0x33ee10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033EE10_0x33ee10");
#endif

    switch (ctx->pc) {
        case 0x33ee30u: goto label_33ee30;
        case 0x33ee38u: goto label_33ee38;
        default: break;
    }

    ctx->pc = 0x33ee10u;

    // 0x33ee10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x33ee10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x33ee14: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x33ee14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x33ee18: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x33ee18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x33ee1c: 0x8c820038  lw          $v0, 0x38($a0)
    ctx->pc = 0x33ee1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x33ee20: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x33EE20u;
    {
        const bool branch_taken_0x33ee20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33EE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33EE20u;
        // 0x33ee24: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ee20) {
            ctx->pc = 0x33EE30u;
            goto label_33ee30;
        }
    }
    ctx->pc = 0x33EE28u;
    // 0x33ee28: 0xc0cfd1c  jal         func_33F470
    ctx->pc = 0x33EE28u;
    SET_GPR_U32(ctx, 31, 0x33EE30u);
    ctx->pc = 0x33F470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F470u, 0x33EE28u, 0x33EE30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33EE30u;
label_33ee30:
    // 0x33ee30: 0xc0cfce0  jal         func_33F380
    ctx->pc = 0x33EE30u;
    SET_GPR_U32(ctx, 31, 0x33EE38u);
    ctx->pc = 0x33EE34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33EE30u;
    // 0x33ee34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33F380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F380u, 0x33EE30u, 0x33EE38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33EE38u;
label_33ee38:
    // 0x33ee38: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x33ee38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33ee3c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x33ee3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33ee40: 0x3e00008  jr          $ra
    ctx->pc = 0x33EE40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33EE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33EE40u;
        // 0x33ee44: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33EE40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33EE48u;
}
