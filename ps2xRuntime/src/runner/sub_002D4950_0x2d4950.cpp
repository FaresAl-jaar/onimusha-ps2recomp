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

// Function: sub_002D4950
// Address: 0x2d4950 - 0x2d4dd4
void sub_002D4950_0x2d4950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D4950_0x2d4950");
#endif

    switch (ctx->pc) {
        case 0x2d4af8u: goto label_2d4af8;
        case 0x2d4b5cu: goto label_2d4b5c;
        case 0x2d4bccu: goto label_2d4bcc;
        case 0x2d4ce4u: goto label_2d4ce4;
        case 0x2d4d4cu: goto label_2d4d4c;
        case 0x2d4db0u: goto label_2d4db0;
        default: break;
    }

    ctx->pc = 0x2d4950u;

    // 0x2d4950: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2d4950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2d4954: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x2d4954u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
    // 0x2d4958: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2d4958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2d495c: 0x344b6667  ori         $t3, $v0, 0x6667
    ctx->pc = 0x2d495cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
    // 0x2d4960: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2d4960u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2d4964: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2d4964u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2d4968: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2d4968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2d496c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2d496cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2d4970: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2d4970u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4974: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d4974u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2d4978: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d4978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d497c: 0x8c87007c  lw          $a3, 0x7C($a0)
    ctx->pc = 0x2d497cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
    // 0x2d4980: 0x8c8200e4  lw          $v0, 0xE4($a0)
    ctx->pc = 0x2d4980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 228)));
    // 0x2d4984: 0x8c8300dc  lw          $v1, 0xDC($a0)
    ctx->pc = 0x2d4984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
    // 0x2d4988: 0x1670018  mult        $zero, $t3, $a3
    ctx->pc = 0x2d4988u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x2d498c: 0x757c2  srl         $t2, $a3, 31
    ctx->pc = 0x2d498cu;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 7), 31));
    // 0x2d4990: 0x247c2  srl         $t0, $v0, 31
    ctx->pc = 0x2d4990u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x2d4994: 0x28410c81  slti        $at, $v0, 0xC81
    ctx->pc = 0x2d4994u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3201) ? 1 : 0);
    // 0x2d4998: 0x34fc2  srl         $t1, $v1, 31
    ctx->pc = 0x2d4998u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x2d499c: 0x2010  mfhi        $a0
    ctx->pc = 0x2d499cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x2d49a0: 0x1630018  mult        $zero, $t3, $v1
    ctx->pc = 0x2d49a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x2d49a4: 0x42083  sra         $a0, $a0, 2
    ctx->pc = 0x2d49a4u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 2));
    // 0x2d49a8: 0x8a9021  addu        $s2, $a0, $t2
    ctx->pc = 0x2d49a8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x2d49ac: 0x2010  mfhi        $a0
    ctx->pc = 0x2d49acu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x2d49b0: 0x1620018  mult        $zero, $t3, $v0
    ctx->pc = 0x2d49b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x2d49b4: 0x42083  sra         $a0, $a0, 2
    ctx->pc = 0x2d49b4u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 2));
    // 0x2d49b8: 0x898821  addu        $s1, $a0, $t1
    ctx->pc = 0x2d49b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x2d49bc: 0x2010  mfhi        $a0
    ctx->pc = 0x2d49bcu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x2d49c0: 0x42083  sra         $a0, $a0, 2
    ctx->pc = 0x2d49c0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 2));
    // 0x2d49c4: 0x1420002e  bnez        $at, . + 4 + (0x2E << 2)
    ctx->pc = 0x2D49C4u;
    {
        const bool branch_taken_0x2d49c4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D49C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D49C4u;
        // 0x2d49c8: 0x888021  addu        $s0, $a0, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d49c4) {
            ctx->pc = 0x2D4A80u;
            goto label_2d4a80;
        }
    }
    ctx->pc = 0x2D49CCu;
    // 0x2d49cc: 0x74080  sll         $t0, $a3, 2
    ctx->pc = 0x2d49ccu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x2d49d0: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x2d49d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2d49d4: 0x1074021  addu        $t0, $t0, $a3
    ctx->pc = 0x2d49d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x2d49d8: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x2d49d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2d49dc: 0x84180  sll         $t0, $t0, 6
    ctx->pc = 0x2d49dcu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 6));
    // 0x2d49e0: 0x42180  sll         $a0, $a0, 6
    ctx->pc = 0x2d49e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x2d49e4: 0x102001a  div         $zero, $t0, $v0
    ctx->pc = 0x2d49e4u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 8);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2d49e8: 0x0  nop
    ctx->pc = 0x2d49e8u;
    // NOP
    // 0x2d49ec: 0x0  nop
    ctx->pc = 0x2d49ecu;
    // NOP
    // 0x2d49f0: 0x9012  mflo        $s2
    ctx->pc = 0x2d49f0u;
    SET_GPR_U64(ctx, 18, ctx->lo);
    // 0x2d49f4: 0x7082001a  div1        $zero, $a0, $v0
    ctx->pc = 0x2d49f4u;
    { int32_t divisor = GPR_S32(ctx, 2); int32_t dividend = GPR_S32(ctx, 4); if (divisor != 0) {     if (divisor == -1 && dividend == INT32_MIN) {         ctx->lo1 = (uint64_t)(int64_t)INT32_MIN; ctx->hi1 = 0;     } else {         ctx->lo1 = (uint64_t)(int64_t)(dividend / divisor);         ctx->hi1 = (uint64_t)(int64_t)(dividend % divisor);     } } else {     ctx->lo1 = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi1 = (uint64_t)(int64_t)dividend; } }
    // 0x2d49f8: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x2d49f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2d49fc: 0x0  nop
    ctx->pc = 0x2d49fcu;
    // NOP
    // 0x2d4a00: 0x70008812  mflo1       $s1
    ctx->pc = 0x2d4a00u;
    SET_GPR_U64(ctx, 17, ctx->lo1);
    // 0x2d4a04: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2d4a04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2d4a08: 0x42180  sll         $a0, $a0, 6
    ctx->pc = 0x2d4a08u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x2d4a0c: 0x82001a  div         $zero, $a0, $v0
    ctx->pc = 0x2d4a0cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2d4a10: 0x0  nop
    ctx->pc = 0x2d4a10u;
    // NOP
    // 0x2d4a14: 0x0  nop
    ctx->pc = 0x2d4a14u;
    // NOP
    // 0x2d4a18: 0x8012  mflo        $s0
    ctx->pc = 0x2d4a18u;
    SET_GPR_U64(ctx, 16, ctx->lo);
    // 0x2d4a1c: 0x250202a  slt         $a0, $s2, $s0
    ctx->pc = 0x2d4a1cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x2d4a20: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D4A20u;
    {
        const bool branch_taken_0x2d4a20 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D4A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4A20u;
        // 0x2d4a24: 0xe2082a  slt         $at, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4a20) {
            ctx->pc = 0x2D4A38u;
            goto label_2d4a38;
        }
    }
    ctx->pc = 0x2D4A28u;
    // 0x2d4a28: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D4A28u;
    {
        const bool branch_taken_0x2d4a28 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d4a28) {
            ctx->pc = 0x2D4A38u;
            goto label_2d4a38;
        }
    }
    ctx->pc = 0x2D4A30u;
    // 0x2d4a30: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x2d4a30u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x2d4a34: 0x0  nop
    ctx->pc = 0x2d4a34u;
    // NOP
