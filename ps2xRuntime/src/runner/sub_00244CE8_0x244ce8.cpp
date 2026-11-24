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

// Function: sub_00244CE8
// Address: 0x244ce8 - 0x244da4
void sub_00244CE8_0x244ce8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00244CE8_0x244ce8");
#endif

    switch (ctx->pc) {
        case 0x244ce8u: goto label_244ce8;
        case 0x244cecu: goto label_244cec;
        case 0x244cf0u: goto label_244cf0;
        case 0x244cf4u: goto label_244cf4;
        case 0x244cf8u: goto label_244cf8;
        case 0x244cfcu: goto label_244cfc;
        case 0x244d00u: goto label_244d00;
        case 0x244d04u: goto label_244d04;
        case 0x244d08u: goto label_244d08;
        case 0x244d0cu: goto label_244d0c;
        case 0x244d10u: goto label_244d10;
        case 0x244d14u: goto label_244d14;
        case 0x244d18u: goto label_244d18;
        case 0x244d1cu: goto label_244d1c;
        case 0x244d20u: goto label_244d20;
        case 0x244d24u: goto label_244d24;
        case 0x244d28u: goto label_244d28;
        case 0x244d2cu: goto label_244d2c;
        case 0x244d30u: goto label_244d30;
        case 0x244d34u: goto label_244d34;
        case 0x244d38u: goto label_244d38;
        case 0x244d3cu: goto label_244d3c;
        case 0x244d40u: goto label_244d40;
        case 0x244d44u: goto label_244d44;
        case 0x244d48u: goto label_244d48;
        case 0x244d4cu: goto label_244d4c;
        case 0x244d50u: goto label_244d50;
        case 0x244d54u: goto label_244d54;
        case 0x244d58u: goto label_244d58;
        case 0x244d5cu: goto label_244d5c;
        case 0x244d60u: goto label_244d60;
        case 0x244d64u: goto label_244d64;
        case 0x244d68u: goto label_244d68;
        case 0x244d6cu: goto label_244d6c;
        case 0x244d70u: goto label_244d70;
        case 0x244d74u: goto label_244d74;
        case 0x244d78u: goto label_244d78;
        case 0x244d7cu: goto label_244d7c;
        case 0x244d80u: goto label_244d80;
        case 0x244d84u: goto label_244d84;
        case 0x244d88u: goto label_244d88;
        case 0x244d8cu: goto label_244d8c;
        case 0x244d90u: goto label_244d90;
        case 0x244d94u: goto label_244d94;
        case 0x244d98u: goto label_244d98;
        case 0x244d9cu: goto label_244d9c;
        case 0x244da0u: goto label_244da0;
        default: break;
    }

    ctx->pc = 0x244ce8u;

label_244ce8:
    // 0x244ce8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x244ce8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_244cec:
    // 0x244cec: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x244cecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
label_244cf0:
    // 0x244cf0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x244cf0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_244cf4:
    // 0x244cf4: 0xffb10068  sd          $s1, 0x68($sp)
    ctx->pc = 0x244cf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 17));
label_244cf8:
    // 0x244cf8: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
label_244cfc:
    if (ctx->pc == 0x244CFCu) {
        ctx->pc = 0x244CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244CF8u;
        // 0x244cfc: 0xffbf0070  sd          $ra, 0x70($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244D00u;
        goto label_244d00;
    }
    ctx->pc = 0x244CF8u;
    {
        const bool branch_taken_0x244cf8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x244CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244CF8u;
        // 0x244cfc: 0xffbf0070  sd          $ra, 0x70($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244cf8) {
            ctx->pc = 0x244D10u;
            goto label_244d10;
        }
    }
    ctx->pc = 0x244D00u;
label_244d00:
    // 0x244d00: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x244d00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
label_244d04:
    // 0x244d04: 0x1000001f  b           . + 4 + (0x1F << 2)
