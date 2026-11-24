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

// Function: sub_001F9F48
// Address: 0x1f9f48 - 0x1fa620
void sub_001F9F48_0x1f9f48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F9F48_0x1f9f48");
#endif

    switch (ctx->pc) {
        case 0x1fa4b8u: goto label_1fa4b8;
        default: break;
    }

    ctx->pc = 0x1f9f48u;

    // 0x1f9f48: 0x248b0160  addiu       $t3, $a0, 0x160
    ctx->pc = 0x1f9f48u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), 352));
    // 0x1f9f4c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1f9f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1f9f50: 0x8d620440  lw          $v0, 0x440($t3)
    ctx->pc = 0x1f9f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 1088)));
    // 0x1f9f54: 0xa0602d  daddu       $t4, $a1, $zero
    ctx->pc = 0x1f9f54u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9f58: 0x8d640308  lw          $a0, 0x308($t3)
    ctx->pc = 0x1f9f58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 776)));
    // 0x1f9f5c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f9f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f9f60: 0xad630420  sw          $v1, 0x420($t3)
    ctx->pc = 0x1f9f60u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 1056), GPR_U32(ctx, 3));
    // 0x1f9f64: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F9F64u;
    {
        const bool branch_taken_0x1f9f64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9F64u;
        // 0x1f9f68: 0xad620440  sw          $v0, 0x440($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 1088), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9f64) {
            ctx->pc = 0x1F9F78u;
            goto label_1f9f78;
        }
    }
    ctx->pc = 0x1F9F6Cu;
    // 0x1f9f6c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1f9f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f9f70: 0x54820005  bnel        $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F9F70u;
    {
        const bool branch_taken_0x1f9f70 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f9f70) {
            ctx->pc = 0x1F9F74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F9F70u;
            // 0x1f9f74: 0x8d620494  lw          $v0, 0x494($t3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 1172)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F9F88u;
            goto label_1f9f88;
        }
    }
    ctx->pc = 0x1F9F78u;
label_1f9f78:
    // 0x1f9f78: 0x8d62030c  lw          $v0, 0x30C($t3)
    ctx->pc = 0x1f9f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 780)));
    // 0x1f9f7c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F9F7Cu;
    {
        const bool branch_taken_0x1f9f7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9F7Cu;
        // 0x1f9f80: 0x2402fffc  addiu       $v0, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9f7c) {
            ctx->pc = 0x1F9F94u;
            goto label_1f9f94;
        }
    }
    ctx->pc = 0x1F9F84u;
    // 0x1f9f84: 0x8d620494  lw          $v0, 0x494($t3)
    ctx->pc = 0x1f9f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 1172)));
label_1f9f88:
    // 0x1f9f88: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f9f88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f9f8c: 0xad620494  sw          $v0, 0x494($t3)
    ctx->pc = 0x1f9f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 1172), GPR_U32(ctx, 2));
    // 0x1f9f90: 0x2402fffc  addiu       $v0, $zero, -0x4
    ctx->pc = 0x1f9f90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_1f9f94:
    // 0x1f9f94: 0x1824024  and         $t0, $t4, $v0
    ctx->pc = 0x1f9f94u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 12) & GPR_U64(ctx, 2));
    // 0x1f9f98: 0x1881823  subu        $v1, $t4, $t0
    ctx->pc = 0x1f9f98u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 8)));
    // 0x1f9f9c: 0x81090000  lb          $t1, 0x0($t0)
    ctx->pc = 0x1f9f9cu;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1f9fa0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1f9fa0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1f9fa4: 0x350c0  sll         $t2, $v1, 3
    ctx->pc = 0x1f9fa4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1f9fa8: 0x91040000  lbu         $a0, 0x0($t0)
    ctx->pc = 0x1f9fa8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1f9fac: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1f9facu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1f9fb0: 0x91050000  lbu         $a1, 0x0($t0)
    ctx->pc = 0x1f9fb0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1f9fb4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1f9fb4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1f9fb8: 0x91060000  lbu         $a2, 0x0($t0)
    ctx->pc = 0x1f9fb8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1f9fbc: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1f9fbcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1f9fc0: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x1f9fc0u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1f9fc4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1f9fc4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1f9fc8: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1f9fc8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1f9fcc: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1f9fccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1f9fd0: 0x94a00  sll         $t1, $t1, 8
    ctx->pc = 0x1f9fd0u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 8));
    // 0x1f9fd4: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1f9fd4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1f9fd8: 0x1244825  or          $t1, $t1, $a0
    ctx->pc = 0x1f9fd8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 4));
    // 0x1f9fdc: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1f9fdcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x1f9fe0: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x1f9fe0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1f9fe4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1f9fe4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1f9fe8: 0x94a00  sll         $t1, $t1, 8
    ctx->pc = 0x1f9fe8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 8));
    // 0x1f9fec: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1f9fecu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1f9ff0: 0x1254825  or          $t1, $t1, $a1
    ctx->pc = 0x1f9ff0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 5));
    // 0x1f9ff4: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1f9ff4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1f9ff8: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x1f9ff8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x1f9ffc: 0x94a00  sll         $t1, $t1, 8
    ctx->pc = 0x1f9ffcu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 8));
    // 0x1fa000: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1fa000u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1fa004: 0x1264825  or          $t1, $t1, $a2
    ctx->pc = 0x1fa004u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 6));
    // 0x1fa008: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fa008u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1fa00c: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1fa00cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x1fa010: 0x11400007  beqz        $t2, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FA010u;
    {
        const bool branch_taken_0x1fa010 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA010u;
        // 0x1fa014: 0x1494804  sllv        $t1, $t1, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 10) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa010) {
            ctx->pc = 0x1FA030u;
            goto label_1fa030;
        }
    }
    ctx->pc = 0x1FA018u;
    // 0x1fa018: 0xa1023  negu        $v0, $t2
    ctx->pc = 0x1fa018u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 10)));
    // 0x1fa01c: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x1fa01cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x1fa020: 0x1221025  or          $v0, $t1, $v0
    ctx->pc = 0x1fa020u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
    // 0x1fa024: 0x1474804  sllv        $t1, $a3, $t2
    ctx->pc = 0x1fa024u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 10) & 0x1F));
    // 0x1fa028: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1FA028u;
    {
        const bool branch_taken_0x1fa028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA028u;
        // 0x1fa02c: 0xad6200d8  sw          $v0, 0xD8($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 216), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa028) {
            ctx->pc = 0x1FA038u;
            goto label_1fa038;
        }
    }
    ctx->pc = 0x1FA030u;
