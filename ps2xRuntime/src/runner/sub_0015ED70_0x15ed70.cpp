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

// Function: sub_0015ED70
// Address: 0x15ed70 - 0x15f230
void sub_0015ED70_0x15ed70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015ED70_0x15ed70");
#endif

    switch (ctx->pc) {
        case 0x15edc8u: goto label_15edc8;
        case 0x15ee88u: goto label_15ee88;
        default: break;
    }

    ctx->pc = 0x15ed70u;

    // 0x15ed70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x15ed70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x15ed74: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x15ed74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x15ed78: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15ed78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15ed7c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15ed7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15ed80: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x15ed80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ed84: 0xac900090  sw          $s0, 0x90($a0)
    ctx->pc = 0x15ed84u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 144), GPR_U32(ctx, 16));
    // 0x15ed88: 0x94a20004  lhu         $v0, 0x4($a1)
    ctx->pc = 0x15ed88u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x15ed8c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x15ed8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x15ed90: 0xa4820010  sh          $v0, 0x10($a0)
    ctx->pc = 0x15ed90u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x15ed94: 0x94830010  lhu         $v1, 0x10($a0)
    ctx->pc = 0x15ed94u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x15ed98: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x15ed98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x15ed9c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x15ED9Cu;
    {
        const bool branch_taken_0x15ed9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15EDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ED9Cu;
        // 0x15eda0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ed9c) {
            ctx->pc = 0x15EDB0u;
            goto label_15edb0;
        }
    }
    ctx->pc = 0x15EDA4u;
    // 0x15eda4: 0x34620006  ori         $v0, $v1, 0x6
    ctx->pc = 0x15eda4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)6);
    // 0x15eda8: 0xa6220010  sh          $v0, 0x10($s1)
    ctx->pc = 0x15eda8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x15edac: 0x0  nop
    ctx->pc = 0x15edacu;
    // NOP
label_15edb0:
    // 0x15edb0: 0x92020006  lbu         $v0, 0x6($s0)
    ctx->pc = 0x15edb0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x15edb4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15edb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15edb8: 0xa2220012  sb          $v0, 0x12($s1)
    ctx->pc = 0x15edb8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 18), (uint8_t)GPR_U32(ctx, 2));
    // 0x15edbc: 0x92020007  lbu         $v0, 0x7($s0)
    ctx->pc = 0x15edbcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
    // 0x15edc0: 0xc05965c  jal         func_165970
    ctx->pc = 0x15EDC0u;
    SET_GPR_U32(ctx, 31, 0x15EDC8u);
    ctx->pc = 0x15EDC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15EDC0u;
    // 0x15edc4: 0xa2220013  sb          $v0, 0x13($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 19), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165970u, 0x15EDC0u, 0x15EDC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15EDC8u;
label_15edc8:
    // 0x15edc8: 0x8603002a  lh          $v1, 0x2A($s0)
    ctx->pc = 0x15edc8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 42)));
    // 0x15edcc: 0xa623002c  sh          $v1, 0x2C($s1)
    ctx->pc = 0x15edccu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 44), (uint16_t)GPR_U32(ctx, 3));
    // 0x15edd0: 0x9203002c  lbu         $v1, 0x2C($s0)
    ctx->pc = 0x15edd0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x15edd4: 0xa223004e  sb          $v1, 0x4E($s1)
    ctx->pc = 0x15edd4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 78), (uint8_t)GPR_U32(ctx, 3));
    // 0x15edd8: 0x9203000e  lbu         $v1, 0xE($s0)
    ctx->pc = 0x15edd8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x15eddc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x15EDDCu;
    {
        const bool branch_taken_0x15eddc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15eddc) {
            ctx->pc = 0x15EDF0u;
            goto label_15edf0;
        }
    }
    ctx->pc = 0x15EDE4u;
    // 0x15ede4: 0x96230010  lhu         $v1, 0x10($s1)
    ctx->pc = 0x15ede4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x15ede8: 0x34630400  ori         $v1, $v1, 0x400
    ctx->pc = 0x15ede8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1024);
    // 0x15edec: 0xa6230010  sh          $v1, 0x10($s1)
    ctx->pc = 0x15edecu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 16), (uint16_t)GPR_U32(ctx, 3));
