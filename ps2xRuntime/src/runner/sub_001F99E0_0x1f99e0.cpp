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

// Function: sub_001F99E0
// Address: 0x1f99e0 - 0x1f9f48
void sub_001F99E0_0x1f99e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F99E0_0x1f99e0");
#endif

    ctx->pc = 0x1f99e0u;

    // 0x1f99e0: 0x248b0160  addiu       $t3, $a0, 0x160
    ctx->pc = 0x1f99e0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), 352));
    // 0x1f99e4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1f99e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f99e8: 0x8d62043c  lw          $v0, 0x43C($t3)
    ctx->pc = 0x1f99e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 1084)));
    // 0x1f99ec: 0xa0602d  daddu       $t4, $a1, $zero
    ctx->pc = 0x1f99ecu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f99f0: 0x8d640308  lw          $a0, 0x308($t3)
    ctx->pc = 0x1f99f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 776)));
    // 0x1f99f4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f99f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f99f8: 0xad630420  sw          $v1, 0x420($t3)
    ctx->pc = 0x1f99f8u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 1056), GPR_U32(ctx, 3));
    // 0x1f99fc: 0xad62043c  sw          $v0, 0x43C($t3)
    ctx->pc = 0x1f99fcu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 1084), GPR_U32(ctx, 2));
    // 0x1f9a00: 0xad6004a4  sw          $zero, 0x4A4($t3)
    ctx->pc = 0x1f9a00u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 1188), GPR_U32(ctx, 0));
    // 0x1f9a04: 0xad6004a8  sw          $zero, 0x4A8($t3)
    ctx->pc = 0x1f9a04u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 1192), GPR_U32(ctx, 0));
    // 0x1f9a08: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F9A08u;
    {
        const bool branch_taken_0x1f9a08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9A08u;
        // 0x1f9a0c: 0xad6004ac  sw          $zero, 0x4AC($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 1196), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9a08) {
            ctx->pc = 0x1F9A1Cu;
            goto label_1f9a1c;
        }
    }
    ctx->pc = 0x1F9A10u;
    // 0x1f9a10: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1f9a10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1f9a14: 0x54820005  bnel        $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F9A14u;
    {
        const bool branch_taken_0x1f9a14 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f9a14) {
            ctx->pc = 0x1F9A18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F9A14u;
            // 0x1f9a18: 0x8d620494  lw          $v0, 0x494($t3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 1172)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F9A2Cu;
            goto label_1f9a2c;
        }
    }
    ctx->pc = 0x1F9A1Cu;
label_1f9a1c:
    // 0x1f9a1c: 0x8d62030c  lw          $v0, 0x30C($t3)
    ctx->pc = 0x1f9a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 780)));
    // 0x1f9a20: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F9A20u;
    {
        const bool branch_taken_0x1f9a20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9A20u;
        // 0x1f9a24: 0x2402fffc  addiu       $v0, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9a20) {
            ctx->pc = 0x1F9A38u;
            goto label_1f9a38;
        }
    }
    ctx->pc = 0x1F9A28u;
    // 0x1f9a28: 0x8d620494  lw          $v0, 0x494($t3)
    ctx->pc = 0x1f9a28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 1172)));
