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

// Function: sub_002D5A30
// Address: 0x2d5a30 - 0x2d6174
void sub_002D5A30_0x2d5a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D5A30_0x2d5a30");
#endif

    switch (ctx->pc) {
        case 0x2d5d4cu: goto label_2d5d4c;
        case 0x2d5db8u: goto label_2d5db8;
        case 0x2d5e38u: goto label_2d5e38;
        case 0x2d5e9cu: goto label_2d5e9c;
        case 0x2d5f0cu: goto label_2d5f0c;
        case 0x2d602cu: goto label_2d602c;
        case 0x2d6094u: goto label_2d6094;
        case 0x2d60f4u: goto label_2d60f4;
        case 0x2d6148u: goto label_2d6148;
        default: break;
    }

    ctx->pc = 0x2d5a30u;

    // 0x2d5a30: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2d5a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2d5a34: 0x30e300ff  andi        $v1, $a3, 0xFF
    ctx->pc = 0x2d5a34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x2d5a38: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x2d5a38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2d5a3c: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x2d5a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
    // 0x2d5a40: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2d5a40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x2d5a44: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2d5a44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2d5a48: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2d5a48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2d5a4c: 0x344e6667  ori         $t6, $v0, 0x6667
    ctx->pc = 0x2d5a4cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
    // 0x2d5a50: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2d5a50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2d5a54: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x2d5a54u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5a58: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2d5a58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2d5a5c: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x2d5a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2d5a60: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2d5a60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2d5a64: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2d5a64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2d5a68: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d5a68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2d5a6c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d5a6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d5a70: 0x8c44008c  lw          $a0, 0x8C($v0)
    ctx->pc = 0x2d5a70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
    // 0x2d5a74: 0x8c4800f4  lw          $t0, 0xF4($v0)
    ctx->pc = 0x2d5a74u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 244)));
    // 0x2d5a78: 0x8c4300ec  lw          $v1, 0xEC($v0)
    ctx->pc = 0x2d5a78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 236)));
    // 0x2d5a7c: 0x1c40018  mult        $zero, $t6, $a0
    ctx->pc = 0x2d5a7cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x2d5a80: 0x46fc2  srl         $t5, $a0, 31
    ctx->pc = 0x2d5a80u;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x2d5a84: 0x85fc2  srl         $t3, $t0, 31
    ctx->pc = 0x2d5a84u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 8), 31));
    // 0x2d5a88: 0x29010c81  slti        $at, $t0, 0xC81
    ctx->pc = 0x2d5a88u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)3201) ? 1 : 0);
    // 0x2d5a8c: 0x8c42010c  lw          $v0, 0x10C($v0)
    ctx->pc = 0x2d5a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 268)));
    // 0x2d5a90: 0x367c2  srl         $t4, $v1, 31
    ctx->pc = 0x2d5a90u;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x2d5a94: 0x4810  mfhi        $t1
    ctx->pc = 0x2d5a94u;
    SET_GPR_U64(ctx, 9, ctx->hi);
    // 0x2d5a98: 0x1c30018  mult        $zero, $t6, $v1
    ctx->pc = 0x2d5a98u;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x2d5a9c: 0x94883  sra         $t1, $t1, 2
    ctx->pc = 0x2d5a9cu;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 9), 2));
    // 0x2d5aa0: 0x12da821  addu        $s5, $t1, $t5
    ctx->pc = 0x2d5aa0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 13)));
    // 0x2d5aa4: 0x257c2  srl         $t2, $v0, 31
    ctx->pc = 0x2d5aa4u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x2d5aa8: 0x4810  mfhi        $t1
    ctx->pc = 0x2d5aa8u;
    SET_GPR_U64(ctx, 9, ctx->hi);
    // 0x2d5aac: 0x1c80018  mult        $zero, $t6, $t0
    ctx->pc = 0x2d5aacu;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x2d5ab0: 0x94883  sra         $t1, $t1, 2
    ctx->pc = 0x2d5ab0u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 9), 2));
    // 0x2d5ab4: 0x12ca021  addu        $s4, $t1, $t4
    ctx->pc = 0x2d5ab4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 12)));
    // 0x2d5ab8: 0x4810  mfhi        $t1
    ctx->pc = 0x2d5ab8u;
    SET_GPR_U64(ctx, 9, ctx->hi);
    // 0x2d5abc: 0x1c20018  mult        $zero, $t6, $v0
    ctx->pc = 0x2d5abcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x2d5ac0: 0x94883  sra         $t1, $t1, 2
    ctx->pc = 0x2d5ac0u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 9), 2));
    // 0x2d5ac4: 0x12b9821  addu        $s3, $t1, $t3
    ctx->pc = 0x2d5ac4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 11)));
    // 0x2d5ac8: 0x4810  mfhi        $t1
    ctx->pc = 0x2d5ac8u;
    SET_GPR_U64(ctx, 9, ctx->hi);
    // 0x2d5acc: 0x94883  sra         $t1, $t1, 2
    ctx->pc = 0x2d5accu;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 9), 2));
    // 0x2d5ad0: 0x12a4821  addu        $t1, $t1, $t2
    ctx->pc = 0x2d5ad0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x2d5ad4: 0x9943c  dsll32      $s2, $t1, 16
    ctx->pc = 0x2d5ad4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 9) << (32 + 16));
    // 0x2d5ad8: 0x14200049  bnez        $at, . + 4 + (0x49 << 2)
    ctx->pc = 0x2D5AD8u;
    {
        const bool branch_taken_0x2d5ad8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D5ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5AD8u;
        // 0x2d5adc: 0x12943f  dsra32      $s2, $s2, 16 (Delay Slot)
        SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5ad8) {
            ctx->pc = 0x2D5C00u;
            goto label_2d5c00;
        }
    }
    ctx->pc = 0x2D5AE0u;
    // 0x2d5ae0: 0x45080  sll         $t2, $a0, 2
    ctx->pc = 0x2d5ae0u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2d5ae4: 0x34880  sll         $t1, $v1, 2
    ctx->pc = 0x2d5ae4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2d5ae8: 0x1445021  addu        $t2, $t2, $a0
    ctx->pc = 0x2d5ae8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
    // 0x2d5aec: 0x1234821  addu        $t1, $t1, $v1
    ctx->pc = 0x2d5aecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x2d5af0: 0xa5180  sll         $t2, $t2, 6
    ctx->pc = 0x2d5af0u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 6));
    // 0x2d5af4: 0x94980  sll         $t1, $t1, 6
    ctx->pc = 0x2d5af4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 6));
    // 0x2d5af8: 0x148001a  div         $zero, $t2, $t0
    ctx->pc = 0x2d5af8u;
    { int32_t divisor = GPR_S32(ctx, 8);    int32_t dividend = GPR_S32(ctx, 10);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2d5afc: 0x0  nop
    ctx->pc = 0x2d5afcu;
    // NOP
    // 0x2d5b00: 0x0  nop
    ctx->pc = 0x2d5b00u;
    // NOP
    // 0x2d5b04: 0xa812  mflo        $s5
    ctx->pc = 0x2d5b04u;
    SET_GPR_U64(ctx, 21, ctx->lo);
    // 0x2d5b08: 0x85080  sll         $t2, $t0, 2
    ctx->pc = 0x2d5b08u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x2d5b0c: 0x1485021  addu        $t2, $t2, $t0
    ctx->pc = 0x2d5b0cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 8)));
    // 0x2d5b10: 0xa5180  sll         $t2, $t2, 6
    ctx->pc = 0x2d5b10u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 6));
    // 0x2d5b14: 0x7128001a  div1        $zero, $t1, $t0
    ctx->pc = 0x2d5b14u;
    { int32_t divisor = GPR_S32(ctx, 8); int32_t dividend = GPR_S32(ctx, 9); if (divisor != 0) {     if (divisor == -1 && dividend == INT32_MIN) {         ctx->lo1 = (uint64_t)(int64_t)INT32_MIN; ctx->hi1 = 0;     } else {         ctx->lo1 = (uint64_t)(int64_t)(dividend / divisor);         ctx->hi1 = (uint64_t)(int64_t)(dividend % divisor);     } } else {     ctx->lo1 = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi1 = (uint64_t)(int64_t)dividend; } }
    // 0x2d5b18: 0x0  nop
    ctx->pc = 0x2d5b18u;
    // NOP
    // 0x2d5b1c: 0x0  nop
    ctx->pc = 0x2d5b1cu;
    // NOP
    // 0x2d5b20: 0x7000a012  mflo1       $s4
    ctx->pc = 0x2d5b20u;
    SET_GPR_U64(ctx, 20, ctx->lo1);
    // 0x2d5b24: 0x24880  sll         $t1, $v0, 2
    ctx->pc = 0x2d5b24u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2d5b28: 0x148001a  div         $zero, $t2, $t0
    ctx->pc = 0x2d5b28u;
    { int32_t divisor = GPR_S32(ctx, 8);    int32_t dividend = GPR_S32(ctx, 10);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2d5b2c: 0x1224821  addu        $t1, $t1, $v0
    ctx->pc = 0x2d5b2cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x2d5b30: 0x94980  sll         $t1, $t1, 6
    ctx->pc = 0x2d5b30u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 6));
    // 0x2d5b34: 0x9812  mflo        $s3
    ctx->pc = 0x2d5b34u;
    SET_GPR_U64(ctx, 19, ctx->lo);
    // 0x2d5b38: 0x7128001a  div1        $zero, $t1, $t0
    ctx->pc = 0x2d5b38u;
    { int32_t divisor = GPR_S32(ctx, 8); int32_t dividend = GPR_S32(ctx, 9); if (divisor != 0) {     if (divisor == -1 && dividend == INT32_MIN) {         ctx->lo1 = (uint64_t)(int64_t)INT32_MIN; ctx->hi1 = 0;     } else {         ctx->lo1 = (uint64_t)(int64_t)(dividend / divisor);         ctx->hi1 = (uint64_t)(int64_t)(dividend % divisor);     } } else {     ctx->lo1 = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi1 = (uint64_t)(int64_t)dividend; } }
    // 0x2d5b3c: 0x0  nop
    ctx->pc = 0x2d5b3cu;
    // NOP
    // 0x2d5b40: 0x0  nop
    ctx->pc = 0x2d5b40u;
    // NOP
    // 0x2d5b44: 0x70004812  mflo1       $t1
    ctx->pc = 0x2d5b44u;
    SET_GPR_U64(ctx, 9, ctx->lo1);
    // 0x2d5b48: 0x9943c  dsll32      $s2, $t1, 16
    ctx->pc = 0x2d5b48u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 9) << (32 + 16));
    // 0x2d5b4c: 0x2b3482a  slt         $t1, $s5, $s3
    ctx->pc = 0x2d5b4cu;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x2d5b50: 0x15200005  bnez        $t1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D5B50u;
    {
        const bool branch_taken_0x2d5b50 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D5B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5B50u;
        // 0x2d5b54: 0x12943f  dsra32      $s2, $s2, 16 (Delay Slot)
        SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5b50) {
            ctx->pc = 0x2D5B68u;
            goto label_2d5b68;
        }
    }
    ctx->pc = 0x2D5B58u;
    // 0x2d5b58: 0x88082a  slt         $at, $a0, $t0
    ctx->pc = 0x2d5b58u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x2d5b5c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x2D5B5Cu;
    {
        const bool branch_taken_0x2d5b5c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d5b5c) {
            ctx->pc = 0x2D5B68u;
            goto label_2d5b68;
        }
    }
    ctx->pc = 0x2D5B64u;
    // 0x2d5b64: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x2d5b64u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
