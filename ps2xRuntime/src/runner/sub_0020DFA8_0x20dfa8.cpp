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

// Function: sub_0020DFA8
// Address: 0x20dfa8 - 0x20e014
void sub_0020DFA8_0x20dfa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020DFA8_0x20dfa8");
#endif

    switch (ctx->pc) {
        case 0x20dfbcu: goto label_20dfbc;
        case 0x20dfd8u: goto label_20dfd8;
        case 0x20dfe8u: goto label_20dfe8;
        case 0x20e000u: goto label_20e000;
        default: break;
    }

    ctx->pc = 0x20dfa8u;

    // 0x20dfa8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20dfa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20dfac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20dfacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x20dfb0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x20dfb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x20dfb4: 0xc0876b8  jal         func_21DAE0
    ctx->pc = 0x20DFB4u;
    SET_GPR_U32(ctx, 31, 0x20DFBCu);
    ctx->pc = 0x20DFB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20DFB4u;
    // 0x20dfb8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21DAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21DAE0u, 0x20DFB4u, 0x20DFBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DFBCu;
label_20dfbc:
    // 0x20dfbc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20dfbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20dfc0: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x20DFC0u;
    {
        const bool branch_taken_0x20dfc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x20dfc0) {
            ctx->pc = 0x20DFE0u;
            goto label_20dfe0;
        }
    }
    ctx->pc = 0x20DFC8u;
    // 0x20dfc8: 0x8e060014  lw          $a2, 0x14($s0)
    ctx->pc = 0x20dfc8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x20dfcc: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x20dfccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x20dfd0: 0xc08e442  jal         func_239108
    ctx->pc = 0x20DFD0u;
    SET_GPR_U32(ctx, 31, 0x20DFD8u);
    ctx->pc = 0x20DFD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20DFD0u;
    // 0x20dfd4: 0x8e050018  lw          $a1, 0x18($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x239108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239108u, 0x20DFD0u, 0x20DFD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DFD8u;
label_20dfd8:
    // 0x20dfd8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x20DFD8u;
    {
        const bool branch_taken_0x20dfd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20DFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DFD8u;
        // 0x20dfdc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20dfd8) {
            ctx->pc = 0x20DFECu;
            goto label_20dfec;
        }
    }
    ctx->pc = 0x20DFE0u;
label_20dfe0:
    // 0x20dfe0: 0xc083806  jal         func_20E018
    ctx->pc = 0x20DFE0u;
    SET_GPR_U32(ctx, 31, 0x20DFE8u);
    ctx->pc = 0x20E018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E018u, 0x20DFE0u, 0x20DFE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DFE8u;
label_20dfe8:
    // 0x20dfe8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x20dfe8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20dfec:
    // 0x20dfec: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20DFECu;
    {
        const bool branch_taken_0x20dfec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x20DFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DFECu;
        // 0x20dff0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20dfec) {
            ctx->pc = 0x20E004u;
            goto label_20e004;
        }
    }
    ctx->pc = 0x20DFF4u;
    // 0x20dff4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20dff4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20dff8: 0xc08ecd0  jal         func_23B340
    ctx->pc = 0x20DFF8u;
    SET_GPR_U32(ctx, 31, 0x20E000u);
    ctx->pc = 0x20DFFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20DFF8u;
    // 0x20dffc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23B340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B340u, 0x20DFF8u, 0x20E000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E000u;
label_20e000:
    // 0x20e000: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x20e000u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20e004:
    // 0x20e004: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20e004u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20e008: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x20e008u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20e00c: 0x3e00008  jr          $ra
    ctx->pc = 0x20E00Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20E010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E00Cu;
        // 0x20e010: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20E00Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20E014u;
}