label_1f9a2c:
    // 0x1f9a2c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f9a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f9a30: 0xad620494  sw          $v0, 0x494($t3)
    ctx->pc = 0x1f9a30u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 1172), GPR_U32(ctx, 2));
    // 0x1f9a34: 0x2402fffc  addiu       $v0, $zero, -0x4
    ctx->pc = 0x1f9a34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_1f9a38:
    // 0x1f9a38: 0x1824024  and         $t0, $t4, $v0
    ctx->pc = 0x1f9a38u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 12) & GPR_U64(ctx, 2));
    // 0x1f9a3c: 0x1881823  subu        $v1, $t4, $t0
    ctx->pc = 0x1f9a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 8)));
    // 0x1f9a40: 0x81090000  lb          $t1, 0x0($t0)
    ctx->pc = 0x1f9a40u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1f9a44: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1f9a44u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1f9a48: 0x350c0  sll         $t2, $v1, 3
    ctx->pc = 0x1f9a48u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1f9a4c: 0x91040000  lbu         $a0, 0x0($t0)
    ctx->pc = 0x1f9a4cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1f9a50: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1f9a50u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1f9a54: 0x91050000  lbu         $a1, 0x0($t0)
    ctx->pc = 0x1f9a54u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1f9a58: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1f9a58u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1f9a5c: 0x91060000  lbu         $a2, 0x0($t0)
    ctx->pc = 0x1f9a5cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1f9a60: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1f9a60u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1f9a64: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x1f9a64u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1f9a68: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1f9a68u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1f9a6c: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1f9a6cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1f9a70: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1f9a70u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1f9a74: 0x94a00  sll         $t1, $t1, 8
    ctx->pc = 0x1f9a74u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 8));
    // 0x1f9a78: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1f9a78u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1f9a7c: 0x1244825  or          $t1, $t1, $a0
    ctx->pc = 0x1f9a7cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 4));
    // 0x1f9a80: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1f9a80u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x1f9a84: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x1f9a84u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1f9a88: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1f9a88u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1f9a8c: 0x94a00  sll         $t1, $t1, 8
    ctx->pc = 0x1f9a8cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 8));
    // 0x1f9a90: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1f9a90u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1f9a94: 0x1254825  or          $t1, $t1, $a1
    ctx->pc = 0x1f9a94u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 5));
    // 0x1f9a98: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1f9a98u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1f9a9c: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x1f9a9cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x1f9aa0: 0x94a00  sll         $t1, $t1, 8
    ctx->pc = 0x1f9aa0u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 8));
    // 0x1f9aa4: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1f9aa4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1f9aa8: 0x1264825  or          $t1, $t1, $a2
    ctx->pc = 0x1f9aa8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 6));
    // 0x1f9aac: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1f9aacu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1f9ab0: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1f9ab0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x1f9ab4: 0x11400008  beqz        $t2, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F9AB4u;
    {
        const bool branch_taken_0x1f9ab4 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9AB4u;
        // 0x1f9ab8: 0x1494804  sllv        $t1, $t1, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 10) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9ab4) {
            ctx->pc = 0x1F9AD8u;
            goto label_1f9ad8;
        }
    }
    ctx->pc = 0x1F9ABCu;
    // 0x1f9abc: 0xa1023  negu        $v0, $t2
    ctx->pc = 0x1f9abcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 10)));
    // 0x1f9ac0: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x1f9ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x1f9ac4: 0x1221025  or          $v0, $t1, $v0
    ctx->pc = 0x1f9ac4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
    // 0x1f9ac8: 0x1474804  sllv        $t1, $a3, $t2
    ctx->pc = 0x1f9ac8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 10) & 0x1F));
    // 0x1f9acc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F9ACCu;
    {
        const bool branch_taken_0x1f9acc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9ACCu;
        // 0x1f9ad0: 0xad6200b8  sw          $v0, 0xB8($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 184), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9acc) {
            ctx->pc = 0x1F9AE0u;
            goto label_1f9ae0;
        }
    }
    ctx->pc = 0x1F9AD4u;
    // 0x1f9ad4: 0x0  nop
    ctx->pc = 0x1f9ad4u;
    // NOP
label_1f9ad8:
    // 0x1f9ad8: 0xad6900b8  sw          $t1, 0xB8($t3)
    ctx->pc = 0x1f9ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 184), GPR_U32(ctx, 9));
    // 0x1f9adc: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x1f9adcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1f9ae0:
    // 0x1f9ae0: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x1f9ae0u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1f9ae4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1f9ae4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1f9ae8: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1f9ae8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1f9aec: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1f9aecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1f9af0: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1f9af0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1f9af4: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x1f9af4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1f9af8: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1f9af8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x1f9afc: 0x2942001f  slti        $v0, $t2, 0x1F
    ctx->pc = 0x1f9afcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x1f9b00: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1f9b00u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1f9b04: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1f9b04u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1f9b08: 0x91040000  lbu         $a0, 0x0($t0)
    ctx->pc = 0x1f9b08u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1f9b0c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1f9b0cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1f9b10: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x1f9b10u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x1f9b14: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1f9b14u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1f9b18: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1F9B18u;
    {
        const bool branch_taken_0x1f9b18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F9B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9B18u;
        // 0x1f9b1c: 0xe43825  or          $a3, $a3, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9b18) {
            ctx->pc = 0x1F9B90u;
            goto label_1f9b90;
        }
    }
    ctx->pc = 0x1F9B20u;
    // 0x1f9b20: 0x254affe1  addiu       $t2, $t2, -0x1F
    ctx->pc = 0x1f9b20u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967265));
    // 0x1f9b24: 0x11400008  beqz        $t2, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F9B24u;
    {
        const bool branch_taken_0x1f9b24 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9B24u;
        // 0x1f9b28: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9b24) {
            ctx->pc = 0x1F9B48u;
            goto label_1f9b48;
        }
    }
    ctx->pc = 0x1F9B2Cu;
    // 0x1f9b2c: 0x4a1023  subu        $v0, $v0, $t2
    ctx->pc = 0x1f9b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x1f9b30: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x1f9b30u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x1f9b34: 0x1224825  or          $t1, $t1, $v0
    ctx->pc = 0x1f9b34u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
    // 0x1f9b38: 0x91fc2  srl         $v1, $t1, 31
    ctx->pc = 0x1f9b38u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
    // 0x1f9b3c: 0x1474804  sllv        $t1, $a3, $t2
    ctx->pc = 0x1f9b3cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 10) & 0x1F));
    // 0x1f9b40: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F9B40u;
    {
        const bool branch_taken_0x1f9b40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9B40u;
        // 0x1f9b44: 0xad6300bc  sw          $v1, 0xBC($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 188), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9b40) {
            ctx->pc = 0x1F9B54u;
            goto label_1f9b54;
        }
    }
    ctx->pc = 0x1F9B48u;
