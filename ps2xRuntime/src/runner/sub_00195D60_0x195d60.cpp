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

// Function: sub_00195D60
// Address: 0x195d60 - 0x195ee8
void sub_00195D60_0x195d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00195D60_0x195d60");
#endif

    switch (ctx->pc) {
        case 0x195ec0u: goto label_195ec0;
        default: break;
    }

    ctx->pc = 0x195d60u;

    // 0x195d60: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x195d60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x195d64: 0x28a10010  slti        $at, $a1, 0x10
    ctx->pc = 0x195d64u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x195d68: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x195d68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x195d6c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x195d6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x195d70: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x195d70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x195d74: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x195d74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195d78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x195d78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x195d7c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x195d7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195d80: 0x10200053  beqz        $at, . + 4 + (0x53 << 2)
    ctx->pc = 0x195D80u;
    {
        const bool branch_taken_0x195d80 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x195D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195D80u;
        // 0x195d84: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195d80) {
            ctx->pc = 0x195ED0u;
            goto label_195ed0;
        }
    }
    ctx->pc = 0x195D88u;
    // 0x195d88: 0xae400018  sw          $zero, 0x18($s2)
    ctx->pc = 0x195d88u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 0));
    // 0x195d8c: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x195d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x195d90: 0xae400020  sw          $zero, 0x20($s2)
    ctx->pc = 0x195d90u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 0));
    // 0x195d94: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x195d94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195d98: 0xae480024  sw          $t0, 0x24($s2)
    ctx->pc = 0x195d98u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 8));
    // 0x195d9c: 0xae490028  sw          $t1, 0x28($s2)
    ctx->pc = 0x195d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 9));
    // 0x195da0: 0xae4a002c  sw          $t2, 0x2C($s2)
    ctx->pc = 0x195da0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 10));
    // 0x195da4: 0xae4b0030  sw          $t3, 0x30($s2)
    ctx->pc = 0x195da4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 11));
    // 0x195da8: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x195da8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x195dac: 0x10a2000c  beq         $a1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x195DACu;
    {
        const bool branch_taken_0x195dac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x195DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195DACu;
        // 0x195db0: 0xae430034  sw          $v1, 0x34($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195dac) {
            ctx->pc = 0x195DE0u;
            goto label_195de0;
        }
    }
    ctx->pc = 0x195DB4u;
    // 0x195db4: 0x5000004  bltz        $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x195DB4u;
    {
        const bool branch_taken_0x195db4 = (GPR_S64(ctx, 8) < 0);
        ctx->pc = 0x195DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195DB4u;
        // 0x195db8: 0x29010007  slti        $at, $t0, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)7) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x195db4) {
            ctx->pc = 0x195DC8u;
            goto label_195dc8;
        }
    }
    ctx->pc = 0x195DBCu;
    // 0x195dbc: 0x14200008  bnez        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x195DBCu;
    {
        const bool branch_taken_0x195dbc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x195dbc) {
            ctx->pc = 0x195DE0u;
            goto label_195de0;
        }
    }
    ctx->pc = 0x195DC4u;
    // 0x195dc4: 0x0  nop
    ctx->pc = 0x195dc4u;
    // NOP
