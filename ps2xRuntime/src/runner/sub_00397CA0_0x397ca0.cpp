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

// Function: sub_00397CA0
// Address: 0x397ca0 - 0x3981cc
void sub_00397CA0_0x397ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00397CA0_0x397ca0");
#endif

    switch (ctx->pc) {
        case 0x397cd0u: goto label_397cd0;
        case 0x397d28u: goto label_397d28;
        case 0x397d34u: goto label_397d34;
        case 0x397d84u: goto label_397d84;
        case 0x397d8cu: goto label_397d8c;
        case 0x397db4u: goto label_397db4;
        case 0x397dfcu: goto label_397dfc;
        case 0x397e3cu: goto label_397e3c;
        case 0x397e54u: goto label_397e54;
        case 0x397e8cu: goto label_397e8c;
        case 0x397eb0u: goto label_397eb0;
        case 0x397eb8u: goto label_397eb8;
        case 0x397ec8u: goto label_397ec8;
        case 0x397ed0u: goto label_397ed0;
        case 0x397edcu: goto label_397edc;
        case 0x397f20u: goto label_397f20;
        case 0x397f2cu: goto label_397f2c;
        case 0x397f54u: goto label_397f54;
        case 0x397f70u: goto label_397f70;
        case 0x397fa4u: goto label_397fa4;
        case 0x397facu: goto label_397fac;
        case 0x398004u: goto label_398004;
        case 0x398020u: goto label_398020;
        case 0x398054u: goto label_398054;
        case 0x398078u: goto label_398078;
        case 0x398084u: goto label_398084;
        case 0x39809cu: goto label_39809c;
        case 0x3980acu: goto label_3980ac;
        case 0x3980bcu: goto label_3980bc;
        case 0x3980f0u: goto label_3980f0;
        case 0x39810cu: goto label_39810c;
        case 0x39811cu: goto label_39811c;
        case 0x398140u: goto label_398140;
        case 0x39814cu: goto label_39814c;
        case 0x398158u: goto label_398158;
        case 0x398168u: goto label_398168;
        case 0x39818cu: goto label_39818c;
        case 0x3981b8u: goto label_3981b8;
        default: break;
    }

    ctx->pc = 0x397ca0u;

    // 0x397ca0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x397ca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x397ca4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x397ca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x397ca8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x397ca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x397cac: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x397cacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x397cb0: 0x90850023  lbu         $a1, 0x23($a0)
    ctx->pc = 0x397cb0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 35)));
    // 0x397cb4: 0x30a30002  andi        $v1, $a1, 0x2
    ctx->pc = 0x397cb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
    // 0x397cb8: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x397CB8u;
    {
        const bool branch_taken_0x397cb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x397CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397CB8u;
        // 0x397cbc: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x397cb8) {
            ctx->pc = 0x397CD0u;
            goto label_397cd0;
        }
    }
    ctx->pc = 0x397CC0u;
    // 0x397cc0: 0x34a20002  ori         $v0, $a1, 0x2
    ctx->pc = 0x397cc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2);
    // 0x397cc4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x397cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x397cc8: 0xc0e633c  jal         func_398CF0
    ctx->pc = 0x397CC8u;
    SET_GPR_U32(ctx, 31, 0x397CD0u);
    ctx->pc = 0x397CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x397CC8u;
    // 0x397ccc: 0xa2220023  sb          $v0, 0x23($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 35), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x398CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398CF0u, 0x397CC8u, 0x397CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x397CD0u;
label_397cd0:
    // 0x397cd0: 0x92240021  lbu         $a0, 0x21($s1)
    ctx->pc = 0x397cd0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 33)));
    // 0x397cd4: 0x24030022  addiu       $v1, $zero, 0x22
    ctx->pc = 0x397cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x397cd8: 0x10830135  beq         $a0, $v1, . + 4 + (0x135 << 2)
    ctx->pc = 0x397CD8u;
    {
        const bool branch_taken_0x397cd8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x397CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397CD8u;
        // 0x397cdc: 0x24030021  addiu       $v1, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x397cd8) {
            ctx->pc = 0x3981B0u;
            goto label_3981b0;
        }
    }
    ctx->pc = 0x397CE0u;
    // 0x397ce0: 0x108300eb  beq         $a0, $v1, . + 4 + (0xEB << 2)
    ctx->pc = 0x397CE0u;
    {
        const bool branch_taken_0x397ce0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x397ce0) {
            ctx->pc = 0x398090u;
            goto label_398090;
        }
    }
    ctx->pc = 0x397CE8u;
    // 0x397ce8: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x397ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x397cec: 0x108300dc  beq         $a0, $v1, . + 4 + (0xDC << 2)
    ctx->pc = 0x397CECu;
    {
        const bool branch_taken_0x397cec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x397CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397CECu;
        // 0x397cf0: 0x24030011  addiu       $v1, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x397cec) {
            ctx->pc = 0x398060u;
            goto label_398060;
        }
    }
    ctx->pc = 0x397CF4u;
    // 0x397cf4: 0x10830074  beq         $a0, $v1, . + 4 + (0x74 << 2)
    ctx->pc = 0x397CF4u;
    {
        const bool branch_taken_0x397cf4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x397cf4) {
            ctx->pc = 0x397EC8u;
            goto label_397ec8;
        }
    }
    ctx->pc = 0x397CFCu;
    // 0x397cfc: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x397cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x397d00: 0x10830041  beq         $a0, $v1, . + 4 + (0x41 << 2)
    ctx->pc = 0x397D00u;
    {
        const bool branch_taken_0x397d00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x397d00) {
            ctx->pc = 0x397E08u;
            goto label_397e08;
        }
    }
    ctx->pc = 0x397D08u;
    // 0x397d08: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x397D08u;
    {
        const bool branch_taken_0x397d08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x397d08) {
            ctx->pc = 0x397D18u;
            goto label_397d18;
        }
    }
    ctx->pc = 0x397D10u;
    // 0x397d10: 0x10000129  b           . + 4 + (0x129 << 2)
    ctx->pc = 0x397D10u;
    {
        const bool branch_taken_0x397d10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x397d10) {
            ctx->pc = 0x3981B8u;
            goto label_3981b8;
        }
    }
    ctx->pc = 0x397D18u;
