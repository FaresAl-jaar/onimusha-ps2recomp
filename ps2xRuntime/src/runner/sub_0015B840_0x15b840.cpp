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

// Function: sub_0015B840
// Address: 0x15b840 - 0x15bd00
void sub_0015B840_0x15b840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015B840_0x15b840");
#endif

    switch (ctx->pc) {
        case 0x15b898u: goto label_15b898;
        case 0x15b958u: goto label_15b958;
        default: break;
    }

    ctx->pc = 0x15b840u;

    // 0x15b840: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x15b840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x15b844: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x15b844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x15b848: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15b848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15b84c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15b84cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15b850: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x15b850u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b854: 0xac900090  sw          $s0, 0x90($a0)
    ctx->pc = 0x15b854u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 144), GPR_U32(ctx, 16));
    // 0x15b858: 0x94a20004  lhu         $v0, 0x4($a1)
    ctx->pc = 0x15b858u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x15b85c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x15b85cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x15b860: 0xa4820010  sh          $v0, 0x10($a0)
    ctx->pc = 0x15b860u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x15b864: 0x94830010  lhu         $v1, 0x10($a0)
    ctx->pc = 0x15b864u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x15b868: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x15b868u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x15b86c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x15B86Cu;
    {
        const bool branch_taken_0x15b86c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B86Cu;
        // 0x15b870: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b86c) {
            ctx->pc = 0x15B880u;
            goto label_15b880;
        }
    }
    ctx->pc = 0x15B874u;
    // 0x15b874: 0x34620006  ori         $v0, $v1, 0x6
    ctx->pc = 0x15b874u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)6);
    // 0x15b878: 0xa6220010  sh          $v0, 0x10($s1)
    ctx->pc = 0x15b878u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x15b87c: 0x0  nop
    ctx->pc = 0x15b87cu;
    // NOP
label_15b880:
    // 0x15b880: 0x92020006  lbu         $v0, 0x6($s0)
    ctx->pc = 0x15b880u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x15b884: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15b884u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b888: 0xa2220012  sb          $v0, 0x12($s1)
    ctx->pc = 0x15b888u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 18), (uint8_t)GPR_U32(ctx, 2));
    // 0x15b88c: 0x92020007  lbu         $v0, 0x7($s0)
    ctx->pc = 0x15b88cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
    // 0x15b890: 0xc05965c  jal         func_165970
    ctx->pc = 0x15B890u;
    SET_GPR_U32(ctx, 31, 0x15B898u);
    ctx->pc = 0x15B894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B890u;
    // 0x15b894: 0xa2220013  sb          $v0, 0x13($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 19), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165970u, 0x15B890u, 0x15B898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B898u;
label_15b898:
    // 0x15b898: 0x8603002a  lh          $v1, 0x2A($s0)
    ctx->pc = 0x15b898u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 42)));
    // 0x15b89c: 0xa623002c  sh          $v1, 0x2C($s1)
    ctx->pc = 0x15b89cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 44), (uint16_t)GPR_U32(ctx, 3));
    // 0x15b8a0: 0x9203002c  lbu         $v1, 0x2C($s0)
    ctx->pc = 0x15b8a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x15b8a4: 0xa223004e  sb          $v1, 0x4E($s1)
    ctx->pc = 0x15b8a4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 78), (uint8_t)GPR_U32(ctx, 3));
    // 0x15b8a8: 0x9203000e  lbu         $v1, 0xE($s0)
    ctx->pc = 0x15b8a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x15b8ac: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x15B8ACu;
    {
        const bool branch_taken_0x15b8ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b8ac) {
            ctx->pc = 0x15B8C0u;
            goto label_15b8c0;
        }
    }
    ctx->pc = 0x15B8B4u;
    // 0x15b8b4: 0x96230010  lhu         $v1, 0x10($s1)
    ctx->pc = 0x15b8b4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x15b8b8: 0x34630400  ori         $v1, $v1, 0x400
    ctx->pc = 0x15b8b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1024);
    // 0x15b8bc: 0xa6230010  sh          $v1, 0x10($s1)
    ctx->pc = 0x15b8bcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 16), (uint16_t)GPR_U32(ctx, 3));
