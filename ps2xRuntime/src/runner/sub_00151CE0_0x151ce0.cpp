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

// Function: sub_00151CE0
// Address: 0x151ce0 - 0x1522a8
void sub_00151CE0_0x151ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00151CE0_0x151ce0");
#endif
    { static uint32_t n=0; ++n; if (ctx->pc==0x151ce0u && (n<=12||(n%200)==0)) fprintf(stderr,"[sndcmd] n=%u cmd=0x%x arg=0x%x ra=0x%x\n",n,GPR_U32(ctx,4),GPR_U32(ctx,5),GPR_U32(ctx,31)); }

    switch (ctx->pc) {
        case 0x151d90u: goto label_151d90;
        case 0x151d9cu: goto label_151d9c;
        case 0x151da4u: goto label_151da4;
        case 0x151db4u: goto label_151db4;
        case 0x151dc8u: goto label_151dc8;
        case 0x151dd8u: goto label_151dd8;
        case 0x151de4u: goto label_151de4;
        case 0x151decu: goto label_151dec;
        case 0x151df8u: goto label_151df8;
        case 0x151e30u: goto label_151e30;
        case 0x151e58u: goto label_151e58;
        case 0x151e70u: goto label_151e70;
        case 0x151e78u: goto label_151e78;
        case 0x151ea8u: goto label_151ea8;
        case 0x151eccu: goto label_151ecc;
        case 0x151ed8u: goto label_151ed8;
        case 0x151ee4u: goto label_151ee4;
        case 0x151eecu: goto label_151eec;
        case 0x151efcu: goto label_151efc;
        case 0x151f10u: goto label_151f10;
        case 0x151f20u: goto label_151f20;
        case 0x151f2cu: goto label_151f2c;
        case 0x151f34u: goto label_151f34;
        case 0x151f40u: goto label_151f40;
        case 0x151f50u: goto label_151f50;
        case 0x151f80u: goto label_151f80;
        case 0x151f98u: goto label_151f98;
        case 0x151fa4u: goto label_151fa4;
        case 0x151facu: goto label_151fac;
        case 0x151fbcu: goto label_151fbc;
        case 0x151fd0u: goto label_151fd0;
        case 0x151fe0u: goto label_151fe0;
        case 0x151fecu: goto label_151fec;
        case 0x151ff4u: goto label_151ff4;
        case 0x152000u: goto label_152000;
        case 0x152010u: goto label_152010;
        case 0x152040u: goto label_152040;
        case 0x152058u: goto label_152058;
        case 0x152064u: goto label_152064;
        case 0x15206cu: goto label_15206c;
        case 0x15207cu: goto label_15207c;
        case 0x152090u: goto label_152090;
        case 0x1520a0u: goto label_1520a0;
        case 0x1520acu: goto label_1520ac;
        case 0x1520b4u: goto label_1520b4;
        case 0x1520c0u: goto label_1520c0;
        case 0x1520d0u: goto label_1520d0;
        case 0x152100u: goto label_152100;
        case 0x152118u: goto label_152118;
        case 0x152124u: goto label_152124;
        case 0x15212cu: goto label_15212c;
        case 0x15213cu: goto label_15213c;
        case 0x152150u: goto label_152150;
        case 0x152160u: goto label_152160;
        case 0x15216cu: goto label_15216c;
        case 0x152174u: goto label_152174;
        case 0x152180u: goto label_152180;
        case 0x152190u: goto label_152190;
        case 0x1521c4u: goto label_1521c4;
        case 0x1521d8u: goto label_1521d8;
        case 0x1521e4u: goto label_1521e4;
        case 0x1521ecu: goto label_1521ec;
        case 0x1521fcu: goto label_1521fc;
        case 0x152210u: goto label_152210;
        case 0x152220u: goto label_152220;
        case 0x15222cu: goto label_15222c;
        case 0x152234u: goto label_152234;
        case 0x152240u: goto label_152240;
        case 0x152250u: goto label_152250;
        case 0x152280u: goto label_152280;
        default: break;
    }

    ctx->pc = 0x151ce0u;

    // 0x151ce0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x151ce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x151ce4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x151ce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x151ce8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x151ce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x151cec: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x151cecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x151cf0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x151cf0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151cf4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x151cf4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151cf8: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x151CF8u;
    {
        const bool branch_taken_0x151cf8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x151CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151CF8u;
        // 0x151cfc: 0x7fb00010  sq          $s0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151cf8) {
            ctx->pc = 0x151D10u;
            goto label_151d10;
        }
    }
    ctx->pc = 0x151D00u;
    // 0x151d00: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x151D00u;
    {
        const bool branch_taken_0x151d00 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x151D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151D00u;
        // 0x151d04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151d00) {
            ctx->pc = 0x151D10u;
            goto label_151d10;
        }
    }
    ctx->pc = 0x151D08u;
    // 0x151d08: 0x10000161  b           . + 4 + (0x161 << 2)
    ctx->pc = 0x151D08u;
    {
        const bool branch_taken_0x151d08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x151d08) {
            ctx->pc = 0x152290u;
            goto label_152290;
        }
    }
    ctx->pc = 0x151D10u;