label_1fa030:
    // 0x1fa030: 0xad6900d8  sw          $t1, 0xD8($t3)
    ctx->pc = 0x1fa030u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 216), GPR_U32(ctx, 9));
    // 0x1fa034: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x1fa034u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1fa038:
    // 0x1fa038: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x1fa038u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1fa03c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fa03cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1fa040: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1fa040u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1fa044: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fa044u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1fa048: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1fa048u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1fa04c: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x1fa04cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1fa050: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1fa050u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x1fa054: 0x29420016  slti        $v0, $t2, 0x16
    ctx->pc = 0x1fa054u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)22) ? 1 : 0);
    // 0x1fa058: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fa058u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1fa05c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1fa05cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1fa060: 0x91040000  lbu         $a0, 0x0($t0)
    ctx->pc = 0x1fa060u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1fa064: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fa064u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1fa068: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x1fa068u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x1fa06c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1fa06cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1fa070: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1FA070u;
    {
        const bool branch_taken_0x1fa070 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FA074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA070u;
        // 0x1fa074: 0xe43825  or          $a3, $a3, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa070) {
            ctx->pc = 0x1FA0E8u;
            goto label_1fa0e8;
        }
    }
    ctx->pc = 0x1FA078u;
    // 0x1fa078: 0x254affea  addiu       $t2, $t2, -0x16
    ctx->pc = 0x1fa078u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967274));
    // 0x1fa07c: 0x11400008  beqz        $t2, . + 4 + (0x8 << 2)
    ctx->pc = 0x1FA07Cu;
    {
        const bool branch_taken_0x1fa07c = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA07Cu;
        // 0x1fa080: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa07c) {
            ctx->pc = 0x1FA0A0u;
            goto label_1fa0a0;
        }
    }
    ctx->pc = 0x1FA084u;
    // 0x1fa084: 0x4a1023  subu        $v0, $v0, $t2
    ctx->pc = 0x1fa084u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x1fa088: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x1fa088u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x1fa08c: 0x1224825  or          $t1, $t1, $v0
    ctx->pc = 0x1fa08cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
    // 0x1fa090: 0x91d82  srl         $v1, $t1, 22
    ctx->pc = 0x1fa090u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 9), 22));
    // 0x1fa094: 0x1474804  sllv        $t1, $a3, $t2
    ctx->pc = 0x1fa094u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 10) & 0x1F));
    // 0x1fa098: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1FA098u;
    {
        const bool branch_taken_0x1fa098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA098u;
        // 0x1fa09c: 0xad6300dc  sw          $v1, 0xDC($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 220), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa098) {
            ctx->pc = 0x1FA0ACu;
            goto label_1fa0ac;
        }
    }
    ctx->pc = 0x1FA0A0u;
label_1fa0a0:
    // 0x1fa0a0: 0x91582  srl         $v0, $t1, 22
    ctx->pc = 0x1fa0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 22));
    // 0x1fa0a4: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x1fa0a4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa0a8: 0xad6200dc  sw          $v0, 0xDC($t3)
    ctx->pc = 0x1fa0a8u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 220), GPR_U32(ctx, 2));
label_1fa0ac:
    // 0x1fa0ac: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x1fa0acu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1fa0b0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fa0b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1fa0b4: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1fa0b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1fa0b8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fa0b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1fa0bc: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1fa0bcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1fa0c0: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x1fa0c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1fa0c4: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1fa0c4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x1fa0c8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fa0c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1fa0cc: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1fa0ccu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1fa0d0: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1fa0d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1fa0d4: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x1fa0d4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x1fa0d8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fa0d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1fa0dc: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1fa0dcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1fa0e0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1FA0E0u;
    {
        const bool branch_taken_0x1fa0e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA0E0u;
        // 0x1fa0e4: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa0e0) {
            ctx->pc = 0x1FA0F8u;
            goto label_1fa0f8;
        }
    }
    ctx->pc = 0x1FA0E8u;
label_1fa0e8:
    // 0x1fa0e8: 0x91582  srl         $v0, $t1, 22
    ctx->pc = 0x1fa0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 22));
    // 0x1fa0ec: 0x94a80  sll         $t1, $t1, 10
    ctx->pc = 0x1fa0ecu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 10));
    // 0x1fa0f0: 0xad6200dc  sw          $v0, 0xDC($t3)
    ctx->pc = 0x1fa0f0u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 220), GPR_U32(ctx, 2));
    // 0x1fa0f4: 0x254a000a  addiu       $t2, $t2, 0xA
    ctx->pc = 0x1fa0f4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 10));
