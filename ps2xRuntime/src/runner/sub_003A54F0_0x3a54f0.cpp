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

// Function: sub_003A54F0
// Address: 0x3a54f0 - 0x3a5e08
void sub_003A54F0_0x3a54f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A54F0_0x3a54f0");
#endif

    switch (ctx->pc) {
        case 0x3a5600u: goto label_3a5600;
        case 0x3a5648u: goto label_3a5648;
        case 0x3a5678u: goto label_3a5678;
        case 0x3a56c0u: goto label_3a56c0;
        case 0x3a56f0u: goto label_3a56f0;
        case 0x3a5738u: goto label_3a5738;
        case 0x3a582cu: goto label_3a582c;
        case 0x3a5884u: goto label_3a5884;
        case 0x3a5894u: goto label_3a5894;
        case 0x3a58a4u: goto label_3a58a4;
        case 0x3a58b4u: goto label_3a58b4;
        case 0x3a58bcu: goto label_3a58bc;
        case 0x3a58c8u: goto label_3a58c8;
        case 0x3a58d0u: goto label_3a58d0;
        case 0x3a58e0u: goto label_3a58e0;
        case 0x3a58f0u: goto label_3a58f0;
        case 0x3a5914u: goto label_3a5914;
        case 0x3a591cu: goto label_3a591c;
        case 0x3a592cu: goto label_3a592c;
        case 0x3a5934u: goto label_3a5934;
        case 0x3a5940u: goto label_3a5940;
        case 0x3a5950u: goto label_3a5950;
        case 0x3a5958u: goto label_3a5958;
        case 0x3a598cu: goto label_3a598c;
        case 0x3a59a0u: goto label_3a59a0;
        case 0x3a59b4u: goto label_3a59b4;
        case 0x3a59c4u: goto label_3a59c4;
        case 0x3a59f8u: goto label_3a59f8;
        case 0x3a5a18u: goto label_3a5a18;
        case 0x3a5a68u: goto label_3a5a68;
        case 0x3a5b44u: goto label_3a5b44;
        case 0x3a5b58u: goto label_3a5b58;
        case 0x3a5b60u: goto label_3a5b60;
        case 0x3a5b90u: goto label_3a5b90;
        case 0x3a5bc4u: goto label_3a5bc4;
        case 0x3a5bd0u: goto label_3a5bd0;
        case 0x3a5bd8u: goto label_3a5bd8;
        case 0x3a5be8u: goto label_3a5be8;
        case 0x3a5bf4u: goto label_3a5bf4;
        case 0x3a5c08u: goto label_3a5c08;
        case 0x3a5c20u: goto label_3a5c20;
        case 0x3a5c90u: goto label_3a5c90;
        case 0x3a5d54u: goto label_3a5d54;
        case 0x3a5d60u: goto label_3a5d60;
        case 0x3a5d8cu: goto label_3a5d8c;
        case 0x3a5d9cu: goto label_3a5d9c;
        case 0x3a5dc0u: goto label_3a5dc0;
        case 0x3a5dc8u: goto label_3a5dc8;
        case 0x3a5de8u: goto label_3a5de8;
        default: break;
    }

    ctx->pc = 0x3a54f0u;

    // 0x3a54f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3a54f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3a54f4: 0x3c01008f  lui         $at, 0x8F
    ctx->pc = 0x3a54f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)143 << 16));
    // 0x3a54f8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3a54f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3a54fc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3a54fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3a5500: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3a5500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3a5504: 0x8c23ea24  lw          $v1, -0x15DC($at)
    ctx->pc = 0x3a5504u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x8EEA24u));
    // 0x3a5508: 0xac830020  sw          $v1, 0x20($a0)
    ctx->pc = 0x3a5508u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 3));
    // 0x3a550c: 0x3c01008f  lui         $at, 0x8F
    ctx->pc = 0x3a550cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)143 << 16));
    // 0x3a5510: 0x8c23ea28  lw          $v1, -0x15D8($at)
    ctx->pc = 0x3a5510u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x8EEA28u));
    // 0x3a5514: 0xac830024  sw          $v1, 0x24($a0)
    ctx->pc = 0x3a5514u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 3));
    // 0x3a5518: 0x3c01008f  lui         $at, 0x8F
    ctx->pc = 0x3a5518u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)143 << 16));
    // 0x3a551c: 0x8c23ea20  lw          $v1, -0x15E0($at)
    ctx->pc = 0x3a551cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x8EEA20u));
    // 0x3a5520: 0xac830028  sw          $v1, 0x28($a0)
    ctx->pc = 0x3a5520u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 3));
    // 0x3a5524: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3a5524u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3a5528: 0x9023fc8c  lbu         $v1, -0x374($at)
    ctx->pc = 0x3a5528u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x81FC8Cu));
    // 0x3a552c: 0x14620016  bne         $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x3A552Cu;
    {
        const bool branch_taken_0x3a552c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3A5530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A552Cu;
        // 0x3a5530: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a552c) {
            ctx->pc = 0x3A5588u;
            goto label_3a5588;
        }
    }
    ctx->pc = 0x3A5534u;
    // 0x3a5534: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3a5534u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3a5538: 0x8c22ceb8  lw          $v0, -0x3148($at)
    ctx->pc = 0x3a5538u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x81CEB8u));
    // 0x3a553c: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x3a553cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x3a5540: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x3A5540u;
    {
        const bool branch_taken_0x3a5540 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a5540) {
            ctx->pc = 0x3A5588u;
            goto label_3a5588;
        }
    }
    ctx->pc = 0x3A5548u;
    // 0x3a5548: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x3a5548u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3a554c: 0x2462fffe  addiu       $v0, $v1, -0x2
    ctx->pc = 0x3a554cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x3a5550: 0x2c410002  sltiu       $at, $v0, 0x2
    ctx->pc = 0x3a5550u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x3a5554: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A5554u;
    {
        const bool branch_taken_0x3a5554 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A5558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5554u;
        // 0x3a5558: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5554) {
            ctx->pc = 0x3A5568u;
            goto label_3a5568;
        }
    }
    ctx->pc = 0x3A555Cu;
    // 0x3a555c: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3A555Cu;
    {
        const bool branch_taken_0x3a555c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3a555c) {
            ctx->pc = 0x3A5588u;
            goto label_3a5588;
        }
    }
    ctx->pc = 0x3A5564u;
    // 0x3a5564: 0x0  nop
    ctx->pc = 0x3a5564u;
    // NOP
label_3a5568:
    // 0x3a5568: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x3a5568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x3a556c: 0x3c010083  lui         $at, 0x83
    ctx->pc = 0x3a556cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)131 << 16));
    // 0x3a5570: 0xa422cc50  sh          $v0, -0x33B0($at)
    ctx->pc = 0x3a5570u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x82CC50u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x82CC50u, _value); } while (0);
    // 0x3a5574: 0x3c010083  lui         $at, 0x83
    ctx->pc = 0x3a5574u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)131 << 16));
    // 0x3a5578: 0xa422cc90  sh          $v0, -0x3370($at)
    ctx->pc = 0x3a5578u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x82CC90u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x82CC90u, _value); } while (0);
    // 0x3a557c: 0x3c010083  lui         $at, 0x83
    ctx->pc = 0x3a557cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)131 << 16));
    // 0x3a5580: 0xa422cc70  sh          $v0, -0x3390($at)
    ctx->pc = 0x3a5580u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x82CC70u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x82CC70u, _value); } while (0);
    // 0x3a5584: 0x0  nop
    ctx->pc = 0x3a5584u;
    // NOP
label_3a5588:
    // 0x3a5588: 0x92040000  lbu         $a0, 0x0($s0)
    ctx->pc = 0x3a5588u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3a558c: 0x2c810006  sltiu       $at, $a0, 0x6
    ctx->pc = 0x3a558cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x3a5590: 0x10200217  beqz        $at, . + 4 + (0x217 << 2)
    ctx->pc = 0x3A5590u;
    {
        const bool branch_taken_0x3a5590 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A5594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5590u;
        // 0x3a5594: 0x3c030068  lui         $v1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5590) {
            ctx->pc = 0x3A5DF0u;
            goto label_3a5df0;
        }
    }
    ctx->pc = 0x3A5598u;
    // 0x3a5598: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x3a5598u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3a559c: 0x24632800  addiu       $v1, $v1, 0x2800
    ctx->pc = 0x3a559cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10240));
    // 0x3a55a0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3a55a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3a55a4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3a55a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3a55a8: 0x400008  jr          $v0
    ctx->pc = 0x3A55A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3A55B0u: goto label_3a55b0;
            case 0x3A58D8u: goto label_3a58d8;
            case 0x3A5A20u: goto label_3a5a20;
            case 0x3A5B68u: goto label_3a5b68;
            case 0x3A5BE0u: goto label_3a5be0;
            case 0x3A5C98u: goto label_3a5c98;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A55A8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3A55B0u;
