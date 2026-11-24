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

// Function: sub_0015C830
// Address: 0x15c830 - 0x15cb90
void sub_0015C830_0x15c830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015C830_0x15c830");
#endif

    switch (ctx->pc) {
        case 0x15c888u: goto label_15c888;
        case 0x15c948u: goto label_15c948;
        default: break;
    }

    ctx->pc = 0x15c830u;

    // 0x15c830: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x15c830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x15c834: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x15c834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x15c838: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15c838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15c83c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15c83cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15c840: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x15c840u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c844: 0xac900090  sw          $s0, 0x90($a0)
    ctx->pc = 0x15c844u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 144), GPR_U32(ctx, 16));
    // 0x15c848: 0x94a20004  lhu         $v0, 0x4($a1)
    ctx->pc = 0x15c848u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x15c84c: 0x34420041  ori         $v0, $v0, 0x41
    ctx->pc = 0x15c84cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65);
    // 0x15c850: 0xa4820010  sh          $v0, 0x10($a0)
    ctx->pc = 0x15c850u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x15c854: 0x94830010  lhu         $v1, 0x10($a0)
    ctx->pc = 0x15c854u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x15c858: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x15c858u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x15c85c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x15C85Cu;
    {
        const bool branch_taken_0x15c85c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C85Cu;
        // 0x15c860: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c85c) {
            ctx->pc = 0x15C870u;
            goto label_15c870;
        }
    }
    ctx->pc = 0x15C864u;
    // 0x15c864: 0x34620006  ori         $v0, $v1, 0x6
    ctx->pc = 0x15c864u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)6);
    // 0x15c868: 0xa6220010  sh          $v0, 0x10($s1)
    ctx->pc = 0x15c868u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x15c86c: 0x0  nop
    ctx->pc = 0x15c86cu;
    // NOP
label_15c870:
    // 0x15c870: 0x92020006  lbu         $v0, 0x6($s0)
    ctx->pc = 0x15c870u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x15c874: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15c874u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c878: 0xa2220012  sb          $v0, 0x12($s1)
    ctx->pc = 0x15c878u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 18), (uint8_t)GPR_U32(ctx, 2));
    // 0x15c87c: 0x92020007  lbu         $v0, 0x7($s0)
    ctx->pc = 0x15c87cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
    // 0x15c880: 0xc05972c  jal         func_165CB0
    ctx->pc = 0x15C880u;
    SET_GPR_U32(ctx, 31, 0x15C888u);
    ctx->pc = 0x15C884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C880u;
    // 0x15c884: 0xa2220013  sb          $v0, 0x13($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 19), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165CB0u, 0x15C880u, 0x15C888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C888u;
label_15c888:
    // 0x15c888: 0x86040024  lh          $a0, 0x24($s0)
    ctx->pc = 0x15c888u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x15c88c: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x15c88cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x15c890: 0xa624002c  sh          $a0, 0x2C($s1)
    ctx->pc = 0x15c890u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 44), (uint16_t)GPR_U32(ctx, 4));
    // 0x15c894: 0xa223004e  sb          $v1, 0x4E($s1)
    ctx->pc = 0x15c894u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 78), (uint8_t)GPR_U32(ctx, 3));
    // 0x15c898: 0x9203000e  lbu         $v1, 0xE($s0)
    ctx->pc = 0x15c898u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x15c89c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x15C89Cu;
    {
        const bool branch_taken_0x15c89c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15c89c) {
            ctx->pc = 0x15C8B0u;
            goto label_15c8b0;
        }
    }
    ctx->pc = 0x15C8A4u;
    // 0x15c8a4: 0x96230010  lhu         $v1, 0x10($s1)
    ctx->pc = 0x15c8a4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x15c8a8: 0x34630400  ori         $v1, $v1, 0x400
    ctx->pc = 0x15c8a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1024);
    // 0x15c8ac: 0xa6230010  sh          $v1, 0x10($s1)
    ctx->pc = 0x15c8acu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 16), (uint16_t)GPR_U32(ctx, 3));
