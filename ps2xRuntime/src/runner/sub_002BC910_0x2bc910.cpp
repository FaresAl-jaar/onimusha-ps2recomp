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

// Function: sub_002BC910
// Address: 0x2bc910 - 0x2bc940
void sub_002BC910_0x2bc910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BC910_0x2bc910");
#endif

    switch (ctx->pc) {
        case 0x2bc92cu: goto label_2bc92c;
        default: break;
    }

    ctx->pc = 0x2bc910u;

    // 0x2bc910: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2bc910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2bc914: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2bc914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2bc918: 0x938289d0  lbu         $v0, -0x7630($gp)
    ctx->pc = 0x2bc918u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937040)));
    // 0x2bc91c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BC91Cu;
    {
        const bool branch_taken_0x2bc91c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bc91c) {
            ctx->pc = 0x2BC930u;
            goto label_2bc930;
        }
    }
    ctx->pc = 0x2BC924u;
    // 0x2bc924: 0xc0b20e4  jal         func_2C8390
    ctx->pc = 0x2BC924u;
    SET_GPR_U32(ctx, 31, 0x2BC92Cu);
    ctx->pc = 0x2C8390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8390u, 0x2BC924u, 0x2BC92Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC92Cu;
label_2bc92c:
    // 0x2bc92c: 0x0  nop
    ctx->pc = 0x2bc92cu;
    // NOP
label_2bc930:
    // 0x2bc930: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2bc930u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bc934: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2bc934u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc938: 0x3e00008  jr          $ra
    ctx->pc = 0x2BC938u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BC93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC938u;
        // 0x2bc93c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BC938u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BC940u;
}