label_151d10:
    // 0x151d10: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x151d10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x151d14: 0x2428024  and         $s0, $s2, $v0
    ctx->pc = 0x151d14u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
    // 0x151d18: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x151d18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x151d1c: 0x12020134  beq         $s0, $v0, . + 4 + (0x134 << 2)
    ctx->pc = 0x151D1Cu;
    {
        const bool branch_taken_0x151d1c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x151D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151D1Cu;
        // 0x151d20: 0x3c020027  lui         $v0, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)39 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151d1c) {
            ctx->pc = 0x1521F0u;
            goto label_1521f0;
        }
    }
    ctx->pc = 0x151D24u;
    // 0x151d24: 0x12020102  beq         $s0, $v0, . + 4 + (0x102 << 2)
    ctx->pc = 0x151D24u;
    {
        const bool branch_taken_0x151d24 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x151d24) {
            ctx->pc = 0x152130u;
            goto label_152130;
        }
    }
    ctx->pc = 0x151D2Cu;
    // 0x151d2c: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x151d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x151d30: 0x120200cf  beq         $s0, $v0, . + 4 + (0xCF << 2)
    ctx->pc = 0x151D30u;
    {
        const bool branch_taken_0x151d30 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x151D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151D30u;
        // 0x151d34: 0x3c020006  lui         $v0, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)6 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151d30) {
            ctx->pc = 0x152070u;
            goto label_152070;
        }
    }
    ctx->pc = 0x151D38u;
    // 0x151d38: 0x1202009d  beq         $s0, $v0, . + 4 + (0x9D << 2)
    ctx->pc = 0x151D38u;
    {
        const bool branch_taken_0x151d38 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x151d38) {
            ctx->pc = 0x151FB0u;
            goto label_151fb0;
        }
    }
    ctx->pc = 0x151D40u;
    // 0x151d40: 0x3c020015  lui         $v0, 0x15
    ctx->pc = 0x151d40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
    // 0x151d44: 0x1202009a  beq         $s0, $v0, . + 4 + (0x9A << 2)
    ctx->pc = 0x151D44u;
    {
        const bool branch_taken_0x151d44 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x151D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151D44u;
        // 0x151d48: 0x3c020014  lui         $v0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151d44) {
            ctx->pc = 0x151FB0u;
            goto label_151fb0;
        }
    }
    ctx->pc = 0x151D4Cu;
    // 0x151d4c: 0x12020098  beq         $s0, $v0, . + 4 + (0x98 << 2)
    ctx->pc = 0x151D4Cu;
    {
        const bool branch_taken_0x151d4c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x151d4c) {
            ctx->pc = 0x151FB0u;
            goto label_151fb0;
        }
    }
    ctx->pc = 0x151D54u;
    // 0x151d54: 0x3c020007  lui         $v0, 0x7
    ctx->pc = 0x151d54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7 << 16));
    // 0x151d58: 0x12020095  beq         $s0, $v0, . + 4 + (0x95 << 2)
    ctx->pc = 0x151D58u;
    {
        const bool branch_taken_0x151d58 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x151D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151D58u;
        // 0x151d5c: 0x3c020004  lui         $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151d58) {
            ctx->pc = 0x151FB0u;
            goto label_151fb0;
        }
    }
    ctx->pc = 0x151D60u;
    // 0x151d60: 0x12020093  beq         $s0, $v0, . + 4 + (0x93 << 2)
    ctx->pc = 0x151D60u;
    {
        const bool branch_taken_0x151d60 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x151d60) {
            ctx->pc = 0x151FB0u;
            goto label_151fb0;
        }
    }
    ctx->pc = 0x151D68u;
    // 0x151d68: 0x3c020031  lui         $v0, 0x31
    ctx->pc = 0x151d68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49 << 16));
    // 0x151d6c: 0x12020060  beq         $s0, $v0, . + 4 + (0x60 << 2)
    ctx->pc = 0x151D6Cu;
    {
        const bool branch_taken_0x151d6c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x151D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151D6Cu;
        // 0x151d70: 0x3c020011  lui         $v0, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151d6c) {
            ctx->pc = 0x151EF0u;
            goto label_151ef0;
        }
    }
    ctx->pc = 0x151D74u;
    // 0x151d74: 0x1202000c  beq         $s0, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x151D74u;
    {
        const bool branch_taken_0x151d74 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x151d74) {
            ctx->pc = 0x151DA8u;
            goto label_151da8;
        }
    }
    ctx->pc = 0x151D7Cu;
    // 0x151d7c: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x151d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x151d80: 0x12020009  beq         $s0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x151D80u;
    {
        const bool branch_taken_0x151d80 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x151d80) {
            ctx->pc = 0x151DA8u;
            goto label_151da8;
        }
    }
    ctx->pc = 0x151D88u;
    // 0x151d88: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x151D88u;
    {
        const bool branch_taken_0x151d88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x151d88) {
            ctx->pc = 0x151EC0u;
            goto label_151ec0;
        }
    }
    ctx->pc = 0x151D90u;
label_151d90:
    // 0x151d90: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x151d90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x151d94: 0xc0499ee  jal         func_1267B8
    ctx->pc = 0x151D94u;
    SET_GPR_U32(ctx, 31, 0x151D9Cu);
    ctx->pc = 0x151D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151D94u;
    // 0x151d98: 0x24844d40  addiu       $a0, $a0, 0x4D40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1267B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1267B8u, 0x151D94u, 0x151D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151D9Cu;
label_151d9c:
    // 0x151d9c: 0xc054628  jal         func_1518A0
    ctx->pc = 0x151D9Cu;
    SET_GPR_U32(ctx, 31, 0x151DA4u);
    ctx->pc = 0x151DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151D9Cu;
    // 0x151da0: 0x24042710  addiu       $a0, $zero, 0x2710 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1518A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1518A0u, 0x151D9Cu, 0x151DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151DA4u;
label_151da4:
    // 0x151da4: 0x0  nop
    ctx->pc = 0x151da4u;
    // NOP
label_151da8:
    // 0x151da8: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x151da8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
    // 0x151dac: 0xc04484a  jal         func_112128
    ctx->pc = 0x151DACu;
    SET_GPR_U32(ctx, 31, 0x151DB4u);
    ctx->pc = 0x151DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151DACu;
    // 0x151db0: 0x24847150  addiu       $a0, $a0, 0x7150 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29008));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112128u, 0x151DACu, 0x151DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151DB4u;
label_151db4:
    // 0x151db4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x151db4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x151db8: 0x1043fff5  beq         $v0, $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x151DB8u;
    {
        const bool branch_taken_0x151db8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x151DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151DB8u;
        // 0x151dbc: 0x3c04007e  lui         $a0, 0x7E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151db8) {
            ctx->pc = 0x151D90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_151d90;
        }
    }
    ctx->pc = 0x151DC0u;
    // 0x151dc0: 0xc04484a  jal         func_112128
    ctx->pc = 0x151DC0u;
    SET_GPR_U32(ctx, 31, 0x151DC8u);
    ctx->pc = 0x151DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151DC0u;
    // 0x151dc4: 0x24847180  addiu       $a0, $a0, 0x7180 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112128u, 0x151DC0u, 0x151DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151DC8u;
label_151dc8:
    // 0x151dc8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x151dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x151dcc: 0x1443000e  bne         $v0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x151DCCu;
    {
        const bool branch_taken_0x151dcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x151dcc) {
            ctx->pc = 0x151E08u;
            goto label_151e08;
        }
    }
    ctx->pc = 0x151DD4u;
    // 0x151dd4: 0x0  nop
    ctx->pc = 0x151dd4u;
    // NOP
