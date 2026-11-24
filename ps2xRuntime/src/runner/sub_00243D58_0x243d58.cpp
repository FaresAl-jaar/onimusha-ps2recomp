#include <cstdio>
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

// Function: sub_00243D58
// Address: 0x243d58 - 0x243e80
void sub_00243D58_0x243d58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00243D58_0x243d58");
#endif
    { static uint32_t n=0; if (++n<=40) fprintf(stderr,"[probe cvFsOpen] name=%s ra=0x%x\n",(const char*)(rdram+(GPR_U32(ctx,4)&0x1ffffffu)),GPR_U32(ctx,31)); }

    switch (ctx->pc) {
        case 0x243d58u: goto label_243d58;
        case 0x243d5cu: goto label_243d5c;
        case 0x243d60u: goto label_243d60;
        case 0x243d64u: goto label_243d64;
        case 0x243d68u: goto label_243d68;
        case 0x243d6cu: goto label_243d6c;
        case 0x243d70u: goto label_243d70;
        case 0x243d74u: goto label_243d74;
        case 0x243d78u: goto label_243d78;
        case 0x243d7cu: goto label_243d7c;
        case 0x243d80u: goto label_243d80;
        case 0x243d84u: goto label_243d84;
        case 0x243d88u: goto label_243d88;
        case 0x243d8cu: goto label_243d8c;
        case 0x243d90u: goto label_243d90;
        case 0x243d94u: goto label_243d94;
        case 0x243d98u: goto label_243d98;
        case 0x243d9cu: goto label_243d9c;
        case 0x243da0u: goto label_243da0;
        case 0x243da4u: goto label_243da4;
        case 0x243da8u: goto label_243da8;
        case 0x243dacu: goto label_243dac;
        case 0x243db0u: goto label_243db0;
        case 0x243db4u: goto label_243db4;
        case 0x243db8u: goto label_243db8;
        case 0x243dbcu: goto label_243dbc;
        case 0x243dc0u: goto label_243dc0;
        case 0x243dc4u: goto label_243dc4;
        case 0x243dc8u: goto label_243dc8;
        case 0x243dccu: goto label_243dcc;
        case 0x243dd0u: goto label_243dd0;
        case 0x243dd4u: goto label_243dd4;
        case 0x243dd8u: goto label_243dd8;
        case 0x243ddcu: goto label_243ddc;
        case 0x243de0u: goto label_243de0;
        case 0x243de4u: goto label_243de4;
        case 0x243de8u: goto label_243de8;
        case 0x243decu: goto label_243dec;
        case 0x243df0u: goto label_243df0;
        case 0x243df4u: goto label_243df4;
        case 0x243df8u: goto label_243df8;
        case 0x243dfcu: goto label_243dfc;
        case 0x243e00u: goto label_243e00;
        case 0x243e04u: goto label_243e04;
        case 0x243e08u: goto label_243e08;
        case 0x243e0cu: goto label_243e0c;
        case 0x243e10u: goto label_243e10;
        case 0x243e14u: goto label_243e14;
        case 0x243e18u: goto label_243e18;
        case 0x243e1cu: goto label_243e1c;
        case 0x243e20u: goto label_243e20;
        case 0x243e24u: goto label_243e24;
        case 0x243e28u: goto label_243e28;
        case 0x243e2cu: goto label_243e2c;
        case 0x243e30u: goto label_243e30;
        case 0x243e34u: goto label_243e34;
        case 0x243e38u: goto label_243e38;
        case 0x243e3cu: goto label_243e3c;
        case 0x243e40u: goto label_243e40;
        case 0x243e44u: goto label_243e44;
        case 0x243e48u: goto label_243e48;
        case 0x243e4cu: goto label_243e4c;
        case 0x243e50u: goto label_243e50;
        case 0x243e54u: goto label_243e54;
        case 0x243e58u: goto label_243e58;
        case 0x243e5cu: goto label_243e5c;
        case 0x243e60u: goto label_243e60;
        case 0x243e64u: goto label_243e64;
        case 0x243e68u: goto label_243e68;
        case 0x243e6cu: goto label_243e6c;
        case 0x243e70u: goto label_243e70;
        case 0x243e74u: goto label_243e74;
        case 0x243e78u: goto label_243e78;
        case 0x243e7cu: goto label_243e7c;
        default: break;
    }

    ctx->pc = 0x243d58u;

