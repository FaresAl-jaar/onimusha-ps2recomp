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

// Function: sub_001622A0
// Address: 0x1622a0 - 0x162760
void sub_001622A0_0x1622a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001622A0_0x1622a0");
#endif

    switch (ctx->pc) {
        case 0x1622f8u: goto label_1622f8;
        case 0x1623b8u: goto label_1623b8;
        default: break;
    }

    ctx->pc = 0x1622a0u;

    // 0x1622a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1622a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1622a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1622a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1622a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1622a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1622ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1622acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1622b0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1622b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1622b4: 0xac900090  sw          $s0, 0x90($a0)
    ctx->pc = 0x1622b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 144), GPR_U32(ctx, 16));
    // 0x1622b8: 0x94a20004  lhu         $v0, 0x4($a1)
    ctx->pc = 0x1622b8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1622bc: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1622bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1622c0: 0xa4820010  sh          $v0, 0x10($a0)
    ctx->pc = 0x1622c0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x1622c4: 0x94830010  lhu         $v1, 0x10($a0)
    ctx->pc = 0x1622c4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1622c8: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x1622c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1622cc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1622CCu;
    {
        const bool branch_taken_0x1622cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1622D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1622CCu;
        // 0x1622d0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1622cc) {
            ctx->pc = 0x1622E0u;
            goto label_1622e0;
        }
    }
    ctx->pc = 0x1622D4u;
    // 0x1622d4: 0x34620006  ori         $v0, $v1, 0x6
    ctx->pc = 0x1622d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)6);
    // 0x1622d8: 0xa6220010  sh          $v0, 0x10($s1)
    ctx->pc = 0x1622d8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x1622dc: 0x0  nop
    ctx->pc = 0x1622dcu;
    // NOP
label_1622e0:
    // 0x1622e0: 0x92020006  lbu         $v0, 0x6($s0)
    ctx->pc = 0x1622e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x1622e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1622e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1622e8: 0xa2220012  sb          $v0, 0x12($s1)
    ctx->pc = 0x1622e8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 18), (uint8_t)GPR_U32(ctx, 2));
    // 0x1622ec: 0x92020007  lbu         $v0, 0x7($s0)
    ctx->pc = 0x1622ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
    // 0x1622f0: 0xc05965c  jal         func_165970
    ctx->pc = 0x1622F0u;
    SET_GPR_U32(ctx, 31, 0x1622F8u);
    ctx->pc = 0x1622F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1622F0u;
    // 0x1622f4: 0xa2220013  sb          $v0, 0x13($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 19), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165970u, 0x1622F0u, 0x1622F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1622F8u;
label_1622f8:
    // 0x1622f8: 0x8603002a  lh          $v1, 0x2A($s0)
    ctx->pc = 0x1622f8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 42)));
    // 0x1622fc: 0xa623002c  sh          $v1, 0x2C($s1)
    ctx->pc = 0x1622fcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 44), (uint16_t)GPR_U32(ctx, 3));
    // 0x162300: 0x9203002c  lbu         $v1, 0x2C($s0)
    ctx->pc = 0x162300u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x162304: 0xa223004e  sb          $v1, 0x4E($s1)
    ctx->pc = 0x162304u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 78), (uint8_t)GPR_U32(ctx, 3));
    // 0x162308: 0x9203000e  lbu         $v1, 0xE($s0)
    ctx->pc = 0x162308u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x16230c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x16230Cu;
    {
        const bool branch_taken_0x16230c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16230c) {
            ctx->pc = 0x162320u;
            goto label_162320;
        }
    }
    ctx->pc = 0x162314u;
    // 0x162314: 0x96230010  lhu         $v1, 0x10($s1)
    ctx->pc = 0x162314u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x162318: 0x34630400  ori         $v1, $v1, 0x400
    ctx->pc = 0x162318u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1024);
    // 0x16231c: 0xa6230010  sh          $v1, 0x10($s1)
    ctx->pc = 0x16231cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 16), (uint16_t)GPR_U32(ctx, 3));
