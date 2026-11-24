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

// Function: sub_00203110
// Address: 0x203110 - 0x203154
void sub_00203110_0x203110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00203110_0x203110");
#endif

    switch (ctx->pc) {
        case 0x203120u: goto label_203120;
        case 0x203130u: goto label_203130;
        default: break;
    }

    ctx->pc = 0x203110u;

    // 0x203110: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x203110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x203114: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x203114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x203118: 0xc087624  jal         func_21D890
    ctx->pc = 0x203118u;
    SET_GPR_U32(ctx, 31, 0x203120u);
    ctx->pc = 0x21D890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D890u, 0x203118u, 0x203120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203120u;
label_203120:
    // 0x203120: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x203120u;
    {
        const bool branch_taken_0x203120 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x203124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203120u;
        // 0x203124: 0x2404fece  addiu       $a0, $zero, -0x132 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966990));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203120) {
            ctx->pc = 0x203148u;
            goto label_203148;
        }
    }
    ctx->pc = 0x203128u;
    // 0x203128: 0xc08168c  jal         func_205A30
    ctx->pc = 0x203128u;
    SET_GPR_U32(ctx, 31, 0x203130u);
    ctx->pc = 0x205A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205A30u, 0x203128u, 0x203130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203130u;
label_203130:
    // 0x203130: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x203130u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x203134: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x203134u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x203138: 0x24846708  addiu       $a0, $a0, 0x6708
    ctx->pc = 0x203138u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26376));
    // 0x20313c: 0x8082e3e  j           func_20B8F8
    ctx->pc = 0x20313Cu;
    ctx->pc = 0x203140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20313Cu;
    // 0x203140: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B8F8u;
    sub_0020B8F8_0x20b8f8(rdram, ctx, runtime); return;
    ctx->pc = 0x203144u;
    // 0x203144: 0x0  nop
    ctx->pc = 0x203144u;
    // NOP
label_203148:
    // 0x203148: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x203148u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20314c: 0x3e00008  jr          $ra
    ctx->pc = 0x20314Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x203150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20314Cu;
        // 0x203150: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20314Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x203154u;
}