label_397d18:
    // 0x397d18: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x397d18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x397d1c: 0x24841270  addiu       $a0, $a0, 0x1270
    ctx->pc = 0x397d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4720));
    // 0x397d20: 0xc0cbed0  jal         func_32FB40
    ctx->pc = 0x397D20u;
    SET_GPR_U32(ctx, 31, 0x397D28u);
    ctx->pc = 0x397D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x397D20u;
    // 0x397d24: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32FB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32FB40u, 0x397D20u, 0x397D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x397D28u;
label_397d28:
    // 0x397d28: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x397d28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x397d2c: 0xc0cbf34  jal         func_32FCD0
    ctx->pc = 0x397D2Cu;
    SET_GPR_U32(ctx, 31, 0x397D34u);
    ctx->pc = 0x397D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x397D2Cu;
    // 0x397d30: 0x24841270  addiu       $a0, $a0, 0x1270 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32FCD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32FCD0u, 0x397D2Cu, 0x397D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x397D34u;
label_397d34:
    // 0x397d34: 0x3c010091  lui         $at, 0x91
    ctx->pc = 0x397d34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)145 << 16));
    // 0x397d38: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x397d38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397d3c: 0x8c251284  lw          $a1, 0x1284($at)
    ctx->pc = 0x397d3cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x911284u));
    // 0x397d40: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x397d40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x397d44: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x397d44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x397d48: 0x16030013  bne         $s0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x397D48u;
    {
        const bool branch_taken_0x397d48 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x397D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397D48u;
        // 0x397d4c: 0xa62401ac  sh          $a0, 0x1AC($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 428), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x397d48) {
            ctx->pc = 0x397D98u;
            goto label_397d98;
        }
    }
    ctx->pc = 0x397D50u;
    // 0x397d50: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x397d50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x397d54: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x397d54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x397d58: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x397d58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x397d5c: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x397d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x397d60: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x397d60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x397d64: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x397d64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397d68: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x397d68u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x397d6c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x397d6cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397d70: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x397d70u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397d74: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x397d74u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397d78: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x397d78u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397d7c: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x397D7Cu;
    SET_GPR_U32(ctx, 31, 0x397D84u);
    ctx->pc = 0x397D80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x397D7Cu;
    // 0x397d80: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x397D7Cu, 0x397D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x397D84u;
label_397d84:
    // 0x397d84: 0xc0e5dd4  jal         func_397750
    ctx->pc = 0x397D84u;
    SET_GPR_U32(ctx, 31, 0x397D8Cu);
    ctx->pc = 0x397D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x397D84u;
    // 0x397d88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x397750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397750u, 0x397D84u, 0x397D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x397D8Cu;
label_397d8c:
    // 0x397d8c: 0x1000010a  b           . + 4 + (0x10A << 2)
    ctx->pc = 0x397D8Cu;
    {
        const bool branch_taken_0x397d8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x397d8c) {
            ctx->pc = 0x3981B8u;
            goto label_3981b8;
        }
    }
    ctx->pc = 0x397D94u;
    // 0x397d94: 0x0  nop
    ctx->pc = 0x397d94u;
    // NOP
label_397d98:
    // 0x397d98: 0x10a00107  beqz        $a1, . + 4 + (0x107 << 2)
    ctx->pc = 0x397D98u;
    {
        const bool branch_taken_0x397d98 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x397d98) {
            ctx->pc = 0x3981B8u;
            goto label_3981b8;
        }
    }
    ctx->pc = 0x397DA0u;
    // 0x397da0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x397da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x397da4: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x397da4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x397da8: 0x94450004  lhu         $a1, 0x4($v0)
    ctx->pc = 0x397da8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x397dac: 0xc0bcff4  jal         func_2F3FD0
    ctx->pc = 0x397DACu;
    SET_GPR_U32(ctx, 31, 0x397DB4u);
    ctx->pc = 0x397DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x397DACu;
    // 0x397db0: 0x2484bb30  addiu       $a0, $a0, -0x44D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F3FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F3FD0u, 0x397DACu, 0x397DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x397DB4u;