label_243d58:
    // 0x243d58: 0x27bdfd70  addiu       $sp, $sp, -0x290
    ctx->pc = 0x243d58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966640));
label_243d5c:
    // 0x243d5c: 0xffb10268  sd          $s1, 0x268($sp)
    ctx->pc = 0x243d5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 616), GPR_U64(ctx, 17));
label_243d60:
    // 0x243d60: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x243d60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_243d64:
    // 0x243d64: 0xffb30278  sd          $s3, 0x278($sp)
    ctx->pc = 0x243d64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 632), GPR_U64(ctx, 19));
label_243d68:
    // 0x243d68: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x243d68u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_243d6c:
    // 0x243d6c: 0xffb40280  sd          $s4, 0x280($sp)
    ctx->pc = 0x243d6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 640), GPR_U64(ctx, 20));
label_243d70:
    // 0x243d70: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x243d70u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_243d74:
    // 0x243d74: 0xffb00260  sd          $s0, 0x260($sp)
    ctx->pc = 0x243d74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 608), GPR_U64(ctx, 16));
label_243d78:
    // 0x243d78: 0xffb20270  sd          $s2, 0x270($sp)
    ctx->pc = 0x243d78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 624), GPR_U64(ctx, 18));
label_243d7c:
    // 0x243d7c: 0x16200004  bnez        $s1, . + 4 + (0x4 << 2)
label_243d80:
    if (ctx->pc == 0x243D80u) {
        ctx->pc = 0x243D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243D7Cu;
        // 0x243d80: 0xffbf0288  sd          $ra, 0x288($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 648), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243D84u;
        goto label_243d84;
    }
    ctx->pc = 0x243D7Cu;
    {
        const bool branch_taken_0x243d7c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x243D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243D7Cu;
        // 0x243d80: 0xffbf0288  sd          $ra, 0x288($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 648), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243d7c) {
            ctx->pc = 0x243D90u;
            goto label_243d90;
        }
    }
    ctx->pc = 0x243D84u;
label_243d84:
    // 0x243d84: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x243d84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
label_243d88:
    // 0x243d88: 0x10000032  b           . + 4 + (0x32 << 2)
label_243d8c:
    if (ctx->pc == 0x243D8Cu) {
        ctx->pc = 0x243D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243D88u;
        // 0x243d8c: 0x2484bc50  addiu       $a0, $a0, -0x43B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949968));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243D90u;
        goto label_243d90;
    }
    ctx->pc = 0x243D88u;
    {
        const bool branch_taken_0x243d88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x243D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243D88u;
        // 0x243d8c: 0x2484bc50  addiu       $a0, $a0, -0x43B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949968));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243d88) {
            ctx->pc = 0x243E54u;
            goto label_243e54;
        }
    }
    ctx->pc = 0x243D90u;
label_243d90:
    // 0x243d90: 0x27b20130  addiu       $s2, $sp, 0x130
    ctx->pc = 0x243d90u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_243d94:
    // 0x243d94: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x243d94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_243d98:
    // 0x243d98: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x243d98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_243d9c:
    // 0x243d9c: 0xc090fbe  jal         func_243EF8
label_243da0:
    if (ctx->pc == 0x243DA0u) {
        ctx->pc = 0x243DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243D9Cu;
        // 0x243da0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243DA4u;
        goto label_243da4;
    }
    ctx->pc = 0x243D9Cu;
    SET_GPR_U32(ctx, 31, 0x243DA4u);
    ctx->pc = 0x243DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243D9Cu;
    // 0x243da0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x243EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243EF8u, 0x243D9Cu, 0x243DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243DA4u;
label_243da4:
    // 0x243da4: 0x83a20130  lb          $v0, 0x130($sp)
    ctx->pc = 0x243da4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 304)));
