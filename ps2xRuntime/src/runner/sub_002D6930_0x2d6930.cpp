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

// Function: sub_002D6930
// Address: 0x2d6930 - 0x2d6b14
void sub_002D6930_0x2d6930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D6930_0x2d6930");
#endif

    switch (ctx->pc) {
        case 0x2d69a0u: goto label_2d69a0;
        case 0x2d6a10u: goto label_2d6a10;
        case 0x2d6a94u: goto label_2d6a94;
        default: break;
    }

    ctx->pc = 0x2d6930u;

    // 0x2d6930: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2d6930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2d6934: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2d6934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2d6938: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2d6938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2d693c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2d693cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2d6940: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2d6940u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2d6944: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2d6944u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2d6948: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d6948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2d694c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d694cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d6950: 0x8c870104  lw          $a3, 0x104($a0)
    ctx->pc = 0x2d6950u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 260)));
    // 0x2d6954: 0x8c8300a8  lw          $v1, 0xA8($a0)
    ctx->pc = 0x2d6954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 168)));
    // 0x2d6958: 0xe3001a  div         $zero, $a3, $v1
    ctx->pc = 0x2d6958u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 7);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2d695c: 0x0  nop
    ctx->pc = 0x2d695cu;
    // NOP
    // 0x2d6960: 0x0  nop
    ctx->pc = 0x2d6960u;
    // NOP
    // 0x2d6964: 0xa012  mflo        $s4
    ctx->pc = 0x2d6964u;
    SET_GPR_U64(ctx, 20, ctx->lo);
    // 0x2d6968: 0x2a8103e8  slti        $at, $s4, 0x3E8
    ctx->pc = 0x2d6968u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)1000) ? 1 : 0);
    // 0x2d696c: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x2D696Cu;
    {
        const bool branch_taken_0x2d696c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D6970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D696Cu;
        // 0x2d6970: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d696c) {
            ctx->pc = 0x2D6978u;
            goto label_2d6978;
        }
    }
    ctx->pc = 0x2D6974u;
    // 0x2d6974: 0x241403e7  addiu       $s4, $zero, 0x3E7
    ctx->pc = 0x2d6974u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
label_2d6978:
    // 0x2d6978: 0x8ea40038  lw          $a0, 0x38($s5)
    ctx->pc = 0x2d6978u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 56)));
    // 0x2d697c: 0x30930001  andi        $s3, $a0, 0x1
    ctx->pc = 0x2d697cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x2d6980: 0x1260001d  beqz        $s3, . + 4 + (0x1D << 2)
    ctx->pc = 0x2D6980u;
    {
        const bool branch_taken_0x2d6980 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D6984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6980u;
        // 0x2d6984: 0x2403fffe  addiu       $v1, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6980) {
            ctx->pc = 0x2D69F8u;
            goto label_2d69f8;
        }
    }
    ctx->pc = 0x2D6988u;
    // 0x2d6988: 0x3c07004e  lui         $a3, 0x4E
    ctx->pc = 0x2d6988u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)78 << 16));
    // 0x2d698c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2d698cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2d6990: 0x24e75d60  addiu       $a3, $a3, 0x5D60
    ctx->pc = 0x2d6990u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 23904));
    // 0x2d6994: 0x10e0000a  beqz        $a3, . + 4 + (0xA << 2)
    ctx->pc = 0x2D6994u;
    {
        const bool branch_taken_0x2d6994 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D6998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6994u;
        // 0x2d6998: 0xaea30038  sw          $v1, 0x38($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 56), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6994) {
            ctx->pc = 0x2D69C0u;
            goto label_2d69c0;
        }
    }
    ctx->pc = 0x2D699Cu;
    // 0x2d699c: 0x0  nop
    ctx->pc = 0x2d699cu;
    // NOP
label_2d69a0:
    // 0x2d69a0: 0x84e30004  lh          $v1, 0x4($a3)
    ctx->pc = 0x2d69a0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x2d69a4: 0x8ce70018  lw          $a3, 0x18($a3)
    ctx->pc = 0x2d69a4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x2d69a8: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2d69a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2d69ac: 0x32c3c  dsll32      $a1, $v1, 16
    ctx->pc = 0x2d69acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2d69b0: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x2d69b0u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x2d69b4: 0x14e0fffa  bnez        $a3, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2D69B4u;
    {
        const bool branch_taken_0x2d69b4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d69b4) {
            ctx->pc = 0x2D69A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d69a0;
        }
    }
    ctx->pc = 0x2D69BCu;
    // 0x2d69bc: 0x0  nop
    ctx->pc = 0x2d69bcu;
    // NOP
