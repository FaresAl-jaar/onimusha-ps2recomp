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

// Function: sub_003A6AD0
// Address: 0x3a6ad0 - 0x3a74d8
void sub_003A6AD0_0x3a6ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A6AD0_0x3a6ad0");
#endif

    switch (ctx->pc) {
        case 0x3a6be0u: goto label_3a6be0;
        case 0x3a6c28u: goto label_3a6c28;
        case 0x3a6c58u: goto label_3a6c58;
        case 0x3a6ca0u: goto label_3a6ca0;
        case 0x3a6cd0u: goto label_3a6cd0;
        case 0x3a6d18u: goto label_3a6d18;
        case 0x3a6e34u: goto label_3a6e34;
        case 0x3a6e44u: goto label_3a6e44;
        case 0x3a6e5cu: goto label_3a6e5c;
        case 0x3a6e68u: goto label_3a6e68;
        case 0x3a6eacu: goto label_3a6eac;
        case 0x3a6ebcu: goto label_3a6ebc;
        case 0x3a6eccu: goto label_3a6ecc;
        case 0x3a6edcu: goto label_3a6edc;
        case 0x3a6ee4u: goto label_3a6ee4;
        case 0x3a6ef0u: goto label_3a6ef0;
        case 0x3a6ef8u: goto label_3a6ef8;
        case 0x3a6f08u: goto label_3a6f08;
        case 0x3a6f18u: goto label_3a6f18;
        case 0x3a6f3cu: goto label_3a6f3c;
        case 0x3a6f44u: goto label_3a6f44;
        case 0x3a6f54u: goto label_3a6f54;
        case 0x3a6f5cu: goto label_3a6f5c;
        case 0x3a6f68u: goto label_3a6f68;
        case 0x3a6f78u: goto label_3a6f78;
        case 0x3a6f80u: goto label_3a6f80;
        case 0x3a6fb4u: goto label_3a6fb4;
        case 0x3a6fc8u: goto label_3a6fc8;
        case 0x3a6fdcu: goto label_3a6fdc;
        case 0x3a6fecu: goto label_3a6fec;
        case 0x3a7020u: goto label_3a7020;
        case 0x3a7040u: goto label_3a7040;
        case 0x3a7090u: goto label_3a7090;
        case 0x3a716cu: goto label_3a716c;
        case 0x3a7180u: goto label_3a7180;
        case 0x3a7188u: goto label_3a7188;
        case 0x3a71ccu: goto label_3a71cc;
        case 0x3a71ecu: goto label_3a71ec;
        case 0x3a71f8u: goto label_3a71f8;
        case 0x3a7200u: goto label_3a7200;
        case 0x3a7210u: goto label_3a7210;
        case 0x3a721cu: goto label_3a721c;
        case 0x3a7230u: goto label_3a7230;
        case 0x3a7248u: goto label_3a7248;
        case 0x3a7258u: goto label_3a7258;
        case 0x3a7270u: goto label_3a7270;
        case 0x3a727cu: goto label_3a727c;
        case 0x3a7314u: goto label_3a7314;
        case 0x3a73dcu: goto label_3a73dc;
        case 0x3a73e8u: goto label_3a73e8;
        case 0x3a7414u: goto label_3a7414;
        case 0x3a7424u: goto label_3a7424;
        case 0x3a7430u: goto label_3a7430;
        case 0x3a748cu: goto label_3a748c;
        case 0x3a7494u: goto label_3a7494;
        case 0x3a74b4u: goto label_3a74b4;
        default: break;
    }

    ctx->pc = 0x3a6ad0u;

    // 0x3a6ad0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3a6ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3a6ad4: 0x3c01008f  lui         $at, 0x8F
    ctx->pc = 0x3a6ad4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)143 << 16));
    // 0x3a6ad8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3a6ad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3a6adc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3a6adcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3a6ae0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3a6ae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3a6ae4: 0x8c23ea24  lw          $v1, -0x15DC($at)
    ctx->pc = 0x3a6ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x8EEA24u));
    // 0x3a6ae8: 0xac830020  sw          $v1, 0x20($a0)
    ctx->pc = 0x3a6ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 3));
    // 0x3a6aec: 0x3c01008f  lui         $at, 0x8F
    ctx->pc = 0x3a6aecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)143 << 16));
    // 0x3a6af0: 0x8c23ea28  lw          $v1, -0x15D8($at)
    ctx->pc = 0x3a6af0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x8EEA28u));
    // 0x3a6af4: 0xac830024  sw          $v1, 0x24($a0)
    ctx->pc = 0x3a6af4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 3));
    // 0x3a6af8: 0x3c01008f  lui         $at, 0x8F
    ctx->pc = 0x3a6af8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)143 << 16));
    // 0x3a6afc: 0x8c23ea20  lw          $v1, -0x15E0($at)
    ctx->pc = 0x3a6afcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x8EEA20u));
    // 0x3a6b00: 0xac830028  sw          $v1, 0x28($a0)
    ctx->pc = 0x3a6b00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 3));
    // 0x3a6b04: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3a6b04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3a6b08: 0x9023fc8c  lbu         $v1, -0x374($at)
    ctx->pc = 0x3a6b08u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x81FC8Cu));
    // 0x3a6b0c: 0x14620016  bne         $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x3A6B0Cu;
    {
        const bool branch_taken_0x3a6b0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3A6B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6B0Cu;
        // 0x3a6b10: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6b0c) {
            ctx->pc = 0x3A6B68u;
            goto label_3a6b68;
        }
    }
    ctx->pc = 0x3A6B14u;
    // 0x3a6b14: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3a6b14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3a6b18: 0x8c22ceb8  lw          $v0, -0x3148($at)
    ctx->pc = 0x3a6b18u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x81CEB8u));
    // 0x3a6b1c: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x3a6b1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x3a6b20: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x3A6B20u;
    {
        const bool branch_taken_0x3a6b20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a6b20) {
            ctx->pc = 0x3A6B68u;
            goto label_3a6b68;
        }
    }
    ctx->pc = 0x3A6B28u;
    // 0x3a6b28: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x3a6b28u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3a6b2c: 0x2462fffe  addiu       $v0, $v1, -0x2
    ctx->pc = 0x3a6b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x3a6b30: 0x2c410002  sltiu       $at, $v0, 0x2
    ctx->pc = 0x3a6b30u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x3a6b34: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A6B34u;
    {
        const bool branch_taken_0x3a6b34 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A6B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6B34u;
        // 0x3a6b38: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6b34) {
            ctx->pc = 0x3A6B48u;
            goto label_3a6b48;
        }
    }
    ctx->pc = 0x3A6B3Cu;
    // 0x3a6b3c: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3A6B3Cu;
    {
        const bool branch_taken_0x3a6b3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3a6b3c) {
            ctx->pc = 0x3A6B68u;
            goto label_3a6b68;
        }
    }
    ctx->pc = 0x3A6B44u;
    // 0x3a6b44: 0x0  nop
    ctx->pc = 0x3a6b44u;
    // NOP
label_3a6b48:
    // 0x3a6b48: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x3a6b48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x3a6b4c: 0x3c010083  lui         $at, 0x83
    ctx->pc = 0x3a6b4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)131 << 16));
    // 0x3a6b50: 0xa422cc50  sh          $v0, -0x33B0($at)
    ctx->pc = 0x3a6b50u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x82CC50u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x82CC50u, _value); } while (0);
    // 0x3a6b54: 0x3c010083  lui         $at, 0x83
    ctx->pc = 0x3a6b54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)131 << 16));
    // 0x3a6b58: 0xa422cc90  sh          $v0, -0x3370($at)
    ctx->pc = 0x3a6b58u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x82CC90u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x82CC90u, _value); } while (0);
    // 0x3a6b5c: 0x3c010083  lui         $at, 0x83
    ctx->pc = 0x3a6b5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)131 << 16));
    // 0x3a6b60: 0xa422cc70  sh          $v0, -0x3390($at)
    ctx->pc = 0x3a6b60u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x82CC70u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x82CC70u, _value); } while (0);
    // 0x3a6b64: 0x0  nop
    ctx->pc = 0x3a6b64u;
    // NOP
label_3a6b68:
    // 0x3a6b68: 0x92040000  lbu         $a0, 0x0($s0)
    ctx->pc = 0x3a6b68u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3a6b6c: 0x2c810006  sltiu       $at, $a0, 0x6
    ctx->pc = 0x3a6b6cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x3a6b70: 0x10200253  beqz        $at, . + 4 + (0x253 << 2)
    ctx->pc = 0x3A6B70u;
    {
        const bool branch_taken_0x3a6b70 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A6B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6B70u;
        // 0x3a6b74: 0x3c030068  lui         $v1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6b70) {
            ctx->pc = 0x3A74C0u;
            goto label_3a74c0;
        }
    }
    ctx->pc = 0x3A6B78u;
    // 0x3a6b78: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x3a6b78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3a6b7c: 0x24632840  addiu       $v1, $v1, 0x2840
    ctx->pc = 0x3a6b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10304));
    // 0x3a6b80: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3a6b80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3a6b84: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3a6b84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3a6b88: 0x400008  jr          $v0
    ctx->pc = 0x3A6B88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3A6B90u: goto label_3a6b90;
            case 0x3A6F00u: goto label_3a6f00;
            case 0x3A7048u: goto label_3a7048;
            case 0x3A7190u: goto label_3a7190;
            case 0x3A7208u: goto label_3a7208;
            case 0x3A7320u: goto label_3a7320;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A6B88u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3A6B90u;