label_2d4a38:
    // 0x2d4a38: 0x1e400005  bgtz        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D4A38u;
    {
        const bool branch_taken_0x2d4a38 = (GPR_S64(ctx, 18) > 0);
        if (branch_taken_0x2d4a38) {
            ctx->pc = 0x2D4A50u;
            goto label_2d4a50;
        }
    }
    ctx->pc = 0x2D4A40u;
    // 0x2d4a40: 0x18e00003  blez        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D4A40u;
    {
        const bool branch_taken_0x2d4a40 = (GPR_S64(ctx, 7) <= 0);
        if (branch_taken_0x2d4a40) {
            ctx->pc = 0x2D4A50u;
            goto label_2d4a50;
        }
    }
    ctx->pc = 0x2D4A48u;
    // 0x2d4a48: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2d4a48u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2d4a4c: 0x0  nop
    ctx->pc = 0x2d4a4cu;
    // NOP
label_2d4a50:
    // 0x2d4a50: 0x230202a  slt         $a0, $s1, $s0
    ctx->pc = 0x2d4a50u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x2d4a54: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D4A54u;
    {
        const bool branch_taken_0x2d4a54 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D4A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4A54u;
        // 0x2d4a58: 0x62082a  slt         $at, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4a54) {
            ctx->pc = 0x2D4A68u;
            goto label_2d4a68;
        }
    }
    ctx->pc = 0x2D4A5Cu;
    // 0x2d4a5c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x2D4A5Cu;
    {
        const bool branch_taken_0x2d4a5c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d4a5c) {
            ctx->pc = 0x2D4A68u;
            goto label_2d4a68;
        }
    }
    ctx->pc = 0x2D4A64u;
    // 0x2d4a64: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x2d4a64u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_2d4a68:
    // 0x2d4a68: 0x1e200005  bgtz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D4A68u;
    {
        const bool branch_taken_0x2d4a68 = (GPR_S64(ctx, 17) > 0);
        if (branch_taken_0x2d4a68) {
            ctx->pc = 0x2D4A80u;
            goto label_2d4a80;
        }
    }
    ctx->pc = 0x2D4A70u;
    // 0x2d4a70: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D4A70u;
    {
        const bool branch_taken_0x2d4a70 = (GPR_S64(ctx, 3) <= 0);
        if (branch_taken_0x2d4a70) {
            ctx->pc = 0x2D4A80u;
            goto label_2d4a80;
        }
    }
    ctx->pc = 0x2D4A78u;
    // 0x2d4a78: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2d4a78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2d4a7c: 0x0  nop
    ctx->pc = 0x2d4a7cu;
    // NOP