label_243da8:
    // 0x243da8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_243dac:
    if (ctx->pc == 0x243DACu) {
        ctx->pc = 0x243DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243DA8u;
        // 0x243dac: 0x3c040067  lui         $a0, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243DB0u;
        goto label_243db0;
    }
    ctx->pc = 0x243DA8u;
    {
        const bool branch_taken_0x243da8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x243DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243DA8u;
        // 0x243dac: 0x3c040067  lui         $a0, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243da8) {
            ctx->pc = 0x243DB8u;
            goto label_243db8;
        }
    }
    ctx->pc = 0x243DB0u;
label_243db0:
    // 0x243db0: 0x10000028  b           . + 4 + (0x28 << 2)
label_243db4:
    if (ctx->pc == 0x243DB4u) {
        ctx->pc = 0x243DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243DB0u;
        // 0x243db4: 0x2484bc50  addiu       $a0, $a0, -0x43B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949968));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243DB8u;
        goto label_243db8;
    }
    ctx->pc = 0x243DB0u;
    {
        const bool branch_taken_0x243db0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x243DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243DB0u;
        // 0x243db4: 0x2484bc50  addiu       $a0, $a0, -0x43B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949968));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243db0) {
            ctx->pc = 0x243E54u;
            goto label_243e54;
        }
    }
    ctx->pc = 0x243DB8u;
label_243db8:
    // 0x243db8: 0xc090fa0  jal         func_243E80
label_243dbc:
    if (ctx->pc == 0x243DBCu) {
        ctx->pc = 0x243DC0u;
        goto label_243dc0;
    }
    ctx->pc = 0x243DB8u;
    SET_GPR_U32(ctx, 31, 0x243DC0u);
    ctx->pc = 0x243E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E80u, 0x243DB8u, 0x243DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243DC0u;
label_243dc0:
    // 0x243dc0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x243dc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_243dc4:
    // 0x243dc4: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
label_243dc8:
    if (ctx->pc == 0x243DC8u) {
        ctx->pc = 0x243DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243DC4u;
        // 0x243dc8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243DCCu;
        goto label_243dcc;
    }
    ctx->pc = 0x243DC4u;
    {
        const bool branch_taken_0x243dc4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x243DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243DC4u;
        // 0x243dc8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243dc4) {
            ctx->pc = 0x243DD8u;
            goto label_243dd8;
        }
    }
    ctx->pc = 0x243DCCu;
label_243dcc:
    // 0x243dcc: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x243dccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
label_243dd0:
    // 0x243dd0: 0x10000020  b           . + 4 + (0x20 << 2)
label_243dd4:
    if (ctx->pc == 0x243DD4u) {
        ctx->pc = 0x243DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243DD0u;
        // 0x243dd4: 0x2484bc70  addiu       $a0, $a0, -0x4390 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243DD8u;
        goto label_243dd8;
    }
    ctx->pc = 0x243DD0u;
    {
        const bool branch_taken_0x243dd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x243DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243DD0u;
        // 0x243dd4: 0x2484bc70  addiu       $a0, $a0, -0x4390 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243dd0) {
            ctx->pc = 0x243E54u;
            goto label_243e54;
        }
    }
    ctx->pc = 0x243DD8u;
label_243dd8:
    // 0x243dd8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x243dd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_243ddc:
    // 0x243ddc: 0xc090f2c  jal         func_243CB0
label_243de0:
    if (ctx->pc == 0x243DE0u) {
        ctx->pc = 0x243DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243DDCu;
        // 0x243de0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243DE4u;
        goto label_243de4;
    }
    ctx->pc = 0x243DDCu;
    SET_GPR_U32(ctx, 31, 0x243DE4u);
    ctx->pc = 0x243DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243DDCu;
    // 0x243de0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x243CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243CB0u, 0x243DDCu, 0x243DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243DE4u;
label_243de4:
    // 0x243de4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_243de8:
    if (ctx->pc == 0x243DE8u) {
        ctx->pc = 0x243DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243DE4u;
        // 0x243de8: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243DECu;
        goto label_243dec;
    }
    ctx->pc = 0x243DE4u;
    {
        const bool branch_taken_0x243de4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x243DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243DE4u;
        // 0x243de8: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243de4) {
            ctx->pc = 0x243E00u;
            goto label_243e00;
        }
    }
    ctx->pc = 0x243DECu;
