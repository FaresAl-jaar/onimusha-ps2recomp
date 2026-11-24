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

// Function: sub_003EDB30
// Address: 0x3edb30 - 0x3edb88
void sub_003EDB30_0x3edb30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EDB30_0x3edb30");
#endif

    switch (ctx->pc) {
        case 0x3edb58u: goto label_3edb58;
        case 0x3edb70u: goto label_3edb70;
        default: break;
    }

    ctx->pc = 0x3edb30u;

    // 0x3edb30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3edb30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3edb34: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3edb34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3edb38: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3edb38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3edb3c: 0x8f838d1c  lw          $v1, -0x72E4($gp)
    ctx->pc = 0x3edb3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937884)));
    // 0x3edb40: 0x1860000d  blez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x3EDB40u;
    {
        const bool branch_taken_0x3edb40 = (GPR_S64(ctx, 3) <= 0);
        if (branch_taken_0x3edb40) {
            ctx->pc = 0x3EDB78u;
            goto label_3edb78;
        }
    }
    ctx->pc = 0x3EDB48u;
    // 0x3edb48: 0x8f848d14  lw          $a0, -0x72EC($gp)
    ctx->pc = 0x3edb48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937876)));
    // 0x3edb4c: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x3EDB4Cu;
    {
        const bool branch_taken_0x3edb4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3edb4c) {
            ctx->pc = 0x3EDB78u;
            goto label_3edb78;
        }
    }
    ctx->pc = 0x3EDB54u;
    // 0x3edb54: 0x0  nop
    ctx->pc = 0x3edb54u;
    // NOP
label_3edb58:
    // 0x3edb58: 0x8c8329c0  lw          $v1, 0x29C0($a0)
    ctx->pc = 0x3edb58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 10688)));
    // 0x3edb5c: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x3edb5cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3edb60: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3EDB60u;
    {
        const bool branch_taken_0x3edb60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EDB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EDB60u;
        // 0x3edb64: 0x8c902b24  lw          $s0, 0x2B24($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11044)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3edb60) {
            ctx->pc = 0x3EDB70u;
            goto label_3edb70;
        }
    }
    ctx->pc = 0x3EDB68u;
    // 0x3edb68: 0xc0fb7ac  jal         func_3EDEB0
    ctx->pc = 0x3EDB68u;
    SET_GPR_U32(ctx, 31, 0x3EDB70u);
    ctx->pc = 0x3EDEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EDEB0u, 0x3EDB68u, 0x3EDB70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EDB70u;
label_3edb70:
    // 0x3edb70: 0x1600fff9  bnez        $s0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3EDB70u;
    {
        const bool branch_taken_0x3edb70 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3EDB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EDB70u;
        // 0x3edb74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3edb70) {
            ctx->pc = 0x3EDB58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3edb58;
        }
    }
    ctx->pc = 0x3EDB78u;
label_3edb78:
    // 0x3edb78: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3edb78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3edb7c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3edb7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3edb80: 0x3e00008  jr          $ra
    ctx->pc = 0x3EDB80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EDB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EDB80u;
        // 0x3edb84: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EDB80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3EDB88u;
}