label_1f9b48:
    // 0x1f9b48: 0x917c2  srl         $v0, $t1, 31
    ctx->pc = 0x1f9b48u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
    // 0x1f9b4c: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x1f9b4cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9b50: 0xad6200bc  sw          $v0, 0xBC($t3)
    ctx->pc = 0x1f9b50u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 188), GPR_U32(ctx, 2));
label_1f9b54:
    // 0x1f9b54: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x1f9b54u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1f9b58: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1f9b58u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1f9b5c: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1f9b5cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1f9b60: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1f9b60u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1f9b64: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1f9b64u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1f9b68: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x1f9b68u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1f9b6c: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1f9b6cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x1f9b70: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1f9b70u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1f9b74: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1f9b74u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1f9b78: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1f9b78u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1f9b7c: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x1f9b7cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x1f9b80: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1f9b80u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1f9b84: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1f9b84u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1f9b88: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1F9B88u;
    {
        const bool branch_taken_0x1f9b88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9B88u;
        // 0x1f9b8c: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9b88) {
            ctx->pc = 0x1F9BA0u;
            goto label_1f9ba0;
        }
    }
    ctx->pc = 0x1F9B90u;
label_1f9b90:
    // 0x1f9b90: 0x917c2  srl         $v0, $t1, 31
    ctx->pc = 0x1f9b90u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
    // 0x1f9b94: 0x94840  sll         $t1, $t1, 1
    ctx->pc = 0x1f9b94u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x1f9b98: 0xad6200bc  sw          $v0, 0xBC($t3)
    ctx->pc = 0x1f9b98u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 188), GPR_U32(ctx, 2));
    // 0x1f9b9c: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1f9b9cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_1f9ba0:
    // 0x1f9ba0: 0x2942001b  slti        $v0, $t2, 0x1B
    ctx->pc = 0x1f9ba0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)27) ? 1 : 0);
    // 0x1f9ba4: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1F9BA4u;
    {
        const bool branch_taken_0x1f9ba4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F9BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9BA4u;
        // 0x1f9ba8: 0x916c2  srl         $v0, $t1, 27 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 27));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9ba4) {
            ctx->pc = 0x1F9C20u;
            goto label_1f9c20;
        }
    }
    ctx->pc = 0x1F9BACu;
    // 0x1f9bac: 0x254affe5  addiu       $t2, $t2, -0x1B
    ctx->pc = 0x1f9bacu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967269));
    // 0x1f9bb0: 0x11400009  beqz        $t2, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F9BB0u;
    {
        const bool branch_taken_0x1f9bb0 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9BB0u;
        // 0x1f9bb4: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9bb0) {
            ctx->pc = 0x1F9BD8u;
            goto label_1f9bd8;
        }
    }
    ctx->pc = 0x1F9BB8u;
    // 0x1f9bb8: 0x4a1023  subu        $v0, $v0, $t2
    ctx->pc = 0x1f9bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x1f9bbc: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x1f9bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x1f9bc0: 0x1224825  or          $t1, $t1, $v0
    ctx->pc = 0x1f9bc0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
    // 0x1f9bc4: 0x91ec2  srl         $v1, $t1, 27
    ctx->pc = 0x1f9bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 9), 27));
    // 0x1f9bc8: 0x1474804  sllv        $t1, $a3, $t2
    ctx->pc = 0x1f9bc8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 10) & 0x1F));
    // 0x1f9bcc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1F9BCCu;
    {
        const bool branch_taken_0x1f9bcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9BCCu;
        // 0x1f9bd0: 0xad6300c0  sw          $v1, 0xC0($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 192), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9bcc) {
            ctx->pc = 0x1F9BE4u;
            goto label_1f9be4;
        }
    }
    ctx->pc = 0x1F9BD4u;
    // 0x1f9bd4: 0x0  nop
    ctx->pc = 0x1f9bd4u;
    // NOP
label_1f9bd8:
    // 0x1f9bd8: 0x916c2  srl         $v0, $t1, 27
    ctx->pc = 0x1f9bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 27));
    // 0x1f9bdc: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x1f9bdcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9be0: 0xad6200c0  sw          $v0, 0xC0($t3)
    ctx->pc = 0x1f9be0u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 192), GPR_U32(ctx, 2));