label_397db4:
    // 0x397db4: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x397db4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x397db8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x397db8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x397dbc: 0x160300fe  bne         $s0, $v1, . + 4 + (0xFE << 2)
    ctx->pc = 0x397DBCu;
    {
        const bool branch_taken_0x397dbc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x397DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397DBCu;
        // 0x397dc0: 0xa62401ac  sh          $a0, 0x1AC($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 428), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x397dbc) {
            ctx->pc = 0x3981B8u;
            goto label_3981b8;
        }
    }
    ctx->pc = 0x397DC4u;
    // 0x397dc4: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x397dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x397dc8: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x397dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x397dcc: 0xa2220021  sb          $v0, 0x21($s1)
    ctx->pc = 0x397dccu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 33), (uint8_t)GPR_U32(ctx, 2));
    // 0x397dd0: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x397dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x397dd4: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x397dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
    // 0x397dd8: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x397dd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x397ddc: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x397ddcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x397de0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x397de0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397de4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x397de4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397de8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x397de8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397dec: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x397decu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397df0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x397df0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397df4: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x397DF4u;
    SET_GPR_U32(ctx, 31, 0x397DFCu);
    ctx->pc = 0x397DF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x397DF4u;
    // 0x397df8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x397DF4u, 0x397DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x397DFCu;
label_397dfc:
    // 0x397dfc: 0x100000ee  b           . + 4 + (0xEE << 2)
    ctx->pc = 0x397DFCu;
    {
        const bool branch_taken_0x397dfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x397dfc) {
            ctx->pc = 0x3981B8u;
            goto label_3981b8;
        }
    }
    ctx->pc = 0x397E04u;
    // 0x397e04: 0x0  nop
    ctx->pc = 0x397e04u;
    // NOP
label_397e08:
    // 0x397e08: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x397e08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x397e0c: 0xa2220021  sb          $v0, 0x21($s1)
    ctx->pc = 0x397e0cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 33), (uint8_t)GPR_U32(ctx, 2));
    // 0x397e10: 0x3c010091  lui         $at, 0x91
    ctx->pc = 0x397e10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)145 << 16));
    // 0x397e14: 0x8c301284  lw          $s0, 0x1284($at)
    ctx->pc = 0x397e14u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x911284u));
    // 0x397e18: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x397e18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x397e1c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x397e1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x397e20: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x397e20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x397e24: 0x94420004  lhu         $v0, 0x4($v0)
    ctx->pc = 0x397e24u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x397e28: 0xa62201ae  sh          $v0, 0x1AE($s1)
    ctx->pc = 0x397e28u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 430), (uint16_t)GPR_U32(ctx, 2));
    // 0x397e2c: 0xa62601b0  sh          $a2, 0x1B0($s1)
    ctx->pc = 0x397e2cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 432), (uint16_t)GPR_U32(ctx, 6));
    // 0x397e30: 0x962501ae  lhu         $a1, 0x1AE($s1)
    ctx->pc = 0x397e30u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 430)));
    // 0x397e34: 0xc0bd064  jal         func_2F4190
    ctx->pc = 0x397E34u;
    SET_GPR_U32(ctx, 31, 0x397E3Cu);
    ctx->pc = 0x397E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x397E34u;
    // 0x397e38: 0x2484bb30  addiu       $a0, $a0, -0x44D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F4190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F4190u, 0x397E34u, 0x397E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x397E3Cu;
label_397e3c:
    // 0x397e3c: 0xa62201b2  sh          $v0, 0x1B2($s1)
    ctx->pc = 0x397e3cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 434), (uint16_t)GPR_U32(ctx, 2));
    // 0x397e40: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x397e40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x397e44: 0x962501ae  lhu         $a1, 0x1AE($s1)
    ctx->pc = 0x397e44u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 430)));
    // 0x397e48: 0x2484bb30  addiu       $a0, $a0, -0x44D0
    ctx->pc = 0x397e48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949680));
    // 0x397e4c: 0xc0bd2ec  jal         func_2F4BB0
    ctx->pc = 0x397E4Cu;
    SET_GPR_U32(ctx, 31, 0x397E54u);
    ctx->pc = 0x397E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x397E4Cu;
    // 0x397e50: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F4BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F4BB0u, 0x397E4Cu, 0x397E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x397E54u;