label_1fa0f8:
    // 0x1fa0f8: 0x2942001d  slti        $v0, $t2, 0x1D
    ctx->pc = 0x1fa0f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)29) ? 1 : 0);
    // 0x1fa0fc: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1FA0FCu;
    {
        const bool branch_taken_0x1fa0fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FA100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA0FCu;
        // 0x1fa100: 0x91742  srl         $v0, $t1, 29 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa0fc) {
            ctx->pc = 0x1FA178u;
            goto label_1fa178;
        }
    }
    ctx->pc = 0x1FA104u;
    // 0x1fa104: 0x254affe3  addiu       $t2, $t2, -0x1D
    ctx->pc = 0x1fa104u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967267));
    // 0x1fa108: 0x11400009  beqz        $t2, . + 4 + (0x9 << 2)
    ctx->pc = 0x1FA108u;
    {
        const bool branch_taken_0x1fa108 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA108u;
        // 0x1fa10c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa108) {
            ctx->pc = 0x1FA130u;
            goto label_1fa130;
        }
    }
    ctx->pc = 0x1FA110u;
    // 0x1fa110: 0x4a1023  subu        $v0, $v0, $t2
    ctx->pc = 0x1fa110u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x1fa114: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x1fa114u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x1fa118: 0x1224825  or          $t1, $t1, $v0
    ctx->pc = 0x1fa118u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
    // 0x1fa11c: 0x91f42  srl         $v1, $t1, 29
    ctx->pc = 0x1fa11cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 9), 29));
    // 0x1fa120: 0x1474804  sllv        $t1, $a3, $t2
    ctx->pc = 0x1fa120u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 10) & 0x1F));
    // 0x1fa124: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1FA124u;
    {
        const bool branch_taken_0x1fa124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA124u;
        // 0x1fa128: 0xad6300e0  sw          $v1, 0xE0($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 224), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa124) {
            ctx->pc = 0x1FA13Cu;
            goto label_1fa13c;
        }
    }
    ctx->pc = 0x1FA12Cu;
    // 0x1fa12c: 0x0  nop
    ctx->pc = 0x1fa12cu;
    // NOP
label_1fa130:
    // 0x1fa130: 0x91742  srl         $v0, $t1, 29
    ctx->pc = 0x1fa130u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 29));
    // 0x1fa134: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x1fa134u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa138: 0xad6200e0  sw          $v0, 0xE0($t3)
    ctx->pc = 0x1fa138u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 224), GPR_U32(ctx, 2));
label_1fa13c:
    // 0x1fa13c: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x1fa13cu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1fa140: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fa140u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1fa144: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1fa144u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1fa148: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fa148u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1fa14c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1fa14cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1fa150: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x1fa150u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1fa154: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1fa154u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x1fa158: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fa158u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1fa15c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1fa15cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1fa160: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1fa160u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1fa164: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x1fa164u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x1fa168: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fa168u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1fa16c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1fa16cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1fa170: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1FA170u;
    {
        const bool branch_taken_0x1fa170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA170u;
        // 0x1fa174: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa170) {
            ctx->pc = 0x1FA184u;
            goto label_1fa184;
        }
    }
    ctx->pc = 0x1FA178u;
label_1fa178:
    // 0x1fa178: 0x948c0  sll         $t1, $t1, 3
    ctx->pc = 0x1fa178u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x1fa17c: 0xad6200e0  sw          $v0, 0xE0($t3)
    ctx->pc = 0x1fa17cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 224), GPR_U32(ctx, 2));
    // 0x1fa180: 0x254a0003  addiu       $t2, $t2, 0x3
    ctx->pc = 0x1fa180u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 3));
label_1fa184:
    // 0x1fa184: 0x29420010  slti        $v0, $t2, 0x10
    ctx->pc = 0x1fa184u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1fa188: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1FA188u;
    {
        const bool branch_taken_0x1fa188 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FA18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA188u;
        // 0x1fa18c: 0x91402  srl         $v0, $t1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa188) {
            ctx->pc = 0x1FA200u;
            goto label_1fa200;
        }
    }
    ctx->pc = 0x1FA190u;
    // 0x1fa190: 0x254afff0  addiu       $t2, $t2, -0x10
    ctx->pc = 0x1fa190u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967280));
    // 0x1fa194: 0x11400008  beqz        $t2, . + 4 + (0x8 << 2)
    ctx->pc = 0x1FA194u;
    {
        const bool branch_taken_0x1fa194 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA194u;
        // 0x1fa198: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa194) {
            ctx->pc = 0x1FA1B8u;
            goto label_1fa1b8;
        }
    }
    ctx->pc = 0x1FA19Cu;
    // 0x1fa19c: 0x4a1023  subu        $v0, $v0, $t2
    ctx->pc = 0x1fa19cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x1fa1a0: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x1fa1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x1fa1a4: 0x1224825  or          $t1, $t1, $v0
    ctx->pc = 0x1fa1a4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
    // 0x1fa1a8: 0x91c02  srl         $v1, $t1, 16
    ctx->pc = 0x1fa1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 9), 16));
    // 0x1fa1ac: 0x1474804  sllv        $t1, $a3, $t2
    ctx->pc = 0x1fa1acu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 10) & 0x1F));
    // 0x1fa1b0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1FA1B0u;
    {
        const bool branch_taken_0x1fa1b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA1B0u;
        // 0x1fa1b4: 0xad6300e4  sw          $v1, 0xE4($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 228), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa1b0) {
            ctx->pc = 0x1FA1C4u;
            goto label_1fa1c4;
        }
    }
    ctx->pc = 0x1FA1B8u;
label_1fa1b8:
    // 0x1fa1b8: 0x91402  srl         $v0, $t1, 16
    ctx->pc = 0x1fa1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 16));
    // 0x1fa1bc: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x1fa1bcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa1c0: 0xad6200e4  sw          $v0, 0xE4($t3)
    ctx->pc = 0x1fa1c0u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 228), GPR_U32(ctx, 2));