label_162320:
    // 0x162320: 0x92030020  lbu         $v1, 0x20($s0)
    ctx->pc = 0x162320u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x162324: 0x92040021  lbu         $a0, 0x21($s0)
    ctx->pc = 0x162324u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 33)));
    // 0x162328: 0x14640003  bne         $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x162328u;
    {
        const bool branch_taken_0x162328 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x162328) {
            ctx->pc = 0x162338u;
            goto label_162338;
        }
    }
    ctx->pc = 0x162330u;
    // 0x162330: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x162330u;
    {
        const bool branch_taken_0x162330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x162330) {
            ctx->pc = 0x162390u;
            goto label_162390;
        }
    }
    ctx->pc = 0x162338u;
label_162338:
    // 0x162338: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x162338u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x16233c: 0x8c24f008  lw          $a0, -0xFF8($at)
    ctx->pc = 0x16233cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x81F008u));
    // 0x162340: 0x3c03873c  lui         $v1, 0x873C
    ctx->pc = 0x162340u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34620 << 16));
    // 0x162344: 0x3463a9e5  ori         $v1, $v1, 0xA9E5
    ctx->pc = 0x162344u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43493);
    // 0x162348: 0x42840  sll         $a1, $a0, 1
    ctx->pc = 0x162348u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x16234c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x16234cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x162350: 0x427c2  srl         $a0, $a0, 31
    ctx->pc = 0x162350u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x162354: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x162354u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x162358: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x162358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x16235c: 0x831826  xor         $v1, $a0, $v1
    ctx->pc = 0x16235cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 3));
    // 0x162360: 0xac23f008  sw          $v1, -0xFF8($at)
    ctx->pc = 0x162360u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963208), GPR_U32(ctx, 3));
    // 0x162364: 0x32a02  srl         $a1, $v1, 8
    ctx->pc = 0x162364u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x162368: 0x92030021  lbu         $v1, 0x21($s0)
    ctx->pc = 0x162368u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 33)));
    // 0x16236c: 0x92040020  lbu         $a0, 0x20($s0)
    ctx->pc = 0x16236cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x162370: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x162370u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x162374: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x162374u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x162378: 0xa3001b  divu        $zero, $a1, $v1
    ctx->pc = 0x162378u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
    // 0x16237c: 0x0  nop
    ctx->pc = 0x16237cu;
    // NOP
    // 0x162380: 0x0  nop
    ctx->pc = 0x162380u;
    // NOP
    // 0x162384: 0x1810  mfhi        $v1
    ctx->pc = 0x162384u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x162388: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x162388u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x16238c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x16238cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_162390:
    // 0x162390: 0x8e250018  lw          $a1, 0x18($s1)
    ctx->pc = 0x162390u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x162394: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x162394u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x162398: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x162398u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16239c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x16239cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1623a0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1623a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1623a4: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x1623a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1623a8: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1623a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1623ac: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1623ACu;
    {
        const bool branch_taken_0x1623ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1623B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1623ACu;
        // 0x1623b0: 0xa42821  addu        $a1, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1623ac) {
            ctx->pc = 0x1623C0u;
            goto label_1623c0;
        }
    }
    ctx->pc = 0x1623B4u;
    // 0x1623b4: 0x0  nop
    ctx->pc = 0x1623b4u;
    // NOP
label_1623b8:
    // 0x1623b8: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x1623b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x1623bc: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1623bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1623c0:
    // 0x1623c0: 0x90a40002  lbu         $a0, 0x2($a1)
    ctx->pc = 0x1623c0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x1623c4: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1623C4u;
    {
        const bool branch_taken_0x1623c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1623c4) {
            ctx->pc = 0x1623E0u;
            goto label_1623e0;
        }
    }
    ctx->pc = 0x1623CCu;
    // 0x1623cc: 0x90a40003  lbu         $a0, 0x3($a1)
    ctx->pc = 0x1623ccu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
    // 0x1623d0: 0x30840010  andi        $a0, $a0, 0x10
    ctx->pc = 0x1623d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16);
    // 0x1623d4: 0x1080fff8  beqz        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1623D4u;
    {
        const bool branch_taken_0x1623d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1623d4) {
            ctx->pc = 0x1623B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1623b8;
        }
    }
    ctx->pc = 0x1623DCu;
    // 0x1623dc: 0x0  nop
    ctx->pc = 0x1623dcu;
    // NOP
