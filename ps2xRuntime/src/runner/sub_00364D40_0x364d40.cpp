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

// Function: sub_00364D40
// Address: 0x364d40 - 0x364ed4
void sub_00364D40_0x364d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00364D40_0x364d40");
#endif

    switch (ctx->pc) {
        case 0x364d6cu: goto label_364d6c;
        case 0x364e60u: goto label_364e60;
        case 0x364e9cu: goto label_364e9c;
        default: break;
    }

    ctx->pc = 0x364d40u;

    // 0x364d40: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x364d40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x364d44: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x364d44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x364d48: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x364d48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x364d4c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x364d4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x364d50: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x364d50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x364d54: 0xa0206ac9  sb          $zero, 0x6AC9($at)
    ctx->pc = 0x364d54u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x7E6AC9u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x7E6AC9u, _value); } while (0);
    // 0x364d58: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x364d58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x364d5c: 0xa4206ace  sh          $zero, 0x6ACE($at)
    ctx->pc = 0x364d5cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x7E6ACEu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x7E6ACEu, _value); } while (0);
    // 0x364d60: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x364d60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x364d64: 0xc0d9044  jal         func_364110
    ctx->pc = 0x364D64u;
    SET_GPR_U32(ctx, 31, 0x364D6Cu);
    ctx->pc = 0x364D68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364D64u;
    // 0x364d68: 0xa0206ad0  sb          $zero, 0x6AD0($at) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 1), 27344), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x364110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x364110u, 0x364D64u, 0x364D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364D6Cu;
label_364d6c:
    // 0x364d6c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x364d6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x364d70: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x364d70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x364d74: 0x14640006  bne         $v1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x364D74u;
    {
        const bool branch_taken_0x364d74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x364D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364D74u;
        // 0x364d78: 0x3c01007e  lui         $at, 0x7E (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x364d74) {
            ctx->pc = 0x364D90u;
            goto label_364d90;
        }
    }
    ctx->pc = 0x364D7Cu;
    // 0x364d7c: 0x24030ff0  addiu       $v1, $zero, 0xFF0
    ctx->pc = 0x364d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4080));
    // 0x364d80: 0xa0206ac8  sb          $zero, 0x6AC8($at)
    ctx->pc = 0x364d80u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 27336), (uint8_t)GPR_U32(ctx, 0));
    // 0x364d84: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x364d84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x364d88: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x364D88u;
    {
        const bool branch_taken_0x364d88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x364D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364D88u;
        // 0x364d8c: 0xa4236ac4  sh          $v1, 0x6AC4($at) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 1), 27332), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x364d88) {
            ctx->pc = 0x364EC0u;
            goto label_364ec0;
        }
    }
    ctx->pc = 0x364D90u;
label_364d90:
    // 0x364d90: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x364d90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x364d94: 0x8c23cebc  lw          $v1, -0x3144($at)
    ctx->pc = 0x364d94u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x364d98: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x364d98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x364d9c: 0x10600028  beqz        $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x364D9Cu;
    {
        const bool branch_taken_0x364d9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x364d9c) {
            ctx->pc = 0x364E40u;
            goto label_364e40;
        }
    }
    ctx->pc = 0x364DA4u;
    // 0x364da4: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x364da4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x364da8: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x364da8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x364dac: 0x2484a8d0  addiu       $a0, $a0, -0x5730
    ctx->pc = 0x364dacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944976));
    // 0x364db0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x364db0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x364db4: 0x78860000  lq          $a2, 0x0($a0)
    ctx->pc = 0x364db4u;
    SET_GPR_VEC(ctx, 6, FAST_READ128(0x65A8D0u));
    // 0x364db8: 0x3c03873c  lui         $v1, 0x873C
    ctx->pc = 0x364db8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34620 << 16));
    // 0x364dbc: 0xdc850010  ld          $a1, 0x10($a0)
    ctx->pc = 0x364dbcu;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x65A8E0u));
    // 0x364dc0: 0x7ce60000  sq          $a2, 0x0($a3)
    ctx->pc = 0x364dc0u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 6));
    // 0x364dc4: 0x3464a9e5  ori         $a0, $v1, 0xA9E5
    ctx->pc = 0x364dc4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43493);
    // 0x364dc8: 0xfce50010  sd          $a1, 0x10($a3)
    ctx->pc = 0x364dc8u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 16), GPR_U64(ctx, 5));
    // 0x364dcc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x364dccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x364dd0: 0x8c25f004  lw          $a1, -0xFFC($at)
    ctx->pc = 0x364dd0u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x81F004u));
    // 0x364dd4: 0x53040  sll         $a2, $a1, 1
    ctx->pc = 0x364dd4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x364dd8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x364dd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x364ddc: 0x52fc2  srl         $a1, $a1, 31
    ctx->pc = 0x364ddcu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x364de0: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x364de0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x364de4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x364de4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x364de8: 0xa42026  xor         $a0, $a1, $a0
    ctx->pc = 0x364de8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 4));
    // 0x364dec: 0xac24f004  sw          $a0, -0xFFC($at)
    ctx->pc = 0x364decu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963204), GPR_U32(ctx, 4));
    // 0x364df0: 0x42202  srl         $a0, $a0, 8
    ctx->pc = 0x364df0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
    // 0x364df4: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x364df4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x364df8: 0x83001b  divu        $zero, $a0, $v1
    ctx->pc = 0x364df8u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x364dfc: 0x0  nop
    ctx->pc = 0x364dfcu;
    // NOP
    // 0x364e00: 0x0  nop
    ctx->pc = 0x364e00u;
    // NOP
    // 0x364e04: 0x1810  mfhi        $v1
    ctx->pc = 0x364e04u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x364e08: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x364e08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x364e0c: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x364e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x364e10: 0x8c640030  lw          $a0, 0x30($v1)
    ctx->pc = 0x364e10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x364e14: 0xa4246ac4  sh          $a0, 0x6AC4($at)
    ctx->pc = 0x364e14u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 27332), (uint16_t)GPR_U32(ctx, 4));
    // 0x364e18: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x364e18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x364e1c: 0xa4246ace  sh          $a0, 0x6ACE($at)
    ctx->pc = 0x364e1cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x7E6ACEu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x7E6ACEu, _value); } while (0);
    // 0x364e20: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x364e20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x364e24: 0xa4246ac6  sh          $a0, 0x6AC6($at)
    ctx->pc = 0x364e24u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x7E6AC6u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x7E6AC6u, _value); } while (0);
    // 0x364e28: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x364e28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x364e2c: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x364e2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x364e30: 0xa0236ac8  sb          $v1, 0x6AC8($at)
    ctx->pc = 0x364e30u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x7E6AC8u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x7E6AC8u, _value); } while (0);
    // 0x364e34: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x364e34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x364e38: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x364E38u;
    {
        const bool branch_taken_0x364e38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x364E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364E38u;
        // 0x364e3c: 0xa0236ad0  sb          $v1, 0x6AD0($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 27344), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x364e38) {
            ctx->pc = 0x364EC0u;
            goto label_364ec0;
        }
    }
    ctx->pc = 0x364E40u;
