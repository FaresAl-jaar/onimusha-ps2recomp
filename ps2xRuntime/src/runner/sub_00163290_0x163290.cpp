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

// Function: sub_00163290
// Address: 0x163290 - 0x1635f0
void sub_00163290_0x163290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00163290_0x163290");
#endif

    switch (ctx->pc) {
        case 0x1632e8u: goto label_1632e8;
        case 0x1633a8u: goto label_1633a8;
        default: break;
    }

    ctx->pc = 0x163290u;

    // 0x163290: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x163290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x163294: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x163294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x163298: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x163298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x16329c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16329cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1632a0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1632a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1632a4: 0xac900090  sw          $s0, 0x90($a0)
    ctx->pc = 0x1632a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 144), GPR_U32(ctx, 16));
    // 0x1632a8: 0x94a20004  lhu         $v0, 0x4($a1)
    ctx->pc = 0x1632a8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1632ac: 0x34420041  ori         $v0, $v0, 0x41
    ctx->pc = 0x1632acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65);
    // 0x1632b0: 0xa4820010  sh          $v0, 0x10($a0)
    ctx->pc = 0x1632b0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x1632b4: 0x94830010  lhu         $v1, 0x10($a0)
    ctx->pc = 0x1632b4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1632b8: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x1632b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1632bc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1632BCu;
    {
        const bool branch_taken_0x1632bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1632C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1632BCu;
        // 0x1632c0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1632bc) {
            ctx->pc = 0x1632D0u;
            goto label_1632d0;
        }
    }
    ctx->pc = 0x1632C4u;
    // 0x1632c4: 0x34620006  ori         $v0, $v1, 0x6
    ctx->pc = 0x1632c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)6);
    // 0x1632c8: 0xa6220010  sh          $v0, 0x10($s1)
    ctx->pc = 0x1632c8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x1632cc: 0x0  nop
    ctx->pc = 0x1632ccu;
    // NOP
label_1632d0:
    // 0x1632d0: 0x92020006  lbu         $v0, 0x6($s0)
    ctx->pc = 0x1632d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x1632d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1632d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1632d8: 0xa2220012  sb          $v0, 0x12($s1)
    ctx->pc = 0x1632d8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 18), (uint8_t)GPR_U32(ctx, 2));
    // 0x1632dc: 0x92020007  lbu         $v0, 0x7($s0)
    ctx->pc = 0x1632dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
    // 0x1632e0: 0xc05972c  jal         func_165CB0
    ctx->pc = 0x1632E0u;
    SET_GPR_U32(ctx, 31, 0x1632E8u);
    ctx->pc = 0x1632E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1632E0u;
    // 0x1632e4: 0xa2220013  sb          $v0, 0x13($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 19), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165CB0u, 0x1632E0u, 0x1632E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1632E8u;
label_1632e8:
    // 0x1632e8: 0x86040024  lh          $a0, 0x24($s0)
    ctx->pc = 0x1632e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1632ec: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x1632ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1632f0: 0xa624002c  sh          $a0, 0x2C($s1)
    ctx->pc = 0x1632f0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 44), (uint16_t)GPR_U32(ctx, 4));
    // 0x1632f4: 0xa223004e  sb          $v1, 0x4E($s1)
    ctx->pc = 0x1632f4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 78), (uint8_t)GPR_U32(ctx, 3));
    // 0x1632f8: 0x9203000e  lbu         $v1, 0xE($s0)
    ctx->pc = 0x1632f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x1632fc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1632FCu;
    {
        const bool branch_taken_0x1632fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1632fc) {
            ctx->pc = 0x163310u;
            goto label_163310;
        }
    }
    ctx->pc = 0x163304u;
    // 0x163304: 0x96230010  lhu         $v1, 0x10($s1)
    ctx->pc = 0x163304u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x163308: 0x34630400  ori         $v1, $v1, 0x400
    ctx->pc = 0x163308u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1024);
    // 0x16330c: 0xa6230010  sh          $v1, 0x10($s1)
    ctx->pc = 0x16330cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 16), (uint16_t)GPR_U32(ctx, 3));