label_1623e0:
    // 0x1623e0: 0x92070023  lbu         $a3, 0x23($s0)
    ctx->pc = 0x1623e0u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 35)));
    // 0x1623e4: 0x30c400ff  andi        $a0, $a2, 0xFF
    ctx->pc = 0x1623e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x1623e8: 0x2485ffff  addiu       $a1, $a0, -0x1
    ctx->pc = 0x1623e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1623ec: 0xe5202a  slt         $a0, $a3, $a1
    ctx->pc = 0x1623ecu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1623f0: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1623F0u;
    {
        const bool branch_taken_0x1623f0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1623F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1623F0u;
        // 0x1623f4: 0x92060022  lbu         $a2, 0x22($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 34)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1623f0) {
            ctx->pc = 0x162410u;
            goto label_162410;
        }
    }
    ctx->pc = 0x1623F8u;
    // 0x1623f8: 0x30a700ff  andi        $a3, $a1, 0xFF
    ctx->pc = 0x1623f8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1623fc: 0x30c400ff  andi        $a0, $a2, 0xFF
    ctx->pc = 0x1623fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x162400: 0x87202a  slt         $a0, $a0, $a3
    ctx->pc = 0x162400u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x162404: 0x14800002  bnez        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x162404u;
    {
        const bool branch_taken_0x162404 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x162404) {
            ctx->pc = 0x162410u;
            goto label_162410;
        }
    }
    ctx->pc = 0x16240Cu;
    // 0x16240c: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x16240cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_162410:
    // 0x162410: 0x30c800ff  andi        $t0, $a2, 0xFF
    ctx->pc = 0x162410u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x162414: 0x30e400ff  andi        $a0, $a3, 0xFF
    ctx->pc = 0x162414u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x162418: 0x15040003  bne         $t0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x162418u;
    {
        const bool branch_taken_0x162418 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 4));
        if (branch_taken_0x162418) {
            ctx->pc = 0x162428u;
            goto label_162428;
        }
    }
    ctx->pc = 0x162420u;
    // 0x162420: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x162420u;
    {
        const bool branch_taken_0x162420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x162420) {
            ctx->pc = 0x162478u;
            goto label_162478;
        }
    }
    ctx->pc = 0x162428u;
