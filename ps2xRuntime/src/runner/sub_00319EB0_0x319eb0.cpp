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

// Function: sub_00319EB0
// Address: 0x319eb0 - 0x31a0dc
void sub_00319EB0_0x319eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00319EB0_0x319eb0");
#endif

    switch (ctx->pc) {
        case 0x319f38u: goto label_319f38;
        case 0x319f44u: goto label_319f44;
        case 0x31a0b4u: goto label_31a0b4;
        default: break;
    }

    ctx->pc = 0x319eb0u;

    // 0x319eb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x319eb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x319eb4: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x319eb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x319eb8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x319eb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x319ebc: 0x27868060  addiu       $a2, $gp, -0x7FA0
    ctx->pc = 0x319ebcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x319ec0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x319ec0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x319ec4: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x319ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x319ec8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x319ec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x319ecc: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x319eccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x319ed0: 0x90276c1c  lbu         $a3, 0x6C1C($at)
    ctx->pc = 0x319ed0u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x319ed4: 0x8c900144  lw          $s0, 0x144($a0)
    ctx->pc = 0x319ed4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 324)));
    // 0x319ed8: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x319ed8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x319edc: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x319edcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x319ee0: 0x8cc70000  lw          $a3, 0x0($a2)
    ctx->pc = 0x319ee0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x319ee4: 0xa4830786  sh          $v1, 0x786($a0)
    ctx->pc = 0x319ee4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 1926), (uint16_t)GPR_U32(ctx, 3));
    // 0x319ee8: 0x9483078c  lhu         $v1, 0x78C($a0)
    ctx->pc = 0x319ee8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 1932)));
    // 0x319eec: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x319eecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x319ef0: 0xa483078c  sh          $v1, 0x78C($a0)
    ctx->pc = 0x319ef0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 1932), (uint16_t)GPR_U32(ctx, 3));
    // 0x319ef4: 0x92060001  lbu         $a2, 0x1($s0)
    ctx->pc = 0x319ef4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x319ef8: 0x10c50061  beq         $a2, $a1, . + 4 + (0x61 << 2)
    ctx->pc = 0x319EF8u;
    {
        const bool branch_taken_0x319ef8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        ctx->pc = 0x319EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319EF8u;
        // 0x319efc: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319ef8) {
            ctx->pc = 0x31A080u;
            goto label_31a080;
        }
    }
    ctx->pc = 0x319F00u;
    // 0x319f00: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x319f00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x319f04: 0x10c3004c  beq         $a2, $v1, . + 4 + (0x4C << 2)
    ctx->pc = 0x319F04u;
    {
        const bool branch_taken_0x319f04 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x319F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319F04u;
        // 0x319f08: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319f04) {
            ctx->pc = 0x31A038u;
            goto label_31a038;
        }
    }
    ctx->pc = 0x319F0Cu;
    // 0x319f0c: 0x10c4002a  beq         $a2, $a0, . + 4 + (0x2A << 2)
    ctx->pc = 0x319F0Cu;
    {
        const bool branch_taken_0x319f0c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        ctx->pc = 0x319F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319F0Cu;
        // 0x319f10: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319f0c) {
            ctx->pc = 0x319FB8u;
            goto label_319fb8;
        }
    }
    ctx->pc = 0x319F14u;
    // 0x319f14: 0x10c3001a  beq         $a2, $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x319F14u;
    {
        const bool branch_taken_0x319f14 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x319f14) {
            ctx->pc = 0x319F80u;
            goto label_319f80;
        }
    }
    ctx->pc = 0x319F1Cu;
    // 0x319f1c: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x319F1Cu;
    {
        const bool branch_taken_0x319f1c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x319f1c) {
            ctx->pc = 0x319F30u;
            goto label_319f30;
        }
    }
    ctx->pc = 0x319F24u;
    // 0x319f24: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x319F24u;
    {
        const bool branch_taken_0x319f24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x319f24) {
            ctx->pc = 0x31A0C8u;
            goto label_31a0c8;
        }
    }
    ctx->pc = 0x319F2Cu;
    // 0x319f2c: 0x0  nop
    ctx->pc = 0x319f2cu;
    // NOP
label_319f30:
    // 0x319f30: 0xc0b8818  jal         func_2E2060
    ctx->pc = 0x319F30u;
    SET_GPR_U32(ctx, 31, 0x319F38u);
    ctx->pc = 0x2E2060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E2060u, 0x319F30u, 0x319F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319F38u;