label_3a6b90:
    // 0x3a6b90: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x3a6b90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3a6b94: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x3a6b94u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3a6b98: 0x300400ff  andi        $a0, $zero, 0xFF
    ctx->pc = 0x3a6b98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)255);
    // 0x3a6b9c: 0xa2000005  sb          $zero, 0x5($s0)
    ctx->pc = 0x3a6b9cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a6ba0: 0x4143c  dsll32      $v0, $a0, 16
    ctx->pc = 0x3a6ba0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 16));
    // 0x3a6ba4: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x3a6ba4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a6ba8: 0x3c050093  lui         $a1, 0x93
    ctx->pc = 0x3a6ba8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)147 << 16));
    // 0x3a6bac: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x3a6bacu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a6bb0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3a6bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3a6bb4: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x3a6bb4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a6bb8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3a6bb8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x3a6bbc: 0xa2030006  sb          $v1, 0x6($s0)
    ctx->pc = 0x3a6bbcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6), (uint8_t)GPR_U32(ctx, 3));
    // 0x3a6bc0: 0x24a599e0  addiu       $a1, $a1, -0x6620
    ctx->pc = 0x3a6bc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941152));
    // 0x3a6bc4: 0xa200000b  sb          $zero, 0xB($s0)
    ctx->pc = 0x3a6bc4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a6bc8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3a6bc8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6bcc: 0xa604001a  sh          $a0, 0x1A($s0)
    ctx->pc = 0x3a6bccu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 26), (uint16_t)GPR_U32(ctx, 4));
    // 0x3a6bd0: 0xa202000a  sb          $v0, 0xA($s0)
    ctx->pc = 0x3a6bd0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10), (uint8_t)GPR_U32(ctx, 2));
    // 0x3a6bd4: 0xa2000046  sb          $zero, 0x46($s0)
    ctx->pc = 0x3a6bd4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 70), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a6bd8: 0xa2000047  sb          $zero, 0x47($s0)
    ctx->pc = 0x3a6bd8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 71), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a6bdc: 0xa200005b  sb          $zero, 0x5B($s0)
    ctx->pc = 0x3a6bdcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 91), (uint8_t)GPR_U32(ctx, 0));
label_3a6be0:
    // 0x3a6be0: 0xa0a00000  sb          $zero, 0x0($a1)
    ctx->pc = 0x3a6be0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a6be4: 0xa0a00001  sb          $zero, 0x1($a1)
    ctx->pc = 0x3a6be4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a6be8: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x3a6be8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x3a6bec: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x3a6becu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x3a6bf0: 0x2cc20088  sltiu       $v0, $a2, 0x88
    ctx->pc = 0x3a6bf0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)136) ? 1 : 0);
    // 0x3a6bf4: 0xa0a00000  sb          $zero, 0x0($a1)
    ctx->pc = 0x3a6bf4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a6bf8: 0xa0a00001  sb          $zero, 0x1($a1)
    ctx->pc = 0x3a6bf8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a6bfc: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x3a6bfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x3a6c00: 0xa0a00000  sb          $zero, 0x0($a1)
    ctx->pc = 0x3a6c00u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a6c04: 0xa0a00001  sb          $zero, 0x1($a1)
    ctx->pc = 0x3a6c04u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a6c08: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x3a6c08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x3a6c0c: 0xa0a00000  sb          $zero, 0x0($a1)
    ctx->pc = 0x3a6c0cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a6c10: 0xa0a00001  sb          $zero, 0x1($a1)
    ctx->pc = 0x3a6c10u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a6c14: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x3A6C14u;
    {
        const bool branch_taken_0x3a6c14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A6C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6C14u;
        // 0x3a6c18: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6c14) {
            ctx->pc = 0x3A6BE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a6be0;
        }
    }
    ctx->pc = 0x3A6C1Cu;
    // 0x3a6c1c: 0x2cc10090  sltiu       $at, $a2, 0x90
    ctx->pc = 0x3a6c1cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)144) ? 1 : 0);
    // 0x3a6c20: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x3A6C20u;
    {
        const bool branch_taken_0x3a6c20 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a6c20) {
            ctx->pc = 0x3A6C48u;
            goto label_3a6c48;
        }
    }
    ctx->pc = 0x3A6C28u;
label_3a6c28:
    // 0x3a6c28: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3a6c28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x3a6c2c: 0xa0a00000  sb          $zero, 0x0($a1)
    ctx->pc = 0x3a6c2cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a6c30: 0x2cc20090  sltiu       $v0, $a2, 0x90
    ctx->pc = 0x3a6c30u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)144) ? 1 : 0);
    // 0x3a6c34: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3a6c34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3a6c38: 0x0  nop
    ctx->pc = 0x3a6c38u;
    // NOP
    // 0x3a6c3c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3A6C3Cu;
    {
        const bool branch_taken_0x3a6c3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a6c3c) {
            ctx->pc = 0x3A6C28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a6c28;
        }
    }
    ctx->pc = 0x3A6C44u;
    // 0x3a6c44: 0x0  nop
    ctx->pc = 0x3a6c44u;
    // NOP
label_3a6c48:
    // 0x3a6c48: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x3a6c48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x3a6c4c: 0x24639a70  addiu       $v1, $v1, -0x6590
    ctx->pc = 0x3a6c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941296));
    // 0x3a6c50: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3a6c50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6c54: 0x0  nop
    ctx->pc = 0x3a6c54u;
    // NOP
label_3a6c58:
    // 0x3a6c58: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x3a6c58u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a6c5c: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x3a6c5cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a6c60: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x3a6c60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x3a6c64: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x3a6c64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x3a6c68: 0x2c820328  sltiu       $v0, $a0, 0x328
    ctx->pc = 0x3a6c68u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)808) ? 1 : 0);
    // 0x3a6c6c: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x3a6c6cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a6c70: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x3a6c70u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a6c74: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x3a6c74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x3a6c78: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x3a6c78u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a6c7c: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x3a6c7cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a6c80: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x3a6c80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x3a6c84: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x3a6c84u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a6c88: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x3a6c88u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a6c8c: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x3A6C8Cu;
    {
        const bool branch_taken_0x3a6c8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A6C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6C8Cu;
        // 0x3a6c90: 0x24630002  addiu       $v1, $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6c8c) {
            ctx->pc = 0x3A6C58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a6c58;
        }
    }
    ctx->pc = 0x3A6C94u;
    // 0x3a6c94: 0x2c810330  sltiu       $at, $a0, 0x330
    ctx->pc = 0x3a6c94u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)816) ? 1 : 0);
    // 0x3a6c98: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x3A6C98u;
    {
        const bool branch_taken_0x3a6c98 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a6c98) {
            ctx->pc = 0x3A6CC0u;
            goto label_3a6cc0;
        }
    }
    ctx->pc = 0x3A6CA0u;
label_3a6ca0:
    // 0x3a6ca0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3a6ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3a6ca4: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x3a6ca4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a6ca8: 0x2c820330  sltiu       $v0, $a0, 0x330
    ctx->pc = 0x3a6ca8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)816) ? 1 : 0);
    // 0x3a6cac: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3a6cacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3a6cb0: 0x0  nop
    ctx->pc = 0x3a6cb0u;
    // NOP
    // 0x3a6cb4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3A6CB4u;
    {
        const bool branch_taken_0x3a6cb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a6cb4) {
            ctx->pc = 0x3A6CA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a6ca0;
        }
    }
    ctx->pc = 0x3A6CBCu;
    // 0x3a6cbc: 0x0  nop
    ctx->pc = 0x3a6cbcu;
    // NOP
label_3a6cc0:
    // 0x3a6cc0: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x3a6cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x3a6cc4: 0x24639da0  addiu       $v1, $v1, -0x6260
    ctx->pc = 0x3a6cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942112));
    // 0x3a6cc8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3a6cc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6ccc: 0x0  nop
    ctx->pc = 0x3a6cccu;
    // NOP
label_3a6cd0:
    // 0x3a6cd0: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x3a6cd0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a6cd4: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x3a6cd4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a6cd8: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x3a6cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x3a6cdc: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x3a6cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x3a6ce0: 0x2c825ea8  sltiu       $v0, $a0, 0x5EA8
    ctx->pc = 0x3a6ce0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)24232) ? 1 : 0);
    // 0x3a6ce4: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x3a6ce4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a6ce8: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x3a6ce8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a6cec: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x3a6cecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x3a6cf0: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x3a6cf0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a6cf4: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x3a6cf4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a6cf8: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x3a6cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x3a6cfc: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x3a6cfcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a6d00: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x3a6d00u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a6d04: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x3A6D04u;
    {
        const bool branch_taken_0x3a6d04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A6D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6D04u;
        // 0x3a6d08: 0x24630002  addiu       $v1, $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6d04) {
            ctx->pc = 0x3A6CD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a6cd0;
        }
    }
    ctx->pc = 0x3A6D0Cu;
    // 0x3a6d0c: 0x2c815eb0  sltiu       $at, $a0, 0x5EB0
    ctx->pc = 0x3a6d0cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)24240) ? 1 : 0);
    // 0x3a6d10: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x3A6D10u;
    {
        const bool branch_taken_0x3a6d10 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a6d10) {
            ctx->pc = 0x3A6D38u;
            goto label_3a6d38;
        }
    }
    ctx->pc = 0x3A6D18u;