label_162428:
    // 0x162428: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x162428u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x16242c: 0x8c26f008  lw          $a2, -0xFF8($at)
    ctx->pc = 0x16242cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x81F008u));
    // 0x162430: 0x3c05873c  lui         $a1, 0x873C
    ctx->pc = 0x162430u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34620 << 16));
    // 0x162434: 0x882023  subu        $a0, $a0, $t0
    ctx->pc = 0x162434u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x162438: 0x34a5a9e5  ori         $a1, $a1, 0xA9E5
    ctx->pc = 0x162438u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)43493);
    // 0x16243c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x16243cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x162440: 0x63840  sll         $a3, $a2, 1
    ctx->pc = 0x162440u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x162444: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x162444u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x162448: 0x637c2  srl         $a2, $a2, 31
    ctx->pc = 0x162448u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x16244c: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x16244cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x162450: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x162450u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x162454: 0xc52826  xor         $a1, $a2, $a1
    ctx->pc = 0x162454u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 5));
    // 0x162458: 0xac25f008  sw          $a1, -0xFF8($at)
    ctx->pc = 0x162458u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963208), GPR_U32(ctx, 5));
    // 0x16245c: 0x52a02  srl         $a1, $a1, 8
    ctx->pc = 0x16245cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 8));
    // 0x162460: 0xa4001b  divu        $zero, $a1, $a0
    ctx->pc = 0x162460u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
    // 0x162464: 0x0  nop
    ctx->pc = 0x162464u;
    // NOP
    // 0x162468: 0x0  nop
    ctx->pc = 0x162468u;
    // NOP
    // 0x16246c: 0x2010  mfhi        $a0
    ctx->pc = 0x16246cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x162470: 0x1042021  addu        $a0, $t0, $a0
    ctx->pc = 0x162470u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x162474: 0x308800ff  andi        $t0, $a0, 0xFF
    ctx->pc = 0x162474u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_162478:
    // 0x162478: 0x8e260018  lw          $a2, 0x18($s1)
    ctx->pc = 0x162478u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x16247c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x16247cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x162480: 0x310500ff  andi        $a1, $t0, 0xFF
    ctx->pc = 0x162480u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x162484: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x162484u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x162488: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x162488u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x16248c: 0x3c03873c  lui         $v1, 0x873C
    ctx->pc = 0x16248cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34620 << 16));
    // 0x162490: 0x3463a9e5  ori         $v1, $v1, 0xA9E5
    ctx->pc = 0x162490u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43493);
    // 0x162494: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x162494u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x162498: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x162498u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x16249c: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x16249cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1624a0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1624a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1624a4: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x1624a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x1624a8: 0xae24001c  sw          $a0, 0x1C($s1)
    ctx->pc = 0x1624a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 4));
    // 0x1624ac: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x1624acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1624b0: 0x90840002  lbu         $a0, 0x2($a0)
    ctx->pc = 0x1624b0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x1624b4: 0xa224002f  sb          $a0, 0x2F($s1)
    ctx->pc = 0x1624b4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 47), (uint8_t)GPR_U32(ctx, 4));
    // 0x1624b8: 0x8c24f008  lw          $a0, -0xFF8($at)
    ctx->pc = 0x1624b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294963208)));
    // 0x1624bc: 0x42840  sll         $a1, $a0, 1
    ctx->pc = 0x1624bcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1624c0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1624c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1624c4: 0x427c2  srl         $a0, $a0, 31
    ctx->pc = 0x1624c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x1624c8: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x1624c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1624cc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1624ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1624d0: 0x831826  xor         $v1, $a0, $v1
    ctx->pc = 0x1624d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 3));
    // 0x1624d4: 0xac23f008  sw          $v1, -0xFF8($at)
    ctx->pc = 0x1624d4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963208), GPR_U32(ctx, 3));
    // 0x1624d8: 0x34a02  srl         $t1, $v1, 8
    ctx->pc = 0x1624d8u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x1624dc: 0x8e230090  lw          $v1, 0x90($s1)
    ctx->pc = 0x1624dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x1624e0: 0x9063000b  lbu         $v1, 0xB($v1)
    ctx->pc = 0x1624e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 11)));
    // 0x1624e4: 0xa2230023  sb          $v1, 0x23($s1)
    ctx->pc = 0x1624e4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 35), (uint8_t)GPR_U32(ctx, 3));
    // 0x1624e8: 0x8e230090  lw          $v1, 0x90($s1)
    ctx->pc = 0x1624e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x1624ec: 0x94680030  lhu         $t0, 0x30($v1)
    ctx->pc = 0x1624ecu;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x1624f0: 0x15000003  bnez        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1624F0u;
    {
        const bool branch_taken_0x1624f0 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x1624f0) {
            ctx->pc = 0x162500u;
            goto label_162500;
        }
    }
    ctx->pc = 0x1624F8u;
    // 0x1624f8: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x1624F8u;
    {
        const bool branch_taken_0x1624f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1624FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1624F8u;
        // 0x1624fc: 0xa22000a0  sb          $zero, 0xA0($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 160), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1624f8) {
            ctx->pc = 0x1625B0u;
            goto label_1625b0;
        }
    }
    ctx->pc = 0x162500u;
label_162500:
    // 0x162500: 0x92230023  lbu         $v1, 0x23($s1)
    ctx->pc = 0x162500u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 35)));
    // 0x162504: 0x683821  addu        $a3, $v1, $t0
    ctx->pc = 0x162504u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x162508: 0x28e10100  slti        $at, $a3, 0x100
    ctx->pc = 0x162508u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x16250c: 0x14200008  bnez        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x16250Cu;
    {
        const bool branch_taken_0x16250c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x16250c) {
            ctx->pc = 0x162530u;
            goto label_162530;
        }
    }
    ctx->pc = 0x162514u;
    // 0x162514: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x162514u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x162518: 0xe34023  subu        $t0, $a3, $v1
    ctx->pc = 0x162518u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x16251c: 0x15000004  bnez        $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x16251Cu;
    {
        const bool branch_taken_0x16251c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x16251c) {
            ctx->pc = 0x162530u;
            goto label_162530;
        }
    }
    ctx->pc = 0x162524u;
    // 0x162524: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x162524u;
    {
        const bool branch_taken_0x162524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162524u;
        // 0x162528: 0xa22000a0  sb          $zero, 0xA0($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 160), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162524) {
            ctx->pc = 0x1625B0u;
            goto label_1625b0;
        }
    }
    ctx->pc = 0x16252Cu;
    // 0x16252c: 0x0  nop
    ctx->pc = 0x16252cu;
    // NOP
