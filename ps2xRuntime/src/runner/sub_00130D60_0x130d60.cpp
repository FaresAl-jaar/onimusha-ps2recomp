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

// Function: sub_00130D60
// Address: 0x130d60 - 0x130fac
void sub_00130D60_0x130d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00130D60_0x130d60");
#endif

    switch (ctx->pc) {
        case 0x130d80u: goto label_130d80;
        case 0x130d8cu: goto label_130d8c;
        case 0x130da8u: goto label_130da8;
        case 0x130dbcu: goto label_130dbc;
        case 0x130ddcu: goto label_130ddc;
        case 0x130e04u: goto label_130e04;
        default: break;
    }

    ctx->pc = 0x130d60u;

    // 0x130d60: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x130d60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x130d64: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x130d64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x130d68: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x130d68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x130d6c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x130d6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x130d70: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x130d70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x130d74: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x130d74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130d78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x130d78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x130d7c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x130d7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_130d80:
    // 0x130d80: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x130d80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130d84: 0xc04c77c  jal         func_131DF0
    ctx->pc = 0x130D84u;
    SET_GPR_U32(ctx, 31, 0x130D8Cu);
    ctx->pc = 0x130D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130D84u;
    // 0x130d88: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131DF0u, 0x130D84u, 0x130D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130D8Cu;
label_130d8c:
    // 0x130d8c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x130d8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x130d90: 0x2a030010  slti        $v1, $s0, 0x10
    ctx->pc = 0x130d90u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x130d94: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x130D94u;
    {
        const bool branch_taken_0x130d94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x130d94) {
            ctx->pc = 0x130D80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_130d80;
        }
    }
    ctx->pc = 0x130D9Cu;
    // 0x130d9c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x130d9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130da0: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x130da0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130da4: 0x0  nop
    ctx->pc = 0x130da4u;
    // NOP
label_130da8:
    // 0x130da8: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x130da8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x130dac: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x130DACu;
    {
        const bool branch_taken_0x130dac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x130DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130DACu;
        // 0x130db0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130dac) {
            ctx->pc = 0x130E08u;
            goto label_130e08;
        }
    }
    ctx->pc = 0x130DB4u;
    // 0x130db4: 0xc04c3ec  jal         func_130FB0
    ctx->pc = 0x130DB4u;
    SET_GPR_U32(ctx, 31, 0x130DBCu);
    ctx->pc = 0x130DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130DB4u;
    // 0x130db8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x130FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130FB0u, 0x130DB4u, 0x130DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130DBCu;
label_130dbc:
    // 0x130dbc: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x130DBCu;
    {
        const bool branch_taken_0x130dbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x130dbc) {
            ctx->pc = 0x130E08u;
            goto label_130e08;
        }
    }
    ctx->pc = 0x130DC4u;
    // 0x130dc4: 0x82330005  lb          $s3, 0x5($s1)
    ctx->pc = 0x130dc4u;
    SET_GPR_S32(ctx, 19, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 5)));
    // 0x130dc8: 0x660000b  bltz        $s3, . + 4 + (0xB << 2)
    ctx->pc = 0x130DC8u;
    {
        const bool branch_taken_0x130dc8 = (GPR_S64(ctx, 19) < 0);
        ctx->pc = 0x130DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130DC8u;
        // 0x130dcc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130dc8) {
            ctx->pc = 0x130DF8u;
            goto label_130df8;
        }
    }
    ctx->pc = 0x130DD0u;
    // 0x130dd0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x130dd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130dd4: 0xc04c748  jal         func_131D20
    ctx->pc = 0x130DD4u;
    SET_GPR_U32(ctx, 31, 0x130DDCu);
    ctx->pc = 0x130DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130DD4u;
    // 0x130dd8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131D20u, 0x130DD4u, 0x130DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130DDCu;
label_130ddc:
    // 0x130ddc: 0x131040  sll         $v0, $s3, 1
    ctx->pc = 0x130ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x130de0: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x130de0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x130de4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x130de4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x130de8: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x130de8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x130dec: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x130decu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x130df0: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x130df0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x130df4: 0xac5004b0  sw          $s0, 0x4B0($v0)
    ctx->pc = 0x130df4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1200), GPR_U32(ctx, 16));
label_130df8:
    // 0x130df8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x130df8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130dfc: 0xc04c47c  jal         func_1311F0
    ctx->pc = 0x130DFCu;
    SET_GPR_U32(ctx, 31, 0x130E04u);
    ctx->pc = 0x130E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130DFCu;
    // 0x130e00: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1311F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1311F0u, 0x130DFCu, 0x130E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130E04u;