label_151dd8:
    // 0x151dd8: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x151dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x151ddc: 0xc0499ee  jal         func_1267B8
    ctx->pc = 0x151DDCu;
    SET_GPR_U32(ctx, 31, 0x151DE4u);
    ctx->pc = 0x151DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151DDCu;
    // 0x151de0: 0x24844d40  addiu       $a0, $a0, 0x4D40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1267B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1267B8u, 0x151DDCu, 0x151DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151DE4u;
label_151de4:
    // 0x151de4: 0xc054628  jal         func_1518A0
    ctx->pc = 0x151DE4u;
    SET_GPR_U32(ctx, 31, 0x151DECu);
    ctx->pc = 0x151DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151DE4u;
    // 0x151de8: 0x24042710  addiu       $a0, $zero, 0x2710 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1518A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1518A0u, 0x151DE4u, 0x151DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151DECu;
label_151dec:
    // 0x151dec: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x151decu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
    // 0x151df0: 0xc04484a  jal         func_112128
    ctx->pc = 0x151DF0u;
    SET_GPR_U32(ctx, 31, 0x151DF8u);
    ctx->pc = 0x151DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151DF0u;
    // 0x151df4: 0x24847180  addiu       $a0, $a0, 0x7180 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112128u, 0x151DF0u, 0x151DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151DF8u;
label_151df8:
    // 0x151df8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x151df8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x151dfc: 0x1043fff6  beq         $v0, $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x151DFCu;
    {
        const bool branch_taken_0x151dfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x151dfc) {
            ctx->pc = 0x151DD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_151dd8;
        }
    }
    ctx->pc = 0x151E04u;
    // 0x151e04: 0x0  nop
    ctx->pc = 0x151e04u;
    // NOP
label_151e08:
    // 0x151e08: 0x3c020011  lui         $v0, 0x11
    ctx->pc = 0x151e08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17 << 16));
    // 0x151e0c: 0x12020010  beq         $s0, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x151E0Cu;
    {
        const bool branch_taken_0x151e0c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x151E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151E0Cu;
        // 0x151e10: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151e0c) {
            ctx->pc = 0x151E50u;
            goto label_151e50;
        }
    }
    ctx->pc = 0x151E14u;
    // 0x151e14: 0x12020004  beq         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x151E14u;
    {
        const bool branch_taken_0x151e14 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x151e14) {
            ctx->pc = 0x151E28u;
            goto label_151e28;
        }
    }
    ctx->pc = 0x151E1Cu;
    // 0x151e1c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x151E1Cu;
    {
        const bool branch_taken_0x151e1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x151e1c) {
            ctx->pc = 0x151E70u;
            goto label_151e70;
        }
    }
    ctx->pc = 0x151E24u;
    // 0x151e24: 0x0  nop
    ctx->pc = 0x151e24u;
    // NOP
label_151e28:
    // 0x151e28: 0xc054990  jal         func_152640
    ctx->pc = 0x151E28u;
    SET_GPR_U32(ctx, 31, 0x151E30u);
    ctx->pc = 0x152640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152640u, 0x151E28u, 0x151E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151E30u;
label_151e30:
    // 0x151e30: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x151e30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x151e34: 0x3c030015  lui         $v1, 0x15
    ctx->pc = 0x151e34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21 << 16));
    // 0x151e38: 0x24632660  addiu       $v1, $v1, 0x2660
    ctx->pc = 0x151e38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9824));
    // 0x151e3c: 0x34840001  ori         $a0, $a0, 0x1
    ctx->pc = 0x151e3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1);
    // 0x151e40: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x151e40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x151e44: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x151E44u;
    {
        const bool branch_taken_0x151e44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x151E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151E44u;
        // 0x151e48: 0xaf8385a0  sw          $v1, -0x7A60($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935968), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151e44) {
            ctx->pc = 0x151E70u;
            goto label_151e70;
        }
    }
    ctx->pc = 0x151E4Cu;
    // 0x151e4c: 0x0  nop
    ctx->pc = 0x151e4cu;
    // NOP
label_151e50:
    // 0x151e50: 0xc054990  jal         func_152640
    ctx->pc = 0x151E50u;
    SET_GPR_U32(ctx, 31, 0x151E58u);
    ctx->pc = 0x152640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152640u, 0x151E50u, 0x151E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151E58u;
label_151e58:
    // 0x151e58: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x151e58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x151e5c: 0x3c030015  lui         $v1, 0x15
    ctx->pc = 0x151e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21 << 16));
    // 0x151e60: 0x24632680  addiu       $v1, $v1, 0x2680
    ctx->pc = 0x151e60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9856));
    // 0x151e64: 0x34840002  ori         $a0, $a0, 0x2
    ctx->pc = 0x151e64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2);
    // 0x151e68: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x151e68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x151e6c: 0xaf8385a0  sw          $v1, -0x7A60($gp)
    ctx->pc = 0x151e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935968), GPR_U32(ctx, 3));
label_151e70:
    // 0x151e70: 0xc054990  jal         func_152640
    ctx->pc = 0x151E70u;
    SET_GPR_U32(ctx, 31, 0x151E78u);
    ctx->pc = 0x152640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152640u, 0x151E70u, 0x151E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151E78u;
label_151e78:
    // 0x151e78: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x151e78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x151e7c: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x151e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
    // 0x151e80: 0x8f8b85a0  lw          $t3, -0x7A60($gp)
    ctx->pc = 0x151e80u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935968)));
    // 0x151e84: 0x3c09007f  lui         $t1, 0x7F
    ctx->pc = 0x151e84u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)127 << 16));
    // 0x151e88: 0x24847180  addiu       $a0, $a0, 0x7180
    ctx->pc = 0x151e88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29056));
    // 0x151e8c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x151e8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151e90: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x151e90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151e94: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x151e94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151e98: 0x24080320  addiu       $t0, $zero, 0x320
    ctx->pc = 0x151e98u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 800));
    // 0x151e9c: 0x25290e40  addiu       $t1, $t1, 0xE40
    ctx->pc = 0x151e9cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 3648));
    // 0x151ea0: 0xc0447ca  jal         func_111F28
    ctx->pc = 0x151EA0u;
    SET_GPR_U32(ctx, 31, 0x151EA8u);
    ctx->pc = 0x151EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151EA0u;
    // 0x151ea4: 0x240a0004  addiu       $t2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111F28u, 0x151EA0u, 0x151EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151EA8u;