label_15c8b0:
    // 0x15c8b0: 0x92030020  lbu         $v1, 0x20($s0)
    ctx->pc = 0x15c8b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x15c8b4: 0x92040021  lbu         $a0, 0x21($s0)
    ctx->pc = 0x15c8b4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 33)));
    // 0x15c8b8: 0x14640003  bne         $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15C8B8u;
    {
        const bool branch_taken_0x15c8b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x15c8b8) {
            ctx->pc = 0x15C8C8u;
            goto label_15c8c8;
        }
    }
    ctx->pc = 0x15C8C0u;
    // 0x15c8c0: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x15C8C0u;
    {
        const bool branch_taken_0x15c8c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15c8c0) {
            ctx->pc = 0x15C920u;
            goto label_15c920;
        }
    }
    ctx->pc = 0x15C8C8u;
label_15c8c8:
    // 0x15c8c8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15c8c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x15c8cc: 0x8c24f004  lw          $a0, -0xFFC($at)
    ctx->pc = 0x15c8ccu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x81F004u));
    // 0x15c8d0: 0x3c03873c  lui         $v1, 0x873C
    ctx->pc = 0x15c8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34620 << 16));
    // 0x15c8d4: 0x3463a9e5  ori         $v1, $v1, 0xA9E5
    ctx->pc = 0x15c8d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43493);
    // 0x15c8d8: 0x42840  sll         $a1, $a0, 1
    ctx->pc = 0x15c8d8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x15c8dc: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15c8dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x15c8e0: 0x427c2  srl         $a0, $a0, 31
    ctx->pc = 0x15c8e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x15c8e4: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x15c8e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x15c8e8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x15c8e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x15c8ec: 0x831826  xor         $v1, $a0, $v1
    ctx->pc = 0x15c8ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 3));
    // 0x15c8f0: 0xac23f004  sw          $v1, -0xFFC($at)
    ctx->pc = 0x15c8f0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963204), GPR_U32(ctx, 3));
    // 0x15c8f4: 0x32a02  srl         $a1, $v1, 8
    ctx->pc = 0x15c8f4u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x15c8f8: 0x92030021  lbu         $v1, 0x21($s0)
    ctx->pc = 0x15c8f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 33)));
    // 0x15c8fc: 0x92040020  lbu         $a0, 0x20($s0)
    ctx->pc = 0x15c8fcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x15c900: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x15c900u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x15c904: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x15c904u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x15c908: 0xa3001b  divu        $zero, $a1, $v1
    ctx->pc = 0x15c908u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
    // 0x15c90c: 0x0  nop
    ctx->pc = 0x15c90cu;
    // NOP
    // 0x15c910: 0x0  nop
    ctx->pc = 0x15c910u;
    // NOP
    // 0x15c914: 0x1810  mfhi        $v1
    ctx->pc = 0x15c914u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x15c918: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x15c918u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x15c91c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x15c91cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_15c920:
    // 0x15c920: 0x8e250018  lw          $a1, 0x18($s1)
    ctx->pc = 0x15c920u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x15c924: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x15c924u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x15c928: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15c928u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c92c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x15c92cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x15c930: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x15c930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x15c934: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x15c934u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x15c938: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x15c938u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x15c93c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x15C93Cu;
    {
        const bool branch_taken_0x15c93c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C93Cu;
        // 0x15c940: 0xa42821  addu        $a1, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c93c) {
            ctx->pc = 0x15C950u;
            goto label_15c950;
        }
    }
    ctx->pc = 0x15C944u;
    // 0x15c944: 0x0  nop
    ctx->pc = 0x15c944u;
    // NOP
label_15c948:
    // 0x15c948: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x15c948u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x15c94c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x15c94cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_15c950:
    // 0x15c950: 0x90a40002  lbu         $a0, 0x2($a1)
    ctx->pc = 0x15c950u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x15c954: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x15C954u;
    {
        const bool branch_taken_0x15c954 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x15c954) {
            ctx->pc = 0x15C970u;
            goto label_15c970;
        }
    }
    ctx->pc = 0x15C95Cu;
    // 0x15c95c: 0x90a40003  lbu         $a0, 0x3($a1)
    ctx->pc = 0x15c95cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
    // 0x15c960: 0x30840010  andi        $a0, $a0, 0x10
    ctx->pc = 0x15c960u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16);
    // 0x15c964: 0x1080fff8  beqz        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x15C964u;
    {
        const bool branch_taken_0x15c964 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x15c964) {
            ctx->pc = 0x15C948u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15c948;
        }
    }
    ctx->pc = 0x15C96Cu;
    // 0x15c96c: 0x0  nop
    ctx->pc = 0x15c96cu;
    // NOP