label_162530:
    // 0x162530: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x162530u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x162534: 0xa22600a0  sb          $a2, 0xA0($s1)
    ctx->pc = 0x162534u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 160), (uint8_t)GPR_U32(ctx, 6));
    // 0x162538: 0x8e230090  lw          $v1, 0x90($s1)
    ctx->pc = 0x162538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x16253c: 0x94630032  lhu         $v1, 0x32($v1)
    ctx->pc = 0x16253cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 50)));
    // 0x162540: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x162540u;
    {
        const bool branch_taken_0x162540 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x162540) {
            ctx->pc = 0x162568u;
            goto label_162568;
        }
    }
    ctx->pc = 0x162548u;
    // 0x162548: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x162548u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16254c: 0x31230fff  andi        $v1, $t1, 0xFFF
    ctx->pc = 0x16254cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)4095);
    // 0x162550: 0xa22000a1  sb          $zero, 0xA1($s1)
    ctx->pc = 0x162550u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 161), (uint8_t)GPR_U32(ctx, 0));
    // 0x162554: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x162554u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x162558: 0xa62300a2  sh          $v1, 0xA2($s1)
    ctx->pc = 0x162558u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 162), (uint16_t)GPR_U32(ctx, 3));
    // 0x16255c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x16255Cu;
    {
        const bool branch_taken_0x16255c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16255Cu;
        // 0x162560: 0xe62000a4  swc1        $f0, 0xA4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 164), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16255c) {
            ctx->pc = 0x1625B0u;
            goto label_1625b0;
        }
    }
    ctx->pc = 0x162564u;
    // 0x162564: 0x0  nop
    ctx->pc = 0x162564u;
    // NOP
label_162568:
    // 0x162568: 0xa22600a1  sb          $a2, 0xA1($s1)
    ctx->pc = 0x162568u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 161), (uint8_t)GPR_U32(ctx, 6));
    // 0x16256c: 0x92250023  lbu         $a1, 0x23($s1)
    ctx->pc = 0x16256cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 35)));
    // 0x162570: 0x820c3  sra         $a0, $t0, 3
    ctx->pc = 0x162570u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 8), 3));
    // 0x162574: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x162574u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x162578: 0xa22500a2  sb          $a1, 0xA2($s1)
    ctx->pc = 0x162578u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 162), (uint8_t)GPR_U32(ctx, 5));
    // 0x16257c: 0xa22700a3  sb          $a3, 0xA3($s1)
    ctx->pc = 0x16257cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 163), (uint8_t)GPR_U32(ctx, 7));
    // 0x162580: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x162580u;
    {
        const bool branch_taken_0x162580 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x162584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162580u;
        // 0x162584: 0xa22400a4  sb          $a0, 0xA4($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 164), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162580) {
            ctx->pc = 0x162590u;
            goto label_162590;
        }
    }
    ctx->pc = 0x162588u;
    // 0x162588: 0xa22600a4  sb          $a2, 0xA4($s1)
    ctx->pc = 0x162588u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 164), (uint8_t)GPR_U32(ctx, 6));
    // 0x16258c: 0x0  nop
    ctx->pc = 0x16258cu;
    // NOP