label_2d4a80:
    // 0x2d4a80: 0xe3082a  slt         $at, $a3, $v1
    ctx->pc = 0x2d4a80u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2d4a84: 0x10200038  beqz        $at, . + 4 + (0x38 << 2)
    ctx->pc = 0x2D4A84u;
    {
        const bool branch_taken_0x2d4a84 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D4A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4A84u;
        // 0x2d4a88: 0x251082a  slt         $at, $s2, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4a84) {
            ctx->pc = 0x2D4B68u;
            goto label_2d4b68;
        }
    }
    ctx->pc = 0x2D4A8Cu;
    // 0x2d4a8c: 0x10200036  beqz        $at, . + 4 + (0x36 << 2)
    ctx->pc = 0x2D4A8Cu;
    {
        const bool branch_taken_0x2d4a8c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d4a8c) {
            ctx->pc = 0x2D4B68u;
            goto label_2d4b68;
        }
    }
    ctx->pc = 0x2D4A94u;
    // 0x2d4a94: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d4a94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d4a98: 0x5a43c  dsll32      $s4, $a1, 16
    ctx->pc = 0x2d4a98u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 5) << (32 + 16));
    // 0x2d4a9c: 0x84235eb4  lh          $v1, 0x5EB4($at)
    ctx->pc = 0x2d4a9cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 24244)));
    // 0x2d4aa0: 0x6ac3c  dsll32      $s5, $a2, 16
    ctx->pc = 0x2d4aa0u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 6) << (32 + 16));
    // 0x2d4aa4: 0x14a43f  dsra32      $s4, $s4, 16
    ctx->pc = 0x2d4aa4u;
    SET_GPR_S64(ctx, 20, GPR_S64(ctx, 20) >> (32 + 16));
    // 0x2d4aa8: 0x12443c  dsll32      $t0, $s2, 16
    ctx->pc = 0x2d4aa8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 18) << (32 + 16));
    // 0x2d4aac: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x2d4aacu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x2d4ab0: 0x15ac3f  dsra32      $s5, $s5, 16
    ctx->pc = 0x2d4ab0u;
    SET_GPR_S64(ctx, 21, GPR_S64(ctx, 21) >> (32 + 16));
    // 0x2d4ab4: 0x8443f  dsra32      $t0, $t0, 16
    ctx->pc = 0x2d4ab4u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
    // 0x2d4ab8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2d4ab8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4abc: 0x24a55eb0  addiu       $a1, $a1, 0x5EB0
    ctx->pc = 0x2d4abcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24240));
    // 0x2d4ac0: 0x240b001a  addiu       $t3, $zero, 0x1A
    ctx->pc = 0x2d4ac0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x2d4ac4: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d4ac4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d4ac8: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x2d4ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x2d4acc: 0x84225eb6  lh          $v0, 0x5EB6($at)
    ctx->pc = 0x2d4accu;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x4E5EB6u));
    // 0x2d4ad0: 0x3343c  dsll32      $a2, $v1, 16
    ctx->pc = 0x2d4ad0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2d4ad4: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x2d4ad4u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x2d4ad8: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d4ad8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d4adc: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x2d4adcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x2d4ae0: 0x84295eba  lh          $t1, 0x5EBA($at)
    ctx->pc = 0x2d4ae0u;
    SET_GPR_S32(ctx, 9, (int16_t)FAST_READ16(0x4E5EBAu));
    // 0x2d4ae4: 0x23c3c  dsll32      $a3, $v0, 16
    ctx->pc = 0x2d4ae4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2d4ae8: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d4ae8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d4aec: 0x8c2a5eb0  lw          $t2, 0x5EB0($at)
    ctx->pc = 0x2d4aecu;
    SET_GPR_S32(ctx, 10, (int32_t)FAST_READ32(0x4E5EB0u));
    // 0x2d4af0: 0xc0b506c  jal         func_2D41B0
    ctx->pc = 0x2D4AF0u;
    SET_GPR_U32(ctx, 31, 0x2D4AF8u);
    ctx->pc = 0x2D4AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D4AF0u;
    // 0x2d4af4: 0x73c3f  dsra32      $a3, $a3, 16 (Delay Slot)
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D41B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D41B0u, 0x2D4AF0u, 0x2D4AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4AF8u;
label_2d4af8:
    // 0x2d4af8: 0x2921821  addu        $v1, $s4, $s2
    ctx->pc = 0x2d4af8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
    // 0x2d4afc: 0x2321023  subu        $v0, $s1, $s2
    ctx->pc = 0x2d4afcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x2d4b00: 0x3343c  dsll32      $a2, $v1, 16
    ctx->pc = 0x2d4b00u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2d4b04: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d4b04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d4b08: 0x84235ed0  lh          $v1, 0x5ED0($at)
    ctx->pc = 0x2d4b08u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x4E5ED0u));
    // 0x2d4b0c: 0x2443c  dsll32      $t0, $v0, 16
    ctx->pc = 0x2d4b0cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2d4b10: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x2d4b10u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x2d4b14: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x2d4b14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x2d4b18: 0x8443f  dsra32      $t0, $t0, 16
    ctx->pc = 0x2d4b18u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
    // 0x2d4b1c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2d4b1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4b20: 0x24a55ecc  addiu       $a1, $a1, 0x5ECC
    ctx->pc = 0x2d4b20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24268));
    // 0x2d4b24: 0x240b001a  addiu       $t3, $zero, 0x1A
    ctx->pc = 0x2d4b24u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x2d4b28: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d4b28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d4b2c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x2d4b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2d4b30: 0x84225ed2  lh          $v0, 0x5ED2($at)
    ctx->pc = 0x2d4b30u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x4E5ED2u));
    // 0x2d4b34: 0x3343c  dsll32      $a2, $v1, 16
    ctx->pc = 0x2d4b34u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2d4b38: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x2d4b38u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x2d4b3c: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d4b3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d4b40: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x2d4b40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x2d4b44: 0x84295ed6  lh          $t1, 0x5ED6($at)
    ctx->pc = 0x2d4b44u;
    SET_GPR_S32(ctx, 9, (int16_t)FAST_READ16(0x4E5ED6u));
    // 0x2d4b48: 0x23c3c  dsll32      $a3, $v0, 16
    ctx->pc = 0x2d4b48u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2d4b4c: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d4b4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d4b50: 0x8c2a5ecc  lw          $t2, 0x5ECC($at)
    ctx->pc = 0x2d4b50u;
    SET_GPR_S32(ctx, 10, (int32_t)FAST_READ32(0x4E5ECCu));
    // 0x2d4b54: 0xc0b506c  jal         func_2D41B0
    ctx->pc = 0x2D4B54u;
    SET_GPR_U32(ctx, 31, 0x2D4B5Cu);
    ctx->pc = 0x2D4B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D4B54u;
    // 0x2d4b58: 0x73c3f  dsra32      $a3, $a3, 16 (Delay Slot)
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D41B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D41B0u, 0x2D4B54u, 0x2D4B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4B5Cu;
label_2d4b5c:
    // 0x2d4b5c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x2D4B5Cu;
    {
        const bool branch_taken_0x2d4b5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d4b5c) {
            ctx->pc = 0x2D4BD0u;
            goto label_2d4bd0;
        }
    }
    ctx->pc = 0x2D4B64u;
    // 0x2d4b64: 0x0  nop
    ctx->pc = 0x2d4b64u;
    // NOP