label_15c970:
    // 0x15c970: 0x92070023  lbu         $a3, 0x23($s0)
    ctx->pc = 0x15c970u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 35)));
    // 0x15c974: 0x30c400ff  andi        $a0, $a2, 0xFF
    ctx->pc = 0x15c974u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x15c978: 0x2485ffff  addiu       $a1, $a0, -0x1
    ctx->pc = 0x15c978u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x15c97c: 0xe5202a  slt         $a0, $a3, $a1
    ctx->pc = 0x15c97cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x15c980: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x15C980u;
    {
        const bool branch_taken_0x15c980 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x15C984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C980u;
        // 0x15c984: 0x92060022  lbu         $a2, 0x22($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 34)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c980) {
            ctx->pc = 0x15C9A0u;
            goto label_15c9a0;
        }
    }
    ctx->pc = 0x15C988u;
    // 0x15c988: 0x30a700ff  andi        $a3, $a1, 0xFF
    ctx->pc = 0x15c988u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x15c98c: 0x30c400ff  andi        $a0, $a2, 0xFF
    ctx->pc = 0x15c98cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x15c990: 0x87202a  slt         $a0, $a0, $a3
    ctx->pc = 0x15c990u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x15c994: 0x14800002  bnez        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x15C994u;
    {
        const bool branch_taken_0x15c994 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x15c994) {
            ctx->pc = 0x15C9A0u;
            goto label_15c9a0;
        }
    }
    ctx->pc = 0x15C99Cu;
    // 0x15c99c: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x15c99cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_15c9a0:
    // 0x15c9a0: 0x30c800ff  andi        $t0, $a2, 0xFF
    ctx->pc = 0x15c9a0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x15c9a4: 0x30e400ff  andi        $a0, $a3, 0xFF
    ctx->pc = 0x15c9a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x15c9a8: 0x15040003  bne         $t0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15C9A8u;
    {
        const bool branch_taken_0x15c9a8 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 4));
        if (branch_taken_0x15c9a8) {
            ctx->pc = 0x15C9B8u;
            goto label_15c9b8;
        }
    }
    ctx->pc = 0x15C9B0u;
    // 0x15c9b0: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x15C9B0u;
    {
        const bool branch_taken_0x15c9b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15c9b0) {
            ctx->pc = 0x15CA08u;
            goto label_15ca08;
        }
    }
    ctx->pc = 0x15C9B8u;