label_3a6d18:
    // 0x3a6d18: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3a6d18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3a6d1c: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x3a6d1cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a6d20: 0x2c825eb0  sltiu       $v0, $a0, 0x5EB0
    ctx->pc = 0x3a6d20u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)24240) ? 1 : 0);
    // 0x3a6d24: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3a6d24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3a6d28: 0x0  nop
    ctx->pc = 0x3a6d28u;
    // NOP
    // 0x3a6d2c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3A6D2Cu;
    {
        const bool branch_taken_0x3a6d2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a6d2c) {
            ctx->pc = 0x3A6D18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a6d18;
        }
    }
    ctx->pc = 0x3A6D34u;
    // 0x3a6d34: 0x0  nop
    ctx->pc = 0x3a6d34u;
    // NOP
label_3a6d38:
    // 0x3a6d38: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3a6d38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3a6d3c: 0x8c27cebc  lw          $a3, -0x3144($at)
    ctx->pc = 0x3a6d3cu;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x3a6d40: 0x3c02fdff  lui         $v0, 0xFDFF
    ctx->pc = 0x3a6d40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65023 << 16));
    // 0x3a6d44: 0x344fffff  ori         $t7, $v0, 0xFFFF
    ctx->pc = 0x3a6d44u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3a6d48: 0x3c054000  lui         $a1, 0x4000
    ctx->pc = 0x3a6d48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
    // 0x3a6d4c: 0x3c02bfff  lui         $v0, 0xBFFF
    ctx->pc = 0x3a6d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49151 << 16));
    // 0x3a6d50: 0x3c03eff0  lui         $v1, 0xEFF0
    ctx->pc = 0x3a6d50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61424 << 16));
    // 0x3a6d54: 0x344dffff  ori         $t5, $v0, 0xFFFF
    ctx->pc = 0x3a6d54u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3a6d58: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3a6d58u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6d5c: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x3a6d5cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3a6d60: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3a6d60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3a6d64: 0x34e21000  ori         $v0, $a3, 0x1000
    ctx->pc = 0x3a6d64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)4096);
    // 0x3a6d68: 0x8c26ceb8  lw          $a2, -0x3148($at)
    ctx->pc = 0x3a6d68u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x81CEB8u));
    // 0x3a6d6c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3a6d6cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6d70: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3a6d70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3a6d74: 0xc52825  or          $a1, $a2, $a1
    ctx->pc = 0x3a6d74u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x3a6d78: 0x8c24cec4  lw          $a0, -0x313C($at)
    ctx->pc = 0x3a6d78u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x81CEC4u));
    // 0x3a6d7c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3a6d7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6d80: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3a6d80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3a6d84: 0x8c2ccec8  lw          $t4, -0x3138($at)
    ctx->pc = 0x3a6d84u;
    SET_GPR_S32(ctx, 12, (int32_t)FAST_READ32(0x81CEC8u));
    // 0x3a6d88: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3a6d88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3a6d8c: 0x8c2bcecc  lw          $t3, -0x3134($at)
    ctx->pc = 0x3a6d8cu;
    SET_GPR_S32(ctx, 11, (int32_t)FAST_READ32(0x81CECCu));
    // 0x3a6d90: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3a6d90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3a6d94: 0x8c2aced0  lw          $t2, -0x3130($at)
    ctx->pc = 0x3a6d94u;
    SET_GPR_S32(ctx, 10, (int32_t)FAST_READ32(0x81CED0u));
    // 0x3a6d98: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3a6d98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3a6d9c: 0xac22cebc  sw          $v0, -0x3144($at)
    ctx->pc = 0x3a6d9cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x81CEBCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEBCu, _value); } while (0);
    // 0x3a6da0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3a6da0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3a6da4: 0x831025  or          $v0, $a0, $v1
    ctx->pc = 0x3a6da4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3a6da8: 0xac25ceb8  sw          $a1, -0x3148($at)
    ctx->pc = 0x3a6da8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x81CEB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEB8u, _value); } while (0);
    // 0x3a6dac: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3a6dacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3a6db0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3a6db0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3a6db4: 0x2484cbe0  addiu       $a0, $a0, -0x3420
    ctx->pc = 0x3a6db4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    // 0x3a6db8: 0xac22cec4  sw          $v0, -0x313C($at)
    ctx->pc = 0x3a6db8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x81CEC4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEC4u, _value); } while (0);
    // 0x3a6dbc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3a6dbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a6dc0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3a6dc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3a6dc4: 0x8c38cebc  lw          $t8, -0x3144($at)
    ctx->pc = 0x3a6dc4u;
    SET_GPR_S32(ctx, 24, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x3a6dc8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3a6dc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3a6dcc: 0x37180800  ori         $t8, $t8, 0x800
    ctx->pc = 0x3a6dccu;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) | (uint64_t)(uint16_t)2048);
    // 0x3a6dd0: 0x8c2ecec4  lw          $t6, -0x313C($at)
    ctx->pc = 0x3a6dd0u;
    SET_GPR_S32(ctx, 14, (int32_t)FAST_READ32(0x81CEC4u));
    // 0x3a6dd4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3a6dd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3a6dd8: 0x1cd6824  and         $t5, $t6, $t5
    ctx->pc = 0x3a6dd8u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 14) & GPR_U64(ctx, 13));
    // 0x3a6ddc: 0x8c23ced8  lw          $v1, -0x3128($at)
    ctx->pc = 0x3a6ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954712)));
    // 0x3a6de0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3a6de0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3a6de4: 0x8c22cedc  lw          $v0, -0x3124($at)
    ctx->pc = 0x3a6de4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x81CEDCu));
    // 0x3a6de8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3a6de8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3a6dec: 0xac38cebc  sw          $t8, -0x3144($at)
    ctx->pc = 0x3a6decu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 24)); ps2TraceGuestWrite(rdram, 0x81CEBCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEBCu, _value); } while (0);
    // 0x3a6df0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3a6df0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3a6df4: 0xac2dcec4  sw          $t5, -0x313C($at)
    ctx->pc = 0x3a6df4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 13)); ps2TraceGuestWrite(rdram, 0x81CEC4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEC4u, _value); } while (0);
    // 0x3a6df8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3a6df8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3a6dfc: 0x8c2ecebc  lw          $t6, -0x3144($at)
    ctx->pc = 0x3a6dfcu;
    SET_GPR_S32(ctx, 14, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x3a6e00: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3a6e00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3a6e04: 0x1cf7024  and         $t6, $t6, $t7
    ctx->pc = 0x3a6e04u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & GPR_U64(ctx, 15));
    // 0x3a6e08: 0x8c2dcec4  lw          $t5, -0x313C($at)
    ctx->pc = 0x3a6e08u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954692)));
    // 0x3a6e0c: 0x1ac6025  or          $t4, $t5, $t4
    ctx->pc = 0x3a6e0cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 13) | GPR_U64(ctx, 12));
    // 0x3a6e10: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3a6e10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3a6e14: 0x16c5825  or          $t3, $t3, $t4
    ctx->pc = 0x3a6e14u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 12));
    // 0x3a6e18: 0xac2ecebc  sw          $t6, -0x3144($at)
    ctx->pc = 0x3a6e18u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 14)); ps2TraceGuestWrite(rdram, 0x81CEBCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEBCu, _value); } while (0);
    // 0x3a6e1c: 0x14b5025  or          $t2, $t2, $t3
    ctx->pc = 0x3a6e1cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 11));
    // 0x3a6e20: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3a6e20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3a6e24: 0x6a1825  or          $v1, $v1, $t2
    ctx->pc = 0x3a6e24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 10));
    // 0x3a6e28: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3a6e28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3a6e2c: 0xc063cd0  jal         func_18F340
    ctx->pc = 0x3A6E2Cu;
    SET_GPR_U32(ctx, 31, 0x3A6E34u);
    ctx->pc = 0x3A6E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6E2Cu;
    // 0x3a6e30: 0xac22cec0  sw          $v0, -0x3140($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954688), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F340u, 0x3A6E2Cu, 0x3A6E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6E34u;
label_3a6e34:
    // 0x3a6e34: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3a6e34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3a6e38: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3a6e38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6e3c: 0xc05ee50  jal         func_17B940
    ctx->pc = 0x3A6E3Cu;
    SET_GPR_U32(ctx, 31, 0x3A6E44u);
    ctx->pc = 0x3A6E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6E3Cu;
    // 0x3a6e40: 0x2484d200  addiu       $a0, $a0, -0x2E00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17B940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17B940u, 0x3A6E3Cu, 0x3A6E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6E44u;
label_3a6e44:
    // 0x3a6e44: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3a6e44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3a6e48: 0x24050400  addiu       $a1, $zero, 0x400
    ctx->pc = 0x3a6e48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x3a6e4c: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3a6e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3a6e50: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3a6e50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a6e54: 0xc05ee20  jal         func_17B880
    ctx->pc = 0x3A6E54u;
    SET_GPR_U32(ctx, 31, 0x3A6E5Cu);
    ctx->pc = 0x3A6E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6E54u;
    // 0x3a6e58: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17B880u, 0x3A6E54u, 0x3A6E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6E5Cu;