label_3a55b0:
    // 0x3a55b0: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x3a55b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3a55b4: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x3a55b4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3a55b8: 0x300400ff  andi        $a0, $zero, 0xFF
    ctx->pc = 0x3a55b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)255);
    // 0x3a55bc: 0xa2000005  sb          $zero, 0x5($s0)
    ctx->pc = 0x3a55bcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a55c0: 0x4143c  dsll32      $v0, $a0, 16
    ctx->pc = 0x3a55c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 16));
    // 0x3a55c4: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x3a55c4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a55c8: 0x3c050093  lui         $a1, 0x93
    ctx->pc = 0x3a55c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)147 << 16));
    // 0x3a55cc: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x3a55ccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a55d0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3a55d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a55d4: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x3a55d4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a55d8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3a55d8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x3a55dc: 0xa2030006  sb          $v1, 0x6($s0)
    ctx->pc = 0x3a55dcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6), (uint8_t)GPR_U32(ctx, 3));
    // 0x3a55e0: 0x24a599e0  addiu       $a1, $a1, -0x6620
    ctx->pc = 0x3a55e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941152));
    // 0x3a55e4: 0xa200000b  sb          $zero, 0xB($s0)
    ctx->pc = 0x3a55e4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a55e8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3a55e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a55ec: 0xa604001a  sh          $a0, 0x1A($s0)
    ctx->pc = 0x3a55ecu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 26), (uint16_t)GPR_U32(ctx, 4));
    // 0x3a55f0: 0xa202000a  sb          $v0, 0xA($s0)
    ctx->pc = 0x3a55f0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10), (uint8_t)GPR_U32(ctx, 2));
    // 0x3a55f4: 0xa2000046  sb          $zero, 0x46($s0)
    ctx->pc = 0x3a55f4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 70), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a55f8: 0xa2000047  sb          $zero, 0x47($s0)
    ctx->pc = 0x3a55f8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 71), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a55fc: 0x0  nop
    ctx->pc = 0x3a55fcu;
    // NOP
label_3a5600:
    // 0x3a5600: 0xa0a00000  sb          $zero, 0x0($a1)
    ctx->pc = 0x3a5600u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a5604: 0xa0a00001  sb          $zero, 0x1($a1)
    ctx->pc = 0x3a5604u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a5608: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x3a5608u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x3a560c: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x3a560cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x3a5610: 0x2cc20088  sltiu       $v0, $a2, 0x88
    ctx->pc = 0x3a5610u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)136) ? 1 : 0);
    // 0x3a5614: 0xa0a00000  sb          $zero, 0x0($a1)
    ctx->pc = 0x3a5614u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a5618: 0xa0a00001  sb          $zero, 0x1($a1)
    ctx->pc = 0x3a5618u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a561c: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x3a561cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x3a5620: 0xa0a00000  sb          $zero, 0x0($a1)
    ctx->pc = 0x3a5620u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a5624: 0xa0a00001  sb          $zero, 0x1($a1)
    ctx->pc = 0x3a5624u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a5628: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x3a5628u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x3a562c: 0xa0a00000  sb          $zero, 0x0($a1)
    ctx->pc = 0x3a562cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a5630: 0xa0a00001  sb          $zero, 0x1($a1)
    ctx->pc = 0x3a5630u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a5634: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x3A5634u;
    {
        const bool branch_taken_0x3a5634 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A5638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5634u;
        // 0x3a5638: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5634) {
            ctx->pc = 0x3A5600u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a5600;
        }
    }
    ctx->pc = 0x3A563Cu;
    // 0x3a563c: 0x2cc10090  sltiu       $at, $a2, 0x90
    ctx->pc = 0x3a563cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)144) ? 1 : 0);
    // 0x3a5640: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x3A5640u;
    {
        const bool branch_taken_0x3a5640 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a5640) {
            ctx->pc = 0x3A5668u;
            goto label_3a5668;
        }
    }
    ctx->pc = 0x3A5648u;
label_3a5648:
    // 0x3a5648: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3a5648u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x3a564c: 0xa0a00000  sb          $zero, 0x0($a1)
    ctx->pc = 0x3a564cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a5650: 0x2cc20090  sltiu       $v0, $a2, 0x90
    ctx->pc = 0x3a5650u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)144) ? 1 : 0);
    // 0x3a5654: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3a5654u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3a5658: 0x0  nop
    ctx->pc = 0x3a5658u;
    // NOP
    // 0x3a565c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3A565Cu;
    {
        const bool branch_taken_0x3a565c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a565c) {
            ctx->pc = 0x3A5648u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a5648;
        }
    }
    ctx->pc = 0x3A5664u;
    // 0x3a5664: 0x0  nop
    ctx->pc = 0x3a5664u;
    // NOP
label_3a5668:
    // 0x3a5668: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x3a5668u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x3a566c: 0x24639a70  addiu       $v1, $v1, -0x6590
    ctx->pc = 0x3a566cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941296));
    // 0x3a5670: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3a5670u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5674: 0x0  nop
    ctx->pc = 0x3a5674u;
    // NOP
label_3a5678:
    // 0x3a5678: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x3a5678u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a567c: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x3a567cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a5680: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x3a5680u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x3a5684: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x3a5684u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x3a5688: 0x2c820328  sltiu       $v0, $a0, 0x328
    ctx->pc = 0x3a5688u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)808) ? 1 : 0);
    // 0x3a568c: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x3a568cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a5690: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x3a5690u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a5694: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x3a5694u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x3a5698: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x3a5698u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a569c: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x3a569cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a56a0: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x3a56a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x3a56a4: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x3a56a4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a56a8: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x3a56a8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a56ac: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x3A56ACu;
    {
        const bool branch_taken_0x3a56ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A56B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A56ACu;
        // 0x3a56b0: 0x24630002  addiu       $v1, $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a56ac) {
            ctx->pc = 0x3A5678u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a5678;
        }
    }
    ctx->pc = 0x3A56B4u;
    // 0x3a56b4: 0x2c810330  sltiu       $at, $a0, 0x330
    ctx->pc = 0x3a56b4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)816) ? 1 : 0);
    // 0x3a56b8: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x3A56B8u;
    {
        const bool branch_taken_0x3a56b8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a56b8) {
            ctx->pc = 0x3A56E0u;
            goto label_3a56e0;
        }
    }
    ctx->pc = 0x3A56C0u;
label_3a56c0:
    // 0x3a56c0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3a56c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3a56c4: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x3a56c4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a56c8: 0x2c820330  sltiu       $v0, $a0, 0x330
    ctx->pc = 0x3a56c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)816) ? 1 : 0);
    // 0x3a56cc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3a56ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3a56d0: 0x0  nop
    ctx->pc = 0x3a56d0u;
    // NOP
    // 0x3a56d4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3A56D4u;
    {
        const bool branch_taken_0x3a56d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a56d4) {
            ctx->pc = 0x3A56C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a56c0;
        }
    }
    ctx->pc = 0x3A56DCu;
    // 0x3a56dc: 0x0  nop
    ctx->pc = 0x3a56dcu;
    // NOP
label_3a56e0:
    // 0x3a56e0: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x3a56e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x3a56e4: 0x24639da0  addiu       $v1, $v1, -0x6260
    ctx->pc = 0x3a56e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942112));
    // 0x3a56e8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3a56e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a56ec: 0x0  nop
    ctx->pc = 0x3a56ecu;
    // NOP