label_2d5b68:
    // 0x2d5b68: 0x1ea00005  bgtz        $s5, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D5B68u;
    {
        const bool branch_taken_0x2d5b68 = (GPR_S64(ctx, 21) > 0);
        if (branch_taken_0x2d5b68) {
            ctx->pc = 0x2D5B80u;
            goto label_2d5b80;
        }
    }
    ctx->pc = 0x2D5B70u;
    // 0x2d5b70: 0x18800003  blez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D5B70u;
    {
        const bool branch_taken_0x2d5b70 = (GPR_S64(ctx, 4) <= 0);
        if (branch_taken_0x2d5b70) {
            ctx->pc = 0x2D5B80u;
            goto label_2d5b80;
        }
    }
    ctx->pc = 0x2D5B78u;
    // 0x2d5b78: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x2d5b78u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x2d5b7c: 0x0  nop
    ctx->pc = 0x2d5b7cu;
    // NOP
label_2d5b80:
    // 0x2d5b80: 0x293482a  slt         $t1, $s4, $s3
    ctx->pc = 0x2d5b80u;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x2d5b84: 0x15200004  bnez        $t1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D5B84u;
    {
        const bool branch_taken_0x2d5b84 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D5B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5B84u;
        // 0x2d5b88: 0x68082a  slt         $at, $v1, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5b84) {
            ctx->pc = 0x2D5B98u;
            goto label_2d5b98;
        }
    }
    ctx->pc = 0x2D5B8Cu;
    // 0x2d5b8c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x2D5B8Cu;
    {
        const bool branch_taken_0x2d5b8c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d5b8c) {
            ctx->pc = 0x2D5B98u;
            goto label_2d5b98;
        }
    }
    ctx->pc = 0x2D5B94u;
    // 0x2d5b94: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x2d5b94u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