label_3a6e5c:
    // 0x3a6e5c: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3a6e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3a6e60: 0xc05ee4c  jal         func_17B930
    ctx->pc = 0x3A6E60u;
    SET_GPR_U32(ctx, 31, 0x3A6E68u);
    ctx->pc = 0x3A6E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6E60u;
    // 0x3a6e64: 0x2484d200  addiu       $a0, $a0, -0x2E00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17B930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17B930u, 0x3A6E60u, 0x3A6E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6E68u;
label_3a6e68:
    // 0x3a6e68: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3a6e68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3a6e6c: 0x3c02ffbf  lui         $v0, 0xFFBF
    ctx->pc = 0x3a6e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65471 << 16));
    // 0x3a6e70: 0x8c26ceb8  lw          $a2, -0x3148($at)
    ctx->pc = 0x3a6e70u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x81CEB8u));
    // 0x3a6e74: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x3a6e74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x3a6e78: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x3a6e78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x3a6e7c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3a6e7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3a6e80: 0x2484fe40  addiu       $a0, $a0, -0x1C0
    ctx->pc = 0x3a6e80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    // 0x3a6e84: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x3a6e84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x3a6e88: 0xc31825  or          $v1, $a2, $v1
    ctx->pc = 0x3a6e88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x3a6e8c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3a6e8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3a6e90: 0xac23ceb8  sw          $v1, -0x3148($at)
    ctx->pc = 0x3a6e90u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x81CEB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEB8u, _value); } while (0);
    // 0x3a6e94: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3a6e94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3a6e98: 0x8c23ceb8  lw          $v1, -0x3148($at)
    ctx->pc = 0x3a6e98u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEB8u));
    // 0x3a6e9c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3a6e9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3a6ea0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3a6ea0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3a6ea4: 0xc04ca38  jal         func_1328E0
    ctx->pc = 0x3A6EA4u;
    SET_GPR_U32(ctx, 31, 0x3A6EACu);
    ctx->pc = 0x3A6EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6EA4u;
    // 0x3a6ea8: 0xac22ceb8  sw          $v0, -0x3148($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954680), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1328E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1328E0u, 0x3A6EA4u, 0x3A6EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6EACu;
label_3a6eac:
    // 0x3a6eac: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x3a6eacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x3a6eb0: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x3a6eb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x3a6eb4: 0xc04ca14  jal         func_132850
    ctx->pc = 0x3A6EB4u;
    SET_GPR_U32(ctx, 31, 0x3A6EBCu);
    ctx->pc = 0x3A6EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6EB4u;
    // 0x3a6eb8: 0x2484fe40  addiu       $a0, $a0, -0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132850u, 0x3A6EB4u, 0x3A6EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6EBCu;
label_3a6ebc:
    // 0x3a6ebc: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x3a6ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x3a6ec0: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x3a6ec0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x3a6ec4: 0xc04ca38  jal         func_1328E0
    ctx->pc = 0x3A6EC4u;
    SET_GPR_U32(ctx, 31, 0x3A6ECCu);
    ctx->pc = 0x3A6EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6EC4u;
    // 0x3a6ec8: 0x2484fe40  addiu       $a0, $a0, -0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1328E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1328E0u, 0x3A6EC4u, 0x3A6ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6ECCu;
label_3a6ecc:
    // 0x3a6ecc: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x3a6eccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x3a6ed0: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x3a6ed0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x3a6ed4: 0xc04ca14  jal         func_132850
    ctx->pc = 0x3A6ED4u;
    SET_GPR_U32(ctx, 31, 0x3A6EDCu);
    ctx->pc = 0x3A6ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6ED4u;
    // 0x3a6ed8: 0x2484fe40  addiu       $a0, $a0, -0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132850u, 0x3A6ED4u, 0x3A6EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6EDCu;
label_3a6edc:
    // 0x3a6edc: 0xc0eb4d8  jal         func_3AD360
    ctx->pc = 0x3A6EDCu;
    SET_GPR_U32(ctx, 31, 0x3A6EE4u);
    ctx->pc = 0x3A6EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6EDCu;
    // 0x3a6ee0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AD360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AD360u, 0x3A6EDCu, 0x3A6EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6EE4u;
label_3a6ee4:
    // 0x3a6ee4: 0x278485b0  addiu       $a0, $gp, -0x7A50
    ctx->pc = 0x3a6ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    // 0x3a6ee8: 0xc054d98  jal         func_153660
    ctx->pc = 0x3A6EE8u;
    SET_GPR_U32(ctx, 31, 0x3A6EF0u);
    ctx->pc = 0x3A6EECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6EE8u;
    // 0x3a6eec: 0x3c0501b2  lui         $a1, 0x1B2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)434 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x153660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153660u, 0x3A6EE8u, 0x3A6EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6EF0u;
label_3a6ef0:
    // 0x3a6ef0: 0xc0550b0  jal         func_1542C0
    ctx->pc = 0x3A6EF0u;
    SET_GPR_U32(ctx, 31, 0x3A6EF8u);
    ctx->pc = 0x3A6EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6EF0u;
    // 0x3a6ef4: 0x278485b0  addiu       $a0, $gp, -0x7A50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1542C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1542C0u, 0x3A6EF0u, 0x3A6EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6EF8u;
label_3a6ef8:
    // 0x3a6ef8: 0x10000171  b           . + 4 + (0x171 << 2)
    ctx->pc = 0x3A6EF8u;
    {
        const bool branch_taken_0x3a6ef8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a6ef8) {
            ctx->pc = 0x3A74C0u;
            goto label_3a74c0;
        }
    }
    ctx->pc = 0x3A6F00u;
label_3a6f00:
    // 0x3a6f00: 0xc0554f4  jal         func_1553D0
    ctx->pc = 0x3A6F00u;
    SET_GPR_U32(ctx, 31, 0x3A6F08u);
    ctx->pc = 0x3A6F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6F00u;
    // 0x3a6f04: 0x278485b0  addiu       $a0, $gp, -0x7A50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1553D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1553D0u, 0x3A6F00u, 0x3A6F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6F08u;
label_3a6f08:
    // 0x3a6f08: 0x1440016d  bnez        $v0, . + 4 + (0x16D << 2)
    ctx->pc = 0x3A6F08u;
    {
        const bool branch_taken_0x3a6f08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A6F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6F08u;
        // 0x3a6f0c: 0x278485b0  addiu       $a0, $gp, -0x7A50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6f08) {
            ctx->pc = 0x3A74C0u;
            goto label_3a74c0;
        }
    }
    ctx->pc = 0x3A6F10u;
    // 0x3a6f10: 0xc05551c  jal         func_155470
    ctx->pc = 0x3A6F10u;
    SET_GPR_U32(ctx, 31, 0x3A6F18u);
    ctx->pc = 0x155470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155470u, 0x3A6F10u, 0x3A6F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6F18u;
label_3a6f18:
    // 0x3a6f18: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3a6f18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a6f1c: 0x10430168  beq         $v0, $v1, . + 4 + (0x168 << 2)
    ctx->pc = 0x3A6F1Cu;
    {
        const bool branch_taken_0x3a6f1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x3a6f1c) {
            ctx->pc = 0x3A74C0u;
            goto label_3a74c0;
        }
    }
    ctx->pc = 0x3A6F24u;
    // 0x3a6f24: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x3a6f24u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3a6f28: 0x3c040093  lui         $a0, 0x93
    ctx->pc = 0x3a6f28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)147 << 16));
    // 0x3a6f2c: 0x2484fee0  addiu       $a0, $a0, -0x120
    ctx->pc = 0x3a6f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967008));
    // 0x3a6f30: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3a6f30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3a6f34: 0xc0f0140  jal         func_3C0500
    ctx->pc = 0x3A6F34u;
    SET_GPR_U32(ctx, 31, 0x3A6F3Cu);
    ctx->pc = 0x3A6F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6F34u;
    // 0x3a6f38: 0xa2020000  sb          $v0, 0x0($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C0500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C0500u, 0x3A6F34u, 0x3A6F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6F3Cu;
label_3a6f3c:
    // 0x3a6f3c: 0xc0eb6ac  jal         func_3ADAB0
    ctx->pc = 0x3A6F3Cu;
    SET_GPR_U32(ctx, 31, 0x3A6F44u);
    ctx->pc = 0x3A6F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6F3Cu;
    // 0x3a6f40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3ADAB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3ADAB0u, 0x3A6F3Cu, 0x3A6F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6F44u;
label_3a6f44:
    // 0x3a6f44: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x3a6f44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
    // 0x3a6f48: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x3a6f48u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3a6f4c: 0xc052ec4  jal         func_14BB10
    ctx->pc = 0x3A6F4Cu;
    SET_GPR_U32(ctx, 31, 0x3A6F54u);
    ctx->pc = 0x3A6F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6F4Cu;
    // 0x3a6f50: 0x24842620  addiu       $a0, $a0, 0x2620 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14BB10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14BB10u, 0x3A6F4Cu, 0x3A6F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6F54u;
label_3a6f54:
    // 0x3a6f54: 0xc0554f4  jal         func_1553D0
    ctx->pc = 0x3A6F54u;
    SET_GPR_U32(ctx, 31, 0x3A6F5Cu);
    ctx->pc = 0x3A6F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6F54u;
    // 0x3a6f58: 0x278485b0  addiu       $a0, $gp, -0x7A50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1553D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1553D0u, 0x3A6F54u, 0x3A6F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6F5Cu;