label_244d08:
    if (ctx->pc == 0x244D08u) {
        ctx->pc = 0x244D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244D04u;
        // 0x244d08: 0x2484c2c0  addiu       $a0, $a0, -0x3D40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951616));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244D0Cu;
        goto label_244d0c;
    }
    ctx->pc = 0x244D04u;
    {
        const bool branch_taken_0x244d04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x244D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244D04u;
        // 0x244d08: 0x2484c2c0  addiu       $a0, $a0, -0x3D40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951616));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244d04) {
            ctx->pc = 0x244D84u;
            goto label_244d84;
        }
    }
    ctx->pc = 0x244D0Cu;
label_244d0c:
    // 0x244d0c: 0x0  nop
    ctx->pc = 0x244d0cu;
    // NOP
label_244d10:
    // 0x244d10: 0x27b10030  addiu       $s1, $sp, 0x30
    ctx->pc = 0x244d10u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_244d14:
    // 0x244d14: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x244d14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_244d18:
    // 0x244d18: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x244d18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_244d1c:
    // 0x244d1c: 0xc090fbe  jal         func_243EF8
label_244d20:
    if (ctx->pc == 0x244D20u) {
        ctx->pc = 0x244D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244D1Cu;
        // 0x244d20: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244D24u;
        goto label_244d24;
    }
    ctx->pc = 0x244D1Cu;
    SET_GPR_U32(ctx, 31, 0x244D24u);
    ctx->pc = 0x244D20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244D1Cu;
    // 0x244d20: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x243EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243EF8u, 0x244D1Cu, 0x244D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244D24u;
label_244d24:
    // 0x244d24: 0x83a20030  lb          $v0, 0x30($sp)
    ctx->pc = 0x244d24u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 48)));
label_244d28:
    // 0x244d28: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_244d2c:
    if (ctx->pc == 0x244D2Cu) {
        ctx->pc = 0x244D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244D28u;
        // 0x244d2c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244D30u;
        goto label_244d30;
    }
    ctx->pc = 0x244D28u;
    {
        const bool branch_taken_0x244d28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x244D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244D28u;
        // 0x244d2c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244d28) {
            ctx->pc = 0x244D40u;
            goto label_244d40;
        }
    }
    ctx->pc = 0x244D30u;
label_244d30:
    // 0x244d30: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x244d30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
label_244d34:
    // 0x244d34: 0x10000013  b           . + 4 + (0x13 << 2)
label_244d38:
    if (ctx->pc == 0x244D38u) {
        ctx->pc = 0x244D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244D34u;
        // 0x244d38: 0x2484c2c0  addiu       $a0, $a0, -0x3D40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951616));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244D3Cu;
        goto label_244d3c;
    }
    ctx->pc = 0x244D34u;
    {
        const bool branch_taken_0x244d34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x244D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244D34u;
        // 0x244d38: 0x2484c2c0  addiu       $a0, $a0, -0x3D40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951616));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244d34) {
            ctx->pc = 0x244D84u;
            goto label_244d84;
        }
    }
    ctx->pc = 0x244D3Cu;
label_244d3c:
    // 0x244d3c: 0x0  nop
    ctx->pc = 0x244d3cu;
    // NOP
label_244d40:
    // 0x244d40: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x244d40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_244d44:
    // 0x244d44: 0xc090f2c  jal         func_243CB0
label_244d48:
    if (ctx->pc == 0x244D48u) {
        ctx->pc = 0x244D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244D44u;
        // 0x244d48: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244D4Cu;
        goto label_244d4c;
    }
    ctx->pc = 0x244D44u;
    SET_GPR_U32(ctx, 31, 0x244D4Cu);
    ctx->pc = 0x244D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244D44u;
    // 0x244d48: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x243CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243CB0u, 0x244D44u, 0x244D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244D4Cu;
label_244d4c:
    // 0x244d4c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x244d4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_244d50:
    // 0x244d50: 0x56000005  bnel        $s0, $zero, . + 4 + (0x5 << 2)
label_244d54:
    if (ctx->pc == 0x244D54u) {
        ctx->pc = 0x244D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244D50u;
        // 0x244d54: 0x8e020050  lw          $v0, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244D58u;
        goto label_244d58;
    }
    ctx->pc = 0x244D50u;
    {
        const bool branch_taken_0x244d50 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x244d50) {
            ctx->pc = 0x244D54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x244D50u;
            // 0x244d54: 0x8e020050  lw          $v0, 0x50($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x244D68u;
            goto label_244d68;
        }
    }
    ctx->pc = 0x244D58u;