label_163310:
    // 0x163310: 0x92030020  lbu         $v1, 0x20($s0)
    ctx->pc = 0x163310u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x163314: 0x92040021  lbu         $a0, 0x21($s0)
    ctx->pc = 0x163314u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 33)));
    // 0x163318: 0x14640003  bne         $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x163318u;
    {
        const bool branch_taken_0x163318 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x163318) {
            ctx->pc = 0x163328u;
            goto label_163328;
        }
    }
    ctx->pc = 0x163320u;
    // 0x163320: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x163320u;
    {
        const bool branch_taken_0x163320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x163320) {
            ctx->pc = 0x163380u;
            goto label_163380;
        }
    }
    ctx->pc = 0x163328u;
label_163328:
    // 0x163328: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x163328u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x16332c: 0x8c24f008  lw          $a0, -0xFF8($at)
    ctx->pc = 0x16332cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x81F008u));
    // 0x163330: 0x3c03873c  lui         $v1, 0x873C
    ctx->pc = 0x163330u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34620 << 16));
    // 0x163334: 0x3463a9e5  ori         $v1, $v1, 0xA9E5
    ctx->pc = 0x163334u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43493);
    // 0x163338: 0x42840  sll         $a1, $a0, 1
    ctx->pc = 0x163338u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x16333c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x16333cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x163340: 0x427c2  srl         $a0, $a0, 31
    ctx->pc = 0x163340u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x163344: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x163344u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x163348: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x163348u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x16334c: 0x831826  xor         $v1, $a0, $v1
    ctx->pc = 0x16334cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 3));
    // 0x163350: 0xac23f008  sw          $v1, -0xFF8($at)
    ctx->pc = 0x163350u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963208), GPR_U32(ctx, 3));
    // 0x163354: 0x32a02  srl         $a1, $v1, 8
    ctx->pc = 0x163354u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x163358: 0x92030021  lbu         $v1, 0x21($s0)
    ctx->pc = 0x163358u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 33)));
    // 0x16335c: 0x92040020  lbu         $a0, 0x20($s0)
    ctx->pc = 0x16335cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x163360: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x163360u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x163364: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x163364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x163368: 0xa3001b  divu        $zero, $a1, $v1
    ctx->pc = 0x163368u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
    // 0x16336c: 0x0  nop
    ctx->pc = 0x16336cu;
    // NOP
    // 0x163370: 0x0  nop
    ctx->pc = 0x163370u;
    // NOP
    // 0x163374: 0x1810  mfhi        $v1
    ctx->pc = 0x163374u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x163378: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x163378u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x16337c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x16337cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_163380:
    // 0x163380: 0x8e250018  lw          $a1, 0x18($s1)
    ctx->pc = 0x163380u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x163384: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x163384u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x163388: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x163388u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16338c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x16338cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x163390: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x163390u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x163394: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x163394u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x163398: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x163398u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x16339c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x16339Cu;
    {
        const bool branch_taken_0x16339c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1633A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16339Cu;
        // 0x1633a0: 0xa42821  addu        $a1, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16339c) {
            ctx->pc = 0x1633B0u;
            goto label_1633b0;
        }
    }
    ctx->pc = 0x1633A4u;
    // 0x1633a4: 0x0  nop
    ctx->pc = 0x1633a4u;
    // NOP