label_2d4b68:
    // 0x2d4b68: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d4b68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d4b6c: 0x84235eb4  lh          $v1, 0x5EB4($at)
    ctx->pc = 0x2d4b6cu;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x4E5EB4u));
    // 0x2d4b70: 0x5a43c  dsll32      $s4, $a1, 16
    ctx->pc = 0x2d4b70u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 5) << (32 + 16));
    // 0x2d4b74: 0x6ac3c  dsll32      $s5, $a2, 16
    ctx->pc = 0x2d4b74u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 6) << (32 + 16));
    // 0x2d4b78: 0x14a43f  dsra32      $s4, $s4, 16
    ctx->pc = 0x2d4b78u;
    SET_GPR_S64(ctx, 20, GPR_S64(ctx, 20) >> (32 + 16));
    // 0x2d4b7c: 0x11443c  dsll32      $t0, $s1, 16
    ctx->pc = 0x2d4b7cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 17) << (32 + 16));
    // 0x2d4b80: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x2d4b80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x2d4b84: 0x15ac3f  dsra32      $s5, $s5, 16
    ctx->pc = 0x2d4b84u;
    SET_GPR_S64(ctx, 21, GPR_S64(ctx, 21) >> (32 + 16));
    // 0x2d4b88: 0x8443f  dsra32      $t0, $t0, 16
    ctx->pc = 0x2d4b88u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
    // 0x2d4b8c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2d4b8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4b90: 0x24a55eb0  addiu       $a1, $a1, 0x5EB0
    ctx->pc = 0x2d4b90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24240));
    // 0x2d4b94: 0x240b001a  addiu       $t3, $zero, 0x1A
    ctx->pc = 0x2d4b94u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x2d4b98: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d4b98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d4b9c: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x2d4b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x2d4ba0: 0x84225eb6  lh          $v0, 0x5EB6($at)
    ctx->pc = 0x2d4ba0u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x4E5EB6u));
    // 0x2d4ba4: 0x3343c  dsll32      $a2, $v1, 16
    ctx->pc = 0x2d4ba4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2d4ba8: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x2d4ba8u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x2d4bac: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d4bacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d4bb0: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x2d4bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x2d4bb4: 0x84295eba  lh          $t1, 0x5EBA($at)
    ctx->pc = 0x2d4bb4u;
    SET_GPR_S32(ctx, 9, (int16_t)FAST_READ16(0x4E5EBAu));
    // 0x2d4bb8: 0x23c3c  dsll32      $a3, $v0, 16
    ctx->pc = 0x2d4bb8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2d4bbc: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d4bbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d4bc0: 0x8c2a5eb0  lw          $t2, 0x5EB0($at)
    ctx->pc = 0x2d4bc0u;
    SET_GPR_S32(ctx, 10, (int32_t)FAST_READ32(0x4E5EB0u));
    // 0x2d4bc4: 0xc0b506c  jal         func_2D41B0
    ctx->pc = 0x2D4BC4u;
    SET_GPR_U32(ctx, 31, 0x2D4BCCu);
    ctx->pc = 0x2D4BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D4BC4u;
    // 0x2d4bc8: 0x73c3f  dsra32      $a3, $a3, 16 (Delay Slot)
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D41B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D41B0u, 0x2D4BC4u, 0x2D4BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4BCCu;
label_2d4bcc:
    // 0x2d4bcc: 0x0  nop
    ctx->pc = 0x2d4bccu;
    // NOP