label_1fa1c4:
    // 0x1fa1c4: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x1fa1c4u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1fa1c8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fa1c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1fa1cc: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1fa1ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1fa1d0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fa1d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1fa1d4: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1fa1d4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1fa1d8: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x1fa1d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1fa1dc: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1fa1dcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x1fa1e0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fa1e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1fa1e4: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1fa1e4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1fa1e8: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1fa1e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1fa1ec: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x1fa1ecu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x1fa1f0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fa1f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1fa1f4: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1fa1f4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1fa1f8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1FA1F8u;
    {
        const bool branch_taken_0x1fa1f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA1F8u;
        // 0x1fa1fc: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa1f8) {
            ctx->pc = 0x1FA20Cu;
            goto label_1fa20c;
        }
    }
    ctx->pc = 0x1FA200u;
label_1fa200:
    // 0x1fa200: 0x94c00  sll         $t1, $t1, 16
    ctx->pc = 0x1fa200u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 16));
    // 0x1fa204: 0xad6200e4  sw          $v0, 0xE4($t3)
    ctx->pc = 0x1fa204u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 228), GPR_U32(ctx, 2));
    // 0x1fa208: 0x254a0010  addiu       $t2, $t2, 0x10
    ctx->pc = 0x1fa208u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
label_1fa20c:
    // 0x1fa20c: 0x8d6600e0  lw          $a2, 0xE0($t3)
    ctx->pc = 0x1fa20cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 224)));
    // 0x1fa210: 0x24c3ffff  addiu       $v1, $a2, -0x1
    ctx->pc = 0x1fa210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1fa214: 0x2c620003  sltiu       $v0, $v1, 0x3
    ctx->pc = 0x1fa214u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x1fa218: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FA218u;
    {
        const bool branch_taken_0x1fa218 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FA21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA218u;
        // 0x1fa21c: 0x2c620002  sltiu       $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa218) {
            ctx->pc = 0x1FA230u;
            goto label_1fa230;
        }
    }
    ctx->pc = 0x1FA220u;
    // 0x1fa220: 0x8d620494  lw          $v0, 0x494($t3)
    ctx->pc = 0x1fa220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 1172)));
    // 0x1fa224: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1fa224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1fa228: 0xad620494  sw          $v0, 0x494($t3)
    ctx->pc = 0x1fa228u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 1172), GPR_U32(ctx, 2));
    // 0x1fa22c: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x1fa22cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1fa230:
    // 0x1fa230: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FA230u;
    {
        const bool branch_taken_0x1fa230 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA230u;
        // 0x1fa234: 0x8d6204a4  lw          $v0, 0x4A4($t3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 1188)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa230) {
            ctx->pc = 0x1FA250u;
            goto label_1fa250;
        }
    }
    ctx->pc = 0x1FA238u;
    // 0x1fa238: 0xad6004a8  sw          $zero, 0x4A8($t3)
    ctx->pc = 0x1fa238u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 1192), GPR_U32(ctx, 0));
    // 0x1fa23c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1fa23cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1fa240: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x1fa240u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1fa244: 0xad6204a4  sw          $v0, 0x4A4($t3)
    ctx->pc = 0x1fa244u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 1188), GPR_U32(ctx, 2));
    // 0x1fa248: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1FA248u;
    {
        const bool branch_taken_0x1fa248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA248u;
        // 0x1fa24c: 0xad6304ac  sw          $v1, 0x4AC($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 1196), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa248) {
            ctx->pc = 0x1FA26Cu;
            goto label_1fa26c;
        }
    }
    ctx->pc = 0x1FA250u;
label_1fa250:
    // 0x1fa250: 0x8d6304a8  lw          $v1, 0x4A8($t3)
    ctx->pc = 0x1fa250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 1192)));
    // 0x1fa254: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1fa254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1fa258: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1fa258u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1fa25c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1fa25cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1fa260: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1fa260u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1fa264: 0xad6304a8  sw          $v1, 0x4A8($t3)
    ctx->pc = 0x1fa264u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 1192), GPR_U32(ctx, 3));
    // 0x1fa268: 0xad6204ac  sw          $v0, 0x4AC($t3)
    ctx->pc = 0x1fa268u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 1196), GPR_U32(ctx, 2));
label_1fa26c:
    // 0x1fa26c: 0x24c2fffe  addiu       $v0, $a2, -0x2
    ctx->pc = 0x1fa26cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967294));
    // 0x1fa270: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1fa270u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1fa274: 0x10400046  beqz        $v0, . + 4 + (0x46 << 2)
    ctx->pc = 0x1FA274u;
    {
        const bool branch_taken_0x1fa274 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA274u;
        // 0x1fa278: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa274) {
            ctx->pc = 0x1FA390u;
            goto label_1fa390;
        }
    }
    ctx->pc = 0x1FA27Cu;
    // 0x1fa27c: 0x2942001f  slti        $v0, $t2, 0x1F
    ctx->pc = 0x1fa27cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x1fa280: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1FA280u;
    {
        const bool branch_taken_0x1fa280 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FA284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA280u;
        // 0x1fa284: 0x917c2  srl         $v0, $t1, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa280) {
            ctx->pc = 0x1FA2F8u;
            goto label_1fa2f8;
        }
    }
    ctx->pc = 0x1FA288u;
    // 0x1fa288: 0x254affe1  addiu       $t2, $t2, -0x1F
    ctx->pc = 0x1fa288u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967265));
    // 0x1fa28c: 0x11400008  beqz        $t2, . + 4 + (0x8 << 2)
    ctx->pc = 0x1FA28Cu;
    {
        const bool branch_taken_0x1fa28c = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA28Cu;
        // 0x1fa290: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa28c) {
            ctx->pc = 0x1FA2B0u;
            goto label_1fa2b0;
        }
    }
    ctx->pc = 0x1FA294u;
    // 0x1fa294: 0x4a1023  subu        $v0, $v0, $t2
    ctx->pc = 0x1fa294u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x1fa298: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x1fa298u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x1fa29c: 0x1224825  or          $t1, $t1, $v0
    ctx->pc = 0x1fa29cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
    // 0x1fa2a0: 0x91fc2  srl         $v1, $t1, 31
    ctx->pc = 0x1fa2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
    // 0x1fa2a4: 0x1474804  sllv        $t1, $a3, $t2
    ctx->pc = 0x1fa2a4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 10) & 0x1F));
    // 0x1fa2a8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1FA2A8u;
    {
        const bool branch_taken_0x1fa2a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA2A8u;
        // 0x1fa2ac: 0xad6300e8  sw          $v1, 0xE8($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 232), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa2a8) {
            ctx->pc = 0x1FA2BCu;
            goto label_1fa2bc;
        }
    }
    ctx->pc = 0x1FA2B0u;