label_195dc8:
    // 0x195dc8: 0x310300ff  andi        $v1, $t0, 0xFF
    ctx->pc = 0x195dc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x195dcc: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x195dccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x195dd0: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x195dd0u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x195dd4: 0x0  nop
    ctx->pc = 0x195dd4u;
    // NOP
    // 0x195dd8: 0x0  nop
    ctx->pc = 0x195dd8u;
    // NOP
    // 0x195ddc: 0x2010  mfhi        $a0
    ctx->pc = 0x195ddcu;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_195de0:
    // 0x195de0: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x195de0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x195de4: 0x10a20032  beq         $a1, $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x195DE4u;
    {
        const bool branch_taken_0x195de4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x195DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195DE4u;
        // 0x195de8: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195de4) {
            ctx->pc = 0x195EB0u;
            goto label_195eb0;
        }
    }
    ctx->pc = 0x195DECu;
    // 0x195dec: 0x10a2002c  beq         $a1, $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x195DECu;
    {
        const bool branch_taken_0x195dec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x195dec) {
            ctx->pc = 0x195EA0u;
            goto label_195ea0;
        }
    }
    ctx->pc = 0x195DF4u;
    // 0x195df4: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x195df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x195df8: 0x10a20025  beq         $a1, $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x195DF8u;
    {
        const bool branch_taken_0x195df8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x195DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195DF8u;
        // 0x195dfc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195df8) {
            ctx->pc = 0x195E90u;
            goto label_195e90;
        }
    }
    ctx->pc = 0x195E00u;
    // 0x195e00: 0x10a20015  beq         $a1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x195E00u;
    {
        const bool branch_taken_0x195e00 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x195e00) {
            ctx->pc = 0x195E58u;
            goto label_195e58;
        }
    }
    ctx->pc = 0x195E08u;
    // 0x195e08: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x195e08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x195e0c: 0x10a2000e  beq         $a1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x195E0Cu;
    {
        const bool branch_taken_0x195e0c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x195E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195E0Cu;
        // 0x195e10: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195e0c) {
            ctx->pc = 0x195E48u;
            goto label_195e48;
        }
    }
    ctx->pc = 0x195E14u;
    // 0x195e14: 0x10a2000c  beq         $a1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x195E14u;
    {
        const bool branch_taken_0x195e14 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x195e14) {
            ctx->pc = 0x195E48u;
            goto label_195e48;
        }
    }
    ctx->pc = 0x195E1Cu;
    // 0x195e1c: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x195e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x195e20: 0x10a20009  beq         $a1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x195E20u;
    {
        const bool branch_taken_0x195e20 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x195E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195E20u;
        // 0x195e24: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195e20) {
            ctx->pc = 0x195E48u;
            goto label_195e48;
        }
    }
    ctx->pc = 0x195E28u;
    // 0x195e28: 0x10a20005  beq         $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x195E28u;
    {
        const bool branch_taken_0x195e28 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x195e28) {
            ctx->pc = 0x195E40u;
            goto label_195e40;
        }
    }
    ctx->pc = 0x195E30u;
    // 0x195e30: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x195E30u;
    {
        const bool branch_taken_0x195e30 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x195e30) {
            ctx->pc = 0x195E40u;
            goto label_195e40;
        }
    }
    ctx->pc = 0x195E38u;
    // 0x195e38: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x195E38u;
    {
        const bool branch_taken_0x195e38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x195e38) {
            ctx->pc = 0x195EB8u;
            goto label_195eb8;
        }
    }
    ctx->pc = 0x195E40u;
label_195e40:
    // 0x195e40: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x195e40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x195e44: 0x0  nop
    ctx->pc = 0x195e44u;
    // NOP
label_195e48:
    // 0x195e48: 0xae440024  sw          $a0, 0x24($s2)
    ctx->pc = 0x195e48u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 4));
    // 0x195e4c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x195E4Cu;
    {
        const bool branch_taken_0x195e4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195E4Cu;
        // 0x195e50: 0xa2440005  sb          $a0, 0x5($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 5), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195e4c) {
            ctx->pc = 0x195EB8u;
            goto label_195eb8;
        }
    }
    ctx->pc = 0x195E54u;
    // 0x195e54: 0x0  nop
    ctx->pc = 0x195e54u;
    // NOP