label_15c9b8:
    // 0x15c9b8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15c9b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x15c9bc: 0x8c26f004  lw          $a2, -0xFFC($at)
    ctx->pc = 0x15c9bcu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x81F004u));
    // 0x15c9c0: 0x3c05873c  lui         $a1, 0x873C
    ctx->pc = 0x15c9c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34620 << 16));
    // 0x15c9c4: 0x882023  subu        $a0, $a0, $t0
    ctx->pc = 0x15c9c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x15c9c8: 0x34a5a9e5  ori         $a1, $a1, 0xA9E5
    ctx->pc = 0x15c9c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)43493);
    // 0x15c9cc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x15c9ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x15c9d0: 0x63840  sll         $a3, $a2, 1
    ctx->pc = 0x15c9d0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x15c9d4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15c9d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x15c9d8: 0x637c2  srl         $a2, $a2, 31
    ctx->pc = 0x15c9d8u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x15c9dc: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x15c9dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x15c9e0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x15c9e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x15c9e4: 0xc52826  xor         $a1, $a2, $a1
    ctx->pc = 0x15c9e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 5));
    // 0x15c9e8: 0xac25f004  sw          $a1, -0xFFC($at)
    ctx->pc = 0x15c9e8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963204), GPR_U32(ctx, 5));
    // 0x15c9ec: 0x52a02  srl         $a1, $a1, 8
    ctx->pc = 0x15c9ecu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 8));
    // 0x15c9f0: 0xa4001b  divu        $zero, $a1, $a0
    ctx->pc = 0x15c9f0u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
    // 0x15c9f4: 0x0  nop
    ctx->pc = 0x15c9f4u;
    // NOP
    // 0x15c9f8: 0x0  nop
    ctx->pc = 0x15c9f8u;
    // NOP
    // 0x15c9fc: 0x2010  mfhi        $a0
    ctx->pc = 0x15c9fcu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x15ca00: 0x1042021  addu        $a0, $t0, $a0
    ctx->pc = 0x15ca00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x15ca04: 0x308800ff  andi        $t0, $a0, 0xFF
    ctx->pc = 0x15ca04u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_15ca08:
    // 0x15ca08: 0x8e260018  lw          $a2, 0x18($s1)
    ctx->pc = 0x15ca08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x15ca0c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x15ca0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x15ca10: 0x310500ff  andi        $a1, $t0, 0xFF
    ctx->pc = 0x15ca10u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x15ca14: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x15ca14u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x15ca18: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15ca18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x15ca1c: 0x3c03873c  lui         $v1, 0x873C
    ctx->pc = 0x15ca1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34620 << 16));
    // 0x15ca20: 0x3463a9e5  ori         $v1, $v1, 0xA9E5
    ctx->pc = 0x15ca20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43493);
    // 0x15ca24: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x15ca24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x15ca28: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x15ca28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x15ca2c: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x15ca2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x15ca30: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x15ca30u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x15ca34: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x15ca34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x15ca38: 0xae24001c  sw          $a0, 0x1C($s1)
    ctx->pc = 0x15ca38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 4));
    // 0x15ca3c: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x15ca3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x15ca40: 0x90840002  lbu         $a0, 0x2($a0)
    ctx->pc = 0x15ca40u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x15ca44: 0xa224002f  sb          $a0, 0x2F($s1)
    ctx->pc = 0x15ca44u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 47), (uint8_t)GPR_U32(ctx, 4));
    // 0x15ca48: 0x8c24f004  lw          $a0, -0xFFC($at)
    ctx->pc = 0x15ca48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294963204)));
    // 0x15ca4c: 0x42840  sll         $a1, $a0, 1
    ctx->pc = 0x15ca4cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x15ca50: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15ca50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x15ca54: 0x427c2  srl         $a0, $a0, 31
    ctx->pc = 0x15ca54u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x15ca58: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x15ca58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x15ca5c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x15ca5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x15ca60: 0x831826  xor         $v1, $a0, $v1
    ctx->pc = 0x15ca60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 3));
    // 0x15ca64: 0xac23f004  sw          $v1, -0xFFC($at)
    ctx->pc = 0x15ca64u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963204), GPR_U32(ctx, 3));
    // 0x15ca68: 0x34a02  srl         $t1, $v1, 8
    ctx->pc = 0x15ca68u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x15ca6c: 0x8e230090  lw          $v1, 0x90($s1)
    ctx->pc = 0x15ca6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x15ca70: 0x9063000b  lbu         $v1, 0xB($v1)
    ctx->pc = 0x15ca70u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 11)));
    // 0x15ca74: 0xa2230023  sb          $v1, 0x23($s1)
    ctx->pc = 0x15ca74u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 35), (uint8_t)GPR_U32(ctx, 3));
    // 0x15ca78: 0x8e230090  lw          $v1, 0x90($s1)
    ctx->pc = 0x15ca78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x15ca7c: 0x94680050  lhu         $t0, 0x50($v1)
    ctx->pc = 0x15ca7cu;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x15ca80: 0x15000003  bnez        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15CA80u;
    {
        const bool branch_taken_0x15ca80 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x15ca80) {
            ctx->pc = 0x15CA90u;
            goto label_15ca90;
        }
    }
    ctx->pc = 0x15CA88u;
    // 0x15ca88: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x15CA88u;
    {
        const bool branch_taken_0x15ca88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CA88u;
        // 0x15ca8c: 0xa22000a8  sb          $zero, 0xA8($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 168), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ca88) {
            ctx->pc = 0x15CB40u;
            goto label_15cb40;
        }
    }
    ctx->pc = 0x15CA90u;