label_3a6f5c:
    // 0x3a6f5c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3A6F5Cu;
    {
        const bool branch_taken_0x3a6f5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a6f5c) {
            ctx->pc = 0x3A6F88u;
            goto label_3a6f88;
        }
    }
    ctx->pc = 0x3A6F64u;
    // 0x3a6f64: 0x0  nop
    ctx->pc = 0x3a6f64u;
    // NOP
label_3a6f68:
    // 0x3a6f68: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x3a6f68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x3a6f6c: 0x2484fca0  addiu       $a0, $a0, -0x360
    ctx->pc = 0x3a6f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966432));
    // 0x3a6f70: 0xc04c918  jal         func_132460
    ctx->pc = 0x3A6F70u;
    SET_GPR_U32(ctx, 31, 0x3A6F78u);
    ctx->pc = 0x3A6F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6F70u;
    // 0x3a6f74: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132460u, 0x3A6F70u, 0x3A6F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6F78u;
label_3a6f78:
    // 0x3a6f78: 0xc0554f4  jal         func_1553D0
    ctx->pc = 0x3A6F78u;
    SET_GPR_U32(ctx, 31, 0x3A6F80u);
    ctx->pc = 0x3A6F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6F78u;
    // 0x3a6f7c: 0x278485b0  addiu       $a0, $gp, -0x7A50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1553D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1553D0u, 0x3A6F78u, 0x3A6F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6F80u;
label_3a6f80:
    // 0x3a6f80: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3A6F80u;
    {
        const bool branch_taken_0x3a6f80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a6f80) {
            ctx->pc = 0x3A6F68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a6f68;
        }
    }
    ctx->pc = 0x3A6F88u;
label_3a6f88:
    // 0x3a6f88: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3a6f88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3a6f8c: 0x8c23ceb8  lw          $v1, -0x3148($at)
    ctx->pc = 0x3a6f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEB8u));
    // 0x3a6f90: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x3a6f90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x3a6f94: 0x3c040093  lui         $a0, 0x93
    ctx->pc = 0x3a6f94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)147 << 16));
    // 0x3a6f98: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3a6f98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6f9c: 0x2484fee0  addiu       $a0, $a0, -0x120
    ctx->pc = 0x3a6f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967008));
    // 0x3a6fa0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3a6fa0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6fa4: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x3a6fa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3a6fa8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3a6fa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3a6fac: 0xc0f0154  jal         func_3C0550
    ctx->pc = 0x3A6FACu;
    SET_GPR_U32(ctx, 31, 0x3A6FB4u);
    ctx->pc = 0x3A6FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6FACu;
    // 0x3a6fb0: 0xac22ceb8  sw          $v0, -0x3148($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954680), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C0550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C0550u, 0x3A6FACu, 0x3A6FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6FB4u;
label_3a6fb4:
    // 0x3a6fb4: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x3a6fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x3a6fb8: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x3a6fb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x3a6fbc: 0x2484fe40  addiu       $a0, $a0, -0x1C0
    ctx->pc = 0x3a6fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    // 0x3a6fc0: 0xc04cd28  jal         func_1334A0
    ctx->pc = 0x3A6FC0u;
    SET_GPR_U32(ctx, 31, 0x3A6FC8u);
    ctx->pc = 0x3A6FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6FC0u;
    // 0x3a6fc4: 0x2406020e  addiu       $a2, $zero, 0x20E (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 526));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1334A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1334A0u, 0x3A6FC0u, 0x3A6FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6FC8u;
label_3a6fc8:
    // 0x3a6fc8: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x3a6fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x3a6fcc: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x3a6fccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x3a6fd0: 0x24846cc0  addiu       $a0, $a0, 0x6CC0
    ctx->pc = 0x3a6fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27840));
    // 0x3a6fd4: 0xc0b44cc  jal         func_2D1330
    ctx->pc = 0x3A6FD4u;
    SET_GPR_U32(ctx, 31, 0x3A6FDCu);
    ctx->pc = 0x3A6FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6FD4u;
    // 0x3a6fd8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D1330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1330u, 0x3A6FD4u, 0x3A6FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6FDCu;
label_3a6fdc:
    // 0x3a6fdc: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x3a6fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x3a6fe0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3a6fe0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a6fe4: 0xc0b44cc  jal         func_2D1330
    ctx->pc = 0x3A6FE4u;
    SET_GPR_U32(ctx, 31, 0x3A6FECu);
    ctx->pc = 0x3A6FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6FE4u;
    // 0x3a6fe8: 0x24846ee0  addiu       $a0, $a0, 0x6EE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D1330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1330u, 0x3A6FE4u, 0x3A6FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6FECu;
label_3a6fec:
    // 0x3a6fec: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3a6fecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3a6ff0: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3a6ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3a6ff4: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x3a6ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x3a6ff8: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3a6ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3a6ffc: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x3a6ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x3a7000: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3a7000u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a7004: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x3a7004u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x3a7008: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3a7008u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a700c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3a700cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a7010: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3a7010u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a7014: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3a7014u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a7018: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3A7018u;
    SET_GPR_U32(ctx, 31, 0x3A7020u);
    ctx->pc = 0x3A701Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A7018u;
    // 0x3a701c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3A7018u, 0x3A7020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A7020u;
label_3a7020:
    // 0x3a7020: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3a7020u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3a7024: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x3a7024u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x3a7028: 0x2484cbe0  addiu       $a0, $a0, -0x3420
    ctx->pc = 0x3a7028u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    // 0x3a702c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3a702cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a7030: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3a7030u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a7034: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3a7034u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a7038: 0xc063c70  jal         func_18F1C0
    ctx->pc = 0x3A7038u;
    SET_GPR_U32(ctx, 31, 0x3A7040u);
    ctx->pc = 0x3A703Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A7038u;
    // 0x3a703c: 0x2409ffff  addiu       $t1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F1C0u, 0x3A7038u, 0x3A7040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A7040u;
label_3a7040:
    // 0x3a7040: 0x1000011f  b           . + 4 + (0x11F << 2)
    ctx->pc = 0x3A7040u;
    {
        const bool branch_taken_0x3a7040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a7040) {
            ctx->pc = 0x3A74C0u;
            goto label_3a74c0;
        }
    }
    ctx->pc = 0x3A7048u;
label_3a7048:
    // 0x3a7048: 0x86020016  lh          $v0, 0x16($s0)
    ctx->pc = 0x3a7048u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
    // 0x3a704c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A704Cu;
    {
        const bool branch_taken_0x3a704c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a704c) {
            ctx->pc = 0x3A7060u;
            goto label_3a7060;
        }
    }
    ctx->pc = 0x3A7054u;
    // 0x3a7054: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3a7054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3a7058: 0xa6020016  sh          $v0, 0x16($s0)
    ctx->pc = 0x3a7058u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 22), (uint16_t)GPR_U32(ctx, 2));
    // 0x3a705c: 0x0  nop
    ctx->pc = 0x3a705cu;
    // NOP
label_3a7060:
    // 0x3a7060: 0x3c01006c  lui         $at, 0x6C
    ctx->pc = 0x3a7060u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)108 << 16));
    // 0x3a7064: 0x90228c11  lbu         $v0, -0x73EF($at)
    ctx->pc = 0x3a7064u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x6B8C11u));
    // 0x3a7068: 0x1440003b  bnez        $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x3A7068u;
    {
        const bool branch_taken_0x3a7068 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a7068) {
            ctx->pc = 0x3A7158u;
            goto label_3a7158;
        }
    }
    ctx->pc = 0x3A7070u;
    // 0x3a7070: 0x92020047  lbu         $v0, 0x47($s0)
    ctx->pc = 0x3a7070u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 71)));
    // 0x3a7074: 0x14400038  bnez        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x3A7074u;
    {
        const bool branch_taken_0x3a7074 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a7074) {
            ctx->pc = 0x3A7158u;
            goto label_3a7158;
        }
    }
    ctx->pc = 0x3A707Cu;
    // 0x3a707c: 0x9205000b  lbu         $a1, 0xB($s0)
    ctx->pc = 0x3a707cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11)));
    // 0x3a7080: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x3a7080u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x3a7084: 0x24848c10  addiu       $a0, $a0, -0x73F0
    ctx->pc = 0x3a7084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937616));
    // 0x3a7088: 0xc052754  jal         func_149D50
    ctx->pc = 0x3A7088u;
    SET_GPR_U32(ctx, 31, 0x3A7090u);
    ctx->pc = 0x3A708Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A7088u;
    // 0x3a708c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149D50u, 0x3A7088u, 0x3A7090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A7090u;