label_15b8c0:
    // 0x15b8c0: 0x92030020  lbu         $v1, 0x20($s0)
    ctx->pc = 0x15b8c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x15b8c4: 0x92040021  lbu         $a0, 0x21($s0)
    ctx->pc = 0x15b8c4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 33)));
    // 0x15b8c8: 0x14640003  bne         $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15B8C8u;
    {
        const bool branch_taken_0x15b8c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x15b8c8) {
            ctx->pc = 0x15B8D8u;
            goto label_15b8d8;
        }
    }
    ctx->pc = 0x15B8D0u;
    // 0x15b8d0: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x15B8D0u;
    {
        const bool branch_taken_0x15b8d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b8d0) {
            ctx->pc = 0x15B930u;
            goto label_15b930;
        }
    }
    ctx->pc = 0x15B8D8u;
label_15b8d8:
    // 0x15b8d8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15b8d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x15b8dc: 0x8c24f004  lw          $a0, -0xFFC($at)
    ctx->pc = 0x15b8dcu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x81F004u));
    // 0x15b8e0: 0x3c03873c  lui         $v1, 0x873C
    ctx->pc = 0x15b8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34620 << 16));
    // 0x15b8e4: 0x3463a9e5  ori         $v1, $v1, 0xA9E5
    ctx->pc = 0x15b8e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43493);
    // 0x15b8e8: 0x42840  sll         $a1, $a0, 1
    ctx->pc = 0x15b8e8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x15b8ec: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15b8ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x15b8f0: 0x427c2  srl         $a0, $a0, 31
    ctx->pc = 0x15b8f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x15b8f4: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x15b8f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x15b8f8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x15b8f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x15b8fc: 0x831826  xor         $v1, $a0, $v1
    ctx->pc = 0x15b8fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 3));
    // 0x15b900: 0xac23f004  sw          $v1, -0xFFC($at)
    ctx->pc = 0x15b900u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963204), GPR_U32(ctx, 3));
    // 0x15b904: 0x32a02  srl         $a1, $v1, 8
    ctx->pc = 0x15b904u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x15b908: 0x92030021  lbu         $v1, 0x21($s0)
    ctx->pc = 0x15b908u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 33)));
    // 0x15b90c: 0x92040020  lbu         $a0, 0x20($s0)
    ctx->pc = 0x15b90cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x15b910: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x15b910u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x15b914: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x15b914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x15b918: 0xa3001b  divu        $zero, $a1, $v1
    ctx->pc = 0x15b918u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
    // 0x15b91c: 0x0  nop
    ctx->pc = 0x15b91cu;
    // NOP
    // 0x15b920: 0x0  nop
    ctx->pc = 0x15b920u;
    // NOP
    // 0x15b924: 0x1810  mfhi        $v1
    ctx->pc = 0x15b924u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x15b928: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x15b928u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x15b92c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x15b92cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_15b930:
    // 0x15b930: 0x8e250018  lw          $a1, 0x18($s1)
    ctx->pc = 0x15b930u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x15b934: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x15b934u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x15b938: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15b938u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b93c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x15b93cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x15b940: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x15b940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x15b944: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x15b944u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x15b948: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x15b948u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x15b94c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x15B94Cu;
    {
        const bool branch_taken_0x15b94c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B94Cu;
        // 0x15b950: 0xa42821  addu        $a1, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b94c) {
            ctx->pc = 0x15B960u;
            goto label_15b960;
        }
    }
    ctx->pc = 0x15B954u;
    // 0x15b954: 0x0  nop
    ctx->pc = 0x15b954u;
    // NOP
label_15b958:
    // 0x15b958: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x15b958u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x15b95c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x15b95cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_15b960:
    // 0x15b960: 0x90a40002  lbu         $a0, 0x2($a1)
    ctx->pc = 0x15b960u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x15b964: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x15B964u;
    {
        const bool branch_taken_0x15b964 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b964) {
            ctx->pc = 0x15B980u;
            goto label_15b980;
        }
    }
    ctx->pc = 0x15B96Cu;
    // 0x15b96c: 0x90a40003  lbu         $a0, 0x3($a1)
    ctx->pc = 0x15b96cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
    // 0x15b970: 0x30840010  andi        $a0, $a0, 0x10
    ctx->pc = 0x15b970u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16);
    // 0x15b974: 0x1080fff8  beqz        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x15B974u;
    {
        const bool branch_taken_0x15b974 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b974) {
            ctx->pc = 0x15B958u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15b958;
        }
    }
    ctx->pc = 0x15B97Cu;
    // 0x15b97c: 0x0  nop
    ctx->pc = 0x15b97cu;
    // NOP