label_15edf0:
    // 0x15edf0: 0x92030020  lbu         $v1, 0x20($s0)
    ctx->pc = 0x15edf0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x15edf4: 0x92040021  lbu         $a0, 0x21($s0)
    ctx->pc = 0x15edf4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 33)));
    // 0x15edf8: 0x14640003  bne         $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15EDF8u;
    {
        const bool branch_taken_0x15edf8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x15edf8) {
            ctx->pc = 0x15EE08u;
            goto label_15ee08;
        }
    }
    ctx->pc = 0x15EE00u;
    // 0x15ee00: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x15EE00u;
    {
        const bool branch_taken_0x15ee00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15ee00) {
            ctx->pc = 0x15EE60u;
            goto label_15ee60;
        }
    }
    ctx->pc = 0x15EE08u;
label_15ee08:
    // 0x15ee08: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15ee08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x15ee0c: 0x8c24f00c  lw          $a0, -0xFF4($at)
    ctx->pc = 0x15ee0cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x81F00Cu));
    // 0x15ee10: 0x3c03873c  lui         $v1, 0x873C
    ctx->pc = 0x15ee10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34620 << 16));
    // 0x15ee14: 0x3463a9e5  ori         $v1, $v1, 0xA9E5
    ctx->pc = 0x15ee14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43493);
    // 0x15ee18: 0x42840  sll         $a1, $a0, 1
    ctx->pc = 0x15ee18u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x15ee1c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15ee1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x15ee20: 0x427c2  srl         $a0, $a0, 31
    ctx->pc = 0x15ee20u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x15ee24: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x15ee24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x15ee28: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x15ee28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x15ee2c: 0x831826  xor         $v1, $a0, $v1
    ctx->pc = 0x15ee2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 3));
    // 0x15ee30: 0xac23f00c  sw          $v1, -0xFF4($at)
    ctx->pc = 0x15ee30u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963212), GPR_U32(ctx, 3));
    // 0x15ee34: 0x32a02  srl         $a1, $v1, 8
    ctx->pc = 0x15ee34u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x15ee38: 0x92030021  lbu         $v1, 0x21($s0)
    ctx->pc = 0x15ee38u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 33)));
    // 0x15ee3c: 0x92040020  lbu         $a0, 0x20($s0)
    ctx->pc = 0x15ee3cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x15ee40: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x15ee40u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x15ee44: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x15ee44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x15ee48: 0xa3001b  divu        $zero, $a1, $v1
    ctx->pc = 0x15ee48u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
    // 0x15ee4c: 0x0  nop
    ctx->pc = 0x15ee4cu;
    // NOP
    // 0x15ee50: 0x0  nop
    ctx->pc = 0x15ee50u;
    // NOP
    // 0x15ee54: 0x1810  mfhi        $v1
    ctx->pc = 0x15ee54u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x15ee58: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x15ee58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x15ee5c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x15ee5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_15ee60:
    // 0x15ee60: 0x8e250018  lw          $a1, 0x18($s1)
    ctx->pc = 0x15ee60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x15ee64: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x15ee64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x15ee68: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15ee68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ee6c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x15ee6cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x15ee70: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x15ee70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x15ee74: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x15ee74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x15ee78: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x15ee78u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x15ee7c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x15EE7Cu;
    {
        const bool branch_taken_0x15ee7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15EE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EE7Cu;
        // 0x15ee80: 0xa42821  addu        $a1, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ee7c) {
            ctx->pc = 0x15EE90u;
            goto label_15ee90;
        }
    }
    ctx->pc = 0x15EE84u;
    // 0x15ee84: 0x0  nop
    ctx->pc = 0x15ee84u;
    // NOP
label_15ee88:
    // 0x15ee88: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x15ee88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x15ee8c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x15ee8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_15ee90:
    // 0x15ee90: 0x90a40002  lbu         $a0, 0x2($a1)
    ctx->pc = 0x15ee90u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x15ee94: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x15EE94u;
    {
        const bool branch_taken_0x15ee94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x15ee94) {
            ctx->pc = 0x15EEB0u;
            goto label_15eeb0;
        }
    }
    ctx->pc = 0x15EE9Cu;
    // 0x15ee9c: 0x90a40003  lbu         $a0, 0x3($a1)
    ctx->pc = 0x15ee9cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
    // 0x15eea0: 0x30840010  andi        $a0, $a0, 0x10
    ctx->pc = 0x15eea0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16);
    // 0x15eea4: 0x1080fff8  beqz        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x15EEA4u;
    {
        const bool branch_taken_0x15eea4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x15eea4) {
            ctx->pc = 0x15EE88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15ee88;
        }
    }
    ctx->pc = 0x15EEACu;
    // 0x15eeac: 0x0  nop
    ctx->pc = 0x15eeacu;
    // NOP
