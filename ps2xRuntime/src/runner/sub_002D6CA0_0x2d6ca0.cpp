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

// Function: sub_002D6CA0
// Address: 0x2d6ca0 - 0x2d7024
void sub_002D6CA0_0x2d6ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D6CA0_0x2d6ca0");
#endif

    switch (ctx->pc) {
        case 0x2d6d10u: goto label_2d6d10;
        case 0x2d6ef0u: goto label_2d6ef0;
        case 0x2d6f64u: goto label_2d6f64;
        case 0x2d6fe0u: goto label_2d6fe0;
        default: break;
    }

    ctx->pc = 0x2d6ca0u;

    // 0x2d6ca0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2d6ca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2d6ca4: 0x30e700ff  andi        $a3, $a3, 0xFF
    ctx->pc = 0x2d6ca4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x2d6ca8: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x2d6ca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2d6cac: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x2d6cacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x2d6cb0: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2d6cb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x2d6cb4: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2d6cb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2d6cb8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2d6cb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2d6cbc: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x2d6cbcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6cc0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2d6cc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2d6cc4: 0x24150010  addiu       $s5, $zero, 0x10
    ctx->pc = 0x2d6cc4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2d6cc8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2d6cc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2d6ccc: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2d6cccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6cd0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2d6cd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2d6cd4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d6cd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2d6cd8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d6cd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d6cdc: 0x68c3c  dsll32      $s1, $a2, 16
    ctx->pc = 0x2d6cdcu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 6) << (32 + 16));
    // 0x2d6ce0: 0x5843c  dsll32      $s0, $a1, 16
    ctx->pc = 0x2d6ce0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) << (32 + 16));
    // 0x2d6ce4: 0x118c3f  dsra32      $s1, $s1, 16
    ctx->pc = 0x2d6ce4u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
    // 0x2d6ce8: 0x672821  addu        $a1, $v1, $a3
    ctx->pc = 0x2d6ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x2d6cec: 0x10843f  dsra32      $s0, $s0, 16
    ctx->pc = 0x2d6cecu;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
    // 0x2d6cf0: 0x871821  addu        $v1, $a0, $a3
    ctx->pc = 0x2d6cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x2d6cf4: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x2d6cf4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2d6cf8: 0x247700d4  addiu       $s7, $v1, 0xD4
    ctx->pc = 0x2d6cf8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 212));
    // 0x2d6cfc: 0x859821  addu        $s3, $a0, $a1
    ctx->pc = 0x2d6cfcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2d6d00: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x2d6d00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x2d6d04: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2d6d04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2d6d08: 0x247200f4  addiu       $s2, $v1, 0xF4
    ctx->pc = 0x2d6d08u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 244));
    // 0x2d6d0c: 0x0  nop
    ctx->pc = 0x2d6d0cu;
    // NOP