label_1633a8:
    // 0x1633a8: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x1633a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x1633ac: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1633acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1633b0:
    // 0x1633b0: 0x90a40002  lbu         $a0, 0x2($a1)
    ctx->pc = 0x1633b0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x1633b4: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1633B4u;
    {
        const bool branch_taken_0x1633b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1633b4) {
            ctx->pc = 0x1633D0u;
            goto label_1633d0;
        }
    }
    ctx->pc = 0x1633BCu;
    // 0x1633bc: 0x90a40003  lbu         $a0, 0x3($a1)
    ctx->pc = 0x1633bcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
    // 0x1633c0: 0x30840010  andi        $a0, $a0, 0x10
    ctx->pc = 0x1633c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16);
    // 0x1633c4: 0x1080fff8  beqz        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1633C4u;
    {
        const bool branch_taken_0x1633c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1633c4) {
            ctx->pc = 0x1633A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1633a8;
        }
    }
    ctx->pc = 0x1633CCu;
    // 0x1633cc: 0x0  nop
    ctx->pc = 0x1633ccu;
    // NOP
label_1633d0:
    // 0x1633d0: 0x92070023  lbu         $a3, 0x23($s0)
    ctx->pc = 0x1633d0u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 35)));
    // 0x1633d4: 0x30c400ff  andi        $a0, $a2, 0xFF
    ctx->pc = 0x1633d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x1633d8: 0x2485ffff  addiu       $a1, $a0, -0x1
    ctx->pc = 0x1633d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1633dc: 0xe5202a  slt         $a0, $a3, $a1
    ctx->pc = 0x1633dcu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1633e0: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1633E0u;
    {
        const bool branch_taken_0x1633e0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1633E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1633E0u;
        // 0x1633e4: 0x92060022  lbu         $a2, 0x22($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 34)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1633e0) {
            ctx->pc = 0x163400u;
            goto label_163400;
        }
    }
    ctx->pc = 0x1633E8u;
    // 0x1633e8: 0x30a700ff  andi        $a3, $a1, 0xFF
    ctx->pc = 0x1633e8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1633ec: 0x30c400ff  andi        $a0, $a2, 0xFF
    ctx->pc = 0x1633ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x1633f0: 0x87202a  slt         $a0, $a0, $a3
    ctx->pc = 0x1633f0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x1633f4: 0x14800002  bnez        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1633F4u;
    {
        const bool branch_taken_0x1633f4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1633f4) {
            ctx->pc = 0x163400u;
            goto label_163400;
        }
    }
    ctx->pc = 0x1633FCu;
    // 0x1633fc: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x1633fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_163400:
    // 0x163400: 0x30c800ff  andi        $t0, $a2, 0xFF
    ctx->pc = 0x163400u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x163404: 0x30e400ff  andi        $a0, $a3, 0xFF
    ctx->pc = 0x163404u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x163408: 0x15040003  bne         $t0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x163408u;
    {
        const bool branch_taken_0x163408 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 4));
        if (branch_taken_0x163408) {
            ctx->pc = 0x163418u;
            goto label_163418;
        }
    }
    ctx->pc = 0x163410u;
    // 0x163410: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x163410u;
    {
        const bool branch_taken_0x163410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x163410) {
            ctx->pc = 0x163468u;
            goto label_163468;
        }
    }
    ctx->pc = 0x163418u;