label_3a56f0:
    // 0x3a56f0: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x3a56f0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a56f4: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x3a56f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a56f8: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x3a56f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x3a56fc: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x3a56fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x3a5700: 0x2c825ea8  sltiu       $v0, $a0, 0x5EA8
    ctx->pc = 0x3a5700u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)24232) ? 1 : 0);
    // 0x3a5704: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x3a5704u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a5708: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x3a5708u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a570c: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x3a570cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x3a5710: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x3a5710u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a5714: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x3a5714u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a5718: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x3a5718u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x3a571c: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x3a571cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a5720: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x3a5720u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a5724: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x3A5724u;
    {
        const bool branch_taken_0x3a5724 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A5728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5724u;
        // 0x3a5728: 0x24630002  addiu       $v1, $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5724) {
            ctx->pc = 0x3A56F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a56f0;
        }
    }
    ctx->pc = 0x3A572Cu;
    // 0x3a572c: 0x2c815eb0  sltiu       $at, $a0, 0x5EB0
    ctx->pc = 0x3a572cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)24240) ? 1 : 0);
    // 0x3a5730: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x3A5730u;
    {
        const bool branch_taken_0x3a5730 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a5730) {
            ctx->pc = 0x3A5758u;
            goto label_3a5758;
        }
    }
    ctx->pc = 0x3A5738u;
label_3a5738:
    // 0x3a5738: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3a5738u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3a573c: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x3a573cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a5740: 0x2c825eb0  sltiu       $v0, $a0, 0x5EB0
    ctx->pc = 0x3a5740u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)24240) ? 1 : 0);
    // 0x3a5744: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3a5744u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3a5748: 0x0  nop
    ctx->pc = 0x3a5748u;
    // NOP
    // 0x3a574c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3A574Cu;
    {
        const bool branch_taken_0x3a574c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a574c) {
            ctx->pc = 0x3A5738u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a5738;
        }
    }
    ctx->pc = 0x3A5754u;
    // 0x3a5754: 0x0  nop
    ctx->pc = 0x3a5754u;
    // NOP
label_3a5758:
    // 0x3a5758: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3a5758u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3a575c: 0x8c28ceb8  lw          $t0, -0x3148($at)
    ctx->pc = 0x3a575cu;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x81CEB8u));
    // 0x3a5760: 0x3c02fdff  lui         $v0, 0xFDFF
    ctx->pc = 0x3a5760u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65023 << 16));
    // 0x3a5764: 0x3445ffff  ori         $a1, $v0, 0xFFFF
    ctx->pc = 0x3a5764u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3a5768: 0x3c074000  lui         $a3, 0x4000
    ctx->pc = 0x3a5768u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16384 << 16));
    // 0x3a576c: 0x3c02bfff  lui         $v0, 0xBFFF
    ctx->pc = 0x3a576cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49151 << 16));
    // 0x3a5770: 0x3c03eff0  lui         $v1, 0xEFF0
    ctx->pc = 0x3a5770u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61424 << 16));
    // 0x3a5774: 0x344dffff  ori         $t5, $v0, 0xFFFF
    ctx->pc = 0x3a5774u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3a5778: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x3a5778u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3a577c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3a577cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3a5780: 0x1071025  or          $v0, $t0, $a3
    ctx->pc = 0x3a5780u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) | GPR_U64(ctx, 7));
    // 0x3a5784: 0x8c26cebc  lw          $a2, -0x3144($at)
    ctx->pc = 0x3a5784u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x3a5788: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3a5788u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a578c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3a578cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5790: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3a5790u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3a5794: 0xc52824  and         $a1, $a2, $a1
    ctx->pc = 0x3a5794u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    // 0x3a5798: 0x8c24cec4  lw          $a0, -0x313C($at)
    ctx->pc = 0x3a5798u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954692)));
    // 0x3a579c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3a579cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a57a0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3a57a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3a57a4: 0x8c2ccec8  lw          $t4, -0x3138($at)
    ctx->pc = 0x3a57a4u;
    SET_GPR_S32(ctx, 12, (int32_t)FAST_READ32(0x81CEC8u));
    // 0x3a57a8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3a57a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3a57ac: 0x8c2bcecc  lw          $t3, -0x3134($at)
    ctx->pc = 0x3a57acu;
    SET_GPR_S32(ctx, 11, (int32_t)FAST_READ32(0x81CECCu));
    // 0x3a57b0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3a57b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3a57b4: 0x8c2aced0  lw          $t2, -0x3130($at)
    ctx->pc = 0x3a57b4u;
    SET_GPR_S32(ctx, 10, (int32_t)FAST_READ32(0x81CED0u));
    // 0x3a57b8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3a57b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3a57bc: 0xac22ceb8  sw          $v0, -0x3148($at)
    ctx->pc = 0x3a57bcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x81CEB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEB8u, _value); } while (0);
    // 0x3a57c0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3a57c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3a57c4: 0x831025  or          $v0, $a0, $v1
    ctx->pc = 0x3a57c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3a57c8: 0xac25cebc  sw          $a1, -0x3144($at)
    ctx->pc = 0x3a57c8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x81CEBCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEBCu, _value); } while (0);
    // 0x3a57cc: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3a57ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3a57d0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3a57d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3a57d4: 0x2484cbe0  addiu       $a0, $a0, -0x3420
    ctx->pc = 0x3a57d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    // 0x3a57d8: 0xac22cec4  sw          $v0, -0x313C($at)
    ctx->pc = 0x3a57d8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x81CEC4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEC4u, _value); } while (0);
    // 0x3a57dc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3a57dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a57e0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3a57e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3a57e4: 0x8c2ecec4  lw          $t6, -0x313C($at)
    ctx->pc = 0x3a57e4u;
    SET_GPR_S32(ctx, 14, (int32_t)FAST_READ32(0x81CEC4u));
    // 0x3a57e8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3a57e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3a57ec: 0x1cd6824  and         $t5, $t6, $t5
    ctx->pc = 0x3a57ecu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 14) & GPR_U64(ctx, 13));
    // 0x3a57f0: 0x8c23ced8  lw          $v1, -0x3128($at)
    ctx->pc = 0x3a57f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954712)));
    // 0x3a57f4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3a57f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3a57f8: 0x8c22cedc  lw          $v0, -0x3124($at)
    ctx->pc = 0x3a57f8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x81CEDCu));
    // 0x3a57fc: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3a57fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3a5800: 0xac2dcec4  sw          $t5, -0x313C($at)
    ctx->pc = 0x3a5800u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 13)); ps2TraceGuestWrite(rdram, 0x81CEC4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEC4u, _value); } while (0);
    // 0x3a5804: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3a5804u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3a5808: 0x8c2dcec4  lw          $t5, -0x313C($at)
    ctx->pc = 0x3a5808u;
    SET_GPR_S32(ctx, 13, (int32_t)FAST_READ32(0x81CEC4u));
    // 0x3a580c: 0x1ac6025  or          $t4, $t5, $t4
    ctx->pc = 0x3a580cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 13) | GPR_U64(ctx, 12));
    // 0x3a5810: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3a5810u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3a5814: 0x16c5825  or          $t3, $t3, $t4
    ctx->pc = 0x3a5814u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 12));
    // 0x3a5818: 0x14b5025  or          $t2, $t2, $t3
    ctx->pc = 0x3a5818u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 11));
    // 0x3a581c: 0x6a1825  or          $v1, $v1, $t2
    ctx->pc = 0x3a581cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 10));
    // 0x3a5820: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3a5820u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3a5824: 0xc063cd0  jal         func_18F340
    ctx->pc = 0x3A5824u;
    SET_GPR_U32(ctx, 31, 0x3A582Cu);
    ctx->pc = 0x3A5828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A5824u;
    // 0x3a5828: 0xac22cec0  sw          $v0, -0x3140($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954688), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F340u, 0x3A5824u, 0x3A582Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A582Cu;
label_3a582c:
    // 0x3a582c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3a582cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3a5830: 0x3c02ffbf  lui         $v0, 0xFFBF
    ctx->pc = 0x3a5830u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65471 << 16));
    // 0x3a5834: 0x8c27cebc  lw          $a3, -0x3144($at)
    ctx->pc = 0x3a5834u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x3a5838: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x3a5838u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x3a583c: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x3a583cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x3a5840: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3a5840u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3a5844: 0x2484fe40  addiu       $a0, $a0, -0x1C0
    ctx->pc = 0x3a5844u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    // 0x3a5848: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x3a5848u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x3a584c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3a584cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3a5850: 0x34e71000  ori         $a3, $a3, 0x1000
    ctx->pc = 0x3a5850u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)4096);
    // 0x3a5854: 0x8c26ceb8  lw          $a2, -0x3148($at)
    ctx->pc = 0x3a5854u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x81CEB8u));
    // 0x3a5858: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3a5858u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3a585c: 0xc31825  or          $v1, $a2, $v1
    ctx->pc = 0x3a585cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x3a5860: 0xac27cebc  sw          $a3, -0x3144($at)
    ctx->pc = 0x3a5860u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x81CEBCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEBCu, _value); } while (0);
    // 0x3a5864: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3a5864u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3a5868: 0xac23ceb8  sw          $v1, -0x3148($at)
    ctx->pc = 0x3a5868u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x81CEB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEB8u, _value); } while (0);
    // 0x3a586c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3a586cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3a5870: 0x8c23ceb8  lw          $v1, -0x3148($at)
    ctx->pc = 0x3a5870u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEB8u));
    // 0x3a5874: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3a5874u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3a5878: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3a5878u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3a587c: 0xc04ca38  jal         func_1328E0
    ctx->pc = 0x3A587Cu;
    SET_GPR_U32(ctx, 31, 0x3A5884u);
    ctx->pc = 0x3A5880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A587Cu;
    // 0x3a5880: 0xac22ceb8  sw          $v0, -0x3148($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954680), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1328E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1328E0u, 0x3A587Cu, 0x3A5884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A5884u;