label_2d6d10:
    // 0x2d6d10: 0x92e30000  lbu         $v1, 0x0($s7)
    ctx->pc = 0x2d6d10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x2d6d14: 0x283082b  sltu        $at, $s4, $v1
    ctx->pc = 0x2d6d14u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2d6d18: 0x102000b7  beqz        $at, . + 4 + (0xB7 << 2)
    ctx->pc = 0x2D6D18u;
    {
        const bool branch_taken_0x2d6d18 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d6d18) {
            ctx->pc = 0x2D6FF8u;
            goto label_2d6ff8;
        }
    }
    ctx->pc = 0x2D6D20u;
    // 0x2d6d20: 0x92c30045  lbu         $v1, 0x45($s6)
    ctx->pc = 0x2d6d20u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 69)));
    // 0x2d6d24: 0x106000b4  beqz        $v1, . + 4 + (0xB4 << 2)
    ctx->pc = 0x2D6D24u;
    {
        const bool branch_taken_0x2d6d24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d6d24) {
            ctx->pc = 0x2D6FF8u;
            goto label_2d6ff8;
        }
    }
    ctx->pc = 0x2D6D2Cu;
    // 0x2d6d2c: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2d6d2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2d6d30: 0x8e640114  lw          $a0, 0x114($s3)
    ctx->pc = 0x2d6d30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 276)));
    // 0x2d6d34: 0xa4082a  slt         $at, $a1, $a0
    ctx->pc = 0x2d6d34u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2d6d38: 0x142000a9  bnez        $at, . + 4 + (0xA9 << 2)
    ctx->pc = 0x2D6D38u;
    {
        const bool branch_taken_0x2d6d38 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D6D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6D38u;
        // 0x2d6d3c: 0x28a10c81  slti        $at, $a1, 0xC81 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3201) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6d38) {
            ctx->pc = 0x2D6FE0u;
            goto label_2d6fe0;
        }
    }
    ctx->pc = 0x2D6D40u;
    // 0x2d6d40: 0x1420001b  bnez        $at, . + 4 + (0x1B << 2)
    ctx->pc = 0x2D6D40u;
    {
        const bool branch_taken_0x2d6d40 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D6D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6D40u;
        // 0x2d6d44: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6d40) {
            ctx->pc = 0x2D6DB0u;
            goto label_2d6db0;
        }
    }
    ctx->pc = 0x2D6D48u;
    // 0x2d6d48: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2d6d48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2d6d4c: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x2d6d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x2d6d50: 0x45001a  div         $zero, $v0, $a1
    ctx->pc = 0x2d6d50u;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2d6d54: 0x0  nop
    ctx->pc = 0x2d6d54u;
    // NOP
    // 0x2d6d58: 0x0  nop
    ctx->pc = 0x2d6d58u;
    // NOP
    // 0x2d6d5c: 0x1012  mflo        $v0
    ctx->pc = 0x2d6d5cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2d6d60: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2d6d60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2d6d64: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2d6d64u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2d6d68: 0x28430140  slti        $v1, $v0, 0x140
    ctx->pc = 0x2d6d68u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)320) ? 1 : 0);
    // 0x2d6d6c: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D6D6Cu;
    {
        const bool branch_taken_0x2d6d6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D6D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6D6Cu;
        // 0x2d6d70: 0x85082a  slt         $at, $a0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6d6c) {
            ctx->pc = 0x2D6D88u;
            goto label_2d6d88;
        }
    }
    ctx->pc = 0x2D6D74u;
    // 0x2d6d74: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D6D74u;
    {
        const bool branch_taken_0x2d6d74 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d6d74) {
            ctx->pc = 0x2D6D88u;
            goto label_2d6d88;
        }
    }
    ctx->pc = 0x2D6D7Cu;
    // 0x2d6d7c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2d6d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2d6d80: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2d6d80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2d6d84: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2d6d84u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2d6d88:
    // 0x2d6d88: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x2d6d88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2d6d8c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2d6d8cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2d6d90: 0x1c600013  bgtz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x2D6D90u;
    {
        const bool branch_taken_0x2d6d90 = (GPR_S64(ctx, 3) > 0);
        if (branch_taken_0x2d6d90) {
            ctx->pc = 0x2D6DE0u;
            goto label_2d6de0;
        }
    }
    ctx->pc = 0x2D6D98u;
    // 0x2d6d98: 0x18800011  blez        $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2D6D98u;
    {
        const bool branch_taken_0x2d6d98 = (GPR_S64(ctx, 4) <= 0);
        if (branch_taken_0x2d6d98) {
            ctx->pc = 0x2D6DE0u;
            goto label_2d6de0;
        }
    }
    ctx->pc = 0x2D6DA0u;
    // 0x2d6da0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2d6da0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2d6da4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2d6da4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2d6da8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2D6DA8u;
    {
        const bool branch_taken_0x2d6da8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D6DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6DA8u;
        // 0x2d6dac: 0x2143f  dsra32      $v0, $v0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6da8) {
            ctx->pc = 0x2D6DE0u;
            goto label_2d6de0;
        }
    }
    ctx->pc = 0x2D6DB0u;
