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

// Function: sub_0029D040
// Address: 0x29d040 - 0x29d09c
void sub_0029D040_0x29d040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029D040_0x29d040");
#endif

    switch (ctx->pc) {
        case 0x29d040u: goto label_29d040;
        case 0x29d044u: goto label_29d044;
        case 0x29d048u: goto label_29d048;
        case 0x29d04cu: goto label_29d04c;
        case 0x29d050u: goto label_29d050;
        case 0x29d054u: goto label_29d054;
        case 0x29d058u: goto label_29d058;
        case 0x29d05cu: goto label_29d05c;
        case 0x29d060u: goto label_29d060;
        case 0x29d064u: goto label_29d064;
        case 0x29d068u: goto label_29d068;
        case 0x29d06cu: goto label_29d06c;
        case 0x29d070u: goto label_29d070;
        case 0x29d074u: goto label_29d074;
        case 0x29d078u: goto label_29d078;
        case 0x29d07cu: goto label_29d07c;
        case 0x29d080u: goto label_29d080;
        case 0x29d084u: goto label_29d084;
        case 0x29d088u: goto label_29d088;
        case 0x29d08cu: goto label_29d08c;
        case 0x29d090u: goto label_29d090;
        case 0x29d094u: goto label_29d094;
        case 0x29d098u: goto label_29d098;
        default: break;
    }

    ctx->pc = 0x29d040u;

label_29d040:
    // 0x29d040: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x29d040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_29d044:
    // 0x29d044: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x29d044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_29d048:
    // 0x29d048: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x29d048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_29d04c:
    // 0x29d04c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x29d04cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_29d050:
    // 0x29d050: 0x1220000d  beqz        $s1, . + 4 + (0xD << 2)
label_29d054:
    if (ctx->pc == 0x29D054u) {
        ctx->pc = 0x29D054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D050u;
        // 0x29d054: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D058u;
        goto label_29d058;
    }
    ctx->pc = 0x29D050u;
    {
        const bool branch_taken_0x29d050 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D050u;
        // 0x29d054: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d050) {
            ctx->pc = 0x29D088u;
            goto label_29d088;
        }
    }
    ctx->pc = 0x29D058u;
label_29d058:
    // 0x29d058: 0x8c840070  lw          $a0, 0x70($a0)
    ctx->pc = 0x29d058u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_29d05c:
    // 0x29d05c: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x29d05cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_29d060:
    // 0x29d060: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
label_29d064:
    if (ctx->pc == 0x29D064u) {
        ctx->pc = 0x29D068u;
        goto label_29d068;
    }
    ctx->pc = 0x29D060u;
    {
        const bool branch_taken_0x29d060 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29d060) {
            ctx->pc = 0x29D088u;
            goto label_29d088;
        }
    }
    ctx->pc = 0x29D068u;
label_29d068:
    // 0x29d068: 0x220f809  jalr        $s1
label_29d06c:
    if (ctx->pc == 0x29D06Cu) {
        ctx->pc = 0x29D06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D068u;
        // 0x29d06c: 0x8c900010  lw          $s0, 0x10($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D070u;
        goto label_29d070;
    }
    ctx->pc = 0x29D068u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 17);
        SET_GPR_U32(ctx, 31, 0x29D070u);
        ctx->pc = 0x29D06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D068u;
        // 0x29d06c: 0x8c900010  lw          $s0, 0x10($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29D068u, 0x29D070u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29D070u;
label_29d070:
    // 0x29d070: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x29d070u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_29d074:
    // 0x29d074: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29d074u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29d078:
    // 0x29d078: 0x0  nop
    ctx->pc = 0x29d078u;
    // NOP
label_29d07c:
    // 0x29d07c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_29d080:
    if (ctx->pc == 0x29D080u) {
        ctx->pc = 0x29D084u;
        goto label_29d084;
    }
    ctx->pc = 0x29D07Cu;
    {
        const bool branch_taken_0x29d07c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x29d07c) {
            ctx->pc = 0x29D068u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29d068;
        }
    }
    ctx->pc = 0x29D084u;
label_29d084:
    // 0x29d084: 0x0  nop
    ctx->pc = 0x29d084u;
    // NOP
label_29d088:
    // 0x29d088: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x29d088u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_29d08c:
    // 0x29d08c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x29d08cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_29d090:
    // 0x29d090: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29d090u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_29d094:
    // 0x29d094: 0x3e00008  jr          $ra
label_29d098:
    if (ctx->pc == 0x29D098u) {
        ctx->pc = 0x29D098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D094u;
        // 0x29d098: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D09Cu;
        goto label_fallthrough_0x29d094;
    }
    ctx->pc = 0x29D094u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29D098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D094u;
        // 0x29d098: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29D094u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x29d094:
    ctx->pc = 0x29D09Cu;
}