label_151ea8:
    // 0x151ea8: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x151EA8u;
    {
        const bool branch_taken_0x151ea8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x151ea8) {
            ctx->pc = 0x151E70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_151e70;
        }
    }
    ctx->pc = 0x151EB0u;
    // 0x151eb0: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x151eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x151eb4: 0x100000f6  b           . + 4 + (0xF6 << 2)
    ctx->pc = 0x151EB4u;
    {
        const bool branch_taken_0x151eb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x151EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151EB4u;
        // 0x151eb8: 0x24420e40  addiu       $v0, $v0, 0xE40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3648));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151eb4) {
            ctx->pc = 0x152290u;
            goto label_152290;
        }
    }
    ctx->pc = 0x151EBCu;
    // 0x151ebc: 0x0  nop
    ctx->pc = 0x151ebcu;
    // NOP
label_151ec0:
    // 0x151ec0: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x151ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x151ec4: 0xc0499ee  jal         func_1267B8
    ctx->pc = 0x151EC4u;
    SET_GPR_U32(ctx, 31, 0x151ECCu);
    ctx->pc = 0x151EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151EC4u;
    // 0x151ec8: 0x24844da0  addiu       $a0, $a0, 0x4DA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19872));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1267B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1267B8u, 0x151EC4u, 0x151ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151ECCu;
label_151ecc:
    // 0x151ecc: 0x100000ee  b           . + 4 + (0xEE << 2)
    ctx->pc = 0x151ECCu;
    {
        const bool branch_taken_0x151ecc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x151ecc) {
            ctx->pc = 0x152288u;
            goto label_152288;
        }
    }
    ctx->pc = 0x151ED4u;
    // 0x151ed4: 0x0  nop
    ctx->pc = 0x151ed4u;
    // NOP
label_151ed8:
    // 0x151ed8: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x151ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x151edc: 0xc0499ee  jal         func_1267B8
    ctx->pc = 0x151EDCu;
    SET_GPR_U32(ctx, 31, 0x151EE4u);
    ctx->pc = 0x151EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151EDCu;
    // 0x151ee0: 0x24844d40  addiu       $a0, $a0, 0x4D40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1267B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1267B8u, 0x151EDCu, 0x151EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151EE4u;
label_151ee4:
    // 0x151ee4: 0xc054628  jal         func_1518A0
    ctx->pc = 0x151EE4u;
    SET_GPR_U32(ctx, 31, 0x151EECu);
    ctx->pc = 0x151EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151EE4u;
    // 0x151ee8: 0x24042710  addiu       $a0, $zero, 0x2710 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1518A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1518A0u, 0x151EE4u, 0x151EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151EECu;
label_151eec:
    // 0x151eec: 0x0  nop
    ctx->pc = 0x151eecu;
    // NOP
label_151ef0:
    // 0x151ef0: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x151ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
    // 0x151ef4: 0xc04484a  jal         func_112128
    ctx->pc = 0x151EF4u;
    SET_GPR_U32(ctx, 31, 0x151EFCu);
    ctx->pc = 0x151EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151EF4u;
    // 0x151ef8: 0x24847150  addiu       $a0, $a0, 0x7150 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29008));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112128u, 0x151EF4u, 0x151EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151EFCu;
label_151efc:
    // 0x151efc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x151efcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x151f00: 0x1043fff5  beq         $v0, $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x151F00u;
    {
        const bool branch_taken_0x151f00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x151F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151F00u;
        // 0x151f04: 0x3c04007e  lui         $a0, 0x7E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151f00) {
            ctx->pc = 0x151ED8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_151ed8;
        }
    }
    ctx->pc = 0x151F08u;
    // 0x151f08: 0xc04484a  jal         func_112128
    ctx->pc = 0x151F08u;
    SET_GPR_U32(ctx, 31, 0x151F10u);
    ctx->pc = 0x151F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151F08u;
    // 0x151f0c: 0x24847180  addiu       $a0, $a0, 0x7180 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112128u, 0x151F08u, 0x151F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151F10u;
label_151f10:
    // 0x151f10: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x151f10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x151f14: 0x1443000e  bne         $v0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x151F14u;
    {
        const bool branch_taken_0x151f14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x151f14) {
            ctx->pc = 0x151F50u;
            goto label_151f50;
        }
    }
    ctx->pc = 0x151F1Cu;
    // 0x151f1c: 0x0  nop
    ctx->pc = 0x151f1cu;
    // NOP
label_151f20:
    // 0x151f20: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x151f20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x151f24: 0xc0499ee  jal         func_1267B8
    ctx->pc = 0x151F24u;
    SET_GPR_U32(ctx, 31, 0x151F2Cu);
    ctx->pc = 0x151F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151F24u;
    // 0x151f28: 0x24844d40  addiu       $a0, $a0, 0x4D40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1267B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1267B8u, 0x151F24u, 0x151F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151F2Cu;
label_151f2c:
    // 0x151f2c: 0xc054628  jal         func_1518A0
    ctx->pc = 0x151F2Cu;
    SET_GPR_U32(ctx, 31, 0x151F34u);
    ctx->pc = 0x151F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151F2Cu;
    // 0x151f30: 0x24042710  addiu       $a0, $zero, 0x2710 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1518A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1518A0u, 0x151F2Cu, 0x151F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151F34u;
label_151f34:
    // 0x151f34: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x151f34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
    // 0x151f38: 0xc04484a  jal         func_112128
    ctx->pc = 0x151F38u;
    SET_GPR_U32(ctx, 31, 0x151F40u);
    ctx->pc = 0x151F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151F38u;
    // 0x151f3c: 0x24847180  addiu       $a0, $a0, 0x7180 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112128u, 0x151F38u, 0x151F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151F40u;
label_151f40:
    // 0x151f40: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x151f40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x151f44: 0x1043fff6  beq         $v0, $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x151F44u;
    {
        const bool branch_taken_0x151f44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x151f44) {
            ctx->pc = 0x151F20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_151f20;
        }
    }
    ctx->pc = 0x151F4Cu;
    // 0x151f4c: 0x0  nop
    ctx->pc = 0x151f4cu;
    // NOP