label_243dec:
    // 0x243dec: 0xc090fba  jal         func_243EE8
label_243df0:
    if (ctx->pc == 0x243DF0u) {
        ctx->pc = 0x243DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243DECu;
        // 0x243df0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243DF4u;
        goto label_243df4;
    }
    ctx->pc = 0x243DECu;
    SET_GPR_U32(ctx, 31, 0x243DF4u);
    ctx->pc = 0x243DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243DECu;
    // 0x243df0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x243EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243EE8u, 0x243DECu, 0x243DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243DF4u;
label_243df4:
    // 0x243df4: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x243df4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
label_243df8:
    // 0x243df8: 0x10000016  b           . + 4 + (0x16 << 2)
label_243dfc:
    if (ctx->pc == 0x243DFCu) {
        ctx->pc = 0x243DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243DF8u;
        // 0x243dfc: 0x2484bcb8  addiu       $a0, $a0, -0x4348 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950072));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243E00u;
        goto label_243e00;
    }
    ctx->pc = 0x243DF8u;
    {
        const bool branch_taken_0x243df8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x243DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243DF8u;
        // 0x243dfc: 0x2484bcb8  addiu       $a0, $a0, -0x4348 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950072));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243df8) {
            ctx->pc = 0x243E54u;
            goto label_243e54;
        }
    }
    ctx->pc = 0x243E00u;
label_243e00:
    // 0x243e00: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x243e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_243e04:
    // 0x243e04: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_243e08:
    if (ctx->pc == 0x243E08u) {
        ctx->pc = 0x243E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243E04u;
        // 0x243e08: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243E0Cu;
        goto label_243e0c;
    }
    ctx->pc = 0x243E04u;
    {
        const bool branch_taken_0x243e04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x243E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243E04u;
        // 0x243e08: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243e04) {
            ctx->pc = 0x243E20u;
            goto label_243e20;
        }
    }
    ctx->pc = 0x243E0Cu;
label_243e0c:
    // 0x243e0c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x243e0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_243e10:
    // 0x243e10: 0x40f809  jalr        $v0
label_243e14:
    if (ctx->pc == 0x243E14u) {
        ctx->pc = 0x243E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243E10u;
        // 0x243e14: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243E18u;
        goto label_243e18;
    }
    ctx->pc = 0x243E10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x243E18u);
        ctx->pc = 0x243E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243E10u;
        // 0x243e14: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x243E10u, 0x243E18u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x243E18u;
label_243e18:
    // 0x243e18: 0x10000007  b           . + 4 + (0x7 << 2)
label_243e1c:
    if (ctx->pc == 0x243E1Cu) {
        ctx->pc = 0x243E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243E18u;
        // 0x243e1c: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243E20u;
        goto label_243e20;
    }
    ctx->pc = 0x243E18u;
    {
        const bool branch_taken_0x243e18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x243E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243E18u;
        // 0x243e1c: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243e18) {
            ctx->pc = 0x243E38u;
            goto label_243e38;
        }
    }
    ctx->pc = 0x243E20u;
label_243e20:
    // 0x243e20: 0xc090fba  jal         func_243EE8
label_243e24:
    if (ctx->pc == 0x243E24u) {
        ctx->pc = 0x243E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243E20u;
        // 0x243e24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243E28u;
        goto label_243e28;
    }
    ctx->pc = 0x243E20u;
    SET_GPR_U32(ctx, 31, 0x243E28u);
    ctx->pc = 0x243E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243E20u;
    // 0x243e24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x243EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243EE8u, 0x243E20u, 0x243E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243E28u;
label_243e28:
    // 0x243e28: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x243e28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
label_243e2c:
    // 0x243e2c: 0x10000009  b           . + 4 + (0x9 << 2)