label_15b980:
    // 0x15b980: 0x92070023  lbu         $a3, 0x23($s0)
    ctx->pc = 0x15b980u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 35)));
    // 0x15b984: 0x30c400ff  andi        $a0, $a2, 0xFF
    ctx->pc = 0x15b984u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x15b988: 0x2485ffff  addiu       $a1, $a0, -0x1
    ctx->pc = 0x15b988u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x15b98c: 0xe5202a  slt         $a0, $a3, $a1
    ctx->pc = 0x15b98cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x15b990: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x15B990u;
    {
        const bool branch_taken_0x15b990 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x15B994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B990u;
        // 0x15b994: 0x92060022  lbu         $a2, 0x22($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 34)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b990) {
            ctx->pc = 0x15B9B0u;
            goto label_15b9b0;
        }
    }
    ctx->pc = 0x15B998u;
    // 0x15b998: 0x30a700ff  andi        $a3, $a1, 0xFF
    ctx->pc = 0x15b998u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x15b99c: 0x30c400ff  andi        $a0, $a2, 0xFF
    ctx->pc = 0x15b99cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x15b9a0: 0x87202a  slt         $a0, $a0, $a3
    ctx->pc = 0x15b9a0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x15b9a4: 0x14800002  bnez        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x15B9A4u;
    {
        const bool branch_taken_0x15b9a4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x15b9a4) {
            ctx->pc = 0x15B9B0u;
            goto label_15b9b0;
        }
    }
    ctx->pc = 0x15B9ACu;
    // 0x15b9ac: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x15b9acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_15b9b0:
    // 0x15b9b0: 0x30c800ff  andi        $t0, $a2, 0xFF
    ctx->pc = 0x15b9b0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x15b9b4: 0x30e400ff  andi        $a0, $a3, 0xFF
    ctx->pc = 0x15b9b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x15b9b8: 0x15040003  bne         $t0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15B9B8u;
    {
        const bool branch_taken_0x15b9b8 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 4));
        if (branch_taken_0x15b9b8) {
            ctx->pc = 0x15B9C8u;
            goto label_15b9c8;
        }
    }
    ctx->pc = 0x15B9C0u;
    // 0x15b9c0: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x15B9C0u;
    {
        const bool branch_taken_0x15b9c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b9c0) {
            ctx->pc = 0x15BA18u;
            goto label_15ba18;
        }
    }
    ctx->pc = 0x15B9C8u;