label_2d6db0:
    // 0x2d6db0: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x2d6db0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
    // 0x2d6db4: 0x34426667  ori         $v0, $v0, 0x6667
    ctx->pc = 0x2d6db4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
    // 0x2d6db8: 0x41fc2  srl         $v1, $a0, 31
    ctx->pc = 0x2d6db8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x2d6dbc: 0x440018  mult        $zero, $v0, $a0
    ctx->pc = 0x2d6dbcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x2d6dc0: 0x0  nop
    ctx->pc = 0x2d6dc0u;
    // NOP
    // 0x2d6dc4: 0x0  nop
    ctx->pc = 0x2d6dc4u;
    // NOP
    // 0x2d6dc8: 0x1010  mfhi        $v0
    ctx->pc = 0x2d6dc8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x2d6dcc: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x2d6dccu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x2d6dd0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d6dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d6dd4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2d6dd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2d6dd8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2d6dd8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2d6ddc: 0x0  nop
    ctx->pc = 0x2d6ddcu;
    // NOP
label_2d6de0:
    // 0x2d6de0: 0x8ec30054  lw          $v1, 0x54($s6)
    ctx->pc = 0x2d6de0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 84)));
    // 0x2d6de4: 0x2a31824  and         $v1, $s5, $v1
    ctx->pc = 0x2d6de4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & GPR_U64(ctx, 3));
    // 0x2d6de8: 0x10600063  beqz        $v1, . + 4 + (0x63 << 2)
    ctx->pc = 0x2D6DE8u;
    {
        const bool branch_taken_0x2d6de8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D6DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6DE8u;
        // 0x2d6dec: 0x3c033f80  lui         $v1, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6de8) {
            ctx->pc = 0x2D6F78u;
            goto label_2d6f78;
        }
    }
    ctx->pc = 0x2D6DF0u;
    // 0x2d6df0: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2d6df0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2d6df4: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x2d6df4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2d6df8: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x2d6df8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x2d6dfc: 0x8ec60050  lw          $a2, 0x50($s6)
    ctx->pc = 0x2d6dfcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 80)));
    // 0x2d6e00: 0x24846540  addiu       $a0, $a0, 0x6540
    ctx->pc = 0x2d6e00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25920));
    // 0x2d6e04: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x2d6e04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x2d6e08: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x2d6e08u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2d6e0c: 0x3c03437e  lui         $v1, 0x437E
    ctx->pc = 0x2d6e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17278 << 16));
    // 0x2d6e10: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2d6e10u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d6e14: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x2d6e14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x2d6e18: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2d6e18u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d6e1c: 0x619c0  sll         $v1, $a2, 7
    ctx->pc = 0x2d6e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 7));
    // 0x2d6e20: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x2d6e20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2d6e24: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2d6e24u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2d6e28: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x2d6e28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x2d6e2c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2d6e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2d6e30: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2d6e30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2d6e34: 0xc4640000  lwc1        $f4, 0x0($v1)
    ctx->pc = 0x2d6e34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2d6e38: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x2d6e38u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x2d6e3c: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x2d6e3cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x2d6e40: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2d6e40u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2d6e44: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2d6e44u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d6e48: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2D6E48u;
    {
        const bool branch_taken_0x2d6e48 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D6E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6E48u;
        // 0x2d6e4c: 0x24a560fc  addiu       $a1, $a1, 0x60FC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24828));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6e48) {
            ctx->pc = 0x2D6E60u;
            goto label_2d6e60;
        }
    }
    ctx->pc = 0x2D6E50u;
    // 0x2d6e50: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2d6e50u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2d6e54: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2d6e54u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2d6e58: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2D6E58u;
    {
        const bool branch_taken_0x2d6e58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D6E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6E58u;
        // 0x2d6e5c: 0x94a30016  lhu         $v1, 0x16($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6e58) {
            ctx->pc = 0x2D6E7Cu;
            goto label_2d6e7c;
        }
    }
    ctx->pc = 0x2D6E60u;