label_244d58:
    // 0x244d58: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x244d58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
label_244d5c:
    // 0x244d5c: 0xc090d8a  jal         func_243628
label_244d60:
    if (ctx->pc == 0x244D60u) {
        ctx->pc = 0x244D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244D5Cu;
        // 0x244d60: 0x2484c310  addiu       $a0, $a0, -0x3CF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951696));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244D64u;
        goto label_244d64;
    }
    ctx->pc = 0x244D5Cu;
    SET_GPR_U32(ctx, 31, 0x244D64u);
    ctx->pc = 0x244D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244D5Cu;
    // 0x244d60: 0x2484c310  addiu       $a0, $a0, -0x3CF0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951696));
    ctx->in_delay_slot = false;
    ctx->pc = 0x243628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243628u, 0x244D5Cu, 0x244D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244D64u;
label_244d64:
    // 0x244d64: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x244d64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_244d68:
    // 0x244d68: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_244d6c:
    if (ctx->pc == 0x244D6Cu) {
        ctx->pc = 0x244D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244D68u;
        // 0x244d6c: 0x3c040067  lui         $a0, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244D70u;
        goto label_244d70;
    }
    ctx->pc = 0x244D68u;
    {
        const bool branch_taken_0x244d68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x244d68) {
            ctx->pc = 0x244D6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x244D68u;
            // 0x244d6c: 0x3c040067  lui         $a0, 0x67 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x244D80u;
            goto label_244d80;
        }
    }
    ctx->pc = 0x244D70u;
label_244d70:
    // 0x244d70: 0x40f809  jalr        $v0
label_244d74:
    if (ctx->pc == 0x244D74u) {
        ctx->pc = 0x244D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244D70u;
        // 0x244d74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244D78u;
        goto label_244d78;
    }
    ctx->pc = 0x244D70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x244D78u);
        ctx->pc = 0x244D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244D70u;
        // 0x244d74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x244D70u, 0x244D78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x244D78u;
label_244d78:
    // 0x244d78: 0x10000006  b           . + 4 + (0x6 << 2)
label_244d7c:
    if (ctx->pc == 0x244D7Cu) {
        ctx->pc = 0x244D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244D78u;
        // 0x244d7c: 0xdfb00060  ld          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244D80u;
        goto label_244d80;
    }
    ctx->pc = 0x244D78u;
    {
        const bool branch_taken_0x244d78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x244D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244D78u;
        // 0x244d7c: 0xdfb00060  ld          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244d78) {
            ctx->pc = 0x244D94u;
            goto label_244d94;
        }
    }
    ctx->pc = 0x244D80u;
label_244d80:
    // 0x244d80: 0x2484c330  addiu       $a0, $a0, -0x3CD0
    ctx->pc = 0x244d80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951728));
label_244d84:
    // 0x244d84: 0xc090d8a  jal         func_243628
label_244d88:
    if (ctx->pc == 0x244D88u) {
        ctx->pc = 0x244D8Cu;
        goto label_244d8c;
    }
    ctx->pc = 0x244D84u;
    SET_GPR_U32(ctx, 31, 0x244D8Cu);
    ctx->pc = 0x243628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243628u, 0x244D84u, 0x244D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244D8Cu;
label_244d8c:
    // 0x244d8c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x244d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_244d90:
    // 0x244d90: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x244d90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_244d94:
    // 0x244d94: 0xdfb10068  ld          $s1, 0x68($sp)
    ctx->pc = 0x244d94u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 104)));
label_244d98:
    // 0x244d98: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x244d98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_244d9c:
    // 0x244d9c: 0x3e00008  jr          $ra
label_244da0:
    if (ctx->pc == 0x244DA0u) {
        ctx->pc = 0x244DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244D9Cu;
        // 0x244da0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244DA4u;
        goto label_fallthrough_0x244d9c;
    }
    ctx->pc = 0x244D9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x244DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244D9Cu;
        // 0x244da0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x244D9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x244d9c:
    ctx->pc = 0x244DA4u;
}
