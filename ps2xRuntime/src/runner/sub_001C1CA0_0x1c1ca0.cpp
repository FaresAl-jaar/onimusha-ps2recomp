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

// Function: sub_001C1CA0
// Address: 0x1c1ca0 - 0x1c1dd0
void sub_001C1CA0_0x1c1ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C1CA0_0x1c1ca0");
#endif

    switch (ctx->pc) {
        case 0x1c1cb0u: goto label_1c1cb0;
        case 0x1c1cc8u: goto label_1c1cc8;
        default: break;
    }

    ctx->pc = 0x1c1ca0u;

    // 0x1c1ca0: 0x2d030002  sltiu       $v1, $t0, 0x2
    ctx->pc = 0x1c1ca0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1c1ca4: 0x14600048  bnez        $v1, . + 4 + (0x48 << 2)
    ctx->pc = 0x1C1CA4u;
    {
        const bool branch_taken_0x1c1ca4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C1CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1CA4u;
        // 0x1c1ca8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1ca4) {
            ctx->pc = 0x1C1DC8u;
            goto label_1c1dc8;
        }
    }
    ctx->pc = 0x1C1CACu;
    // 0x1c1cac: 0x3c0a8000  lui         $t2, 0x8000
    ctx->pc = 0x1c1cacu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)32768 << 16));
label_1c1cb0:
    // 0x1c1cb0: 0x240c0080  addiu       $t4, $zero, 0x80
    ctx->pc = 0x1c1cb0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1c1cb4: 0x8082b  sltu        $at, $zero, $t0
    ctx->pc = 0x1c1cb4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x1c1cb8: 0x180782d  daddu       $t7, $t4, $zero
    ctx->pc = 0x1c1cb8u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1cbc: 0x180202d  daddu       $a0, $t4, $zero
    ctx->pc = 0x1c1cbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1cc0: 0x10200037  beqz        $at, . + 4 + (0x37 << 2)
    ctx->pc = 0x1C1CC0u;
    {
        const bool branch_taken_0x1c1cc0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1CC0u;
        // 0x1c1cc4: 0x682d  daddu       $t5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1cc0) {
            ctx->pc = 0x1C1DA0u;
            goto label_1c1da0;
        }
    }
    ctx->pc = 0x1C1CC8u;
label_1c1cc8:
    // 0x1c1cc8: 0xed1821  addu        $v1, $a3, $t5
    ctx->pc = 0x1c1cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 13)));
    // 0x1c1ccc: 0x906b0000  lbu         $t3, 0x0($v1)
    ctx->pc = 0x1c1cccu;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c1cd0: 0x169082a  slt         $at, $t3, $t1
    ctx->pc = 0x1c1cd0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x1c1cd4: 0x1420002e  bnez        $at, . + 4 + (0x2E << 2)
    ctx->pc = 0x1C1CD4u;
    {
        const bool branch_taken_0x1c1cd4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c1cd4) {
            ctx->pc = 0x1C1D90u;
            goto label_1c1d90;
        }
    }
    ctx->pc = 0x1C1CDCu;
    // 0x1c1cdc: 0x11a00002  beqz        $t5, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C1CDCu;
    {
        const bool branch_taken_0x1c1cdc = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1CDCu;
        // 0x1c1ce0: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1cdc) {
            ctx->pc = 0x1C1CE8u;
            goto label_1c1ce8;
        }
    }
    ctx->pc = 0x1C1CE4u;
    // 0x1c1ce4: 0x25acffff  addiu       $t4, $t5, -0x1
    ctx->pc = 0x1c1ce4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967295));
label_1c1ce8:
    // 0x1c1ce8: 0xec1821  addu        $v1, $a3, $t4
    ctx->pc = 0x1c1ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
    // 0x1c1cec: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x1c1cecu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c1cf0: 0x15240003  bne         $t1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C1CF0u;
    {
        const bool branch_taken_0x1c1cf0 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 4));
        ctx->pc = 0x1C1CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1CF0u;
        // 0x1c1cf4: 0x1641823  subu        $v1, $t3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1cf0) {
            ctx->pc = 0x1C1D00u;
            goto label_1c1d00;
        }
    }
    ctx->pc = 0x1C1CF8u;
    // 0x1c1cf8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1C1CF8u;
    {
        const bool branch_taken_0x1c1cf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1CF8u;
        // 0x1c1cfc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1cf8) {
            ctx->pc = 0x1C1D18u;
            goto label_1c1d18;
        }
    }
    ctx->pc = 0x1C1D00u;
label_1c1d00:
    // 0x1c1d00: 0x1242023  subu        $a0, $t1, $a0
    ctx->pc = 0x1c1d00u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x1c1d04: 0x421c0  sll         $a0, $a0, 7
    ctx->pc = 0x1c1d04u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 7));
    // 0x1c1d08: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x1c1d08u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1c1d0c: 0x0  nop
    ctx->pc = 0x1c1d0cu;
    // NOP
    // 0x1c1d10: 0x0  nop
    ctx->pc = 0x1c1d10u;
    // NOP
    // 0x1c1d14: 0x2012  mflo        $a0
    ctx->pc = 0x1c1d14u;
    SET_GPR_U64(ctx, 4, ctx->lo);