label_2d4bd0:
    // 0x2d4bd0: 0x8e620054  lw          $v0, 0x54($s3)
    ctx->pc = 0x2d4bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
    // 0x2d4bd4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2d4bd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2d4bd8: 0x10400047  beqz        $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x2D4BD8u;
    {
        const bool branch_taken_0x2d4bd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D4BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4BD8u;
        // 0x2d4bdc: 0x3c023f00  lui         $v0, 0x3F00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4bd8) {
            ctx->pc = 0x2D4CF8u;
            goto label_2d4cf8;
        }
    }
    ctx->pc = 0x2D4BE0u;
    // 0x2d4be0: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2d4be0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2d4be4: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x2d4be4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2d4be8: 0x8e650050  lw          $a1, 0x50($s3)
    ctx->pc = 0x2d4be8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
    // 0x2d4bec: 0x8e630038  lw          $v1, 0x38($s3)
    ctx->pc = 0x2d4becu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
    // 0x2d4bf0: 0x24846540  addiu       $a0, $a0, 0x6540
    ctx->pc = 0x2d4bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25920));
    // 0x2d4bf4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2d4bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2d4bf8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2d4bf8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2d4bfc: 0x3c02427c  lui         $v0, 0x427C
    ctx->pc = 0x2d4bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17020 << 16));
    // 0x2d4c00: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2d4c00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d4c04: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x2d4c04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x2d4c08: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d4c08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d4c0c: 0x511c0  sll         $v0, $a1, 7
    ctx->pc = 0x2d4c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 7));
    // 0x2d4c10: 0x22c3c  dsll32      $a1, $v0, 16
    ctx->pc = 0x2d4c10u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2d4c14: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x2d4c14u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x2d4c18: 0x34620004  ori         $v0, $v1, 0x4
    ctx->pc = 0x2d4c18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x2d4c1c: 0x30a30fff  andi        $v1, $a1, 0xFFF
    ctx->pc = 0x2d4c1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4095);
    // 0x2d4c20: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2d4c20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2d4c24: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2d4c24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2d4c28: 0xc4640000  lwc1        $f4, 0x0($v1)
    ctx->pc = 0x2d4c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2d4c2c: 0x46041080  add.s       $f2, $f2, $f4
    ctx->pc = 0x2d4c2cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
    // 0x2d4c30: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x2d4c30u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2d4c34: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2d4c34u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2d4c38: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2d4c38u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d4c3c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2D4C3Cu;
    {
        const bool branch_taken_0x2d4c3c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D4C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4C3Cu;
        // 0x2d4c40: 0xae620038  sw          $v0, 0x38($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4c3c) {
            ctx->pc = 0x2D4C54u;
            goto label_2d4c54;
        }
    }
    ctx->pc = 0x2D4C44u;
    // 0x2d4c44: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2d4c44u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2d4c48: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2d4c48u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2d4c4c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2D4C4Cu;
    {
        const bool branch_taken_0x2d4c4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d4c4c) {
            ctx->pc = 0x2D4C6Cu;
            goto label_2d4c6c;
        }
    }
    ctx->pc = 0x2D4C54u;