label_15b9c8:
    // 0x15b9c8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15b9c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x15b9cc: 0x8c26f004  lw          $a2, -0xFFC($at)
    ctx->pc = 0x15b9ccu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x81F004u));
    // 0x15b9d0: 0x3c05873c  lui         $a1, 0x873C
    ctx->pc = 0x15b9d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34620 << 16));
    // 0x15b9d4: 0x882023  subu        $a0, $a0, $t0
    ctx->pc = 0x15b9d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x15b9d8: 0x34a5a9e5  ori         $a1, $a1, 0xA9E5
    ctx->pc = 0x15b9d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)43493);
    // 0x15b9dc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x15b9dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x15b9e0: 0x63840  sll         $a3, $a2, 1
    ctx->pc = 0x15b9e0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x15b9e4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15b9e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x15b9e8: 0x637c2  srl         $a2, $a2, 31
    ctx->pc = 0x15b9e8u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x15b9ec: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x15b9ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x15b9f0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x15b9f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x15b9f4: 0xc52826  xor         $a1, $a2, $a1
    ctx->pc = 0x15b9f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 5));
    // 0x15b9f8: 0xac25f004  sw          $a1, -0xFFC($at)
    ctx->pc = 0x15b9f8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963204), GPR_U32(ctx, 5));
    // 0x15b9fc: 0x52a02  srl         $a1, $a1, 8
    ctx->pc = 0x15b9fcu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 8));
    // 0x15ba00: 0xa4001b  divu        $zero, $a1, $a0
    ctx->pc = 0x15ba00u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
    // 0x15ba04: 0x0  nop
    ctx->pc = 0x15ba04u;
    // NOP
    // 0x15ba08: 0x0  nop
    ctx->pc = 0x15ba08u;
    // NOP
    // 0x15ba0c: 0x2010  mfhi        $a0
    ctx->pc = 0x15ba0cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x15ba10: 0x1042021  addu        $a0, $t0, $a0
    ctx->pc = 0x15ba10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x15ba14: 0x308800ff  andi        $t0, $a0, 0xFF
    ctx->pc = 0x15ba14u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_15ba18:
    // 0x15ba18: 0x8e260018  lw          $a2, 0x18($s1)
    ctx->pc = 0x15ba18u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x15ba1c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x15ba1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x15ba20: 0x310500ff  andi        $a1, $t0, 0xFF
    ctx->pc = 0x15ba20u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x15ba24: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x15ba24u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x15ba28: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15ba28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x15ba2c: 0x3c03873c  lui         $v1, 0x873C
    ctx->pc = 0x15ba2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34620 << 16));
    // 0x15ba30: 0x3463a9e5  ori         $v1, $v1, 0xA9E5
    ctx->pc = 0x15ba30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43493);
    // 0x15ba34: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x15ba34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x15ba38: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x15ba38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x15ba3c: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x15ba3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x15ba40: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x15ba40u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x15ba44: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x15ba44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x15ba48: 0xae24001c  sw          $a0, 0x1C($s1)
    ctx->pc = 0x15ba48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 4));
    // 0x15ba4c: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x15ba4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x15ba50: 0x90840002  lbu         $a0, 0x2($a0)
    ctx->pc = 0x15ba50u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x15ba54: 0xa224002f  sb          $a0, 0x2F($s1)
    ctx->pc = 0x15ba54u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 47), (uint8_t)GPR_U32(ctx, 4));
    // 0x15ba58: 0x8c24f004  lw          $a0, -0xFFC($at)
    ctx->pc = 0x15ba58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294963204)));
    // 0x15ba5c: 0x42840  sll         $a1, $a0, 1
    ctx->pc = 0x15ba5cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x15ba60: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15ba60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x15ba64: 0x427c2  srl         $a0, $a0, 31
    ctx->pc = 0x15ba64u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x15ba68: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x15ba68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x15ba6c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x15ba6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x15ba70: 0x831826  xor         $v1, $a0, $v1
    ctx->pc = 0x15ba70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 3));
    // 0x15ba74: 0xac23f004  sw          $v1, -0xFFC($at)
    ctx->pc = 0x15ba74u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963204), GPR_U32(ctx, 3));
    // 0x15ba78: 0x34a02  srl         $t1, $v1, 8
    ctx->pc = 0x15ba78u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x15ba7c: 0x8e230090  lw          $v1, 0x90($s1)
    ctx->pc = 0x15ba7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x15ba80: 0x9063000b  lbu         $v1, 0xB($v1)
    ctx->pc = 0x15ba80u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 11)));
    // 0x15ba84: 0xa2230023  sb          $v1, 0x23($s1)
    ctx->pc = 0x15ba84u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 35), (uint8_t)GPR_U32(ctx, 3));
    // 0x15ba88: 0x8e230090  lw          $v1, 0x90($s1)
    ctx->pc = 0x15ba88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x15ba8c: 0x94680030  lhu         $t0, 0x30($v1)
    ctx->pc = 0x15ba8cu;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x15ba90: 0x15000003  bnez        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15BA90u;
    {
        const bool branch_taken_0x15ba90 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x15ba90) {
            ctx->pc = 0x15BAA0u;
            goto label_15baa0;
        }
    }
    ctx->pc = 0x15BA98u;
    // 0x15ba98: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x15BA98u;
    {
        const bool branch_taken_0x15ba98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BA98u;
        // 0x15ba9c: 0xa22000a0  sb          $zero, 0xA0($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 160), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ba98) {
            ctx->pc = 0x15BB50u;
            goto label_15bb50;
        }
    }
    ctx->pc = 0x15BAA0u;
label_15baa0:
    // 0x15baa0: 0x92230023  lbu         $v1, 0x23($s1)
    ctx->pc = 0x15baa0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 35)));
    // 0x15baa4: 0x683821  addu        $a3, $v1, $t0
    ctx->pc = 0x15baa4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x15baa8: 0x28e10100  slti        $at, $a3, 0x100
    ctx->pc = 0x15baa8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x15baac: 0x14200008  bnez        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x15BAACu;
    {
        const bool branch_taken_0x15baac = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x15baac) {
            ctx->pc = 0x15BAD0u;
            goto label_15bad0;
        }
    }
    ctx->pc = 0x15BAB4u;
    // 0x15bab4: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x15bab4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x15bab8: 0xe34023  subu        $t0, $a3, $v1
    ctx->pc = 0x15bab8u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x15babc: 0x15000004  bnez        $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x15BABCu;
    {
        const bool branch_taken_0x15babc = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x15babc) {
            ctx->pc = 0x15BAD0u;
            goto label_15bad0;
        }
    }
    ctx->pc = 0x15BAC4u;
    // 0x15bac4: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x15BAC4u;
    {
        const bool branch_taken_0x15bac4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BAC4u;
        // 0x15bac8: 0xa22000a0  sb          $zero, 0xA0($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 160), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bac4) {
            ctx->pc = 0x15BB50u;
            goto label_15bb50;
        }
    }
    ctx->pc = 0x15BACCu;
    // 0x15bacc: 0x0  nop
    ctx->pc = 0x15baccu;
    // NOP