label_2d5b98:
    // 0x2d5b98: 0x1e800005  bgtz        $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D5B98u;
    {
        const bool branch_taken_0x2d5b98 = (GPR_S64(ctx, 20) > 0);
        if (branch_taken_0x2d5b98) {
            ctx->pc = 0x2D5BB0u;
            goto label_2d5bb0;
        }
    }
    ctx->pc = 0x2D5BA0u;
    // 0x2d5ba0: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D5BA0u;
    {
        const bool branch_taken_0x2d5ba0 = (GPR_S64(ctx, 3) <= 0);
        if (branch_taken_0x2d5ba0) {
            ctx->pc = 0x2D5BB0u;
            goto label_2d5bb0;
        }
    }
    ctx->pc = 0x2D5BA8u;
    // 0x2d5ba8: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2d5ba8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x2d5bac: 0x0  nop
    ctx->pc = 0x2d5bacu;
    // NOP
label_2d5bb0:
    // 0x2d5bb0: 0x124c3c  dsll32      $t1, $s2, 16
    ctx->pc = 0x2d5bb0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 18) << (32 + 16));
    // 0x2d5bb4: 0x94c3f  dsra32      $t1, $t1, 16
    ctx->pc = 0x2d5bb4u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 16));
    // 0x2d5bb8: 0x133482a  slt         $t1, $t1, $s3
    ctx->pc = 0x2d5bb8u;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x2d5bbc: 0x15200006  bnez        $t1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D5BBCu;
    {
        const bool branch_taken_0x2d5bbc = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D5BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5BBCu;
        // 0x2d5bc0: 0x48082a  slt         $at, $v0, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5bbc) {
            ctx->pc = 0x2D5BD8u;
            goto label_2d5bd8;
        }
    }
    ctx->pc = 0x2D5BC4u;
    // 0x2d5bc4: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D5BC4u;
    {
        const bool branch_taken_0x2d5bc4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D5BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5BC4u;
        // 0x2d5bc8: 0x2648ffff  addiu       $t0, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5bc4) {
            ctx->pc = 0x2D5BD8u;
            goto label_2d5bd8;
        }
    }
    ctx->pc = 0x2D5BCCu;
    // 0x2d5bcc: 0x8943c  dsll32      $s2, $t0, 16
    ctx->pc = 0x2d5bccu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 8) << (32 + 16));
    // 0x2d5bd0: 0x12943f  dsra32      $s2, $s2, 16
    ctx->pc = 0x2d5bd0u;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 16));
    // 0x2d5bd4: 0x0  nop
    ctx->pc = 0x2d5bd4u;
    // NOP
label_2d5bd8:
    // 0x2d5bd8: 0x12443c  dsll32      $t0, $s2, 16
    ctx->pc = 0x2d5bd8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 18) << (32 + 16));
    // 0x2d5bdc: 0x8443f  dsra32      $t0, $t0, 16
    ctx->pc = 0x2d5bdcu;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
    // 0x2d5be0: 0x1d000007  bgtz        $t0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D5BE0u;
    {
        const bool branch_taken_0x2d5be0 = (GPR_S64(ctx, 8) > 0);
        if (branch_taken_0x2d5be0) {
            ctx->pc = 0x2D5C00u;
            goto label_2d5c00;
        }
    }
    ctx->pc = 0x2D5BE8u;
    // 0x2d5be8: 0x18400005  blez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D5BE8u;
    {
        const bool branch_taken_0x2d5be8 = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x2d5be8) {
            ctx->pc = 0x2D5C00u;
            goto label_2d5c00;
        }
    }
    ctx->pc = 0x2D5BF0u;
    // 0x2d5bf0: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x2d5bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2d5bf4: 0x2943c  dsll32      $s2, $v0, 16
    ctx->pc = 0x2d5bf4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2d5bf8: 0x12943f  dsra32      $s2, $s2, 16
    ctx->pc = 0x2d5bf8u;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 16));
    // 0x2d5bfc: 0x0  nop
    ctx->pc = 0x2d5bfcu;
    // NOP
label_2d5c00:
    // 0x2d5c00: 0x30f700ff  andi        $s7, $a3, 0xFF
    ctx->pc = 0x2d5c00u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x2d5c04: 0x1ae00002  blez        $s7, . + 4 + (0x2 << 2)
    ctx->pc = 0x2D5C04u;
    {
        const bool branch_taken_0x2d5c04 = (GPR_S64(ctx, 23) <= 0);
        if (branch_taken_0x2d5c04) {
            ctx->pc = 0x2D5C10u;
            goto label_2d5c10;
        }
    }
    ctx->pc = 0x2D5C0Cu;
    // 0x2d5c0c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2d5c0cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d5c10:
    // 0x2d5c10: 0x1240006b  beqz        $s2, . + 4 + (0x6B << 2)
    ctx->pc = 0x2D5C10u;
    {
        const bool branch_taken_0x2d5c10 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d5c10) {
            ctx->pc = 0x2D5DC0u;
            goto label_2d5dc0;
        }
    }
    ctx->pc = 0x2D5C18u;
    // 0x2d5c18: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2d5c18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2d5c1c: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2d5c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2d5c20: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x2d5c20u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2d5c24: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d5c24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d5c28: 0x8ec70050  lw          $a3, 0x50($s6)
    ctx->pc = 0x2d5c28u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 80)));
    // 0x2d5c2c: 0x24846540  addiu       $a0, $a0, 0x6540
    ctx->pc = 0x2d5c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25920));
    // 0x2d5c30: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x2d5c30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x2d5c34: 0x90225f58  lbu         $v0, 0x5F58($at)
    ctx->pc = 0x2d5c34u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x4E5F58u));
    // 0x2d5c38: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2d5c38u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d5c3c: 0x3c03437f  lui         $v1, 0x437F
    ctx->pc = 0x2d5c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17279 << 16));
    // 0x2d5c40: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2d5c40u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d5c44: 0x71a80  sll         $v1, $a3, 10
    ctx->pc = 0x2d5c44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 10));
    // 0x2d5c48: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x2d5c48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2d5c4c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2d5c4cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2d5c50: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x2d5c50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x2d5c54: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2d5c54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2d5c58: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2d5c58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2d5c5c: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x2d5c5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2d5c60: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x2d5c60u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x2d5c64: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D5C64u;
    {
        const bool branch_taken_0x2d5c64 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2D5C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5C64u;
        // 0x2d5c68: 0x46020082  mul.s       $f2, $f0, $f2 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5c64) {
            ctx->pc = 0x2D5C78u;
            goto label_2d5c78;
        }
    }
    ctx->pc = 0x2D5C6Cu;
    // 0x2d5c6c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d5c6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d5c70: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2D5C70u;
    {
        const bool branch_taken_0x2d5c70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D5C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5C70u;
        // 0x2d5c74: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5c70) {
            ctx->pc = 0x2D5C94u;
            goto label_2d5c94;
        }
    }
    ctx->pc = 0x2D5C78u;