label_397e54:
    // 0x397e54: 0xae2201b4  sw          $v0, 0x1B4($s1)
    ctx->pc = 0x397e54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 436), GPR_U32(ctx, 2));
    // 0x397e58: 0xae2001b8  sw          $zero, 0x1B8($s1)
    ctx->pc = 0x397e58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 440), GPR_U32(ctx, 0));
    // 0x397e5c: 0x2402007f  addiu       $v0, $zero, 0x7F
    ctx->pc = 0x397e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x397e60: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x397e60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x397e64: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x397e64u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x397e68: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x397e68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x397e6c: 0x31e7e  dsrl32      $v1, $v1, 25
    ctx->pc = 0x397e6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 25));
    // 0x397e70: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x397e70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x397e74: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x397E74u;
    {
        const bool branch_taken_0x397e74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x397E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397E74u;
        // 0x397e78: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x397e74) {
            ctx->pc = 0x397E98u;
            goto label_397e98;
        }
    }
    ctx->pc = 0x397E7Cu;
    // 0x397e7c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x397e7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397e80: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x397e80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397e84: 0xc0dbf88  jal         func_36FE20
    ctx->pc = 0x397E84u;
    SET_GPR_U32(ctx, 31, 0x397E8Cu);
    ctx->pc = 0x397E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x397E84u;
    // 0x397e88: 0x24070063  addiu       $a3, $zero, 0x63 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36FE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36FE20u, 0x397E84u, 0x397E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x397E8Cu;
label_397e8c:
    // 0x397e8c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x397E8Cu;
    {
        const bool branch_taken_0x397e8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x397e8c) {
            ctx->pc = 0x397EB0u;
            goto label_397eb0;
        }
    }
    ctx->pc = 0x397E94u;
    // 0x397e94: 0x0  nop
    ctx->pc = 0x397e94u;
    // NOP
label_397e98:
    // 0x397e98: 0x33e3c  dsll32      $a3, $v1, 24
    ctx->pc = 0x397e98u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << (32 + 24));
    // 0x397e9c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x397e9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x397ea0: 0x73e3f  dsra32      $a3, $a3, 24
    ctx->pc = 0x397ea0u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 24));
    // 0x397ea4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x397ea4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397ea8: 0xc0dbf88  jal         func_36FE20
    ctx->pc = 0x397EA8u;
    SET_GPR_U32(ctx, 31, 0x397EB0u);
    ctx->pc = 0x397EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x397EA8u;
    // 0x397eac: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36FE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36FE20u, 0x397EA8u, 0x397EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x397EB0u;
label_397eb0:
    // 0x397eb0: 0xc0ed6d4  jal         func_3B5B50
    ctx->pc = 0x397EB0u;
    SET_GPR_U32(ctx, 31, 0x397EB8u);
    ctx->pc = 0x397EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x397EB0u;
    // 0x397eb4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B5B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B5B50u, 0x397EB0u, 0x397EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x397EB8u;
label_397eb8:
    // 0x397eb8: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x397eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x397ebc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x397ebcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x397ec0: 0xc0cc00c  jal         func_330030
    ctx->pc = 0x397EC0u;
    SET_GPR_U32(ctx, 31, 0x397EC8u);
    ctx->pc = 0x397EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x397EC0u;
    // 0x397ec4: 0x24841270  addiu       $a0, $a0, 0x1270 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x330030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x330030u, 0x397EC0u, 0x397EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x397EC8u;
label_397ec8:
    // 0x397ec8: 0xc0dbf98  jal         func_36FE60
    ctx->pc = 0x397EC8u;
    SET_GPR_U32(ctx, 31, 0x397ED0u);
    ctx->pc = 0x397ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x397EC8u;
    // 0x397ecc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36FE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36FE60u, 0x397EC8u, 0x397ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x397ED0u;
label_397ed0:
    // 0x397ed0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x397ed0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397ed4: 0xc0dbf94  jal         func_36FE50
    ctx->pc = 0x397ED4u;
    SET_GPR_U32(ctx, 31, 0x397EDCu);
    ctx->pc = 0x397ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x397ED4u;
    // 0x397ed8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36FE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36FE50u, 0x397ED4u, 0x397EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x397EDCu;
label_397edc:
    // 0x397edc: 0x82220115  lb          $v0, 0x115($s1)
    ctx->pc = 0x397edcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 277)));
    // 0x397ee0: 0x3c040103  lui         $a0, 0x103
    ctx->pc = 0x397ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)259 << 16));
    // 0x397ee4: 0xa62201b0  sh          $v0, 0x1B0($s1)
    ctx->pc = 0x397ee4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 432), (uint16_t)GPR_U32(ctx, 2));
    // 0x397ee8: 0x962301b0  lhu         $v1, 0x1B0($s1)
    ctx->pc = 0x397ee8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 432)));
    // 0x397eec: 0x8e2201b4  lw          $v0, 0x1B4($s1)
    ctx->pc = 0x397eecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 436)));
    // 0x397ef0: 0x31823  negu        $v1, $v1
    ctx->pc = 0x397ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x397ef4: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x397ef4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x397ef8: 0xae2201b8  sw          $v0, 0x1B8($s1)
    ctx->pc = 0x397ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 440), GPR_U32(ctx, 2));
    // 0x397efc: 0x962301b0  lhu         $v1, 0x1B0($s1)
    ctx->pc = 0x397efcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 432)));
    // 0x397f00: 0x962201b2  lhu         $v0, 0x1B2($s1)
    ctx->pc = 0x397f00u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 434)));
    // 0x397f04: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x397f04u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x397f08: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x397F08u;
    {
        const bool branch_taken_0x397f08 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x397F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397F08u;
        // 0x397f0c: 0x3490000f  ori         $s0, $a0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x397f08) {
            ctx->pc = 0x397F20u;
            goto label_397f20;
        }
    }
    ctx->pc = 0x397F10u;
    // 0x397f10: 0x34900011  ori         $s0, $a0, 0x11
    ctx->pc = 0x397f10u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)17);
    // 0x397f14: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x397f14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x397f18: 0xc0dbf94  jal         func_36FE50
    ctx->pc = 0x397F18u;
    SET_GPR_U32(ctx, 31, 0x397F20u);
    ctx->pc = 0x397F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x397F18u;
    // 0x397f1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36FE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36FE50u, 0x397F18u, 0x397F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x397F20u;
