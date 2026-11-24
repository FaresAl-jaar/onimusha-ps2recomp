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

// Function: sub_00253C40
// Address: 0x253c40 - 0x253c70
void sub_00253C40_0x253c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00253C40_0x253c40");
#endif

    switch (ctx->pc) {
        case 0x253c40u: goto label_253c40;
        case 0x253c44u: goto label_253c44;
        case 0x253c48u: goto label_253c48;
        case 0x253c4cu: goto label_253c4c;
        case 0x253c50u: goto label_253c50;
        case 0x253c54u: goto label_253c54;
        case 0x253c58u: goto label_253c58;
        case 0x253c5cu: goto label_253c5c;
        case 0x253c60u: goto label_253c60;
        case 0x253c64u: goto label_253c64;
        case 0x253c68u: goto label_253c68;
        case 0x253c6cu: goto label_253c6c;
        default: break;
    }

    ctx->pc = 0x253c40u;

label_253c40:
    // 0x253c40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x253c40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_253c44:
    // 0x253c44: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x253c44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
label_253c48:
    // 0x253c48: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x253c48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_253c4c:
    // 0x253c4c: 0x24428988  addiu       $v0, $v0, -0x7678
    ctx->pc = 0x253c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936968));
label_253c50:
    // 0x253c50: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x253c50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_253c54:
    // 0x253c54: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
label_253c58:
    if (ctx->pc == 0x253C58u) {
        ctx->pc = 0x253C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253C54u;
        // 0x253c58: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x253C5Cu;
        goto label_253c5c;
    }
    ctx->pc = 0x253C54u;
    {
        const bool branch_taken_0x253c54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x253c54) {
            ctx->pc = 0x253C58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x253C54u;
            // 0x253c58: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x253C68u;
            goto label_253c68;
        }
    }
    ctx->pc = 0x253C5Cu;
label_253c5c:
    // 0x253c5c: 0x60f809  jalr        $v1
label_253c60:
    if (ctx->pc == 0x253C60u) {
        ctx->pc = 0x253C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253C5Cu;
        // 0x253c60: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x253C64u;
        goto label_253c64;
    }
    ctx->pc = 0x253C5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x253C64u);
        ctx->pc = 0x253C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253C5Cu;
        // 0x253c60: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x253C5Cu, 0x253C64u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x253C64u;
label_253c64:
    // 0x253c64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x253c64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_253c68:
    // 0x253c68: 0x3e00008  jr          $ra
label_253c6c:
    if (ctx->pc == 0x253C6Cu) {
        ctx->pc = 0x253C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253C68u;
        // 0x253c6c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x253C70u;
        goto label_fallthrough_0x253c68;
    }
    ctx->pc = 0x253C68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x253C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253C68u;
        // 0x253c6c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x253C68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x253c68:
    ctx->pc = 0x253C70u;
}