label_15eeb0:
    // 0x15eeb0: 0x92070023  lbu         $a3, 0x23($s0)
    ctx->pc = 0x15eeb0u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 35)));
    // 0x15eeb4: 0x30c400ff  andi        $a0, $a2, 0xFF
    ctx->pc = 0x15eeb4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x15eeb8: 0x2485ffff  addiu       $a1, $a0, -0x1
    ctx->pc = 0x15eeb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x15eebc: 0xe5202a  slt         $a0, $a3, $a1
    ctx->pc = 0x15eebcu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x15eec0: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x15EEC0u;
    {
        const bool branch_taken_0x15eec0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x15EEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EEC0u;
        // 0x15eec4: 0x92060022  lbu         $a2, 0x22($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 34)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15eec0) {
            ctx->pc = 0x15EEE0u;
            goto label_15eee0;
        }
    }
    ctx->pc = 0x15EEC8u;
    // 0x15eec8: 0x30a700ff  andi        $a3, $a1, 0xFF
    ctx->pc = 0x15eec8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x15eecc: 0x30c400ff  andi        $a0, $a2, 0xFF
    ctx->pc = 0x15eeccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x15eed0: 0x87202a  slt         $a0, $a0, $a3
    ctx->pc = 0x15eed0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x15eed4: 0x14800002  bnez        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x15EED4u;
    {
        const bool branch_taken_0x15eed4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x15eed4) {
            ctx->pc = 0x15EEE0u;
            goto label_15eee0;
        }
    }
    ctx->pc = 0x15EEDCu;
    // 0x15eedc: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x15eedcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_15eee0:
    // 0x15eee0: 0x30c800ff  andi        $t0, $a2, 0xFF
    ctx->pc = 0x15eee0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x15eee4: 0x30e400ff  andi        $a0, $a3, 0xFF
    ctx->pc = 0x15eee4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x15eee8: 0x15040003  bne         $t0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15EEE8u;
    {
        const bool branch_taken_0x15eee8 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 4));
        if (branch_taken_0x15eee8) {
            ctx->pc = 0x15EEF8u;
            goto label_15eef8;
        }
    }
    ctx->pc = 0x15EEF0u;
    // 0x15eef0: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x15EEF0u;
    {
        const bool branch_taken_0x15eef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15eef0) {
            ctx->pc = 0x15EF48u;
            goto label_15ef48;
        }
    }
    ctx->pc = 0x15EEF8u;
