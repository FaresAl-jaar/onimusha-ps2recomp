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

// Function: sub_0020C220
// Address: 0x20c220 - 0x20c250
void sub_0020C220_0x20c220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020C220_0x20c220");
#endif

    switch (ctx->pc) {
        case 0x20c220u: goto label_20c220;
        case 0x20c224u: goto label_20c224;
        case 0x20c228u: goto label_20c228;
        case 0x20c22cu: goto label_20c22c;
        case 0x20c230u: goto label_20c230;
        case 0x20c234u: goto label_20c234;
        case 0x20c238u: goto label_20c238;
        case 0x20c23cu: goto label_20c23c;
        case 0x20c240u: goto label_20c240;
        case 0x20c244u: goto label_20c244;
        case 0x20c248u: goto label_20c248;
        case 0x20c24cu: goto label_20c24c;
        default: break;
    }

    ctx->pc = 0x20c220u;

label_20c220:
    // 0x20c220: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20c220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_20c224:
    // 0x20c224: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20c224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_20c228:
    // 0x20c228: 0xc081544  jal         func_205510
label_20c22c:
    if (ctx->pc == 0x20C22Cu) {
        ctx->pc = 0x20C230u;
        goto label_20c230;
    }
    ctx->pc = 0x20C228u;
    SET_GPR_U32(ctx, 31, 0x20C230u);
    ctx->pc = 0x205510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205510u, 0x20C228u, 0x20C230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C230u;
label_20c230:
    // 0x20c230: 0x8c430050  lw          $v1, 0x50($v0)
    ctx->pc = 0x20c230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
label_20c234:
    // 0x20c234: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_20c238:
    if (ctx->pc == 0x20C238u) {
        ctx->pc = 0x20C238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C234u;
        // 0x20c238: 0x8c440054  lw          $a0, 0x54($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C23Cu;
        goto label_20c23c;
    }
    ctx->pc = 0x20C234u;
    {
        const bool branch_taken_0x20c234 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C234u;
        // 0x20c238: 0x8c440054  lw          $a0, 0x54($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c234) {
            ctx->pc = 0x20C244u;
            goto label_20c244;
        }
    }
    ctx->pc = 0x20C23Cu;
label_20c23c:
    // 0x20c23c: 0x60f809  jalr        $v1
label_20c240:
    if (ctx->pc == 0x20C240u) {
        ctx->pc = 0x20C244u;
        goto label_20c244;
    }
    ctx->pc = 0x20C23Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x20C244u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20C23Cu, 0x20C244u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20C244u;
label_20c244:
    // 0x20c244: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20c244u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20c248:
    // 0x20c248: 0x3e00008  jr          $ra
label_20c24c:
    if (ctx->pc == 0x20C24Cu) {
        ctx->pc = 0x20C24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C248u;
        // 0x20c24c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C250u;
        goto label_fallthrough_0x20c248;
    }
    ctx->pc = 0x20C248u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20C24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C248u;
        // 0x20c24c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20C248u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x20c248:
    ctx->pc = 0x20C250u;
}