label_163418:
    // 0x163418: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x163418u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x16341c: 0x8c26f008  lw          $a2, -0xFF8($at)
    ctx->pc = 0x16341cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x81F008u));
    // 0x163420: 0x3c05873c  lui         $a1, 0x873C
    ctx->pc = 0x163420u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34620 << 16));
    // 0x163424: 0x882023  subu        $a0, $a0, $t0
    ctx->pc = 0x163424u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x163428: 0x34a5a9e5  ori         $a1, $a1, 0xA9E5
    ctx->pc = 0x163428u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)43493);
    // 0x16342c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x16342cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x163430: 0x63840  sll         $a3, $a2, 1
    ctx->pc = 0x163430u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x163434: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x163434u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x163438: 0x637c2  srl         $a2, $a2, 31
    ctx->pc = 0x163438u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x16343c: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x16343cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x163440: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x163440u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x163444: 0xc52826  xor         $a1, $a2, $a1
    ctx->pc = 0x163444u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 5));
    // 0x163448: 0xac25f008  sw          $a1, -0xFF8($at)
    ctx->pc = 0x163448u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963208), GPR_U32(ctx, 5));
    // 0x16344c: 0x52a02  srl         $a1, $a1, 8
    ctx->pc = 0x16344cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 8));
    // 0x163450: 0xa4001b  divu        $zero, $a1, $a0
    ctx->pc = 0x163450u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
    // 0x163454: 0x0  nop
    ctx->pc = 0x163454u;
    // NOP
    // 0x163458: 0x0  nop
    ctx->pc = 0x163458u;
    // NOP
    // 0x16345c: 0x2010  mfhi        $a0
    ctx->pc = 0x16345cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x163460: 0x1042021  addu        $a0, $t0, $a0
    ctx->pc = 0x163460u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x163464: 0x308800ff  andi        $t0, $a0, 0xFF
    ctx->pc = 0x163464u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_163468:
    // 0x163468: 0x8e260018  lw          $a2, 0x18($s1)
    ctx->pc = 0x163468u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x16346c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x16346cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x163470: 0x310500ff  andi        $a1, $t0, 0xFF
    ctx->pc = 0x163470u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x163474: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x163474u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x163478: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x163478u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x16347c: 0x3c03873c  lui         $v1, 0x873C
    ctx->pc = 0x16347cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34620 << 16));
    // 0x163480: 0x3463a9e5  ori         $v1, $v1, 0xA9E5
    ctx->pc = 0x163480u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43493);
    // 0x163484: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x163484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x163488: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x163488u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x16348c: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x16348cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x163490: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x163490u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x163494: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x163494u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x163498: 0xae24001c  sw          $a0, 0x1C($s1)
    ctx->pc = 0x163498u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 4));
    // 0x16349c: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x16349cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1634a0: 0x90840002  lbu         $a0, 0x2($a0)
    ctx->pc = 0x1634a0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x1634a4: 0xa224002f  sb          $a0, 0x2F($s1)
    ctx->pc = 0x1634a4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 47), (uint8_t)GPR_U32(ctx, 4));
    // 0x1634a8: 0x8c24f008  lw          $a0, -0xFF8($at)
    ctx->pc = 0x1634a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294963208)));
    // 0x1634ac: 0x42840  sll         $a1, $a0, 1
    ctx->pc = 0x1634acu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1634b0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1634b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1634b4: 0x427c2  srl         $a0, $a0, 31
    ctx->pc = 0x1634b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x1634b8: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x1634b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1634bc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1634bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1634c0: 0x831826  xor         $v1, $a0, $v1
    ctx->pc = 0x1634c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 3));
    // 0x1634c4: 0xac23f008  sw          $v1, -0xFF8($at)
    ctx->pc = 0x1634c4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963208), GPR_U32(ctx, 3));
    // 0x1634c8: 0x34a02  srl         $t1, $v1, 8
    ctx->pc = 0x1634c8u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x1634cc: 0x8e230090  lw          $v1, 0x90($s1)
    ctx->pc = 0x1634ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x1634d0: 0x9063000b  lbu         $v1, 0xB($v1)
    ctx->pc = 0x1634d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 11)));
    // 0x1634d4: 0xa2230023  sb          $v1, 0x23($s1)
    ctx->pc = 0x1634d4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 35), (uint8_t)GPR_U32(ctx, 3));
    // 0x1634d8: 0x8e230090  lw          $v1, 0x90($s1)
    ctx->pc = 0x1634d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x1634dc: 0x94680050  lhu         $t0, 0x50($v1)
    ctx->pc = 0x1634dcu;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x1634e0: 0x15000003  bnez        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1634E0u;
    {
        const bool branch_taken_0x1634e0 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x1634e0) {
            ctx->pc = 0x1634F0u;
            goto label_1634f0;
        }
    }
    ctx->pc = 0x1634E8u;
    // 0x1634e8: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x1634E8u;
    {
        const bool branch_taken_0x1634e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1634ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1634E8u;
        // 0x1634ec: 0xa22000a8  sb          $zero, 0xA8($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 168), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1634e8) {
            ctx->pc = 0x1635A0u;
            goto label_1635a0;
        }
    }
    ctx->pc = 0x1634F0u;
