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

// Function: sub_0023DC90
// Address: 0x23dc90 - 0x23dd7c
void sub_0023DC90_0x23dc90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023DC90_0x23dc90");
#endif

    switch (ctx->pc) {
        case 0x23dc90u: goto label_23dc90;
        case 0x23dc94u: goto label_23dc94;
        case 0x23dc98u: goto label_23dc98;
        case 0x23dc9cu: goto label_23dc9c;
        case 0x23dca0u: goto label_23dca0;
        case 0x23dca4u: goto label_23dca4;
        case 0x23dca8u: goto label_23dca8;
        case 0x23dcacu: goto label_23dcac;
        case 0x23dcb0u: goto label_23dcb0;
        case 0x23dcb4u: goto label_23dcb4;
        case 0x23dcb8u: goto label_23dcb8;
        case 0x23dcbcu: goto label_23dcbc;
        case 0x23dcc0u: goto label_23dcc0;
        case 0x23dcc4u: goto label_23dcc4;
        case 0x23dcc8u: goto label_23dcc8;
        case 0x23dcccu: goto label_23dccc;
        case 0x23dcd0u: goto label_23dcd0;
        case 0x23dcd4u: goto label_23dcd4;
        case 0x23dcd8u: goto label_23dcd8;
        case 0x23dcdcu: goto label_23dcdc;
        case 0x23dce0u: goto label_23dce0;
        case 0x23dce4u: goto label_23dce4;
        case 0x23dce8u: goto label_23dce8;
        case 0x23dcecu: goto label_23dcec;
        case 0x23dcf0u: goto label_23dcf0;
        case 0x23dcf4u: goto label_23dcf4;
        case 0x23dcf8u: goto label_23dcf8;
        case 0x23dcfcu: goto label_23dcfc;
        case 0x23dd00u: goto label_23dd00;
        case 0x23dd04u: goto label_23dd04;
        case 0x23dd08u: goto label_23dd08;
        case 0x23dd0cu: goto label_23dd0c;
        case 0x23dd10u: goto label_23dd10;
        case 0x23dd14u: goto label_23dd14;
        case 0x23dd18u: goto label_23dd18;
        case 0x23dd1cu: goto label_23dd1c;
        case 0x23dd20u: goto label_23dd20;
        case 0x23dd24u: goto label_23dd24;
        case 0x23dd28u: goto label_23dd28;
        case 0x23dd2cu: goto label_23dd2c;
        case 0x23dd30u: goto label_23dd30;
        case 0x23dd34u: goto label_23dd34;
        case 0x23dd38u: goto label_23dd38;
        case 0x23dd3cu: goto label_23dd3c;
        case 0x23dd40u: goto label_23dd40;
        case 0x23dd44u: goto label_23dd44;
        case 0x23dd48u: goto label_23dd48;
        case 0x23dd4cu: goto label_23dd4c;
        case 0x23dd50u: goto label_23dd50;
        case 0x23dd54u: goto label_23dd54;
        case 0x23dd58u: goto label_23dd58;
        case 0x23dd5cu: goto label_23dd5c;
        case 0x23dd60u: goto label_23dd60;
        case 0x23dd64u: goto label_23dd64;
        case 0x23dd68u: goto label_23dd68;
        case 0x23dd6cu: goto label_23dd6c;
        case 0x23dd70u: goto label_23dd70;
        case 0x23dd74u: goto label_23dd74;
        case 0x23dd78u: goto label_23dd78;
        default: break;
    }

    ctx->pc = 0x23dc90u;

label_23dc90:
    // 0x23dc90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x23dc90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_23dc94:
    // 0x23dc94: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x23dc94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_23dc98:
    // 0x23dc98: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23dc98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_23dc9c:
    // 0x23dc9c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x23dc9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_23dca0:
    // 0x23dca0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x23dca0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_23dca4:
    // 0x23dca4: 0xc08b528  jal         func_22D4A0
label_23dca8:
    if (ctx->pc == 0x23DCA8u) {
        ctx->pc = 0x23DCA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DCA4u;
        // 0x23dca8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DCACu;
        goto label_23dcac;
    }
    ctx->pc = 0x23DCA4u;
    SET_GPR_U32(ctx, 31, 0x23DCACu);
    ctx->pc = 0x23DCA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23DCA4u;
    // 0x23dca8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4A0u, 0x23DCA4u, 0x23DCACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DCACu;
label_23dcac:
    // 0x23dcac: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x23dcacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_23dcb0:
    // 0x23dcb0: 0xc08d552  jal         func_235548
label_23dcb4:
    if (ctx->pc == 0x23DCB4u) {
        ctx->pc = 0x23DCB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DCB0u;
        // 0x23dcb4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DCB8u;
        goto label_23dcb8;
    }
    ctx->pc = 0x23DCB0u;
    SET_GPR_U32(ctx, 31, 0x23DCB8u);
    ctx->pc = 0x23DCB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23DCB0u;
    // 0x23dcb4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235548u, 0x23DCB0u, 0x23DCB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DCB8u;