label_1f9be4:
    // 0x1f9be4: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x1f9be4u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1f9be8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1f9be8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1f9bec: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1f9becu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1f9bf0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1f9bf0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1f9bf4: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1f9bf4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1f9bf8: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x1f9bf8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1f9bfc: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1f9bfcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x1f9c00: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1f9c00u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1f9c04: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1f9c04u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1f9c08: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1f9c08u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1f9c0c: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x1f9c0cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x1f9c10: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1f9c10u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1f9c14: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1f9c14u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1f9c18: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F9C18u;
    {
        const bool branch_taken_0x1f9c18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9C18u;
        // 0x1f9c1c: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9c18) {
            ctx->pc = 0x1F9C2Cu;
            goto label_1f9c2c;
        }
    }
    ctx->pc = 0x1F9C20u;
label_1f9c20:
    // 0x1f9c20: 0x94940  sll         $t1, $t1, 5
    ctx->pc = 0x1f9c20u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 5));
    // 0x1f9c24: 0xad6200c0  sw          $v0, 0xC0($t3)
    ctx->pc = 0x1f9c24u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 192), GPR_U32(ctx, 2));
    // 0x1f9c28: 0x254a0005  addiu       $t2, $t2, 0x5
    ctx->pc = 0x1f9c28u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 5));
label_1f9c2c:
    // 0x1f9c2c: 0x2942001a  slti        $v0, $t2, 0x1A
    ctx->pc = 0x1f9c2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)26) ? 1 : 0);
    // 0x1f9c30: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1F9C30u;
    {
        const bool branch_taken_0x1f9c30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F9C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9C30u;
        // 0x1f9c34: 0x91682  srl         $v0, $t1, 26 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 26));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9c30) {
            ctx->pc = 0x1F9CA8u;
            goto label_1f9ca8;
        }
    }
    ctx->pc = 0x1F9C38u;
    // 0x1f9c38: 0x254affe6  addiu       $t2, $t2, -0x1A
    ctx->pc = 0x1f9c38u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967270));
    // 0x1f9c3c: 0x11400008  beqz        $t2, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F9C3Cu;
    {
        const bool branch_taken_0x1f9c3c = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9C3Cu;
        // 0x1f9c40: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9c3c) {
            ctx->pc = 0x1F9C60u;
            goto label_1f9c60;
        }
    }
    ctx->pc = 0x1F9C44u;
    // 0x1f9c44: 0x4a1023  subu        $v0, $v0, $t2
    ctx->pc = 0x1f9c44u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x1f9c48: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x1f9c48u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x1f9c4c: 0x1224825  or          $t1, $t1, $v0
    ctx->pc = 0x1f9c4cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
    // 0x1f9c50: 0x91e82  srl         $v1, $t1, 26
    ctx->pc = 0x1f9c50u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 9), 26));
    // 0x1f9c54: 0x1474804  sllv        $t1, $a3, $t2
    ctx->pc = 0x1f9c54u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 10) & 0x1F));
    // 0x1f9c58: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F9C58u;
    {
        const bool branch_taken_0x1f9c58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9C58u;
        // 0x1f9c5c: 0xad6300c4  sw          $v1, 0xC4($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 196), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9c58) {
            ctx->pc = 0x1F9C6Cu;
            goto label_1f9c6c;
        }
    }
    ctx->pc = 0x1F9C60u;
label_1f9c60:
    // 0x1f9c60: 0x91682  srl         $v0, $t1, 26
    ctx->pc = 0x1f9c60u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 26));
    // 0x1f9c64: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x1f9c64u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9c68: 0xad6200c4  sw          $v0, 0xC4($t3)
    ctx->pc = 0x1f9c68u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 196), GPR_U32(ctx, 2));
label_1f9c6c:
    // 0x1f9c6c: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x1f9c6cu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1f9c70: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1f9c70u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1f9c74: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1f9c74u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1f9c78: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1f9c78u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1f9c7c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1f9c7cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1f9c80: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x1f9c80u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1f9c84: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1f9c84u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x1f9c88: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1f9c88u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1f9c8c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1f9c8cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1f9c90: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1f9c90u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1f9c94: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x1f9c94u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x1f9c98: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1f9c98u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1f9c9c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1f9c9cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1f9ca0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F9CA0u;
    {
        const bool branch_taken_0x1f9ca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9CA0u;
        // 0x1f9ca4: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9ca0) {
            ctx->pc = 0x1F9CB4u;
            goto label_1f9cb4;
        }
    }
    ctx->pc = 0x1F9CA8u;