label_1fa2b0:
    // 0x1fa2b0: 0x917c2  srl         $v0, $t1, 31
    ctx->pc = 0x1fa2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
    // 0x1fa2b4: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x1fa2b4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa2b8: 0xad6200e8  sw          $v0, 0xE8($t3)
    ctx->pc = 0x1fa2b8u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 232), GPR_U32(ctx, 2));
label_1fa2bc:
    // 0x1fa2bc: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x1fa2bcu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1fa2c0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fa2c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1fa2c4: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1fa2c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1fa2c8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fa2c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1fa2cc: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1fa2ccu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1fa2d0: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x1fa2d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1fa2d4: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1fa2d4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x1fa2d8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fa2d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1fa2dc: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1fa2dcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1fa2e0: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1fa2e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1fa2e4: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x1fa2e4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x1fa2e8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fa2e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1fa2ec: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1fa2ecu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1fa2f0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1FA2F0u;
    {
        const bool branch_taken_0x1fa2f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA2F0u;
        // 0x1fa2f4: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa2f0) {
            ctx->pc = 0x1FA304u;
            goto label_1fa304;
        }
    }
    ctx->pc = 0x1FA2F8u;
label_1fa2f8:
    // 0x1fa2f8: 0x94840  sll         $t1, $t1, 1
    ctx->pc = 0x1fa2f8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x1fa2fc: 0xad6200e8  sw          $v0, 0xE8($t3)
    ctx->pc = 0x1fa2fcu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 232), GPR_U32(ctx, 2));
    // 0x1fa300: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1fa300u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_1fa304:
    // 0x1fa304: 0x2942001d  slti        $v0, $t2, 0x1D
    ctx->pc = 0x1fa304u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)29) ? 1 : 0);
    // 0x1fa308: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1FA308u;
    {
        const bool branch_taken_0x1fa308 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FA30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA308u;
        // 0x1fa30c: 0x91742  srl         $v0, $t1, 29 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa308) {
            ctx->pc = 0x1FA380u;
            goto label_1fa380;
        }
    }
    ctx->pc = 0x1FA310u;
    // 0x1fa310: 0x254affe3  addiu       $t2, $t2, -0x1D
    ctx->pc = 0x1fa310u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967267));
    // 0x1fa314: 0x11400008  beqz        $t2, . + 4 + (0x8 << 2)
    ctx->pc = 0x1FA314u;
    {
        const bool branch_taken_0x1fa314 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA314u;
        // 0x1fa318: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa314) {
            ctx->pc = 0x1FA338u;
            goto label_1fa338;
        }
    }
    ctx->pc = 0x1FA31Cu;
    // 0x1fa31c: 0x4a1023  subu        $v0, $v0, $t2
    ctx->pc = 0x1fa31cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x1fa320: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x1fa320u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x1fa324: 0x1224825  or          $t1, $t1, $v0
    ctx->pc = 0x1fa324u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
    // 0x1fa328: 0x91f42  srl         $v1, $t1, 29
    ctx->pc = 0x1fa328u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 9), 29));
    // 0x1fa32c: 0x1474804  sllv        $t1, $a3, $t2
    ctx->pc = 0x1fa32cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 10) & 0x1F));
    // 0x1fa330: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1FA330u;
    {
        const bool branch_taken_0x1fa330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA330u;
        // 0x1fa334: 0xad6300ec  sw          $v1, 0xEC($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 236), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa330) {
            ctx->pc = 0x1FA344u;
            goto label_1fa344;
        }
    }
    ctx->pc = 0x1FA338u;
label_1fa338:
    // 0x1fa338: 0x91742  srl         $v0, $t1, 29
    ctx->pc = 0x1fa338u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 29));
    // 0x1fa33c: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x1fa33cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa340: 0xad6200ec  sw          $v0, 0xEC($t3)
    ctx->pc = 0x1fa340u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 236), GPR_U32(ctx, 2));
label_1fa344:
    // 0x1fa344: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x1fa344u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1fa348: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fa348u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1fa34c: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1fa34cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1fa350: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fa350u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1fa354: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1fa354u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1fa358: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x1fa358u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1fa35c: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1fa35cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x1fa360: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fa360u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1fa364: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1fa364u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1fa368: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1fa368u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1fa36c: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x1fa36cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x1fa370: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fa370u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1fa374: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1fa374u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1fa378: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1FA378u;
    {
        const bool branch_taken_0x1fa378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA378u;
        // 0x1fa37c: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa378) {
            ctx->pc = 0x1FA38Cu;
            goto label_1fa38c;
        }
    }
    ctx->pc = 0x1FA380u;
label_1fa380:
    // 0x1fa380: 0x948c0  sll         $t1, $t1, 3
    ctx->pc = 0x1fa380u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x1fa384: 0xad6200ec  sw          $v0, 0xEC($t3)
    ctx->pc = 0x1fa384u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 236), GPR_U32(ctx, 2));
    // 0x1fa388: 0x254a0003  addiu       $t2, $t2, 0x3
    ctx->pc = 0x1fa388u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 3));