label_15eef8:
    // 0x15eef8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15eef8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x15eefc: 0x8c26f00c  lw          $a2, -0xFF4($at)
    ctx->pc = 0x15eefcu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x81F00Cu));
    // 0x15ef00: 0x3c05873c  lui         $a1, 0x873C
    ctx->pc = 0x15ef00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34620 << 16));
    // 0x15ef04: 0x882023  subu        $a0, $a0, $t0
    ctx->pc = 0x15ef04u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x15ef08: 0x34a5a9e5  ori         $a1, $a1, 0xA9E5
    ctx->pc = 0x15ef08u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)43493);
    // 0x15ef0c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x15ef0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x15ef10: 0x63840  sll         $a3, $a2, 1
    ctx->pc = 0x15ef10u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x15ef14: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15ef14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x15ef18: 0x637c2  srl         $a2, $a2, 31
    ctx->pc = 0x15ef18u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x15ef1c: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x15ef1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x15ef20: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x15ef20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x15ef24: 0xc52826  xor         $a1, $a2, $a1
    ctx->pc = 0x15ef24u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 5));
    // 0x15ef28: 0xac25f00c  sw          $a1, -0xFF4($at)
    ctx->pc = 0x15ef28u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963212), GPR_U32(ctx, 5));
    // 0x15ef2c: 0x52a02  srl         $a1, $a1, 8
    ctx->pc = 0x15ef2cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 8));
    // 0x15ef30: 0xa4001b  divu        $zero, $a1, $a0
    ctx->pc = 0x15ef30u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
    // 0x15ef34: 0x0  nop
    ctx->pc = 0x15ef34u;
    // NOP
    // 0x15ef38: 0x0  nop
    ctx->pc = 0x15ef38u;
    // NOP
    // 0x15ef3c: 0x2010  mfhi        $a0
    ctx->pc = 0x15ef3cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x15ef40: 0x1042021  addu        $a0, $t0, $a0
    ctx->pc = 0x15ef40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x15ef44: 0x308800ff  andi        $t0, $a0, 0xFF
    ctx->pc = 0x15ef44u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_15ef48:
    // 0x15ef48: 0x8e260018  lw          $a2, 0x18($s1)
    ctx->pc = 0x15ef48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x15ef4c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x15ef4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x15ef50: 0x310500ff  andi        $a1, $t0, 0xFF
    ctx->pc = 0x15ef50u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x15ef54: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x15ef54u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x15ef58: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15ef58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x15ef5c: 0x3c03873c  lui         $v1, 0x873C
    ctx->pc = 0x15ef5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34620 << 16));
    // 0x15ef60: 0x3463a9e5  ori         $v1, $v1, 0xA9E5
    ctx->pc = 0x15ef60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43493);
    // 0x15ef64: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x15ef64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x15ef68: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x15ef68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x15ef6c: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x15ef6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x15ef70: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x15ef70u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x15ef74: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x15ef74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x15ef78: 0xae24001c  sw          $a0, 0x1C($s1)
    ctx->pc = 0x15ef78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 4));
    // 0x15ef7c: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x15ef7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x15ef80: 0x90840002  lbu         $a0, 0x2($a0)
    ctx->pc = 0x15ef80u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x15ef84: 0xa224002f  sb          $a0, 0x2F($s1)
    ctx->pc = 0x15ef84u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 47), (uint8_t)GPR_U32(ctx, 4));
    // 0x15ef88: 0x8c24f00c  lw          $a0, -0xFF4($at)
    ctx->pc = 0x15ef88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294963212)));
    // 0x15ef8c: 0x42840  sll         $a1, $a0, 1
    ctx->pc = 0x15ef8cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x15ef90: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15ef90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x15ef94: 0x427c2  srl         $a0, $a0, 31
    ctx->pc = 0x15ef94u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x15ef98: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x15ef98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x15ef9c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x15ef9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x15efa0: 0x831826  xor         $v1, $a0, $v1
    ctx->pc = 0x15efa0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 3));
    // 0x15efa4: 0xac23f00c  sw          $v1, -0xFF4($at)
    ctx->pc = 0x15efa4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963212), GPR_U32(ctx, 3));
    // 0x15efa8: 0x34a02  srl         $t1, $v1, 8
    ctx->pc = 0x15efa8u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x15efac: 0x8e230090  lw          $v1, 0x90($s1)
    ctx->pc = 0x15efacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x15efb0: 0x9063000b  lbu         $v1, 0xB($v1)
    ctx->pc = 0x15efb0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 11)));
    // 0x15efb4: 0xa2230023  sb          $v1, 0x23($s1)
    ctx->pc = 0x15efb4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 35), (uint8_t)GPR_U32(ctx, 3));
    // 0x15efb8: 0x8e230090  lw          $v1, 0x90($s1)
    ctx->pc = 0x15efb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x15efbc: 0x94680030  lhu         $t0, 0x30($v1)
    ctx->pc = 0x15efbcu;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x15efc0: 0x15000003  bnez        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15EFC0u;
    {
        const bool branch_taken_0x15efc0 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x15efc0) {
            ctx->pc = 0x15EFD0u;
            goto label_15efd0;
        }
    }
    ctx->pc = 0x15EFC8u;
    // 0x15efc8: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x15EFC8u;
    {
        const bool branch_taken_0x15efc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15EFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EFC8u;
        // 0x15efcc: 0xa22000a0  sb          $zero, 0xA0($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 160), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15efc8) {
            ctx->pc = 0x15F080u;
            goto label_15f080;
        }
    }
    ctx->pc = 0x15EFD0u;