label_1c1d18:
    // 0x1c1d18: 0xc5880  sll         $t3, $t4, 2
    ctx->pc = 0x1c1d18u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
    // 0x1c1d1c: 0xd1880  sll         $v1, $t5, 2
    ctx->pc = 0x1c1d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 13), 2));
    // 0x1c1d20: 0xcb5821  addu        $t3, $a2, $t3
    ctx->pc = 0x1c1d20u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 11)));
    // 0x1c1d24: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x1c1d24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1c1d28: 0x8d6c0000  lw          $t4, 0x0($t3)
    ctx->pc = 0x1c1d28u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x1c1d2c: 0x8c780000  lw          $t8, 0x0($v1)
    ctx->pc = 0x1c1d2cu;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c1d30: 0xc5a02  srl         $t3, $t4, 8
    ctx->pc = 0x1c1d30u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 12), 8));
    // 0x1c1d34: 0x316f00ff  andi        $t7, $t3, 0xFF
    ctx->pc = 0x1c1d34u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)255);
    // 0x1c1d38: 0x318300ff  andi        $v1, $t4, 0xFF
    ctx->pc = 0x1c1d38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)255);
    // 0x1c1d3c: 0xc5c02  srl         $t3, $t4, 16
    ctx->pc = 0x1c1d3cu;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 12), 16));
    // 0x1c1d40: 0x316e00ff  andi        $t6, $t3, 0xFF
    ctx->pc = 0x1c1d40u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)255);
    // 0x1c1d44: 0x330b00ff  andi        $t3, $t8, 0xFF
    ctx->pc = 0x1c1d44u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 24) & (uint64_t)(uint16_t)255);
    // 0x1c1d48: 0x1636023  subu        $t4, $t3, $v1
    ctx->pc = 0x1c1d48u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
    // 0x1c1d4c: 0x8c6818  mult        $t5, $a0, $t4
    ctx->pc = 0x1c1d4cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x1c1d50: 0x185a02  srl         $t3, $t8, 8
    ctx->pc = 0x1c1d50u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 24), 8));
    // 0x1c1d54: 0x316b00ff  andi        $t3, $t3, 0xFF
    ctx->pc = 0x1c1d54u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)255);
    // 0x1c1d58: 0x16f6023  subu        $t4, $t3, $t7
    ctx->pc = 0x1c1d58u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 15)));
    // 0x1c1d5c: 0x708c6018  mult1       $t4, $a0, $t4
    ctx->pc = 0x1c1d5cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 12); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
    // 0x1c1d60: 0x185c02  srl         $t3, $t8, 16
    ctx->pc = 0x1c1d60u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 24), 16));
    // 0x1c1d64: 0xc61c2  srl         $t4, $t4, 7
    ctx->pc = 0x1c1d64u;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 12), 7));
    // 0x1c1d68: 0x316b00ff  andi        $t3, $t3, 0xFF
    ctx->pc = 0x1c1d68u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)255);
    // 0x1c1d6c: 0x1ec7821  addu        $t7, $t7, $t4
    ctx->pc = 0x1c1d6cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 12)));
    // 0x1c1d70: 0x16e5823  subu        $t3, $t3, $t6
    ctx->pc = 0x1c1d70u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 14)));
    // 0x1c1d74: 0xd61c2  srl         $t4, $t5, 7
    ctx->pc = 0x1c1d74u;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 13), 7));
    // 0x1c1d78: 0x6c6021  addu        $t4, $v1, $t4
    ctx->pc = 0x1c1d78u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x1c1d7c: 0x8b1818  mult        $v1, $a0, $t3
    ctx->pc = 0x1c1d7cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1c1d80: 0x319c2  srl         $v1, $v1, 7
    ctx->pc = 0x1c1d80u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 7));
    // 0x1c1d84: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1C1D84u;
    {
        const bool branch_taken_0x1c1d84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1D84u;
        // 0x1c1d88: 0x1c32021  addu        $a0, $t6, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1d84) {
            ctx->pc = 0x1C1DA0u;
            goto label_1c1da0;
        }
    }
    ctx->pc = 0x1C1D8Cu;
    // 0x1c1d8c: 0x0  nop
    ctx->pc = 0x1c1d8cu;
    // NOP
label_1c1d90:
    // 0x1c1d90: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x1c1d90u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x1c1d94: 0x1a8182b  sltu        $v1, $t5, $t0
    ctx->pc = 0x1c1d94u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x1c1d98: 0x1460ffcb  bnez        $v1, . + 4 + (-0x35 << 2)
    ctx->pc = 0x1C1D98u;
    {
        const bool branch_taken_0x1c1d98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c1d98) {
            ctx->pc = 0x1C1CC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c1cc8;
        }
    }
    ctx->pc = 0x1C1DA0u;
label_1c1da0:
    // 0x1c1da0: 0x45c00  sll         $t3, $a0, 16
    ctx->pc = 0x1c1da0u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x1c1da4: 0xf1a00  sll         $v1, $t7, 8
    ctx->pc = 0x1c1da4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 15), 8));
    // 0x1c1da8: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1c1da8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1c1dac: 0x1832021  addu        $a0, $t4, $v1
    ctx->pc = 0x1c1dacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 3)));
    // 0x1c1db0: 0x1642021  addu        $a0, $t3, $a0
    ctx->pc = 0x1c1db0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
    // 0x1c1db4: 0x2d230100  sltiu       $v1, $t1, 0x100
    ctx->pc = 0x1c1db4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x1c1db8: 0x8a2021  addu        $a0, $a0, $t2
    ctx->pc = 0x1c1db8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x1c1dbc: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x1c1dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x1c1dc0: 0x1460ffbb  bnez        $v1, . + 4 + (-0x45 << 2)
    ctx->pc = 0x1C1DC0u;
    {
        const bool branch_taken_0x1c1dc0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C1DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1DC0u;
        // 0x1c1dc4: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1dc0) {
            ctx->pc = 0x1C1CB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c1cb0;
        }
    }
    ctx->pc = 0x1C1DC8u;
label_1c1dc8:
    // 0x1c1dc8: 0x3e00008  jr          $ra
    ctx->pc = 0x1C1DC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C1DC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C1DD0u;
}