label_130e04:
    // 0x130e04: 0x0  nop
    ctx->pc = 0x130e04u;
    // NOP
label_130e08:
    // 0x130e08: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x130e08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x130e0c: 0x2a030002  slti        $v1, $s0, 0x2
    ctx->pc = 0x130e0cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x130e10: 0x1460ffe5  bnez        $v1, . + 4 + (-0x1B << 2)
    ctx->pc = 0x130E10u;
    {
        const bool branch_taken_0x130e10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x130E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130E10u;
        // 0x130e14: 0x2631022c  addiu       $s1, $s1, 0x22C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 556));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130e10) {
            ctx->pc = 0x130DA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_130da8;
        }
    }
    ctx->pc = 0x130E18u;
    // 0x130e18: 0x8e440018  lw          $a0, 0x18($s2)
    ctx->pc = 0x130e18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x130e1c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x130E1Cu;
    {
        const bool branch_taken_0x130e1c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x130E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130E1Cu;
        // 0x130e20: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130e1c) {
            ctx->pc = 0x130E30u;
            goto label_130e30;
        }
    }
    ctx->pc = 0x130E24u;
    // 0x130e24: 0x14830012  bne         $a0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x130E24u;
    {
        const bool branch_taken_0x130e24 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x130e24) {
            ctx->pc = 0x130E70u;
            goto label_130e70;
        }
    }
    ctx->pc = 0x130E2Cu;
    // 0x130e2c: 0x0  nop
    ctx->pc = 0x130e2cu;
    // NOP
label_130e30:
    // 0x130e30: 0x92440a18  lbu         $a0, 0xA18($s2)
    ctx->pc = 0x130e30u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2584)));
    // 0x130e34: 0x28830006  slti        $v1, $a0, 0x6
    ctx->pc = 0x130e34u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x130e38: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x130E38u;
    {
        const bool branch_taken_0x130e38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x130e38) {
            ctx->pc = 0x130E60u;
            goto label_130e60;
        }
    }
    ctx->pc = 0x130E40u;
    // 0x130e40: 0x92430a1a  lbu         $v1, 0xA1A($s2)
    ctx->pc = 0x130e40u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2586)));
    // 0x130e44: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x130E44u;
    {
        const bool branch_taken_0x130e44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x130E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130E44u;
        // 0x130e48: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130e44) {
            ctx->pc = 0x130E50u;
            goto label_130e50;
        }
    }
    ctx->pc = 0x130E4Cu;
    // 0x130e4c: 0xa2430a1a  sb          $v1, 0xA1A($s2)
    ctx->pc = 0x130e4cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2586), (uint8_t)GPR_U32(ctx, 3));
label_130e50:
    // 0x130e50: 0x92430a1b  lbu         $v1, 0xA1B($s2)
    ctx->pc = 0x130e50u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2587)));
    // 0x130e54: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x130e54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x130e58: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x130E58u;
    {
        const bool branch_taken_0x130e58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x130E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130E58u;
        // 0x130e5c: 0xa2430a1b  sb          $v1, 0xA1B($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 2587), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130e58) {
            ctx->pc = 0x130E98u;
            goto label_130e98;
        }
    }
    ctx->pc = 0x130E60u;
label_130e60:
    // 0x130e60: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x130e60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x130e64: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x130E64u;
    {
        const bool branch_taken_0x130e64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x130E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130E64u;
        // 0x130e68: 0xa2430a18  sb          $v1, 0xA18($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 2584), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130e64) {
            ctx->pc = 0x130E98u;
            goto label_130e98;
        }
    }
    ctx->pc = 0x130E6Cu;
    // 0x130e6c: 0x0  nop
    ctx->pc = 0x130e6cu;
    // NOP
label_130e70:
    // 0x130e70: 0xa2400a18  sb          $zero, 0xA18($s2)
    ctx->pc = 0x130e70u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2584), (uint8_t)GPR_U32(ctx, 0));
    // 0x130e74: 0x92440a1b  lbu         $a0, 0xA1B($s2)
    ctx->pc = 0x130e74u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2587)));
    // 0x130e78: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x130e78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x130e7c: 0x308400fe  andi        $a0, $a0, 0xFE
    ctx->pc = 0x130e7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)254);
    // 0x130e80: 0xa2440a1b  sb          $a0, 0xA1B($s2)
    ctx->pc = 0x130e80u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2587), (uint8_t)GPR_U32(ctx, 4));
    // 0x130e84: 0x92440a1a  lbu         $a0, 0xA1A($s2)
    ctx->pc = 0x130e84u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2586)));
    // 0x130e88: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x130E88u;
    {
        const bool branch_taken_0x130e88 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x130e88) {
            ctx->pc = 0x130E98u;
            goto label_130e98;
        }
    }
    ctx->pc = 0x130E90u;
    // 0x130e90: 0xa2400a1a  sb          $zero, 0xA1A($s2)
    ctx->pc = 0x130e90u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2586), (uint8_t)GPR_U32(ctx, 0));
    // 0x130e94: 0x0  nop
    ctx->pc = 0x130e94u;
    // NOP
