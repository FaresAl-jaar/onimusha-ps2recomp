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

// Function: sub_001675E0
// Address: 0x1675e0 - 0x167820
void sub_001675E0_0x1675e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001675E0_0x1675e0");
#endif

    switch (ctx->pc) {
        case 0x167638u: goto label_167638;
        case 0x1676f4u: goto label_1676f4;
        case 0x1677a0u: goto label_1677a0;
        case 0x1677c8u: goto label_1677c8;
        default: break;
    }

    ctx->pc = 0x1675e0u;

    // 0x1675e0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1675e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1675e4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1675e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1675e8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1675e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x1675ec: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1675ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1675f0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1675f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1675f4: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x1675f4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1675f8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1675f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1675fc: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x1675fcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167600: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x167600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x167604: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x167604u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x167608: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x167608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x16760c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x16760cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x167610: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x167610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x167614: 0x8c820078  lw          $v0, 0x78($a0)
    ctx->pc = 0x167614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 120)));
    // 0x167618: 0x94830068  lhu         $v1, 0x68($a0)
    ctx->pc = 0x167618u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 104)));
    // 0x16761c: 0x8c95007c  lw          $s5, 0x7C($a0)
    ctx->pc = 0x16761cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
    // 0x167620: 0x24540010  addiu       $s4, $v0, 0x10
    ctx->pc = 0x167620u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x167624: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x167624u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x167628: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x167628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16762c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x16762cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x167630: 0x282f021  addu        $fp, $s4, $v0
    ctx->pc = 0x167630u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x167634: 0x0  nop
    ctx->pc = 0x167634u;
    // NOP
label_167638:
    // 0x167638: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x167638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16763c: 0xa2a20000  sb          $v0, 0x0($s5)
    ctx->pc = 0x16763cu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x167640: 0xaea00004  sw          $zero, 0x4($s5)
    ctx->pc = 0x167640u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 0));
    // 0x167644: 0xaea00010  sw          $zero, 0x10($s5)
    ctx->pc = 0x167644u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 16), GPR_U32(ctx, 0));
    // 0x167648: 0x92920024  lbu         $s2, 0x24($s4)
    ctx->pc = 0x167648u;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 36)));
    // 0x16764c: 0xa2b20001  sb          $s2, 0x1($s5)
    ctx->pc = 0x16764cu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 1), (uint8_t)GPR_U32(ctx, 18));
    // 0x167650: 0xaeb6000c  sw          $s6, 0xC($s5)
    ctx->pc = 0x167650u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 22));
    // 0x167654: 0xaeb400d8  sw          $s4, 0xD8($s5)
    ctx->pc = 0x167654u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 216), GPR_U32(ctx, 20));
    // 0x167658: 0xaea00028  sw          $zero, 0x28($s5)
    ctx->pc = 0x167658u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 40), GPR_U32(ctx, 0));
    // 0x16765c: 0x8e82001c  lw          $v0, 0x1C($s4)
    ctx->pc = 0x16765cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
    // 0x167660: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x167660u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x167664: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x167664u;
    {
        const bool branch_taken_0x167664 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x167668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167664u;
        // 0x167668: 0x2c0882d  daddu       $s1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167664) {
            ctx->pc = 0x167678u;
            goto label_167678;
        }
    }
    ctx->pc = 0x16766Cu;
    // 0x16766c: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x16766cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x167670: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x167670u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x167674: 0xaea20004  sw          $v0, 0x4($s5)
    ctx->pc = 0x167674u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 2));
label_167678:
    // 0x167678: 0x8e82001c  lw          $v0, 0x1C($s4)
    ctx->pc = 0x167678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
    // 0x16767c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x16767cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x167680: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x167680u;
    {
        const bool branch_taken_0x167680 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x167680) {
            ctx->pc = 0x167698u;
            goto label_167698;
        }
    }
    ctx->pc = 0x167688u;
    // 0x167688: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x167688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x16768c: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x16768cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x167690: 0xaea20004  sw          $v0, 0x4($s5)
    ctx->pc = 0x167690u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 2));
    // 0x167694: 0x0  nop
    ctx->pc = 0x167694u;
    // NOP
label_167698:
    // 0x167698: 0x8e82001c  lw          $v0, 0x1C($s4)
    ctx->pc = 0x167698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
    // 0x16769c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x16769cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1676a0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1676A0u;
    {
        const bool branch_taken_0x1676a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1676a0) {
            ctx->pc = 0x1676B8u;
            goto label_1676b8;
        }
    }
    ctx->pc = 0x1676A8u;
    // 0x1676a8: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x1676a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x1676ac: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x1676acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x1676b0: 0xaea20004  sw          $v0, 0x4($s5)
    ctx->pc = 0x1676b0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 2));
    // 0x1676b4: 0x0  nop
    ctx->pc = 0x1676b4u;
    // NOP