label_3a5884:
    // 0x3a5884: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x3a5884u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x3a5888: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x3a5888u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x3a588c: 0xc04ca14  jal         func_132850
    ctx->pc = 0x3A588Cu;
    SET_GPR_U32(ctx, 31, 0x3A5894u);
    ctx->pc = 0x3A5890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A588Cu;
    // 0x3a5890: 0x2484fe40  addiu       $a0, $a0, -0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132850u, 0x3A588Cu, 0x3A5894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A5894u;
label_3a5894:
    // 0x3a5894: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x3a5894u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x3a5898: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x3a5898u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x3a589c: 0xc04ca38  jal         func_1328E0
    ctx->pc = 0x3A589Cu;
    SET_GPR_U32(ctx, 31, 0x3A58A4u);
    ctx->pc = 0x3A58A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A589Cu;
    // 0x3a58a0: 0x2484fe40  addiu       $a0, $a0, -0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1328E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1328E0u, 0x3A589Cu, 0x3A58A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A58A4u;
label_3a58a4:
    // 0x3a58a4: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x3a58a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x3a58a8: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x3a58a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x3a58ac: 0xc04ca14  jal         func_132850
    ctx->pc = 0x3A58ACu;
    SET_GPR_U32(ctx, 31, 0x3A58B4u);
    ctx->pc = 0x3A58B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A58ACu;
    // 0x3a58b0: 0x2484fe40  addiu       $a0, $a0, -0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132850u, 0x3A58ACu, 0x3A58B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A58B4u;
label_3a58b4:
    // 0x3a58b4: 0xc0eb4d8  jal         func_3AD360
    ctx->pc = 0x3A58B4u;
    SET_GPR_U32(ctx, 31, 0x3A58BCu);
    ctx->pc = 0x3A58B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A58B4u;
    // 0x3a58b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AD360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AD360u, 0x3A58B4u, 0x3A58BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A58BCu;
label_3a58bc:
    // 0x3a58bc: 0x278485b0  addiu       $a0, $gp, -0x7A50
    ctx->pc = 0x3a58bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    // 0x3a58c0: 0xc054d98  jal         func_153660
    ctx->pc = 0x3A58C0u;
    SET_GPR_U32(ctx, 31, 0x3A58C8u);
    ctx->pc = 0x3A58C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A58C0u;
    // 0x3a58c4: 0x3c0501b2  lui         $a1, 0x1B2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)434 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x153660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153660u, 0x3A58C0u, 0x3A58C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A58C8u;
label_3a58c8:
    // 0x3a58c8: 0xc0550b0  jal         func_1542C0
    ctx->pc = 0x3A58C8u;
    SET_GPR_U32(ctx, 31, 0x3A58D0u);
    ctx->pc = 0x3A58CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A58C8u;
    // 0x3a58cc: 0x278485b0  addiu       $a0, $gp, -0x7A50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1542C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1542C0u, 0x3A58C8u, 0x3A58D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A58D0u;
label_3a58d0:
    // 0x3a58d0: 0x10000147  b           . + 4 + (0x147 << 2)
    ctx->pc = 0x3A58D0u;
    {
        const bool branch_taken_0x3a58d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a58d0) {
            ctx->pc = 0x3A5DF0u;
            goto label_3a5df0;
        }
    }
    ctx->pc = 0x3A58D8u;
label_3a58d8:
    // 0x3a58d8: 0xc0554f4  jal         func_1553D0
    ctx->pc = 0x3A58D8u;
    SET_GPR_U32(ctx, 31, 0x3A58E0u);
    ctx->pc = 0x3A58DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A58D8u;
    // 0x3a58dc: 0x278485b0  addiu       $a0, $gp, -0x7A50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1553D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1553D0u, 0x3A58D8u, 0x3A58E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A58E0u;
label_3a58e0:
    // 0x3a58e0: 0x14400143  bnez        $v0, . + 4 + (0x143 << 2)
    ctx->pc = 0x3A58E0u;
    {
        const bool branch_taken_0x3a58e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A58E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A58E0u;
        // 0x3a58e4: 0x278485b0  addiu       $a0, $gp, -0x7A50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a58e0) {
            ctx->pc = 0x3A5DF0u;
            goto label_3a5df0;
        }
    }
    ctx->pc = 0x3A58E8u;
    // 0x3a58e8: 0xc05551c  jal         func_155470
    ctx->pc = 0x3A58E8u;
    SET_GPR_U32(ctx, 31, 0x3A58F0u);
    ctx->pc = 0x155470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155470u, 0x3A58E8u, 0x3A58F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A58F0u;
label_3a58f0:
    // 0x3a58f0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3a58f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a58f4: 0x1043013e  beq         $v0, $v1, . + 4 + (0x13E << 2)
    ctx->pc = 0x3A58F4u;
    {
        const bool branch_taken_0x3a58f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x3a58f4) {
            ctx->pc = 0x3A5DF0u;
            goto label_3a5df0;
        }
    }
    ctx->pc = 0x3A58FCu;
    // 0x3a58fc: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x3a58fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3a5900: 0x3c040093  lui         $a0, 0x93
    ctx->pc = 0x3a5900u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)147 << 16));
    // 0x3a5904: 0x2484fee0  addiu       $a0, $a0, -0x120
    ctx->pc = 0x3a5904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967008));
    // 0x3a5908: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3a5908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3a590c: 0xc0f0140  jal         func_3C0500
    ctx->pc = 0x3A590Cu;
    SET_GPR_U32(ctx, 31, 0x3A5914u);
    ctx->pc = 0x3A5910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A590Cu;
    // 0x3a5910: 0xa2020000  sb          $v0, 0x0($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C0500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C0500u, 0x3A590Cu, 0x3A5914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A5914u;
label_3a5914:
    // 0x3a5914: 0xc0eb6ac  jal         func_3ADAB0
    ctx->pc = 0x3A5914u;
    SET_GPR_U32(ctx, 31, 0x3A591Cu);
    ctx->pc = 0x3A5918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A5914u;
    // 0x3a5918: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3ADAB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3ADAB0u, 0x3A5914u, 0x3A591Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A591Cu;
label_3a591c:
    // 0x3a591c: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x3a591cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
    // 0x3a5920: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x3a5920u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3a5924: 0xc052ec4  jal         func_14BB10
    ctx->pc = 0x3A5924u;
    SET_GPR_U32(ctx, 31, 0x3A592Cu);
    ctx->pc = 0x3A5928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A5924u;
    // 0x3a5928: 0x24842620  addiu       $a0, $a0, 0x2620 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14BB10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14BB10u, 0x3A5924u, 0x3A592Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A592Cu;
label_3a592c:
    // 0x3a592c: 0xc0554f4  jal         func_1553D0
    ctx->pc = 0x3A592Cu;
    SET_GPR_U32(ctx, 31, 0x3A5934u);
    ctx->pc = 0x3A5930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A592Cu;
    // 0x3a5930: 0x278485b0  addiu       $a0, $gp, -0x7A50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1553D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1553D0u, 0x3A592Cu, 0x3A5934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A5934u;
label_3a5934:
    // 0x3a5934: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3A5934u;
    {
        const bool branch_taken_0x3a5934 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a5934) {
            ctx->pc = 0x3A5960u;
            goto label_3a5960;
        }
    }
    ctx->pc = 0x3A593Cu;
    // 0x3a593c: 0x0  nop
    ctx->pc = 0x3a593cu;
    // NOP
