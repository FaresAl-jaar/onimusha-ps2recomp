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

// Function: sub_00231D20
// Address: 0x231d20 - 0x231dd8
void sub_00231D20_0x231d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00231D20_0x231d20");
#endif

    switch (ctx->pc) {
        case 0x231d34u: goto label_231d34;
        case 0x231d64u: goto label_231d64;
        case 0x231d70u: goto label_231d70;
        case 0x231d7cu: goto label_231d7c;
        case 0x231d88u: goto label_231d88;
        case 0x231d94u: goto label_231d94;
        case 0x231da0u: goto label_231da0;
        case 0x231dacu: goto label_231dac;
        case 0x231db8u: goto label_231db8;
        case 0x231dc4u: goto label_231dc4;
        default: break;
    }

    ctx->pc = 0x231d20u;

    // 0x231d20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x231d20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x231d24: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x231d24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x231d28: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x231d28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x231d2c: 0xc08b528  jal         func_22D4A0
    ctx->pc = 0x231D2Cu;
    SET_GPR_U32(ctx, 31, 0x231D34u);
    ctx->pc = 0x22D4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4A0u, 0x231D2Cu, 0x231D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231D34u;
label_231d34:
    // 0x231d34: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x231d34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x231d38: 0x2450ef50  addiu       $s0, $v0, -0x10B0
    ctx->pc = 0x231d38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963024));
    // 0x231d3c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x231d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4BEF50u));
    // 0x231d40: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x231D40u;
    {
        const bool branch_taken_0x231d40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x231D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231D40u;
        // 0x231d44: 0xdfbf0008  ld          $ra, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231d40) {
            ctx->pc = 0x231D58u;
            goto label_231d58;
        }
    }
    ctx->pc = 0x231D48u;
    // 0x231d48: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x231d48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x231d4c: 0x808b52e  j           func_22D4B8
    ctx->pc = 0x231D4Cu;
    ctx->pc = 0x231D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231D4Cu;
    // 0x231d50: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4B8u;
    sub_0022D4B8_0x22d4b8(rdram, ctx, runtime); return;
    ctx->pc = 0x231D54u;
    // 0x231d54: 0x0  nop
    ctx->pc = 0x231d54u;
    // NOP
label_231d58:
    // 0x231d58: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x231d58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x231d5c: 0xc08b52e  jal         func_22D4B8
    ctx->pc = 0x231D5Cu;
    SET_GPR_U32(ctx, 31, 0x231D64u);
    ctx->pc = 0x231D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231D5Cu;
    // 0x231d60: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4B8u, 0x231D5Cu, 0x231D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231D64u;
label_231d64:
    // 0x231d64: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x231d64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x231d68: 0xc09191c  jal         func_246470
    ctx->pc = 0x231D68u;
    SET_GPR_U32(ctx, 31, 0x231D70u);
    ctx->pc = 0x231D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231D68u;
    // 0x231d6c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246470u, 0x231D68u, 0x231D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231D70u;
label_231d70:
    // 0x231d70: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x231d70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x231d74: 0xc08e06a  jal         func_2381A8
    ctx->pc = 0x231D74u;
    SET_GPR_U32(ctx, 31, 0x231D7Cu);
    ctx->pc = 0x231D78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231D74u;
    // 0x231d78: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2381A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2381A8u, 0x231D74u, 0x231D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231D7Cu;
label_231d7c:
    // 0x231d7c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x231d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x231d80: 0xc08e040  jal         func_238100
    ctx->pc = 0x231D80u;
    SET_GPR_U32(ctx, 31, 0x231D88u);
    ctx->pc = 0x231D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231D80u;
    // 0x231d84: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238100u, 0x231D80u, 0x231D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231D88u;
label_231d88:
    // 0x231d88: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x231d88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x231d8c: 0xc08c410  jal         func_231040
    ctx->pc = 0x231D8Cu;
    SET_GPR_U32(ctx, 31, 0x231D94u);
    ctx->pc = 0x231D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231D8Cu;
    // 0x231d90: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231040u, 0x231D8Cu, 0x231D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231D94u;
label_231d94:
    // 0x231d94: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x231d94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x231d98: 0xc08e040  jal         func_238100
    ctx->pc = 0x231D98u;
    SET_GPR_U32(ctx, 31, 0x231DA0u);
    ctx->pc = 0x231D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231D98u;
    // 0x231d9c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238100u, 0x231D98u, 0x231DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231DA0u;
label_231da0:
    // 0x231da0: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x231da0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x231da4: 0xc08e06a  jal         func_2381A8
    ctx->pc = 0x231DA4u;
    SET_GPR_U32(ctx, 31, 0x231DACu);
    ctx->pc = 0x231DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231DA4u;
    // 0x231da8: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2381A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2381A8u, 0x231DA4u, 0x231DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231DACu;
label_231dac:
    // 0x231dac: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x231dacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x231db0: 0xc09191c  jal         func_246470
    ctx->pc = 0x231DB0u;
    SET_GPR_U32(ctx, 31, 0x231DB8u);
    ctx->pc = 0x231DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231DB0u;
    // 0x231db4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246470u, 0x231DB0u, 0x231DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231DB8u;
label_231db8:
    // 0x231db8: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x231db8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x231dbc: 0xc08e07a  jal         func_2381E8
    ctx->pc = 0x231DBCu;
    SET_GPR_U32(ctx, 31, 0x231DC4u);
    ctx->pc = 0x231DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231DBCu;
    // 0x231dc0: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2381E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2381E8u, 0x231DBCu, 0x231DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231DC4u;
label_231dc4:
    // 0x231dc4: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x231dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x231dc8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x231dc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x231dcc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x231dccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x231dd0: 0x3e00008  jr          $ra
    ctx->pc = 0x231DD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x231DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231DD0u;
        // 0x231dd4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x231DD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x231DD8u;
}
