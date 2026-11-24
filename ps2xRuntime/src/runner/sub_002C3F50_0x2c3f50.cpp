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

// Function: sub_002C3F50
// Address: 0x2c3f50 - 0x2c4108
void sub_002C3F50_0x2c3f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C3F50_0x2c3f50");
#endif

    switch (ctx->pc) {
        case 0x2c3fa0u: goto label_2c3fa0;
        case 0x2c3fb0u: goto label_2c3fb0;
        case 0x2c3fc0u: goto label_2c3fc0;
        case 0x2c40bcu: goto label_2c40bc;
        default: break;
    }

    ctx->pc = 0x2c3f50u;

    // 0x2c3f50: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2c3f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2c3f54: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2c3f54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2c3f58: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2c3f58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2c3f5c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2c3f5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2c3f60: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2c3f60u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3f64: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2c3f64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2c3f68: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2c3f68u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3f6c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c3f6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2c3f70: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2c3f70u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3f74: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c3f74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c3f78: 0x90c30001  lbu         $v1, 0x1($a2)
    ctx->pc = 0x2c3f78u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x2c3f7c: 0x90c20002  lbu         $v0, 0x2($a2)
    ctx->pc = 0x2c3f7cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x2c3f80: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x2c3f80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x2c3f84: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x2C3F84u;
    {
        const bool branch_taken_0x2c3f84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3F84u;
        // 0x2c3f88: 0x30710001  andi        $s1, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3f84) {
            ctx->pc = 0x2C4020u;
            goto label_2c4020;
        }
    }
    ctx->pc = 0x2C3F8Cu;
    // 0x2c3f8c: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x2c3f8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x2c3f90: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C3F90u;
    {
        const bool branch_taken_0x2c3f90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3F90u;
        // 0x2c3f94: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3f90) {
            ctx->pc = 0x2C3FA8u;
            goto label_2c3fa8;
        }
    }
    ctx->pc = 0x2C3F98u;
    // 0x2c3f98: 0xc0b2bc4  jal         func_2CAF10
    ctx->pc = 0x2C3F98u;
    SET_GPR_U32(ctx, 31, 0x2C3FA0u);
    ctx->pc = 0x2CAF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CAF10u, 0x2C3F98u, 0x2C3FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3FA0u;
label_2c3fa0:
    // 0x2c3fa0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2C3FA0u;
    {
        const bool branch_taken_0x2c3fa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3FA0u;
        // 0x2c3fa4: 0x90430000  lbu         $v1, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3fa0) {
            ctx->pc = 0x2C3FB4u;
            goto label_2c3fb4;
        }
    }
    ctx->pc = 0x2C3FA8u;
label_2c3fa8:
    // 0x2c3fa8: 0xc0b2bc0  jal         func_2CAF00
    ctx->pc = 0x2C3FA8u;
    SET_GPR_U32(ctx, 31, 0x2C3FB0u);
    ctx->pc = 0x2CAF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CAF00u, 0x2C3FA8u, 0x2C3FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3FB0u;
label_2c3fb0:
    // 0x2c3fb0: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x2c3fb0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_2c3fb4:
    // 0x2c3fb4: 0x10600022  beqz        $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x2C3FB4u;
    {
        const bool branch_taken_0x2c3fb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c3fb4) {
            ctx->pc = 0x2C4040u;
            goto label_2c4040;
        }
    }
    ctx->pc = 0x2C3FBCu;
    // 0x2c3fbc: 0x0  nop
    ctx->pc = 0x2c3fbcu;
    // NOP
label_2c3fc0:
    // 0x2c3fc0: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x2c3fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x2c3fc4: 0x2c610002  sltiu       $at, $v1, 0x2
    ctx->pc = 0x2c3fc4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2c3fc8: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C3FC8u;
    {
        const bool branch_taken_0x2c3fc8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C3FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3FC8u;
        // 0x2c3fcc: 0x64040001  daddiu      $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3fc8) {
            ctx->pc = 0x2C3FD8u;
            goto label_2c3fd8;
        }
    }
    ctx->pc = 0x2C3FD0u;
    // 0x2c3fd0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2c3fd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3fd4: 0x0  nop
    ctx->pc = 0x2c3fd4u;
    // NOP