label_1fa38c:
    // 0x1fa38c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1fa38cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1fa390:
    // 0x1fa390: 0x14c20047  bne         $a2, $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x1FA390u;
    {
        const bool branch_taken_0x1fa390 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x1FA394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA390u;
        // 0x1fa394: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa390) {
            ctx->pc = 0x1FA4B0u;
            goto label_1fa4b0;
        }
    }
    ctx->pc = 0x1FA398u;
    // 0x1fa398: 0x2942001f  slti        $v0, $t2, 0x1F
    ctx->pc = 0x1fa398u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x1fa39c: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1FA39Cu;
    {
        const bool branch_taken_0x1fa39c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FA3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA39Cu;
        // 0x1fa3a0: 0x917c2  srl         $v0, $t1, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa39c) {
            ctx->pc = 0x1FA418u;
            goto label_1fa418;
        }
    }
    ctx->pc = 0x1FA3A4u;
    // 0x1fa3a4: 0x254affe1  addiu       $t2, $t2, -0x1F
    ctx->pc = 0x1fa3a4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967265));
    // 0x1fa3a8: 0x11400009  beqz        $t2, . + 4 + (0x9 << 2)
    ctx->pc = 0x1FA3A8u;
    {
        const bool branch_taken_0x1fa3a8 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA3A8u;
        // 0x1fa3ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa3a8) {
            ctx->pc = 0x1FA3D0u;
            goto label_1fa3d0;
        }
    }
    ctx->pc = 0x1FA3B0u;
    // 0x1fa3b0: 0x4a1023  subu        $v0, $v0, $t2
    ctx->pc = 0x1fa3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x1fa3b4: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x1fa3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x1fa3b8: 0x1224825  or          $t1, $t1, $v0
    ctx->pc = 0x1fa3b8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
    // 0x1fa3bc: 0x91fc2  srl         $v1, $t1, 31
    ctx->pc = 0x1fa3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
    // 0x1fa3c0: 0x1474804  sllv        $t1, $a3, $t2
    ctx->pc = 0x1fa3c0u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 10) & 0x1F));
    // 0x1fa3c4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1FA3C4u;
    {
        const bool branch_taken_0x1fa3c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA3C4u;
        // 0x1fa3c8: 0xad6300f0  sw          $v1, 0xF0($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 240), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa3c4) {
            ctx->pc = 0x1FA3DCu;
            goto label_1fa3dc;
        }
    }
    ctx->pc = 0x1FA3CCu;
    // 0x1fa3cc: 0x0  nop
    ctx->pc = 0x1fa3ccu;
    // NOP
label_1fa3d0:
    // 0x1fa3d0: 0x917c2  srl         $v0, $t1, 31
    ctx->pc = 0x1fa3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
    // 0x1fa3d4: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x1fa3d4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa3d8: 0xad6200f0  sw          $v0, 0xF0($t3)
    ctx->pc = 0x1fa3d8u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 240), GPR_U32(ctx, 2));
label_1fa3dc:
    // 0x1fa3dc: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x1fa3dcu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1fa3e0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fa3e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1fa3e4: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1fa3e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1fa3e8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fa3e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1fa3ec: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1fa3ecu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1fa3f0: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x1fa3f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1fa3f4: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1fa3f4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x1fa3f8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fa3f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1fa3fc: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1fa3fcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1fa400: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1fa400u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1fa404: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x1fa404u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x1fa408: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fa408u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1fa40c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1fa40cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1fa410: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1FA410u;
    {
        const bool branch_taken_0x1fa410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA410u;
        // 0x1fa414: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa410) {
            ctx->pc = 0x1FA424u;
            goto label_1fa424;
        }
    }
    ctx->pc = 0x1FA418u;
label_1fa418:
    // 0x1fa418: 0x94840  sll         $t1, $t1, 1
    ctx->pc = 0x1fa418u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x1fa41c: 0xad6200f0  sw          $v0, 0xF0($t3)
    ctx->pc = 0x1fa41cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 240), GPR_U32(ctx, 2));
    // 0x1fa420: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1fa420u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_1fa424:
    // 0x1fa424: 0x2942001d  slti        $v0, $t2, 0x1D
    ctx->pc = 0x1fa424u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)29) ? 1 : 0);
    // 0x1fa428: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1FA428u;
    {
        const bool branch_taken_0x1fa428 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FA42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA428u;
        // 0x1fa42c: 0x91742  srl         $v0, $t1, 29 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa428) {
            ctx->pc = 0x1FA4A0u;
            goto label_1fa4a0;
        }
    }
    ctx->pc = 0x1FA430u;
    // 0x1fa430: 0x254affe3  addiu       $t2, $t2, -0x1D
    ctx->pc = 0x1fa430u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967267));
    // 0x1fa434: 0x11400008  beqz        $t2, . + 4 + (0x8 << 2)
    ctx->pc = 0x1FA434u;
    {
        const bool branch_taken_0x1fa434 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA434u;
        // 0x1fa438: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa434) {
            ctx->pc = 0x1FA458u;
            goto label_1fa458;
        }
    }
    ctx->pc = 0x1FA43Cu;
    // 0x1fa43c: 0x4a1023  subu        $v0, $v0, $t2
    ctx->pc = 0x1fa43cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x1fa440: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x1fa440u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x1fa444: 0x1224825  or          $t1, $t1, $v0
    ctx->pc = 0x1fa444u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
    // 0x1fa448: 0x91f42  srl         $v1, $t1, 29
    ctx->pc = 0x1fa448u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 9), 29));
    // 0x1fa44c: 0x1474804  sllv        $t1, $a3, $t2
    ctx->pc = 0x1fa44cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 10) & 0x1F));
    // 0x1fa450: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1FA450u;
    {
        const bool branch_taken_0x1fa450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA450u;
        // 0x1fa454: 0xad6300f4  sw          $v1, 0xF4($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 244), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa450) {
            ctx->pc = 0x1FA464u;
            goto label_1fa464;
        }
    }
    ctx->pc = 0x1FA458u;
