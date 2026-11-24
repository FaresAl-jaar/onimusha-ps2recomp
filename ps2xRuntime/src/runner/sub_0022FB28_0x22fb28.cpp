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

// Function: sub_0022FB28
// Address: 0x22fb28 - 0x22fba4
void sub_0022FB28_0x22fb28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022FB28_0x22fb28");
#endif

    switch (ctx->pc) {
        case 0x22fb60u: goto label_22fb60;
        case 0x22fb70u: goto label_22fb70;
        default: break;
    }

    ctx->pc = 0x22fb28u;

    // 0x22fb28: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x22fb28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x22fb2c: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x22fb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x22fb30: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x22fb30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x22fb34: 0x2451cde8  addiu       $s1, $v0, -0x3218
    ctx->pc = 0x22fb34u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954472));
    // 0x22fb38: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x22fb38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22fb3c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x22fb3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x22fb40: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x22fb40u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x4BCDE8u));
    // 0x22fb44: 0x10800012  beqz        $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x22FB44u;
    {
        const bool branch_taken_0x22fb44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FB44u;
        // 0x22fb48: 0x3c02004c  lui         $v0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fb44) {
            ctx->pc = 0x22FB90u;
            goto label_22fb90;
        }
    }
    ctx->pc = 0x22FB4Cu;
    // 0x22fb4c: 0x8c43cdec  lw          $v1, -0x3214($v0)
    ctx->pc = 0x22fb4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954476)));
    // 0x22fb50: 0x4620010  bltzl       $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x22FB50u;
    {
        const bool branch_taken_0x22fb50 = (GPR_S64(ctx, 3) < 0);
        if (branch_taken_0x22fb50) {
            ctx->pc = 0x22FB54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22FB50u;
            // 0x22fb54: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22FB94u;
            goto label_22fb94;
        }
    }
    ctx->pc = 0x22FB58u;
    // 0x22fb58: 0xc08c55e  jal         func_231578
    ctx->pc = 0x22FB58u;
    SET_GPR_U32(ctx, 31, 0x22FB60u);
    ctx->pc = 0x22FB5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FB58u;
    // 0x22fb5c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231578u, 0x22FB58u, 0x22FB60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FB60u;
label_22fb60:
    // 0x22fb60: 0x50500004  beql        $v0, $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22FB60u;
    {
        const bool branch_taken_0x22fb60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x22fb60) {
            ctx->pc = 0x22FB64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22FB60u;
            // 0x22fb64: 0x3c02004c  lui         $v0, 0x4C (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22FB74u;
            goto label_22fb74;
        }
    }
    ctx->pc = 0x22FB68u;
    // 0x22fb68: 0xc08c362  jal         func_230D88
    ctx->pc = 0x22FB68u;
    SET_GPR_U32(ctx, 31, 0x22FB70u);
    ctx->pc = 0x22FB6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FB68u;
    // 0x22fb6c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230D88u, 0x22FB68u, 0x22FB70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FB70u;
label_22fb70:
    // 0x22fb70: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x22fb70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
label_22fb74:
    // 0x22fb74: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x22fb74u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x22fb78: 0xac50cdf0  sw          $s0, -0x3210($v0)
    ctx->pc = 0x22fb78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294954480), GPR_U32(ctx, 16));
    // 0x22fb7c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x22fb7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22fb80: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22fb80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22fb84: 0x808beb0  j           func_22FAC0
    ctx->pc = 0x22FB84u;
    ctx->pc = 0x22FB88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FB84u;
    // 0x22fb88: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FAC0u;
    sub_0022FAC0_0x22fac0(rdram, ctx, runtime); return;
    ctx->pc = 0x22FB8Cu;
    // 0x22fb8c: 0x0  nop
    ctx->pc = 0x22fb8cu;
    // NOP
label_22fb90:
    // 0x22fb90: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22fb90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_22fb94:
    // 0x22fb94: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x22fb94u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x22fb98: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x22fb98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22fb9c: 0x3e00008  jr          $ra
    ctx->pc = 0x22FB9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22FBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FB9Cu;
        // 0x22fba0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22FB9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22FBA4u;
}
