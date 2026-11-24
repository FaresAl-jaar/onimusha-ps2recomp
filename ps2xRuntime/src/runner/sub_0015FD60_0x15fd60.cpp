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

// Function: sub_0015FD60
// Address: 0x15fd60 - 0x1600c0
void sub_0015FD60_0x15fd60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015FD60_0x15fd60");
#endif

    switch (ctx->pc) {
        case 0x15fdb8u: goto label_15fdb8;
        case 0x15fe78u: goto label_15fe78;
        default: break;
    }

    ctx->pc = 0x15fd60u;

    // 0x15fd60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x15fd60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x15fd64: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x15fd64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x15fd68: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15fd68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15fd6c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15fd6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15fd70: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x15fd70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15fd74: 0xac900090  sw          $s0, 0x90($a0)
    ctx->pc = 0x15fd74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 144), GPR_U32(ctx, 16));
    // 0x15fd78: 0x94a20004  lhu         $v0, 0x4($a1)
    ctx->pc = 0x15fd78u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x15fd7c: 0x34420041  ori         $v0, $v0, 0x41
    ctx->pc = 0x15fd7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65);
    // 0x15fd80: 0xa4820010  sh          $v0, 0x10($a0)
    ctx->pc = 0x15fd80u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x15fd84: 0x94830010  lhu         $v1, 0x10($a0)
    ctx->pc = 0x15fd84u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x15fd88: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x15fd88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x15fd8c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x15FD8Cu;
    {
        const bool branch_taken_0x15fd8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15FD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FD8Cu;
        // 0x15fd90: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15fd8c) {
            ctx->pc = 0x15FDA0u;
            goto label_15fda0;
        }
    }
    ctx->pc = 0x15FD94u;
    // 0x15fd94: 0x34620006  ori         $v0, $v1, 0x6
    ctx->pc = 0x15fd94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)6);
    // 0x15fd98: 0xa6220010  sh          $v0, 0x10($s1)
    ctx->pc = 0x15fd98u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x15fd9c: 0x0  nop
    ctx->pc = 0x15fd9cu;
    // NOP
label_15fda0:
    // 0x15fda0: 0x92020006  lbu         $v0, 0x6($s0)
    ctx->pc = 0x15fda0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x15fda4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15fda4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15fda8: 0xa2220012  sb          $v0, 0x12($s1)
    ctx->pc = 0x15fda8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 18), (uint8_t)GPR_U32(ctx, 2));
    // 0x15fdac: 0x92020007  lbu         $v0, 0x7($s0)
    ctx->pc = 0x15fdacu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
    // 0x15fdb0: 0xc05972c  jal         func_165CB0
    ctx->pc = 0x15FDB0u;
    SET_GPR_U32(ctx, 31, 0x15FDB8u);
    ctx->pc = 0x15FDB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15FDB0u;
    // 0x15fdb4: 0xa2220013  sb          $v0, 0x13($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 19), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165CB0u, 0x15FDB0u, 0x15FDB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15FDB8u;
label_15fdb8:
    // 0x15fdb8: 0x86040024  lh          $a0, 0x24($s0)
    ctx->pc = 0x15fdb8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x15fdbc: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x15fdbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x15fdc0: 0xa624002c  sh          $a0, 0x2C($s1)
    ctx->pc = 0x15fdc0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 44), (uint16_t)GPR_U32(ctx, 4));
    // 0x15fdc4: 0xa223004e  sb          $v1, 0x4E($s1)
    ctx->pc = 0x15fdc4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 78), (uint8_t)GPR_U32(ctx, 3));
    // 0x15fdc8: 0x9203000e  lbu         $v1, 0xE($s0)
    ctx->pc = 0x15fdc8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x15fdcc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x15FDCCu;
    {
        const bool branch_taken_0x15fdcc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15fdcc) {
            ctx->pc = 0x15FDE0u;
            goto label_15fde0;
        }
    }
    ctx->pc = 0x15FDD4u;
    // 0x15fdd4: 0x96230010  lhu         $v1, 0x10($s1)
    ctx->pc = 0x15fdd4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x15fdd8: 0x34630400  ori         $v1, $v1, 0x400
    ctx->pc = 0x15fdd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1024);
    // 0x15fddc: 0xa6230010  sh          $v1, 0x10($s1)
    ctx->pc = 0x15fddcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 16), (uint16_t)GPR_U32(ctx, 3));
