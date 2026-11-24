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

// Function: sub_0020C188
// Address: 0x20c188 - 0x20c1b8
void sub_0020C188_0x20c188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020C188_0x20c188");
#endif

    switch (ctx->pc) {
        case 0x20c188u: goto label_20c188;
        case 0x20c18cu: goto label_20c18c;
        case 0x20c190u: goto label_20c190;
        case 0x20c194u: goto label_20c194;
        case 0x20c198u: goto label_20c198;
        case 0x20c19cu: goto label_20c19c;
        case 0x20c1a0u: goto label_20c1a0;
        case 0x20c1a4u: goto label_20c1a4;
        case 0x20c1a8u: goto label_20c1a8;
        case 0x20c1acu: goto label_20c1ac;
        case 0x20c1b0u: goto label_20c1b0;
        case 0x20c1b4u: goto label_20c1b4;
        default: break;
    }

    ctx->pc = 0x20c188u;

label_20c188:
    // 0x20c188: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20c188u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_20c18c:
    // 0x20c18c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20c18cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_20c190:
    // 0x20c190: 0xc081544  jal         func_205510
label_20c194:
    if (ctx->pc == 0x20C194u) {
        ctx->pc = 0x20C198u;
        goto label_20c198;
    }
    ctx->pc = 0x20C190u;
    SET_GPR_U32(ctx, 31, 0x20C198u);
    ctx->pc = 0x205510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205510u, 0x20C190u, 0x20C198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C198u;
label_20c198:
    // 0x20c198: 0x8c430040  lw          $v1, 0x40($v0)
    ctx->pc = 0x20c198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_20c19c:
    // 0x20c19c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_20c1a0:
    if (ctx->pc == 0x20C1A0u) {
        ctx->pc = 0x20C1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C19Cu;
        // 0x20c1a0: 0x8c440044  lw          $a0, 0x44($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C1A4u;
        goto label_20c1a4;
    }
    ctx->pc = 0x20C19Cu;
    {
        const bool branch_taken_0x20c19c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C19Cu;
        // 0x20c1a0: 0x8c440044  lw          $a0, 0x44($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c19c) {
            ctx->pc = 0x20C1ACu;
            goto label_20c1ac;
        }
    }
    ctx->pc = 0x20C1A4u;
label_20c1a4:
    // 0x20c1a4: 0x60f809  jalr        $v1
label_20c1a8:
    if (ctx->pc == 0x20C1A8u) {
        ctx->pc = 0x20C1ACu;
        goto label_20c1ac;
    }
    ctx->pc = 0x20C1A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x20C1ACu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20C1A4u, 0x20C1ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20C1ACu;
label_20c1ac:
    // 0x20c1ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20c1acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20c1b0:
    // 0x20c1b0: 0x3e00008  jr          $ra
label_20c1b4:
    if (ctx->pc == 0x20C1B4u) {
        ctx->pc = 0x20C1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C1B0u;
        // 0x20c1b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C1B8u;
        goto label_fallthrough_0x20c1b0;
    }
    ctx->pc = 0x20C1B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20C1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C1B0u;
        // 0x20c1b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20C1B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x20c1b0:
    ctx->pc = 0x20C1B8u;
}
