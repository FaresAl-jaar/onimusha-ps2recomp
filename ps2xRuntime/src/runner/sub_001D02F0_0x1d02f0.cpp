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

// Function: sub_001D02F0
// Address: 0x1d02f0 - 0x1d0344
void sub_001D02F0_0x1d02f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D02F0_0x1d02f0");
#endif

    switch (ctx->pc) {
        case 0x1d030cu: goto label_1d030c;
        case 0x1d0338u: goto label_1d0338;
        default: break;
    }

    ctx->pc = 0x1d02f0u;

    // 0x1d02f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d02f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d02f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d02f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d02f8: 0x90833024  lbu         $v1, 0x3024($a0)
    ctx->pc = 0x1d02f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 12324)));
    // 0x1d02fc: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D02FCu;
    {
        const bool branch_taken_0x1d02fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d02fc) {
            ctx->pc = 0x1D0318u;
            goto label_1d0318;
        }
    }
    ctx->pc = 0x1D0304u;
    // 0x1d0304: 0xc074020  jal         func_1D0080
    ctx->pc = 0x1D0304u;
    SET_GPR_U32(ctx, 31, 0x1D030Cu);
    ctx->pc = 0x1D0080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0080u, 0x1D0304u, 0x1D030Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D030Cu;
label_1d030c:
    // 0x1d030c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1D030Cu;
    {
        const bool branch_taken_0x1d030c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d030c) {
            ctx->pc = 0x1D0338u;
            goto label_1d0338;
        }
    }
    ctx->pc = 0x1D0314u;
    // 0x1d0314: 0x0  nop
    ctx->pc = 0x1d0314u;
    // NOP
label_1d0318:
    // 0x1d0318: 0x90843020  lbu         $a0, 0x3020($a0)
    ctx->pc = 0x1d0318u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 12320)));
    // 0x1d031c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1d031cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1d0320: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D0320u;
    {
        const bool branch_taken_0x1d0320 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1d0320) {
            ctx->pc = 0x1D0330u;
            goto label_1d0330;
        }
    }
    ctx->pc = 0x1D0328u;
    // 0x1d0328: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1D0328u;
    {
        const bool branch_taken_0x1d0328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d0328) {
            ctx->pc = 0x1D0338u;
            goto label_1d0338;
        }
    }
    ctx->pc = 0x1D0330u;
label_1d0330:
    // 0x1d0330: 0xc073404  jal         func_1CD010
    ctx->pc = 0x1D0330u;
    SET_GPR_U32(ctx, 31, 0x1D0338u);
    ctx->pc = 0x1CD010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD010u, 0x1D0330u, 0x1D0338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0338u;
label_1d0338:
    // 0x1d0338: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d0338u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d033c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D033Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D0340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D033Cu;
        // 0x1d0340: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D033Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D0344u;
}