label_162590:
    // 0x162590: 0x92230023  lbu         $v1, 0x23($s1)
    ctx->pc = 0x162590u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 35)));
    // 0x162594: 0x128001b  divu        $zero, $t1, $t0
    ctx->pc = 0x162594u;
    { uint32_t divisor = GPR_U32(ctx, 8); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 9) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 9) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,9); } }
    // 0x162598: 0x0  nop
    ctx->pc = 0x162598u;
    // NOP
    // 0x16259c: 0x0  nop
    ctx->pc = 0x16259cu;
    // NOP
    // 0x1625a0: 0x2010  mfhi        $a0
    ctx->pc = 0x1625a0u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x1625a4: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x1625a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1625a8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1625a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1625ac: 0xa2230023  sb          $v1, 0x23($s1)
    ctx->pc = 0x1625acu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 35), (uint8_t)GPR_U32(ctx, 3));
label_1625b0:
    // 0x1625b0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1625b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1625b4: 0x8c26f008  lw          $a2, -0xFF8($at)
    ctx->pc = 0x1625b4u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x81F008u));
    // 0x1625b8: 0x3c03873c  lui         $v1, 0x873C
    ctx->pc = 0x1625b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34620 << 16));
    // 0x1625bc: 0x3463a9e5  ori         $v1, $v1, 0xA9E5
    ctx->pc = 0x1625bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43493);
    // 0x1625c0: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1625c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1625c4: 0x24040fff  addiu       $a0, $zero, 0xFFF
    ctx->pc = 0x1625c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4095));
    // 0x1625c8: 0x63840  sll         $a3, $a2, 1
    ctx->pc = 0x1625c8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x1625cc: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1625ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1625d0: 0x637c2  srl         $a2, $a2, 31
    ctx->pc = 0x1625d0u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x1625d4: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x1625d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x1625d8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1625d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1625dc: 0xc31826  xor         $v1, $a2, $v1
    ctx->pc = 0x1625dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 3));
    // 0x1625e0: 0xac23f008  sw          $v1, -0xFF8($at)
    ctx->pc = 0x1625e0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963208), GPR_U32(ctx, 3));
    // 0x1625e4: 0x34202  srl         $t0, $v1, 8
    ctx->pc = 0x1625e4u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x1625e8: 0x8e230090  lw          $v1, 0x90($s1)
    ctx->pc = 0x1625e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x1625ec: 0x90660028  lbu         $a2, 0x28($v1)
    ctx->pc = 0x1625ecu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x1625f0: 0x94630024  lhu         $v1, 0x24($v1)
    ctx->pc = 0x1625f0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x1625f4: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x1625f4u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1625f8: 0xa42007  srav        $a0, $a0, $a1
    ctx->pc = 0x1625f8u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 5) & 0x1F));
    // 0x1625fc: 0x1042024  and         $a0, $t0, $a0
    ctx->pc = 0x1625fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) & GPR_U64(ctx, 4));
    // 0x162600: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x162600u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x162604: 0xa6230028  sh          $v1, 0x28($s1)
    ctx->pc = 0x162604u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 40), (uint16_t)GPR_U32(ctx, 3));
    // 0x162608: 0x8e230090  lw          $v1, 0x90($s1)
    ctx->pc = 0x162608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x16260c: 0x94660034  lhu         $a2, 0x34($v1)
    ctx->pc = 0x16260cu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x162610: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x162610u;
    {
        const bool branch_taken_0x162610 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x162610) {
            ctx->pc = 0x162620u;
            goto label_162620;
        }
    }
    ctx->pc = 0x162618u;
    // 0x162618: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x162618u;
    {
        const bool branch_taken_0x162618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16261Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162618u;
        // 0x16261c: 0xa22000a8  sb          $zero, 0xA8($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 168), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162618) {
            ctx->pc = 0x1626D0u;
            goto label_1626d0;
        }
    }
    ctx->pc = 0x162620u;
