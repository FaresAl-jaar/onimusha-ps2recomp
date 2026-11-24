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

// Function: sub_00244DA8
// Address: 0x244da8 - 0x244e64
void sub_00244DA8_0x244da8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00244DA8_0x244da8");
#endif

    switch (ctx->pc) {
        case 0x244da8u: goto label_244da8;
        case 0x244dacu: goto label_244dac;
        case 0x244db0u: goto label_244db0;
        case 0x244db4u: goto label_244db4;
        case 0x244db8u: goto label_244db8;
        case 0x244dbcu: goto label_244dbc;
        case 0x244dc0u: goto label_244dc0;
        case 0x244dc4u: goto label_244dc4;
        case 0x244dc8u: goto label_244dc8;
        case 0x244dccu: goto label_244dcc;
        case 0x244dd0u: goto label_244dd0;
        case 0x244dd4u: goto label_244dd4;
        case 0x244dd8u: goto label_244dd8;
        case 0x244ddcu: goto label_244ddc;
        case 0x244de0u: goto label_244de0;
        case 0x244de4u: goto label_244de4;
        case 0x244de8u: goto label_244de8;
        case 0x244decu: goto label_244dec;
        case 0x244df0u: goto label_244df0;
        case 0x244df4u: goto label_244df4;
        case 0x244df8u: goto label_244df8;
        case 0x244dfcu: goto label_244dfc;
        case 0x244e00u: goto label_244e00;
        case 0x244e04u: goto label_244e04;
        case 0x244e08u: goto label_244e08;
        case 0x244e0cu: goto label_244e0c;
        case 0x244e10u: goto label_244e10;
        case 0x244e14u: goto label_244e14;
        case 0x244e18u: goto label_244e18;
        case 0x244e1cu: goto label_244e1c;
        case 0x244e20u: goto label_244e20;
        case 0x244e24u: goto label_244e24;
        case 0x244e28u: goto label_244e28;
        case 0x244e2cu: goto label_244e2c;
        case 0x244e30u: goto label_244e30;
        case 0x244e34u: goto label_244e34;
        case 0x244e38u: goto label_244e38;
        case 0x244e3cu: goto label_244e3c;
        case 0x244e40u: goto label_244e40;
        case 0x244e44u: goto label_244e44;
        case 0x244e48u: goto label_244e48;
        case 0x244e4cu: goto label_244e4c;
        case 0x244e50u: goto label_244e50;
        case 0x244e54u: goto label_244e54;
        case 0x244e58u: goto label_244e58;
        case 0x244e5cu: goto label_244e5c;
        case 0x244e60u: goto label_244e60;
        default: break;
    }

    ctx->pc = 0x244da8u;

label_244da8:
    // 0x244da8: 0x27bdfd80  addiu       $sp, $sp, -0x280
    ctx->pc = 0x244da8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966656));
label_244dac:
    // 0x244dac: 0xffb00260  sd          $s0, 0x260($sp)
    ctx->pc = 0x244dacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 608), GPR_U64(ctx, 16));
label_244db0:
    // 0x244db0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x244db0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_244db4:
    // 0x244db4: 0xffb10268  sd          $s1, 0x268($sp)
    ctx->pc = 0x244db4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 616), GPR_U64(ctx, 17));
label_244db8:
    // 0x244db8: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
label_244dbc:
    if (ctx->pc == 0x244DBCu) {
        ctx->pc = 0x244DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244DB8u;
        // 0x244dbc: 0xffbf0270  sd          $ra, 0x270($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 624), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244DC0u;
        goto label_244dc0;
    }
    ctx->pc = 0x244DB8u;
    {
        const bool branch_taken_0x244db8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x244DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244DB8u;
        // 0x244dbc: 0xffbf0270  sd          $ra, 0x270($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 624), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244db8) {
            ctx->pc = 0x244DD0u;
            goto label_244dd0;
        }
    }
    ctx->pc = 0x244DC0u;
label_244dc0:
    // 0x244dc0: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x244dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
label_244dc4:
    // 0x244dc4: 0x1000001f  b           . + 4 + (0x1F << 2)