label_1f9ca8:
    // 0x1f9ca8: 0x94980  sll         $t1, $t1, 6
    ctx->pc = 0x1f9ca8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 6));
    // 0x1f9cac: 0xad6200c4  sw          $v0, 0xC4($t3)
    ctx->pc = 0x1f9cacu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 196), GPR_U32(ctx, 2));
    // 0x1f9cb0: 0x254a0006  addiu       $t2, $t2, 0x6
    ctx->pc = 0x1f9cb0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 6));
label_1f9cb4:
    // 0x1f9cb4: 0x2942001f  slti        $v0, $t2, 0x1F
    ctx->pc = 0x1f9cb4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x1f9cb8: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1F9CB8u;
    {
        const bool branch_taken_0x1f9cb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F9CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9CB8u;
        // 0x1f9cbc: 0x917c2  srl         $v0, $t1, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9cb8) {
            ctx->pc = 0x1F9D30u;
            goto label_1f9d30;
        }
    }
    ctx->pc = 0x1F9CC0u;
    // 0x1f9cc0: 0x254affe1  addiu       $t2, $t2, -0x1F
    ctx->pc = 0x1f9cc0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967265));
    // 0x1f9cc4: 0x11400008  beqz        $t2, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F9CC4u;
    {
        const bool branch_taken_0x1f9cc4 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9CC4u;
        // 0x1f9cc8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9cc4) {
            ctx->pc = 0x1F9CE8u;
            goto label_1f9ce8;
        }
    }
    ctx->pc = 0x1F9CCCu;
    // 0x1f9ccc: 0x4a1023  subu        $v0, $v0, $t2
    ctx->pc = 0x1f9cccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x1f9cd0: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x1f9cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x1f9cd4: 0x1224825  or          $t1, $t1, $v0
    ctx->pc = 0x1f9cd4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
    // 0x1f9cd8: 0x91fc2  srl         $v1, $t1, 31
    ctx->pc = 0x1f9cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
    // 0x1f9cdc: 0x1474804  sllv        $t1, $a3, $t2
    ctx->pc = 0x1f9cdcu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 10) & 0x1F));
    // 0x1f9ce0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F9CE0u;
    {
        const bool branch_taken_0x1f9ce0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9CE0u;
        // 0x1f9ce4: 0xad630018  sw          $v1, 0x18($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9ce0) {
            ctx->pc = 0x1F9CF4u;
            goto label_1f9cf4;
        }
    }
    ctx->pc = 0x1F9CE8u;
label_1f9ce8:
    // 0x1f9ce8: 0x917c2  srl         $v0, $t1, 31
    ctx->pc = 0x1f9ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
    // 0x1f9cec: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x1f9cecu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9cf0: 0xad620018  sw          $v0, 0x18($t3)
    ctx->pc = 0x1f9cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 24), GPR_U32(ctx, 2));
label_1f9cf4:
    // 0x1f9cf4: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x1f9cf4u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1f9cf8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1f9cf8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1f9cfc: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1f9cfcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1f9d00: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1f9d00u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1f9d04: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1f9d04u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1f9d08: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x1f9d08u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1f9d0c: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1f9d0cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x1f9d10: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1f9d10u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1f9d14: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1f9d14u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1f9d18: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1f9d18u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1f9d1c: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x1f9d1cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x1f9d20: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1f9d20u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1f9d24: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1f9d24u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1f9d28: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F9D28u;
    {
        const bool branch_taken_0x1f9d28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9D28u;
        // 0x1f9d2c: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9d28) {
            ctx->pc = 0x1F9D3Cu;
            goto label_1f9d3c;
        }
    }
    ctx->pc = 0x1F9D30u;