label_15fde0:
    // 0x15fde0: 0x92030020  lbu         $v1, 0x20($s0)
    ctx->pc = 0x15fde0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x15fde4: 0x92040021  lbu         $a0, 0x21($s0)
    ctx->pc = 0x15fde4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 33)));
    // 0x15fde8: 0x14640003  bne         $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15FDE8u;
    {
        const bool branch_taken_0x15fde8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x15fde8) {
            ctx->pc = 0x15FDF8u;
            goto label_15fdf8;
        }
    }
    ctx->pc = 0x15FDF0u;
    // 0x15fdf0: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x15FDF0u;
    {
        const bool branch_taken_0x15fdf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15fdf0) {
            ctx->pc = 0x15FE50u;
            goto label_15fe50;
        }
    }
    ctx->pc = 0x15FDF8u;
label_15fdf8:
    // 0x15fdf8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15fdf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x15fdfc: 0x8c24f00c  lw          $a0, -0xFF4($at)
    ctx->pc = 0x15fdfcu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x81F00Cu));
    // 0x15fe00: 0x3c03873c  lui         $v1, 0x873C
    ctx->pc = 0x15fe00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34620 << 16));
    // 0x15fe04: 0x3463a9e5  ori         $v1, $v1, 0xA9E5
    ctx->pc = 0x15fe04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43493);
    // 0x15fe08: 0x42840  sll         $a1, $a0, 1
    ctx->pc = 0x15fe08u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x15fe0c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15fe0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x15fe10: 0x427c2  srl         $a0, $a0, 31
    ctx->pc = 0x15fe10u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x15fe14: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x15fe14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x15fe18: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x15fe18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x15fe1c: 0x831826  xor         $v1, $a0, $v1
    ctx->pc = 0x15fe1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 3));
    // 0x15fe20: 0xac23f00c  sw          $v1, -0xFF4($at)
    ctx->pc = 0x15fe20u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963212), GPR_U32(ctx, 3));
    // 0x15fe24: 0x32a02  srl         $a1, $v1, 8
    ctx->pc = 0x15fe24u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x15fe28: 0x92030021  lbu         $v1, 0x21($s0)
    ctx->pc = 0x15fe28u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 33)));
    // 0x15fe2c: 0x92040020  lbu         $a0, 0x20($s0)
    ctx->pc = 0x15fe2cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x15fe30: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x15fe30u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x15fe34: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x15fe34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x15fe38: 0xa3001b  divu        $zero, $a1, $v1
    ctx->pc = 0x15fe38u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
    // 0x15fe3c: 0x0  nop
    ctx->pc = 0x15fe3cu;
    // NOP
    // 0x15fe40: 0x0  nop
    ctx->pc = 0x15fe40u;
    // NOP
    // 0x15fe44: 0x1810  mfhi        $v1
    ctx->pc = 0x15fe44u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x15fe48: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x15fe48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x15fe4c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x15fe4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_15fe50:
    // 0x15fe50: 0x8e250018  lw          $a1, 0x18($s1)
    ctx->pc = 0x15fe50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x15fe54: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x15fe54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x15fe58: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15fe58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15fe5c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x15fe5cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x15fe60: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x15fe60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x15fe64: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x15fe64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x15fe68: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x15fe68u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x15fe6c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x15FE6Cu;
    {
        const bool branch_taken_0x15fe6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15FE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FE6Cu;
        // 0x15fe70: 0xa42821  addu        $a1, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15fe6c) {
            ctx->pc = 0x15FE80u;
            goto label_15fe80;
        }
    }
    ctx->pc = 0x15FE74u;
    // 0x15fe74: 0x0  nop
    ctx->pc = 0x15fe74u;
    // NOP