label_151f50:
    // 0x151f50: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x151f50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
    // 0x151f54: 0x3c09007f  lui         $t1, 0x7F
    ctx->pc = 0x151f54u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)127 << 16));
    // 0x151f58: 0x24847180  addiu       $a0, $a0, 0x7180
    ctx->pc = 0x151f58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29056));
    // 0x151f5c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x151f5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151f60: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x151f60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151f64: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x151f64u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151f68: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x151f68u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151f6c: 0x25290e40  addiu       $t1, $t1, 0xE40
    ctx->pc = 0x151f6cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 3648));
    // 0x151f70: 0x240a0010  addiu       $t2, $zero, 0x10
    ctx->pc = 0x151f70u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x151f74: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x151f74u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151f78: 0xc0447ca  jal         func_111F28
    ctx->pc = 0x151F78u;
    SET_GPR_U32(ctx, 31, 0x151F80u);
    ctx->pc = 0x151F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151F78u;
    // 0x151f7c: 0xffa00000  sd          $zero, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111F28u, 0x151F78u, 0x151F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151F80u;
label_151f80:
    // 0x151f80: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x151F80u;
    {
        const bool branch_taken_0x151f80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x151f80) {
            ctx->pc = 0x151F50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_151f50;
        }
    }
    ctx->pc = 0x151F88u;
    // 0x151f88: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x151f88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x151f8c: 0x100000c0  b           . + 4 + (0xC0 << 2)
    ctx->pc = 0x151F8Cu;
    {
        const bool branch_taken_0x151f8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x151F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151F8Cu;
        // 0x151f90: 0x24420e40  addiu       $v0, $v0, 0xE40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3648));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151f8c) {
            ctx->pc = 0x152290u;
            goto label_152290;
        }
    }
    ctx->pc = 0x151F94u;
    // 0x151f94: 0x0  nop
    ctx->pc = 0x151f94u;
    // NOP
label_151f98:
    // 0x151f98: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x151f98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x151f9c: 0xc0499ee  jal         func_1267B8
    ctx->pc = 0x151F9Cu;
    SET_GPR_U32(ctx, 31, 0x151FA4u);
    ctx->pc = 0x151FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151F9Cu;
    // 0x151fa0: 0x24844d40  addiu       $a0, $a0, 0x4D40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1267B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1267B8u, 0x151F9Cu, 0x151FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151FA4u;
label_151fa4:
    // 0x151fa4: 0xc054628  jal         func_1518A0
    ctx->pc = 0x151FA4u;
    SET_GPR_U32(ctx, 31, 0x151FACu);
    ctx->pc = 0x151FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151FA4u;
    // 0x151fa8: 0x24042710  addiu       $a0, $zero, 0x2710 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1518A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1518A0u, 0x151FA4u, 0x151FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151FACu;
label_151fac:
    // 0x151fac: 0x0  nop
    ctx->pc = 0x151facu;
    // NOP
label_151fb0:
    // 0x151fb0: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x151fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
    // 0x151fb4: 0xc04484a  jal         func_112128
    ctx->pc = 0x151FB4u;
    SET_GPR_U32(ctx, 31, 0x151FBCu);
    ctx->pc = 0x151FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151FB4u;
    // 0x151fb8: 0x24847150  addiu       $a0, $a0, 0x7150 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29008));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112128u, 0x151FB4u, 0x151FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151FBCu;
label_151fbc:
    // 0x151fbc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x151fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x151fc0: 0x1043fff5  beq         $v0, $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x151FC0u;
    {
        const bool branch_taken_0x151fc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x151FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151FC0u;
        // 0x151fc4: 0x3c04007e  lui         $a0, 0x7E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151fc0) {
            ctx->pc = 0x151F98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_151f98;
        }
    }
    ctx->pc = 0x151FC8u;
    // 0x151fc8: 0xc04484a  jal         func_112128
    ctx->pc = 0x151FC8u;
    SET_GPR_U32(ctx, 31, 0x151FD0u);
    ctx->pc = 0x151FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151FC8u;
    // 0x151fcc: 0x24847180  addiu       $a0, $a0, 0x7180 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112128u, 0x151FC8u, 0x151FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151FD0u;
label_151fd0:
    // 0x151fd0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x151fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x151fd4: 0x1443000e  bne         $v0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x151FD4u;
    {
        const bool branch_taken_0x151fd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x151fd4) {
            ctx->pc = 0x152010u;
            goto label_152010;
        }
    }
    ctx->pc = 0x151FDCu;
    // 0x151fdc: 0x0  nop
    ctx->pc = 0x151fdcu;
    // NOP
label_151fe0:
    // 0x151fe0: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x151fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x151fe4: 0xc0499ee  jal         func_1267B8
    ctx->pc = 0x151FE4u;
    SET_GPR_U32(ctx, 31, 0x151FECu);
    ctx->pc = 0x151FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151FE4u;
    // 0x151fe8: 0x24844d40  addiu       $a0, $a0, 0x4D40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1267B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1267B8u, 0x151FE4u, 0x151FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151FECu;
label_151fec:
    // 0x151fec: 0xc054628  jal         func_1518A0
    ctx->pc = 0x151FECu;
    SET_GPR_U32(ctx, 31, 0x151FF4u);
    ctx->pc = 0x151FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151FECu;
    // 0x151ff0: 0x24042710  addiu       $a0, $zero, 0x2710 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1518A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1518A0u, 0x151FECu, 0x151FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151FF4u;
label_151ff4:
    // 0x151ff4: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x151ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
    // 0x151ff8: 0xc04484a  jal         func_112128
    ctx->pc = 0x151FF8u;
    SET_GPR_U32(ctx, 31, 0x152000u);
    ctx->pc = 0x151FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151FF8u;
    // 0x151ffc: 0x24847180  addiu       $a0, $a0, 0x7180 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112128u, 0x151FF8u, 0x152000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152000u;
label_152000:
    // 0x152000: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x152000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x152004: 0x1043fff6  beq         $v0, $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x152004u;
    {
        const bool branch_taken_0x152004 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x152004) {
            ctx->pc = 0x151FE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_151fe0;
        }
    }
    ctx->pc = 0x15200Cu;
    // 0x15200c: 0x0  nop
    ctx->pc = 0x15200cu;
    // NOP