label_3a7090:
    // 0x3a7090: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x3a7090u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x3a7094: 0x10430016  beq         $v0, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x3A7094u;
    {
        const bool branch_taken_0x3a7094 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x3A7098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7094u;
        // 0x3a7098: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7094) {
            ctx->pc = 0x3A70F0u;
            goto label_3a70f0;
        }
    }
    ctx->pc = 0x3A709Cu;
    // 0x3a709c: 0x10450014  beq         $v0, $a1, . + 4 + (0x14 << 2)
    ctx->pc = 0x3A709Cu;
    {
        const bool branch_taken_0x3a709c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x3a709c) {
            ctx->pc = 0x3A70F0u;
            goto label_3a70f0;
        }
    }
    ctx->pc = 0x3A70A4u;
    // 0x3a70a4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3A70A4u;
    {
        const bool branch_taken_0x3a70a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A70A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A70A4u;
        // 0x3a70a8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a70a4) {
            ctx->pc = 0x3A70C0u;
            goto label_3a70c0;
        }
    }
    ctx->pc = 0x3A70ACu;
    // 0x3a70ac: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A70ACu;
    {
        const bool branch_taken_0x3a70ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x3a70ac) {
            ctx->pc = 0x3A70C0u;
            goto label_3a70c0;
        }
    }
    ctx->pc = 0x3A70B4u;
    // 0x3a70b4: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x3A70B4u;
    {
        const bool branch_taken_0x3a70b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a70b4) {
            ctx->pc = 0x3A7120u;
            goto label_3a7120;
        }
    }
    ctx->pc = 0x3A70BCu;
    // 0x3a70bc: 0x0  nop
    ctx->pc = 0x3a70bcu;
    // NOP
label_3a70c0:
    // 0x3a70c0: 0x9204000b  lbu         $a0, 0xB($s0)
    ctx->pc = 0x3a70c0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11)));
    // 0x3a70c4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3a70c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x3a70c8: 0x24428e98  addiu       $v0, $v0, -0x7168
    ctx->pc = 0x3a70c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938264));
    // 0x3a70cc: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x3a70ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x3a70d0: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x3a70d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3a70d4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3a70d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3a70d8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3a70d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3a70dc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3a70dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3a70e0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3a70e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3a70e4: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x3A70E4u;
    {
        const bool branch_taken_0x3a70e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A70E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A70E4u;
        // 0x3a70e8: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a70e4) {
            ctx->pc = 0x3A7148u;
            goto label_3a7148;
        }
    }
    ctx->pc = 0x3A70ECu;
    // 0x3a70ec: 0x0  nop
    ctx->pc = 0x3a70ecu;
    // NOP
label_3a70f0:
    // 0x3a70f0: 0x9204000b  lbu         $a0, 0xB($s0)
    ctx->pc = 0x3a70f0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11)));
    // 0x3a70f4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3a70f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x3a70f8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3a70f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a70fc: 0x24428e98  addiu       $v0, $v0, -0x7168
    ctx->pc = 0x3a70fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938264));
    // 0x3a7100: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x3a7100u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x3a7104: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x3a7104u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3a7108: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3a7108u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3a710c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3a710cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3a7110: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3a7110u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3a7114: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3a7114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3a7118: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3A7118u;
    {
        const bool branch_taken_0x3a7118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A711Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7118u;
        // 0x3a711c: 0xac450000  sw          $a1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7118) {
            ctx->pc = 0x3A7148u;
            goto label_3a7148;
        }
    }
    ctx->pc = 0x3A7120u;
label_3a7120:
    // 0x3a7120: 0x9204000b  lbu         $a0, 0xB($s0)
    ctx->pc = 0x3a7120u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11)));
    // 0x3a7124: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3a7124u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x3a7128: 0x24428e98  addiu       $v0, $v0, -0x7168
    ctx->pc = 0x3a7128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938264));
    // 0x3a712c: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x3a712cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x3a7130: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x3a7130u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3a7134: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3a7134u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3a7138: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3a7138u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3a713c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3a713cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3a7140: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3a7140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3a7144: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x3a7144u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_3a7148:
    // 0x3a7148: 0x9202000b  lbu         $v0, 0xB($s0)
    ctx->pc = 0x3a7148u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11)));
    // 0x3a714c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x3a714cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x3a7150: 0xa202000b  sb          $v0, 0xB($s0)
    ctx->pc = 0x3a7150u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11), (uint8_t)GPR_U32(ctx, 2));
    // 0x3a7154: 0x0  nop
    ctx->pc = 0x3a7154u;
    // NOP
label_3a7158:
    // 0x3a7158: 0x9202000a  lbu         $v0, 0xA($s0)
    ctx->pc = 0x3a7158u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x3a715c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3A715Cu;
    {
        const bool branch_taken_0x3a715c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A7160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A715Cu;
        // 0x3a7160: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a715c) {
            ctx->pc = 0x3A7178u;
            goto label_3a7178;
        }
    }
    ctx->pc = 0x3A7164u;
    // 0x3a7164: 0xc0e9d38  jal         func_3A74E0
    ctx->pc = 0x3A7164u;
    SET_GPR_U32(ctx, 31, 0x3A716Cu);
    ctx->pc = 0x3A74E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A74E0u, 0x3A7164u, 0x3A716Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A716Cu;
label_3a716c:
    // 0x3a716c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3A716Cu;
    {
        const bool branch_taken_0x3a716c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a716c) {
            ctx->pc = 0x3A7180u;
            goto label_3a7180;
        }
    }
    ctx->pc = 0x3A7174u;
    // 0x3a7174: 0x0  nop
    ctx->pc = 0x3a7174u;
    // NOP
label_3a7178:
    // 0x3a7178: 0xc0ea47c  jal         func_3A91F0
    ctx->pc = 0x3A7178u;
    SET_GPR_U32(ctx, 31, 0x3A7180u);
    ctx->pc = 0x3A717Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A7178u;
    // 0x3a717c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A91F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A91F0u, 0x3A7178u, 0x3A7180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A7180u;
label_3a7180:
    // 0x3a7180: 0xc0eb134  jal         func_3AC4D0
    ctx->pc = 0x3A7180u;
    SET_GPR_U32(ctx, 31, 0x3A7188u);
    ctx->pc = 0x3A7184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A7180u;
    // 0x3a7184: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AC4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AC4D0u, 0x3A7180u, 0x3A7188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A7188u;
label_3a7188:
    // 0x3a7188: 0x100000cd  b           . + 4 + (0xCD << 2)
    ctx->pc = 0x3A7188u;
    {
        const bool branch_taken_0x3a7188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a7188) {
            ctx->pc = 0x3A74C0u;
            goto label_3a74c0;
        }
    }
    ctx->pc = 0x3A7190u;
label_3a7190:
    // 0x3a7190: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x3a7190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3a7194: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x3a7194u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3a7198: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3a7198u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3a719c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3a719cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3a71a0: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3a71a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3a71a4: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x3a71a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x3a71a8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3a71a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a71ac: 0x3c020500  lui         $v0, 0x500
    ctx->pc = 0x3a71acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1280 << 16));
    // 0x3a71b0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3a71b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a71b4: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x3a71b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x3a71b8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3a71b8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a71bc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3a71bcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a71c0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3a71c0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a71c4: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3A71C4u;
    SET_GPR_U32(ctx, 31, 0x3A71CCu);
    ctx->pc = 0x3A71C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A71C4u;
    // 0x3a71c8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3A71C4u, 0x3A71CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A71CCu;
label_3a71cc:
    // 0x3a71cc: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3a71ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3a71d0: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x3a71d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x3a71d4: 0x2484cbe0  addiu       $a0, $a0, -0x3420
    ctx->pc = 0x3a71d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    // 0x3a71d8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3a71d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a71dc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3a71dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a71e0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3a71e0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a71e4: 0xc063cd0  jal         func_18F340
    ctx->pc = 0x3A71E4u;
    SET_GPR_U32(ctx, 31, 0x3A71ECu);
    ctx->pc = 0x3A71E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A71E4u;
    // 0x3a71e8: 0x2409ffff  addiu       $t1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F340u, 0x3A71E4u, 0x3A71ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A71ECu;
label_3a71ec:
    // 0x3a71ec: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x3a71ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x3a71f0: 0xc0957a0  jal         func_255E80
    ctx->pc = 0x3A71F0u;
    SET_GPR_U32(ctx, 31, 0x3A71F8u);
    ctx->pc = 0x3A71F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A71F0u;
    // 0x3a71f4: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255E80u, 0x3A71F0u, 0x3A71F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A71F8u;
label_3a71f8:
    // 0x3a71f8: 0xc0eb134  jal         func_3AC4D0
    ctx->pc = 0x3A71F8u;
    SET_GPR_U32(ctx, 31, 0x3A7200u);
    ctx->pc = 0x3A71FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A71F8u;
    // 0x3a71fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AC4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AC4D0u, 0x3A71F8u, 0x3A7200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A7200u;
label_3a7200:
    // 0x3a7200: 0x100000af  b           . + 4 + (0xAF << 2)
    ctx->pc = 0x3A7200u;
    {
        const bool branch_taken_0x3a7200 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a7200) {
            ctx->pc = 0x3A74C0u;
            goto label_3a74c0;
        }
    }
    ctx->pc = 0x3A7208u;
label_3a7208:
    // 0x3a7208: 0xc0eb134  jal         func_3AC4D0
    ctx->pc = 0x3A7208u;
    SET_GPR_U32(ctx, 31, 0x3A7210u);
    ctx->pc = 0x3A720Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A7208u;
    // 0x3a720c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AC4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AC4D0u, 0x3A7208u, 0x3A7210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A7210u;
label_3a7210:
    // 0x3a7210: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3a7210u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3a7214: 0xc063d48  jal         func_18F520
    ctx->pc = 0x3A7214u;
    SET_GPR_U32(ctx, 31, 0x3A721Cu);
    ctx->pc = 0x3A7218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A7214u;
    // 0x3a7218: 0x2484cbe0  addiu       $a0, $a0, -0x3420 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F520u, 0x3A7214u, 0x3A721Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A721Cu;