label_2d5c78:
    // 0x2d5c78: 0x22042  srl         $a0, $v0, 1
    ctx->pc = 0x2d5c78u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x2d5c7c: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x2d5c7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2d5c80: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2d5c80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2d5c84: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2d5c84u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d5c88: 0x0  nop
    ctx->pc = 0x2d5c88u;
    // NOP
    // 0x2d5c8c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2d5c8cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2d5c90: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2d5c90u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2d5c94:
    // 0x2d5c94: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2d5c94u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2d5c98: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x2d5c98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x2d5c9c: 0x46020042  mul.s       $f1, $f0, $f2
    ctx->pc = 0x2d5c9cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2d5ca0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2d5ca0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d5ca4: 0x0  nop
    ctx->pc = 0x2d5ca4u;
    // NOP
    // 0x2d5ca8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2d5ca8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d5cac: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2D5CACu;
    {
        const bool branch_taken_0x2d5cac = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d5cac) {
            ctx->pc = 0x2D5CC4u;
            goto label_2d5cc4;
        }
    }
    ctx->pc = 0x2D5CB4u;
    // 0x2d5cb4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2d5cb4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2d5cb8: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2d5cb8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2d5cbc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2D5CBCu;
    {
        const bool branch_taken_0x2d5cbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D5CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5CBCu;
        // 0x2d5cc0: 0x68c3c  dsll32      $s1, $a2, 16 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 6) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5cbc) {
            ctx->pc = 0x2D5CE0u;
            goto label_2d5ce0;
        }
    }
    ctx->pc = 0x2D5CC4u;
label_2d5cc4:
    // 0x2d5cc4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2d5cc4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2d5cc8: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2d5cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x2d5ccc: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2d5cccu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2d5cd0: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2d5cd0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2d5cd4: 0x0  nop
    ctx->pc = 0x2d5cd4u;
    // NOP
    // 0x2d5cd8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2d5cd8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2d5cdc: 0x68c3c  dsll32      $s1, $a2, 16
    ctx->pc = 0x2d5cdcu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 6) << (32 + 16));
label_2d5ce0:
    // 0x2d5ce0: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d5ce0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d5ce4: 0x84265f5c  lh          $a2, 0x5F5C($at)
    ctx->pc = 0x2d5ce4u;
    SET_GPR_S32(ctx, 6, (int16_t)FAST_READ16(0x4E5F5Cu));
    // 0x2d5ce8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2d5ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2d5cec: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2d5cecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2d5cf0: 0x5843c  dsll32      $s0, $a1, 16
    ctx->pc = 0x2d5cf0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) << (32 + 16));
    // 0x2d5cf4: 0x22c00  sll         $a1, $v0, 16
    ctx->pc = 0x2d5cf4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x2d5cf8: 0x21a00  sll         $v1, $v0, 8
    ctx->pc = 0x2d5cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2d5cfc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2d5cfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2d5d00: 0x10843f  dsra32      $s0, $s0, 16
    ctx->pc = 0x2d5d00u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
    // 0x2d5d04: 0xa25025  or          $t2, $a1, $v0
    ctx->pc = 0x2d5d04u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x2d5d08: 0x118c3f  dsra32      $s1, $s1, 16
    ctx->pc = 0x2d5d08u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
    // 0x2d5d0c: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x2d5d0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x2d5d10: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2d5d10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5d14: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d5d14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d5d18: 0xd01021  addu        $v0, $a2, $s0
    ctx->pc = 0x2d5d18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x2d5d1c: 0x84275f5e  lh          $a3, 0x5F5E($at)
    ctx->pc = 0x2d5d1cu;
    SET_GPR_S32(ctx, 7, (int16_t)FAST_READ16(0x4E5F5Eu));
    // 0x2d5d20: 0x2343c  dsll32      $a2, $v0, 16
    ctx->pc = 0x2d5d20u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2d5d24: 0x24a55f58  addiu       $a1, $a1, 0x5F58
    ctx->pc = 0x2d5d24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24408));
    // 0x2d5d28: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x2d5d28u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5d2c: 0x240b001a  addiu       $t3, $zero, 0x1A
    ctx->pc = 0x2d5d2cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x2d5d30: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x2d5d30u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x2d5d34: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d5d34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d5d38: 0xf11021  addu        $v0, $a3, $s1
    ctx->pc = 0x2d5d38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 17)));
    // 0x2d5d3c: 0x84295f62  lh          $t1, 0x5F62($at)
    ctx->pc = 0x2d5d3cu;
    SET_GPR_S32(ctx, 9, (int16_t)FAST_READ16(0x4E5F62u));
    // 0x2d5d40: 0x23c3c  dsll32      $a3, $v0, 16
    ctx->pc = 0x2d5d40u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2d5d44: 0xc0b506c  jal         func_2D41B0
    ctx->pc = 0x2D5D44u;
    SET_GPR_U32(ctx, 31, 0x2D5D4Cu);
    ctx->pc = 0x2D5D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5D44u;
    // 0x2d5d48: 0x73c3f  dsra32      $a3, $a3, 16 (Delay Slot)
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D41B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D41B0u, 0x2D5D44u, 0x2D5D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5D4Cu;
label_2d5d4c:
    // 0x2d5d4c: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d5d4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d5d50: 0x12243c  dsll32      $a0, $s2, 16
    ctx->pc = 0x2d5d50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) << (32 + 16));
    // 0x2d5d54: 0x84235f08  lh          $v1, 0x5F08($at)
    ctx->pc = 0x2d5d54u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 24328)));
    // 0x2d5d58: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x2d5d58u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x2d5d5c: 0x2a41023  subu        $v0, $s5, $a0
    ctx->pc = 0x2d5d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
    // 0x2d5d60: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x2d5d60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x2d5d64: 0x2443c  dsll32      $t0, $v0, 16
    ctx->pc = 0x2d5d64u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2d5d68: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x2d5d68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x2d5d6c: 0x4343c  dsll32      $a2, $a0, 16
    ctx->pc = 0x2d5d6cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << (32 + 16));
    // 0x2d5d70: 0x8443f  dsra32      $t0, $t0, 16
    ctx->pc = 0x2d5d70u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
    // 0x2d5d74: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x2d5d74u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x2d5d78: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2d5d78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5d7c: 0x24a55f04  addiu       $a1, $a1, 0x5F04
    ctx->pc = 0x2d5d7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24324));
    // 0x2d5d80: 0x240b001a  addiu       $t3, $zero, 0x1A
    ctx->pc = 0x2d5d80u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x2d5d84: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d5d84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d5d88: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x2d5d88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2d5d8c: 0x84225f0a  lh          $v0, 0x5F0A($at)
    ctx->pc = 0x2d5d8cu;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x4E5F0Au));
    // 0x2d5d90: 0x3343c  dsll32      $a2, $v1, 16
    ctx->pc = 0x2d5d90u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2d5d94: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x2d5d94u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x2d5d98: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d5d98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d5d9c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2d5d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2d5da0: 0x84295f0e  lh          $t1, 0x5F0E($at)
    ctx->pc = 0x2d5da0u;
    SET_GPR_S32(ctx, 9, (int16_t)FAST_READ16(0x4E5F0Eu));
    // 0x2d5da4: 0x23c3c  dsll32      $a3, $v0, 16
    ctx->pc = 0x2d5da4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2d5da8: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d5da8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d5dac: 0x8c2a5f04  lw          $t2, 0x5F04($at)
    ctx->pc = 0x2d5dacu;
    SET_GPR_S32(ctx, 10, (int32_t)FAST_READ32(0x4E5F04u));
    // 0x2d5db0: 0xc0b506c  jal         func_2D41B0
    ctx->pc = 0x2D5DB0u;
    SET_GPR_U32(ctx, 31, 0x2D5DB8u);
    ctx->pc = 0x2D5DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5DB0u;
    // 0x2d5db4: 0x73c3f  dsra32      $a3, $a3, 16 (Delay Slot)
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D41B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D41B0u, 0x2D5DB0u, 0x2D5DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5DB8u;
label_2d5db8:
    // 0x2d5db8: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x2D5DB8u;
    {
        const bool branch_taken_0x2d5db8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d5db8) {
            ctx->pc = 0x2D5F10u;
            goto label_2d5f10;
        }
    }
    ctx->pc = 0x2D5DC0u;