label_2d6e60:
    // 0x2d6e60: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2d6e60u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2d6e64: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2d6e64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x2d6e68: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2d6e68u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2d6e6c: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2d6e6cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2d6e70: 0x0  nop
    ctx->pc = 0x2d6e70u;
    // NOP
    // 0x2d6e74: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2d6e74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2d6e78: 0x94a30016  lhu         $v1, 0x16($a1)
    ctx->pc = 0x2d6e78u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 22)));
label_2d6e7c:
    // 0x2d6e7c: 0x1060001e  beqz        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x2D6E7Cu;
    {
        const bool branch_taken_0x2d6e7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D6E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6E7Cu;
        // 0x2d6e80: 0x308400ff  andi        $a0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6e7c) {
            ctx->pc = 0x2D6EF8u;
            goto label_2d6ef8;
        }
    }
    ctx->pc = 0x2D6E84u;
    // 0x2d6e84: 0x84a90004  lh          $t1, 0x4($a1)
    ctx->pc = 0x2d6e84u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2d6e88: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2d6e88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2d6e8c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2d6e8cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2d6e90: 0x84ac0006  lh          $t4, 0x6($a1)
    ctx->pc = 0x2d6e90u;
    SET_GPR_S32(ctx, 12, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x2d6e94: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2d6e94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2d6e98: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x2d6e98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2d6e9c: 0x2343c  dsll32      $a2, $v0, 16
    ctx->pc = 0x2d6e9cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2d6ea0: 0x8caa0000  lw          $t2, 0x0($a1)
    ctx->pc = 0x2d6ea0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2d6ea4: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x2d6ea4u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x2d6ea8: 0x3c02ff00  lui         $v0, 0xFF00
    ctx->pc = 0x2d6ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
    // 0x2d6eac: 0x344700ff  ori         $a3, $v0, 0xFF
    ctx->pc = 0x2d6eacu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)255);
    // 0x2d6eb0: 0x84a80008  lh          $t0, 0x8($a1)
    ctx->pc = 0x2d6eb0u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2d6eb4: 0x1263021  addu        $a2, $t1, $a2
    ctx->pc = 0x2d6eb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
    // 0x2d6eb8: 0x41a00  sll         $v1, $a0, 8
    ctx->pc = 0x2d6eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x2d6ebc: 0x84a9000a  lh          $t1, 0xA($a1)
    ctx->pc = 0x2d6ebcu;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 10)));
    // 0x2d6ec0: 0x41400  sll         $v0, $a0, 16
    ctx->pc = 0x2d6ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x2d6ec4: 0x6343c  dsll32      $a2, $a2, 16
    ctx->pc = 0x2d6ec4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 16));
    // 0x2d6ec8: 0x1916021  addu        $t4, $t4, $s1
    ctx->pc = 0x2d6ec8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 17)));
    // 0x2d6ecc: 0x1475024  and         $t2, $t2, $a3
    ctx->pc = 0x2d6eccu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 7));
    // 0x2d6ed0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2d6ed0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6ed4: 0xc3c3c  dsll32      $a3, $t4, 16
    ctx->pc = 0x2d6ed4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 12) << (32 + 16));
    // 0x2d6ed8: 0x1431825  or          $v1, $t2, $v1
    ctx->pc = 0x2d6ed8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) | GPR_U64(ctx, 3));
    // 0x2d6edc: 0x240b001a  addiu       $t3, $zero, 0x1A
    ctx->pc = 0x2d6edcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x2d6ee0: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x2d6ee0u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x2d6ee4: 0x73c3f  dsra32      $a3, $a3, 16
    ctx->pc = 0x2d6ee4u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    // 0x2d6ee8: 0xc0b506c  jal         func_2D41B0
    ctx->pc = 0x2D6EE8u;
    SET_GPR_U32(ctx, 31, 0x2D6EF0u);
    ctx->pc = 0x2D6EECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6EE8u;
    // 0x2d6eec: 0x435025  or          $t2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D41B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D41B0u, 0x2D6EE8u, 0x2D6EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6EF0u;