label_3a721c:
    // 0x3a721c: 0x144000a8  bnez        $v0, . + 4 + (0xA8 << 2)
    ctx->pc = 0x3A721Cu;
    {
        const bool branch_taken_0x3a721c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A7220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A721Cu;
        // 0x3a7220: 0x3c040082  lui         $a0, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a721c) {
            ctx->pc = 0x3A74C0u;
            goto label_3a74c0;
        }
    }
    ctx->pc = 0x3A7224u;
    // 0x3a7224: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3a7224u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3a7228: 0xc04c918  jal         func_132460
    ctx->pc = 0x3A7228u;
    SET_GPR_U32(ctx, 31, 0x3A7230u);
    ctx->pc = 0x3A722Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A7228u;
    // 0x3a722c: 0x2484fca0  addiu       $a0, $a0, -0x360 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132460u, 0x3A7228u, 0x3A7230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A7230u;
label_3a7230:
    // 0x3a7230: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x3a7230u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3a7234: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x3a7234u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x3a7238: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x3a7238u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x3a723c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3a723cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3a7240: 0xc0957a0  jal         func_255E80
    ctx->pc = 0x3A7240u;
    SET_GPR_U32(ctx, 31, 0x3A7248u);
    ctx->pc = 0x3A7244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A7240u;
    // 0x3a7244: 0xa2020000  sb          $v0, 0x0($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255E80u, 0x3A7240u, 0x3A7248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A7248u;
label_3a7248:
    // 0x3a7248: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3a7248u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3a724c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3a724cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a7250: 0xc05ee50  jal         func_17B940
    ctx->pc = 0x3A7250u;
    SET_GPR_U32(ctx, 31, 0x3A7258u);
    ctx->pc = 0x3A7254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A7250u;
    // 0x3a7254: 0x2484d200  addiu       $a0, $a0, -0x2E00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17B940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17B940u, 0x3A7250u, 0x3A7258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A7258u;
label_3a7258:
    // 0x3a7258: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3a7258u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3a725c: 0x24050400  addiu       $a1, $zero, 0x400
    ctx->pc = 0x3a725cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x3a7260: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3a7260u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3a7264: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3a7264u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a7268: 0xc05ee20  jal         func_17B880
    ctx->pc = 0x3A7268u;
    SET_GPR_U32(ctx, 31, 0x3A7270u);
    ctx->pc = 0x3A726Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A7268u;
    // 0x3a726c: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17B880u, 0x3A7268u, 0x3A7270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A7270u;
label_3a7270:
    // 0x3a7270: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3a7270u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3a7274: 0xc05ee4c  jal         func_17B930
    ctx->pc = 0x3A7274u;
    SET_GPR_U32(ctx, 31, 0x3A727Cu);
    ctx->pc = 0x3A7278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A7274u;
    // 0x3a7278: 0x2484d200  addiu       $a0, $a0, -0x2E00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17B930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17B930u, 0x3A7274u, 0x3A727Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A727Cu;
label_3a727c:
    // 0x3a727c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3a727cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3a7280: 0x3c02bfff  lui         $v0, 0xBFFF
    ctx->pc = 0x3a7280u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49151 << 16));
    // 0x3a7284: 0x8c29ceb8  lw          $t1, -0x3148($at)
    ctx->pc = 0x3a7284u;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x81CEB8u));
    // 0x3a7288: 0x3448ffff  ori         $t0, $v0, 0xFFFF
    ctx->pc = 0x3a7288u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3a728c: 0x3c03ff7f  lui         $v1, 0xFF7F
    ctx->pc = 0x3a728cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65407 << 16));
    // 0x3a7290: 0x3c02ffbf  lui         $v0, 0xFFBF
    ctx->pc = 0x3a7290u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65471 << 16));
    // 0x3a7294: 0x3465ffff  ori         $a1, $v1, 0xFFFF
    ctx->pc = 0x3a7294u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x3a7298: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a7298u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a729c: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x3a729cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3a72a0: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x3a72a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x3a72a4: 0x1284024  and         $t0, $t1, $t0
    ctx->pc = 0x3a72a4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) & GPR_U64(ctx, 8));
    // 0x3a72a8: 0x90276d2e  lbu         $a3, 0x6D2E($at)
    ctx->pc = 0x3a72a8u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 27950)));
    // 0x3a72ac: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x3a72acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x3a72b0: 0x34e70003  ori         $a3, $a3, 0x3
    ctx->pc = 0x3a72b0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)3);
    // 0x3a72b4: 0x90266f4e  lbu         $a2, 0x6F4E($at)
    ctx->pc = 0x3a72b4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)FAST_READ8(0x8D6F4Eu));
    // 0x3a72b8: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x3a72b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x3a72bc: 0x34c60003  ori         $a2, $a2, 0x3
    ctx->pc = 0x3a72bcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)3);
    // 0x3a72c0: 0x9022feea  lbu         $v0, -0x116($at)
    ctx->pc = 0x3a72c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x92FEEAu));
    // 0x3a72c4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3a72c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3a72c8: 0x304200fe  andi        $v0, $v0, 0xFE
    ctx->pc = 0x3a72c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)254);
    // 0x3a72cc: 0xac28ceb8  sw          $t0, -0x3148($at)
    ctx->pc = 0x3a72ccu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x81CEB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEB8u, _value); } while (0);
    // 0x3a72d0: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x3a72d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x3a72d4: 0xa0276d2e  sb          $a3, 0x6D2E($at)
    ctx->pc = 0x3a72d4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x8D6D2Eu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x8D6D2Eu, _value); } while (0);
    // 0x3a72d8: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x3a72d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x3a72dc: 0xa0266f4e  sb          $a2, 0x6F4E($at)
    ctx->pc = 0x3a72dcu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x8D6F4Eu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x8D6F4Eu, _value); } while (0);
    // 0x3a72e0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3a72e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3a72e4: 0x8c26ceb8  lw          $a2, -0x3148($at)
    ctx->pc = 0x3a72e4u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x81CEB8u));
    // 0x3a72e8: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x3a72e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x3a72ec: 0xa022feea  sb          $v0, -0x116($at)
    ctx->pc = 0x3a72ecu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x92FEEAu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x92FEEAu, _value); } while (0);
    // 0x3a72f0: 0xc51024  and         $v0, $a2, $a1
    ctx->pc = 0x3a72f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    // 0x3a72f4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3a72f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3a72f8: 0xac22ceb8  sw          $v0, -0x3148($at)
    ctx->pc = 0x3a72f8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x81CEB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEB8u, _value); } while (0);
    // 0x3a72fc: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3a72fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3a7300: 0x8c22ceb8  lw          $v0, -0x3148($at)
    ctx->pc = 0x3a7300u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x81CEB8u));
    // 0x3a7304: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3a7304u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3a7308: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3a7308u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3a730c: 0xc0eb4d8  jal         func_3AD360
    ctx->pc = 0x3A730Cu;
    SET_GPR_U32(ctx, 31, 0x3A7314u);
    ctx->pc = 0x3A7310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A730Cu;
    // 0x3a7310: 0xac22ceb8  sw          $v0, -0x3148($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954680), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AD360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AD360u, 0x3A730Cu, 0x3A7314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A7314u;
label_3a7314:
    // 0x3a7314: 0x1000006a  b           . + 4 + (0x6A << 2)
    ctx->pc = 0x3A7314u;
    {
        const bool branch_taken_0x3a7314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a7314) {
            ctx->pc = 0x3A74C0u;
            goto label_3a74c0;
        }
    }
    ctx->pc = 0x3A731Cu;
    // 0x3a731c: 0x0  nop
    ctx->pc = 0x3a731cu;
    // NOP