label_15fe78:
    // 0x15fe78: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x15fe78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x15fe7c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x15fe7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_15fe80:
    // 0x15fe80: 0x90a40002  lbu         $a0, 0x2($a1)
    ctx->pc = 0x15fe80u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x15fe84: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x15FE84u;
    {
        const bool branch_taken_0x15fe84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x15fe84) {
            ctx->pc = 0x15FEA0u;
            goto label_15fea0;
        }
    }
    ctx->pc = 0x15FE8Cu;
    // 0x15fe8c: 0x90a40003  lbu         $a0, 0x3($a1)
    ctx->pc = 0x15fe8cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
    // 0x15fe90: 0x30840010  andi        $a0, $a0, 0x10
    ctx->pc = 0x15fe90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16);
    // 0x15fe94: 0x1080fff8  beqz        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x15FE94u;
    {
        const bool branch_taken_0x15fe94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x15fe94) {
            ctx->pc = 0x15FE78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15fe78;
        }
    }
    ctx->pc = 0x15FE9Cu;
    // 0x15fe9c: 0x0  nop
    ctx->pc = 0x15fe9cu;
    // NOP
label_15fea0:
    // 0x15fea0: 0x92070023  lbu         $a3, 0x23($s0)
    ctx->pc = 0x15fea0u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 35)));
    // 0x15fea4: 0x30c400ff  andi        $a0, $a2, 0xFF
    ctx->pc = 0x15fea4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x15fea8: 0x2485ffff  addiu       $a1, $a0, -0x1
    ctx->pc = 0x15fea8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x15feac: 0xe5202a  slt         $a0, $a3, $a1
    ctx->pc = 0x15feacu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x15feb0: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x15FEB0u;
    {
        const bool branch_taken_0x15feb0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x15FEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FEB0u;
        // 0x15feb4: 0x92060022  lbu         $a2, 0x22($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 34)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15feb0) {
            ctx->pc = 0x15FED0u;
            goto label_15fed0;
        }
    }
    ctx->pc = 0x15FEB8u;
    // 0x15feb8: 0x30a700ff  andi        $a3, $a1, 0xFF
    ctx->pc = 0x15feb8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x15febc: 0x30c400ff  andi        $a0, $a2, 0xFF
    ctx->pc = 0x15febcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x15fec0: 0x87202a  slt         $a0, $a0, $a3
    ctx->pc = 0x15fec0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x15fec4: 0x14800002  bnez        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x15FEC4u;
    {
        const bool branch_taken_0x15fec4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x15fec4) {
            ctx->pc = 0x15FED0u;
            goto label_15fed0;
        }
    }
    ctx->pc = 0x15FECCu;
    // 0x15fecc: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x15feccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_15fed0:
    // 0x15fed0: 0x30c800ff  andi        $t0, $a2, 0xFF
    ctx->pc = 0x15fed0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x15fed4: 0x30e400ff  andi        $a0, $a3, 0xFF
    ctx->pc = 0x15fed4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x15fed8: 0x15040003  bne         $t0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15FED8u;
    {
        const bool branch_taken_0x15fed8 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 4));
        if (branch_taken_0x15fed8) {
            ctx->pc = 0x15FEE8u;
            goto label_15fee8;
        }
    }
    ctx->pc = 0x15FEE0u;
    // 0x15fee0: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x15FEE0u;
    {
        const bool branch_taken_0x15fee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15fee0) {
            ctx->pc = 0x15FF38u;
            goto label_15ff38;
        }
    }
    ctx->pc = 0x15FEE8u;