label_1fa458:
    // 0x1fa458: 0x91742  srl         $v0, $t1, 29
    ctx->pc = 0x1fa458u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 29));
    // 0x1fa45c: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x1fa45cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa460: 0xad6200f4  sw          $v0, 0xF4($t3)
    ctx->pc = 0x1fa460u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 244), GPR_U32(ctx, 2));
label_1fa464:
    // 0x1fa464: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x1fa464u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1fa468: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fa468u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1fa46c: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1fa46cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1fa470: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fa470u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1fa474: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1fa474u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1fa478: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x1fa478u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1fa47c: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1fa47cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x1fa480: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fa480u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1fa484: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1fa484u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1fa488: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1fa488u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1fa48c: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x1fa48cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x1fa490: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fa490u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1fa494: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1fa494u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1fa498: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1FA498u;
    {
        const bool branch_taken_0x1fa498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA498u;
        // 0x1fa49c: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa498) {
            ctx->pc = 0x1FA4ACu;
            goto label_1fa4ac;
        }
    }
    ctx->pc = 0x1FA4A0u;
label_1fa4a0:
    // 0x1fa4a0: 0x948c0  sll         $t1, $t1, 3
    ctx->pc = 0x1fa4a0u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x1fa4a4: 0xad6200f4  sw          $v0, 0xF4($t3)
    ctx->pc = 0x1fa4a4u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 244), GPR_U32(ctx, 2));
    // 0x1fa4a8: 0x254a0003  addiu       $t2, $t2, 0x3
    ctx->pc = 0x1fa4a8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 3));
label_1fa4ac:
    // 0x1fa4ac: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1fa4acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fa4b0:
    // 0x1fa4b0: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x1FA4B0u;
    {
        const bool branch_taken_0x1fa4b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA4B0u;
        // 0x1fa4b4: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa4b0) {
            ctx->pc = 0x1FA53Cu;
            goto label_1fa53c;
        }
    }
    ctx->pc = 0x1FA4B8u;
label_1fa4b8:
    // 0x1fa4b8: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1FA4B8u;
    {
        const bool branch_taken_0x1fa4b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FA4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA4B8u;
        // 0x1fa4bc: 0x91602  srl         $v0, $t1, 24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa4b8) {
            ctx->pc = 0x1FA530u;
            goto label_1fa530;
        }
    }
    ctx->pc = 0x1FA4C0u;
    // 0x1fa4c0: 0x254affe8  addiu       $t2, $t2, -0x18
    ctx->pc = 0x1fa4c0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967272));
    // 0x1fa4c4: 0x11400008  beqz        $t2, . + 4 + (0x8 << 2)
    ctx->pc = 0x1FA4C4u;
    {
        const bool branch_taken_0x1fa4c4 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA4C4u;
        // 0x1fa4c8: 0xaa1023  subu        $v0, $a1, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa4c4) {
            ctx->pc = 0x1FA4E8u;
            goto label_1fa4e8;
        }
    }
    ctx->pc = 0x1FA4CCu;
    // 0x1fa4cc: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x1fa4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x1fa4d0: 0x1224825  or          $t1, $t1, $v0
    ctx->pc = 0x1fa4d0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
    // 0x1fa4d4: 0x91e02  srl         $v1, $t1, 24
    ctx->pc = 0x1fa4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 9), 24));
    // 0x1fa4d8: 0x1474804  sllv        $t1, $a3, $t2
    ctx->pc = 0x1fa4d8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 10) & 0x1F));
    // 0x1fa4dc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1FA4DCu;
    {
        const bool branch_taken_0x1fa4dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA4DCu;
        // 0x1fa4e0: 0xad6300fc  sw          $v1, 0xFC($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 252), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa4dc) {
            ctx->pc = 0x1FA4F4u;
            goto label_1fa4f4;
        }
    }
    ctx->pc = 0x1FA4E4u;
    // 0x1fa4e4: 0x0  nop
    ctx->pc = 0x1fa4e4u;
    // NOP
label_1fa4e8:
    // 0x1fa4e8: 0x91602  srl         $v0, $t1, 24
    ctx->pc = 0x1fa4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 24));
    // 0x1fa4ec: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x1fa4ecu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa4f0: 0xad6200fc  sw          $v0, 0xFC($t3)
    ctx->pc = 0x1fa4f0u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 252), GPR_U32(ctx, 2));
label_1fa4f4:
    // 0x1fa4f4: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x1fa4f4u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1fa4f8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fa4f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1fa4fc: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1fa4fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1fa500: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fa500u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1fa504: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1fa504u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1fa508: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x1fa508u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1fa50c: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1fa50cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x1fa510: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fa510u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1fa514: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1fa514u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1fa518: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1fa518u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1fa51c: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x1fa51cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x1fa520: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fa520u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1fa524: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1fa524u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1fa528: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1FA528u;
    {
        const bool branch_taken_0x1fa528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA528u;
        // 0x1fa52c: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa528) {
            ctx->pc = 0x1FA53Cu;
            goto label_1fa53c;
        }
    }
    ctx->pc = 0x1FA530u;
label_1fa530:
    // 0x1fa530: 0x94a00  sll         $t1, $t1, 8
    ctx->pc = 0x1fa530u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 8));
    // 0x1fa534: 0xad6200fc  sw          $v0, 0xFC($t3)
    ctx->pc = 0x1fa534u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 252), GPR_U32(ctx, 2));
    // 0x1fa538: 0x254a0008  addiu       $t2, $t2, 0x8
    ctx->pc = 0x1fa538u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 8));