label_162620:
    // 0x162620: 0x96230028  lhu         $v1, 0x28($s1)
    ctx->pc = 0x162620u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x162624: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x162624u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x162628: 0x663821  addu        $a3, $v1, $a2
    ctx->pc = 0x162628u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x16262c: 0xe1082a  slt         $at, $a3, $at
    ctx->pc = 0x16262cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x162630: 0x14200007  bnez        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x162630u;
    {
        const bool branch_taken_0x162630 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x162630) {
            ctx->pc = 0x162650u;
            goto label_162650;
        }
    }
    ctx->pc = 0x162638u;
    // 0x162638: 0x3407ffff  ori         $a3, $zero, 0xFFFF
    ctx->pc = 0x162638u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x16263c: 0xe33023  subu        $a2, $a3, $v1
    ctx->pc = 0x16263cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x162640: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x162640u;
    {
        const bool branch_taken_0x162640 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x162640) {
            ctx->pc = 0x162650u;
            goto label_162650;
        }
    }
    ctx->pc = 0x162648u;
    // 0x162648: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x162648u;
    {
        const bool branch_taken_0x162648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16264Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162648u;
        // 0x16264c: 0xa22000a8  sb          $zero, 0xA8($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 168), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162648) {
            ctx->pc = 0x1626D0u;
            goto label_1626d0;
        }
    }
    ctx->pc = 0x162650u;
label_162650:
    // 0x162650: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x162650u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x162654: 0xa22400a8  sb          $a0, 0xA8($s1)
    ctx->pc = 0x162654u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 168), (uint8_t)GPR_U32(ctx, 4));
    // 0x162658: 0x8e230090  lw          $v1, 0x90($s1)
    ctx->pc = 0x162658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x16265c: 0x94630036  lhu         $v1, 0x36($v1)
    ctx->pc = 0x16265cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 54)));
    // 0x162660: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x162660u;
    {
        const bool branch_taken_0x162660 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x162660) {
            ctx->pc = 0x162688u;
            goto label_162688;
        }
    }
    ctx->pc = 0x162668u;
    // 0x162668: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x162668u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16266c: 0x81b02  srl         $v1, $t0, 12
    ctx->pc = 0x16266cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), 12));
    // 0x162670: 0xa22000a9  sb          $zero, 0xA9($s1)
    ctx->pc = 0x162670u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 169), (uint8_t)GPR_U32(ctx, 0));
    // 0x162674: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x162674u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x162678: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x162678u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x16267c: 0xa62300aa  sh          $v1, 0xAA($s1)
    ctx->pc = 0x16267cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 170), (uint16_t)GPR_U32(ctx, 3));
    // 0x162680: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x162680u;
    {
        const bool branch_taken_0x162680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162680u;
        // 0x162684: 0xe62000ac  swc1        $f0, 0xAC($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 172), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x162680) {
            ctx->pc = 0x1626D0u;
            goto label_1626d0;
        }
    }
    ctx->pc = 0x162688u;
label_162688:
    // 0x162688: 0xa22400a9  sb          $a0, 0xA9($s1)
    ctx->pc = 0x162688u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 169), (uint8_t)GPR_U32(ctx, 4));
    // 0x16268c: 0x96250028  lhu         $a1, 0x28($s1)
    ctx->pc = 0x16268cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x162690: 0x620c3  sra         $a0, $a2, 3
    ctx->pc = 0x162690u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 6), 3));
    // 0x162694: 0x3083ffff  andi        $v1, $a0, 0xFFFF
    ctx->pc = 0x162694u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x162698: 0xa62500aa  sh          $a1, 0xAA($s1)
    ctx->pc = 0x162698u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 170), (uint16_t)GPR_U32(ctx, 5));
    // 0x16269c: 0xa62700ac  sh          $a3, 0xAC($s1)
    ctx->pc = 0x16269cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 172), (uint16_t)GPR_U32(ctx, 7));
    // 0x1626a0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1626A0u;
    {
        const bool branch_taken_0x1626a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1626A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1626A0u;
        // 0x1626a4: 0xa62400ae  sh          $a0, 0xAE($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 174), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1626a0) {
            ctx->pc = 0x1626B0u;
            goto label_1626b0;
        }
    }
    ctx->pc = 0x1626A8u;
    // 0x1626a8: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x1626a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1626ac: 0xa62300ae  sh          $v1, 0xAE($s1)
    ctx->pc = 0x1626acu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 174), (uint16_t)GPR_U32(ctx, 3));