label_130e98:
    // 0x130e98: 0x8e440244  lw          $a0, 0x244($s2)
    ctx->pc = 0x130e98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 580)));
    // 0x130e9c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x130E9Cu;
    {
        const bool branch_taken_0x130e9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x130EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130E9Cu;
        // 0x130ea0: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130e9c) {
            ctx->pc = 0x130EB0u;
            goto label_130eb0;
        }
    }
    ctx->pc = 0x130EA4u;
    // 0x130ea4: 0x14830012  bne         $a0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x130EA4u;
    {
        const bool branch_taken_0x130ea4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x130ea4) {
            ctx->pc = 0x130EF0u;
            goto label_130ef0;
        }
    }
    ctx->pc = 0x130EACu;
    // 0x130eac: 0x0  nop
    ctx->pc = 0x130eacu;
    // NOP
label_130eb0:
    // 0x130eb0: 0x92440a19  lbu         $a0, 0xA19($s2)
    ctx->pc = 0x130eb0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2585)));
    // 0x130eb4: 0x28830006  slti        $v1, $a0, 0x6
    ctx->pc = 0x130eb4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x130eb8: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x130EB8u;
    {
        const bool branch_taken_0x130eb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x130eb8) {
            ctx->pc = 0x130EE0u;
            goto label_130ee0;
        }
    }
    ctx->pc = 0x130EC0u;
    // 0x130ec0: 0x92430a1b  lbu         $v1, 0xA1B($s2)
    ctx->pc = 0x130ec0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2587)));
    // 0x130ec4: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x130ec4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x130ec8: 0xa2430a1b  sb          $v1, 0xA1B($s2)
    ctx->pc = 0x130ec8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2587), (uint8_t)GPR_U32(ctx, 3));
    // 0x130ecc: 0x92430a1a  lbu         $v1, 0xA1A($s2)
    ctx->pc = 0x130eccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2586)));
    // 0x130ed0: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x130ED0u;
    {
        const bool branch_taken_0x130ed0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x130ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130ED0u;
        // 0x130ed4: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130ed0) {
            ctx->pc = 0x130F18u;
            goto label_130f18;
        }
    }
    ctx->pc = 0x130ED8u;
    // 0x130ed8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x130ED8u;
    {
        const bool branch_taken_0x130ed8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x130EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130ED8u;
        // 0x130edc: 0xa2430a1a  sb          $v1, 0xA1A($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 2586), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130ed8) {
            ctx->pc = 0x130F18u;
            goto label_130f18;
        }
    }
    ctx->pc = 0x130EE0u;
label_130ee0:
    // 0x130ee0: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x130ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x130ee4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x130EE4u;
    {
        const bool branch_taken_0x130ee4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x130EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130EE4u;
        // 0x130ee8: 0xa2430a19  sb          $v1, 0xA19($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 2585), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130ee4) {
            ctx->pc = 0x130F18u;
            goto label_130f18;
        }
    }
    ctx->pc = 0x130EECu;
    // 0x130eec: 0x0  nop
    ctx->pc = 0x130eecu;
    // NOP
label_130ef0:
    // 0x130ef0: 0xa2400a19  sb          $zero, 0xA19($s2)
    ctx->pc = 0x130ef0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2585), (uint8_t)GPR_U32(ctx, 0));
    // 0x130ef4: 0x92440a1b  lbu         $a0, 0xA1B($s2)
    ctx->pc = 0x130ef4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2587)));
    // 0x130ef8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x130ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x130efc: 0x308400fd  andi        $a0, $a0, 0xFD
    ctx->pc = 0x130efcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)253);
    // 0x130f00: 0xa2440a1b  sb          $a0, 0xA1B($s2)
    ctx->pc = 0x130f00u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2587), (uint8_t)GPR_U32(ctx, 4));
    // 0x130f04: 0x92440a1a  lbu         $a0, 0xA1A($s2)
    ctx->pc = 0x130f04u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2586)));
    // 0x130f08: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x130F08u;
    {
        const bool branch_taken_0x130f08 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x130f08) {
            ctx->pc = 0x130F18u;
            goto label_130f18;
        }
    }
    ctx->pc = 0x130F10u;
    // 0x130f10: 0xa2400a1a  sb          $zero, 0xA1A($s2)
    ctx->pc = 0x130f10u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2586), (uint8_t)GPR_U32(ctx, 0));
    // 0x130f14: 0x0  nop
    ctx->pc = 0x130f14u;
    // NOP