label_1f9d30:
    // 0x1f9d30: 0x94840  sll         $t1, $t1, 1
    ctx->pc = 0x1f9d30u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x1f9d34: 0xad620018  sw          $v0, 0x18($t3)
    ctx->pc = 0x1f9d34u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 24), GPR_U32(ctx, 2));
    // 0x1f9d38: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1f9d38u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_1f9d3c:
    // 0x1f9d3c: 0x2942001a  slti        $v0, $t2, 0x1A
    ctx->pc = 0x1f9d3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)26) ? 1 : 0);
    // 0x1f9d40: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1F9D40u;
    {
        const bool branch_taken_0x1f9d40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F9D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9D40u;
        // 0x1f9d44: 0x91682  srl         $v0, $t1, 26 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 26));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9d40) {
            ctx->pc = 0x1F9DB8u;
            goto label_1f9db8;
        }
    }
    ctx->pc = 0x1F9D48u;
    // 0x1f9d48: 0x254affe6  addiu       $t2, $t2, -0x1A
    ctx->pc = 0x1f9d48u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967270));
    // 0x1f9d4c: 0x11400008  beqz        $t2, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F9D4Cu;
    {
        const bool branch_taken_0x1f9d4c = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9D4Cu;
        // 0x1f9d50: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9d4c) {
            ctx->pc = 0x1F9D70u;
            goto label_1f9d70;
        }
    }
    ctx->pc = 0x1F9D54u;
    // 0x1f9d54: 0x4a1023  subu        $v0, $v0, $t2
    ctx->pc = 0x1f9d54u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x1f9d58: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x1f9d58u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x1f9d5c: 0x1224825  or          $t1, $t1, $v0
    ctx->pc = 0x1f9d5cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
    // 0x1f9d60: 0x91e82  srl         $v1, $t1, 26
    ctx->pc = 0x1f9d60u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 9), 26));
    // 0x1f9d64: 0x1474804  sllv        $t1, $a3, $t2
    ctx->pc = 0x1f9d64u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 10) & 0x1F));
    // 0x1f9d68: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F9D68u;
    {
        const bool branch_taken_0x1f9d68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9D68u;
        // 0x1f9d6c: 0xad6300c8  sw          $v1, 0xC8($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 200), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9d68) {
            ctx->pc = 0x1F9D7Cu;
            goto label_1f9d7c;
        }
    }
    ctx->pc = 0x1F9D70u;
label_1f9d70:
    // 0x1f9d70: 0x91682  srl         $v0, $t1, 26
    ctx->pc = 0x1f9d70u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 26));
    // 0x1f9d74: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x1f9d74u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9d78: 0xad6200c8  sw          $v0, 0xC8($t3)
    ctx->pc = 0x1f9d78u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 200), GPR_U32(ctx, 2));
label_1f9d7c:
    // 0x1f9d7c: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x1f9d7cu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1f9d80: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1f9d80u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1f9d84: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1f9d84u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1f9d88: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1f9d88u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1f9d8c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1f9d8cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1f9d90: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x1f9d90u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1f9d94: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1f9d94u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x1f9d98: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1f9d98u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1f9d9c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1f9d9cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1f9da0: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1f9da0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1f9da4: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x1f9da4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x1f9da8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1f9da8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1f9dac: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1f9dacu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1f9db0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F9DB0u;
    {
        const bool branch_taken_0x1f9db0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9DB0u;
        // 0x1f9db4: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9db0) {
            ctx->pc = 0x1F9DC4u;
            goto label_1f9dc4;
        }
    }
    ctx->pc = 0x1F9DB8u;
label_1f9db8:
    // 0x1f9db8: 0x94980  sll         $t1, $t1, 6
    ctx->pc = 0x1f9db8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 6));
    // 0x1f9dbc: 0xad6200c8  sw          $v0, 0xC8($t3)
    ctx->pc = 0x1f9dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 200), GPR_U32(ctx, 2));
    // 0x1f9dc0: 0x254a0006  addiu       $t2, $t2, 0x6
    ctx->pc = 0x1f9dc0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 6));
label_1f9dc4:
    // 0x1f9dc4: 0x2942001a  slti        $v0, $t2, 0x1A
    ctx->pc = 0x1f9dc4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)26) ? 1 : 0);
    // 0x1f9dc8: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1F9DC8u;
    {
        const bool branch_taken_0x1f9dc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F9DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9DC8u;
        // 0x1f9dcc: 0x91682  srl         $v0, $t1, 26 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 26));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9dc8) {
            ctx->pc = 0x1F9E40u;
            goto label_1f9e40;
        }
    }
    ctx->pc = 0x1F9DD0u;
    // 0x1f9dd0: 0x254affe6  addiu       $t2, $t2, -0x1A
    ctx->pc = 0x1f9dd0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967270));
    // 0x1f9dd4: 0x11400008  beqz        $t2, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F9DD4u;
    {
        const bool branch_taken_0x1f9dd4 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9DD4u;
        // 0x1f9dd8: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9dd4) {
            ctx->pc = 0x1F9DF8u;
            goto label_1f9df8;
        }
    }
    ctx->pc = 0x1F9DDCu;
    // 0x1f9ddc: 0x4a1023  subu        $v0, $v0, $t2
    ctx->pc = 0x1f9ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x1f9de0: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x1f9de0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x1f9de4: 0x1224825  or          $t1, $t1, $v0
    ctx->pc = 0x1f9de4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
    // 0x1f9de8: 0x91e82  srl         $v1, $t1, 26
    ctx->pc = 0x1f9de8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 9), 26));
    // 0x1f9dec: 0x1474804  sllv        $t1, $a3, $t2
    ctx->pc = 0x1f9decu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 10) & 0x1F));
    // 0x1f9df0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F9DF0u;
    {
        const bool branch_taken_0x1f9df0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9DF0u;
        // 0x1f9df4: 0xad6300cc  sw          $v1, 0xCC($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 204), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9df0) {
            ctx->pc = 0x1F9E04u;
            goto label_1f9e04;
        }
    }
    ctx->pc = 0x1F9DF8u;