label_2d6ef0:
    // 0x2d6ef0: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x2D6EF0u;
    {
        const bool branch_taken_0x2d6ef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d6ef0) {
            ctx->pc = 0x2D6FE0u;
            goto label_2d6fe0;
        }
    }
    ctx->pc = 0x2D6EF8u;
label_2d6ef8:
    // 0x2d6ef8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2d6ef8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2d6efc: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x2d6efcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2d6f00: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2d6f00u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2d6f04: 0x33600  sll         $a2, $v1, 24
    ctx->pc = 0x2d6f04u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x2d6f08: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2d6f08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2d6f0c: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x2d6f0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2d6f10: 0x8ca70000  lw          $a3, 0x0($a1)
    ctx->pc = 0x2d6f10u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2d6f14: 0x8ec20038  lw          $v0, 0x38($s6)
    ctx->pc = 0x2d6f14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 56)));
    // 0x2d6f18: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2d6f18u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2d6f1c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2d6f1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6f20: 0x240b001a  addiu       $t3, $zero, 0x1A
    ctx->pc = 0x2d6f20u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x2d6f24: 0x73a3c  dsll32      $a3, $a3, 8
    ctx->pc = 0x2d6f24u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 8));
    // 0x2d6f28: 0x73a3e  dsrl32      $a3, $a3, 8
    ctx->pc = 0x2d6f28u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> (32 + 8));
    // 0x2d6f2c: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x2d6f2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x2d6f30: 0xaec20038  sw          $v0, 0x38($s6)
    ctx->pc = 0x2d6f30u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 56), GPR_U32(ctx, 2));
    // 0x2d6f34: 0xe65025  or          $t2, $a3, $a2
    ctx->pc = 0x2d6f34u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x2d6f38: 0x84a60004  lh          $a2, 0x4($a1)
    ctx->pc = 0x2d6f38u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2d6f3c: 0x84a20006  lh          $v0, 0x6($a1)
    ctx->pc = 0x2d6f3cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x2d6f40: 0x84a80008  lh          $t0, 0x8($a1)
    ctx->pc = 0x2d6f40u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2d6f44: 0x84a9000a  lh          $t1, 0xA($a1)
    ctx->pc = 0x2d6f44u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 10)));
    // 0x2d6f48: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x2d6f48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2d6f4c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2d6f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2d6f50: 0x3343c  dsll32      $a2, $v1, 16
    ctx->pc = 0x2d6f50u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2d6f54: 0x23c3c  dsll32      $a3, $v0, 16
    ctx->pc = 0x2d6f54u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2d6f58: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x2d6f58u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x2d6f5c: 0xc0b506c  jal         func_2D41B0
    ctx->pc = 0x2D6F5Cu;
    SET_GPR_U32(ctx, 31, 0x2D6F64u);
    ctx->pc = 0x2D6F60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6F5Cu;
    // 0x2d6f60: 0x73c3f  dsra32      $a3, $a3, 16 (Delay Slot)
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D41B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D41B0u, 0x2D6F5Cu, 0x2D6F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6F64u;
label_2d6f64:
    // 0x2d6f64: 0x8ec40038  lw          $a0, 0x38($s6)
    ctx->pc = 0x2d6f64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 56)));
    // 0x2d6f68: 0x2403fffb  addiu       $v1, $zero, -0x5
    ctx->pc = 0x2d6f68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x2d6f6c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2d6f6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2d6f70: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x2D6F70u;
    {
        const bool branch_taken_0x2d6f70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D6F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6F70u;
        // 0x2d6f74: 0xaec30038  sw          $v1, 0x38($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 56), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6f70) {
            ctx->pc = 0x2D6FE0u;
            goto label_2d6fe0;
        }
    }
    ctx->pc = 0x2D6F78u;