label_15bad0:
    // 0x15bad0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x15bad0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15bad4: 0xa22600a0  sb          $a2, 0xA0($s1)
    ctx->pc = 0x15bad4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 160), (uint8_t)GPR_U32(ctx, 6));
    // 0x15bad8: 0x8e230090  lw          $v1, 0x90($s1)
    ctx->pc = 0x15bad8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x15badc: 0x94630032  lhu         $v1, 0x32($v1)
    ctx->pc = 0x15badcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 50)));
    // 0x15bae0: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x15BAE0u;
    {
        const bool branch_taken_0x15bae0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15bae0) {
            ctx->pc = 0x15BB08u;
            goto label_15bb08;
        }
    }
    ctx->pc = 0x15BAE8u;
    // 0x15bae8: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x15bae8u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15baec: 0x31230fff  andi        $v1, $t1, 0xFFF
    ctx->pc = 0x15baecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)4095);
    // 0x15baf0: 0xa22000a1  sb          $zero, 0xA1($s1)
    ctx->pc = 0x15baf0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 161), (uint8_t)GPR_U32(ctx, 0));
    // 0x15baf4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x15baf4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x15baf8: 0xa62300a2  sh          $v1, 0xA2($s1)
    ctx->pc = 0x15baf8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 162), (uint16_t)GPR_U32(ctx, 3));
    // 0x15bafc: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x15BAFCu;
    {
        const bool branch_taken_0x15bafc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BAFCu;
        // 0x15bb00: 0xe62000a4  swc1        $f0, 0xA4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 164), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bafc) {
            ctx->pc = 0x15BB50u;
            goto label_15bb50;
        }
    }
    ctx->pc = 0x15BB04u;
    // 0x15bb04: 0x0  nop
    ctx->pc = 0x15bb04u;
    // NOP
label_15bb08:
    // 0x15bb08: 0xa22600a1  sb          $a2, 0xA1($s1)
    ctx->pc = 0x15bb08u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 161), (uint8_t)GPR_U32(ctx, 6));
    // 0x15bb0c: 0x92250023  lbu         $a1, 0x23($s1)
    ctx->pc = 0x15bb0cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 35)));
    // 0x15bb10: 0x820c3  sra         $a0, $t0, 3
    ctx->pc = 0x15bb10u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 8), 3));
    // 0x15bb14: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x15bb14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x15bb18: 0xa22500a2  sb          $a1, 0xA2($s1)
    ctx->pc = 0x15bb18u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 162), (uint8_t)GPR_U32(ctx, 5));
    // 0x15bb1c: 0xa22700a3  sb          $a3, 0xA3($s1)
    ctx->pc = 0x15bb1cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 163), (uint8_t)GPR_U32(ctx, 7));
    // 0x15bb20: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x15BB20u;
    {
        const bool branch_taken_0x15bb20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15BB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BB20u;
        // 0x15bb24: 0xa22400a4  sb          $a0, 0xA4($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 164), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bb20) {
            ctx->pc = 0x15BB30u;
            goto label_15bb30;
        }
    }
    ctx->pc = 0x15BB28u;
    // 0x15bb28: 0xa22600a4  sb          $a2, 0xA4($s1)
    ctx->pc = 0x15bb28u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 164), (uint8_t)GPR_U32(ctx, 6));
    // 0x15bb2c: 0x0  nop
    ctx->pc = 0x15bb2cu;
    // NOP