label_397f20:
    // 0x397f20: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x397f20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x397f24: 0xc0bd2d4  jal         func_2F4B50
    ctx->pc = 0x397F24u;
    SET_GPR_U32(ctx, 31, 0x397F2Cu);
    ctx->pc = 0x397F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x397F24u;
    // 0x397f28: 0x2484bb30  addiu       $a0, $a0, -0x44D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F4B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F4B50u, 0x397F24u, 0x397F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x397F2Cu;
label_397f2c:
    // 0x397f2c: 0x8e2301b8  lw          $v1, 0x1B8($s1)
    ctx->pc = 0x397f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 440)));
    // 0x397f30: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x397f30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x397f34: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x397F34u;
    {
        const bool branch_taken_0x397f34 = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x397f34) {
            ctx->pc = 0x397F48u;
            goto label_397f48;
        }
    }
    ctx->pc = 0x397F3Cu;
    // 0x397f3c: 0x3c020103  lui         $v0, 0x103
    ctx->pc = 0x397f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)259 << 16));
    // 0x397f40: 0x34500010  ori         $s0, $v0, 0x10
    ctx->pc = 0x397f40u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x397f44: 0x0  nop
    ctx->pc = 0x397f44u;
    // NOP
label_397f48:
    // 0x397f48: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x397f48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397f4c: 0xc0dc804  jal         func_372010
    ctx->pc = 0x397F4Cu;
    SET_GPR_U32(ctx, 31, 0x397F54u);
    ctx->pc = 0x397F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x397F4Cu;
    // 0x397f50: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x372010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x372010u, 0x397F4Cu, 0x397F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x397F54u;
label_397f54:
    // 0x397f54: 0x3c01008f  lui         $at, 0x8F
    ctx->pc = 0x397f54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)143 << 16));
    // 0x397f58: 0x8c24ea24  lw          $a0, -0x15DC($at)
    ctx->pc = 0x397f58u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x8EEA24u));
    // 0x397f5c: 0x30834000  andi        $v1, $a0, 0x4000
    ctx->pc = 0x397f5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16384);
    // 0x397f60: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x397F60u;
    {
        const bool branch_taken_0x397f60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x397f60) {
            ctx->pc = 0x397FB8u;
            goto label_397fb8;
        }
    }
    ctx->pc = 0x397F68u;
    // 0x397f68: 0xc0dbf90  jal         func_36FE40
    ctx->pc = 0x397F68u;
    SET_GPR_U32(ctx, 31, 0x397F70u);
    ctx->pc = 0x397F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x397F68u;
    // 0x397f6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36FE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36FE40u, 0x397F68u, 0x397F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x397F70u;
label_397f70:
    // 0x397f70: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x397f70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x397f74: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x397f74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x397f78: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x397f78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x397f7c: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x397f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x397f80: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x397f80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x397f84: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x397f84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397f88: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x397f88u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x397f8c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x397f8cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397f90: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x397f90u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397f94: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x397f94u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397f98: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x397f98u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397f9c: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x397F9Cu;
    SET_GPR_U32(ctx, 31, 0x397FA4u);
    ctx->pc = 0x397FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x397F9Cu;
    // 0x397fa0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x397F9Cu, 0x397FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x397FA4u;
label_397fa4:
    // 0x397fa4: 0xc0e5eec  jal         func_397BB0
    ctx->pc = 0x397FA4u;
    SET_GPR_U32(ctx, 31, 0x397FACu);
    ctx->pc = 0x397FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x397FA4u;
    // 0x397fa8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x397BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397BB0u, 0x397FA4u, 0x397FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x397FACu;
label_397fac:
    // 0x397fac: 0x10000082  b           . + 4 + (0x82 << 2)
    ctx->pc = 0x397FACu;
    {
        const bool branch_taken_0x397fac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x397fac) {
            ctx->pc = 0x3981B8u;
            goto label_3981b8;
        }
    }
    ctx->pc = 0x397FB4u;
    // 0x397fb4: 0x0  nop
    ctx->pc = 0x397fb4u;
    // NOP