label_2d5dc0:
    // 0x2d5dc0: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x2d5dc0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2d5dc4: 0x10200038  beqz        $at, . + 4 + (0x38 << 2)
    ctx->pc = 0x2D5DC4u;
    {
        const bool branch_taken_0x2d5dc4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D5DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5DC4u;
        // 0x2d5dc8: 0x2b4082a  slt         $at, $s5, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5dc4) {
            ctx->pc = 0x2D5EA8u;
            goto label_2d5ea8;
        }
    }
    ctx->pc = 0x2D5DCCu;
    // 0x2d5dcc: 0x10200036  beqz        $at, . + 4 + (0x36 << 2)
    ctx->pc = 0x2D5DCCu;
    {
        const bool branch_taken_0x2d5dcc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d5dcc) {
            ctx->pc = 0x2D5EA8u;
            goto label_2d5ea8;
        }
    }
    ctx->pc = 0x2D5DD4u;
    // 0x2d5dd4: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d5dd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d5dd8: 0x5843c  dsll32      $s0, $a1, 16
    ctx->pc = 0x2d5dd8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) << (32 + 16));
    // 0x2d5ddc: 0x84235f08  lh          $v1, 0x5F08($at)
    ctx->pc = 0x2d5ddcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 24328)));
    // 0x2d5de0: 0x68c3c  dsll32      $s1, $a2, 16
    ctx->pc = 0x2d5de0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 6) << (32 + 16));
    // 0x2d5de4: 0x10843f  dsra32      $s0, $s0, 16
    ctx->pc = 0x2d5de4u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
    // 0x2d5de8: 0x15443c  dsll32      $t0, $s5, 16
    ctx->pc = 0x2d5de8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 21) << (32 + 16));
    // 0x2d5dec: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x2d5decu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x2d5df0: 0x118c3f  dsra32      $s1, $s1, 16
    ctx->pc = 0x2d5df0u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
    // 0x2d5df4: 0x8443f  dsra32      $t0, $t0, 16
    ctx->pc = 0x2d5df4u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
    // 0x2d5df8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2d5df8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5dfc: 0x24a55f04  addiu       $a1, $a1, 0x5F04
    ctx->pc = 0x2d5dfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24324));
    // 0x2d5e00: 0x240b001a  addiu       $t3, $zero, 0x1A
    ctx->pc = 0x2d5e00u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x2d5e04: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d5e04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d5e08: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x2d5e08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2d5e0c: 0x84225f0a  lh          $v0, 0x5F0A($at)
    ctx->pc = 0x2d5e0cu;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x4E5F0Au));
    // 0x2d5e10: 0x3343c  dsll32      $a2, $v1, 16
    ctx->pc = 0x2d5e10u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2d5e14: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x2d5e14u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x2d5e18: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d5e18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d5e1c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2d5e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2d5e20: 0x84295f0e  lh          $t1, 0x5F0E($at)
    ctx->pc = 0x2d5e20u;
    SET_GPR_S32(ctx, 9, (int16_t)FAST_READ16(0x4E5F0Eu));
    // 0x2d5e24: 0x23c3c  dsll32      $a3, $v0, 16
    ctx->pc = 0x2d5e24u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2d5e28: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d5e28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d5e2c: 0x8c2a5f04  lw          $t2, 0x5F04($at)
    ctx->pc = 0x2d5e2cu;
    SET_GPR_S32(ctx, 10, (int32_t)FAST_READ32(0x4E5F04u));
    // 0x2d5e30: 0xc0b506c  jal         func_2D41B0
    ctx->pc = 0x2D5E30u;
    SET_GPR_U32(ctx, 31, 0x2D5E38u);
    ctx->pc = 0x2D5E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5E30u;
    // 0x2d5e34: 0x73c3f  dsra32      $a3, $a3, 16 (Delay Slot)
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D41B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D41B0u, 0x2D5E30u, 0x2D5E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5E38u;
label_2d5e38:
    // 0x2d5e38: 0x2151821  addu        $v1, $s0, $s5
    ctx->pc = 0x2d5e38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
    // 0x2d5e3c: 0x2951023  subu        $v0, $s4, $s5
    ctx->pc = 0x2d5e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 21)));
    // 0x2d5e40: 0x3343c  dsll32      $a2, $v1, 16
    ctx->pc = 0x2d5e40u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2d5e44: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d5e44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d5e48: 0x84235f24  lh          $v1, 0x5F24($at)
    ctx->pc = 0x2d5e48u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x4E5F24u));
    // 0x2d5e4c: 0x2443c  dsll32      $t0, $v0, 16
    ctx->pc = 0x2d5e4cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2d5e50: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x2d5e50u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x2d5e54: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x2d5e54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x2d5e58: 0x8443f  dsra32      $t0, $t0, 16
    ctx->pc = 0x2d5e58u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
    // 0x2d5e5c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2d5e5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5e60: 0x24a55f20  addiu       $a1, $a1, 0x5F20
    ctx->pc = 0x2d5e60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24352));
    // 0x2d5e64: 0x240b001a  addiu       $t3, $zero, 0x1A
    ctx->pc = 0x2d5e64u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x2d5e68: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d5e68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d5e6c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x2d5e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2d5e70: 0x84225f26  lh          $v0, 0x5F26($at)
    ctx->pc = 0x2d5e70u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x4E5F26u));
    // 0x2d5e74: 0x3343c  dsll32      $a2, $v1, 16
    ctx->pc = 0x2d5e74u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2d5e78: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x2d5e78u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x2d5e7c: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d5e7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d5e80: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2d5e80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2d5e84: 0x84295f2a  lh          $t1, 0x5F2A($at)
    ctx->pc = 0x2d5e84u;
    SET_GPR_S32(ctx, 9, (int16_t)FAST_READ16(0x4E5F2Au));
    // 0x2d5e88: 0x23c3c  dsll32      $a3, $v0, 16
    ctx->pc = 0x2d5e88u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2d5e8c: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d5e8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d5e90: 0x8c2a5f20  lw          $t2, 0x5F20($at)
    ctx->pc = 0x2d5e90u;
    SET_GPR_S32(ctx, 10, (int32_t)FAST_READ32(0x4E5F20u));
    // 0x2d5e94: 0xc0b506c  jal         func_2D41B0
    ctx->pc = 0x2D5E94u;
    SET_GPR_U32(ctx, 31, 0x2D5E9Cu);
    ctx->pc = 0x2D5E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5E94u;
    // 0x2d5e98: 0x73c3f  dsra32      $a3, $a3, 16 (Delay Slot)
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D41B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D41B0u, 0x2D5E94u, 0x2D5E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5E9Cu;
label_2d5e9c:
    // 0x2d5e9c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x2D5E9Cu;
    {
        const bool branch_taken_0x2d5e9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d5e9c) {
            ctx->pc = 0x2D5F10u;
            goto label_2d5f10;
        }
    }
    ctx->pc = 0x2D5EA4u;
    // 0x2d5ea4: 0x0  nop
    ctx->pc = 0x2d5ea4u;
    // NOP