label_15fee8:
    // 0x15fee8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15fee8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x15feec: 0x8c26f00c  lw          $a2, -0xFF4($at)
    ctx->pc = 0x15feecu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x81F00Cu));
    // 0x15fef0: 0x3c05873c  lui         $a1, 0x873C
    ctx->pc = 0x15fef0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34620 << 16));
    // 0x15fef4: 0x882023  subu        $a0, $a0, $t0
    ctx->pc = 0x15fef4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x15fef8: 0x34a5a9e5  ori         $a1, $a1, 0xA9E5
    ctx->pc = 0x15fef8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)43493);
    // 0x15fefc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x15fefcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x15ff00: 0x63840  sll         $a3, $a2, 1
    ctx->pc = 0x15ff00u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x15ff04: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15ff04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x15ff08: 0x637c2  srl         $a2, $a2, 31
    ctx->pc = 0x15ff08u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x15ff0c: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x15ff0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x15ff10: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x15ff10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x15ff14: 0xc52826  xor         $a1, $a2, $a1
    ctx->pc = 0x15ff14u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 5));
    // 0x15ff18: 0xac25f00c  sw          $a1, -0xFF4($at)
    ctx->pc = 0x15ff18u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963212), GPR_U32(ctx, 5));
    // 0x15ff1c: 0x52a02  srl         $a1, $a1, 8
    ctx->pc = 0x15ff1cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 8));
    // 0x15ff20: 0xa4001b  divu        $zero, $a1, $a0
    ctx->pc = 0x15ff20u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
    // 0x15ff24: 0x0  nop
    ctx->pc = 0x15ff24u;
    // NOP
    // 0x15ff28: 0x0  nop
    ctx->pc = 0x15ff28u;
    // NOP
    // 0x15ff2c: 0x2010  mfhi        $a0
    ctx->pc = 0x15ff2cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x15ff30: 0x1042021  addu        $a0, $t0, $a0
    ctx->pc = 0x15ff30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x15ff34: 0x308800ff  andi        $t0, $a0, 0xFF
    ctx->pc = 0x15ff34u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_15ff38:
    // 0x15ff38: 0x8e260018  lw          $a2, 0x18($s1)
    ctx->pc = 0x15ff38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x15ff3c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x15ff3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x15ff40: 0x310500ff  andi        $a1, $t0, 0xFF
    ctx->pc = 0x15ff40u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x15ff44: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x15ff44u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x15ff48: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15ff48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x15ff4c: 0x3c03873c  lui         $v1, 0x873C
    ctx->pc = 0x15ff4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34620 << 16));
    // 0x15ff50: 0x3463a9e5  ori         $v1, $v1, 0xA9E5
    ctx->pc = 0x15ff50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43493);
    // 0x15ff54: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x15ff54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x15ff58: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x15ff58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x15ff5c: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x15ff5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x15ff60: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x15ff60u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x15ff64: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x15ff64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x15ff68: 0xae24001c  sw          $a0, 0x1C($s1)
    ctx->pc = 0x15ff68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 4));
    // 0x15ff6c: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x15ff6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x15ff70: 0x90840002  lbu         $a0, 0x2($a0)
    ctx->pc = 0x15ff70u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x15ff74: 0xa224002f  sb          $a0, 0x2F($s1)
    ctx->pc = 0x15ff74u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 47), (uint8_t)GPR_U32(ctx, 4));
    // 0x15ff78: 0x8c24f00c  lw          $a0, -0xFF4($at)
    ctx->pc = 0x15ff78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294963212)));
    // 0x15ff7c: 0x42840  sll         $a1, $a0, 1
    ctx->pc = 0x15ff7cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x15ff80: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15ff80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x15ff84: 0x427c2  srl         $a0, $a0, 31
    ctx->pc = 0x15ff84u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x15ff88: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x15ff88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x15ff8c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x15ff8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x15ff90: 0x831826  xor         $v1, $a0, $v1
    ctx->pc = 0x15ff90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 3));
    // 0x15ff94: 0xac23f00c  sw          $v1, -0xFF4($at)
    ctx->pc = 0x15ff94u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963212), GPR_U32(ctx, 3));
    // 0x15ff98: 0x34a02  srl         $t1, $v1, 8
    ctx->pc = 0x15ff98u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x15ff9c: 0x8e230090  lw          $v1, 0x90($s1)
    ctx->pc = 0x15ff9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x15ffa0: 0x9063000b  lbu         $v1, 0xB($v1)
    ctx->pc = 0x15ffa0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 11)));
    // 0x15ffa4: 0xa2230023  sb          $v1, 0x23($s1)
    ctx->pc = 0x15ffa4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 35), (uint8_t)GPR_U32(ctx, 3));
    // 0x15ffa8: 0x8e230090  lw          $v1, 0x90($s1)
    ctx->pc = 0x15ffa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x15ffac: 0x94680050  lhu         $t0, 0x50($v1)
    ctx->pc = 0x15ffacu;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x15ffb0: 0x15000003  bnez        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15FFB0u;
    {
        const bool branch_taken_0x15ffb0 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x15ffb0) {
            ctx->pc = 0x15FFC0u;
            goto label_15ffc0;
        }
    }
    ctx->pc = 0x15FFB8u;
    // 0x15ffb8: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x15FFB8u;
    {
        const bool branch_taken_0x15ffb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15FFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FFB8u;
        // 0x15ffbc: 0xa22000a8  sb          $zero, 0xA8($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 168), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ffb8) {
            ctx->pc = 0x160070u;
            goto label_160070;
        }
    }
    ctx->pc = 0x15FFC0u;