label_1fa53c:
    // 0x1fa53c: 0x2942001f  slti        $v0, $t2, 0x1F
    ctx->pc = 0x1fa53cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x1fa540: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1FA540u;
    {
        const bool branch_taken_0x1fa540 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FA544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA540u;
        // 0x1fa544: 0x917c2  srl         $v0, $t1, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa540) {
            ctx->pc = 0x1FA5B8u;
            goto label_1fa5b8;
        }
    }
    ctx->pc = 0x1FA548u;
    // 0x1fa548: 0x254affe1  addiu       $t2, $t2, -0x1F
    ctx->pc = 0x1fa548u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967265));
    // 0x1fa54c: 0x11400008  beqz        $t2, . + 4 + (0x8 << 2)
    ctx->pc = 0x1FA54Cu;
    {
        const bool branch_taken_0x1fa54c = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA54Cu;
        // 0x1fa550: 0x8a1023  subu        $v0, $a0, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa54c) {
            ctx->pc = 0x1FA570u;
            goto label_1fa570;
        }
    }
    ctx->pc = 0x1FA554u;
    // 0x1fa554: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x1fa554u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x1fa558: 0x1224825  or          $t1, $t1, $v0
    ctx->pc = 0x1fa558u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
    // 0x1fa55c: 0x91fc2  srl         $v1, $t1, 31
    ctx->pc = 0x1fa55cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
    // 0x1fa560: 0x1474804  sllv        $t1, $a3, $t2
    ctx->pc = 0x1fa560u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 10) & 0x1F));
    // 0x1fa564: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1FA564u;
    {
        const bool branch_taken_0x1fa564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA564u;
        // 0x1fa568: 0xad6300f8  sw          $v1, 0xF8($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 248), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa564) {
            ctx->pc = 0x1FA57Cu;
            goto label_1fa57c;
        }
    }
    ctx->pc = 0x1FA56Cu;
    // 0x1fa56c: 0x0  nop
    ctx->pc = 0x1fa56cu;
    // NOP
label_1fa570:
    // 0x1fa570: 0x917c2  srl         $v0, $t1, 31
    ctx->pc = 0x1fa570u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
    // 0x1fa574: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x1fa574u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa578: 0xad6200f8  sw          $v0, 0xF8($t3)
    ctx->pc = 0x1fa578u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 248), GPR_U32(ctx, 2));
label_1fa57c:
    // 0x1fa57c: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x1fa57cu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1fa580: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fa580u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1fa584: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1fa584u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1fa588: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fa588u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1fa58c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1fa58cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1fa590: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x1fa590u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1fa594: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1fa594u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x1fa598: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fa598u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1fa59c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1fa59cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1fa5a0: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1fa5a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1fa5a4: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x1fa5a4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x1fa5a8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fa5a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1fa5ac: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1fa5acu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1fa5b0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1FA5B0u;
    {
        const bool branch_taken_0x1fa5b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA5B0u;
        // 0x1fa5b4: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa5b0) {
            ctx->pc = 0x1FA5C4u;
            goto label_1fa5c4;
        }
    }
    ctx->pc = 0x1FA5B8u;
label_1fa5b8:
    // 0x1fa5b8: 0x94840  sll         $t1, $t1, 1
    ctx->pc = 0x1fa5b8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x1fa5bc: 0xad6200f8  sw          $v0, 0xF8($t3)
    ctx->pc = 0x1fa5bcu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 248), GPR_U32(ctx, 2));
    // 0x1fa5c0: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1fa5c0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_1fa5c4:
    // 0x1fa5c4: 0x8d6200f8  lw          $v0, 0xF8($t3)
    ctx->pc = 0x1fa5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 248)));
    // 0x1fa5c8: 0x5440ffbb  bnel        $v0, $zero, . + 4 + (-0x45 << 2)
    ctx->pc = 0x1FA5C8u;
    {
        const bool branch_taken_0x1fa5c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fa5c8) {
            ctx->pc = 0x1FA5CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FA5C8u;
            // 0x1fa5cc: 0x29420018  slti        $v0, $t2, 0x18 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)24) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FA4B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fa4b8;
        }
    }
    ctx->pc = 0x1FA5D0u;
    // 0x1fa5d0: 0x10c1823  subu        $v1, $t0, $t4
    ctx->pc = 0x1fa5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 12)));
    // 0x1fa5d4: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1fa5d4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1fa5d8: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1fa5d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1fa5dc: 0xcb3021  addu        $a2, $a2, $t3
    ctx->pc = 0x1fa5dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 11)));
    // 0x1fa5e0: 0x1431821  addu        $v1, $t2, $v1
    ctx->pc = 0x1fa5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x1fa5e4: 0x24c60444  addiu       $a2, $a2, 0x444
    ctx->pc = 0x1fa5e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1092));
    // 0x1fa5e8: 0x2462ffc7  addiu       $v0, $v1, -0x39
    ctx->pc = 0x1fa5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967239));
    // 0x1fa5ec: 0x2463ffce  addiu       $v1, $v1, -0x32
    ctx->pc = 0x1fa5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967246));
    // 0x1fa5f0: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x1fa5f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1fa5f4: 0x28440000  slti        $a0, $v0, 0x0
    ctx->pc = 0x1fa5f4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1fa5f8: 0x64100b  movn        $v0, $v1, $a0
    ctx->pc = 0x1fa5f8u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x1fa5fc: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x1fa5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1fa600: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1fa600u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1fa604: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1fa604u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1fa608: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x1fa608u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x1fa60c: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x1fa60cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
    // 0x1fa610: 0x1821021  addu        $v0, $t4, $v0
    ctx->pc = 0x1fa610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x1fa614: 0xad63030c  sw          $v1, 0x30C($t3)
    ctx->pc = 0x1fa614u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 780), GPR_U32(ctx, 3));
    // 0x1fa618: 0x3e00008  jr          $ra
    ctx->pc = 0x1FA618u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FA61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA618u;
        // 0x1fa61c: 0xad670308  sw          $a3, 0x308($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 776), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FA618u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FA620u;
}