label_1634f0:
    // 0x1634f0: 0x92230023  lbu         $v1, 0x23($s1)
    ctx->pc = 0x1634f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 35)));
    // 0x1634f4: 0x683821  addu        $a3, $v1, $t0
    ctx->pc = 0x1634f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x1634f8: 0x28e10100  slti        $at, $a3, 0x100
    ctx->pc = 0x1634f8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x1634fc: 0x14200008  bnez        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x1634FCu;
    {
        const bool branch_taken_0x1634fc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1634fc) {
            ctx->pc = 0x163520u;
            goto label_163520;
        }
    }
    ctx->pc = 0x163504u;
    // 0x163504: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x163504u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x163508: 0xe34023  subu        $t0, $a3, $v1
    ctx->pc = 0x163508u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x16350c: 0x15000004  bnez        $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x16350Cu;
    {
        const bool branch_taken_0x16350c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x16350c) {
            ctx->pc = 0x163520u;
            goto label_163520;
        }
    }
    ctx->pc = 0x163514u;
    // 0x163514: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x163514u;
    {
        const bool branch_taken_0x163514 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163514u;
        // 0x163518: 0xa22000a8  sb          $zero, 0xA8($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 168), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163514) {
            ctx->pc = 0x1635A0u;
            goto label_1635a0;
        }
    }
    ctx->pc = 0x16351Cu;
    // 0x16351c: 0x0  nop
    ctx->pc = 0x16351cu;
    // NOP
label_163520:
    // 0x163520: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x163520u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x163524: 0xa22600a8  sb          $a2, 0xA8($s1)
    ctx->pc = 0x163524u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 168), (uint8_t)GPR_U32(ctx, 6));
    // 0x163528: 0x8e230090  lw          $v1, 0x90($s1)
    ctx->pc = 0x163528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x16352c: 0x94630052  lhu         $v1, 0x52($v1)
    ctx->pc = 0x16352cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 82)));
    // 0x163530: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x163530u;
    {
        const bool branch_taken_0x163530 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x163530) {
            ctx->pc = 0x163558u;
            goto label_163558;
        }
    }
    ctx->pc = 0x163538u;
    // 0x163538: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x163538u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16353c: 0x31230fff  andi        $v1, $t1, 0xFFF
    ctx->pc = 0x16353cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)4095);
    // 0x163540: 0xa22000a9  sb          $zero, 0xA9($s1)
    ctx->pc = 0x163540u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 169), (uint8_t)GPR_U32(ctx, 0));
    // 0x163544: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x163544u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x163548: 0xa62300aa  sh          $v1, 0xAA($s1)
    ctx->pc = 0x163548u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 170), (uint16_t)GPR_U32(ctx, 3));
    // 0x16354c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x16354Cu;
    {
        const bool branch_taken_0x16354c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16354Cu;
        // 0x163550: 0xe62000ac  swc1        $f0, 0xAC($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 172), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16354c) {
            ctx->pc = 0x1635A0u;
            goto label_1635a0;
        }
    }
    ctx->pc = 0x163554u;
    // 0x163554: 0x0  nop
    ctx->pc = 0x163554u;
    // NOP