label_244dc8:
    if (ctx->pc == 0x244DC8u) {
        ctx->pc = 0x244DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244DC4u;
        // 0x244dc8: 0x2484c350  addiu       $a0, $a0, -0x3CB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951760));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244DCCu;
        goto label_244dcc;
    }
    ctx->pc = 0x244DC4u;
    {
        const bool branch_taken_0x244dc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x244DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244DC4u;
        // 0x244dc8: 0x2484c350  addiu       $a0, $a0, -0x3CB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244dc4) {
            ctx->pc = 0x244E44u;
            goto label_244e44;
        }
    }
    ctx->pc = 0x244DCCu;
label_244dcc:
    // 0x244dcc: 0x0  nop
    ctx->pc = 0x244dccu;
    // NOP
label_244dd0:
    // 0x244dd0: 0x27b10130  addiu       $s1, $sp, 0x130
    ctx->pc = 0x244dd0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_244dd4:
    // 0x244dd4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x244dd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_244dd8:
    // 0x244dd8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x244dd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_244ddc:
    // 0x244ddc: 0xc090fbe  jal         func_243EF8
label_244de0:
    if (ctx->pc == 0x244DE0u) {
        ctx->pc = 0x244DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244DDCu;
        // 0x244de0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244DE4u;
        goto label_244de4;
    }
    ctx->pc = 0x244DDCu;
    SET_GPR_U32(ctx, 31, 0x244DE4u);
    ctx->pc = 0x244DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244DDCu;
    // 0x244de0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x243EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243EF8u, 0x244DDCu, 0x244DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244DE4u;
label_244de4:
    // 0x244de4: 0x83a20130  lb          $v0, 0x130($sp)
    ctx->pc = 0x244de4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 304)));
label_244de8:
    // 0x244de8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_244dec:
    if (ctx->pc == 0x244DECu) {
        ctx->pc = 0x244DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244DE8u;
        // 0x244dec: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244DF0u;
        goto label_244df0;
    }
    ctx->pc = 0x244DE8u;
    {
        const bool branch_taken_0x244de8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x244DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244DE8u;
        // 0x244dec: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244de8) {
            ctx->pc = 0x244E00u;
            goto label_244e00;
        }
    }
    ctx->pc = 0x244DF0u;
label_244df0:
    // 0x244df0: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x244df0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
label_244df4:
    // 0x244df4: 0x10000013  b           . + 4 + (0x13 << 2)
label_244df8:
    if (ctx->pc == 0x244DF8u) {
        ctx->pc = 0x244DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244DF4u;
        // 0x244df8: 0x2484c350  addiu       $a0, $a0, -0x3CB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951760));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244DFCu;
        goto label_244dfc;
    }
    ctx->pc = 0x244DF4u;
    {
        const bool branch_taken_0x244df4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x244DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244DF4u;
        // 0x244df8: 0x2484c350  addiu       $a0, $a0, -0x3CB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244df4) {
            ctx->pc = 0x244E44u;
            goto label_244e44;
        }
    }
    ctx->pc = 0x244DFCu;
label_244dfc:
    // 0x244dfc: 0x0  nop
    ctx->pc = 0x244dfcu;
    // NOP
label_244e00:
    // 0x244e00: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x244e00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_244e04:
    // 0x244e04: 0xc090f2c  jal         func_243CB0
label_244e08:
    if (ctx->pc == 0x244E08u) {
        ctx->pc = 0x244E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244E04u;
        // 0x244e08: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244E0Cu;
        goto label_244e0c;
    }
    ctx->pc = 0x244E04u;
    SET_GPR_U32(ctx, 31, 0x244E0Cu);
    ctx->pc = 0x244E08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244E04u;
    // 0x244e08: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x243CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243CB0u, 0x244E04u, 0x244E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244E0Cu;
label_244e0c:
    // 0x244e0c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x244e0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_244e10:
    // 0x244e10: 0x56000005  bnel        $s0, $zero, . + 4 + (0x5 << 2)
label_244e14:
    if (ctx->pc == 0x244E14u) {
        ctx->pc = 0x244E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244E10u;
        // 0x244e14: 0x8e020054  lw          $v0, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244E18u;
        goto label_244e18;
    }
    ctx->pc = 0x244E10u;
    {
        const bool branch_taken_0x244e10 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x244e10) {
            ctx->pc = 0x244E14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x244E10u;
            // 0x244e14: 0x8e020054  lw          $v0, 0x54($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x244E28u;
            goto label_244e28;
        }
    }
    ctx->pc = 0x244E18u;