label_2d5ea8:
    // 0x2d5ea8: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d5ea8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d5eac: 0x84235f08  lh          $v1, 0x5F08($at)
    ctx->pc = 0x2d5eacu;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x4E5F08u));
    // 0x2d5eb0: 0x5843c  dsll32      $s0, $a1, 16
    ctx->pc = 0x2d5eb0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) << (32 + 16));
    // 0x2d5eb4: 0x68c3c  dsll32      $s1, $a2, 16
    ctx->pc = 0x2d5eb4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 6) << (32 + 16));
    // 0x2d5eb8: 0x10843f  dsra32      $s0, $s0, 16
    ctx->pc = 0x2d5eb8u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
    // 0x2d5ebc: 0x14443c  dsll32      $t0, $s4, 16
    ctx->pc = 0x2d5ebcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 20) << (32 + 16));
    // 0x2d5ec0: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x2d5ec0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x2d5ec4: 0x118c3f  dsra32      $s1, $s1, 16
    ctx->pc = 0x2d5ec4u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
    // 0x2d5ec8: 0x8443f  dsra32      $t0, $t0, 16
    ctx->pc = 0x2d5ec8u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
    // 0x2d5ecc: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2d5eccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5ed0: 0x24a55f04  addiu       $a1, $a1, 0x5F04
    ctx->pc = 0x2d5ed0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24324));
    // 0x2d5ed4: 0x240b001a  addiu       $t3, $zero, 0x1A
    ctx->pc = 0x2d5ed4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x2d5ed8: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d5ed8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d5edc: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x2d5edcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2d5ee0: 0x84225f0a  lh          $v0, 0x5F0A($at)
    ctx->pc = 0x2d5ee0u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x4E5F0Au));
    // 0x2d5ee4: 0x3343c  dsll32      $a2, $v1, 16
    ctx->pc = 0x2d5ee4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2d5ee8: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x2d5ee8u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x2d5eec: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d5eecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d5ef0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2d5ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2d5ef4: 0x84295f0e  lh          $t1, 0x5F0E($at)
    ctx->pc = 0x2d5ef4u;
    SET_GPR_S32(ctx, 9, (int16_t)FAST_READ16(0x4E5F0Eu));
    // 0x2d5ef8: 0x23c3c  dsll32      $a3, $v0, 16
    ctx->pc = 0x2d5ef8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2d5efc: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d5efcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d5f00: 0x8c2a5f04  lw          $t2, 0x5F04($at)
    ctx->pc = 0x2d5f00u;
    SET_GPR_S32(ctx, 10, (int32_t)FAST_READ32(0x4E5F04u));
    // 0x2d5f04: 0xc0b506c  jal         func_2D41B0
    ctx->pc = 0x2D5F04u;
    SET_GPR_U32(ctx, 31, 0x2D5F0Cu);
    ctx->pc = 0x2D5F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5F04u;
    // 0x2d5f08: 0x73c3f  dsra32      $a3, $a3, 16 (Delay Slot)
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D41B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D41B0u, 0x2D5F04u, 0x2D5F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5F0Cu;
label_2d5f0c:
    // 0x2d5f0c: 0x0  nop
    ctx->pc = 0x2d5f0cu;
    // NOP
