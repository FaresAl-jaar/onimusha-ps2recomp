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

// Function: sub_001829D0
// Address: 0x1829d0 - 0x182bf8
void sub_001829D0_0x1829d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001829D0_0x1829d0");
#endif

    switch (ctx->pc) {
        case 0x182a20u: goto label_182a20;
        case 0x182a40u: goto label_182a40;
        case 0x182aa0u: goto label_182aa0;
        case 0x182ae0u: goto label_182ae0;
        case 0x182bb8u: goto label_182bb8;
        default: break;
    }

    ctx->pc = 0x1829d0u;

    // 0x1829d0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1829d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1829d4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1829d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1829d8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1829d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1829dc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1829dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1829e0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1829e0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1829e4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1829e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1829e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1829e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1829ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1829ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1829f0: 0x8c930048  lw          $s3, 0x48($a0)
    ctx->pc = 0x1829f0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x1829f4: 0xa08501fc  sb          $a1, 0x1FC($a0)
    ctx->pc = 0x1829f4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 508), (uint8_t)GPR_U32(ctx, 5));
    // 0x1829f8: 0xa08601fd  sb          $a2, 0x1FD($a0)
    ctx->pc = 0x1829f8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 509), (uint8_t)GPR_U32(ctx, 6));
    // 0x1829fc: 0xa08701fe  sb          $a3, 0x1FE($a0)
    ctx->pc = 0x1829fcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 510), (uint8_t)GPR_U32(ctx, 7));
    // 0x182a00: 0xa08801ff  sb          $t0, 0x1FF($a0)
    ctx->pc = 0x182a00u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 511), (uint8_t)GPR_U32(ctx, 8));
    // 0x182a04: 0x908401f8  lbu         $a0, 0x1F8($a0)
    ctx->pc = 0x182a04u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 504)));
    // 0x182a08: 0x4082b  sltu        $at, $zero, $a0
    ctx->pc = 0x182a08u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x182a0c: 0x1020001e  beqz        $at, . + 4 + (0x1E << 2)
    ctx->pc = 0x182A0Cu;
    {
        const bool branch_taken_0x182a0c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x182A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182A0Cu;
        // 0x182a10: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182a0c) {
            ctx->pc = 0x182A88u;
            goto label_182a88;
        }
    }
    ctx->pc = 0x182A14u;
    // 0x182a14: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x182a14u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182a18: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x182a18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x182a1c: 0x0  nop
    ctx->pc = 0x182a1cu;
    // NOP
label_182a20:
    // 0x182a20: 0x8e8401e0  lw          $a0, 0x1E0($s4)
    ctx->pc = 0x182a20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 480)));
    // 0x182a24: 0x874821  addu        $t1, $a0, $a3
    ctx->pc = 0x182a24u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x182a28: 0xad2011d4  sw          $zero, 0x11D4($t1)
    ctx->pc = 0x182a28u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4564), GPR_U32(ctx, 0));
    // 0x182a2c: 0x928401f9  lbu         $a0, 0x1F9($s4)
    ctx->pc = 0x182a2cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 505)));
    // 0x182a30: 0x4082b  sltu        $at, $zero, $a0
    ctx->pc = 0x182a30u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x182a34: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
    ctx->pc = 0x182A34u;
    {
        const bool branch_taken_0x182a34 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x182A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182A34u;
        // 0x182a38: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182a34) {
            ctx->pc = 0x182A70u;
            goto label_182a70;
        }
    }
    ctx->pc = 0x182A3Cu;
    // 0x182a3c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x182a3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_182a40:
    // 0x182a40: 0x8d2411c0  lw          $a0, 0x11C0($t1)
    ctx->pc = 0x182a40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4544)));
    // 0x182a44: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x182a44u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x182a48: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x182a48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x182a4c: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x182a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x182a50: 0x8d2411c0  lw          $a0, 0x11C0($t1)
    ctx->pc = 0x182a50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4544)));
    // 0x182a54: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x182a54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x182a58: 0xac85001c  sw          $a1, 0x1C($a0)
    ctx->pc = 0x182a58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 5));
    // 0x182a5c: 0x928401f9  lbu         $a0, 0x1F9($s4)
    ctx->pc = 0x182a5cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 505)));
    // 0x182a60: 0x104202b  sltu        $a0, $t0, $a0
    ctx->pc = 0x182a60u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x182a64: 0x1480fff6  bnez        $a0, . + 4 + (-0xA << 2)
    ctx->pc = 0x182A64u;
    {
        const bool branch_taken_0x182a64 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x182A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182A64u;
        // 0x182a68: 0x24c60100  addiu       $a2, $a2, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182a64) {
            ctx->pc = 0x182A40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_182a40;
        }
    }
    ctx->pc = 0x182A6Cu;
    // 0x182a6c: 0x0  nop
    ctx->pc = 0x182a6cu;
    // NOP