label_1676b8:
    // 0x1676b8: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x1676b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1676bc: 0x2c2b021  addu        $s6, $s6, $v0
    ctx->pc = 0x1676bcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x1676c0: 0x32c3000f  andi        $v1, $s6, 0xF
    ctx->pc = 0x1676c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)15);
    // 0x1676c4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1676C4u;
    {
        const bool branch_taken_0x1676c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1676C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1676C4u;
        // 0x1676c8: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1676c4) {
            ctx->pc = 0x1676D8u;
            goto label_1676d8;
        }
    }
    ctx->pc = 0x1676CCu;
    // 0x1676cc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1676CCu;
    {
        const bool branch_taken_0x1676cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1676D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1676CCu;
        // 0x1676d0: 0x431023  subu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1676cc) {
            ctx->pc = 0x1676E0u;
            goto label_1676e0;
        }
    }
    ctx->pc = 0x1676D4u;
    // 0x1676d4: 0x0  nop
    ctx->pc = 0x1676d4u;
    // NOP
label_1676d8:
    // 0x1676d8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1676d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1676dc: 0x0  nop
    ctx->pc = 0x1676dcu;
    // NOP
label_1676e0:
    // 0x1676e0: 0x26a500f0  addiu       $a1, $s5, 0xF0
    ctx->pc = 0x1676e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 240));
    // 0x1676e4: 0x2c2b021  addu        $s6, $s6, $v0
    ctx->pc = 0x1676e4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x1676e8: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1676e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1676ec: 0xc059e54  jal         func_167950
    ctx->pc = 0x1676ECu;
    SET_GPR_U32(ctx, 31, 0x1676F4u);
    ctx->pc = 0x1676F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1676ECu;
    // 0x1676f0: 0xaea50008  sw          $a1, 0x8($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x167950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167950u, 0x1676ECu, 0x1676F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1676F4u;
label_1676f4:
    // 0x1676f4: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x1676f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x1676f8: 0x3c042000  lui         $a0, 0x2000
    ctx->pc = 0x1676f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
    // 0x1676fc: 0x34420404  ori         $v0, $v0, 0x404
    ctx->pc = 0x1676fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1028);
    // 0x167700: 0x2403ffcf  addiu       $v1, $zero, -0x31
    ctx->pc = 0x167700u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967247));
    // 0x167704: 0xaea20140  sw          $v0, 0x140($s5)
    ctx->pc = 0x167704u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 320), GPR_U32(ctx, 2));
    // 0x167708: 0x3c027001  lui         $v0, 0x7001
    ctx->pc = 0x167708u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28673 << 16));
    // 0x16770c: 0xaea40144  sw          $a0, 0x144($s5)
    ctx->pc = 0x16770cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 324), GPR_U32(ctx, 4));
    // 0x167710: 0x344203ee  ori         $v0, $v0, 0x3EE
    ctx->pc = 0x167710u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1006);
    // 0x167714: 0xaea30148  sw          $v1, 0x148($s5)
    ctx->pc = 0x167714u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 328), GPR_U32(ctx, 3));
    // 0x167718: 0xaea2014c  sw          $v0, 0x14C($s5)
    ctx->pc = 0x167718u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 332), GPR_U32(ctx, 2));
    // 0x16771c: 0x9282003a  lbu         $v0, 0x3A($s4)
    ctx->pc = 0x16771cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 58)));
    // 0x167720: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x167720u;
    {
        const bool branch_taken_0x167720 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x167720) {
            ctx->pc = 0x167738u;
            goto label_167738;
        }
    }
    ctx->pc = 0x167728u;
    // 0x167728: 0x244200f7  addiu       $v0, $v0, 0xF7
    ctx->pc = 0x167728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 247));
    // 0x16772c: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x16772cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x167730: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x167730u;
    {
        const bool branch_taken_0x167730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x167734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167730u;
        // 0x167734: 0xaea20150  sw          $v0, 0x150($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 336), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167730) {
            ctx->pc = 0x167768u;
            goto label_167768;
        }
    }
    ctx->pc = 0x167738u;
label_167738:
    // 0x167738: 0x152302  srl         $a0, $s5, 12
    ctx->pc = 0x167738u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 21), 12));
    // 0x16773c: 0x151902  srl         $v1, $s5, 4
    ctx->pc = 0x16773cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 21), 4));
    // 0x167740: 0x2402003b  addiu       $v0, $zero, 0x3B
    ctx->pc = 0x167740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x167744: 0x831826  xor         $v1, $a0, $v1
    ctx->pc = 0x167744u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 3));
    // 0x167748: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x167748u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x16774c: 0x0  nop
    ctx->pc = 0x16774cu;
    // NOP
    // 0x167750: 0x0  nop
    ctx->pc = 0x167750u;
    // NOP
    // 0x167754: 0x1010  mfhi        $v0
    ctx->pc = 0x167754u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x167758: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x167758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x16775c: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x16775cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x167760: 0xaea20150  sw          $v0, 0x150($s5)
    ctx->pc = 0x167760u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 336), GPR_U32(ctx, 2));
    // 0x167764: 0x0  nop
    ctx->pc = 0x167764u;
    // NOP
