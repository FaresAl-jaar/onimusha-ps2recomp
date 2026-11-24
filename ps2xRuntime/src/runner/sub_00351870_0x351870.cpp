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

// Function: sub_00351870
// Address: 0x351870 - 0x3518e8
void sub_00351870_0x351870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00351870_0x351870");
#endif

    switch (ctx->pc) {
        case 0x351894u: goto label_351894;
        default: break;
    }

    ctx->pc = 0x351870u;

    // 0x351870: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x351870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x351874: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x351874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x351878: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x351878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x35187c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x35187cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x351880: 0x8c840018  lw          $a0, 0x18($a0)
    ctx->pc = 0x351880u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x351884: 0x10800012  beqz        $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x351884u;
    {
        const bool branch_taken_0x351884 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x351884) {
            ctx->pc = 0x3518D0u;
            goto label_3518d0;
        }
    }
    ctx->pc = 0x35188Cu;
    // 0x35188c: 0xc0d4448  jal         func_351120
    ctx->pc = 0x35188Cu;
    SET_GPR_U32(ctx, 31, 0x351894u);
    ctx->pc = 0x351120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x351120u, 0x35188Cu, 0x351894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351894u;
label_351894:
    // 0x351894: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x351894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x351898: 0x1043000b  beq         $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x351898u;
    {
        const bool branch_taken_0x351898 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x351898) {
            ctx->pc = 0x3518C8u;
            goto label_3518c8;
        }
    }
    ctx->pc = 0x3518A0u;
    // 0x3518a0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3518A0u;
    {
        const bool branch_taken_0x3518a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3518A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3518A0u;
        // 0x3518a4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3518a0) {
            ctx->pc = 0x3518C0u;
            goto label_3518c0;
        }
    }
    ctx->pc = 0x3518A8u;
    // 0x3518a8: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3518A8u;
    {
        const bool branch_taken_0x3518a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x3518a8) {
            ctx->pc = 0x3518B8u;
            goto label_3518b8;
        }
    }
    ctx->pc = 0x3518B0u;
    // 0x3518b0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3518B0u;
    {
        const bool branch_taken_0x3518b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3518b0) {
            ctx->pc = 0x3518D0u;
            goto label_3518d0;
        }
    }
    ctx->pc = 0x3518B8u;
label_3518b8:
    // 0x3518b8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3518B8u;
    {
        const bool branch_taken_0x3518b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3518BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3518B8u;
        // 0x3518bc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3518b8) {
            ctx->pc = 0x3518D8u;
            goto label_3518d8;
        }
    }
    ctx->pc = 0x3518C0u;
label_3518c0:
    // 0x3518c0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3518C0u;
    {
        const bool branch_taken_0x3518c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3518C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3518C0u;
        // 0x3518c4: 0x9202001c  lbu         $v0, 0x1C($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3518c0) {
            ctx->pc = 0x3518D8u;
            goto label_3518d8;
        }
    }
    ctx->pc = 0x3518C8u;
label_3518c8:
    // 0x3518c8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3518C8u;
    {
        const bool branch_taken_0x3518c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3518CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3518C8u;
        // 0x3518cc: 0x9202001d  lbu         $v0, 0x1D($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 29)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3518c8) {
            ctx->pc = 0x3518D8u;
            goto label_3518d8;
        }
    }
    ctx->pc = 0x3518D0u;
label_3518d0:
    // 0x3518d0: 0x9202001c  lbu         $v0, 0x1C($s0)
    ctx->pc = 0x3518d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x3518d4: 0x0  nop
    ctx->pc = 0x3518d4u;
    // NOP
label_3518d8:
    // 0x3518d8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3518d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3518dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3518dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3518e0: 0x3e00008  jr          $ra
    ctx->pc = 0x3518E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3518E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3518E0u;
        // 0x3518e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3518E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3518E8u;
}