label_15ffc0:
    // 0x15ffc0: 0x92230023  lbu         $v1, 0x23($s1)
    ctx->pc = 0x15ffc0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 35)));
    // 0x15ffc4: 0x683821  addu        $a3, $v1, $t0
    ctx->pc = 0x15ffc4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x15ffc8: 0x28e10100  slti        $at, $a3, 0x100
    ctx->pc = 0x15ffc8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x15ffcc: 0x14200008  bnez        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x15FFCCu;
    {
        const bool branch_taken_0x15ffcc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x15ffcc) {
            ctx->pc = 0x15FFF0u;
            goto label_15fff0;
        }
    }
    ctx->pc = 0x15FFD4u;
    // 0x15ffd4: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x15ffd4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x15ffd8: 0xe34023  subu        $t0, $a3, $v1
    ctx->pc = 0x15ffd8u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x15ffdc: 0x15000004  bnez        $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x15FFDCu;
    {
        const bool branch_taken_0x15ffdc = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x15ffdc) {
            ctx->pc = 0x15FFF0u;
            goto label_15fff0;
        }
    }
    ctx->pc = 0x15FFE4u;
    // 0x15ffe4: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x15FFE4u;
    {
        const bool branch_taken_0x15ffe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15FFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FFE4u;
        // 0x15ffe8: 0xa22000a8  sb          $zero, 0xA8($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 168), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ffe4) {
            ctx->pc = 0x160070u;
            goto label_160070;
        }
    }
    ctx->pc = 0x15FFECu;
    // 0x15ffec: 0x0  nop
    ctx->pc = 0x15ffecu;
    // NOP
label_15fff0:
    // 0x15fff0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x15fff0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15fff4: 0xa22600a8  sb          $a2, 0xA8($s1)
    ctx->pc = 0x15fff4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 168), (uint8_t)GPR_U32(ctx, 6));
    // 0x15fff8: 0x8e230090  lw          $v1, 0x90($s1)
    ctx->pc = 0x15fff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x15fffc: 0x94630052  lhu         $v1, 0x52($v1)
    ctx->pc = 0x15fffcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 82)));
    // 0x160000: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x160000u;
    {
        const bool branch_taken_0x160000 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x160000) {
            ctx->pc = 0x160028u;
            goto label_160028;
        }
    }
    ctx->pc = 0x160008u;
    // 0x160008: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x160008u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16000c: 0x31230fff  andi        $v1, $t1, 0xFFF
    ctx->pc = 0x16000cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)4095);
    // 0x160010: 0xa22000a9  sb          $zero, 0xA9($s1)
    ctx->pc = 0x160010u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 169), (uint8_t)GPR_U32(ctx, 0));
    // 0x160014: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x160014u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x160018: 0xa62300aa  sh          $v1, 0xAA($s1)
    ctx->pc = 0x160018u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 170), (uint16_t)GPR_U32(ctx, 3));
    // 0x16001c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x16001Cu;
    {
        const bool branch_taken_0x16001c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x160020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16001Cu;
        // 0x160020: 0xe62000ac  swc1        $f0, 0xAC($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 172), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16001c) {
            ctx->pc = 0x160070u;
            goto label_160070;
        }
    }
    ctx->pc = 0x160024u;
    // 0x160024: 0x0  nop
    ctx->pc = 0x160024u;
    // NOP