label_319f38:
    // 0x319f38: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x319f38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x319f3c: 0xc0b8838  jal         func_2E20E0
    ctx->pc = 0x319F3Cu;
    SET_GPR_U32(ctx, 31, 0x319F44u);
    ctx->pc = 0x319F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319F3Cu;
    // 0x319f40: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E20E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E20E0u, 0x319F3Cu, 0x319F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319F44u;
label_319f44:
    // 0x319f44: 0x24030063  addiu       $v1, $zero, 0x63
    ctx->pc = 0x319f44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x319f48: 0x24060094  addiu       $a2, $zero, 0x94
    ctx->pc = 0x319f48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 148));
    // 0x319f4c: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x319f4cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x319f50: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x319f50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x319f54: 0xa22007f6  sb          $zero, 0x7F6($s1)
    ctx->pc = 0x319f54u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x319f58: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x319f58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x319f5c: 0xa22007f4  sb          $zero, 0x7F4($s1)
    ctx->pc = 0x319f5cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x319f60: 0x34640040  ori         $a0, $v1, 0x40
    ctx->pc = 0x319f60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x319f64: 0xa62607f2  sh          $a2, 0x7F2($s1)
    ctx->pc = 0x319f64u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2034), (uint16_t)GPR_U32(ctx, 6));
    // 0x319f68: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x319f68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x319f6c: 0xa22507f5  sb          $a1, 0x7F5($s1)
    ctx->pc = 0x319f6cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2037), (uint8_t)GPR_U32(ctx, 5));
    // 0x319f70: 0xae2407ec  sw          $a0, 0x7EC($s1)
    ctx->pc = 0x319f70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2028), GPR_U32(ctx, 4));
    // 0x319f74: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x319F74u;
    {
        const bool branch_taken_0x319f74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x319F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319F74u;
        // 0x319f78: 0xa2030001  sb          $v1, 0x1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319f74) {
            ctx->pc = 0x31A0C8u;
            goto label_31a0c8;
        }
    }
    ctx->pc = 0x319F7Cu;
    // 0x319f7c: 0x0  nop
    ctx->pc = 0x319f7cu;
    // NOP
label_319f80:
    // 0x319f80: 0x922307f6  lbu         $v1, 0x7F6($s1)
    ctx->pc = 0x319f80u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2038)));
    // 0x319f84: 0x10600050  beqz        $v1, . + 4 + (0x50 << 2)
    ctx->pc = 0x319F84u;
    {
        const bool branch_taken_0x319f84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x319f84) {
            ctx->pc = 0x31A0C8u;
            goto label_31a0c8;
        }
    }
    ctx->pc = 0x319F8Cu;
    // 0x319f8c: 0xa22007f6  sb          $zero, 0x7F6($s1)
    ctx->pc = 0x319f8cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x319f90: 0x24030062  addiu       $v1, $zero, 0x62
    ctx->pc = 0x319f90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 98));
    // 0x319f94: 0xa22007f4  sb          $zero, 0x7F4($s1)
    ctx->pc = 0x319f94u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x319f98: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x319f98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x319f9c: 0xa62307f2  sh          $v1, 0x7F2($s1)
    ctx->pc = 0x319f9cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2034), (uint16_t)GPR_U32(ctx, 3));
    // 0x319fa0: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x319fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x319fa4: 0xa22507f5  sb          $a1, 0x7F5($s1)
    ctx->pc = 0x319fa4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2037), (uint8_t)GPR_U32(ctx, 5));
    // 0x319fa8: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x319fa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x319fac: 0xae2307ec  sw          $v1, 0x7EC($s1)
    ctx->pc = 0x319facu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2028), GPR_U32(ctx, 3));
    // 0x319fb0: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x319FB0u;
    {
        const bool branch_taken_0x319fb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x319FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319FB0u;
        // 0x319fb4: 0xa2040001  sb          $a0, 0x1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319fb0) {
            ctx->pc = 0x31A0C8u;
            goto label_31a0c8;
        }
    }
    ctx->pc = 0x319FB8u;
label_319fb8:
    // 0x319fb8: 0x10e00003  beqz        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x319FB8u;
    {
        const bool branch_taken_0x319fb8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x319fb8) {
            ctx->pc = 0x319FC8u;
            goto label_319fc8;
        }
    }
    ctx->pc = 0x319FC0u;
    // 0x319fc0: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x319fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x319fc4: 0xae2307c0  sw          $v1, 0x7C0($s1)
    ctx->pc = 0x319fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1984), GPR_U32(ctx, 3));
