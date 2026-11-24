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

// Function: sub_0020AEF8
// Address: 0x20aef8 - 0x20af40
void sub_0020AEF8_0x20aef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020AEF8_0x20aef8");
#endif

    switch (ctx->pc) {
        case 0x20aef8u: goto label_20aef8;
        case 0x20aefcu: goto label_20aefc;
        case 0x20af00u: goto label_20af00;
        case 0x20af04u: goto label_20af04;
        case 0x20af08u: goto label_20af08;
        case 0x20af0cu: goto label_20af0c;
        case 0x20af10u: goto label_20af10;
        case 0x20af14u: goto label_20af14;
        case 0x20af18u: goto label_20af18;
        case 0x20af1cu: goto label_20af1c;
        case 0x20af20u: goto label_20af20;
        case 0x20af24u: goto label_20af24;
        case 0x20af28u: goto label_20af28;
        case 0x20af2cu: goto label_20af2c;
        case 0x20af30u: goto label_20af30;
        case 0x20af34u: goto label_20af34;
        case 0x20af38u: goto label_20af38;
        case 0x20af3cu: goto label_20af3c;
        default: break;
    }

    ctx->pc = 0x20aef8u;

label_20aef8:
    // 0x20aef8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20aef8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_20aefc:
    // 0x20aefc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20aefcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_20af00:
    // 0x20af00: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x20af00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_20af04:
    // 0x20af04: 0xc082d40  jal         func_20B500
label_20af08:
    if (ctx->pc == 0x20AF08u) {
        ctx->pc = 0x20AF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AF04u;
        // 0x20af08: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AF0Cu;
        goto label_20af0c;
    }
    ctx->pc = 0x20AF04u;
    SET_GPR_U32(ctx, 31, 0x20AF0Cu);
    ctx->pc = 0x20AF08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20AF04u;
    // 0x20af08: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B500u, 0x20AF04u, 0x20AF0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AF0Cu;
label_20af0c:
    // 0x20af0c: 0x52000009  beql        $s0, $zero, . + 4 + (0x9 << 2)
label_20af10:
    if (ctx->pc == 0x20AF10u) {
        ctx->pc = 0x20AF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AF0Cu;
        // 0x20af10: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AF14u;
        goto label_20af14;
    }
    ctx->pc = 0x20AF0Cu;
    {
        const bool branch_taken_0x20af0c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x20af0c) {
            ctx->pc = 0x20AF10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20AF0Cu;
            // 0x20af10: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20AF34u;
            goto label_20af34;
        }
    }
    ctx->pc = 0x20AF14u;
label_20af14:
    // 0x20af14: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_20af18:
    if (ctx->pc == 0x20AF18u) {
        ctx->pc = 0x20AF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AF14u;
        // 0x20af18: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AF1Cu;
        goto label_20af1c;
    }
    ctx->pc = 0x20AF14u;
    {
        const bool branch_taken_0x20af14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20af14) {
            ctx->pc = 0x20AF18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20AF14u;
            // 0x20af18: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20AF34u;
            goto label_20af34;
        }
    }
    ctx->pc = 0x20AF1Cu;
label_20af1c:
    // 0x20af1c: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x20af1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_20af20:
    // 0x20af20: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_20af24:
    if (ctx->pc == 0x20AF24u) {
        ctx->pc = 0x20AF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AF20u;
        // 0x20af24: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AF28u;
        goto label_20af28;
    }
    ctx->pc = 0x20AF20u;
    {
        const bool branch_taken_0x20af20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20af20) {
            ctx->pc = 0x20AF24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20AF20u;
            // 0x20af24: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20AF34u;
            goto label_20af34;
        }
    }
    ctx->pc = 0x20AF28u;
label_20af28:
    // 0x20af28: 0x40f809  jalr        $v0
label_20af2c:
    if (ctx->pc == 0x20AF2Cu) {
        ctx->pc = 0x20AF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AF28u;
        // 0x20af2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AF30u;
        goto label_20af30;
    }
    ctx->pc = 0x20AF28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20AF30u);
        ctx->pc = 0x20AF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AF28u;
        // 0x20af2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20AF28u, 0x20AF30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20AF30u;
label_20af30:
    // 0x20af30: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20af30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20af34:
    // 0x20af34: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x20af34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_20af38:
    // 0x20af38: 0x3e00008  jr          $ra
label_20af3c:
    if (ctx->pc == 0x20AF3Cu) {
        ctx->pc = 0x20AF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AF38u;
        // 0x20af3c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AF40u;
        goto label_fallthrough_0x20af38;
    }
    ctx->pc = 0x20AF38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20AF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AF38u;
        // 0x20af3c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20AF38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x20af38:
    ctx->pc = 0x20AF40u;
}