label_15efd0:
    // 0x15efd0: 0x92230023  lbu         $v1, 0x23($s1)
    ctx->pc = 0x15efd0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 35)));
    // 0x15efd4: 0x683821  addu        $a3, $v1, $t0
    ctx->pc = 0x15efd4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x15efd8: 0x28e10100  slti        $at, $a3, 0x100
    ctx->pc = 0x15efd8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x15efdc: 0x14200008  bnez        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x15EFDCu;
    {
        const bool branch_taken_0x15efdc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x15efdc) {
            ctx->pc = 0x15F000u;
            goto label_15f000;
        }
    }
    ctx->pc = 0x15EFE4u;
    // 0x15efe4: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x15efe4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x15efe8: 0xe34023  subu        $t0, $a3, $v1
    ctx->pc = 0x15efe8u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x15efec: 0x15000004  bnez        $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x15EFECu;
    {
        const bool branch_taken_0x15efec = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x15efec) {
            ctx->pc = 0x15F000u;
            goto label_15f000;
        }
    }
    ctx->pc = 0x15EFF4u;
    // 0x15eff4: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x15EFF4u;
    {
        const bool branch_taken_0x15eff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15EFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EFF4u;
        // 0x15eff8: 0xa22000a0  sb          $zero, 0xA0($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 160), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15eff4) {
            ctx->pc = 0x15F080u;
            goto label_15f080;
        }
    }
    ctx->pc = 0x15EFFCu;
    // 0x15effc: 0x0  nop
    ctx->pc = 0x15effcu;
    // NOP
label_15f000:
    // 0x15f000: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x15f000u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15f004: 0xa22600a0  sb          $a2, 0xA0($s1)
    ctx->pc = 0x15f004u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 160), (uint8_t)GPR_U32(ctx, 6));
    // 0x15f008: 0x8e230090  lw          $v1, 0x90($s1)
    ctx->pc = 0x15f008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x15f00c: 0x94630032  lhu         $v1, 0x32($v1)
    ctx->pc = 0x15f00cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 50)));
    // 0x15f010: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x15F010u;
    {
        const bool branch_taken_0x15f010 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f010) {
            ctx->pc = 0x15F038u;
            goto label_15f038;
        }
    }
    ctx->pc = 0x15F018u;
    // 0x15f018: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x15f018u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15f01c: 0x31230fff  andi        $v1, $t1, 0xFFF
    ctx->pc = 0x15f01cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)4095);
    // 0x15f020: 0xa22000a1  sb          $zero, 0xA1($s1)
    ctx->pc = 0x15f020u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 161), (uint8_t)GPR_U32(ctx, 0));
    // 0x15f024: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x15f024u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x15f028: 0xa62300a2  sh          $v1, 0xA2($s1)
    ctx->pc = 0x15f028u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 162), (uint16_t)GPR_U32(ctx, 3));
    // 0x15f02c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x15F02Cu;
    {
        const bool branch_taken_0x15f02c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F02Cu;
        // 0x15f030: 0xe62000a4  swc1        $f0, 0xA4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 164), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f02c) {
            ctx->pc = 0x15F080u;
            goto label_15f080;
        }
    }
    ctx->pc = 0x15F034u;
    // 0x15f034: 0x0  nop
    ctx->pc = 0x15f034u;
    // NOP
label_15f038:
    // 0x15f038: 0xa22600a1  sb          $a2, 0xA1($s1)
    ctx->pc = 0x15f038u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 161), (uint8_t)GPR_U32(ctx, 6));
    // 0x15f03c: 0x92250023  lbu         $a1, 0x23($s1)
    ctx->pc = 0x15f03cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 35)));
    // 0x15f040: 0x820c3  sra         $a0, $t0, 3
    ctx->pc = 0x15f040u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 8), 3));
    // 0x15f044: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x15f044u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x15f048: 0xa22500a2  sb          $a1, 0xA2($s1)
    ctx->pc = 0x15f048u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 162), (uint8_t)GPR_U32(ctx, 5));
    // 0x15f04c: 0xa22700a3  sb          $a3, 0xA3($s1)
    ctx->pc = 0x15f04cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 163), (uint8_t)GPR_U32(ctx, 7));
    // 0x15f050: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x15F050u;
    {
        const bool branch_taken_0x15f050 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15F054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F050u;
        // 0x15f054: 0xa22400a4  sb          $a0, 0xA4($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 164), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f050) {
            ctx->pc = 0x15F060u;
            goto label_15f060;
        }
    }
    ctx->pc = 0x15F058u;
    // 0x15f058: 0xa22600a4  sb          $a2, 0xA4($s1)
    ctx->pc = 0x15f058u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 164), (uint8_t)GPR_U32(ctx, 6));
    // 0x15f05c: 0x0  nop
    ctx->pc = 0x15f05cu;
    // NOP