label_182a70:
    // 0x182a70: 0x928401f8  lbu         $a0, 0x1F8($s4)
    ctx->pc = 0x182a70u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 504)));
    // 0x182a74: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x182a74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x182a78: 0x64202b  sltu        $a0, $v1, $a0
    ctx->pc = 0x182a78u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x182a7c: 0x1480ffe8  bnez        $a0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x182A7Cu;
    {
        const bool branch_taken_0x182a7c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x182A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182A7Cu;
        // 0x182a80: 0x24e71210  addiu       $a3, $a3, 0x1210 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4624));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182a7c) {
            ctx->pc = 0x182A20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_182a20;
        }
    }
    ctx->pc = 0x182A84u;
    // 0x182a84: 0x0  nop
    ctx->pc = 0x182a84u;
    // NOP
label_182a88:
    // 0x182a88: 0x928501f9  lbu         $a1, 0x1F9($s4)
    ctx->pc = 0x182a88u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 505)));
    // 0x182a8c: 0x5082b  sltu        $at, $zero, $a1
    ctx->pc = 0x182a8cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x182a90: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x182A90u;
    {
        const bool branch_taken_0x182a90 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x182A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182A90u;
        // 0x182a94: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182a90) {
            ctx->pc = 0x182AC0u;
            goto label_182ac0;
        }
    }
    ctx->pc = 0x182A98u;
    // 0x182a98: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x182a98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182a9c: 0x0  nop
    ctx->pc = 0x182a9cu;
    // NOP
label_182aa0:
    // 0x182aa0: 0x8e8301e4  lw          $v1, 0x1E4($s4)
    ctx->pc = 0x182aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 484)));
    // 0x182aa4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x182aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x182aa8: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x182aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x182aac: 0xac600060  sw          $zero, 0x60($v1)
    ctx->pc = 0x182aacu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 0));
    // 0x182ab0: 0x928501f9  lbu         $a1, 0x1F9($s4)
    ctx->pc = 0x182ab0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 505)));
    // 0x182ab4: 0x85182b  sltu        $v1, $a0, $a1
    ctx->pc = 0x182ab4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x182ab8: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x182AB8u;
    {
        const bool branch_taken_0x182ab8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x182ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182AB8u;
        // 0x182abc: 0x24c60090  addiu       $a2, $a2, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182ab8) {
            ctx->pc = 0x182AA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_182aa0;
        }
    }
    ctx->pc = 0x182AC0u;
label_182ac0:
    // 0x182ac0: 0x10a00045  beqz        $a1, . + 4 + (0x45 << 2)
    ctx->pc = 0x182AC0u;
    {
        const bool branch_taken_0x182ac0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x182ac0) {
            ctx->pc = 0x182BD8u;
            goto label_182bd8;
        }
    }
    ctx->pc = 0x182AC8u;
    // 0x182ac8: 0x9663006a  lhu         $v1, 0x6A($s3)
    ctx->pc = 0x182ac8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 106)));
    // 0x182acc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x182accu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182ad0: 0x3082b  sltu        $at, $zero, $v1
    ctx->pc = 0x182ad0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x182ad4: 0x10200040  beqz        $at, . + 4 + (0x40 << 2)
    ctx->pc = 0x182AD4u;
    {
        const bool branch_taken_0x182ad4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x182AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182AD4u;
        // 0x182ad8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182ad4) {
            ctx->pc = 0x182BD8u;
            goto label_182bd8;
        }
    }
    ctx->pc = 0x182ADCu;
    // 0x182adc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x182adcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_182ae0:
    // 0x182ae0: 0x8e630070  lw          $v1, 0x70($s3)
    ctx->pc = 0x182ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
    // 0x182ae4: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x182ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x182ae8: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x182ae8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x182aec: 0x2463fffd  addiu       $v1, $v1, -0x3
    ctx->pc = 0x182aecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967293));
    // 0x182af0: 0x2c610010  sltiu       $at, $v1, 0x10
    ctx->pc = 0x182af0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x182af4: 0x10200024  beqz        $at, . + 4 + (0x24 << 2)
    ctx->pc = 0x182AF4u;
    {
        const bool branch_taken_0x182af4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x182AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182AF4u;
        // 0x182af8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182af4) {
            ctx->pc = 0x182B88u;
            goto label_182b88;
        }
    }
    ctx->pc = 0x182AFCu;
    // 0x182afc: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x182afcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x182b00: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x182b00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x182b04: 0x248455a0  addiu       $a0, $a0, 0x55A0
    ctx->pc = 0x182b04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21920));
    // 0x182b08: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x182b08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x182b0c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x182b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x182b10: 0x600008  jr          $v1
    ctx->pc = 0x182B10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x182B18u: goto label_182b18;
            case 0x182B20u: goto label_182b20;
            case 0x182B28u: goto label_182b28;
            case 0x182B30u: goto label_182b30;
            case 0x182B38u: goto label_182b38;
            case 0x182B40u: goto label_182b40;
            case 0x182B48u: goto label_182b48;
            case 0x182B50u: goto label_182b50;
            case 0x182B58u: goto label_182b58;
            case 0x182B60u: goto label_182b60;
            case 0x182B68u: goto label_182b68;
            case 0x182B70u: goto label_182b70;
            case 0x182B78u: goto label_182b78;
            case 0x182B80u: goto label_182b80;
            case 0x182B88u: goto label_182b88;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x182B10u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x182B18u;