label_244e18:
    // 0x244e18: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x244e18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
label_244e1c:
    // 0x244e1c: 0xc090d8a  jal         func_243628
label_244e20:
    if (ctx->pc == 0x244E20u) {
        ctx->pc = 0x244E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244E1Cu;
        // 0x244e20: 0x2484c3a0  addiu       $a0, $a0, -0x3C60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951840));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244E24u;
        goto label_244e24;
    }
    ctx->pc = 0x244E1Cu;
    SET_GPR_U32(ctx, 31, 0x244E24u);
    ctx->pc = 0x244E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244E1Cu;
    // 0x244e20: 0x2484c3a0  addiu       $a0, $a0, -0x3C60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x243628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243628u, 0x244E1Cu, 0x244E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244E24u;
label_244e24:
    // 0x244e24: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x244e24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_244e28:
    // 0x244e28: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_244e2c:
    if (ctx->pc == 0x244E2Cu) {
        ctx->pc = 0x244E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244E28u;
        // 0x244e2c: 0x3c040067  lui         $a0, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244E30u;
        goto label_244e30;
    }
    ctx->pc = 0x244E28u;
    {
        const bool branch_taken_0x244e28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x244e28) {
            ctx->pc = 0x244E2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x244E28u;
            // 0x244e2c: 0x3c040067  lui         $a0, 0x67 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x244E40u;
            goto label_244e40;
        }
    }
    ctx->pc = 0x244E30u;
label_244e30:
    // 0x244e30: 0x40f809  jalr        $v0
label_244e34:
    if (ctx->pc == 0x244E34u) {
        ctx->pc = 0x244E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244E30u;
        // 0x244e34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244E38u;
        goto label_244e38;
    }
    ctx->pc = 0x244E30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x244E38u);
        ctx->pc = 0x244E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244E30u;
        // 0x244e34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x244E30u, 0x244E38u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x244E38u;
label_244e38:
    // 0x244e38: 0x10000006  b           . + 4 + (0x6 << 2)
label_244e3c:
    if (ctx->pc == 0x244E3Cu) {
        ctx->pc = 0x244E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244E38u;
        // 0x244e3c: 0xdfb00260  ld          $s0, 0x260($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 608)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244E40u;
        goto label_244e40;
    }
    ctx->pc = 0x244E38u;
    {
        const bool branch_taken_0x244e38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x244E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244E38u;
        // 0x244e3c: 0xdfb00260  ld          $s0, 0x260($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 608)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244e38) {
            ctx->pc = 0x244E54u;
            goto label_244e54;
        }
    }
    ctx->pc = 0x244E40u;
label_244e40:
    // 0x244e40: 0x2484c3c8  addiu       $a0, $a0, -0x3C38
    ctx->pc = 0x244e40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951880));
label_244e44:
    // 0x244e44: 0xc090d8a  jal         func_243628
label_244e48:
    if (ctx->pc == 0x244E48u) {
        ctx->pc = 0x244E4Cu;
        goto label_244e4c;
    }
    ctx->pc = 0x244E44u;
    SET_GPR_U32(ctx, 31, 0x244E4Cu);
    ctx->pc = 0x243628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243628u, 0x244E44u, 0x244E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244E4Cu;
label_244e4c:
    // 0x244e4c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x244e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_244e50:
    // 0x244e50: 0xdfb00260  ld          $s0, 0x260($sp)
    ctx->pc = 0x244e50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 608)));
label_244e54:
    // 0x244e54: 0xdfb10268  ld          $s1, 0x268($sp)
    ctx->pc = 0x244e54u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 616)));
label_244e58:
    // 0x244e58: 0xdfbf0270  ld          $ra, 0x270($sp)
    ctx->pc = 0x244e58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 624)));
label_244e5c:
    // 0x244e5c: 0x3e00008  jr          $ra
label_244e60:
    if (ctx->pc == 0x244E60u) {
        ctx->pc = 0x244E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244E5Cu;
        // 0x244e60: 0x27bd0280  addiu       $sp, $sp, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244E64u;
        goto label_fallthrough_0x244e5c;
    }
    ctx->pc = 0x244E5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x244E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244E5Cu;
        // 0x244e60: 0x27bd0280  addiu       $sp, $sp, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x244E5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x244e5c:
    ctx->pc = 0x244E64u;
}