label_23dcb8:
    // 0x23dcb8: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x23dcb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_23dcbc:
    // 0x23dcbc: 0xc08d558  jal         func_235560
label_23dcc0:
    if (ctx->pc == 0x23DCC0u) {
        ctx->pc = 0x23DCC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DCBCu;
        // 0x23dcc0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DCC4u;
        goto label_23dcc4;
    }
    ctx->pc = 0x23DCBCu;
    SET_GPR_U32(ctx, 31, 0x23DCC4u);
    ctx->pc = 0x23DCC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23DCBCu;
    // 0x23dcc0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235560u, 0x23DCBCu, 0x23DCC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DCC4u;
label_23dcc4:
    // 0x23dcc4: 0xc08d6f0  jal         func_235BC0
label_23dcc8:
    if (ctx->pc == 0x23DCC8u) {
        ctx->pc = 0x23DCC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DCC4u;
        // 0x23dcc8: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DCCCu;
        goto label_23dccc;
    }
    ctx->pc = 0x23DCC4u;
    SET_GPR_U32(ctx, 31, 0x23DCCCu);
    ctx->pc = 0x23DCC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23DCC4u;
    // 0x23dcc8: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235BC0u, 0x23DCC4u, 0x23DCCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DCCCu;
label_23dccc:
    // 0x23dccc: 0xc08b52e  jal         func_22D4B8
label_23dcd0:
    if (ctx->pc == 0x23DCD0u) {
        ctx->pc = 0x23DCD4u;
        goto label_23dcd4;
    }
    ctx->pc = 0x23DCCCu;
    SET_GPR_U32(ctx, 31, 0x23DCD4u);
    ctx->pc = 0x22D4B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4B8u, 0x23DCCCu, 0x23DCD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DCD4u;
label_23dcd4:
    // 0x23dcd4: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x23dcd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_23dcd8:
    // 0x23dcd8: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_23dcdc:
    if (ctx->pc == 0x23DCDCu) {
        ctx->pc = 0x23DCE0u;
        goto label_23dce0;
    }
    ctx->pc = 0x23DCD8u;
    {
        const bool branch_taken_0x23dcd8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x23dcd8) {
            ctx->pc = 0x23DCFCu;
            goto label_23dcfc;
        }
    }
    ctx->pc = 0x23DCE0u;
label_23dce0:
    // 0x23dce0: 0xc08de38  jal         func_2378E0
label_23dce4:
    if (ctx->pc == 0x23DCE4u) {
        ctx->pc = 0x23DCE8u;
        goto label_23dce8;
    }
    ctx->pc = 0x23DCE0u;
    SET_GPR_U32(ctx, 31, 0x23DCE8u);
    ctx->pc = 0x2378E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2378E0u, 0x23DCE0u, 0x23DCE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DCE8u;
label_23dce8:
    // 0x23dce8: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x23dce8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_23dcec:
    // 0x23dcec: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x23dcecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_23dcf0:
    // 0x23dcf0: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x23dcf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_23dcf4:
    // 0x23dcf4: 0x40f809  jalr        $v0
label_23dcf8:
    if (ctx->pc == 0x23DCF8u) {
        ctx->pc = 0x23DCFCu;
        goto label_23dcfc;
    }
    ctx->pc = 0x23DCF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23DCFCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23DCF4u, 0x23DCFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23DCFCu;
label_23dcfc:
    // 0x23dcfc: 0xc08b528  jal         func_22D4A0
label_23dd00:
    if (ctx->pc == 0x23DD00u) {
        ctx->pc = 0x23DD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DCFCu;
        // 0x23dd00: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DD04u;
        goto label_23dd04;
    }
    ctx->pc = 0x23DCFCu;
    SET_GPR_U32(ctx, 31, 0x23DD04u);
    ctx->pc = 0x23DD00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23DCFCu;
    // 0x23dd00: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4A0u, 0x23DCFCu, 0x23DD04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DD04u;
label_23dd04:
    // 0x23dd04: 0x82220003  lb          $v0, 0x3($s1)
    ctx->pc = 0x23dd04u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
label_23dd08:
    // 0x23dd08: 0x5840000d  blezl       $v0, . + 4 + (0xD << 2)
label_23dd0c:
    if (ctx->pc == 0x23DD0Cu) {
        ctx->pc = 0x23DD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DD08u;
        // 0x23dd0c: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DD10u;
        goto label_23dd10;
    }
    ctx->pc = 0x23DD08u;
    {
        const bool branch_taken_0x23dd08 = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x23dd08) {
            ctx->pc = 0x23DD0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23DD08u;
            // 0x23dd0c: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23DD40u;
            goto label_23dd40;
        }
    }
    ctx->pc = 0x23DD10u;
label_23dd10:
    // 0x23dd10: 0x26300018  addiu       $s0, $s1, 0x18
    ctx->pc = 0x23dd10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