label_397fb8:
    // 0x397fb8: 0x30832000  andi        $v1, $a0, 0x2000
    ctx->pc = 0x397fb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8192);
    // 0x397fbc: 0x1060007e  beqz        $v1, . + 4 + (0x7E << 2)
    ctx->pc = 0x397FBCu;
    {
        const bool branch_taken_0x397fbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x397fbc) {
            ctx->pc = 0x3981B8u;
            goto label_3981b8;
        }
    }
    ctx->pc = 0x397FC4u;
    // 0x397fc4: 0x3c020103  lui         $v0, 0x103
    ctx->pc = 0x397fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)259 << 16));
    // 0x397fc8: 0x3442000f  ori         $v0, $v0, 0xF
    ctx->pc = 0x397fc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)15);
    // 0x397fcc: 0x12020010  beq         $s0, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x397FCCu;
    {
        const bool branch_taken_0x397fcc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x397FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397FCCu;
        // 0x397fd0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x397fcc) {
            ctx->pc = 0x398010u;
            goto label_398010;
        }
    }
    ctx->pc = 0x397FD4u;
    // 0x397fd4: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x397fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x397fd8: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x397fd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x397fdc: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x397fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x397fe0: 0x3c020300  lui         $v0, 0x300
    ctx->pc = 0x397fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)768 << 16));
    // 0x397fe4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x397fe4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397fe8: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x397fe8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x397fec: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x397fecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397ff0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x397ff0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397ff4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x397ff4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397ff8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x397ff8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397ffc: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x397FFCu;
    SET_GPR_U32(ctx, 31, 0x398004u);
    ctx->pc = 0x398000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x397FFCu;
    // 0x398000: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x397FFCu, 0x398004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398004u;
label_398004:
    // 0x398004: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x398004u;
    {
        const bool branch_taken_0x398004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x398004) {
            ctx->pc = 0x3981B8u;
            goto label_3981b8;
        }
    }
    ctx->pc = 0x39800Cu;
    // 0x39800c: 0x0  nop
    ctx->pc = 0x39800cu;
    // NOP
label_398010:
    // 0x398010: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x398010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x398014: 0xa2220021  sb          $v0, 0x21($s1)
    ctx->pc = 0x398014u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 33), (uint8_t)GPR_U32(ctx, 2));
    // 0x398018: 0xc0dbf90  jal         func_36FE40
    ctx->pc = 0x398018u;
    SET_GPR_U32(ctx, 31, 0x398020u);
    ctx->pc = 0x39801Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398018u;
    // 0x39801c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36FE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36FE40u, 0x398018u, 0x398020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398020u;
label_398020:
    // 0x398020: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x398020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x398024: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x398024u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x398028: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x398028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x39802c: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x39802cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x398030: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x398030u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
    // 0x398034: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x398034u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x398038: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x398038u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x39803c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x39803cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x398040: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x398040u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x398044: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x398044u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x398048: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x398048u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39804c: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x39804Cu;
    SET_GPR_U32(ctx, 31, 0x398054u);
    ctx->pc = 0x398050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39804Cu;
    // 0x398050: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x39804Cu, 0x398054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398054u;
label_398054:
    // 0x398054: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x398054u;
    {
        const bool branch_taken_0x398054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x398054) {
            ctx->pc = 0x3981B8u;
            goto label_3981b8;
        }
    }
    ctx->pc = 0x39805Cu;
    // 0x39805c: 0x0  nop
    ctx->pc = 0x39805cu;
    // NOP
label_398060:
    // 0x398060: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x398060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x398064: 0xa2220021  sb          $v0, 0x21($s1)
    ctx->pc = 0x398064u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 33), (uint8_t)GPR_U32(ctx, 2));
    // 0x398068: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x398068u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39806c: 0x3c020103  lui         $v0, 0x103
    ctx->pc = 0x39806cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)259 << 16));
    // 0x398070: 0xc0dc804  jal         func_372010
    ctx->pc = 0x398070u;
    SET_GPR_U32(ctx, 31, 0x398078u);
    ctx->pc = 0x398074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398070u;
    // 0x398074: 0x34450013  ori         $a1, $v0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x372010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x372010u, 0x398070u, 0x398078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398078u;
label_398078:
    // 0x398078: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x398078u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39807c: 0xc0e633c  jal         func_398CF0
    ctx->pc = 0x39807Cu;
    SET_GPR_U32(ctx, 31, 0x398084u);
    ctx->pc = 0x398080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39807Cu;
    // 0x398080: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x398CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398CF0u, 0x39807Cu, 0x398084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398084u;
label_398084:
    // 0x398084: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x398084u;
    {
        const bool branch_taken_0x398084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x398084) {
            ctx->pc = 0x3981B8u;
            goto label_3981b8;
        }
    }
    ctx->pc = 0x39808Cu;
    // 0x39808c: 0x0  nop
    ctx->pc = 0x39808cu;
    // NOP