label_319fc8:
    // 0x319fc8: 0x8e230054  lw          $v1, 0x54($s1)
    ctx->pc = 0x319fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x319fcc: 0x946300c4  lhu         $v1, 0xC4($v1)
    ctx->pc = 0x319fccu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 196)));
    // 0x319fd0: 0x286100dd  slti        $at, $v1, 0xDD
    ctx->pc = 0x319fd0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)221) ? 1 : 0);
    // 0x319fd4: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x319FD4u;
    {
        const bool branch_taken_0x319fd4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x319fd4) {
            ctx->pc = 0x31A000u;
            goto label_31a000;
        }
    }
    ctx->pc = 0x319FDCu;
    // 0x319fdc: 0x8e2306ac  lw          $v1, 0x6AC($s1)
    ctx->pc = 0x319fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1708)));
    // 0x319fe0: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x319fe0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x319fe4: 0x10600038  beqz        $v1, . + 4 + (0x38 << 2)
    ctx->pc = 0x319FE4u;
    {
        const bool branch_taken_0x319fe4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x319fe4) {
            ctx->pc = 0x31A0C8u;
            goto label_31a0c8;
        }
    }
    ctx->pc = 0x319FECu;
    // 0x319fec: 0x96230286  lhu         $v1, 0x286($s1)
    ctx->pc = 0x319fecu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 646)));
    // 0x319ff0: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x319ff0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x319ff4: 0x10600034  beqz        $v1, . + 4 + (0x34 << 2)
    ctx->pc = 0x319FF4u;
    {
        const bool branch_taken_0x319ff4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x319ff4) {
            ctx->pc = 0x31A0C8u;
            goto label_31a0c8;
        }
    }
    ctx->pc = 0x319FFCu;
    // 0x319ffc: 0x0  nop
    ctx->pc = 0x319ffcu;
    // NOP
label_31a000:
    // 0x31a000: 0xa22007f6  sb          $zero, 0x7F6($s1)
    ctx->pc = 0x31a000u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x31a004: 0xa22007f4  sb          $zero, 0x7F4($s1)
    ctx->pc = 0x31a004u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x31a008: 0x24030095  addiu       $v1, $zero, 0x95
    ctx->pc = 0x31a008u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 149));
    // 0x31a00c: 0xa62307f2  sh          $v1, 0x7F2($s1)
    ctx->pc = 0x31a00cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2034), (uint16_t)GPR_U32(ctx, 3));
    // 0x31a010: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x31a010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x31a014: 0xa22307f5  sb          $v1, 0x7F5($s1)
    ctx->pc = 0x31a014u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2037), (uint8_t)GPR_U32(ctx, 3));
    // 0x31a018: 0x3c038004  lui         $v1, 0x8004
    ctx->pc = 0x31a018u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32772 << 16));
    // 0x31a01c: 0x34640040  ori         $a0, $v1, 0x40
    ctx->pc = 0x31a01cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x31a020: 0xae2407ec  sw          $a0, 0x7EC($s1)
    ctx->pc = 0x31a020u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2028), GPR_U32(ctx, 4));
    // 0x31a024: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x31a024u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x31a028: 0xae2007c0  sw          $zero, 0x7C0($s1)
    ctx->pc = 0x31a028u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1984), GPR_U32(ctx, 0));
    // 0x31a02c: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x31A02Cu;
    {
        const bool branch_taken_0x31a02c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31A030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A02Cu;
        // 0x31a030: 0xa2030001  sb          $v1, 0x1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a02c) {
            ctx->pc = 0x31A0C8u;
            goto label_31a0c8;
        }
    }
    ctx->pc = 0x31A034u;
    // 0x31a034: 0x0  nop
    ctx->pc = 0x31a034u;
    // NOP