label_15bb30:
    // 0x15bb30: 0x92230023  lbu         $v1, 0x23($s1)
    ctx->pc = 0x15bb30u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 35)));
    // 0x15bb34: 0x128001b  divu        $zero, $t1, $t0
    ctx->pc = 0x15bb34u;
    { uint32_t divisor = GPR_U32(ctx, 8); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 9) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 9) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,9); } }
    // 0x15bb38: 0x0  nop
    ctx->pc = 0x15bb38u;
    // NOP
    // 0x15bb3c: 0x0  nop
    ctx->pc = 0x15bb3cu;
    // NOP
    // 0x15bb40: 0x2010  mfhi        $a0
    ctx->pc = 0x15bb40u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x15bb44: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x15bb44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x15bb48: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15bb48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x15bb4c: 0xa2230023  sb          $v1, 0x23($s1)
    ctx->pc = 0x15bb4cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 35), (uint8_t)GPR_U32(ctx, 3));
label_15bb50:
    // 0x15bb50: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15bb50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x15bb54: 0x8c26f004  lw          $a2, -0xFFC($at)
    ctx->pc = 0x15bb54u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x81F004u));
    // 0x15bb58: 0x3c03873c  lui         $v1, 0x873C
    ctx->pc = 0x15bb58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34620 << 16));
    // 0x15bb5c: 0x3463a9e5  ori         $v1, $v1, 0xA9E5
    ctx->pc = 0x15bb5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43493);
    // 0x15bb60: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x15bb60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x15bb64: 0x24040fff  addiu       $a0, $zero, 0xFFF
    ctx->pc = 0x15bb64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4095));
    // 0x15bb68: 0x63840  sll         $a3, $a2, 1
    ctx->pc = 0x15bb68u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x15bb6c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15bb6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x15bb70: 0x637c2  srl         $a2, $a2, 31
    ctx->pc = 0x15bb70u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x15bb74: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x15bb74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x15bb78: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x15bb78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x15bb7c: 0xc31826  xor         $v1, $a2, $v1
    ctx->pc = 0x15bb7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 3));
    // 0x15bb80: 0xac23f004  sw          $v1, -0xFFC($at)
    ctx->pc = 0x15bb80u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963204), GPR_U32(ctx, 3));
    // 0x15bb84: 0x34202  srl         $t0, $v1, 8
    ctx->pc = 0x15bb84u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x15bb88: 0x8e230090  lw          $v1, 0x90($s1)
    ctx->pc = 0x15bb88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x15bb8c: 0x90660028  lbu         $a2, 0x28($v1)
    ctx->pc = 0x15bb8cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x15bb90: 0x94630024  lhu         $v1, 0x24($v1)
    ctx->pc = 0x15bb90u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x15bb94: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x15bb94u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x15bb98: 0xa42007  srav        $a0, $a0, $a1
    ctx->pc = 0x15bb98u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 5) & 0x1F));
    // 0x15bb9c: 0x1042024  and         $a0, $t0, $a0
    ctx->pc = 0x15bb9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) & GPR_U64(ctx, 4));
    // 0x15bba0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15bba0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x15bba4: 0xa6230028  sh          $v1, 0x28($s1)
    ctx->pc = 0x15bba4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 40), (uint16_t)GPR_U32(ctx, 3));
    // 0x15bba8: 0x8e230090  lw          $v1, 0x90($s1)
    ctx->pc = 0x15bba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x15bbac: 0x94660034  lhu         $a2, 0x34($v1)
    ctx->pc = 0x15bbacu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x15bbb0: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x15BBB0u;
    {
        const bool branch_taken_0x15bbb0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x15bbb0) {
            ctx->pc = 0x15BBC0u;
            goto label_15bbc0;
        }
    }
    ctx->pc = 0x15BBB8u;
    // 0x15bbb8: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x15BBB8u;
    {
        const bool branch_taken_0x15bbb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BBB8u;
        // 0x15bbbc: 0xa22000a8  sb          $zero, 0xA8($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 168), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bbb8) {
            ctx->pc = 0x15BC70u;
            goto label_15bc70;
        }
    }
    ctx->pc = 0x15BBC0u;