label_1626b0:
    // 0x1626b0: 0x81b02  srl         $v1, $t0, 12
    ctx->pc = 0x1626b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), 12));
    // 0x1626b4: 0x66001b  divu        $zero, $v1, $a2
    ctx->pc = 0x1626b4u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x1626b8: 0x96230028  lhu         $v1, 0x28($s1)
    ctx->pc = 0x1626b8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x1626bc: 0x0  nop
    ctx->pc = 0x1626bcu;
    // NOP
    // 0x1626c0: 0x2010  mfhi        $a0
    ctx->pc = 0x1626c0u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x1626c4: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x1626c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x1626c8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1626c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1626cc: 0xa6230028  sh          $v1, 0x28($s1)
    ctx->pc = 0x1626ccu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 40), (uint16_t)GPR_U32(ctx, 3));
label_1626d0:
    // 0x1626d0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1626d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1626d4: 0x8c27f008  lw          $a3, -0xFF8($at)
    ctx->pc = 0x1626d4u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x81F008u));
    // 0x1626d8: 0x3c03873c  lui         $v1, 0x873C
    ctx->pc = 0x1626d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34620 << 16));
    // 0x1626dc: 0x3464a9e5  ori         $a0, $v1, 0xA9E5
    ctx->pc = 0x1626dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43493);
    // 0x1626e0: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x1626e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1626e4: 0x24050fff  addiu       $a1, $zero, 0xFFF
    ctx->pc = 0x1626e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4095));
    // 0x1626e8: 0x26090010  addiu       $t1, $s0, 0x10
    ctx->pc = 0x1626e8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1626ec: 0x26230050  addiu       $v1, $s1, 0x50
    ctx->pc = 0x1626ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x1626f0: 0x74040  sll         $t0, $a3, 1
    ctx->pc = 0x1626f0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x1626f4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1626f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1626f8: 0x73fc2  srl         $a3, $a3, 31
    ctx->pc = 0x1626f8u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 7), 31));
    // 0x1626fc: 0x1073821  addu        $a3, $t0, $a3
    ctx->pc = 0x1626fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x162700: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x162700u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x162704: 0xe42026  xor         $a0, $a3, $a0
    ctx->pc = 0x162704u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) ^ GPR_U64(ctx, 4));
    // 0x162708: 0xac24f008  sw          $a0, -0xFF8($at)
    ctx->pc = 0x162708u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963208), GPR_U32(ctx, 4));
    // 0x16270c: 0x44202  srl         $t0, $a0, 8
    ctx->pc = 0x16270cu;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
    // 0x162710: 0x92070029  lbu         $a3, 0x29($s0)
    ctx->pc = 0x162710u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 41)));
    // 0x162714: 0x96040026  lhu         $a0, 0x26($s0)
    ctx->pc = 0x162714u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 38)));
    // 0x162718: 0xc73023  subu        $a2, $a2, $a3
    ctx->pc = 0x162718u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x16271c: 0xc52807  srav        $a1, $a1, $a2
    ctx->pc = 0x16271cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), GPR_U32(ctx, 6) & 0x1F));
    // 0x162720: 0xa82824  and         $a1, $a1, $t0
    ctx->pc = 0x162720u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 8));
    // 0x162724: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x162724u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162728: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x162728u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x16272c: 0x30840fff  andi        $a0, $a0, 0xFFF
    ctx->pc = 0x16272cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
    // 0x162730: 0x26250060  addiu       $a1, $s1, 0x60
    ctx->pc = 0x162730u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
    // 0x162734: 0xa624002a  sh          $a0, 0x2A($s1)
    ctx->pc = 0x162734u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 42), (uint16_t)GPR_U32(ctx, 4));
    // 0x162738: 0x79270000  lq          $a3, 0x0($t1)
    ctx->pc = 0x162738u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x16273c: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x16273cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x162740: 0x7c670000  sq          $a3, 0x0($v1)
    ctx->pc = 0x162740u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 7));
    // 0x162744: 0x78860000  lq          $a2, 0x0($a0)
    ctx->pc = 0x162744u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x162748: 0x7ca60000  sq          $a2, 0x0($a1)
    ctx->pc = 0x162748u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 6));
    // 0x16274c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x16274cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x162750: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x162750u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x162754: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x162754u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x162758: 0x3e00008  jr          $ra
    ctx->pc = 0x162758u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16275Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162758u;
        // 0x16275c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x162758u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x162760u;
}