label_2c3fd8:
    // 0x2c3fd8: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x2C3FD8u;
    {
        const bool branch_taken_0x2c3fd8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c3fd8) {
            ctx->pc = 0x2C4008u;
            goto label_2c4008;
        }
    }
    ctx->pc = 0x2C3FE0u;
    // 0x2c3fe0: 0x8c4329c0  lw          $v1, 0x29C0($v0)
    ctx->pc = 0x2c3fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10688)));
    // 0x2c3fe4: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x2c3fe4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c3fe8: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2C3FE8u;
    {
        const bool branch_taken_0x2c3fe8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c3fe8) {
            ctx->pc = 0x2C4008u;
            goto label_2c4008;
        }
    }
    ctx->pc = 0x2C3FF0u;
    // 0x2c3ff0: 0x90440002  lbu         $a0, 0x2($v0)
    ctx->pc = 0x2c3ff0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x2c3ff4: 0x92430002  lbu         $v1, 0x2($s2)
    ctx->pc = 0x2c3ff4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x2c3ff8: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C3FF8u;
    {
        const bool branch_taken_0x2c3ff8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2c3ff8) {
            ctx->pc = 0x2C4008u;
            goto label_2c4008;
        }
    }
    ctx->pc = 0x2C4000u;
    // 0x2c4000: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2c4000u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2c4004: 0x0  nop
    ctx->pc = 0x2c4004u;
    // NOP
label_2c4008:
    // 0x2c4008: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x2c4008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x2c400c: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x2c400cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c4010: 0x1460ffeb  bnez        $v1, . + 4 + (-0x15 << 2)
    ctx->pc = 0x2C4010u;
    {
        const bool branch_taken_0x2c4010 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c4010) {
            ctx->pc = 0x2C3FC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c3fc0;
        }
    }
    ctx->pc = 0x2C4018u;
    // 0x2c4018: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2C4018u;
    {
        const bool branch_taken_0x2c4018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c4018) {
            ctx->pc = 0x2C4040u;
            goto label_2c4040;
        }
    }
    ctx->pc = 0x2C4020u;
label_2c4020:
    // 0x2c4020: 0x31043  sra         $v0, $v1, 1
    ctx->pc = 0x2c4020u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
    // 0x2c4024: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C4024u;
    {
        const bool branch_taken_0x2c4024 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4024u;
        // 0x2c4028: 0x3c01008d  lui         $at, 0x8D (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4024) {
            ctx->pc = 0x2C4038u;
            goto label_2c4038;
        }
    }
    ctx->pc = 0x2C402Cu;
    // 0x2c402c: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2c402cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2c4030: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2C4030u;
    {
        const bool branch_taken_0x2c4030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4030u;
        // 0x2c4034: 0x94225072  lhu         $v0, 0x5072($at) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 20594)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4030) {
            ctx->pc = 0x2C403Cu;
            goto label_2c403c;
        }
    }
    ctx->pc = 0x2C4038u;
label_2c4038:
    // 0x2c4038: 0x94225062  lhu         $v0, 0x5062($at)
    ctx->pc = 0x2c4038u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 20578)));
label_2c403c:
    // 0x2c403c: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x2c403cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_2c4040:
    // 0x2c4040: 0x92420001  lbu         $v0, 0x1($s2)
    ctx->pc = 0x2c4040u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x2c4044: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x2c4044u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x2c4048: 0x216be  dsrl32      $v0, $v0, 26
    ctx->pc = 0x2c4048u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 26));
    // 0x2c404c: 0x50082a  slt         $at, $v0, $s0
    ctx->pc = 0x2c404cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x2c4050: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C4050u;
    {
        const bool branch_taken_0x2c4050 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c4050) {
            ctx->pc = 0x2C4060u;
            goto label_2c4060;
        }
    }
    ctx->pc = 0x2C4058u;
    // 0x2c4058: 0x3a310001  xori        $s1, $s1, 0x1
    ctx->pc = 0x2c4058u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)1);
    // 0x2c405c: 0x0  nop
    ctx->pc = 0x2c405cu;
    // NOP
