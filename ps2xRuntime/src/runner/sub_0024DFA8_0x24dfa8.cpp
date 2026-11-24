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

// Function: sub_0024DFA8
// Address: 0x24dfa8 - 0x24e01c
void sub_0024DFA8_0x24dfa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024DFA8_0x24dfa8");
#endif

    switch (ctx->pc) {
        case 0x24dfd8u: goto label_24dfd8;
        default: break;
    }

    ctx->pc = 0x24dfa8u;

    // 0x24dfa8: 0x3c08004d  lui         $t0, 0x4D
    ctx->pc = 0x24dfa8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)77 << 16));
    // 0x24dfac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x24dfacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24dfb0: 0x8d0574d0  lw          $a1, 0x74D0($t0)
    ctx->pc = 0x24dfb0u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x4D74D0u));
    // 0x24dfb4: 0x18a00011  blez        $a1, . + 4 + (0x11 << 2)
    ctx->pc = 0x24DFB4u;
    {
        const bool branch_taken_0x24dfb4 = (GPR_S64(ctx, 5) <= 0);
        ctx->pc = 0x24DFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DFB4u;
        // 0x24dfb8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24dfb4) {
            ctx->pc = 0x24DFFCu;
            goto label_24dffc;
        }
    }
    ctx->pc = 0x24DFBCu;
    // 0x24dfbc: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x24dfbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
    // 0x24dfc0: 0x24447530  addiu       $a0, $v0, 0x7530
    ctx->pc = 0x24dfc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 30000));
    // 0x24dfc4: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x24dfc4u;
    SET_GPR_S32(ctx, 3, (int8_t)FAST_READ8(0x4D7530u));
    // 0x24dfc8: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x24DFC8u;
    {
        const bool branch_taken_0x24dfc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24DFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DFC8u;
        // 0x24dfcc: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24dfc8) {
            ctx->pc = 0x24DFFCu;
            goto label_24dffc;
        }
    }
    ctx->pc = 0x24DFD0u;
    // 0x24dfd0: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x24dfd0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24dfd4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x24dfd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_24dfd8:
    // 0x24dfd8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x24dfd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x24dfdc: 0x24a50018  addiu       $a1, $a1, 0x18
    ctx->pc = 0x24dfdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
    // 0x24dfe0: 0xc7102a  slt         $v0, $a2, $a3
    ctx->pc = 0x24dfe0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x24dfe4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x24DFE4u;
    {
        const bool branch_taken_0x24dfe4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24DFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DFE4u;
        // 0x24dfe8: 0x24630018  addiu       $v1, $v1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24dfe4) {
            ctx->pc = 0x24DFFCu;
            goto label_24dffc;
        }
    }
    ctx->pc = 0x24DFECu;
    // 0x24dfec: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x24dfecu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x24dff0: 0x0  nop
    ctx->pc = 0x24dff0u;
    // NOP
    // 0x24dff4: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x24DFF4u;
    {
        const bool branch_taken_0x24dff4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24DFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DFF4u;
        // 0x24dff8: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24dff4) {
            ctx->pc = 0x24DFD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24dfd8;
        }
    }
    ctx->pc = 0x24DFFCu;
label_24dffc:
    // 0x24dffc: 0x8d0374d0  lw          $v1, 0x74D0($t0)
    ctx->pc = 0x24dffcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 29904)));
    // 0x24e000: 0x10c30004  beq         $a2, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x24E000u;
    {
        const bool branch_taken_0x24e000 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x24E004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E000u;
        // 0x24e004: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e000) {
            ctx->pc = 0x24E014u;
            goto label_24e014;
        }
    }
    ctx->pc = 0x24E008u;
    // 0x24e008: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x24e008u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24e00c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x24e00cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e010: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x24e010u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
label_24e014:
    // 0x24e014: 0x3e00008  jr          $ra
    ctx->pc = 0x24E014u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24E014u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24E01Cu;
}