label_160028:
    // 0x160028: 0xa22600a9  sb          $a2, 0xA9($s1)
    ctx->pc = 0x160028u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 169), (uint8_t)GPR_U32(ctx, 6));
    // 0x16002c: 0x92250023  lbu         $a1, 0x23($s1)
    ctx->pc = 0x16002cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 35)));
    // 0x160030: 0x820c3  sra         $a0, $t0, 3
    ctx->pc = 0x160030u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 8), 3));
    // 0x160034: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x160034u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x160038: 0xa22500aa  sb          $a1, 0xAA($s1)
    ctx->pc = 0x160038u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 170), (uint8_t)GPR_U32(ctx, 5));
    // 0x16003c: 0xa22700ab  sb          $a3, 0xAB($s1)
    ctx->pc = 0x16003cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 171), (uint8_t)GPR_U32(ctx, 7));
    // 0x160040: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x160040u;
    {
        const bool branch_taken_0x160040 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x160044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160040u;
        // 0x160044: 0xa22400ac  sb          $a0, 0xAC($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 172), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160040) {
            ctx->pc = 0x160050u;
            goto label_160050;
        }
    }
    ctx->pc = 0x160048u;
    // 0x160048: 0xa22600ac  sb          $a2, 0xAC($s1)
    ctx->pc = 0x160048u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 172), (uint8_t)GPR_U32(ctx, 6));
    // 0x16004c: 0x0  nop
    ctx->pc = 0x16004cu;
    // NOP
label_160050:
    // 0x160050: 0x92230023  lbu         $v1, 0x23($s1)
    ctx->pc = 0x160050u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 35)));
    // 0x160054: 0x128001b  divu        $zero, $t1, $t0
    ctx->pc = 0x160054u;
    { uint32_t divisor = GPR_U32(ctx, 8); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 9) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 9) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,9); } }
    // 0x160058: 0x0  nop
    ctx->pc = 0x160058u;
    // NOP
    // 0x16005c: 0x0  nop
    ctx->pc = 0x16005cu;
    // NOP
    // 0x160060: 0x2010  mfhi        $a0
    ctx->pc = 0x160060u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x160064: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x160064u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x160068: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x160068u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16006c: 0xa2230023  sb          $v1, 0x23($s1)
    ctx->pc = 0x16006cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 35), (uint8_t)GPR_U32(ctx, 3));
label_160070:
    // 0x160070: 0x86030028  lh          $v1, 0x28($s0)
    ctx->pc = 0x160070u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x160074: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x160074u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x160078: 0x26260050  addiu       $a2, $s1, 0x50
    ctx->pc = 0x160078u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x16007c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16007cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160080: 0xa6230048  sh          $v1, 0x48($s1)
    ctx->pc = 0x160080u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 72), (uint16_t)GPR_U32(ctx, 3));
    // 0x160084: 0x8603002a  lh          $v1, 0x2A($s0)
    ctx->pc = 0x160084u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 42)));
    // 0x160088: 0xa623004a  sh          $v1, 0x4A($s1)
    ctx->pc = 0x160088u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 74), (uint16_t)GPR_U32(ctx, 3));
    // 0x16008c: 0x8603002c  lh          $v1, 0x2C($s0)
    ctx->pc = 0x16008cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x160090: 0xa623004c  sh          $v1, 0x4C($s1)
    ctx->pc = 0x160090u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 76), (uint16_t)GPR_U32(ctx, 3));
    // 0x160094: 0x78870000  lq          $a3, 0x0($a0)
    ctx->pc = 0x160094u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x160098: 0x26030010  addiu       $v1, $s0, 0x10
    ctx->pc = 0x160098u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x16009c: 0x7cc70000  sq          $a3, 0x0($a2)
    ctx->pc = 0x16009cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 7));
    // 0x1600a0: 0x26240060  addiu       $a0, $s1, 0x60
    ctx->pc = 0x1600a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
    // 0x1600a4: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x1600a4u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1600a8: 0x7c850000  sq          $a1, 0x0($a0)
    ctx->pc = 0x1600a8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 5));
    // 0x1600ac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1600acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1600b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1600b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1600b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1600b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1600b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1600B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1600BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1600B8u;
        // 0x1600bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1600B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1600C0u;
}