label_2d5f10:
    // 0x2d5f10: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2d5f10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2d5f14: 0x2e21804  sllv        $v1, $v0, $s7
    ctx->pc = 0x2d5f14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 23) & 0x1F));
    // 0x2d5f18: 0x8ec20054  lw          $v0, 0x54($s6)
    ctx->pc = 0x2d5f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 84)));
    // 0x2d5f1c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2d5f1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2d5f20: 0x10400047  beqz        $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x2D5F20u;
    {
        const bool branch_taken_0x2d5f20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D5F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5F20u;
        // 0x2d5f24: 0x3c023f00  lui         $v0, 0x3F00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5f20) {
            ctx->pc = 0x2D6040u;
            goto label_2d6040;
        }
    }
    ctx->pc = 0x2D5F28u;
    // 0x2d5f28: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2d5f28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2d5f2c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x2d5f2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2d5f30: 0x8ec50050  lw          $a1, 0x50($s6)
    ctx->pc = 0x2d5f30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 80)));
    // 0x2d5f34: 0x8ec30038  lw          $v1, 0x38($s6)
    ctx->pc = 0x2d5f34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 56)));
    // 0x2d5f38: 0x24846540  addiu       $a0, $a0, 0x6540
    ctx->pc = 0x2d5f38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25920));
    // 0x2d5f3c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2d5f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2d5f40: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2d5f40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2d5f44: 0x3c02427c  lui         $v0, 0x427C
    ctx->pc = 0x2d5f44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17020 << 16));
    // 0x2d5f48: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2d5f48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d5f4c: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x2d5f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x2d5f50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d5f50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d5f54: 0x511c0  sll         $v0, $a1, 7
    ctx->pc = 0x2d5f54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 7));
    // 0x2d5f58: 0x22c3c  dsll32      $a1, $v0, 16
    ctx->pc = 0x2d5f58u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2d5f5c: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x2d5f5cu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x2d5f60: 0x34620004  ori         $v0, $v1, 0x4
    ctx->pc = 0x2d5f60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x2d5f64: 0x30a30fff  andi        $v1, $a1, 0xFFF
    ctx->pc = 0x2d5f64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4095);
    // 0x2d5f68: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2d5f68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2d5f6c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2d5f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2d5f70: 0xc4640000  lwc1        $f4, 0x0($v1)
    ctx->pc = 0x2d5f70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2d5f74: 0x46041080  add.s       $f2, $f2, $f4
    ctx->pc = 0x2d5f74u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
    // 0x2d5f78: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x2d5f78u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2d5f7c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2d5f7cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2d5f80: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2d5f80u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d5f84: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2D5F84u;
    {
        const bool branch_taken_0x2d5f84 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D5F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5F84u;
        // 0x2d5f88: 0xaec20038  sw          $v0, 0x38($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5f84) {
            ctx->pc = 0x2D5F9Cu;
            goto label_2d5f9c;
        }
    }
    ctx->pc = 0x2D5F8Cu;
    // 0x2d5f8c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2d5f8cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2d5f90: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2d5f90u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2d5f94: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2D5F94u;
    {
        const bool branch_taken_0x2d5f94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d5f94) {
            ctx->pc = 0x2D5FB4u;
            goto label_2d5fb4;
        }
    }
    ctx->pc = 0x2D5F9Cu;
label_2d5f9c:
    // 0x2d5f9c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2d5f9cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2d5fa0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2d5fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2d5fa4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2d5fa4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2d5fa8: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2d5fa8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2d5fac: 0x0  nop
    ctx->pc = 0x2d5facu;
    // NOP
    // 0x2d5fb0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2d5fb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2d5fb4:
    // 0x2d5fb4: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d5fb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d5fb8: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x2d5fb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2d5fbc: 0x8c275f3c  lw          $a3, 0x5F3C($at)
    ctx->pc = 0x2d5fbcu;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x4E5F3Cu));
    // 0x2d5fc0: 0x25600  sll         $t2, $v0, 24
    ctx->pc = 0x2d5fc0u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x2d5fc4: 0x2141021  addu        $v0, $s0, $s4
    ctx->pc = 0x2d5fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
    // 0x2d5fc8: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x2d5fc8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x2d5fcc: 0x2343c  dsll32      $a2, $v0, 16
    ctx->pc = 0x2d5fccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2d5fd0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2d5fd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5fd4: 0x2741023  subu        $v0, $s3, $s4
    ctx->pc = 0x2d5fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
    // 0x2d5fd8: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x2d5fd8u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x2d5fdc: 0x2443c  dsll32      $t0, $v0, 16
    ctx->pc = 0x2d5fdcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2d5fe0: 0x24a55f3c  addiu       $a1, $a1, 0x5F3C
    ctx->pc = 0x2d5fe0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24380));
    // 0x2d5fe4: 0x8443f  dsra32      $t0, $t0, 16
    ctx->pc = 0x2d5fe4u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
    // 0x2d5fe8: 0x240b001a  addiu       $t3, $zero, 0x1A
    ctx->pc = 0x2d5fe8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x2d5fec: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d5fecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d5ff0: 0x73a3c  dsll32      $a3, $a3, 8
    ctx->pc = 0x2d5ff0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 8));
    // 0x2d5ff4: 0x84235f40  lh          $v1, 0x5F40($at)
    ctx->pc = 0x2d5ff4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 24384)));
    // 0x2d5ff8: 0x73a3e  dsrl32      $a3, $a3, 8
    ctx->pc = 0x2d5ff8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> (32 + 8));
    // 0x2d5ffc: 0xea5025  or          $t2, $a3, $t2
    ctx->pc = 0x2d5ffcu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 7) | GPR_U64(ctx, 10));
    // 0x2d6000: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d6000u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d6004: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x2d6004u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2d6008: 0x84225f42  lh          $v0, 0x5F42($at)
    ctx->pc = 0x2d6008u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x4E5F42u));
    // 0x2d600c: 0x3343c  dsll32      $a2, $v1, 16
    ctx->pc = 0x2d600cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2d6010: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x2d6010u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x2d6014: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d6014u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d6018: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2d6018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2d601c: 0x84295f46  lh          $t1, 0x5F46($at)
    ctx->pc = 0x2d601cu;
    SET_GPR_S32(ctx, 9, (int16_t)FAST_READ16(0x4E5F46u));
    // 0x2d6020: 0x23c3c  dsll32      $a3, $v0, 16
    ctx->pc = 0x2d6020u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2d6024: 0xc0b506c  jal         func_2D41B0
    ctx->pc = 0x2D6024u;
    SET_GPR_U32(ctx, 31, 0x2D602Cu);
    ctx->pc = 0x2D6028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6024u;
    // 0x2d6028: 0x73c3f  dsra32      $a3, $a3, 16 (Delay Slot)
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D41B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D41B0u, 0x2D6024u, 0x2D602Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D602Cu;
label_2d602c:
    // 0x2d602c: 0x8ec30038  lw          $v1, 0x38($s6)
    ctx->pc = 0x2d602cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 56)));
    // 0x2d6030: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x2d6030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x2d6034: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2d6034u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2d6038: 0xaec20038  sw          $v0, 0x38($s6)
    ctx->pc = 0x2d6038u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 56), GPR_U32(ctx, 2));
    // 0x2d603c: 0x0  nop
    ctx->pc = 0x2d603cu;
    // NOP