label_2d69c0:
    // 0x2d69c0: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d69c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d69c4: 0x84245d68  lh          $a0, 0x5D68($at)
    ctx->pc = 0x2d69c4u;
    SET_GPR_S32(ctx, 4, (int16_t)FAST_READ16(0x4E5D68u));
    // 0x2d69c8: 0x51823  negu        $v1, $a1
    ctx->pc = 0x2d69c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
    // 0x2d69cc: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x2d69ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2d69d0: 0x32c3c  dsll32      $a1, $v1, 16
    ctx->pc = 0x2d69d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2d69d4: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x2d69d4u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x2d69d8: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x2d69d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x2d69dc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2d69dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2d69e0: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x2d69e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2d69e4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2d69e4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2d69e8: 0xa31823  subu        $v1, $a1, $v1
    ctx->pc = 0x2d69e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2d69ec: 0x32c3c  dsll32      $a1, $v1, 16
    ctx->pc = 0x2d69ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2d69f0: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x2d69f0u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x2d69f4: 0x0  nop
    ctx->pc = 0x2d69f4u;
    // NOP
label_2d69f8:
    // 0x2d69f8: 0x68c3c  dsll32      $s1, $a2, 16
    ctx->pc = 0x2d69f8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 6) << (32 + 16));
    // 0x2d69fc: 0x5843c  dsll32      $s0, $a1, 16
    ctx->pc = 0x2d69fcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) << (32 + 16));
    // 0x2d6a00: 0x118c3f  dsra32      $s1, $s1, 16
    ctx->pc = 0x2d6a00u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
    // 0x2d6a04: 0x10843f  dsra32      $s0, $s0, 16
    ctx->pc = 0x2d6a04u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
    // 0x2d6a08: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x2D6A08u;
    {
        const bool branch_taken_0x2d6a08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D6A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6A08u;
        // 0x2d6a0c: 0x24120002  addiu       $s2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6a08) {
            ctx->pc = 0x2D6AC8u;
            goto label_2d6ac8;
        }
    }
    ctx->pc = 0x2D6A10u;