label_15f060:
    // 0x15f060: 0x92230023  lbu         $v1, 0x23($s1)
    ctx->pc = 0x15f060u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 35)));
    // 0x15f064: 0x128001b  divu        $zero, $t1, $t0
    ctx->pc = 0x15f064u;
    { uint32_t divisor = GPR_U32(ctx, 8); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 9) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 9) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,9); } }
    // 0x15f068: 0x0  nop
    ctx->pc = 0x15f068u;
    // NOP
    // 0x15f06c: 0x0  nop
    ctx->pc = 0x15f06cu;
    // NOP
    // 0x15f070: 0x2010  mfhi        $a0
    ctx->pc = 0x15f070u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x15f074: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x15f074u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x15f078: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15f078u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x15f07c: 0xa2230023  sb          $v1, 0x23($s1)
    ctx->pc = 0x15f07cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 35), (uint8_t)GPR_U32(ctx, 3));
label_15f080:
    // 0x15f080: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15f080u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x15f084: 0x8c26f00c  lw          $a2, -0xFF4($at)
    ctx->pc = 0x15f084u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x81F00Cu));
    // 0x15f088: 0x3c03873c  lui         $v1, 0x873C
    ctx->pc = 0x15f088u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34620 << 16));
    // 0x15f08c: 0x3463a9e5  ori         $v1, $v1, 0xA9E5
    ctx->pc = 0x15f08cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43493);
    // 0x15f090: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x15f090u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x15f094: 0x24040fff  addiu       $a0, $zero, 0xFFF
    ctx->pc = 0x15f094u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4095));
    // 0x15f098: 0x63840  sll         $a3, $a2, 1
    ctx->pc = 0x15f098u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x15f09c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15f09cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x15f0a0: 0x637c2  srl         $a2, $a2, 31
    ctx->pc = 0x15f0a0u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x15f0a4: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x15f0a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x15f0a8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x15f0a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x15f0ac: 0xc31826  xor         $v1, $a2, $v1
    ctx->pc = 0x15f0acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 3));
    // 0x15f0b0: 0xac23f00c  sw          $v1, -0xFF4($at)
    ctx->pc = 0x15f0b0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963212), GPR_U32(ctx, 3));
    // 0x15f0b4: 0x34202  srl         $t0, $v1, 8
    ctx->pc = 0x15f0b4u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x15f0b8: 0x8e230090  lw          $v1, 0x90($s1)
    ctx->pc = 0x15f0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x15f0bc: 0x90660028  lbu         $a2, 0x28($v1)
    ctx->pc = 0x15f0bcu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x15f0c0: 0x94630024  lhu         $v1, 0x24($v1)
    ctx->pc = 0x15f0c0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x15f0c4: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x15f0c4u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x15f0c8: 0xa42007  srav        $a0, $a0, $a1
    ctx->pc = 0x15f0c8u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 5) & 0x1F));
    // 0x15f0cc: 0x1042024  and         $a0, $t0, $a0
    ctx->pc = 0x15f0ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) & GPR_U64(ctx, 4));
    // 0x15f0d0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15f0d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x15f0d4: 0xa6230028  sh          $v1, 0x28($s1)
    ctx->pc = 0x15f0d4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 40), (uint16_t)GPR_U32(ctx, 3));
    // 0x15f0d8: 0x8e230090  lw          $v1, 0x90($s1)
    ctx->pc = 0x15f0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x15f0dc: 0x94660034  lhu         $a2, 0x34($v1)
    ctx->pc = 0x15f0dcu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x15f0e0: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x15F0E0u;
    {
        const bool branch_taken_0x15f0e0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x15f0e0) {
            ctx->pc = 0x15F0F0u;
            goto label_15f0f0;
        }
    }
    ctx->pc = 0x15F0E8u;
    // 0x15f0e8: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x15F0E8u;
    {
        const bool branch_taken_0x15f0e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F0E8u;
        // 0x15f0ec: 0xa22000a8  sb          $zero, 0xA8($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 168), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f0e8) {
            ctx->pc = 0x15F1A0u;
            goto label_15f1a0;
        }
    }
    ctx->pc = 0x15F0F0u;