label_130f18:
    // 0x130f18: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x130f18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x130f1c: 0x8c24ceb8  lw          $a0, -0x3148($at)
    ctx->pc = 0x130f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x81CEB8u));
    // 0x130f20: 0x30834000  andi        $v1, $a0, 0x4000
    ctx->pc = 0x130f20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16384);
    // 0x130f24: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x130F24u;
    {
        const bool branch_taken_0x130f24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x130f24) {
            ctx->pc = 0x130F60u;
            goto label_130f60;
        }
    }
    ctx->pc = 0x130F2Cu;
    // 0x130f2c: 0x92430a1b  lbu         $v1, 0xA1B($s2)
    ctx->pc = 0x130f2cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2587)));
    // 0x130f30: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x130F30u;
    {
        const bool branch_taken_0x130f30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x130F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130F30u;
        // 0x130f34: 0x34830004  ori         $v1, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x130f30) {
            ctx->pc = 0x130F48u;
            goto label_130f48;
        }
    }
    ctx->pc = 0x130F38u;
    // 0x130f38: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x130f38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x130f3c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x130F3Cu;
    {
        const bool branch_taken_0x130f3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x130F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130F3Cu;
        // 0x130f40: 0xac23ceb8  sw          $v1, -0x3148($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294954680), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130f3c) {
            ctx->pc = 0x130F90u;
            goto label_130f90;
        }
    }
    ctx->pc = 0x130F44u;
    // 0x130f44: 0x0  nop
    ctx->pc = 0x130f44u;
    // NOP
label_130f48:
    // 0x130f48: 0x2403fffb  addiu       $v1, $zero, -0x5
    ctx->pc = 0x130f48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x130f4c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x130f4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x130f50: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x130f50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x130f54: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x130F54u;
    {
        const bool branch_taken_0x130f54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x130F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130F54u;
        // 0x130f58: 0xac23ceb8  sw          $v1, -0x3148($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294954680), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130f54) {
            ctx->pc = 0x130F90u;
            goto label_130f90;
        }
    }
    ctx->pc = 0x130F5Cu;
    // 0x130f5c: 0x0  nop
    ctx->pc = 0x130f5cu;
    // NOP
label_130f60:
    // 0x130f60: 0x92430a1b  lbu         $v1, 0xA1B($s2)
    ctx->pc = 0x130f60u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2587)));
    // 0x130f64: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x130f64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x130f68: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x130F68u;
    {
        const bool branch_taken_0x130f68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x130F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130F68u;
        // 0x130f6c: 0x34830004  ori         $v1, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x130f68) {
            ctx->pc = 0x130F80u;
            goto label_130f80;
        }
    }
    ctx->pc = 0x130F70u;
    // 0x130f70: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x130f70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x130f74: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x130F74u;
    {
        const bool branch_taken_0x130f74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x130F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130F74u;
        // 0x130f78: 0xac23ceb8  sw          $v1, -0x3148($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294954680), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130f74) {
            ctx->pc = 0x130F90u;
            goto label_130f90;
        }
    }
    ctx->pc = 0x130F7Cu;
    // 0x130f7c: 0x0  nop
    ctx->pc = 0x130f7cu;
    // NOP
label_130f80:
    // 0x130f80: 0x2403fffb  addiu       $v1, $zero, -0x5
    ctx->pc = 0x130f80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x130f84: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x130f84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x130f88: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x130f88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x130f8c: 0xac23ceb8  sw          $v1, -0x3148($at)
    ctx->pc = 0x130f8cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x81CEB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEB8u, _value); } while (0);
label_130f90:
    // 0x130f90: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x130f90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x130f94: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x130f94u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x130f98: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x130f98u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x130f9c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x130f9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x130fa0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x130fa0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x130fa4: 0x3e00008  jr          $ra
    ctx->pc = 0x130FA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x130FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130FA4u;
        // 0x130fa8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x130FA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x130FACu;
}