label_15bbc0:
    // 0x15bbc0: 0x96230028  lhu         $v1, 0x28($s1)
    ctx->pc = 0x15bbc0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x15bbc4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x15bbc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x15bbc8: 0x663821  addu        $a3, $v1, $a2
    ctx->pc = 0x15bbc8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x15bbcc: 0xe1082a  slt         $at, $a3, $at
    ctx->pc = 0x15bbccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x15bbd0: 0x14200007  bnez        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x15BBD0u;
    {
        const bool branch_taken_0x15bbd0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x15bbd0) {
            ctx->pc = 0x15BBF0u;
            goto label_15bbf0;
        }
    }
    ctx->pc = 0x15BBD8u;
    // 0x15bbd8: 0x3407ffff  ori         $a3, $zero, 0xFFFF
    ctx->pc = 0x15bbd8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x15bbdc: 0xe33023  subu        $a2, $a3, $v1
    ctx->pc = 0x15bbdcu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x15bbe0: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x15BBE0u;
    {
        const bool branch_taken_0x15bbe0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x15bbe0) {
            ctx->pc = 0x15BBF0u;
            goto label_15bbf0;
        }
    }
    ctx->pc = 0x15BBE8u;
    // 0x15bbe8: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x15BBE8u;
    {
        const bool branch_taken_0x15bbe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BBE8u;
        // 0x15bbec: 0xa22000a8  sb          $zero, 0xA8($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 168), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bbe8) {
            ctx->pc = 0x15BC70u;
            goto label_15bc70;
        }
    }
    ctx->pc = 0x15BBF0u;
label_15bbf0:
    // 0x15bbf0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x15bbf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15bbf4: 0xa22400a8  sb          $a0, 0xA8($s1)
    ctx->pc = 0x15bbf4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 168), (uint8_t)GPR_U32(ctx, 4));
    // 0x15bbf8: 0x8e230090  lw          $v1, 0x90($s1)
    ctx->pc = 0x15bbf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x15bbfc: 0x94630036  lhu         $v1, 0x36($v1)
    ctx->pc = 0x15bbfcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 54)));
    // 0x15bc00: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x15BC00u;
    {
        const bool branch_taken_0x15bc00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15bc00) {
            ctx->pc = 0x15BC28u;
            goto label_15bc28;
        }
    }
    ctx->pc = 0x15BC08u;
    // 0x15bc08: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x15bc08u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15bc0c: 0x81b02  srl         $v1, $t0, 12
    ctx->pc = 0x15bc0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), 12));
    // 0x15bc10: 0xa22000a9  sb          $zero, 0xA9($s1)
    ctx->pc = 0x15bc10u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 169), (uint8_t)GPR_U32(ctx, 0));
    // 0x15bc14: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x15bc14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x15bc18: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x15bc18u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x15bc1c: 0xa62300aa  sh          $v1, 0xAA($s1)
    ctx->pc = 0x15bc1cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 170), (uint16_t)GPR_U32(ctx, 3));
    // 0x15bc20: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x15BC20u;
    {
        const bool branch_taken_0x15bc20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BC20u;
        // 0x15bc24: 0xe62000ac  swc1        $f0, 0xAC($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 172), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bc20) {
            ctx->pc = 0x15BC70u;
            goto label_15bc70;
        }
    }
    ctx->pc = 0x15BC28u;
label_15bc28:
    // 0x15bc28: 0xa22400a9  sb          $a0, 0xA9($s1)
    ctx->pc = 0x15bc28u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 169), (uint8_t)GPR_U32(ctx, 4));
    // 0x15bc2c: 0x96250028  lhu         $a1, 0x28($s1)
    ctx->pc = 0x15bc2cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x15bc30: 0x620c3  sra         $a0, $a2, 3
    ctx->pc = 0x15bc30u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 6), 3));
    // 0x15bc34: 0x3083ffff  andi        $v1, $a0, 0xFFFF
    ctx->pc = 0x15bc34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x15bc38: 0xa62500aa  sh          $a1, 0xAA($s1)
    ctx->pc = 0x15bc38u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 170), (uint16_t)GPR_U32(ctx, 5));
    // 0x15bc3c: 0xa62700ac  sh          $a3, 0xAC($s1)
    ctx->pc = 0x15bc3cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 172), (uint16_t)GPR_U32(ctx, 7));
    // 0x15bc40: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x15BC40u;
    {
        const bool branch_taken_0x15bc40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15BC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BC40u;
        // 0x15bc44: 0xa62400ae  sh          $a0, 0xAE($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 174), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bc40) {
            ctx->pc = 0x15BC50u;
            goto label_15bc50;
        }
    }
    ctx->pc = 0x15BC48u;
    // 0x15bc48: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x15bc48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x15bc4c: 0xa62300ae  sh          $v1, 0xAE($s1)
    ctx->pc = 0x15bc4cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 174), (uint16_t)GPR_U32(ctx, 3));