label_152010:
    // 0x152010: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x152010u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
    // 0x152014: 0x3c09007f  lui         $t1, 0x7F
    ctx->pc = 0x152014u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)127 << 16));
    // 0x152018: 0x24847180  addiu       $a0, $a0, 0x7180
    ctx->pc = 0x152018u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29056));
    // 0x15201c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x15201cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152020: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x152020u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152024: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x152024u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152028: 0x24080320  addiu       $t0, $zero, 0x320
    ctx->pc = 0x152028u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 800));
    // 0x15202c: 0x25290e40  addiu       $t1, $t1, 0xE40
    ctx->pc = 0x15202cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 3648));
    // 0x152030: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x152030u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x152034: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x152034u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152038: 0xc0447ca  jal         func_111F28
    ctx->pc = 0x152038u;
    SET_GPR_U32(ctx, 31, 0x152040u);
    ctx->pc = 0x15203Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152038u;
    // 0x15203c: 0xffa00000  sd          $zero, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111F28u, 0x152038u, 0x152040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152040u;
label_152040:
    // 0x152040: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x152040u;
    {
        const bool branch_taken_0x152040 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x152040) {
            ctx->pc = 0x152010u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_152010;
        }
    }
    ctx->pc = 0x152048u;
    // 0x152048: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x152048u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x15204c: 0x10000090  b           . + 4 + (0x90 << 2)
    ctx->pc = 0x15204Cu;
    {
        const bool branch_taken_0x15204c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x152050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15204Cu;
        // 0x152050: 0x24420e40  addiu       $v0, $v0, 0xE40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3648));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15204c) {
            ctx->pc = 0x152290u;
            goto label_152290;
        }
    }
    ctx->pc = 0x152054u;
    // 0x152054: 0x0  nop
    ctx->pc = 0x152054u;
    // NOP
label_152058:
    // 0x152058: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x152058u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x15205c: 0xc0499ee  jal         func_1267B8
    ctx->pc = 0x15205Cu;
    SET_GPR_U32(ctx, 31, 0x152064u);
    ctx->pc = 0x152060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15205Cu;
    // 0x152060: 0x24844d40  addiu       $a0, $a0, 0x4D40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1267B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1267B8u, 0x15205Cu, 0x152064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152064u;
label_152064:
    // 0x152064: 0xc054628  jal         func_1518A0
    ctx->pc = 0x152064u;
    SET_GPR_U32(ctx, 31, 0x15206Cu);
    ctx->pc = 0x152068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152064u;
    // 0x152068: 0x24042710  addiu       $a0, $zero, 0x2710 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1518A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1518A0u, 0x152064u, 0x15206Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15206Cu;
label_15206c:
    // 0x15206c: 0x0  nop
    ctx->pc = 0x15206cu;
    // NOP
label_152070:
    // 0x152070: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x152070u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
    // 0x152074: 0xc04484a  jal         func_112128
    ctx->pc = 0x152074u;
    SET_GPR_U32(ctx, 31, 0x15207Cu);
    ctx->pc = 0x152078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152074u;
    // 0x152078: 0x24847150  addiu       $a0, $a0, 0x7150 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29008));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112128u, 0x152074u, 0x15207Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15207Cu;
label_15207c:
    // 0x15207c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x15207cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x152080: 0x1043fff5  beq         $v0, $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x152080u;
    {
        const bool branch_taken_0x152080 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x152084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152080u;
        // 0x152084: 0x3c04007e  lui         $a0, 0x7E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152080) {
            ctx->pc = 0x152058u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_152058;
        }
    }
    ctx->pc = 0x152088u;
    // 0x152088: 0xc04484a  jal         func_112128
    ctx->pc = 0x152088u;
    SET_GPR_U32(ctx, 31, 0x152090u);
    ctx->pc = 0x15208Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152088u;
    // 0x15208c: 0x24847180  addiu       $a0, $a0, 0x7180 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112128u, 0x152088u, 0x152090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152090u;
label_152090:
    // 0x152090: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x152090u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x152094: 0x1443000e  bne         $v0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x152094u;
    {
        const bool branch_taken_0x152094 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x152094) {
            ctx->pc = 0x1520D0u;
            goto label_1520d0;
        }
    }
    ctx->pc = 0x15209Cu;
    // 0x15209c: 0x0  nop
    ctx->pc = 0x15209cu;
    // NOP
label_1520a0:
    // 0x1520a0: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x1520a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x1520a4: 0xc0499ee  jal         func_1267B8
    ctx->pc = 0x1520A4u;
    SET_GPR_U32(ctx, 31, 0x1520ACu);
    ctx->pc = 0x1520A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1520A4u;
    // 0x1520a8: 0x24844d40  addiu       $a0, $a0, 0x4D40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1267B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1267B8u, 0x1520A4u, 0x1520ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1520ACu;
label_1520ac:
    // 0x1520ac: 0xc054628  jal         func_1518A0
    ctx->pc = 0x1520ACu;
    SET_GPR_U32(ctx, 31, 0x1520B4u);
    ctx->pc = 0x1520B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1520ACu;
    // 0x1520b0: 0x24042710  addiu       $a0, $zero, 0x2710 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1518A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1518A0u, 0x1520ACu, 0x1520B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1520B4u;
label_1520b4:
    // 0x1520b4: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x1520b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
    // 0x1520b8: 0xc04484a  jal         func_112128
    ctx->pc = 0x1520B8u;
    SET_GPR_U32(ctx, 31, 0x1520C0u);
    ctx->pc = 0x1520BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1520B8u;
    // 0x1520bc: 0x24847180  addiu       $a0, $a0, 0x7180 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112128u, 0x1520B8u, 0x1520C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1520C0u;
label_1520c0:
    // 0x1520c0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1520c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1520c4: 0x1043fff6  beq         $v0, $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x1520C4u;
    {
        const bool branch_taken_0x1520c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1520c4) {
            ctx->pc = 0x1520A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1520a0;
        }
    }
    ctx->pc = 0x1520CCu;
    // 0x1520cc: 0x0  nop
    ctx->pc = 0x1520ccu;
    // NOP
label_1520d0:
    // 0x1520d0: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x1520d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
    // 0x1520d4: 0x3c09007f  lui         $t1, 0x7F
    ctx->pc = 0x1520d4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)127 << 16));
    // 0x1520d8: 0x24847180  addiu       $a0, $a0, 0x7180
    ctx->pc = 0x1520d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29056));
    // 0x1520dc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1520dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1520e0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1520e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1520e4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1520e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1520e8: 0x24080088  addiu       $t0, $zero, 0x88
    ctx->pc = 0x1520e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 136));
    // 0x1520ec: 0x25290e40  addiu       $t1, $t1, 0xE40
    ctx->pc = 0x1520ecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 3648));
    // 0x1520f0: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1520f0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1520f4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1520f4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1520f8: 0xc0447ca  jal         func_111F28
    ctx->pc = 0x1520F8u;
    SET_GPR_U32(ctx, 31, 0x152100u);
    ctx->pc = 0x1520FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1520F8u;
    // 0x1520fc: 0xffa00000  sd          $zero, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111F28u, 0x1520F8u, 0x152100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152100u;