label_3a5940:
    // 0x3a5940: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x3a5940u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x3a5944: 0x2484fca0  addiu       $a0, $a0, -0x360
    ctx->pc = 0x3a5944u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966432));
    // 0x3a5948: 0xc04c918  jal         func_132460
    ctx->pc = 0x3A5948u;
    SET_GPR_U32(ctx, 31, 0x3A5950u);
    ctx->pc = 0x3A594Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A5948u;
    // 0x3a594c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132460u, 0x3A5948u, 0x3A5950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A5950u;
label_3a5950:
    // 0x3a5950: 0xc0554f4  jal         func_1553D0
    ctx->pc = 0x3A5950u;
    SET_GPR_U32(ctx, 31, 0x3A5958u);
    ctx->pc = 0x3A5954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A5950u;
    // 0x3a5954: 0x278485b0  addiu       $a0, $gp, -0x7A50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1553D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1553D0u, 0x3A5950u, 0x3A5958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A5958u;
label_3a5958:
    // 0x3a5958: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3A5958u;
    {
        const bool branch_taken_0x3a5958 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a5958) {
            ctx->pc = 0x3A5940u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a5940;
        }
    }
    ctx->pc = 0x3A5960u;
label_3a5960:
    // 0x3a5960: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3a5960u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3a5964: 0x8c23ceb8  lw          $v1, -0x3148($at)
    ctx->pc = 0x3a5964u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEB8u));
    // 0x3a5968: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x3a5968u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x3a596c: 0x3c040093  lui         $a0, 0x93
    ctx->pc = 0x3a596cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)147 << 16));
    // 0x3a5970: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3a5970u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5974: 0x2484fee0  addiu       $a0, $a0, -0x120
    ctx->pc = 0x3a5974u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967008));
    // 0x3a5978: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3a5978u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a597c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x3a597cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3a5980: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3a5980u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3a5984: 0xc0f0154  jal         func_3C0550
    ctx->pc = 0x3A5984u;
    SET_GPR_U32(ctx, 31, 0x3A598Cu);
    ctx->pc = 0x3A5988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A5984u;
    // 0x3a5988: 0xac22ceb8  sw          $v0, -0x3148($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954680), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C0550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C0550u, 0x3A5984u, 0x3A598Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A598Cu;
label_3a598c:
    // 0x3a598c: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x3a598cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x3a5990: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x3a5990u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x3a5994: 0x2484fe40  addiu       $a0, $a0, -0x1C0
    ctx->pc = 0x3a5994u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    // 0x3a5998: 0xc04cd28  jal         func_1334A0
    ctx->pc = 0x3A5998u;
    SET_GPR_U32(ctx, 31, 0x3A59A0u);
    ctx->pc = 0x3A599Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A5998u;
    // 0x3a599c: 0x2406020e  addiu       $a2, $zero, 0x20E (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 526));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1334A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1334A0u, 0x3A5998u, 0x3A59A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A59A0u;
label_3a59a0:
    // 0x3a59a0: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x3a59a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x3a59a4: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x3a59a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x3a59a8: 0x24846cc0  addiu       $a0, $a0, 0x6CC0
    ctx->pc = 0x3a59a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27840));
    // 0x3a59ac: 0xc0b44cc  jal         func_2D1330
    ctx->pc = 0x3A59ACu;
    SET_GPR_U32(ctx, 31, 0x3A59B4u);
    ctx->pc = 0x3A59B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A59ACu;
    // 0x3a59b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D1330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1330u, 0x3A59ACu, 0x3A59B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A59B4u;
label_3a59b4:
    // 0x3a59b4: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x3a59b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x3a59b8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3a59b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a59bc: 0xc0b44cc  jal         func_2D1330
    ctx->pc = 0x3A59BCu;
    SET_GPR_U32(ctx, 31, 0x3A59C4u);
    ctx->pc = 0x3A59C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A59BCu;
    // 0x3a59c0: 0x24846ee0  addiu       $a0, $a0, 0x6EE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D1330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1330u, 0x3A59BCu, 0x3A59C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A59C4u;
label_3a59c4:
    // 0x3a59c4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3a59c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3a59c8: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3a59c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3a59cc: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x3a59ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x3a59d0: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3a59d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3a59d4: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x3a59d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x3a59d8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3a59d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a59dc: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x3a59dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x3a59e0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3a59e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a59e4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3a59e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a59e8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3a59e8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a59ec: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3a59ecu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a59f0: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3A59F0u;
    SET_GPR_U32(ctx, 31, 0x3A59F8u);
    ctx->pc = 0x3A59F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A59F0u;
    // 0x3a59f4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3A59F0u, 0x3A59F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A59F8u;
label_3a59f8:
    // 0x3a59f8: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3a59f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3a59fc: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x3a59fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x3a5a00: 0x2484cbe0  addiu       $a0, $a0, -0x3420
    ctx->pc = 0x3a5a00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    // 0x3a5a04: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3a5a04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5a08: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3a5a08u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5a0c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3a5a0cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5a10: 0xc063c70  jal         func_18F1C0
    ctx->pc = 0x3A5A10u;
    SET_GPR_U32(ctx, 31, 0x3A5A18u);
    ctx->pc = 0x3A5A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A5A10u;
    // 0x3a5a14: 0x2409ffff  addiu       $t1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F1C0u, 0x3A5A10u, 0x3A5A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A5A18u;
label_3a5a18:
    // 0x3a5a18: 0x100000f5  b           . + 4 + (0xF5 << 2)
    ctx->pc = 0x3A5A18u;
    {
        const bool branch_taken_0x3a5a18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a5a18) {
            ctx->pc = 0x3A5DF0u;
            goto label_3a5df0;
        }
    }
    ctx->pc = 0x3A5A20u;
label_3a5a20:
    // 0x3a5a20: 0x86020016  lh          $v0, 0x16($s0)
    ctx->pc = 0x3a5a20u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
    // 0x3a5a24: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A5A24u;
    {
        const bool branch_taken_0x3a5a24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a5a24) {
            ctx->pc = 0x3A5A38u;
            goto label_3a5a38;
        }
    }
    ctx->pc = 0x3A5A2Cu;
    // 0x3a5a2c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3a5a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3a5a30: 0xa6020016  sh          $v0, 0x16($s0)
    ctx->pc = 0x3a5a30u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 22), (uint16_t)GPR_U32(ctx, 2));
    // 0x3a5a34: 0x0  nop
    ctx->pc = 0x3a5a34u;
    // NOP
label_3a5a38:
    // 0x3a5a38: 0x3c01006c  lui         $at, 0x6C
    ctx->pc = 0x3a5a38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)108 << 16));
    // 0x3a5a3c: 0x90228c11  lbu         $v0, -0x73EF($at)
    ctx->pc = 0x3a5a3cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x6B8C11u));
    // 0x3a5a40: 0x1440003b  bnez        $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x3A5A40u;
    {
        const bool branch_taken_0x3a5a40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a5a40) {
            ctx->pc = 0x3A5B30u;
            goto label_3a5b30;
        }
    }
    ctx->pc = 0x3A5A48u;
    // 0x3a5a48: 0x92020047  lbu         $v0, 0x47($s0)
    ctx->pc = 0x3a5a48u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 71)));
    // 0x3a5a4c: 0x14400038  bnez        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x3A5A4Cu;
    {
        const bool branch_taken_0x3a5a4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a5a4c) {
            ctx->pc = 0x3A5B30u;
            goto label_3a5b30;
        }
    }
    ctx->pc = 0x3A5A54u;
    // 0x3a5a54: 0x9205000b  lbu         $a1, 0xB($s0)
    ctx->pc = 0x3a5a54u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11)));
    // 0x3a5a58: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x3a5a58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x3a5a5c: 0x24848c10  addiu       $a0, $a0, -0x73F0
    ctx->pc = 0x3a5a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937616));
    // 0x3a5a60: 0xc052754  jal         func_149D50
    ctx->pc = 0x3A5A60u;
    SET_GPR_U32(ctx, 31, 0x3A5A68u);
    ctx->pc = 0x3A5A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A5A60u;
    // 0x3a5a64: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149D50u, 0x3A5A60u, 0x3A5A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A5A68u;
