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

// Function: sub_00351310
// Address: 0x351310 - 0x351340
void sub_00351310_0x351310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00351310_0x351310");
#endif

    switch (ctx->pc) {
        case 0x351328u: goto label_351328;
        case 0x351334u: goto label_351334;
        default: break;
    }

    ctx->pc = 0x351310u;

    // 0x351310: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x351310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x351314: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x351314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x351318: 0x90820001  lbu         $v0, 0x1($a0)
    ctx->pc = 0x351318u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x35131c: 0xa0820002  sb          $v0, 0x2($a0)
    ctx->pc = 0x35131cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x351320: 0xc0d450c  jal         func_351430
    ctx->pc = 0x351320u;
    SET_GPR_U32(ctx, 31, 0x351328u);
    ctx->pc = 0x351324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x351320u;
    // 0x351324: 0xa0800001  sb          $zero, 0x1($a0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x351430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x351430u, 0x351320u, 0x351328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351328u;
label_351328:
    // 0x351328: 0x3c040092  lui         $a0, 0x92
    ctx->pc = 0x351328u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)146 << 16));
    // 0x35132c: 0xc0d3a54  jal         func_34E950
    ctx->pc = 0x35132Cu;
    SET_GPR_U32(ctx, 31, 0x351334u);
    ctx->pc = 0x351330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35132Cu;
    // 0x351330: 0x2484a090  addiu       $a0, $a0, -0x5F70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34E950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34E950u, 0x35132Cu, 0x351334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351334u;
label_351334:
    // 0x351334: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x351334u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x351338: 0x3e00008  jr          $ra
    ctx->pc = 0x351338u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35133Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351338u;
        // 0x35133c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x351338u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x351340u;
}
