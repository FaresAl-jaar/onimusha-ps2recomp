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

// Function: sub_0021CEC8
// Address: 0x21cec8 - 0x21cf44
void sub_0021CEC8_0x21cec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021CEC8_0x21cec8");
#endif

    switch (ctx->pc) {
        case 0x21cedcu: goto label_21cedc;
        case 0x21ceecu: goto label_21ceec;
        case 0x21cefcu: goto label_21cefc;
        case 0x21cf0cu: goto label_21cf0c;
        default: break;
    }

    ctx->pc = 0x21cec8u;

    // 0x21cec8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21cec8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21cecc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21ceccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21ced0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x21ced0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x21ced4: 0xc0873d2  jal         func_21CF48
    ctx->pc = 0x21CED4u;
    SET_GPR_U32(ctx, 31, 0x21CEDCu);
    ctx->pc = 0x21CED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21CED4u;
    // 0x21ced8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21CF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21CF48u, 0x21CED4u, 0x21CEDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21CEDCu;
label_21cedc:
    // 0x21cedc: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x21CEDCu;
    {
        const bool branch_taken_0x21cedc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21CEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CEDCu;
        // 0x21cee0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21cedc) {
            ctx->pc = 0x21CF20u;
            goto label_21cf20;
        }
    }
    ctx->pc = 0x21CEE4u;
    // 0x21cee4: 0xc0873ee  jal         func_21CFB8
    ctx->pc = 0x21CEE4u;
    SET_GPR_U32(ctx, 31, 0x21CEECu);
    ctx->pc = 0x21CFB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21CFB8u, 0x21CEE4u, 0x21CEECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21CEECu;
label_21ceec:
    // 0x21ceec: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x21CEECu;
    {
        const bool branch_taken_0x21ceec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21CEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CEECu;
        // 0x21cef0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ceec) {
            ctx->pc = 0x21CF20u;
            goto label_21cf20;
        }
    }
    ctx->pc = 0x21CEF4u;
    // 0x21cef4: 0xc087420  jal         func_21D080
    ctx->pc = 0x21CEF4u;
    SET_GPR_U32(ctx, 31, 0x21CEFCu);
    ctx->pc = 0x21D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D080u, 0x21CEF4u, 0x21CEFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21CEFCu;
label_21cefc:
    // 0x21cefc: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x21CEFCu;
    {
        const bool branch_taken_0x21cefc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21CF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CEFCu;
        // 0x21cf00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21cefc) {
            ctx->pc = 0x21CF20u;
            goto label_21cf20;
        }
    }
    ctx->pc = 0x21CF04u;
    // 0x21cf04: 0xc087436  jal         func_21D0D8
    ctx->pc = 0x21CF04u;
    SET_GPR_U32(ctx, 31, 0x21CF0Cu);
    ctx->pc = 0x21D0D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D0D8u, 0x21CF04u, 0x21CF0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21CF0Cu;
label_21cf0c:
    // 0x21cf0c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21CF0Cu;
    {
        const bool branch_taken_0x21cf0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21CF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CF0Cu;
        // 0x21cf10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21cf0c) {
            ctx->pc = 0x21CF24u;
            goto label_21cf24;
        }
    }
    ctx->pc = 0x21CF14u;
    // 0x21cf14: 0x8e030060  lw          $v1, 0x60($s0)
    ctx->pc = 0x21cf14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x21cf18: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x21CF18u;
    {
        const bool branch_taken_0x21cf18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x21cf18) {
            ctx->pc = 0x21CF1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21CF18u;
            // 0x21cf1c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21CF38u;
            goto label_21cf38;
        }
    }
    ctx->pc = 0x21CF20u;
label_21cf20:
    // 0x21cf20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21cf20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_21cf24:
    // 0x21cf24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21cf24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21cf28: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x21cf28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21cf2c: 0x8087474  j           func_21D1D0
    ctx->pc = 0x21CF2Cu;
    ctx->pc = 0x21CF30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21CF2Cu;
    // 0x21cf30: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D1D0u;
    sub_0021D1D0_0x21d1d0(rdram, ctx, runtime); return;
    ctx->pc = 0x21CF34u;
    // 0x21cf34: 0x0  nop
    ctx->pc = 0x21cf34u;
    // NOP
label_21cf38:
    // 0x21cf38: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x21cf38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21cf3c: 0x3e00008  jr          $ra
    ctx->pc = 0x21CF3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21CF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CF3Cu;
        // 0x21cf40: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21CF3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21CF44u;
}