label_2d4c54:
    // 0x2d4c54: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2d4c54u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2d4c58: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2d4c58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2d4c5c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2d4c5cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2d4c60: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2d4c60u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2d4c64: 0x0  nop
    ctx->pc = 0x2d4c64u;
    // NOP
    // 0x2d4c68: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2d4c68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2d4c6c:
    // 0x2d4c6c: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d4c6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d4c70: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x2d4c70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2d4c74: 0x8c275ee8  lw          $a3, 0x5EE8($at)
    ctx->pc = 0x2d4c74u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x4E5EE8u));
    // 0x2d4c78: 0x25600  sll         $t2, $v0, 24
    ctx->pc = 0x2d4c78u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x2d4c7c: 0x2911021  addu        $v0, $s4, $s1
    ctx->pc = 0x2d4c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
    // 0x2d4c80: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x2d4c80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x2d4c84: 0x2343c  dsll32      $a2, $v0, 16
    ctx->pc = 0x2d4c84u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2d4c88: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2d4c88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4c8c: 0x2111023  subu        $v0, $s0, $s1
    ctx->pc = 0x2d4c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x2d4c90: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x2d4c90u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x2d4c94: 0x2443c  dsll32      $t0, $v0, 16
    ctx->pc = 0x2d4c94u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2d4c98: 0x24a55ee8  addiu       $a1, $a1, 0x5EE8
    ctx->pc = 0x2d4c98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24296));
    // 0x2d4c9c: 0x8443f  dsra32      $t0, $t0, 16
    ctx->pc = 0x2d4c9cu;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
    // 0x2d4ca0: 0x240b001a  addiu       $t3, $zero, 0x1A
    ctx->pc = 0x2d4ca0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x2d4ca4: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d4ca4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d4ca8: 0x73a3c  dsll32      $a3, $a3, 8
    ctx->pc = 0x2d4ca8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 8));
    // 0x2d4cac: 0x84235eec  lh          $v1, 0x5EEC($at)
    ctx->pc = 0x2d4cacu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 24300)));
    // 0x2d4cb0: 0x73a3e  dsrl32      $a3, $a3, 8
    ctx->pc = 0x2d4cb0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> (32 + 8));
    // 0x2d4cb4: 0xea5025  or          $t2, $a3, $t2
    ctx->pc = 0x2d4cb4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 7) | GPR_U64(ctx, 10));
    // 0x2d4cb8: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d4cb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d4cbc: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x2d4cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2d4cc0: 0x84225eee  lh          $v0, 0x5EEE($at)
    ctx->pc = 0x2d4cc0u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x4E5EEEu));
    // 0x2d4cc4: 0x3343c  dsll32      $a2, $v1, 16
    ctx->pc = 0x2d4cc4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2d4cc8: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x2d4cc8u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x2d4ccc: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d4cccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d4cd0: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x2d4cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x2d4cd4: 0x84295ef2  lh          $t1, 0x5EF2($at)
    ctx->pc = 0x2d4cd4u;
    SET_GPR_S32(ctx, 9, (int16_t)FAST_READ16(0x4E5EF2u));
    // 0x2d4cd8: 0x23c3c  dsll32      $a3, $v0, 16
    ctx->pc = 0x2d4cd8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2d4cdc: 0xc0b506c  jal         func_2D41B0
    ctx->pc = 0x2D4CDCu;
    SET_GPR_U32(ctx, 31, 0x2D4CE4u);
    ctx->pc = 0x2D4CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D4CDCu;
    // 0x2d4ce0: 0x73c3f  dsra32      $a3, $a3, 16 (Delay Slot)
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D41B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D41B0u, 0x2D4CDCu, 0x2D4CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4CE4u;
label_2d4ce4:
    // 0x2d4ce4: 0x8e630038  lw          $v1, 0x38($s3)
    ctx->pc = 0x2d4ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
    // 0x2d4ce8: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x2d4ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x2d4cec: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2d4cecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2d4cf0: 0xae620038  sw          $v0, 0x38($s3)
    ctx->pc = 0x2d4cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 56), GPR_U32(ctx, 2));
    // 0x2d4cf4: 0x0  nop
    ctx->pc = 0x2d4cf4u;
    // NOP