label_1f9df8:
    // 0x1f9df8: 0x91682  srl         $v0, $t1, 26
    ctx->pc = 0x1f9df8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 26));
    // 0x1f9dfc: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x1f9dfcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9e00: 0xad6200cc  sw          $v0, 0xCC($t3)
    ctx->pc = 0x1f9e00u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 204), GPR_U32(ctx, 2));
label_1f9e04:
    // 0x1f9e04: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x1f9e04u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1f9e08: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1f9e08u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1f9e0c: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1f9e0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1f9e10: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1f9e10u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1f9e14: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1f9e14u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1f9e18: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x1f9e18u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1f9e1c: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1f9e1cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x1f9e20: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1f9e20u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1f9e24: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1f9e24u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1f9e28: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1f9e28u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1f9e2c: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x1f9e2cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x1f9e30: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1f9e30u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1f9e34: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1f9e34u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1f9e38: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F9E38u;
    {
        const bool branch_taken_0x1f9e38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9E38u;
        // 0x1f9e3c: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9e38) {
            ctx->pc = 0x1F9E4Cu;
            goto label_1f9e4c;
        }
    }
    ctx->pc = 0x1F9E40u;
label_1f9e40:
    // 0x1f9e40: 0x94980  sll         $t1, $t1, 6
    ctx->pc = 0x1f9e40u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 6));
    // 0x1f9e44: 0xad6200cc  sw          $v0, 0xCC($t3)
    ctx->pc = 0x1f9e44u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 204), GPR_U32(ctx, 2));
    // 0x1f9e48: 0x254a0006  addiu       $t2, $t2, 0x6
    ctx->pc = 0x1f9e48u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 6));
label_1f9e4c:
    // 0x1f9e4c: 0x2942001f  slti        $v0, $t2, 0x1F
    ctx->pc = 0x1f9e4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x1f9e50: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1F9E50u;
    {
        const bool branch_taken_0x1f9e50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F9E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9E50u;
        // 0x1f9e54: 0x917c2  srl         $v0, $t1, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9e50) {
            ctx->pc = 0x1F9EC8u;
            goto label_1f9ec8;
        }
    }
    ctx->pc = 0x1F9E58u;
    // 0x1f9e58: 0x254affe1  addiu       $t2, $t2, -0x1F
    ctx->pc = 0x1f9e58u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967265));
    // 0x1f9e5c: 0x11400008  beqz        $t2, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F9E5Cu;
    {
        const bool branch_taken_0x1f9e5c = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9E5Cu;
        // 0x1f9e60: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9e5c) {
            ctx->pc = 0x1F9E80u;
            goto label_1f9e80;
        }
    }
    ctx->pc = 0x1F9E64u;
    // 0x1f9e64: 0x4a1023  subu        $v0, $v0, $t2
    ctx->pc = 0x1f9e64u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x1f9e68: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x1f9e68u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x1f9e6c: 0x1224825  or          $t1, $t1, $v0
    ctx->pc = 0x1f9e6cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
    // 0x1f9e70: 0x91fc2  srl         $v1, $t1, 31
    ctx->pc = 0x1f9e70u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
    // 0x1f9e74: 0x1474804  sllv        $t1, $a3, $t2
    ctx->pc = 0x1f9e74u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 10) & 0x1F));
    // 0x1f9e78: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F9E78u;
    {
        const bool branch_taken_0x1f9e78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9E78u;
        // 0x1f9e7c: 0xad6300d0  sw          $v1, 0xD0($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 208), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9e78) {
            ctx->pc = 0x1F9E8Cu;
            goto label_1f9e8c;
        }
    }
    ctx->pc = 0x1F9E80u;
label_1f9e80:
    // 0x1f9e80: 0x917c2  srl         $v0, $t1, 31
    ctx->pc = 0x1f9e80u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
    // 0x1f9e84: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x1f9e84u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9e88: 0xad6200d0  sw          $v0, 0xD0($t3)
    ctx->pc = 0x1f9e88u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 208), GPR_U32(ctx, 2));
label_1f9e8c:
    // 0x1f9e8c: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x1f9e8cu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1f9e90: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1f9e90u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1f9e94: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1f9e94u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1f9e98: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1f9e98u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1f9e9c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1f9e9cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1f9ea0: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x1f9ea0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1f9ea4: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1f9ea4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x1f9ea8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1f9ea8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1f9eac: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1f9eacu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1f9eb0: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1f9eb0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1f9eb4: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x1f9eb4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x1f9eb8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1f9eb8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1f9ebc: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1f9ebcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1f9ec0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F9EC0u;
    {
        const bool branch_taken_0x1f9ec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9EC0u;
        // 0x1f9ec4: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9ec0) {
            ctx->pc = 0x1F9ED4u;
            goto label_1f9ed4;
        }
    }
    ctx->pc = 0x1F9EC8u;
