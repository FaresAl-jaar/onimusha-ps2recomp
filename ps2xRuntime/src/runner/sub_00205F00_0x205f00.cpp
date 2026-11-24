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

// Function: sub_00205F00
// Address: 0x205f00 - 0x205f3c
void sub_00205F00_0x205f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00205F00_0x205f00");
#endif

    switch (ctx->pc) {
        case 0x205f10u: goto label_205f10;
        case 0x205f20u: goto label_205f20;
        case 0x205f2cu: goto label_205f2c;
        default: break;
    }

    ctx->pc = 0x205f00u;

    // 0x205f00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x205f00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x205f04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x205f04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x205f08: 0xc087656  jal         func_21D958
    ctx->pc = 0x205F08u;
    SET_GPR_U32(ctx, 31, 0x205F10u);
    ctx->pc = 0x205F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205F08u;
    // 0x205f0c: 0x8c84003c  lw          $a0, 0x3C($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D958u, 0x205F08u, 0x205F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205F10u;
label_205f10:
    // 0x205f10: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x205F10u;
    {
        const bool branch_taken_0x205f10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x205F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205F10u;
        // 0x205f14: 0x2404fecd  addiu       $a0, $zero, -0x133 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966989));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205f10) {
            ctx->pc = 0x205F30u;
            goto label_205f30;
        }
    }
    ctx->pc = 0x205F18u;
    // 0x205f18: 0xc08168c  jal         func_205A30
    ctx->pc = 0x205F18u;
    SET_GPR_U32(ctx, 31, 0x205F20u);
    ctx->pc = 0x205A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205A30u, 0x205F18u, 0x205F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205F20u;
label_205f20:
    // 0x205f20: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x205f20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x205f24: 0xc082e3e  jal         func_20B8F8
    ctx->pc = 0x205F24u;
    SET_GPR_U32(ctx, 31, 0x205F2Cu);
    ctx->pc = 0x205F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205F24u;
    // 0x205f28: 0x248471f8  addiu       $a0, $a0, 0x71F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B8F8u, 0x205F24u, 0x205F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205F2Cu;
label_205f2c:
    // 0x205f2c: 0x2402fecd  addiu       $v0, $zero, -0x133
    ctx->pc = 0x205f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966989));
label_205f30:
    // 0x205f30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x205f30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x205f34: 0x3e00008  jr          $ra
    ctx->pc = 0x205F34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x205F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205F34u;
        // 0x205f38: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x205F34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x205F3Cu;
}