label_195e58:
    // 0x195e58: 0x29010006  slti        $at, $t0, 0x6
    ctx->pc = 0x195e58u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x195e5c: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x195E5Cu;
    {
        const bool branch_taken_0x195e5c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x195E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195E5Cu;
        // 0x195e60: 0x29210006  slti        $at, $t1, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x195e5c) {
            ctx->pc = 0x195E78u;
            goto label_195e78;
        }
    }
    ctx->pc = 0x195E64u;
    // 0x195e64: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x195E64u;
    {
        const bool branch_taken_0x195e64 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x195e64) {
            ctx->pc = 0x195E78u;
            goto label_195e78;
        }
    }
    ctx->pc = 0x195E6Cu;
    // 0x195e6c: 0x29410006  slti        $at, $t2, 0x6
    ctx->pc = 0x195e6cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x195e70: 0x14200011  bnez        $at, . + 4 + (0x11 << 2)
    ctx->pc = 0x195E70u;
    {
        const bool branch_taken_0x195e70 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x195e70) {
            ctx->pc = 0x195EB8u;
            goto label_195eb8;
        }
    }
    ctx->pc = 0x195E78u;
label_195e78:
    // 0x195e78: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x195e78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x195e7c: 0xae420024  sw          $v0, 0x24($s2)
    ctx->pc = 0x195e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 2));
    // 0x195e80: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x195e80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x195e84: 0xae400028  sw          $zero, 0x28($s2)
    ctx->pc = 0x195e84u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 0));
    // 0x195e88: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x195E88u;
    {
        const bool branch_taken_0x195e88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195E88u;
        // 0x195e8c: 0xae42002c  sw          $v0, 0x2C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195e88) {
            ctx->pc = 0x195EB8u;
            goto label_195eb8;
        }
    }
    ctx->pc = 0x195E90u;
label_195e90:
    // 0x195e90: 0x24820007  addiu       $v0, $a0, 0x7
    ctx->pc = 0x195e90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 7));
    // 0x195e94: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x195E94u;
    {
        const bool branch_taken_0x195e94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195E94u;
        // 0x195e98: 0xa2420005  sb          $v0, 0x5($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 5), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195e94) {
            ctx->pc = 0x195EB8u;
            goto label_195eb8;
        }
    }
    ctx->pc = 0x195E9Cu;
    // 0x195e9c: 0x0  nop
    ctx->pc = 0x195e9cu;
    // NOP
label_195ea0:
    // 0x195ea0: 0x2482000e  addiu       $v0, $a0, 0xE
    ctx->pc = 0x195ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 14));
    // 0x195ea4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x195EA4u;
    {
        const bool branch_taken_0x195ea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195EA4u;
        // 0x195ea8: 0xa2420005  sb          $v0, 0x5($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 5), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195ea4) {
            ctx->pc = 0x195EB8u;
            goto label_195eb8;
        }
    }
    ctx->pc = 0x195EACu;
    // 0x195eac: 0x0  nop
    ctx->pc = 0x195eacu;
    // NOP
label_195eb0:
    // 0x195eb0: 0xa2440005  sb          $a0, 0x5($s2)
    ctx->pc = 0x195eb0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 5), (uint8_t)GPR_U32(ctx, 4));
    // 0x195eb4: 0x0  nop
    ctx->pc = 0x195eb4u;
    // NOP
label_195eb8:
    // 0x195eb8: 0xc0657cc  jal         func_195F30
    ctx->pc = 0x195EB8u;
    SET_GPR_U32(ctx, 31, 0x195EC0u);
    ctx->pc = 0x195EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195EB8u;
    // 0x195ebc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x195F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x195F30u, 0x195EB8u, 0x195EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195EC0u;
label_195ec0:
    // 0x195ec0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x195EC0u;
    {
        const bool branch_taken_0x195ec0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x195ec0) {
            ctx->pc = 0x195ED0u;
            goto label_195ed0;
        }
    }
    ctx->pc = 0x195EC8u;
    // 0x195ec8: 0xae510018  sw          $s1, 0x18($s2)
    ctx->pc = 0x195ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 17));
    // 0x195ecc: 0xae500020  sw          $s0, 0x20($s2)
    ctx->pc = 0x195eccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 16));
label_195ed0:
    // 0x195ed0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x195ed0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x195ed4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x195ed4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x195ed8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x195ed8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x195edc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x195edcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x195ee0: 0x3e00008  jr          $ra
    ctx->pc = 0x195EE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x195EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195EE0u;
        // 0x195ee4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195EE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x195EE8u;
}