label_31a038:
    // 0x31a038: 0x922307f6  lbu         $v1, 0x7F6($s1)
    ctx->pc = 0x31a038u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2038)));
    // 0x31a03c: 0x10600022  beqz        $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x31A03Cu;
    {
        const bool branch_taken_0x31a03c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x31a03c) {
            ctx->pc = 0x31A0C8u;
            goto label_31a0c8;
        }
    }
    ctx->pc = 0x31A044u;
    // 0x31a044: 0xa22007f6  sb          $zero, 0x7F6($s1)
    ctx->pc = 0x31a044u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x31a048: 0x2404009b  addiu       $a0, $zero, 0x9B
    ctx->pc = 0x31a048u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 155));
    // 0x31a04c: 0xa22007f4  sb          $zero, 0x7F4($s1)
    ctx->pc = 0x31a04cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x31a050: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x31a050u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x31a054: 0xa62407f2  sh          $a0, 0x7F2($s1)
    ctx->pc = 0x31a054u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2034), (uint16_t)GPR_U32(ctx, 4));
    // 0x31a058: 0x34640040  ori         $a0, $v1, 0x40
    ctx->pc = 0x31a058u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x31a05c: 0xa22507f5  sb          $a1, 0x7F5($s1)
    ctx->pc = 0x31a05cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2037), (uint8_t)GPR_U32(ctx, 5));
    // 0x31a060: 0xae2407ec  sw          $a0, 0x7EC($s1)
    ctx->pc = 0x31a060u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2028), GPR_U32(ctx, 4));
    // 0x31a064: 0x240300b4  addiu       $v1, $zero, 0xB4
    ctx->pc = 0x31a064u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    // 0x31a068: 0x8e240148  lw          $a0, 0x148($s1)
    ctx->pc = 0x31a068u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
    // 0x31a06c: 0x34842000  ori         $a0, $a0, 0x2000
    ctx->pc = 0x31a06cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8192);
    // 0x31a070: 0xae240148  sw          $a0, 0x148($s1)
    ctx->pc = 0x31a070u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 328), GPR_U32(ctx, 4));
    // 0x31a074: 0xa623082e  sh          $v1, 0x82E($s1)
    ctx->pc = 0x31a074u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2094), (uint16_t)GPR_U32(ctx, 3));
    // 0x31a078: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x31A078u;
    {
        const bool branch_taken_0x31a078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31A07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A078u;
        // 0x31a07c: 0xa2050001  sb          $a1, 0x1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a078) {
            ctx->pc = 0x31A0C8u;
            goto label_31a0c8;
        }
    }
    ctx->pc = 0x31A080u;
label_31a080:
    // 0x31a080: 0x8e230148  lw          $v1, 0x148($s1)
    ctx->pc = 0x31a080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
    // 0x31a084: 0x34632000  ori         $v1, $v1, 0x2000
    ctx->pc = 0x31a084u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
    // 0x31a088: 0xae230148  sw          $v1, 0x148($s1)
    ctx->pc = 0x31a088u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 328), GPR_U32(ctx, 3));
    // 0x31a08c: 0x9623082e  lhu         $v1, 0x82E($s1)
    ctx->pc = 0x31a08cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2094)));
    // 0x31a090: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x31a090u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x31a094: 0xa623082e  sh          $v1, 0x82E($s1)
    ctx->pc = 0x31a094u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2094), (uint16_t)GPR_U32(ctx, 3));
    // 0x31a098: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x31a098u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x31a09c: 0x1c60000a  bgtz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x31A09Cu;
    {
        const bool branch_taken_0x31a09c = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x31A0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A09Cu;
        // 0x31a0a0: 0x3c040092  lui         $a0, 0x92 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)146 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a09c) {
            ctx->pc = 0x31A0C8u;
            goto label_31a0c8;
        }
    }
    ctx->pc = 0x31A0A4u;
    // 0x31a0a4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x31a0a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31a0a8: 0x248428b0  addiu       $a0, $a0, 0x28B0
    ctx->pc = 0x31a0a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10416));
    // 0x31a0ac: 0xc0e360c  jal         func_38D830
    ctx->pc = 0x31A0ACu;
    SET_GPR_U32(ctx, 31, 0x31A0B4u);
    ctx->pc = 0x31A0B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A0ACu;
    // 0x31a0b0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38D830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38D830u, 0x31A0ACu, 0x31A0B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A0B4u;
label_31a0b4:
    // 0x31a0b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x31a0b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31a0b8: 0xa2232b24  sb          $v1, 0x2B24($s1)
    ctx->pc = 0x31a0b8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11044), (uint8_t)GPR_U32(ctx, 3));
    // 0x31a0bc: 0x92030001  lbu         $v1, 0x1($s0)
    ctx->pc = 0x31a0bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x31a0c0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x31a0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x31a0c4: 0xa2030001  sb          $v1, 0x1($s0)
    ctx->pc = 0x31a0c4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
label_31a0c8:
    // 0x31a0c8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x31a0c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31a0cc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x31a0ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31a0d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x31a0d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31a0d4: 0x3e00008  jr          $ra
    ctx->pc = 0x31A0D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31A0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A0D4u;
        // 0x31a0d8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31A0D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31A0DCu;
}