label_243e30:
    if (ctx->pc == 0x243E30u) {
        ctx->pc = 0x243E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243E2Cu;
        // 0x243e30: 0x2484bcd8  addiu       $a0, $a0, -0x4328 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950104));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243E34u;
        goto label_243e34;
    }
    ctx->pc = 0x243E2Cu;
    {
        const bool branch_taken_0x243e2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x243E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243E2Cu;
        // 0x243e30: 0x2484bcd8  addiu       $a0, $a0, -0x4328 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243e2c) {
            ctx->pc = 0x243E54u;
            goto label_243e54;
        }
    }
    ctx->pc = 0x243E34u;
label_243e34:
    // 0x243e34: 0x0  nop
    ctx->pc = 0x243e34u;
    // NOP
label_243e38:
    // 0x243e38: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x243e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_243e3c:
    // 0x243e3c: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_243e40:
    if (ctx->pc == 0x243E40u) {
        ctx->pc = 0x243E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243E3Cu;
        // 0x243e40: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243E44u;
        goto label_243e44;
    }
    ctx->pc = 0x243E3Cu;
    {
        const bool branch_taken_0x243e3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x243e3c) {
            ctx->pc = 0x243E40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x243E3Cu;
            // 0x243e40: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x243E60u;
            goto label_243e60;
        }
    }
    ctx->pc = 0x243E44u;
label_243e44:
    // 0x243e44: 0xc090fba  jal         func_243EE8
label_243e48:
    if (ctx->pc == 0x243E48u) {
        ctx->pc = 0x243E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243E44u;
        // 0x243e48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243E4Cu;
        goto label_243e4c;
    }
    ctx->pc = 0x243E44u;
    SET_GPR_U32(ctx, 31, 0x243E4Cu);
    ctx->pc = 0x243E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243E44u;
    // 0x243e48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x243EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243EE8u, 0x243E44u, 0x243E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243E4Cu;
label_243e4c:
    // 0x243e4c: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x243e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
label_243e50:
    // 0x243e50: 0x2484bcf0  addiu       $a0, $a0, -0x4310
    ctx->pc = 0x243e50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950128));
label_243e54:
    { static uint32_t n=0; if (++n<=40) fprintf(stderr,"[probe cvFsOpen:err] %s\n",(const char*)(rdram+(GPR_U32(ctx,4)&0x1ffffffu))); }
    // 0x243e54: 0xc090d8a  jal         func_243628
label_243e58:
    if (ctx->pc == 0x243E58u) {
        ctx->pc = 0x243E5Cu;
        goto label_243e5c;
    }
    ctx->pc = 0x243E54u;
    SET_GPR_U32(ctx, 31, 0x243E5Cu);
    ctx->pc = 0x243628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243628u, 0x243E54u, 0x243E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243E5Cu;
label_243e5c:
    // 0x243e5c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x243e5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_243e60:
    // 0x243e60: 0xdfb00260  ld          $s0, 0x260($sp)
    ctx->pc = 0x243e60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 608)));
label_243e64:
    // 0x243e64: 0xdfb10268  ld          $s1, 0x268($sp)
    ctx->pc = 0x243e64u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 616)));
label_243e68:
    // 0x243e68: 0xdfb20270  ld          $s2, 0x270($sp)
    ctx->pc = 0x243e68u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 624)));
label_243e6c:
    // 0x243e6c: 0xdfb30278  ld          $s3, 0x278($sp)
    ctx->pc = 0x243e6cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 632)));
label_243e70:
    // 0x243e70: 0xdfb40280  ld          $s4, 0x280($sp)
    ctx->pc = 0x243e70u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 640)));
label_243e74:
    // 0x243e74: 0xdfbf0288  ld          $ra, 0x288($sp)
    ctx->pc = 0x243e74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 648)));
label_243e78:
    // 0x243e78: 0x3e00008  jr          $ra
label_243e7c:
    if (ctx->pc == 0x243E7Cu) {
        ctx->pc = 0x243E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243E78u;
        // 0x243e7c: 0x27bd0290  addiu       $sp, $sp, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243E80u;
        goto label_fallthrough_0x243e78;
    }
    ctx->pc = 0x243E78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x243E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243E78u;
        // 0x243e7c: 0x27bd0290  addiu       $sp, $sp, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x243E78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x243e78:
    ctx->pc = 0x243E80u;
}
