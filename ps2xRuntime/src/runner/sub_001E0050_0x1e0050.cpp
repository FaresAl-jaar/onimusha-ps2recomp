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

// Function: sub_001E0050
// Address: 0x1e0050 - 0x1e00a4
void sub_001E0050_0x1e0050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E0050_0x1e0050");
#endif

    switch (ctx->pc) {
        case 0x1e0050u: goto label_1e0050;
        case 0x1e0054u: goto label_1e0054;
        case 0x1e0058u: goto label_1e0058;
        case 0x1e005cu: goto label_1e005c;
        case 0x1e0060u: goto label_1e0060;
        case 0x1e0064u: goto label_1e0064;
        case 0x1e0068u: goto label_1e0068;
        case 0x1e006cu: goto label_1e006c;
        case 0x1e0070u: goto label_1e0070;
        case 0x1e0074u: goto label_1e0074;
        case 0x1e0078u: goto label_1e0078;
        case 0x1e007cu: goto label_1e007c;
        case 0x1e0080u: goto label_1e0080;
        case 0x1e0084u: goto label_1e0084;
        case 0x1e0088u: goto label_1e0088;
        case 0x1e008cu: goto label_1e008c;
        case 0x1e0090u: goto label_1e0090;
        case 0x1e0094u: goto label_1e0094;
        case 0x1e0098u: goto label_1e0098;
        case 0x1e009cu: goto label_1e009c;
        case 0x1e00a0u: goto label_1e00a0;
        default: break;
    }

    ctx->pc = 0x1e0050u;

label_1e0050:
    // 0x1e0050: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e0050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1e0054:
    // 0x1e0054: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e0054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1e0058:
    // 0x1e0058: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e0058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e005c:
    // 0x1e005c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e005cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e0060:
    // 0x1e0060: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
label_1e0064:
    if (ctx->pc == 0x1E0064u) {
        ctx->pc = 0x1E0064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0060u;
        // 0x1e0064: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0068u;
        goto label_1e0068;
    }
    ctx->pc = 0x1E0060u;
    {
        const bool branch_taken_0x1e0060 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0060u;
        // 0x1e0064: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0060) {
            ctx->pc = 0x1E0090u;
            goto label_1e0090;
        }
    }
    ctx->pc = 0x1E0068u;
label_1e0068:
    // 0x1e0068: 0x24426570  addiu       $v0, $v0, 0x6570
    ctx->pc = 0x1e0068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25968));
label_1e006c:
    // 0x1e006c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1e006cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1e0070:
    // 0x1e0070: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1e0070u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e0074:
    // 0x1e0074: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x1e0074u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_1e0078:
    // 0x1e0078: 0x320f809  jalr        $t9
label_1e007c:
    if (ctx->pc == 0x1E007Cu) {
        ctx->pc = 0x1E0080u;
        goto label_1e0080;
    }
    ctx->pc = 0x1E0078u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E0080u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E0078u, 0x1E0080u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E0080u;
label_1e0080:
    // 0x1e0080: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
label_1e0084:
    if (ctx->pc == 0x1E0084u) {
        ctx->pc = 0x1E0084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0080u;
        // 0x1e0084: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0088u;
        goto label_1e0088;
    }
    ctx->pc = 0x1E0080u;
    {
        const bool branch_taken_0x1e0080 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0080u;
        // 0x1e0084: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0080) {
            ctx->pc = 0x1E0090u;
            goto label_1e0090;
        }
    }
    ctx->pc = 0x1E0088u;
label_1e0088:
    // 0x1e0088: 0x244260e0  addiu       $v0, $v0, 0x60E0
    ctx->pc = 0x1e0088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24800));
label_1e008c:
    // 0x1e008c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1e008cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1e0090:
    // 0x1e0090: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1e0090u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e0094:
    // 0x1e0094: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e0094u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1e0098:
    // 0x1e0098: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e0098u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e009c:
    // 0x1e009c: 0x3e00008  jr          $ra
label_1e00a0:
    if (ctx->pc == 0x1E00A0u) {
        ctx->pc = 0x1E00A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E009Cu;
        // 0x1e00a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E00A4u;
        goto label_fallthrough_0x1e009c;
    }
    ctx->pc = 0x1E009Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E00A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E009Cu;
        // 0x1e00a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E009Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1e009c:
    ctx->pc = 0x1E00A4u;
}