label_3a5a68:
    // 0x3a5a68: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x3a5a68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x3a5a6c: 0x10430016  beq         $v0, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x3A5A6Cu;
    {
        const bool branch_taken_0x3a5a6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x3A5A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5A6Cu;
        // 0x3a5a70: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5a6c) {
            ctx->pc = 0x3A5AC8u;
            goto label_3a5ac8;
        }
    }
    ctx->pc = 0x3A5A74u;
    // 0x3a5a74: 0x10450014  beq         $v0, $a1, . + 4 + (0x14 << 2)
    ctx->pc = 0x3A5A74u;
    {
        const bool branch_taken_0x3a5a74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x3a5a74) {
            ctx->pc = 0x3A5AC8u;
            goto label_3a5ac8;
        }
    }
    ctx->pc = 0x3A5A7Cu;
    // 0x3a5a7c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3A5A7Cu;
    {
        const bool branch_taken_0x3a5a7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A5A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5A7Cu;
        // 0x3a5a80: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5a7c) {
            ctx->pc = 0x3A5A98u;
            goto label_3a5a98;
        }
    }
    ctx->pc = 0x3A5A84u;
    // 0x3a5a84: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A5A84u;
    {
        const bool branch_taken_0x3a5a84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x3a5a84) {
            ctx->pc = 0x3A5A98u;
            goto label_3a5a98;
        }
    }
    ctx->pc = 0x3A5A8Cu;
    // 0x3a5a8c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x3A5A8Cu;
    {
        const bool branch_taken_0x3a5a8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a5a8c) {
            ctx->pc = 0x3A5AF8u;
            goto label_3a5af8;
        }
    }
    ctx->pc = 0x3A5A94u;
    // 0x3a5a94: 0x0  nop
    ctx->pc = 0x3a5a94u;
    // NOP
label_3a5a98:
    // 0x3a5a98: 0x9204000b  lbu         $a0, 0xB($s0)
    ctx->pc = 0x3a5a98u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11)));
    // 0x3a5a9c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3a5a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x3a5aa0: 0x24428e98  addiu       $v0, $v0, -0x7168
    ctx->pc = 0x3a5aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938264));
    // 0x3a5aa4: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x3a5aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x3a5aa8: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x3a5aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3a5aac: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3a5aacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3a5ab0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3a5ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3a5ab4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3a5ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3a5ab8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3a5ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3a5abc: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x3A5ABCu;
    {
        const bool branch_taken_0x3a5abc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A5AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5ABCu;
        // 0x3a5ac0: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5abc) {
            ctx->pc = 0x3A5B20u;
            goto label_3a5b20;
        }
    }
    ctx->pc = 0x3A5AC4u;
    // 0x3a5ac4: 0x0  nop
    ctx->pc = 0x3a5ac4u;
    // NOP
label_3a5ac8:
    // 0x3a5ac8: 0x9204000b  lbu         $a0, 0xB($s0)
    ctx->pc = 0x3a5ac8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11)));
    // 0x3a5acc: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3a5accu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x3a5ad0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3a5ad0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a5ad4: 0x24428e98  addiu       $v0, $v0, -0x7168
    ctx->pc = 0x3a5ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938264));
    // 0x3a5ad8: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x3a5ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x3a5adc: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x3a5adcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3a5ae0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3a5ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3a5ae4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3a5ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3a5ae8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3a5ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3a5aec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3a5aecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3a5af0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3A5AF0u;
    {
        const bool branch_taken_0x3a5af0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A5AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5AF0u;
        // 0x3a5af4: 0xac450000  sw          $a1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5af0) {
            ctx->pc = 0x3A5B20u;
            goto label_3a5b20;
        }
    }
    ctx->pc = 0x3A5AF8u;
label_3a5af8:
    // 0x3a5af8: 0x9204000b  lbu         $a0, 0xB($s0)
    ctx->pc = 0x3a5af8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11)));
    // 0x3a5afc: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3a5afcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x3a5b00: 0x24428e98  addiu       $v0, $v0, -0x7168
    ctx->pc = 0x3a5b00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938264));
    // 0x3a5b04: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x3a5b04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x3a5b08: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x3a5b08u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3a5b0c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3a5b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3a5b10: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3a5b10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3a5b14: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3a5b14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3a5b18: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3a5b18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3a5b1c: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x3a5b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_3a5b20:
    // 0x3a5b20: 0x9202000b  lbu         $v0, 0xB($s0)
    ctx->pc = 0x3a5b20u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11)));
    // 0x3a5b24: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x3a5b24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x3a5b28: 0xa202000b  sb          $v0, 0xB($s0)
    ctx->pc = 0x3a5b28u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11), (uint8_t)GPR_U32(ctx, 2));
    // 0x3a5b2c: 0x0  nop
    ctx->pc = 0x3a5b2cu;
    // NOP
label_3a5b30:
    // 0x3a5b30: 0x9202000a  lbu         $v0, 0xA($s0)
    ctx->pc = 0x3a5b30u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x3a5b34: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3A5B34u;
    {
        const bool branch_taken_0x3a5b34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A5B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5B34u;
        // 0x3a5b38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5b34) {
            ctx->pc = 0x3A5B50u;
            goto label_3a5b50;
        }
    }
    ctx->pc = 0x3A5B3Cu;
    // 0x3a5b3c: 0xc0e9784  jal         func_3A5E10
    ctx->pc = 0x3A5B3Cu;
    SET_GPR_U32(ctx, 31, 0x3A5B44u);
    ctx->pc = 0x3A5E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5E10u, 0x3A5B3Cu, 0x3A5B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A5B44u;
label_3a5b44:
    // 0x3a5b44: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3A5B44u;
    {
        const bool branch_taken_0x3a5b44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a5b44) {
            ctx->pc = 0x3A5B58u;
            goto label_3a5b58;
        }
    }
    ctx->pc = 0x3A5B4Cu;
    // 0x3a5b4c: 0x0  nop
    ctx->pc = 0x3a5b4cu;
    // NOP
label_3a5b50:
    // 0x3a5b50: 0xc0ea47c  jal         func_3A91F0
    ctx->pc = 0x3A5B50u;
    SET_GPR_U32(ctx, 31, 0x3A5B58u);
    ctx->pc = 0x3A5B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A5B50u;
    // 0x3a5b54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A91F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A91F0u, 0x3A5B50u, 0x3A5B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A5B58u;
label_3a5b58:
    // 0x3a5b58: 0xc0eb134  jal         func_3AC4D0
    ctx->pc = 0x3A5B58u;
    SET_GPR_U32(ctx, 31, 0x3A5B60u);
    ctx->pc = 0x3A5B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A5B58u;
    // 0x3a5b5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AC4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AC4D0u, 0x3A5B58u, 0x3A5B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A5B60u;
label_3a5b60:
    // 0x3a5b60: 0x100000a3  b           . + 4 + (0xA3 << 2)
    ctx->pc = 0x3A5B60u;
    {
        const bool branch_taken_0x3a5b60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a5b60) {
            ctx->pc = 0x3A5DF0u;
            goto label_3a5df0;
        }
    }
    ctx->pc = 0x3A5B68u;
label_3a5b68:
    // 0x3a5b68: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x3a5b68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3a5b6c: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3a5b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3a5b70: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x3a5b70u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3a5b74: 0x2484cbe0  addiu       $a0, $a0, -0x3420
    ctx->pc = 0x3a5b74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    // 0x3a5b78: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x3a5b78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x3a5b7c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3a5b7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5b80: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3a5b80u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5b84: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3a5b84u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5b88: 0xc063cd0  jal         func_18F340
    ctx->pc = 0x3A5B88u;
    SET_GPR_U32(ctx, 31, 0x3A5B90u);
    ctx->pc = 0x3A5B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A5B88u;
    // 0x3a5b8c: 0x2409ffff  addiu       $t1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F340u, 0x3A5B88u, 0x3A5B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A5B90u;
label_3a5b90:
    // 0x3a5b90: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3a5b90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3a5b94: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3a5b94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3a5b98: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x3a5b98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x3a5b9c: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3a5b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3a5ba0: 0x3c020500  lui         $v0, 0x500
    ctx->pc = 0x3a5ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1280 << 16));
    // 0x3a5ba4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3a5ba4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5ba8: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x3a5ba8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x3a5bac: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3a5bacu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5bb0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3a5bb0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5bb4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3a5bb4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5bb8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3a5bb8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5bbc: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3A5BBCu;
    SET_GPR_U32(ctx, 31, 0x3A5BC4u);
    ctx->pc = 0x3A5BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A5BBCu;
    // 0x3a5bc0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3A5BBCu, 0x3A5BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A5BC4u;