label_364e40:
    // 0x364e40: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x364e40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x364e44: 0xa0246b29  sb          $a0, 0x6B29($at)
    ctx->pc = 0x364e44u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x7E6B29u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x7E6B29u, _value); } while (0);
    // 0x364e48: 0x3c110066  lui         $s1, 0x66
    ctx->pc = 0x364e48u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)102 << 16));
    // 0x364e4c: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x364e4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x364e50: 0x2631a8c0  addiu       $s1, $s1, -0x5740
    ctx->pc = 0x364e50u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294944960));
    // 0x364e54: 0xa0206b28  sb          $zero, 0x6B28($at)
    ctx->pc = 0x364e54u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x7E6B28u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x7E6B28u, _value); } while (0);
    // 0x364e58: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x364e58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364e5c: 0x0  nop
    ctx->pc = 0x364e5cu;
    // NOP
label_364e60:
    // 0x364e60: 0x16000009  bnez        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x364E60u;
    {
        const bool branch_taken_0x364e60 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x364e60) {
            ctx->pc = 0x364E88u;
            goto label_364e88;
        }
    }
    ctx->pc = 0x364E68u;
    // 0x364e68: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x364e68u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x364e6c: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x364e6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x364e70: 0xa4236ac4  sh          $v1, 0x6AC4($at)
    ctx->pc = 0x364e70u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x7E6AC4u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x7E6AC4u, _value); } while (0);
    // 0x364e74: 0x96230002  lhu         $v1, 0x2($s1)
    ctx->pc = 0x364e74u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x364e78: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x364e78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x364e7c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x364E7Cu;
    {
        const bool branch_taken_0x364e7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x364E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364E7Cu;
        // 0x364e80: 0xa0236ac8  sb          $v1, 0x6AC8($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 27336), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x364e7c) {
            ctx->pc = 0x364EA0u;
            goto label_364ea0;
        }
    }
    ctx->pc = 0x364E84u;
    // 0x364e84: 0x0  nop
    ctx->pc = 0x364e84u;
    // NOP
label_364e88:
    // 0x364e88: 0x96250000  lhu         $a1, 0x0($s1)
    ctx->pc = 0x364e88u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x364e8c: 0x96260002  lhu         $a2, 0x2($s1)
    ctx->pc = 0x364e8cu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x364e90: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x364e90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
    // 0x364e94: 0xc053fdc  jal         func_14FF70
    ctx->pc = 0x364E94u;
    SET_GPR_U32(ctx, 31, 0x364E9Cu);
    ctx->pc = 0x364E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364E94u;
    // 0x364e98: 0x24846ac0  addiu       $a0, $a0, 0x6AC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27328));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FF70u, 0x364E94u, 0x364E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364E9Cu;
label_364e9c:
    // 0x364e9c: 0x0  nop
    ctx->pc = 0x364e9cu;
    // NOP
label_364ea0:
    // 0x364ea0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x364ea0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x364ea4: 0x2e030004  sltiu       $v1, $s0, 0x4
    ctx->pc = 0x364ea4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x364ea8: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x364EA8u;
    {
        const bool branch_taken_0x364ea8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x364EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364EA8u;
        // 0x364eac: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x364ea8) {
            ctx->pc = 0x364E60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_364e60;
        }
    }
    ctx->pc = 0x364EB0u;
    // 0x364eb0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x364eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x364eb4: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x364eb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x364eb8: 0xa0236b29  sb          $v1, 0x6B29($at)
    ctx->pc = 0x364eb8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x7E6B29u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x7E6B29u, _value); } while (0);
    // 0x364ebc: 0x0  nop
    ctx->pc = 0x364ebcu;
    // NOP
label_364ec0:
    // 0x364ec0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x364ec0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x364ec4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x364ec4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x364ec8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x364ec8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x364ecc: 0x3e00008  jr          $ra
    ctx->pc = 0x364ECCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x364ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364ECCu;
        // 0x364ed0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x364ECCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x364ED4u;
}