label_15f0f0:
    // 0x15f0f0: 0x96230028  lhu         $v1, 0x28($s1)
    ctx->pc = 0x15f0f0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x15f0f4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x15f0f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x15f0f8: 0x663821  addu        $a3, $v1, $a2
    ctx->pc = 0x15f0f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x15f0fc: 0xe1082a  slt         $at, $a3, $at
    ctx->pc = 0x15f0fcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x15f100: 0x14200007  bnez        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x15F100u;
    {
        const bool branch_taken_0x15f100 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x15f100) {
            ctx->pc = 0x15F120u;
            goto label_15f120;
        }
    }
    ctx->pc = 0x15F108u;
    // 0x15f108: 0x3407ffff  ori         $a3, $zero, 0xFFFF
    ctx->pc = 0x15f108u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x15f10c: 0xe33023  subu        $a2, $a3, $v1
    ctx->pc = 0x15f10cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x15f110: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x15F110u;
    {
        const bool branch_taken_0x15f110 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x15f110) {
            ctx->pc = 0x15F120u;
            goto label_15f120;
        }
    }
    ctx->pc = 0x15F118u;
    // 0x15f118: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x15F118u;
    {
        const bool branch_taken_0x15f118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F118u;
        // 0x15f11c: 0xa22000a8  sb          $zero, 0xA8($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 168), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f118) {
            ctx->pc = 0x15F1A0u;
            goto label_15f1a0;
        }
    }
    ctx->pc = 0x15F120u;
label_15f120:
    // 0x15f120: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x15f120u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15f124: 0xa22400a8  sb          $a0, 0xA8($s1)
    ctx->pc = 0x15f124u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 168), (uint8_t)GPR_U32(ctx, 4));
    // 0x15f128: 0x8e230090  lw          $v1, 0x90($s1)
    ctx->pc = 0x15f128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x15f12c: 0x94630036  lhu         $v1, 0x36($v1)
    ctx->pc = 0x15f12cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 54)));
    // 0x15f130: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x15F130u;
    {
        const bool branch_taken_0x15f130 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f130) {
            ctx->pc = 0x15F158u;
            goto label_15f158;
        }
    }
    ctx->pc = 0x15F138u;
    // 0x15f138: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x15f138u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15f13c: 0x81b02  srl         $v1, $t0, 12
    ctx->pc = 0x15f13cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), 12));
    // 0x15f140: 0xa22000a9  sb          $zero, 0xA9($s1)
    ctx->pc = 0x15f140u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 169), (uint8_t)GPR_U32(ctx, 0));
    // 0x15f144: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x15f144u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x15f148: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x15f148u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x15f14c: 0xa62300aa  sh          $v1, 0xAA($s1)
    ctx->pc = 0x15f14cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 170), (uint16_t)GPR_U32(ctx, 3));
    // 0x15f150: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x15F150u;
    {
        const bool branch_taken_0x15f150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F150u;
        // 0x15f154: 0xe62000ac  swc1        $f0, 0xAC($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 172), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f150) {
            ctx->pc = 0x15F1A0u;
            goto label_15f1a0;
        }
    }
    ctx->pc = 0x15F158u;
label_15f158:
    // 0x15f158: 0xa22400a9  sb          $a0, 0xA9($s1)
    ctx->pc = 0x15f158u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 169), (uint8_t)GPR_U32(ctx, 4));
    // 0x15f15c: 0x96250028  lhu         $a1, 0x28($s1)
    ctx->pc = 0x15f15cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x15f160: 0x620c3  sra         $a0, $a2, 3
    ctx->pc = 0x15f160u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 6), 3));
    // 0x15f164: 0x3083ffff  andi        $v1, $a0, 0xFFFF
    ctx->pc = 0x15f164u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x15f168: 0xa62500aa  sh          $a1, 0xAA($s1)
    ctx->pc = 0x15f168u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 170), (uint16_t)GPR_U32(ctx, 5));
    // 0x15f16c: 0xa62700ac  sh          $a3, 0xAC($s1)
    ctx->pc = 0x15f16cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 172), (uint16_t)GPR_U32(ctx, 7));
    // 0x15f170: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x15F170u;
    {
        const bool branch_taken_0x15f170 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15F174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F170u;
        // 0x15f174: 0xa62400ae  sh          $a0, 0xAE($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 174), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f170) {
            ctx->pc = 0x15F180u;
            goto label_15f180;
        }
    }
    ctx->pc = 0x15F178u;
    // 0x15f178: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x15f178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x15f17c: 0xa62300ae  sh          $v1, 0xAE($s1)
    ctx->pc = 0x15f17cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 174), (uint16_t)GPR_U32(ctx, 3));