label_3a5bc4:
    // 0x3a5bc4: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x3a5bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x3a5bc8: 0xc0957a0  jal         func_255E80
    ctx->pc = 0x3A5BC8u;
    SET_GPR_U32(ctx, 31, 0x3A5BD0u);
    ctx->pc = 0x3A5BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A5BC8u;
    // 0x3a5bcc: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255E80u, 0x3A5BC8u, 0x3A5BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A5BD0u;
label_3a5bd0:
    // 0x3a5bd0: 0xc0eb134  jal         func_3AC4D0
    ctx->pc = 0x3A5BD0u;
    SET_GPR_U32(ctx, 31, 0x3A5BD8u);
    ctx->pc = 0x3A5BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A5BD0u;
    // 0x3a5bd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AC4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AC4D0u, 0x3A5BD0u, 0x3A5BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A5BD8u;
label_3a5bd8:
    // 0x3a5bd8: 0x10000085  b           . + 4 + (0x85 << 2)
    ctx->pc = 0x3A5BD8u;
    {
        const bool branch_taken_0x3a5bd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a5bd8) {
            ctx->pc = 0x3A5DF0u;
            goto label_3a5df0;
        }
    }
    ctx->pc = 0x3A5BE0u;
label_3a5be0:
    // 0x3a5be0: 0xc0eb134  jal         func_3AC4D0
    ctx->pc = 0x3A5BE0u;
    SET_GPR_U32(ctx, 31, 0x3A5BE8u);
    ctx->pc = 0x3A5BE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A5BE0u;
    // 0x3a5be4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AC4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AC4D0u, 0x3A5BE0u, 0x3A5BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A5BE8u;
label_3a5be8:
    // 0x3a5be8: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3a5be8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3a5bec: 0xc063d48  jal         func_18F520
    ctx->pc = 0x3A5BECu;
    SET_GPR_U32(ctx, 31, 0x3A5BF4u);
    ctx->pc = 0x3A5BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A5BECu;
    // 0x3a5bf0: 0x2484cbe0  addiu       $a0, $a0, -0x3420 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F520u, 0x3A5BECu, 0x3A5BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A5BF4u;
label_3a5bf4:
    // 0x3a5bf4: 0x1440007e  bnez        $v0, . + 4 + (0x7E << 2)
    ctx->pc = 0x3A5BF4u;
    {
        const bool branch_taken_0x3a5bf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A5BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5BF4u;
        // 0x3a5bf8: 0x3c040082  lui         $a0, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5bf4) {
            ctx->pc = 0x3A5DF0u;
            goto label_3a5df0;
        }
    }
    ctx->pc = 0x3A5BFCu;
    // 0x3a5bfc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3a5bfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3a5c00: 0xc04c918  jal         func_132460
    ctx->pc = 0x3A5C00u;
    SET_GPR_U32(ctx, 31, 0x3A5C08u);
    ctx->pc = 0x3A5C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A5C00u;
    // 0x3a5c04: 0x2484fca0  addiu       $a0, $a0, -0x360 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132460u, 0x3A5C00u, 0x3A5C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A5C08u;
label_3a5c08:
    // 0x3a5c08: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x3a5c08u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3a5c0c: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x3a5c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x3a5c10: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x3a5c10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x3a5c14: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3a5c14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3a5c18: 0xc0957a0  jal         func_255E80
    ctx->pc = 0x3A5C18u;
    SET_GPR_U32(ctx, 31, 0x3A5C20u);
    ctx->pc = 0x3A5C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A5C18u;
    // 0x3a5c1c: 0xa2020000  sb          $v0, 0x0($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255E80u, 0x3A5C18u, 0x3A5C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A5C20u;
label_3a5c20:
    // 0x3a5c20: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3a5c20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3a5c24: 0x3c02bfff  lui         $v0, 0xBFFF
    ctx->pc = 0x3a5c24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49151 << 16));
    // 0x3a5c28: 0x8c27ceb8  lw          $a3, -0x3148($at)
    ctx->pc = 0x3a5c28u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x81CEB8u));
    // 0x3a5c2c: 0x3446ffff  ori         $a2, $v0, 0xFFFF
    ctx->pc = 0x3a5c2cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3a5c30: 0x3c02ff7f  lui         $v0, 0xFF7F
    ctx->pc = 0x3a5c30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65407 << 16));
    // 0x3a5c34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a5c34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5c38: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x3a5c38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3a5c3c: 0x3c02ffbf  lui         $v0, 0xFFBF
    ctx->pc = 0x3a5c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65471 << 16));
    // 0x3a5c40: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3a5c40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3a5c44: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x3a5c44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x3a5c48: 0xe63024  and         $a2, $a3, $a2
    ctx->pc = 0x3a5c48u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & GPR_U64(ctx, 6));
    // 0x3a5c4c: 0x9025feea  lbu         $a1, -0x116($at)
    ctx->pc = 0x3a5c4cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294967018)));
    // 0x3a5c50: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3a5c50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3a5c54: 0x30a500fe  andi        $a1, $a1, 0xFE
    ctx->pc = 0x3a5c54u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)254);
    // 0x3a5c58: 0xac26ceb8  sw          $a2, -0x3148($at)
    ctx->pc = 0x3a5c58u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x81CEB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEB8u, _value); } while (0);
    // 0x3a5c5c: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x3a5c5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x3a5c60: 0xa025feea  sb          $a1, -0x116($at)
    ctx->pc = 0x3a5c60u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x92FEEAu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x92FEEAu, _value); } while (0);
    // 0x3a5c64: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3a5c64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3a5c68: 0x8c25ceb8  lw          $a1, -0x3148($at)
    ctx->pc = 0x3a5c68u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x81CEB8u));
    // 0x3a5c6c: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x3a5c6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x3a5c70: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3a5c70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3a5c74: 0xac23ceb8  sw          $v1, -0x3148($at)
    ctx->pc = 0x3a5c74u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x81CEB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEB8u, _value); } while (0);
    // 0x3a5c78: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3a5c78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3a5c7c: 0x8c23ceb8  lw          $v1, -0x3148($at)
    ctx->pc = 0x3a5c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEB8u));
    // 0x3a5c80: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3a5c80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3a5c84: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3a5c84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3a5c88: 0xc0eb4d8  jal         func_3AD360
    ctx->pc = 0x3A5C88u;
    SET_GPR_U32(ctx, 31, 0x3A5C90u);
    ctx->pc = 0x3A5C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A5C88u;
    // 0x3a5c8c: 0xac22ceb8  sw          $v0, -0x3148($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954680), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AD360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AD360u, 0x3A5C88u, 0x3A5C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A5C90u;
label_3a5c90:
    // 0x3a5c90: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x3A5C90u;
    {
        const bool branch_taken_0x3a5c90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a5c90) {
            ctx->pc = 0x3A5DF0u;
            goto label_3a5df0;
        }
    }
    ctx->pc = 0x3A5C98u;