label_15bc50:
    // 0x15bc50: 0x81b02  srl         $v1, $t0, 12
    ctx->pc = 0x15bc50u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), 12));
    // 0x15bc54: 0x66001b  divu        $zero, $v1, $a2
    ctx->pc = 0x15bc54u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x15bc58: 0x96230028  lhu         $v1, 0x28($s1)
    ctx->pc = 0x15bc58u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x15bc5c: 0x0  nop
    ctx->pc = 0x15bc5cu;
    // NOP
    // 0x15bc60: 0x2010  mfhi        $a0
    ctx->pc = 0x15bc60u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x15bc64: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x15bc64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x15bc68: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15bc68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x15bc6c: 0xa6230028  sh          $v1, 0x28($s1)
    ctx->pc = 0x15bc6cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 40), (uint16_t)GPR_U32(ctx, 3));
label_15bc70:
    // 0x15bc70: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15bc70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x15bc74: 0x8c27f004  lw          $a3, -0xFFC($at)
    ctx->pc = 0x15bc74u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x81F004u));
    // 0x15bc78: 0x3c03873c  lui         $v1, 0x873C
    ctx->pc = 0x15bc78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34620 << 16));
    // 0x15bc7c: 0x3464a9e5  ori         $a0, $v1, 0xA9E5
    ctx->pc = 0x15bc7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43493);
    // 0x15bc80: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x15bc80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x15bc84: 0x24050fff  addiu       $a1, $zero, 0xFFF
    ctx->pc = 0x15bc84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4095));
    // 0x15bc88: 0x26090010  addiu       $t1, $s0, 0x10
    ctx->pc = 0x15bc88u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x15bc8c: 0x26230050  addiu       $v1, $s1, 0x50
    ctx->pc = 0x15bc8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x15bc90: 0x74040  sll         $t0, $a3, 1
    ctx->pc = 0x15bc90u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x15bc94: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15bc94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x15bc98: 0x73fc2  srl         $a3, $a3, 31
    ctx->pc = 0x15bc98u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 7), 31));
    // 0x15bc9c: 0x1073821  addu        $a3, $t0, $a3
    ctx->pc = 0x15bc9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x15bca0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x15bca0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x15bca4: 0xe42026  xor         $a0, $a3, $a0
    ctx->pc = 0x15bca4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) ^ GPR_U64(ctx, 4));
    // 0x15bca8: 0xac24f004  sw          $a0, -0xFFC($at)
    ctx->pc = 0x15bca8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963204), GPR_U32(ctx, 4));
    // 0x15bcac: 0x44202  srl         $t0, $a0, 8
    ctx->pc = 0x15bcacu;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
    // 0x15bcb0: 0x92070029  lbu         $a3, 0x29($s0)
    ctx->pc = 0x15bcb0u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 41)));
    // 0x15bcb4: 0x96040026  lhu         $a0, 0x26($s0)
    ctx->pc = 0x15bcb4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 38)));
    // 0x15bcb8: 0xc73023  subu        $a2, $a2, $a3
    ctx->pc = 0x15bcb8u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x15bcbc: 0xc52807  srav        $a1, $a1, $a2
    ctx->pc = 0x15bcbcu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), GPR_U32(ctx, 6) & 0x1F));
    // 0x15bcc0: 0xa82824  and         $a1, $a1, $t0
    ctx->pc = 0x15bcc0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 8));
    // 0x15bcc4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15bcc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15bcc8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x15bcc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x15bccc: 0x30840fff  andi        $a0, $a0, 0xFFF
    ctx->pc = 0x15bcccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
    // 0x15bcd0: 0x26250060  addiu       $a1, $s1, 0x60
    ctx->pc = 0x15bcd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
    // 0x15bcd4: 0xa624002a  sh          $a0, 0x2A($s1)
    ctx->pc = 0x15bcd4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 42), (uint16_t)GPR_U32(ctx, 4));
    // 0x15bcd8: 0x79270000  lq          $a3, 0x0($t1)
    ctx->pc = 0x15bcd8u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x15bcdc: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x15bcdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x15bce0: 0x7c670000  sq          $a3, 0x0($v1)
    ctx->pc = 0x15bce0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 7));
    // 0x15bce4: 0x78860000  lq          $a2, 0x0($a0)
    ctx->pc = 0x15bce4u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x15bce8: 0x7ca60000  sq          $a2, 0x0($a1)
    ctx->pc = 0x15bce8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 6));
    // 0x15bcec: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x15bcecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15bcf0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15bcf0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15bcf4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15bcf4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15bcf8: 0x3e00008  jr          $ra
    ctx->pc = 0x15BCF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15BCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BCF8u;
        // 0x15bcfc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15BCF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15BD00u;
}