label_398090:
    // 0x398090: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x398090u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x398094: 0xc095150  jal         func_254540
    ctx->pc = 0x398094u;
    SET_GPR_U32(ctx, 31, 0x39809Cu);
    ctx->pc = 0x398098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398094u;
    // 0x398098: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254540u, 0x398094u, 0x39809Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39809Cu;
label_39809c:
    // 0x39809c: 0x14400046  bnez        $v0, . + 4 + (0x46 << 2)
    ctx->pc = 0x39809Cu;
    {
        const bool branch_taken_0x39809c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3980A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39809Cu;
        // 0x3980a0: 0x3c040089  lui         $a0, 0x89 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39809c) {
            ctx->pc = 0x3981B8u;
            goto label_3981b8;
        }
    }
    ctx->pc = 0x3980A4u;
    // 0x3980a4: 0xc095154  jal         func_254550
    ctx->pc = 0x3980A4u;
    SET_GPR_U32(ctx, 31, 0x3980ACu);
    ctx->pc = 0x3980A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3980A4u;
    // 0x3980a8: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254550u, 0x3980A4u, 0x3980ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3980ACu;
label_3980ac:
    // 0x3980ac: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3980ACu;
    {
        const bool branch_taken_0x3980ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3980B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3980ACu;
        // 0x3980b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3980ac) {
            ctx->pc = 0x3980C8u;
            goto label_3980c8;
        }
    }
    ctx->pc = 0x3980B4u;
    // 0x3980b4: 0xc0e5eec  jal         func_397BB0
    ctx->pc = 0x3980B4u;
    SET_GPR_U32(ctx, 31, 0x3980BCu);
    ctx->pc = 0x397BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397BB0u, 0x3980B4u, 0x3980BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3980BCu;
label_3980bc:
    // 0x3980bc: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x3980BCu;
    {
        const bool branch_taken_0x3980bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3980bc) {
            ctx->pc = 0x3981B8u;
            goto label_3981b8;
        }
    }
    ctx->pc = 0x3980C4u;
    // 0x3980c4: 0x0  nop
    ctx->pc = 0x3980c4u;
    // NOP
label_3980c8:
    // 0x3980c8: 0x92220021  lbu         $v0, 0x21($s1)
    ctx->pc = 0x3980c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 33)));
    // 0x3980cc: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x3980ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x3980d0: 0x3c010091  lui         $at, 0x91
    ctx->pc = 0x3980d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)145 << 16));
    // 0x3980d4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3980d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3980d8: 0xa2220021  sb          $v0, 0x21($s1)
    ctx->pc = 0x3980d8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 33), (uint8_t)GPR_U32(ctx, 2));
    // 0x3980dc: 0x8c221284  lw          $v0, 0x1284($at)
    ctx->pc = 0x3980dcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x911284u));
    // 0x3980e0: 0x962601b0  lhu         $a2, 0x1B0($s1)
    ctx->pc = 0x3980e0u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 432)));
    // 0x3980e4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x3980e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3980e8: 0xc0bcfbc  jal         func_2F3EF0
    ctx->pc = 0x3980E8u;
    SET_GPR_U32(ctx, 31, 0x3980F0u);
    ctx->pc = 0x3980ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3980E8u;
    // 0x3980ec: 0x2484bb30  addiu       $a0, $a0, -0x44D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F3EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F3EF0u, 0x3980E8u, 0x3980F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3980F0u;
label_3980f0:
    // 0x3980f0: 0x922601b0  lbu         $a2, 0x1B0($s1)
    ctx->pc = 0x3980f0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 432)));
    // 0x3980f4: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x3980f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x3980f8: 0x962501ae  lhu         $a1, 0x1AE($s1)
    ctx->pc = 0x3980f8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 430)));
    // 0x3980fc: 0x2484bb30  addiu       $a0, $a0, -0x44D0
    ctx->pc = 0x3980fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949680));
    // 0x398100: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x398100u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x398104: 0xc0bce7c  jal         func_2F39F0
    ctx->pc = 0x398104u;
    SET_GPR_U32(ctx, 31, 0x39810Cu);
    ctx->pc = 0x398108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398104u;
    // 0x398108: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F39F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F39F0u, 0x398104u, 0x39810Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39810Cu;
label_39810c:
    // 0x39810c: 0x8e2501b8  lw          $a1, 0x1B8($s1)
    ctx->pc = 0x39810cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 440)));
    // 0x398110: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x398110u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x398114: 0xc0bd2a8  jal         func_2F4AA0
    ctx->pc = 0x398114u;
    SET_GPR_U32(ctx, 31, 0x39811Cu);
    ctx->pc = 0x398118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398114u;
    // 0x398118: 0x2484bb30  addiu       $a0, $a0, -0x44D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F4AA0u, 0x398114u, 0x39811Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39811Cu;