label_15f180:
    // 0x15f180: 0x81b02  srl         $v1, $t0, 12
    ctx->pc = 0x15f180u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), 12));
    // 0x15f184: 0x66001b  divu        $zero, $v1, $a2
    ctx->pc = 0x15f184u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x15f188: 0x96230028  lhu         $v1, 0x28($s1)
    ctx->pc = 0x15f188u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x15f18c: 0x0  nop
    ctx->pc = 0x15f18cu;
    // NOP
    // 0x15f190: 0x2010  mfhi        $a0
    ctx->pc = 0x15f190u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x15f194: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x15f194u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x15f198: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15f198u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x15f19c: 0xa6230028  sh          $v1, 0x28($s1)
    ctx->pc = 0x15f19cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 40), (uint16_t)GPR_U32(ctx, 3));
label_15f1a0:
    // 0x15f1a0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15f1a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x15f1a4: 0x8c27f00c  lw          $a3, -0xFF4($at)
    ctx->pc = 0x15f1a4u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x81F00Cu));
    // 0x15f1a8: 0x3c03873c  lui         $v1, 0x873C
    ctx->pc = 0x15f1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34620 << 16));
    // 0x15f1ac: 0x3464a9e5  ori         $a0, $v1, 0xA9E5
    ctx->pc = 0x15f1acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43493);
    // 0x15f1b0: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x15f1b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x15f1b4: 0x24050fff  addiu       $a1, $zero, 0xFFF
    ctx->pc = 0x15f1b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4095));
    // 0x15f1b8: 0x26090010  addiu       $t1, $s0, 0x10
    ctx->pc = 0x15f1b8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x15f1bc: 0x26230050  addiu       $v1, $s1, 0x50
    ctx->pc = 0x15f1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x15f1c0: 0x74040  sll         $t0, $a3, 1
    ctx->pc = 0x15f1c0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x15f1c4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15f1c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x15f1c8: 0x73fc2  srl         $a3, $a3, 31
    ctx->pc = 0x15f1c8u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 7), 31));
    // 0x15f1cc: 0x1073821  addu        $a3, $t0, $a3
    ctx->pc = 0x15f1ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x15f1d0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x15f1d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x15f1d4: 0xe42026  xor         $a0, $a3, $a0
    ctx->pc = 0x15f1d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) ^ GPR_U64(ctx, 4));
    // 0x15f1d8: 0xac24f00c  sw          $a0, -0xFF4($at)
    ctx->pc = 0x15f1d8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963212), GPR_U32(ctx, 4));
    // 0x15f1dc: 0x44202  srl         $t0, $a0, 8
    ctx->pc = 0x15f1dcu;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
    // 0x15f1e0: 0x92070029  lbu         $a3, 0x29($s0)
    ctx->pc = 0x15f1e0u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 41)));
    // 0x15f1e4: 0x96040026  lhu         $a0, 0x26($s0)
    ctx->pc = 0x15f1e4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 38)));
    // 0x15f1e8: 0xc73023  subu        $a2, $a2, $a3
    ctx->pc = 0x15f1e8u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x15f1ec: 0xc52807  srav        $a1, $a1, $a2
    ctx->pc = 0x15f1ecu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), GPR_U32(ctx, 6) & 0x1F));
    // 0x15f1f0: 0xa82824  and         $a1, $a1, $t0
    ctx->pc = 0x15f1f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 8));
    // 0x15f1f4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15f1f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f1f8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x15f1f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x15f1fc: 0x30840fff  andi        $a0, $a0, 0xFFF
    ctx->pc = 0x15f1fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
    // 0x15f200: 0x26250060  addiu       $a1, $s1, 0x60
    ctx->pc = 0x15f200u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
    // 0x15f204: 0xa624002a  sh          $a0, 0x2A($s1)
    ctx->pc = 0x15f204u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 42), (uint16_t)GPR_U32(ctx, 4));
    // 0x15f208: 0x79270000  lq          $a3, 0x0($t1)
    ctx->pc = 0x15f208u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x15f20c: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x15f20cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x15f210: 0x7c670000  sq          $a3, 0x0($v1)
    ctx->pc = 0x15f210u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 7));
    // 0x15f214: 0x78860000  lq          $a2, 0x0($a0)
    ctx->pc = 0x15f214u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x15f218: 0x7ca60000  sq          $a2, 0x0($a1)
    ctx->pc = 0x15f218u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 6));
    // 0x15f21c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x15f21cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15f220: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15f220u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15f224: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15f224u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15f228: 0x3e00008  jr          $ra
    ctx->pc = 0x15F228u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15F22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F228u;
        // 0x15f22c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15F228u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15F230u;
}