label_182b18:
    // 0x182b18: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x182B18u;
    {
        const bool branch_taken_0x182b18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x182B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182B18u;
        // 0x182b1c: 0x24080c06  addiu       $t0, $zero, 0xC06 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3078));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182b18) {
            ctx->pc = 0x182B88u;
            goto label_182b88;
        }
    }
    ctx->pc = 0x182B20u;
label_182b20:
    // 0x182b20: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x182B20u;
    {
        const bool branch_taken_0x182b20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x182B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182B20u;
        // 0x182b24: 0x24080d06  addiu       $t0, $zero, 0xD06 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3334));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182b20) {
            ctx->pc = 0x182B88u;
            goto label_182b88;
        }
    }
    ctx->pc = 0x182B28u;
label_182b28:
    // 0x182b28: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x182B28u;
    {
        const bool branch_taken_0x182b28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x182B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182B28u;
        // 0x182b2c: 0x24080806  addiu       $t0, $zero, 0x806 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2054));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182b28) {
            ctx->pc = 0x182B88u;
            goto label_182b88;
        }
    }
    ctx->pc = 0x182B30u;
label_182b30:
    // 0x182b30: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x182B30u;
    {
        const bool branch_taken_0x182b30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x182B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182B30u;
        // 0x182b34: 0x24080906  addiu       $t0, $zero, 0x906 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2310));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182b30) {
            ctx->pc = 0x182B88u;
            goto label_182b88;
        }
    }
    ctx->pc = 0x182B38u;
label_182b38:
    // 0x182b38: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x182B38u;
    {
        const bool branch_taken_0x182b38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x182B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182B38u;
        // 0x182b3c: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182b38) {
            ctx->pc = 0x182B88u;
            goto label_182b88;
        }
    }
    ctx->pc = 0x182B40u;
label_182b40:
    // 0x182b40: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x182B40u;
    {
        const bool branch_taken_0x182b40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x182B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182B40u;
        // 0x182b44: 0x24080282  addiu       $t0, $zero, 0x282 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 642));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182b40) {
            ctx->pc = 0x182B88u;
            goto label_182b88;
        }
    }
    ctx->pc = 0x182B48u;
label_182b48:
    // 0x182b48: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x182B48u;
    {
        const bool branch_taken_0x182b48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x182B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182B48u;
        // 0x182b4c: 0x24080042  addiu       $t0, $zero, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182b48) {
            ctx->pc = 0x182B88u;
            goto label_182b88;
        }
    }
    ctx->pc = 0x182B50u;
label_182b50:
    // 0x182b50: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x182B50u;
    {
        const bool branch_taken_0x182b50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x182B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182B50u;
        // 0x182b54: 0x240802c2  addiu       $t0, $zero, 0x2C2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 706));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182b50) {
            ctx->pc = 0x182B88u;
            goto label_182b88;
        }
    }
    ctx->pc = 0x182B58u;
label_182b58:
    // 0x182b58: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x182B58u;
    {
        const bool branch_taken_0x182b58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x182B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182B58u;
        // 0x182b5c: 0x24080086  addiu       $t0, $zero, 0x86 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 134));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182b58) {
            ctx->pc = 0x182B88u;
            goto label_182b88;
        }
    }
    ctx->pc = 0x182B60u;