label_15ca90:
    // 0x15ca90: 0x92230023  lbu         $v1, 0x23($s1)
    ctx->pc = 0x15ca90u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 35)));
    // 0x15ca94: 0x683821  addu        $a3, $v1, $t0
    ctx->pc = 0x15ca94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x15ca98: 0x28e10100  slti        $at, $a3, 0x100
    ctx->pc = 0x15ca98u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x15ca9c: 0x14200008  bnez        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x15CA9Cu;
    {
        const bool branch_taken_0x15ca9c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x15ca9c) {
            ctx->pc = 0x15CAC0u;
            goto label_15cac0;
        }
    }
    ctx->pc = 0x15CAA4u;
    // 0x15caa4: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x15caa4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x15caa8: 0xe34023  subu        $t0, $a3, $v1
    ctx->pc = 0x15caa8u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x15caac: 0x15000004  bnez        $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x15CAACu;
    {
        const bool branch_taken_0x15caac = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x15caac) {
            ctx->pc = 0x15CAC0u;
            goto label_15cac0;
        }
    }
    ctx->pc = 0x15CAB4u;
    // 0x15cab4: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x15CAB4u;
    {
        const bool branch_taken_0x15cab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CAB4u;
        // 0x15cab8: 0xa22000a8  sb          $zero, 0xA8($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 168), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cab4) {
            ctx->pc = 0x15CB40u;
            goto label_15cb40;
        }
    }
    ctx->pc = 0x15CABCu;
    // 0x15cabc: 0x0  nop
    ctx->pc = 0x15cabcu;
    // NOP
label_15cac0:
    // 0x15cac0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x15cac0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15cac4: 0xa22600a8  sb          $a2, 0xA8($s1)
    ctx->pc = 0x15cac4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 168), (uint8_t)GPR_U32(ctx, 6));
    // 0x15cac8: 0x8e230090  lw          $v1, 0x90($s1)
    ctx->pc = 0x15cac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x15cacc: 0x94630052  lhu         $v1, 0x52($v1)
    ctx->pc = 0x15caccu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 82)));
    // 0x15cad0: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x15CAD0u;
    {
        const bool branch_taken_0x15cad0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15cad0) {
            ctx->pc = 0x15CAF8u;
            goto label_15caf8;
        }
    }
    ctx->pc = 0x15CAD8u;
    // 0x15cad8: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x15cad8u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15cadc: 0x31230fff  andi        $v1, $t1, 0xFFF
    ctx->pc = 0x15cadcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)4095);
    // 0x15cae0: 0xa22000a9  sb          $zero, 0xA9($s1)
    ctx->pc = 0x15cae0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 169), (uint8_t)GPR_U32(ctx, 0));
    // 0x15cae4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x15cae4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x15cae8: 0xa62300aa  sh          $v1, 0xAA($s1)
    ctx->pc = 0x15cae8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 170), (uint16_t)GPR_U32(ctx, 3));
    // 0x15caec: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x15CAECu;
    {
        const bool branch_taken_0x15caec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CAECu;
        // 0x15caf0: 0xe62000ac  swc1        $f0, 0xAC($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 172), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15caec) {
            ctx->pc = 0x15CB40u;
            goto label_15cb40;
        }
    }
    ctx->pc = 0x15CAF4u;
    // 0x15caf4: 0x0  nop
    ctx->pc = 0x15caf4u;
    // NOP