label_1f9ec8:
    // 0x1f9ec8: 0x94840  sll         $t1, $t1, 1
    ctx->pc = 0x1f9ec8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x1f9ecc: 0xad6200d0  sw          $v0, 0xD0($t3)
    ctx->pc = 0x1f9eccu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 208), GPR_U32(ctx, 2));
    // 0x1f9ed0: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1f9ed0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_1f9ed4:
    // 0x1f9ed4: 0x2942001f  slti        $v0, $t2, 0x1F
    ctx->pc = 0x1f9ed4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x1f9ed8: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x1F9ED8u;
    {
        const bool branch_taken_0x1f9ed8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f9ed8) {
            ctx->pc = 0x1F9EDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F9ED8u;
            // 0x1f9edc: 0x917c2  srl         $v0, $t1, 31 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F9F18u;
            goto label_1f9f18;
        }
    }
    ctx->pc = 0x1F9EE0u;
    // 0x1f9ee0: 0x254affe1  addiu       $t2, $t2, -0x1F
    ctx->pc = 0x1f9ee0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967265));
    // 0x1f9ee4: 0x51400008  beql        $t2, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F9EE4u;
    {
        const bool branch_taken_0x1f9ee4 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f9ee4) {
            ctx->pc = 0x1F9EE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F9EE4u;
            // 0x1f9ee8: 0x917c2  srl         $v0, $t1, 31 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F9F08u;
            goto label_1f9f08;
        }
    }
    ctx->pc = 0x1F9EECu;
    // 0x1f9eec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f9eecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f9ef0: 0x4a1023  subu        $v0, $v0, $t2
    ctx->pc = 0x1f9ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x1f9ef4: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x1f9ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x1f9ef8: 0x1224825  or          $t1, $t1, $v0
    ctx->pc = 0x1f9ef8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
    // 0x1f9efc: 0x91fc2  srl         $v1, $t1, 31
    ctx->pc = 0x1f9efcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
    // 0x1f9f00: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1F9F00u;
    {
        const bool branch_taken_0x1f9f00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9F00u;
        // 0x1f9f04: 0xad6300d4  sw          $v1, 0xD4($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 212), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9f00) {
            ctx->pc = 0x1F9F0Cu;
            goto label_1f9f0c;
        }
    }
    ctx->pc = 0x1F9F08u;
label_1f9f08:
    // 0x1f9f08: 0xad6200d4  sw          $v0, 0xD4($t3)
    ctx->pc = 0x1f9f08u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 212), GPR_U32(ctx, 2));
label_1f9f0c:
    // 0x1f9f0c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F9F0Cu;
    {
        const bool branch_taken_0x1f9f0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9F0Cu;
        // 0x1f9f10: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9f0c) {
            ctx->pc = 0x1F9F20u;
            goto label_1f9f20;
        }
    }
    ctx->pc = 0x1F9F14u;
    // 0x1f9f14: 0x0  nop
    ctx->pc = 0x1f9f14u;
    // NOP
label_1f9f18:
    // 0x1f9f18: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1f9f18u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x1f9f1c: 0xad6200d4  sw          $v0, 0xD4($t3)
    ctx->pc = 0x1f9f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 212), GPR_U32(ctx, 2));
label_1f9f20:
    // 0x1f9f20: 0x10c1823  subu        $v1, $t0, $t4
    ctx->pc = 0x1f9f20u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 12)));
    // 0x1f9f24: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1f9f24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1f9f28: 0x1431821  addu        $v1, $t2, $v1
    ctx->pc = 0x1f9f28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x1f9f2c: 0x2462ffc7  addiu       $v0, $v1, -0x39
    ctx->pc = 0x1f9f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967239));
    // 0x1f9f30: 0x2463ffce  addiu       $v1, $v1, -0x32
    ctx->pc = 0x1f9f30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967246));
    // 0x1f9f34: 0x28440000  slti        $a0, $v0, 0x0
    ctx->pc = 0x1f9f34u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1f9f38: 0x64100b  movn        $v0, $v1, $a0
    ctx->pc = 0x1f9f38u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x1f9f3c: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x1f9f3cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x1f9f40: 0x3e00008  jr          $ra
    ctx->pc = 0x1F9F40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F9F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9F40u;
        // 0x1f9f44: 0x1821021  addu        $v0, $t4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F9F40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F9F48u;
}