label_182b60:
    // 0x182b60: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x182B60u;
    {
        const bool branch_taken_0x182b60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x182B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182B60u;
        // 0x182b64: 0x24080186  addiu       $t0, $zero, 0x186 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 390));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182b60) {
            ctx->pc = 0x182B88u;
            goto label_182b88;
        }
    }
    ctx->pc = 0x182B68u;
label_182b68:
    // 0x182b68: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x182B68u;
    {
        const bool branch_taken_0x182b68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x182B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182B68u;
        // 0x182b6c: 0x24080886  addiu       $t0, $zero, 0x886 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2182));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182b68) {
            ctx->pc = 0x182B88u;
            goto label_182b88;
        }
    }
    ctx->pc = 0x182B70u;
label_182b70:
    // 0x182b70: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x182B70u;
    {
        const bool branch_taken_0x182b70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x182B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182B70u;
        // 0x182b74: 0x24080986  addiu       $t0, $zero, 0x986 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2438));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182b70) {
            ctx->pc = 0x182B88u;
            goto label_182b88;
        }
    }
    ctx->pc = 0x182B78u;
label_182b78:
    // 0x182b78: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x182B78u;
    {
        const bool branch_taken_0x182b78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x182B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182B78u;
        // 0x182b7c: 0x24080c86  addiu       $t0, $zero, 0xC86 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3206));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182b78) {
            ctx->pc = 0x182B88u;
            goto label_182b88;
        }
    }
    ctx->pc = 0x182B80u;
label_182b80:
    // 0x182b80: 0x24080d86  addiu       $t0, $zero, 0xD86
    ctx->pc = 0x182b80u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3462));
    // 0x182b84: 0x0  nop
    ctx->pc = 0x182b84u;
    // NOP
label_182b88:
    // 0x182b88: 0x1100000d  beqz        $t0, . + 4 + (0xD << 2)
    ctx->pc = 0x182B88u;
    {
        const bool branch_taken_0x182b88 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x182b88) {
            ctx->pc = 0x182BC0u;
            goto label_182bc0;
        }
    }
    ctx->pc = 0x182B90u;
    // 0x182b90: 0x928301f9  lbu         $v1, 0x1F9($s4)
    ctx->pc = 0x182b90u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 505)));
    // 0x182b94: 0x243082b  sltu        $at, $s2, $v1
    ctx->pc = 0x182b94u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x182b98: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x182B98u;
    {
        const bool branch_taken_0x182b98 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x182b98) {
            ctx->pc = 0x182BB8u;
            goto label_182bb8;
        }
    }
    ctx->pc = 0x182BA0u;
    // 0x182ba0: 0x8e8201e4  lw          $v0, 0x1E4($s4)
    ctx->pc = 0x182ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 484)));
    // 0x182ba4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x182ba4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182ba8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x182ba8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182bac: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x182bacu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182bb0: 0xc060b30  jal         func_182CC0
    ctx->pc = 0x182BB0u;
    SET_GPR_U32(ctx, 31, 0x182BB8u);
    ctx->pc = 0x182BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182BB0u;
    // 0x182bb4: 0x513021  addu        $a2, $v0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182CC0u, 0x182BB0u, 0x182BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182BB8u;
label_182bb8:
    // 0x182bb8: 0x26310090  addiu       $s1, $s1, 0x90
    ctx->pc = 0x182bb8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x182bbc: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x182bbcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_182bc0:
    // 0x182bc0: 0x9663006a  lhu         $v1, 0x6A($s3)
    ctx->pc = 0x182bc0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 106)));
    // 0x182bc4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x182bc4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x182bc8: 0x203182b  sltu        $v1, $s0, $v1
    ctx->pc = 0x182bc8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x182bcc: 0x1460ffc4  bnez        $v1, . + 4 + (-0x3C << 2)
    ctx->pc = 0x182BCCu;
    {
        const bool branch_taken_0x182bcc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x182bcc) {
            ctx->pc = 0x182AE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_182ae0;
        }
    }
    ctx->pc = 0x182BD4u;
    // 0x182bd4: 0x0  nop
    ctx->pc = 0x182bd4u;
    // NOP
label_182bd8:
    // 0x182bd8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x182bd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x182bdc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x182bdcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x182be0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x182be0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x182be4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x182be4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x182be8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x182be8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x182bec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x182becu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x182bf0: 0x3e00008  jr          $ra
    ctx->pc = 0x182BF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x182BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182BF0u;
        // 0x182bf4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x182BF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x182BF8u;
}