label_2d6a10:
    // 0x2d6a10: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x2d6a10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2d6a14: 0x282001a  div         $zero, $s4, $v0
    ctx->pc = 0x2d6a14u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 20);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2d6a18: 0x3c03004e  lui         $v1, 0x4E
    ctx->pc = 0x2d6a18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)78 << 16));
    // 0x2d6a1c: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d6a1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d6a20: 0x24635d60  addiu       $v1, $v1, 0x5D60
    ctx->pc = 0x2d6a20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23904));
    // 0x2d6a24: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2d6a24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6a28: 0x240b001a  addiu       $t3, $zero, 0x1A
    ctx->pc = 0x2d6a28u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x2d6a2c: 0x8ea20038  lw          $v0, 0x38($s5)
    ctx->pc = 0x2d6a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 56)));
    // 0x2d6a30: 0x3010  mfhi        $a2
    ctx->pc = 0x2d6a30u;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x2d6a34: 0x628c0  sll         $a1, $a2, 3
    ctx->pc = 0x2d6a34u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x2d6a38: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x2d6a38u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x2d6a3c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x2d6a3cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2d6a40: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x2d6a40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x2d6a44: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x2d6a44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2d6a48: 0xaea20038  sw          $v0, 0x38($s5)
    ctx->pc = 0x2d6a48u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 56), GPR_U32(ctx, 2));
    // 0x2d6a4c: 0x84225d68  lh          $v0, 0x5D68($at)
    ctx->pc = 0x2d6a4cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 23912)));
    // 0x2d6a50: 0x84a30004  lh          $v1, 0x4($a1)
    ctx->pc = 0x2d6a50u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2d6a54: 0x84a80008  lh          $t0, 0x8($a1)
    ctx->pc = 0x2d6a54u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2d6a58: 0x84a9000a  lh          $t1, 0xA($a1)
    ctx->pc = 0x2d6a58u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 10)));
    // 0x2d6a5c: 0x8caa0000  lw          $t2, 0x0($a1)
    ctx->pc = 0x2d6a5cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2d6a60: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2d6a60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2d6a64: 0x521018  mult        $v0, $v0, $s2
    ctx->pc = 0x2d6a64u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2d6a68: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2d6a68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2d6a6c: 0x2343c  dsll32      $a2, $v0, 16
    ctx->pc = 0x2d6a6cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2d6a70: 0x84a20006  lh          $v0, 0x6($a1)
    ctx->pc = 0x2d6a70u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x2d6a74: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x2d6a74u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x2d6a78: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x2d6a78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2d6a7c: 0x3343c  dsll32      $a2, $v1, 16
    ctx->pc = 0x2d6a7cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2d6a80: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x2d6a80u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x2d6a84: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2d6a84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2d6a88: 0x23c3c  dsll32      $a3, $v0, 16
    ctx->pc = 0x2d6a88u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2d6a8c: 0xc0b506c  jal         func_2D41B0
    ctx->pc = 0x2D6A8Cu;
    SET_GPR_U32(ctx, 31, 0x2D6A94u);
    ctx->pc = 0x2D6A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6A8Cu;
    // 0x2d6a90: 0x73c3f  dsra32      $a3, $a3, 16 (Delay Slot)
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D41B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D41B0u, 0x2D6A8Cu, 0x2D6A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6A94u;
label_2d6a94:
    // 0x2d6a94: 0x3c036666  lui         $v1, 0x6666
    ctx->pc = 0x2d6a94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)26214 << 16));
    // 0x2d6a98: 0x8ea60038  lw          $a2, 0x38($s5)
    ctx->pc = 0x2d6a98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 56)));
    // 0x2d6a9c: 0x34636667  ori         $v1, $v1, 0x6667
    ctx->pc = 0x2d6a9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26215);
    // 0x2d6aa0: 0x2405fffd  addiu       $a1, $zero, -0x3
    ctx->pc = 0x2d6aa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x2d6aa4: 0x740018  mult        $zero, $v1, $s4
    ctx->pc = 0x2d6aa4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x2d6aa8: 0x1427c2  srl         $a0, $s4, 31
    ctx->pc = 0x2d6aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 20), 31));
    // 0x2d6aac: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x2d6aacu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x2d6ab0: 0xc51824  and         $v1, $a2, $a1
    ctx->pc = 0x2d6ab0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    // 0x2d6ab4: 0xaea30038  sw          $v1, 0x38($s5)
    ctx->pc = 0x2d6ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 56), GPR_U32(ctx, 3));
    // 0x2d6ab8: 0x1810  mfhi        $v1
    ctx->pc = 0x2d6ab8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2d6abc: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x2d6abcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x2d6ac0: 0x64a021  addu        $s4, $v1, $a0
    ctx->pc = 0x2d6ac0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2d6ac4: 0x0  nop
    ctx->pc = 0x2d6ac4u;
    // NOP
label_2d6ac8:
    // 0x2d6ac8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2d6ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d6acc: 0x1243ffd0  beq         $s2, $v1, . + 4 + (-0x30 << 2)
    ctx->pc = 0x2D6ACCu;
    {
        const bool branch_taken_0x2d6acc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        if (branch_taken_0x2d6acc) {
            ctx->pc = 0x2D6A10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d6a10;
        }
    }
    ctx->pc = 0x2D6AD4u;
    // 0x2d6ad4: 0x1680ffce  bnez        $s4, . + 4 + (-0x32 << 2)
    ctx->pc = 0x2D6AD4u;
    {
        const bool branch_taken_0x2d6ad4 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d6ad4) {
            ctx->pc = 0x2D6A10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d6a10;
        }
    }
    ctx->pc = 0x2D6ADCu;
    // 0x2d6adc: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D6ADCu;
    {
        const bool branch_taken_0x2d6adc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d6adc) {
            ctx->pc = 0x2D6AF0u;
            goto label_2d6af0;
        }
    }
    ctx->pc = 0x2D6AE4u;
    // 0x2d6ae4: 0x8ea30038  lw          $v1, 0x38($s5)
    ctx->pc = 0x2d6ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 56)));
    // 0x2d6ae8: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x2d6ae8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x2d6aec: 0xaea30038  sw          $v1, 0x38($s5)
    ctx->pc = 0x2d6aecu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 56), GPR_U32(ctx, 3));
label_2d6af0:
    // 0x2d6af0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2d6af0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2d6af4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2d6af4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d6af8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2d6af8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d6afc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2d6afcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d6b00: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2d6b00u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d6b04: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d6b04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d6b08: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d6b08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d6b0c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D6B0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D6B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6B0Cu;
        // 0x2d6b10: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D6B0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D6B14u;
}