label_163558:
    // 0x163558: 0xa22600a9  sb          $a2, 0xA9($s1)
    ctx->pc = 0x163558u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 169), (uint8_t)GPR_U32(ctx, 6));
    // 0x16355c: 0x92250023  lbu         $a1, 0x23($s1)
    ctx->pc = 0x16355cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 35)));
    // 0x163560: 0x820c3  sra         $a0, $t0, 3
    ctx->pc = 0x163560u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 8), 3));
    // 0x163564: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x163564u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x163568: 0xa22500aa  sb          $a1, 0xAA($s1)
    ctx->pc = 0x163568u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 170), (uint8_t)GPR_U32(ctx, 5));
    // 0x16356c: 0xa22700ab  sb          $a3, 0xAB($s1)
    ctx->pc = 0x16356cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 171), (uint8_t)GPR_U32(ctx, 7));
    // 0x163570: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x163570u;
    {
        const bool branch_taken_0x163570 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x163574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163570u;
        // 0x163574: 0xa22400ac  sb          $a0, 0xAC($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 172), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163570) {
            ctx->pc = 0x163580u;
            goto label_163580;
        }
    }
    ctx->pc = 0x163578u;
    // 0x163578: 0xa22600ac  sb          $a2, 0xAC($s1)
    ctx->pc = 0x163578u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 172), (uint8_t)GPR_U32(ctx, 6));
    // 0x16357c: 0x0  nop
    ctx->pc = 0x16357cu;
    // NOP
label_163580:
    // 0x163580: 0x92230023  lbu         $v1, 0x23($s1)
    ctx->pc = 0x163580u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 35)));
    // 0x163584: 0x128001b  divu        $zero, $t1, $t0
    ctx->pc = 0x163584u;
    { uint32_t divisor = GPR_U32(ctx, 8); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 9) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 9) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,9); } }
    // 0x163588: 0x0  nop
    ctx->pc = 0x163588u;
    // NOP
    // 0x16358c: 0x0  nop
    ctx->pc = 0x16358cu;
    // NOP
    // 0x163590: 0x2010  mfhi        $a0
    ctx->pc = 0x163590u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x163594: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x163594u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x163598: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x163598u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16359c: 0xa2230023  sb          $v1, 0x23($s1)
    ctx->pc = 0x16359cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 35), (uint8_t)GPR_U32(ctx, 3));
label_1635a0:
    // 0x1635a0: 0x86030028  lh          $v1, 0x28($s0)
    ctx->pc = 0x1635a0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1635a4: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x1635a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1635a8: 0x26260050  addiu       $a2, $s1, 0x50
    ctx->pc = 0x1635a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x1635ac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1635acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1635b0: 0xa6230048  sh          $v1, 0x48($s1)
    ctx->pc = 0x1635b0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 72), (uint16_t)GPR_U32(ctx, 3));
    // 0x1635b4: 0x8603002a  lh          $v1, 0x2A($s0)
    ctx->pc = 0x1635b4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 42)));
    // 0x1635b8: 0xa623004a  sh          $v1, 0x4A($s1)
    ctx->pc = 0x1635b8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 74), (uint16_t)GPR_U32(ctx, 3));
    // 0x1635bc: 0x8603002c  lh          $v1, 0x2C($s0)
    ctx->pc = 0x1635bcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x1635c0: 0xa623004c  sh          $v1, 0x4C($s1)
    ctx->pc = 0x1635c0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 76), (uint16_t)GPR_U32(ctx, 3));
    // 0x1635c4: 0x78870000  lq          $a3, 0x0($a0)
    ctx->pc = 0x1635c4u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1635c8: 0x26030010  addiu       $v1, $s0, 0x10
    ctx->pc = 0x1635c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1635cc: 0x7cc70000  sq          $a3, 0x0($a2)
    ctx->pc = 0x1635ccu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 7));
    // 0x1635d0: 0x26240060  addiu       $a0, $s1, 0x60
    ctx->pc = 0x1635d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
    // 0x1635d4: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x1635d4u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1635d8: 0x7c850000  sq          $a1, 0x0($a0)
    ctx->pc = 0x1635d8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 5));
    // 0x1635dc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1635dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1635e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1635e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1635e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1635e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1635e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1635E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1635ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1635E8u;
        // 0x1635ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1635E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1635F0u;
}