label_15caf8:
    // 0x15caf8: 0xa22600a9  sb          $a2, 0xA9($s1)
    ctx->pc = 0x15caf8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 169), (uint8_t)GPR_U32(ctx, 6));
    // 0x15cafc: 0x92250023  lbu         $a1, 0x23($s1)
    ctx->pc = 0x15cafcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 35)));
    // 0x15cb00: 0x820c3  sra         $a0, $t0, 3
    ctx->pc = 0x15cb00u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 8), 3));
    // 0x15cb04: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x15cb04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x15cb08: 0xa22500aa  sb          $a1, 0xAA($s1)
    ctx->pc = 0x15cb08u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 170), (uint8_t)GPR_U32(ctx, 5));
    // 0x15cb0c: 0xa22700ab  sb          $a3, 0xAB($s1)
    ctx->pc = 0x15cb0cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 171), (uint8_t)GPR_U32(ctx, 7));
    // 0x15cb10: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x15CB10u;
    {
        const bool branch_taken_0x15cb10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15CB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CB10u;
        // 0x15cb14: 0xa22400ac  sb          $a0, 0xAC($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 172), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cb10) {
            ctx->pc = 0x15CB20u;
            goto label_15cb20;
        }
    }
    ctx->pc = 0x15CB18u;
    // 0x15cb18: 0xa22600ac  sb          $a2, 0xAC($s1)
    ctx->pc = 0x15cb18u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 172), (uint8_t)GPR_U32(ctx, 6));
    // 0x15cb1c: 0x0  nop
    ctx->pc = 0x15cb1cu;
    // NOP
label_15cb20:
    // 0x15cb20: 0x92230023  lbu         $v1, 0x23($s1)
    ctx->pc = 0x15cb20u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 35)));
    // 0x15cb24: 0x128001b  divu        $zero, $t1, $t0
    ctx->pc = 0x15cb24u;
    { uint32_t divisor = GPR_U32(ctx, 8); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 9) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 9) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,9); } }
    // 0x15cb28: 0x0  nop
    ctx->pc = 0x15cb28u;
    // NOP
    // 0x15cb2c: 0x0  nop
    ctx->pc = 0x15cb2cu;
    // NOP
    // 0x15cb30: 0x2010  mfhi        $a0
    ctx->pc = 0x15cb30u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x15cb34: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x15cb34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x15cb38: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15cb38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x15cb3c: 0xa2230023  sb          $v1, 0x23($s1)
    ctx->pc = 0x15cb3cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 35), (uint8_t)GPR_U32(ctx, 3));
label_15cb40:
    // 0x15cb40: 0x86030028  lh          $v1, 0x28($s0)
    ctx->pc = 0x15cb40u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x15cb44: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x15cb44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x15cb48: 0x26260050  addiu       $a2, $s1, 0x50
    ctx->pc = 0x15cb48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x15cb4c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15cb4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15cb50: 0xa6230048  sh          $v1, 0x48($s1)
    ctx->pc = 0x15cb50u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 72), (uint16_t)GPR_U32(ctx, 3));
    // 0x15cb54: 0x8603002a  lh          $v1, 0x2A($s0)
    ctx->pc = 0x15cb54u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 42)));
    // 0x15cb58: 0xa623004a  sh          $v1, 0x4A($s1)
    ctx->pc = 0x15cb58u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 74), (uint16_t)GPR_U32(ctx, 3));
    // 0x15cb5c: 0x8603002c  lh          $v1, 0x2C($s0)
    ctx->pc = 0x15cb5cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x15cb60: 0xa623004c  sh          $v1, 0x4C($s1)
    ctx->pc = 0x15cb60u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 76), (uint16_t)GPR_U32(ctx, 3));
    // 0x15cb64: 0x78870000  lq          $a3, 0x0($a0)
    ctx->pc = 0x15cb64u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x15cb68: 0x26030010  addiu       $v1, $s0, 0x10
    ctx->pc = 0x15cb68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x15cb6c: 0x7cc70000  sq          $a3, 0x0($a2)
    ctx->pc = 0x15cb6cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 7));
    // 0x15cb70: 0x26240060  addiu       $a0, $s1, 0x60
    ctx->pc = 0x15cb70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
    // 0x15cb74: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x15cb74u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x15cb78: 0x7c850000  sq          $a1, 0x0($a0)
    ctx->pc = 0x15cb78u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 5));
    // 0x15cb7c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x15cb7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15cb80: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15cb80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15cb84: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15cb84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15cb88: 0x3e00008  jr          $ra
    ctx->pc = 0x15CB88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15CB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CB88u;
        // 0x15cb8c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15CB88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15CB90u;
}