label_3a7320:
    // 0x3a7320: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x3a7320u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x3a7324: 0x9022ff2c  lbu         $v0, -0xD4($at)
    ctx->pc = 0x3a7324u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x92FF2Cu));
    // 0x3a7328: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x3a7328u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3a732c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x3a732cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x3a7330: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3a7330u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3a7334: 0x10400062  beqz        $v0, . + 4 + (0x62 << 2)
    ctx->pc = 0x3A7334u;
    {
        const bool branch_taken_0x3a7334 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a7334) {
            ctx->pc = 0x3A74C0u;
            goto label_3a74c0;
        }
    }
    ctx->pc = 0x3A733Cu;
    // 0x3a733c: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x3a733cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a7340: 0x3c02100f  lui         $v0, 0x100F
    ctx->pc = 0x3a7340u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4111 << 16));
    // 0x3a7344: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x3a7344u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a7348: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x3a7348u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3a734c: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x3a734cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a7350: 0x3c02fbff  lui         $v0, 0xFBFF
    ctx->pc = 0x3a7350u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64511 << 16));
    // 0x3a7354: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x3a7354u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a7358: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3a7358u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3a735c: 0x8c2acec4  lw          $t2, -0x313C($at)
    ctx->pc = 0x3a735cu;
    SET_GPR_S32(ctx, 10, (int32_t)FAST_READ32(0x81CEC4u));
    // 0x3a7360: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x3a7360u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x3a7364: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3a7364u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3a7368: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x3a7368u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x3a736c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3a736cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3a7370: 0x1435024  and         $t2, $t2, $v1
    ctx->pc = 0x3a7370u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 3));
    // 0x3a7374: 0x8c29cec8  lw          $t1, -0x3138($at)
    ctx->pc = 0x3a7374u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954696)));
    // 0x3a7378: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3a7378u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3a737c: 0x8c28cecc  lw          $t0, -0x3134($at)
    ctx->pc = 0x3a737cu;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x81CECCu));
    // 0x3a7380: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3a7380u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3a7384: 0x8c27ced0  lw          $a3, -0x3130($at)
    ctx->pc = 0x3a7384u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x81CED0u));
    // 0x3a7388: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3a7388u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3a738c: 0x8c26ced8  lw          $a2, -0x3128($at)
    ctx->pc = 0x3a738cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x81CED8u));
    // 0x3a7390: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3a7390u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3a7394: 0x8c25cedc  lw          $a1, -0x3124($at)
    ctx->pc = 0x3a7394u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x81CEDCu));
    // 0x3a7398: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3a7398u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3a739c: 0x8c23cebc  lw          $v1, -0x3144($at)
    ctx->pc = 0x3a739cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x3a73a0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3a73a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3a73a4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3a73a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3a73a8: 0xac2acec4  sw          $t2, -0x313C($at)
    ctx->pc = 0x3a73a8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954692), GPR_U32(ctx, 10));
    // 0x3a73ac: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3a73acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3a73b0: 0x8c2acec4  lw          $t2, -0x313C($at)
    ctx->pc = 0x3a73b0u;
    SET_GPR_S32(ctx, 10, (int32_t)FAST_READ32(0x81CEC4u));
    // 0x3a73b4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3a73b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3a73b8: 0xac22cebc  sw          $v0, -0x3144($at)
    ctx->pc = 0x3a73b8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x81CEBCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEBCu, _value); } while (0);
    // 0x3a73bc: 0x1491025  or          $v0, $t2, $t1
    ctx->pc = 0x3a73bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) | GPR_U64(ctx, 9));
    // 0x3a73c0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3a73c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3a73c4: 0x1021025  or          $v0, $t0, $v0
    ctx->pc = 0x3a73c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x3a73c8: 0xe21025  or          $v0, $a3, $v0
    ctx->pc = 0x3a73c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x3a73cc: 0xc21025  or          $v0, $a2, $v0
    ctx->pc = 0x3a73ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x3a73d0: 0xa21025  or          $v0, $a1, $v0
    ctx->pc = 0x3a73d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x3a73d4: 0xc0957a0  jal         func_255E80
    ctx->pc = 0x3A73D4u;
    SET_GPR_U32(ctx, 31, 0x3A73DCu);
    ctx->pc = 0x3A73D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A73D4u;
    // 0x3a73d8: 0xac22cec0  sw          $v0, -0x3140($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954688), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255E80u, 0x3A73D4u, 0x3A73DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A73DCu;
label_3a73dc:
    // 0x3a73dc: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x3a73dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x3a73e0: 0xc095128  jal         func_2544A0
    ctx->pc = 0x3A73E0u;
    SET_GPR_U32(ctx, 31, 0x3A73E8u);
    ctx->pc = 0x3A73E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A73E0u;
    // 0x3a73e4: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2544A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2544A0u, 0x3A73E0u, 0x3A73E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A73E8u;
label_3a73e8:
    // 0x3a73e8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3a73e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3a73ec: 0x3c02ffbf  lui         $v0, 0xFFBF
    ctx->pc = 0x3a73ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65471 << 16));
    // 0x3a73f0: 0x8c23ceb8  lw          $v1, -0x3148($at)
    ctx->pc = 0x3a73f0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEB8u));
    // 0x3a73f4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3a73f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3a73f8: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x3a73f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x3a73fc: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x3a73fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x3a7400: 0x2484fe40  addiu       $a0, $a0, -0x1C0
    ctx->pc = 0x3a7400u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    // 0x3a7404: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3a7404u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3a7408: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3a7408u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3a740c: 0xc04ca38  jal         func_1328E0
    ctx->pc = 0x3A740Cu;
    SET_GPR_U32(ctx, 31, 0x3A7414u);
    ctx->pc = 0x3A7410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A740Cu;
    // 0x3a7410: 0xac22ceb8  sw          $v0, -0x3148($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954680), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1328E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1328E0u, 0x3A740Cu, 0x3A7414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A7414u;
label_3a7414:
    // 0x3a7414: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x3a7414u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x3a7418: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x3a7418u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x3a741c: 0xc04ca38  jal         func_1328E0
    ctx->pc = 0x3A741Cu;
    SET_GPR_U32(ctx, 31, 0x3A7424u);
    ctx->pc = 0x3A7420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A741Cu;
    // 0x3a7420: 0x2484fe40  addiu       $a0, $a0, -0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1328E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1328E0u, 0x3A741Cu, 0x3A7424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A7424u;
label_3a7424:
    // 0x3a7424: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x3a7424u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
    // 0x3a7428: 0xc054568  jal         func_1515A0
    ctx->pc = 0x3A7428u;
    SET_GPR_U32(ctx, 31, 0x3A7430u);
    ctx->pc = 0x3A742Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A7428u;
    // 0x3a742c: 0x24846ac0  addiu       $a0, $a0, 0x6AC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27328));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1515A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1515A0u, 0x3A7428u, 0x3A7430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A7430u;
label_3a7430:
    // 0x3a7430: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3A7430u;
    {
        const bool branch_taken_0x3a7430 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A7434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7430u;
        // 0x3a7434: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7430) {
            ctx->pc = 0x3A7450u;
            goto label_3a7450;
        }
    }
    ctx->pc = 0x3A7438u;
    // 0x3a7438: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x3a7438u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
    // 0x3a743c: 0x8c23cebc  lw          $v1, -0x3144($at)
    ctx->pc = 0x3a743cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954684)));
    // 0x3a7440: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x3a7440u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3a7444: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3a7444u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3a7448: 0xac22cebc  sw          $v0, -0x3144($at)
    ctx->pc = 0x3a7448u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x81CEBCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEBCu, _value); } while (0);
    // 0x3a744c: 0x0  nop
    ctx->pc = 0x3a744cu;
    // NOP
label_3a7450:
    // 0x3a7450: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3a7450u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3a7454: 0x8c26cebc  lw          $a2, -0x3144($at)
    ctx->pc = 0x3a7454u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x3a7458: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x3a7458u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x3a745c: 0x2402f7ff  addiu       $v0, $zero, -0x801
    ctx->pc = 0x3a745cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965247));
    // 0x3a7460: 0x278485b0  addiu       $a0, $gp, -0x7A50
    ctx->pc = 0x3a7460u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    // 0x3a7464: 0x3c0501b2  lui         $a1, 0x1B2
    ctx->pc = 0x3a7464u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)434 << 16));
    // 0x3a7468: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x3a7468u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x3a746c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3a746cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3a7470: 0xac23cebc  sw          $v1, -0x3144($at)
    ctx->pc = 0x3a7470u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x81CEBCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEBCu, _value); } while (0);
    // 0x3a7474: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3a7474u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3a7478: 0x8c23cebc  lw          $v1, -0x3144($at)
    ctx->pc = 0x3a7478u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x3a747c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3a747cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3a7480: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3a7480u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3a7484: 0xc054ddc  jal         func_153770
    ctx->pc = 0x3A7484u;
    SET_GPR_U32(ctx, 31, 0x3A748Cu);
    ctx->pc = 0x3A7488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A7484u;
    // 0x3a7488: 0xac22cebc  sw          $v0, -0x3144($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954684), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x153770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153770u, 0x3A7484u, 0x3A748Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A748Cu;
label_3a748c:
    // 0x3a748c: 0xc0550b4  jal         func_1542D0
    ctx->pc = 0x3A748Cu;
    SET_GPR_U32(ctx, 31, 0x3A7494u);
    ctx->pc = 0x3A7490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A748Cu;
    // 0x3a7490: 0x278485b0  addiu       $a0, $gp, -0x7A50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1542D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1542D0u, 0x3A748Cu, 0x3A7494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A7494u;
label_3a7494:
    // 0x3a7494: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3a7494u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3a7498: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x3a7498u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x3a749c: 0x2484cbe0  addiu       $a0, $a0, -0x3420
    ctx->pc = 0x3a749cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    // 0x3a74a0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3a74a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a74a4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3a74a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a74a8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3a74a8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a74ac: 0xc063c70  jal         func_18F1C0
    ctx->pc = 0x3A74ACu;
    SET_GPR_U32(ctx, 31, 0x3A74B4u);
    ctx->pc = 0x3A74B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A74ACu;
    // 0x3a74b0: 0x2409ffff  addiu       $t1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F1C0u, 0x3A74ACu, 0x3A74B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A74B4u;
label_3a74b4:
    // 0x3a74b4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3A74B4u;
    {
        const bool branch_taken_0x3a74b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A74B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A74B4u;
        // 0x3a74b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a74b4) {
            ctx->pc = 0x3A74C8u;
            goto label_3a74c8;
        }
    }
    ctx->pc = 0x3A74BCu;
    // 0x3a74bc: 0x0  nop
    ctx->pc = 0x3a74bcu;
    // NOP
label_3a74c0:
    // 0x3a74c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3a74c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a74c4: 0x0  nop
    ctx->pc = 0x3a74c4u;
    // NOP
label_3a74c8:
    // 0x3a74c8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3a74c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3a74cc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3a74ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a74d0: 0x3e00008  jr          $ra
    ctx->pc = 0x3A74D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A74D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A74D0u;
        // 0x3a74d4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A74D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A74D8u;
}