label_2d4cf8:
    // 0x2d4cf8: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d4cf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d4cfc: 0x84235b80  lh          $v1, 0x5B80($at)
    ctx->pc = 0x2d4cfcu;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x4E5B80u));
    // 0x2d4d00: 0x10443c  dsll32      $t0, $s0, 16
    ctx->pc = 0x2d4d00u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 16) << (32 + 16));
    // 0x2d4d04: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x2d4d04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x2d4d08: 0x8443f  dsra32      $t0, $t0, 16
    ctx->pc = 0x2d4d08u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
    // 0x2d4d0c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2d4d0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4d10: 0x24a55b7c  addiu       $a1, $a1, 0x5B7C
    ctx->pc = 0x2d4d10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23420));
    // 0x2d4d14: 0x240b001a  addiu       $t3, $zero, 0x1A
    ctx->pc = 0x2d4d14u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x2d4d18: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d4d18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d4d1c: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x2d4d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x2d4d20: 0x84225b82  lh          $v0, 0x5B82($at)
    ctx->pc = 0x2d4d20u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x4E5B82u));
    // 0x2d4d24: 0x3343c  dsll32      $a2, $v1, 16
    ctx->pc = 0x2d4d24u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2d4d28: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x2d4d28u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x2d4d2c: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d4d2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d4d30: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x2d4d30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x2d4d34: 0x84295b86  lh          $t1, 0x5B86($at)
    ctx->pc = 0x2d4d34u;
    SET_GPR_S32(ctx, 9, (int16_t)FAST_READ16(0x4E5B86u));
    // 0x2d4d38: 0x23c3c  dsll32      $a3, $v0, 16
    ctx->pc = 0x2d4d38u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2d4d3c: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d4d3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d4d40: 0x8c2a5b7c  lw          $t2, 0x5B7C($at)
    ctx->pc = 0x2d4d40u;
    SET_GPR_S32(ctx, 10, (int32_t)FAST_READ32(0x4E5B7Cu));
    // 0x2d4d44: 0xc0b506c  jal         func_2D41B0
    ctx->pc = 0x2D4D44u;
    SET_GPR_U32(ctx, 31, 0x2D4D4Cu);
    ctx->pc = 0x2D4D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D4D44u;
    // 0x2d4d48: 0x73c3f  dsra32      $a3, $a3, 16 (Delay Slot)
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D41B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D41B0u, 0x2D4D44u, 0x2D4D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4D4Cu;
label_2d4d4c:
    // 0x2d4d4c: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d4d4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d4d50: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x2d4d50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2d4d54: 0x84235b9c  lh          $v1, 0x5B9C($at)
    ctx->pc = 0x2d4d54u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x4E5B9Cu));
    // 0x2d4d58: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x2d4d58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x2d4d5c: 0x2343c  dsll32      $a2, $v0, 16
    ctx->pc = 0x2d4d5cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2d4d60: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x2d4d60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x2d4d64: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x2d4d64u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x2d4d68: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2d4d68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4d6c: 0x24a55b98  addiu       $a1, $a1, 0x5B98
    ctx->pc = 0x2d4d6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23448));
    // 0x2d4d70: 0x240b001a  addiu       $t3, $zero, 0x1A
    ctx->pc = 0x2d4d70u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x2d4d74: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d4d74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d4d78: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x2d4d78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2d4d7c: 0x84225b9e  lh          $v0, 0x5B9E($at)
    ctx->pc = 0x2d4d7cu;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x4E5B9Eu));
    // 0x2d4d80: 0x3343c  dsll32      $a2, $v1, 16
    ctx->pc = 0x2d4d80u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2d4d84: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x2d4d84u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x2d4d88: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d4d88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d4d8c: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x2d4d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x2d4d90: 0x84285ba0  lh          $t0, 0x5BA0($at)
    ctx->pc = 0x2d4d90u;
    SET_GPR_S32(ctx, 8, (int16_t)FAST_READ16(0x4E5BA0u));
    // 0x2d4d94: 0x23c3c  dsll32      $a3, $v0, 16
    ctx->pc = 0x2d4d94u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2d4d98: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d4d98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d4d9c: 0x84295ba2  lh          $t1, 0x5BA2($at)
    ctx->pc = 0x2d4d9cu;
    SET_GPR_S32(ctx, 9, (int16_t)FAST_READ16(0x4E5BA2u));
    // 0x2d4da0: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d4da0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d4da4: 0x8c2a5b98  lw          $t2, 0x5B98($at)
    ctx->pc = 0x2d4da4u;
    SET_GPR_S32(ctx, 10, (int32_t)FAST_READ32(0x4E5B98u));
    // 0x2d4da8: 0xc0b506c  jal         func_2D41B0
    ctx->pc = 0x2D4DA8u;
    SET_GPR_U32(ctx, 31, 0x2D4DB0u);
    ctx->pc = 0x2D4DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D4DA8u;
    // 0x2d4dac: 0x73c3f  dsra32      $a3, $a3, 16 (Delay Slot)
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D41B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D41B0u, 0x2D4DA8u, 0x2D4DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4DB0u;
label_2d4db0:
    // 0x2d4db0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2d4db0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2d4db4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2d4db4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d4db8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2d4db8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d4dbc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2d4dbcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d4dc0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2d4dc0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d4dc4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d4dc4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d4dc8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d4dc8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d4dcc: 0x3e00008  jr          $ra
    ctx->pc = 0x2D4DCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D4DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4DCCu;
        // 0x2d4dd0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D4DCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D4DD4u;
}