label_2d6f78:
    // 0x2d6f78: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d6f78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d6f7c: 0x842360e4  lh          $v1, 0x60E4($at)
    ctx->pc = 0x2d6f7cu;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x4E60E4u));
    // 0x2d6f80: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2d6f80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2d6f84: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2d6f84u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2d6f88: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x2d6f88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x2d6f8c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2d6f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2d6f90: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2d6f90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6f94: 0x2343c  dsll32      $a2, $v0, 16
    ctx->pc = 0x2d6f94u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2d6f98: 0x24a560e0  addiu       $a1, $a1, 0x60E0
    ctx->pc = 0x2d6f98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24800));
    // 0x2d6f9c: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x2d6f9cu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x2d6fa0: 0x240b001a  addiu       $t3, $zero, 0x1A
    ctx->pc = 0x2d6fa0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x2d6fa4: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d6fa4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d6fa8: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x2d6fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2d6fac: 0x842260e6  lh          $v0, 0x60E6($at)
    ctx->pc = 0x2d6facu;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x4E60E6u));
    // 0x2d6fb0: 0x3343c  dsll32      $a2, $v1, 16
    ctx->pc = 0x2d6fb0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2d6fb4: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x2d6fb4u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x2d6fb8: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d6fb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d6fbc: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2d6fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2d6fc0: 0x842860e8  lh          $t0, 0x60E8($at)
    ctx->pc = 0x2d6fc0u;
    SET_GPR_S32(ctx, 8, (int16_t)FAST_READ16(0x4E60E8u));
    // 0x2d6fc4: 0x23c3c  dsll32      $a3, $v0, 16
    ctx->pc = 0x2d6fc4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2d6fc8: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d6fc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d6fcc: 0x842960ea  lh          $t1, 0x60EA($at)
    ctx->pc = 0x2d6fccu;
    SET_GPR_S32(ctx, 9, (int16_t)FAST_READ16(0x4E60EAu));
    // 0x2d6fd0: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d6fd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d6fd4: 0x8c2a60e0  lw          $t2, 0x60E0($at)
    ctx->pc = 0x2d6fd4u;
    SET_GPR_S32(ctx, 10, (int32_t)FAST_READ32(0x4E60E0u));
    // 0x2d6fd8: 0xc0b506c  jal         func_2D41B0
    ctx->pc = 0x2D6FD8u;
    SET_GPR_U32(ctx, 31, 0x2D6FE0u);
    ctx->pc = 0x2D6FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6FD8u;
    // 0x2d6fdc: 0x73c3f  dsra32      $a3, $a3, 16 (Delay Slot)
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D41B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D41B0u, 0x2D6FD8u, 0x2D6FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6FE0u;
label_2d6fe0:
    // 0x2d6fe0: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2d6fe0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x2d6fe4: 0x2e830003  sltiu       $v1, $s4, 0x3
    ctx->pc = 0x2d6fe4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x2d6fe8: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x2d6fe8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x2d6fec: 0x1460ff48  bnez        $v1, . + 4 + (-0xB8 << 2)
    ctx->pc = 0x2D6FECu;
    {
        const bool branch_taken_0x2d6fec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D6FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6FECu;
        // 0x2d6ff0: 0x15a840  sll         $s5, $s5, 1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6fec) {
            ctx->pc = 0x2D6D10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d6d10;
        }
    }
    ctx->pc = 0x2D6FF4u;
    // 0x2d6ff4: 0x0  nop
    ctx->pc = 0x2d6ff4u;
    // NOP
label_2d6ff8:
    // 0x2d6ff8: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x2d6ff8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2d6ffc: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2d6ffcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2d7000: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2d7000u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2d7004: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2d7004u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d7008: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2d7008u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d700c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2d700cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d7010: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2d7010u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d7014: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d7014u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d7018: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d7018u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d701c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D701Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D7020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D701Cu;
        // 0x2d7020: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D701Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D7024u;
}