label_23dd14:
    // 0x23dd14: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x23dd14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_23dd18:
    // 0x23dd18: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x23dd18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_23dd1c:
    // 0x23dd1c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x23dd1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_23dd20:
    // 0x23dd20: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x23dd20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_23dd24:
    // 0x23dd24: 0x60f809  jalr        $v1
label_23dd28:
    if (ctx->pc == 0x23DD28u) {
        ctx->pc = 0x23DD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DD24u;
        // 0x23dd28: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DD2Cu;
        goto label_23dd2c;
    }
    ctx->pc = 0x23DD24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x23DD2Cu);
        ctx->pc = 0x23DD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DD24u;
        // 0x23dd28: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23DD24u, 0x23DD2Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23DD2Cu;
label_23dd2c:
    // 0x23dd2c: 0x82220003  lb          $v0, 0x3($s1)
    ctx->pc = 0x23dd2cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
label_23dd30:
    // 0x23dd30: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x23dd30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_23dd34:
    // 0x23dd34: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
label_23dd38:
    if (ctx->pc == 0x23DD38u) {
        ctx->pc = 0x23DD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DD34u;
        // 0x23dd38: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DD3Cu;
        goto label_23dd3c;
    }
    ctx->pc = 0x23DD34u;
    {
        const bool branch_taken_0x23dd34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23dd34) {
            ctx->pc = 0x23DD38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23DD34u;
            // 0x23dd38: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23DD18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23dd18;
        }
    }
    ctx->pc = 0x23DD3Cu;
label_23dd3c:
    // 0x23dd3c: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x23dd3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_23dd40:
    // 0x23dd40: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_23dd44:
    if (ctx->pc == 0x23DD44u) {
        ctx->pc = 0x23DD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DD40u;
        // 0x23dd44: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DD48u;
        goto label_23dd48;
    }
    ctx->pc = 0x23DD40u;
    {
        const bool branch_taken_0x23dd40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x23dd40) {
            ctx->pc = 0x23DD44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23DD40u;
            // 0x23dd44: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23DD5Cu;
            goto label_23dd5c;
        }
    }
    ctx->pc = 0x23DD48u;
label_23dd48:
    // 0x23dd48: 0xc08dd94  jal         func_237650
label_23dd4c:
    if (ctx->pc == 0x23DD4Cu) {
        ctx->pc = 0x23DD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DD48u;
        // 0x23dd4c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DD50u;
        goto label_23dd50;
    }
    ctx->pc = 0x23DD48u;
    SET_GPR_U32(ctx, 31, 0x23DD50u);
    ctx->pc = 0x23DD4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23DD48u;
    // 0x23dd4c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237650u, 0x23DD48u, 0x23DD50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DD50u;
label_23dd50:
    // 0x23dd50: 0xc08ddd0  jal         func_237740
label_23dd54:
    if (ctx->pc == 0x23DD54u) {
        ctx->pc = 0x23DD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DD50u;
        // 0x23dd54: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DD58u;
        goto label_23dd58;
    }
    ctx->pc = 0x23DD50u;
    SET_GPR_U32(ctx, 31, 0x23DD58u);
    ctx->pc = 0x23DD54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23DD50u;
    // 0x23dd54: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237740u, 0x23DD50u, 0x23DD58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DD58u;
label_23dd58:
    // 0x23dd58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23dd58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23dd5c:
    // 0x23dd5c: 0xc08e618  jal         func_239860
label_23dd60:
    if (ctx->pc == 0x23DD60u) {
        ctx->pc = 0x23DD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DD5Cu;
        // 0x23dd60: 0x8c850014  lw          $a1, 0x14($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DD64u;
        goto label_23dd64;
    }
    ctx->pc = 0x23DD5Cu;
    SET_GPR_U32(ctx, 31, 0x23DD64u);
    ctx->pc = 0x23DD60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23DD5Cu;
    // 0x23dd60: 0x8c850014  lw          $a1, 0x14($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x239860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239860u, 0x23DD5Cu, 0x23DD64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DD64u;
label_23dd64:
    // 0x23dd64: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23dd64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23dd68:
    // 0x23dd68: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x23dd68u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_23dd6c:
    // 0x23dd6c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x23dd6cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_23dd70:
    // 0x23dd70: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x23dd70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_23dd74:
    // 0x23dd74: 0x808b52e  j           func_22D4B8
label_23dd78:
    if (ctx->pc == 0x23DD78u) {
        ctx->pc = 0x23DD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DD74u;
        // 0x23dd78: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DD7Cu;
        goto label_fallthrough_0x23dd74;
    }
    ctx->pc = 0x23DD74u;
    ctx->pc = 0x23DD78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23DD74u;
    // 0x23dd78: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4B8u;
    sub_0022D4B8_0x22d4b8(rdram, ctx, runtime); return;
label_fallthrough_0x23dd74:
    ctx->pc = 0x23DD7Cu;
}