label_167768:
    // 0x167768: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x167768u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x16776c: 0xaea20154  sw          $v0, 0x154($s5)
    ctx->pc = 0x16776cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 340), GPR_U32(ctx, 2));
    // 0x167770: 0x3c034318  lui         $v1, 0x4318
    ctx->pc = 0x167770u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17176 << 16));
    // 0x167774: 0x3c026c01  lui         $v0, 0x6C01
    ctx->pc = 0x167774u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27649 << 16));
    // 0x167778: 0xaea00158  sw          $zero, 0x158($s5)
    ctx->pc = 0x167778u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 344), GPR_U32(ctx, 0));
    // 0x16777c: 0x344203ef  ori         $v0, $v0, 0x3EF
    ctx->pc = 0x16777cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1007);
    // 0x167780: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x167780u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167784: 0xaea2015c  sw          $v0, 0x15C($s5)
    ctx->pc = 0x167784u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 348), GPR_U32(ctx, 2));
    // 0x167788: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x167788u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16778c: 0xaea30160  sw          $v1, 0x160($s5)
    ctx->pc = 0x16778cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 352), GPR_U32(ctx, 3));
    // 0x167790: 0x24020ff0  addiu       $v0, $zero, 0xFF0
    ctx->pc = 0x167790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4080));
    // 0x167794: 0xaea30164  sw          $v1, 0x164($s5)
    ctx->pc = 0x167794u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 356), GPR_U32(ctx, 3));
    // 0x167798: 0xaea30168  sw          $v1, 0x168($s5)
    ctx->pc = 0x167798u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 360), GPR_U32(ctx, 3));
    // 0x16779c: 0xaea2016c  sw          $v0, 0x16C($s5)
    ctx->pc = 0x16779cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 364), GPR_U32(ctx, 2));
label_1677a0:
    // 0x1677a0: 0x8ea20018  lw          $v0, 0x18($s5)
    ctx->pc = 0x1677a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
    // 0x1677a4: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1677a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1677a8: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1677a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1677ac: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1677acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1677b0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1677b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1677b4: 0xae360000  sw          $s6, 0x0($s1)
    ctx->pc = 0x1677b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 22));
    // 0x1677b8: 0x90460002  lbu         $a2, 0x2($v0)
    ctx->pc = 0x1677b8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x1677bc: 0x90470003  lbu         $a3, 0x3($v0)
    ctx->pc = 0x1677bcu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x1677c0: 0xc059e70  jal         func_1679C0
    ctx->pc = 0x1677C0u;
    SET_GPR_U32(ctx, 31, 0x1677C8u);
    ctx->pc = 0x1677C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1677C0u;
    // 0x1677c4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1679C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1679C0u, 0x1677C0u, 0x1677C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1677C8u;
label_1677c8:
    // 0x1677c8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1677c8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1677cc: 0x26d60040  addiu       $s6, $s6, 0x40
    ctx->pc = 0x1677ccu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 64));
    // 0x1677d0: 0x272102b  sltu        $v0, $s3, $s2
    ctx->pc = 0x1677d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x1677d4: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x1677D4u;
    {
        const bool branch_taken_0x1677d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1677D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1677D4u;
        // 0x1677d8: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1677d4) {
            ctx->pc = 0x1677A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1677a0;
        }
    }
    ctx->pc = 0x1677DCu;
    // 0x1677dc: 0x26940050  addiu       $s4, $s4, 0x50
    ctx->pc = 0x1677dcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 80));
    // 0x1677e0: 0x29e102b  sltu        $v0, $s4, $fp
    ctx->pc = 0x1677e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 30)) ? 1 : 0);
    // 0x1677e4: 0x1440ff94  bnez        $v0, . + 4 + (-0x6C << 2)
    ctx->pc = 0x1677E4u;
    {
        const bool branch_taken_0x1677e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1677E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1677E4u;
        // 0x1677e8: 0x26b501f0  addiu       $s5, $s5, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 496));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1677e4) {
            ctx->pc = 0x167638u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_167638;
        }
    }
    ctx->pc = 0x1677ECu;
    // 0x1677ec: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x1677ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1677f0: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1677f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1677f4: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1677f4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1677f8: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1677f8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1677fc: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1677fcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x167800: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x167800u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x167804: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x167804u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x167808: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x167808u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16780c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x16780cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x167810: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x167810u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x167814: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x167814u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x167818: 0x3e00008  jr          $ra
    ctx->pc = 0x167818u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16781Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167818u;
        // 0x16781c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x167818u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x167820u;
}