label_2c4060:
    // 0x2c4060: 0x1220001f  beqz        $s1, . + 4 + (0x1F << 2)
    ctx->pc = 0x2C4060u;
    {
        const bool branch_taken_0x2c4060 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c4060) {
            ctx->pc = 0x2C40E0u;
            goto label_2c40e0;
        }
    }
    ctx->pc = 0x2C4068u;
    // 0x2c4068: 0x938289d0  lbu         $v0, -0x7630($gp)
    ctx->pc = 0x2c4068u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937040)));
    // 0x2c406c: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2C406Cu;
    {
        const bool branch_taken_0x2c406c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C4070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C406Cu;
        // 0x2c4070: 0x92450003  lbu         $a1, 0x3($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c406c) {
            ctx->pc = 0x2C40C8u;
            goto label_2c40c8;
        }
    }
    ctx->pc = 0x2C4074u;
    // 0x2c4074: 0x10a0000e  beqz        $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x2C4074u;
    {
        const bool branch_taken_0x2c4074 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4074u;
        // 0x2c4078: 0xa280004f  sb          $zero, 0x4F($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 79), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4074) {
            ctx->pc = 0x2C40B0u;
            goto label_2c40b0;
        }
    }
    ctx->pc = 0x2C407Cu;
    // 0x2c407c: 0x92840037  lbu         $a0, 0x37($s4)
    ctx->pc = 0x2c407cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 55)));
    // 0x2c4080: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x2c4080u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2c4084: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2c4084u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2c4088: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2c4088u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c408c: 0xa284004e  sb          $a0, 0x4E($s4)
    ctx->pc = 0x2c408cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 78), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c4090: 0xa2850037  sb          $a1, 0x37($s4)
    ctx->pc = 0x2c4090u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 55), (uint8_t)GPR_U32(ctx, 5));
    // 0x2c4094: 0xa2800032  sb          $zero, 0x32($s4)
    ctx->pc = 0x2c4094u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 50), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c4098: 0xa283005f  sb          $v1, 0x5F($s4)
    ctx->pc = 0x2c4098u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 95), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c409c: 0xa6800080  sh          $zero, 0x80($s4)
    ctx->pc = 0x2c409cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 128), (uint16_t)GPR_U32(ctx, 0));
    // 0x2c40a0: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x2c40a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2c40a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c40a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c40a8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2C40A8u;
    {
        const bool branch_taken_0x2c40a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C40ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C40A8u;
        // 0x2c40ac: 0x8c420018  lw          $v0, 0x18($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c40a8) {
            ctx->pc = 0x2C40D8u;
            goto label_2c40d8;
        }
    }
    ctx->pc = 0x2C40B0u;
label_2c40b0:
    // 0x2c40b0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2c40b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c40b4: 0xc0b20e4  jal         func_2C8390
    ctx->pc = 0x2C40B4u;
    SET_GPR_U32(ctx, 31, 0x2C40BCu);
    ctx->pc = 0x2C40B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C40B4u;
    // 0x2c40b8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8390u, 0x2C40B4u, 0x2C40BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C40BCu;
label_2c40bc:
    // 0x2c40bc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2C40BCu;
    {
        const bool branch_taken_0x2c40bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c40bc) {
            ctx->pc = 0x2C40D0u;
            goto label_2c40d0;
        }
    }
    ctx->pc = 0x2C40C4u;
    // 0x2c40c4: 0x0  nop
    ctx->pc = 0x2c40c4u;
    // NOP
label_2c40c8:
    // 0x2c40c8: 0xa38589d8  sb          $a1, -0x7628($gp)
    ctx->pc = 0x2c40c8u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937048), (uint8_t)GPR_U32(ctx, 5));
    // 0x2c40cc: 0x0  nop
    ctx->pc = 0x2c40ccu;
    // NOP
label_2c40d0:
    // 0x2c40d0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c40d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c40d4: 0x0  nop
    ctx->pc = 0x2c40d4u;
    // NOP
label_2c40d8:
    // 0x2c40d8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2C40D8u;
    {
        const bool branch_taken_0x2c40d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c40d8) {
            ctx->pc = 0x2C40E8u;
            goto label_2c40e8;
        }
    }
    ctx->pc = 0x2C40E0u;
label_2c40e0:
    // 0x2c40e0: 0x26420004  addiu       $v0, $s2, 0x4
    ctx->pc = 0x2c40e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x2c40e4: 0x0  nop
    ctx->pc = 0x2c40e4u;
    // NOP
label_2c40e8:
    // 0x2c40e8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2c40e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c40ec: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2c40ecu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c40f0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2c40f0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c40f4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2c40f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c40f8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c40f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c40fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c40fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c4100: 0x3e00008  jr          $ra
    ctx->pc = 0x2C4100u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C4104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4100u;
        // 0x2c4104: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C4100u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C4108u;
}