label_152100:
    // 0x152100: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x152100u;
    {
        const bool branch_taken_0x152100 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x152100) {
            ctx->pc = 0x1520D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1520d0;
        }
    }
    ctx->pc = 0x152108u;
    // 0x152108: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x152108u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x15210c: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x15210Cu;
    {
        const bool branch_taken_0x15210c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x152110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15210Cu;
        // 0x152110: 0x24420e40  addiu       $v0, $v0, 0xE40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3648));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15210c) {
            ctx->pc = 0x152290u;
            goto label_152290;
        }
    }
    ctx->pc = 0x152114u;
    // 0x152114: 0x0  nop
    ctx->pc = 0x152114u;
    // NOP
label_152118:
    // 0x152118: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x152118u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x15211c: 0xc0499ee  jal         func_1267B8
    ctx->pc = 0x15211Cu;
    SET_GPR_U32(ctx, 31, 0x152124u);
    ctx->pc = 0x152120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15211Cu;
    // 0x152120: 0x24844d40  addiu       $a0, $a0, 0x4D40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1267B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1267B8u, 0x15211Cu, 0x152124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152124u;
label_152124:
    // 0x152124: 0xc054628  jal         func_1518A0
    ctx->pc = 0x152124u;
    SET_GPR_U32(ctx, 31, 0x15212Cu);
    ctx->pc = 0x152128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152124u;
    // 0x152128: 0x24042710  addiu       $a0, $zero, 0x2710 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1518A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1518A0u, 0x152124u, 0x15212Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15212Cu;
label_15212c:
    // 0x15212c: 0x0  nop
    ctx->pc = 0x15212cu;
    // NOP
label_152130:
    // 0x152130: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x152130u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
    // 0x152134: 0xc04484a  jal         func_112128
    ctx->pc = 0x152134u;
    SET_GPR_U32(ctx, 31, 0x15213Cu);
    ctx->pc = 0x152138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152134u;
    // 0x152138: 0x24847150  addiu       $a0, $a0, 0x7150 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29008));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112128u, 0x152134u, 0x15213Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15213Cu;
label_15213c:
    // 0x15213c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x15213cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x152140: 0x1043fff5  beq         $v0, $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x152140u;
    {
        const bool branch_taken_0x152140 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x152144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152140u;
        // 0x152144: 0x3c04007e  lui         $a0, 0x7E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152140) {
            ctx->pc = 0x152118u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_152118;
        }
    }
    ctx->pc = 0x152148u;
    // 0x152148: 0xc04484a  jal         func_112128
    ctx->pc = 0x152148u;
    SET_GPR_U32(ctx, 31, 0x152150u);
    ctx->pc = 0x15214Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152148u;
    // 0x15214c: 0x24847180  addiu       $a0, $a0, 0x7180 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112128u, 0x152148u, 0x152150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152150u;
label_152150:
    // 0x152150: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x152150u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x152154: 0x1443000e  bne         $v0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x152154u;
    {
        const bool branch_taken_0x152154 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x152154) {
            ctx->pc = 0x152190u;
            goto label_152190;
        }
    }
    ctx->pc = 0x15215Cu;
    // 0x15215c: 0x0  nop
    ctx->pc = 0x15215cu;
    // NOP
label_152160:
    // 0x152160: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x152160u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x152164: 0xc0499ee  jal         func_1267B8
    ctx->pc = 0x152164u;
    SET_GPR_U32(ctx, 31, 0x15216Cu);
    ctx->pc = 0x152168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152164u;
    // 0x152168: 0x24844d40  addiu       $a0, $a0, 0x4D40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1267B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1267B8u, 0x152164u, 0x15216Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15216Cu;
label_15216c:
    // 0x15216c: 0xc054628  jal         func_1518A0
    ctx->pc = 0x15216Cu;
    SET_GPR_U32(ctx, 31, 0x152174u);
    ctx->pc = 0x152170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15216Cu;
    // 0x152170: 0x24042710  addiu       $a0, $zero, 0x2710 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1518A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1518A0u, 0x15216Cu, 0x152174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152174u;
label_152174:
    // 0x152174: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x152174u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
    // 0x152178: 0xc04484a  jal         func_112128
    ctx->pc = 0x152178u;
    SET_GPR_U32(ctx, 31, 0x152180u);
    ctx->pc = 0x15217Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152178u;
    // 0x15217c: 0x24847180  addiu       $a0, $a0, 0x7180 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112128u, 0x152178u, 0x152180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152180u;
label_152180:
    // 0x152180: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x152180u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x152184: 0x1043fff6  beq         $v0, $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x152184u;
    {
        const bool branch_taken_0x152184 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x152184) {
            ctx->pc = 0x152160u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_152160;
        }
    }
    ctx->pc = 0x15218Cu;
    // 0x15218c: 0x0  nop
    ctx->pc = 0x15218cu;
    // NOP
label_152190:
    // 0x152190: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x152190u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
    // 0x152194: 0x3c09007f  lui         $t1, 0x7F
    ctx->pc = 0x152194u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)127 << 16));
    // 0x152198: 0x3c0b0015  lui         $t3, 0x15
    ctx->pc = 0x152198u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)21 << 16));
    // 0x15219c: 0x24847180  addiu       $a0, $a0, 0x7180
    ctx->pc = 0x15219cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29056));
    // 0x1521a0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1521a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1521a4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1521a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1521a8: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1521a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1521ac: 0x24080088  addiu       $t0, $zero, 0x88
    ctx->pc = 0x1521acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 136));
    // 0x1521b0: 0x25290e40  addiu       $t1, $t1, 0xE40
    ctx->pc = 0x1521b0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 3648));
    // 0x1521b4: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1521b4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1521b8: 0x256b26a0  addiu       $t3, $t3, 0x26A0
    ctx->pc = 0x1521b8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 9888));
    // 0x1521bc: 0xc0447ca  jal         func_111F28
    ctx->pc = 0x1521BCu;
    SET_GPR_U32(ctx, 31, 0x1521C4u);
    ctx->pc = 0x1521C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1521BCu;
    // 0x1521c0: 0xffa00000  sd          $zero, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111F28u, 0x1521BCu, 0x1521C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1521C4u;