label_3a5c98:
    // 0x3a5c98: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x3a5c98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x3a5c9c: 0x9022ff2c  lbu         $v0, -0xD4($at)
    ctx->pc = 0x3a5c9cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x92FF2Cu));
    // 0x3a5ca0: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x3a5ca0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3a5ca4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x3a5ca4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x3a5ca8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3a5ca8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3a5cac: 0x10400050  beqz        $v0, . + 4 + (0x50 << 2)
    ctx->pc = 0x3A5CACu;
    {
        const bool branch_taken_0x3a5cac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a5cac) {
            ctx->pc = 0x3A5DF0u;
            goto label_3a5df0;
        }
    }
    ctx->pc = 0x3A5CB4u;
    // 0x3a5cb4: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x3a5cb4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a5cb8: 0x3c02100f  lui         $v0, 0x100F
    ctx->pc = 0x3a5cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4111 << 16));
    // 0x3a5cbc: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x3a5cbcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a5cc0: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x3a5cc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3a5cc4: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x3a5cc4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a5cc8: 0x3c02fbff  lui         $v0, 0xFBFF
    ctx->pc = 0x3a5cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64511 << 16));
    // 0x3a5ccc: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x3a5cccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a5cd0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3a5cd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3a5cd4: 0x8c2acec4  lw          $t2, -0x313C($at)
    ctx->pc = 0x3a5cd4u;
    SET_GPR_S32(ctx, 10, (int32_t)FAST_READ32(0x81CEC4u));
    // 0x3a5cd8: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x3a5cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x3a5cdc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3a5cdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3a5ce0: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x3a5ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x3a5ce4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3a5ce4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3a5ce8: 0x1435024  and         $t2, $t2, $v1
    ctx->pc = 0x3a5ce8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 3));
    // 0x3a5cec: 0x8c29cec8  lw          $t1, -0x3138($at)
    ctx->pc = 0x3a5cecu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954696)));
    // 0x3a5cf0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3a5cf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3a5cf4: 0x8c28cecc  lw          $t0, -0x3134($at)
    ctx->pc = 0x3a5cf4u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x81CECCu));
    // 0x3a5cf8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3a5cf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3a5cfc: 0x8c27ced0  lw          $a3, -0x3130($at)
    ctx->pc = 0x3a5cfcu;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x81CED0u));
    // 0x3a5d00: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3a5d00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3a5d04: 0x8c26ced8  lw          $a2, -0x3128($at)
    ctx->pc = 0x3a5d04u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x81CED8u));
    // 0x3a5d08: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3a5d08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3a5d0c: 0x8c25cedc  lw          $a1, -0x3124($at)
    ctx->pc = 0x3a5d0cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x81CEDCu));
    // 0x3a5d10: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3a5d10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3a5d14: 0x8c23cebc  lw          $v1, -0x3144($at)
    ctx->pc = 0x3a5d14u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x3a5d18: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3a5d18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3a5d1c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3a5d1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3a5d20: 0xac2acec4  sw          $t2, -0x313C($at)
    ctx->pc = 0x3a5d20u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954692), GPR_U32(ctx, 10));
    // 0x3a5d24: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3a5d24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3a5d28: 0x8c2acec4  lw          $t2, -0x313C($at)
    ctx->pc = 0x3a5d28u;
    SET_GPR_S32(ctx, 10, (int32_t)FAST_READ32(0x81CEC4u));
    // 0x3a5d2c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3a5d2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3a5d30: 0xac22cebc  sw          $v0, -0x3144($at)
    ctx->pc = 0x3a5d30u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x81CEBCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEBCu, _value); } while (0);
    // 0x3a5d34: 0x1491025  or          $v0, $t2, $t1
    ctx->pc = 0x3a5d34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) | GPR_U64(ctx, 9));
    // 0x3a5d38: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3a5d38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3a5d3c: 0x1021025  or          $v0, $t0, $v0
    ctx->pc = 0x3a5d3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x3a5d40: 0xe21025  or          $v0, $a3, $v0
    ctx->pc = 0x3a5d40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x3a5d44: 0xc21025  or          $v0, $a2, $v0
    ctx->pc = 0x3a5d44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x3a5d48: 0xa21025  or          $v0, $a1, $v0
    ctx->pc = 0x3a5d48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x3a5d4c: 0xc0957a0  jal         func_255E80
    ctx->pc = 0x3A5D4Cu;
    SET_GPR_U32(ctx, 31, 0x3A5D54u);
    ctx->pc = 0x3A5D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A5D4Cu;
    // 0x3a5d50: 0xac22cec0  sw          $v0, -0x3140($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954688), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255E80u, 0x3A5D4Cu, 0x3A5D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A5D54u;
label_3a5d54:
    // 0x3a5d54: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x3a5d54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x3a5d58: 0xc095128  jal         func_2544A0
    ctx->pc = 0x3A5D58u;
    SET_GPR_U32(ctx, 31, 0x3A5D60u);
    ctx->pc = 0x3A5D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A5D58u;
    // 0x3a5d5c: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2544A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2544A0u, 0x3A5D58u, 0x3A5D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A5D60u;
label_3a5d60:
    // 0x3a5d60: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3a5d60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3a5d64: 0x3c02ffbf  lui         $v0, 0xFFBF
    ctx->pc = 0x3a5d64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65471 << 16));
    // 0x3a5d68: 0x8c23ceb8  lw          $v1, -0x3148($at)
    ctx->pc = 0x3a5d68u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEB8u));
    // 0x3a5d6c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3a5d6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3a5d70: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x3a5d70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x3a5d74: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x3a5d74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x3a5d78: 0x2484fe40  addiu       $a0, $a0, -0x1C0
    ctx->pc = 0x3a5d78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    // 0x3a5d7c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3a5d7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3a5d80: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3a5d80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3a5d84: 0xc04ca38  jal         func_1328E0
    ctx->pc = 0x3A5D84u;
    SET_GPR_U32(ctx, 31, 0x3A5D8Cu);
    ctx->pc = 0x3A5D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A5D84u;
    // 0x3a5d88: 0xac22ceb8  sw          $v0, -0x3148($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954680), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1328E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1328E0u, 0x3A5D84u, 0x3A5D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A5D8Cu;
label_3a5d8c:
    // 0x3a5d8c: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x3a5d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x3a5d90: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x3a5d90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x3a5d94: 0xc04ca38  jal         func_1328E0
    ctx->pc = 0x3A5D94u;
    SET_GPR_U32(ctx, 31, 0x3A5D9Cu);
    ctx->pc = 0x3A5D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A5D94u;
    // 0x3a5d98: 0x2484fe40  addiu       $a0, $a0, -0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1328E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1328E0u, 0x3A5D94u, 0x3A5D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A5D9Cu;
label_3a5d9c:
    // 0x3a5d9c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3a5d9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3a5da0: 0x2402efff  addiu       $v0, $zero, -0x1001
    ctx->pc = 0x3a5da0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x3a5da4: 0x8c23cebc  lw          $v1, -0x3144($at)
    ctx->pc = 0x3a5da4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x3a5da8: 0x278485b0  addiu       $a0, $gp, -0x7A50
    ctx->pc = 0x3a5da8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    // 0x3a5dac: 0x3c0501b2  lui         $a1, 0x1B2
    ctx->pc = 0x3a5dacu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)434 << 16));
    // 0x3a5db0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3a5db0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3a5db4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3a5db4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3a5db8: 0xc054ddc  jal         func_153770
    ctx->pc = 0x3A5DB8u;
    SET_GPR_U32(ctx, 31, 0x3A5DC0u);
    ctx->pc = 0x3A5DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A5DB8u;
    // 0x3a5dbc: 0xac22cebc  sw          $v0, -0x3144($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954684), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x153770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153770u, 0x3A5DB8u, 0x3A5DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A5DC0u;
label_3a5dc0:
    // 0x3a5dc0: 0xc0550b4  jal         func_1542D0
    ctx->pc = 0x3A5DC0u;
    SET_GPR_U32(ctx, 31, 0x3A5DC8u);
    ctx->pc = 0x3A5DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A5DC0u;
    // 0x3a5dc4: 0x278485b0  addiu       $a0, $gp, -0x7A50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1542D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1542D0u, 0x3A5DC0u, 0x3A5DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A5DC8u;
label_3a5dc8:
    // 0x3a5dc8: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3a5dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3a5dcc: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x3a5dccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x3a5dd0: 0x2484cbe0  addiu       $a0, $a0, -0x3420
    ctx->pc = 0x3a5dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    // 0x3a5dd4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3a5dd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5dd8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3a5dd8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5ddc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3a5ddcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5de0: 0xc063c70  jal         func_18F1C0
    ctx->pc = 0x3A5DE0u;
    SET_GPR_U32(ctx, 31, 0x3A5DE8u);
    ctx->pc = 0x3A5DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A5DE0u;
    // 0x3a5de4: 0x2409ffff  addiu       $t1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F1C0u, 0x3A5DE0u, 0x3A5DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A5DE8u;
label_3a5de8:
    // 0x3a5de8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3A5DE8u;
    {
        const bool branch_taken_0x3a5de8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A5DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5DE8u;
        // 0x3a5dec: 0x8602001a  lh          $v0, 0x1A($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 26)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5de8) {
            ctx->pc = 0x3A5DF8u;
            goto label_3a5df8;
        }
    }
    ctx->pc = 0x3A5DF0u;
label_3a5df0:
    // 0x3a5df0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3a5df0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5df4: 0x0  nop
    ctx->pc = 0x3a5df4u;
    // NOP
label_3a5df8:
    // 0x3a5df8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3a5df8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3a5dfc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3a5dfcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a5e00: 0x3e00008  jr          $ra
    ctx->pc = 0x3A5E00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A5E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5E00u;
        // 0x3a5e04: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A5E00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A5E08u;
}