label_2d6040:
    // 0x2d6040: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d6040u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d6044: 0x84235b48  lh          $v1, 0x5B48($at)
    ctx->pc = 0x2d6044u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x4E5B48u));
    // 0x2d6048: 0x13443c  dsll32      $t0, $s3, 16
    ctx->pc = 0x2d6048u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 19) << (32 + 16));
    // 0x2d604c: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x2d604cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x2d6050: 0x8443f  dsra32      $t0, $t0, 16
    ctx->pc = 0x2d6050u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
    // 0x2d6054: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2d6054u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6058: 0x24a55b44  addiu       $a1, $a1, 0x5B44
    ctx->pc = 0x2d6058u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23364));
    // 0x2d605c: 0x240b001a  addiu       $t3, $zero, 0x1A
    ctx->pc = 0x2d605cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x2d6060: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d6060u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d6064: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x2d6064u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2d6068: 0x84225b4a  lh          $v0, 0x5B4A($at)
    ctx->pc = 0x2d6068u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x4E5B4Au));
    // 0x2d606c: 0x3343c  dsll32      $a2, $v1, 16
    ctx->pc = 0x2d606cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2d6070: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x2d6070u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x2d6074: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d6074u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d6078: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2d6078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2d607c: 0x84295b4e  lh          $t1, 0x5B4E($at)
    ctx->pc = 0x2d607cu;
    SET_GPR_S32(ctx, 9, (int16_t)FAST_READ16(0x4E5B4Eu));
    // 0x2d6080: 0x23c3c  dsll32      $a3, $v0, 16
    ctx->pc = 0x2d6080u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2d6084: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d6084u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d6088: 0x8c2a5b44  lw          $t2, 0x5B44($at)
    ctx->pc = 0x2d6088u;
    SET_GPR_S32(ctx, 10, (int32_t)FAST_READ32(0x4E5B44u));
    // 0x2d608c: 0xc0b506c  jal         func_2D41B0
    ctx->pc = 0x2D608Cu;
    SET_GPR_U32(ctx, 31, 0x2D6094u);
    ctx->pc = 0x2D6090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D608Cu;
    // 0x2d6090: 0x73c3f  dsra32      $a3, $a3, 16 (Delay Slot)
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D41B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D41B0u, 0x2D608Cu, 0x2D6094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6094u;
label_2d6094:
    // 0x2d6094: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d6094u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d6098: 0x2131021  addu        $v0, $s0, $s3
    ctx->pc = 0x2d6098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    // 0x2d609c: 0x84235b64  lh          $v1, 0x5B64($at)
    ctx->pc = 0x2d609cu;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x4E5B64u));
    // 0x2d60a0: 0x2343c  dsll32      $a2, $v0, 16
    ctx->pc = 0x2d60a0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2d60a4: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x2d60a4u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x2d60a8: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x2d60a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x2d60ac: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2d60acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d60b0: 0x24a55b60  addiu       $a1, $a1, 0x5B60
    ctx->pc = 0x2d60b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23392));
    // 0x2d60b4: 0x240b001a  addiu       $t3, $zero, 0x1A
    ctx->pc = 0x2d60b4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x2d60b8: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d60b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d60bc: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x2d60bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2d60c0: 0x84225b66  lh          $v0, 0x5B66($at)
    ctx->pc = 0x2d60c0u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x4E5B66u));
    // 0x2d60c4: 0x3343c  dsll32      $a2, $v1, 16
    ctx->pc = 0x2d60c4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2d60c8: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x2d60c8u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x2d60cc: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d60ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d60d0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2d60d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2d60d4: 0x84285b68  lh          $t0, 0x5B68($at)
    ctx->pc = 0x2d60d4u;
    SET_GPR_S32(ctx, 8, (int16_t)FAST_READ16(0x4E5B68u));
    // 0x2d60d8: 0x23c3c  dsll32      $a3, $v0, 16
    ctx->pc = 0x2d60d8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2d60dc: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d60dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d60e0: 0x84295b6a  lh          $t1, 0x5B6A($at)
    ctx->pc = 0x2d60e0u;
    SET_GPR_S32(ctx, 9, (int16_t)FAST_READ16(0x4E5B6Au));
    // 0x2d60e4: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d60e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d60e8: 0x8c2a5b60  lw          $t2, 0x5B60($at)
    ctx->pc = 0x2d60e8u;
    SET_GPR_S32(ctx, 10, (int32_t)FAST_READ32(0x4E5B60u));
    // 0x2d60ec: 0xc0b506c  jal         func_2D41B0
    ctx->pc = 0x2D60ECu;
    SET_GPR_U32(ctx, 31, 0x2D60F4u);
    ctx->pc = 0x2D60F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D60ECu;
    // 0x2d60f0: 0x73c3f  dsra32      $a3, $a3, 16 (Delay Slot)
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D41B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D41B0u, 0x2D60ECu, 0x2D60F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D60F4u;
label_2d60f4:
    // 0x2d60f4: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d60f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d60f8: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x2d60f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x2d60fc: 0x84235b2c  lh          $v1, 0x5B2C($at)
    ctx->pc = 0x2d60fcu;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x4E5B2Cu));
    // 0x2d6100: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2d6100u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6104: 0x24a55b28  addiu       $a1, $a1, 0x5B28
    ctx->pc = 0x2d6104u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23336));
    // 0x2d6108: 0x240b001a  addiu       $t3, $zero, 0x1A
    ctx->pc = 0x2d6108u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x2d610c: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d610cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d6110: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x2d6110u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2d6114: 0x84225b2e  lh          $v0, 0x5B2E($at)
    ctx->pc = 0x2d6114u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x4E5B2Eu));
    // 0x2d6118: 0x3343c  dsll32      $a2, $v1, 16
    ctx->pc = 0x2d6118u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2d611c: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x2d611cu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x2d6120: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d6120u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d6124: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2d6124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2d6128: 0x84285b30  lh          $t0, 0x5B30($at)
    ctx->pc = 0x2d6128u;
    SET_GPR_S32(ctx, 8, (int16_t)FAST_READ16(0x4E5B30u));
    // 0x2d612c: 0x23c3c  dsll32      $a3, $v0, 16
    ctx->pc = 0x2d612cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2d6130: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d6130u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d6134: 0x84295b32  lh          $t1, 0x5B32($at)
    ctx->pc = 0x2d6134u;
    SET_GPR_S32(ctx, 9, (int16_t)FAST_READ16(0x4E5B32u));
    // 0x2d6138: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d6138u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d613c: 0x8c2a5b28  lw          $t2, 0x5B28($at)
    ctx->pc = 0x2d613cu;
    SET_GPR_S32(ctx, 10, (int32_t)FAST_READ32(0x4E5B28u));
    // 0x2d6140: 0xc0b506c  jal         func_2D41B0
    ctx->pc = 0x2D6140u;
    SET_GPR_U32(ctx, 31, 0x2D6148u);
    ctx->pc = 0x2D6144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6140u;
    // 0x2d6144: 0x73c3f  dsra32      $a3, $a3, 16 (Delay Slot)
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D41B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D41B0u, 0x2D6140u, 0x2D6148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6148u;
label_2d6148:
    // 0x2d6148: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x2d6148u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2d614c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2d614cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2d6150: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2d6150u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2d6154: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2d6154u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d6158: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2d6158u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d615c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2d615cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d6160: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2d6160u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d6164: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d6164u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d6168: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d6168u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d616c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D616Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D6170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D616Cu;
        // 0x2d6170: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D616Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D6174u;
}
