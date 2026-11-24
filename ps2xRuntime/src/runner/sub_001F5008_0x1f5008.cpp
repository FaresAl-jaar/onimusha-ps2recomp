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

// Function: sub_001F5008
// Address: 0x1f5008 - 0x1f5030
void sub_001F5008_0x1f5008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F5008_0x1f5008");
#endif

    switch (ctx->pc) {
        case 0x1f5008u: goto label_1f5008;
        case 0x1f500cu: goto label_1f500c;
        case 0x1f5010u: goto label_1f5010;
        case 0x1f5014u: goto label_1f5014;
        case 0x1f5018u: goto label_1f5018;
        case 0x1f501cu: goto label_1f501c;
        case 0x1f5020u: goto label_1f5020;
        case 0x1f5024u: goto label_1f5024;
        case 0x1f5028u: goto label_1f5028;
        case 0x1f502cu: goto label_1f502c;
        default: break;
    }

    ctx->pc = 0x1f5008u;

label_1f5008:
    // 0x1f5008: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x1f5008u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
label_1f500c:
    // 0x1f500c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f500cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1f5010:
    // 0x1f5010: 0x8c4280fc  lw          $v0, -0x7F04($v0)
    ctx->pc = 0x1f5010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294934780)));
label_1f5014:
    // 0x1f5014: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1f5018:
    if (ctx->pc == 0x1F5018u) {
        ctx->pc = 0x1F5018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5014u;
        // 0x1f5018: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F501Cu;
        goto label_1f501c;
    }
    ctx->pc = 0x1F5014u;
    {
        const bool branch_taken_0x1f5014 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5014u;
        // 0x1f5018: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5014) {
            ctx->pc = 0x1F5024u;
            goto label_1f5024;
        }
    }
    ctx->pc = 0x1F501Cu;
label_1f501c:
    // 0x1f501c: 0x40f809  jalr        $v0
label_1f5020:
    if (ctx->pc == 0x1F5020u) {
        ctx->pc = 0x1F5024u;
        goto label_1f5024;
    }
    ctx->pc = 0x1F501Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F5024u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F501Cu, 0x1F5024u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F5024u;
label_1f5024:
    // 0x1f5024: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f5024u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f5028:
    // 0x1f5028: 0x3e00008  jr          $ra
label_1f502c:
    if (ctx->pc == 0x1F502Cu) {
        ctx->pc = 0x1F502Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5028u;
        // 0x1f502c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5030u;
        goto label_fallthrough_0x1f5028;
    }
    ctx->pc = 0x1F5028u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F502Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5028u;
        // 0x1f502c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F5028u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1f5028:
    ctx->pc = 0x1F5030u;
}