label_1521c4:
    // 0x1521c4: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x1521C4u;
    {
        const bool branch_taken_0x1521c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1521c4) {
            ctx->pc = 0x152190u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_152190;
        }
    }
    ctx->pc = 0x1521CCu;
    // 0x1521cc: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x1521CCu;
    {
        const bool branch_taken_0x1521cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1521cc) {
            ctx->pc = 0x152288u;
            goto label_152288;
        }
    }
    ctx->pc = 0x1521D4u;
    // 0x1521d4: 0x0  nop
    ctx->pc = 0x1521d4u;
    // NOP
label_1521d8:
    // 0x1521d8: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x1521d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x1521dc: 0xc0499ee  jal         func_1267B8
    ctx->pc = 0x1521DCu;
    SET_GPR_U32(ctx, 31, 0x1521E4u);
    ctx->pc = 0x1521E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1521DCu;
    // 0x1521e0: 0x24844d40  addiu       $a0, $a0, 0x4D40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1267B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1267B8u, 0x1521DCu, 0x1521E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1521E4u;
label_1521e4:
    // 0x1521e4: 0xc054628  jal         func_1518A0
    ctx->pc = 0x1521E4u;
    SET_GPR_U32(ctx, 31, 0x1521ECu);
    ctx->pc = 0x1521E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1521E4u;
    // 0x1521e8: 0x24042710  addiu       $a0, $zero, 0x2710 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1518A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1518A0u, 0x1521E4u, 0x1521ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1521ECu;
label_1521ec:
    // 0x1521ec: 0x0  nop
    ctx->pc = 0x1521ecu;
    // NOP
label_1521f0:
    // 0x1521f0: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x1521f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
    // 0x1521f4: 0xc04484a  jal         func_112128
    ctx->pc = 0x1521F4u;
    SET_GPR_U32(ctx, 31, 0x1521FCu);
    ctx->pc = 0x1521F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1521F4u;
    // 0x1521f8: 0x24847150  addiu       $a0, $a0, 0x7150 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29008));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112128u, 0x1521F4u, 0x1521FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1521FCu;
label_1521fc:
    // 0x1521fc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1521fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x152200: 0x1043fff5  beq         $v0, $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x152200u;
    {
        const bool branch_taken_0x152200 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x152204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152200u;
        // 0x152204: 0x3c04007e  lui         $a0, 0x7E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152200) {
            ctx->pc = 0x1521D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1521d8;
        }
    }
    ctx->pc = 0x152208u;
    // 0x152208: 0xc04484a  jal         func_112128
    ctx->pc = 0x152208u;
    SET_GPR_U32(ctx, 31, 0x152210u);
    ctx->pc = 0x15220Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152208u;
    // 0x15220c: 0x24847180  addiu       $a0, $a0, 0x7180 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112128u, 0x152208u, 0x152210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152210u;
label_152210:
    // 0x152210: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x152210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x152214: 0x1443000e  bne         $v0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x152214u;
    {
        const bool branch_taken_0x152214 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x152214) {
            ctx->pc = 0x152250u;
            goto label_152250;
        }
    }
    ctx->pc = 0x15221Cu;
    // 0x15221c: 0x0  nop
    ctx->pc = 0x15221cu;
    // NOP
label_152220:
    // 0x152220: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x152220u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x152224: 0xc0499ee  jal         func_1267B8
    ctx->pc = 0x152224u;
    SET_GPR_U32(ctx, 31, 0x15222Cu);
    ctx->pc = 0x152228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152224u;
    // 0x152228: 0x24844d40  addiu       $a0, $a0, 0x4D40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1267B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1267B8u, 0x152224u, 0x15222Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15222Cu;
label_15222c:
    // 0x15222c: 0xc054628  jal         func_1518A0
    ctx->pc = 0x15222Cu;
    SET_GPR_U32(ctx, 31, 0x152234u);
    ctx->pc = 0x152230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15222Cu;
    // 0x152230: 0x24042710  addiu       $a0, $zero, 0x2710 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1518A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1518A0u, 0x15222Cu, 0x152234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152234u;
label_152234:
    // 0x152234: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x152234u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
    // 0x152238: 0xc04484a  jal         func_112128
    ctx->pc = 0x152238u;
    SET_GPR_U32(ctx, 31, 0x152240u);
    ctx->pc = 0x15223Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152238u;
    // 0x15223c: 0x24847180  addiu       $a0, $a0, 0x7180 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112128u, 0x152238u, 0x152240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152240u;
label_152240:
    // 0x152240: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x152240u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x152244: 0x1043fff6  beq         $v0, $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x152244u;
    {
        const bool branch_taken_0x152244 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x152244) {
            ctx->pc = 0x152220u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_152220;
        }
    }
    ctx->pc = 0x15224Cu;
    // 0x15224c: 0x0  nop
    ctx->pc = 0x15224cu;
    // NOP
label_152250:
    // 0x152250: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x152250u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
    // 0x152254: 0x3c09007f  lui         $t1, 0x7F
    ctx->pc = 0x152254u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)127 << 16));
    // 0x152258: 0x24847180  addiu       $a0, $a0, 0x7180
    ctx->pc = 0x152258u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29056));
    // 0x15225c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x15225cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152260: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x152260u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152264: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x152264u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152268: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x152268u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15226c: 0x25290e40  addiu       $t1, $t1, 0xE40
    ctx->pc = 0x15226cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 3648));
    // 0x152270: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x152270u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x152274: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x152274u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152278: 0xc0447ca  jal         func_111F28
    ctx->pc = 0x152278u;
    SET_GPR_U32(ctx, 31, 0x152280u);
    ctx->pc = 0x15227Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152278u;
    // 0x15227c: 0xffa00000  sd          $zero, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111F28u, 0x152278u, 0x152280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152280u;
label_152280:
    // 0x152280: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x152280u;
    {
        const bool branch_taken_0x152280 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x152280) {
            ctx->pc = 0x152250u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_152250;
        }
    }
    ctx->pc = 0x152288u;
label_152288:
    // 0x152288: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x152288u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x15228c: 0x24420e40  addiu       $v0, $v0, 0xE40
    ctx->pc = 0x15228cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3648));
label_152290:
    // 0x152290: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x152290u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x152294: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x152294u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x152298: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x152298u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15229c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x15229cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1522a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1522A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1522A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1522A0u;
        // 0x1522a4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1522A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1522A8u;
}
