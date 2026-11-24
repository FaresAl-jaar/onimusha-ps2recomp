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

// Function: sub_003C9B00
// Address: 0x3c9b00 - 0x3c9ba4
void sub_003C9B00_0x3c9b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C9B00_0x3c9b00");
#endif

    switch (ctx->pc) {
        case 0x3c9b50u: goto label_3c9b50;
        case 0x3c9b70u: goto label_3c9b70;
        case 0x3c9b98u: goto label_3c9b98;
        default: break;
    }

    ctx->pc = 0x3c9b00u;

    // 0x3c9b00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3c9b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3c9b04: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3c9b04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3c9b08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3c9b08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3c9b0c: 0x90852b25  lbu         $a1, 0x2B25($a0)
    ctx->pc = 0x3c9b0cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 11045)));
    // 0x3c9b10: 0x10a30019  beq         $a1, $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x3C9B10u;
    {
        const bool branch_taken_0x3c9b10 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x3C9B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9B10u;
        // 0x3c9b14: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c9b10) {
            ctx->pc = 0x3C9B78u;
            goto label_3c9b78;
        }
    }
    ctx->pc = 0x3C9B18u;
    // 0x3c9b18: 0x10a3000f  beq         $a1, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x3C9B18u;
    {
        const bool branch_taken_0x3c9b18 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3c9b18) {
            ctx->pc = 0x3C9B58u;
            goto label_3c9b58;
        }
    }
    ctx->pc = 0x3C9B20u;
    // 0x3c9b20: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3C9B20u;
    {
        const bool branch_taken_0x3c9b20 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c9b20) {
            ctx->pc = 0x3C9B30u;
            goto label_3c9b30;
        }
    }
    ctx->pc = 0x3C9B28u;
    // 0x3c9b28: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x3C9B28u;
    {
        const bool branch_taken_0x3c9b28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c9b28) {
            ctx->pc = 0x3C9B98u;
            goto label_3c9b98;
        }
    }
    ctx->pc = 0x3C9B30u;
label_3c9b30:
    // 0x3c9b30: 0x9083065c  lbu         $v1, 0x65C($a0)
    ctx->pc = 0x3c9b30u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1628)));
    // 0x3c9b34: 0x24020082  addiu       $v0, $zero, 0x82
    ctx->pc = 0x3c9b34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
    // 0x3c9b38: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3C9B38u;
    {
        const bool branch_taken_0x3c9b38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3c9b38) {
            ctx->pc = 0x3C9B48u;
            goto label_3c9b48;
        }
    }
    ctx->pc = 0x3C9B40u;
    // 0x3c9b40: 0xa0800839  sb          $zero, 0x839($a0)
    ctx->pc = 0x3c9b40u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2105), (uint8_t)GPR_U32(ctx, 0));
    // 0x3c9b44: 0x0  nop
    ctx->pc = 0x3c9b44u;
    // NOP
label_3c9b48:
    // 0x3c9b48: 0xc0a5f30  jal         func_297CC0
    ctx->pc = 0x3C9B48u;
    SET_GPR_U32(ctx, 31, 0x3C9B50u);
    ctx->pc = 0x297CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297CC0u, 0x3C9B48u, 0x3C9B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C9B50u;
label_3c9b50:
    // 0x3c9b50: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x3C9B50u;
    {
        const bool branch_taken_0x3c9b50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c9b50) {
            ctx->pc = 0x3C9B98u;
            goto label_3c9b98;
        }
    }
    ctx->pc = 0x3C9B58u;
label_3c9b58:
    // 0x3c9b58: 0x8c8229c0  lw          $v0, 0x29C0($a0)
    ctx->pc = 0x3c9b58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 10688)));
    // 0x3c9b5c: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x3c9b5cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3c9b60: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3C9B60u;
    {
        const bool branch_taken_0x3c9b60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c9b60) {
            ctx->pc = 0x3C9B78u;
            goto label_3c9b78;
        }
    }
    ctx->pc = 0x3C9B68u;
    // 0x3c9b68: 0xc0f2654  jal         func_3C9950
    ctx->pc = 0x3C9B68u;
    SET_GPR_U32(ctx, 31, 0x3C9B70u);
    ctx->pc = 0x3C9950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C9950u, 0x3C9B68u, 0x3C9B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C9B70u;
label_3c9b70:
    // 0x3c9b70: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x3C9B70u;
    {
        const bool branch_taken_0x3c9b70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c9b70) {
            ctx->pc = 0x3C9B98u;
            goto label_3c9b98;
        }
    }
    ctx->pc = 0x3C9B78u;
label_3c9b78:
    // 0x3c9b78: 0x9083065c  lbu         $v1, 0x65C($a0)
    ctx->pc = 0x3c9b78u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1628)));
    // 0x3c9b7c: 0x24020082  addiu       $v0, $zero, 0x82
    ctx->pc = 0x3c9b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
    // 0x3c9b80: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3C9B80u;
    {
        const bool branch_taken_0x3c9b80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3c9b80) {
            ctx->pc = 0x3C9B90u;
            goto label_3c9b90;
        }
    }
    ctx->pc = 0x3C9B88u;
    // 0x3c9b88: 0xa0800839  sb          $zero, 0x839($a0)
    ctx->pc = 0x3c9b88u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2105), (uint8_t)GPR_U32(ctx, 0));
    // 0x3c9b8c: 0x0  nop
    ctx->pc = 0x3c9b8cu;
    // NOP
label_3c9b90:
    // 0x3c9b90: 0xc0a5f30  jal         func_297CC0
    ctx->pc = 0x3C9B90u;
    SET_GPR_U32(ctx, 31, 0x3C9B98u);
    ctx->pc = 0x297CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297CC0u, 0x3C9B90u, 0x3C9B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C9B98u;
label_3c9b98:
    // 0x3c9b98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3c9b98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3c9b9c: 0x3e00008  jr          $ra
    ctx->pc = 0x3C9B9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C9BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9B9Cu;
        // 0x3c9ba0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C9B9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C9BA4u;
}