label_39811c:
    // 0x39811c: 0x862701b0  lh          $a3, 0x1B0($s1)
    ctx->pc = 0x39811cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 432)));
    // 0x398120: 0x3c020103  lui         $v0, 0x103
    ctx->pc = 0x398120u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)259 << 16));
    // 0x398124: 0x862301ac  lh          $v1, 0x1AC($s1)
    ctx->pc = 0x398124u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 428)));
    // 0x398128: 0x34450014  ori         $a1, $v0, 0x14
    ctx->pc = 0x398128u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20);
    // 0x39812c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x39812cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x398130: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x398130u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x398134: 0x671021  addu        $v0, $v1, $a3
    ctx->pc = 0x398134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x398138: 0xc0dcc28  jal         func_3730A0
    ctx->pc = 0x398138u;
    SET_GPR_U32(ctx, 31, 0x398140u);
    ctx->pc = 0x39813Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398138u;
    // 0x39813c: 0xa62201ac  sh          $v0, 0x1AC($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 428), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3730A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3730A0u, 0x398138u, 0x398140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398140u;
label_398140:
    // 0x398140: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x398140u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x398144: 0xc0e633c  jal         func_398CF0
    ctx->pc = 0x398144u;
    SET_GPR_U32(ctx, 31, 0x39814Cu);
    ctx->pc = 0x398148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398144u;
    // 0x398148: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x398CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398CF0u, 0x398144u, 0x39814Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39814Cu;
label_39814c:
    // 0x39814c: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x39814cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x398150: 0xc0cbee4  jal         func_32FB90
    ctx->pc = 0x398150u;
    SET_GPR_U32(ctx, 31, 0x398158u);
    ctx->pc = 0x398154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398150u;
    // 0x398154: 0x24841270  addiu       $a0, $a0, 0x1270 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32FB90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32FB90u, 0x398150u, 0x398158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398158u;
label_398158:
    // 0x398158: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x398158u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x39815c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x39815cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x398160: 0xc0cc00c  jal         func_330030
    ctx->pc = 0x398160u;
    SET_GPR_U32(ctx, 31, 0x398168u);
    ctx->pc = 0x398164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398160u;
    // 0x398164: 0x24841270  addiu       $a0, $a0, 0x1270 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x330030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x330030u, 0x398160u, 0x398168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398168u;
label_398168:
    // 0x398168: 0x3c010091  lui         $at, 0x91
    ctx->pc = 0x398168u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)145 << 16));
    // 0x39816c: 0x8c231284  lw          $v1, 0x1284($at)
    ctx->pc = 0x39816cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x911284u));
    // 0x398170: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x398170u;
    {
        const bool branch_taken_0x398170 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x398170) {
            ctx->pc = 0x398198u;
            goto label_398198;
        }
    }
    ctx->pc = 0x398178u;
    // 0x398178: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x398178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x39817c: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x39817cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x398180: 0x94450004  lhu         $a1, 0x4($v0)
    ctx->pc = 0x398180u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x398184: 0xc0bcff4  jal         func_2F3FD0
    ctx->pc = 0x398184u;
    SET_GPR_U32(ctx, 31, 0x39818Cu);
    ctx->pc = 0x398188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398184u;
    // 0x398188: 0x2484bb30  addiu       $a0, $a0, -0x44D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F3FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F3FD0u, 0x398184u, 0x39818Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39818Cu;
label_39818c:
    // 0x39818c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x39818cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x398190: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x398190u;
    {
        const bool branch_taken_0x398190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x398194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398190u;
        // 0x398194: 0xa62301ac  sh          $v1, 0x1AC($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 428), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398190) {
            ctx->pc = 0x3981A0u;
            goto label_3981a0;
        }
    }
    ctx->pc = 0x398198u;
label_398198:
    // 0x398198: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x398198u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x39819c: 0xa62301ac  sh          $v1, 0x1AC($s1)
    ctx->pc = 0x39819cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 428), (uint16_t)GPR_U32(ctx, 3));
label_3981a0:
    // 0x3981a0: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x3981a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3981a4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3981A4u;
    {
        const bool branch_taken_0x3981a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3981A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3981A4u;
        // 0x3981a8: 0xa62301ae  sh          $v1, 0x1AE($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 430), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3981a4) {
            ctx->pc = 0x3981B8u;
            goto label_3981b8;
        }
    }
    ctx->pc = 0x3981ACu;
    // 0x3981ac: 0x0  nop
    ctx->pc = 0x3981acu;
    // NOP
label_3981b0:
    // 0x3981b0: 0xc0e5eec  jal         func_397BB0
    ctx->pc = 0x3981B0u;
    SET_GPR_U32(ctx, 31, 0x3981B8u);
    ctx->pc = 0x3981B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3981B0u;
    // 0x3981b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x397BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397BB0u, 0x3981B0u, 0x3981B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3981B8u;
label_3981b8:
    // 0x3981b8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3981b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3981bc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3981bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3981c0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3981c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3981c4: 0x3e00008  jr          $ra
    ctx->pc = 0x3981C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3981C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3981C4u;
        // 0x3981c8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3981C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3981CCu;
}
