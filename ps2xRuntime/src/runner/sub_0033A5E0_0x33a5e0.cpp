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

// Function: sub_0033A5E0
// Address: 0x33a5e0 - 0x33a870
void sub_0033A5E0_0x33a5e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033A5E0_0x33a5e0");
#endif

    switch (ctx->pc) {
        case 0x33a6c0u: goto label_33a6c0;
        case 0x33a6e0u: goto label_33a6e0;
        case 0x33a6f4u: goto label_33a6f4;
        case 0x33a798u: goto label_33a798;
        case 0x33a7ecu: goto label_33a7ec;
        case 0x33a84cu: goto label_33a84c;
        default: break;
    }

    ctx->pc = 0x33a5e0u;

    // 0x33a5e0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x33a5e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x33a5e4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x33a5e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x33a5e8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x33a5e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x33a5ec: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x33a5ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x33a5f0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x33a5f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x33a5f4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x33a5f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33a5f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x33a5f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x33a5fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x33a5fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x33a600: 0x8c860048  lw          $a2, 0x48($a0)
    ctx->pc = 0x33a600u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x33a604: 0x10c00010  beqz        $a2, . + 4 + (0x10 << 2)
    ctx->pc = 0x33A604u;
    {
        const bool branch_taken_0x33a604 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A604u;
        // 0x33a608: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a604) {
            ctx->pc = 0x33A648u;
            goto label_33a648;
        }
    }
    ctx->pc = 0x33A60Cu;
    // 0x33a60c: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x33a60cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x33a610: 0x27848060  addiu       $a0, $gp, -0x7FA0
    ctx->pc = 0x33a610u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x33a614: 0x90256c1c  lbu         $a1, 0x6C1C($at)
    ctx->pc = 0x33a614u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x33a618: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x33a618u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x33a61c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x33a61cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x33a620: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x33a620u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x33a624: 0x12260003  beq         $s1, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x33A624u;
    {
        const bool branch_taken_0x33a624 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 6));
        ctx->pc = 0x33A628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A624u;
        // 0x33a628: 0x38a30001  xori        $v1, $a1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a624) {
            ctx->pc = 0x33A634u;
            goto label_33a634;
        }
    }
    ctx->pc = 0x33A62Cu;
    // 0x33a62c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x33A62Cu;
    {
        const bool branch_taken_0x33a62c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33a62c) {
            ctx->pc = 0x33A640u;
            goto label_33a640;
        }
    }
    ctx->pc = 0x33A634u;
label_33a634:
    // 0x33a634: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x33a634u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x33a638: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x33a638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x33a63c: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x33a63cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_33a640:
    // 0x33a640: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x33A640u;
    {
        const bool branch_taken_0x33a640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33a640) {
            ctx->pc = 0x33A6A0u;
            goto label_33a6a0;
        }
    }
    ctx->pc = 0x33A648u;
label_33a648:
    // 0x33a648: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x33a648u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x33a64c: 0x90256c1c  lbu         $a1, 0x6C1C($at)
    ctx->pc = 0x33a64cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x33a650: 0x27848060  addiu       $a0, $gp, -0x7FA0
    ctx->pc = 0x33a650u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x33a654: 0x38a30001  xori        $v1, $a1, 0x1
    ctx->pc = 0x33a654u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)1);
    // 0x33a658: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x33a658u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x33a65c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x33a65cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x33a660: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x33a660u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x33a664: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x33A664u;
    {
        const bool branch_taken_0x33a664 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x33a664) {
            ctx->pc = 0x33A690u;
            goto label_33a690;
        }
    }
    ctx->pc = 0x33A66Cu;
    // 0x33a66c: 0x4b04043c  vrnext.x    $vf4, $R
    ctx->pc = 0x33a66cu;
    {
    uint32_t r_vals[4];
    _mm_storeu_si128((__m128i*)r_vals, _mm_castps_si128(ctx->vu0_r));

    // Simple LFSR-based random number generation (PS2-like behavior)
    uint32_t feedback = r_vals[0] ^ (r_vals[0] << 13) ^ (r_vals[1] >> 19) ^ (r_vals[2] << 7);
    r_vals[0] = r_vals[1];
    r_vals[1] = r_vals[2];
    r_vals[2] = r_vals[3];
    r_vals[3] = feedback;

    ctx->vu0_r = _mm_castsi128_ps(_mm_loadu_si128((__m128i*)r_vals));
}
    // 0x33a670: 0x48232001  qmfc2.i     $v1, $vf4
    ctx->pc = 0x33a670u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x33a674: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x33a674u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x33a678: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x33A678u;
    {
        const bool branch_taken_0x33a678 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A678u;
        // 0x33a67c: 0x51880  sll         $v1, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a678) {
            ctx->pc = 0x33A688u;
            goto label_33a688;
        }
    }
    ctx->pc = 0x33A680u;
    // 0x33a680: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x33a680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x33a684: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x33a684u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_33a688:
    // 0x33a688: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x33A688u;
    {
        const bool branch_taken_0x33a688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33a688) {
            ctx->pc = 0x33A6A0u;
            goto label_33a6a0;
        }
    }
    ctx->pc = 0x33A690u;
label_33a690:
    // 0x33a690: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x33a690u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x33a694: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x33a694u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x33a698: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x33a698u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x33a69c: 0x0  nop
    ctx->pc = 0x33a69cu;
    // NOP
label_33a6a0:
    // 0x33a6a0: 0x1220006b  beqz        $s1, . + 4 + (0x6B << 2)
    ctx->pc = 0x33A6A0u;
    {
        const bool branch_taken_0x33a6a0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x33a6a0) {
            ctx->pc = 0x33A850u;
            goto label_33a850;
        }
    }
    ctx->pc = 0x33A6A8u;
    // 0x33a6a8: 0x92230002  lbu         $v1, 0x2($s1)
    ctx->pc = 0x33a6a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x33a6ac: 0x24020023  addiu       $v0, $zero, 0x23
    ctx->pc = 0x33a6acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x33a6b0: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x33A6B0u;
    {
        const bool branch_taken_0x33a6b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x33a6b0) {
            ctx->pc = 0x33A6D8u;
            goto label_33a6d8;
        }
    }
    ctx->pc = 0x33A6B8u;
    // 0x33a6b8: 0xc0d8d1c  jal         func_363470
    ctx->pc = 0x33A6B8u;
    SET_GPR_U32(ctx, 31, 0x33A6C0u);
    ctx->pc = 0x363470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363470u, 0x33A6B8u, 0x33A6C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33A6C0u;
label_33a6c0:
    // 0x33a6c0: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x33a6c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
    // 0x33a6c4: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x33a6c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
    // 0x33a6c8: 0x43182a  slt         $v1, $v0, $v1
    ctx->pc = 0x33a6c8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x33a6cc: 0x14600060  bnez        $v1, . + 4 + (0x60 << 2)
    ctx->pc = 0x33A6CCu;
    {
        const bool branch_taken_0x33a6cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x33a6cc) {
            ctx->pc = 0x33A850u;
            goto label_33a850;
        }
    }
    ctx->pc = 0x33A6D4u;
    // 0x33a6d4: 0x0  nop
    ctx->pc = 0x33a6d4u;
    // NOP
label_33a6d8:
    // 0x33a6d8: 0xc0b278c  jal         func_2C9E30
    ctx->pc = 0x33A6D8u;
    SET_GPR_U32(ctx, 31, 0x33A6E0u);
    ctx->pc = 0x33A6DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33A6D8u;
    // 0x33a6dc: 0x92240002  lbu         $a0, 0x2($s1) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9E30u, 0x33A6D8u, 0x33A6E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33A6E0u;
label_33a6e0:
    // 0x33a6e0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x33a6e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33a6e4: 0x8e2229c0  lw          $v0, 0x29C0($s1)
    ctx->pc = 0x33a6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10688)));
    // 0x33a6e8: 0x94540000  lhu         $s4, 0x0($v0)
    ctx->pc = 0x33a6e8u;
    SET_GPR_ZE32(ctx, 20, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33a6ec: 0xc0a6998  jal         func_29A660
    ctx->pc = 0x33A6ECu;
    SET_GPR_U32(ctx, 31, 0x33A6F4u);
    ctx->pc = 0x33A6F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33A6ECu;
    // 0x33a6f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A660u, 0x33A6ECu, 0x33A6F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33A6F4u;
label_33a6f4:
    // 0x33a6f4: 0x3283ffff  andi        $v1, $s4, 0xFFFF
    ctx->pc = 0x33a6f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)65535);
    // 0x33a6f8: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x33a6f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x33a6fc: 0x24a60001  addiu       $a2, $a1, 0x1
    ctx->pc = 0x33a6fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x33a700: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x33a700u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x33a704: 0x66001a  div         $zero, $v1, $a2
    ctx->pc = 0x33a704u;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x33a708: 0x3c050068  lui         $a1, 0x68
    ctx->pc = 0x33a708u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)104 << 16));
    // 0x33a70c: 0x24a5ef20  addiu       $a1, $a1, -0x10E0
    ctx->pc = 0x33a70cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962976));
    // 0x33a710: 0x324400ff  andi        $a0, $s2, 0xFF
    ctx->pc = 0x33a710u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x33a714: 0x3012  mflo        $a2
    ctx->pc = 0x33a714u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x33a718: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x33a718u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x33a71c: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x33a71cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x33a720: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x33a720u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x33a724: 0x10830034  beq         $a0, $v1, . + 4 + (0x34 << 2)
    ctx->pc = 0x33A724u;
    {
        const bool branch_taken_0x33a724 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x33A728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A724u;
        // 0x33a728: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a724) {
            ctx->pc = 0x33A7F8u;
            goto label_33a7f8;
        }
    }
    ctx->pc = 0x33A72Cu;
    // 0x33a72c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x33a72cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33a730: 0x1089001b  beq         $a0, $t1, . + 4 + (0x1B << 2)
    ctx->pc = 0x33A730u;
    {
        const bool branch_taken_0x33a730 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 9));
        if (branch_taken_0x33a730) {
            ctx->pc = 0x33A7A0u;
            goto label_33a7a0;
        }
    }
    ctx->pc = 0x33A738u;
    // 0x33a738: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x33A738u;
    {
        const bool branch_taken_0x33a738 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x33a738) {
            ctx->pc = 0x33A748u;
            goto label_33a748;
        }
    }
    ctx->pc = 0x33A740u;
    // 0x33a740: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x33A740u;
    {
        const bool branch_taken_0x33a740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33a740) {
            ctx->pc = 0x33A850u;
            goto label_33a850;
        }
    }
    ctx->pc = 0x33A748u;
label_33a748:
    // 0x33a748: 0x4b04043c  vrnext.x    $vf4, $R
    ctx->pc = 0x33a748u;
    {
    uint32_t r_vals[4];
    _mm_storeu_si128((__m128i*)r_vals, _mm_castps_si128(ctx->vu0_r));

    // Simple LFSR-based random number generation (PS2-like behavior)
    uint32_t feedback = r_vals[0] ^ (r_vals[0] << 13) ^ (r_vals[1] >> 19) ^ (r_vals[2] << 7);
    r_vals[0] = r_vals[1];
    r_vals[1] = r_vals[2];
    r_vals[2] = r_vals[3];
    r_vals[3] = feedback;

    ctx->vu0_r = _mm_castsi128_ps(_mm_loadu_si128((__m128i*)r_vals));
}
    // 0x33a74c: 0x48282001  qmfc2.i     $t0, $vf4
    ctx->pc = 0x33a74cu;
    SET_GPR_VEC(ctx, 8, _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x33a750: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x33a750u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x33a754: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x33a754u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x33a758: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x33a758u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x33a75c: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x33a75cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x33a760: 0x2442ddb0  addiu       $v0, $v0, -0x2250
    ctx->pc = 0x33a760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958512));
    // 0x33a764: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x33a764u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x33a768: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x33a768u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33a76c: 0x3108ffff  andi        $t0, $t0, 0xFFFF
    ctx->pc = 0x33a76cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x33a770: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33a770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33a774: 0x106001b  divu        $zero, $t0, $a2
    ctx->pc = 0x33a774u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 8) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 8) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,8); } }
    // 0x33a778: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x33a778u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33a77c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x33a77cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33a780: 0x1810  mfhi        $v1
    ctx->pc = 0x33a780u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x33a784: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x33a784u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x33a788: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x33a788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x33a78c: 0x94460000  lhu         $a2, 0x0($v0)
    ctx->pc = 0x33a78cu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33a790: 0xc0ce74c  jal         func_339D30
    ctx->pc = 0x33A790u;
    SET_GPR_U32(ctx, 31, 0x33A798u);
    ctx->pc = 0x33A794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33A790u;
    // 0x33a794: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x339D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x339D30u, 0x33A790u, 0x33A798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33A798u;
label_33a798:
    // 0x33a798: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x33A798u;
    {
        const bool branch_taken_0x33a798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33a798) {
            ctx->pc = 0x33A850u;
            goto label_33a850;
        }
    }
    ctx->pc = 0x33A7A0u;
label_33a7a0:
    // 0x33a7a0: 0x4b04043c  vrnext.x    $vf4, $R
    ctx->pc = 0x33a7a0u;
    {
    uint32_t r_vals[4];
    _mm_storeu_si128((__m128i*)r_vals, _mm_castps_si128(ctx->vu0_r));

    // Simple LFSR-based random number generation (PS2-like behavior)
    uint32_t feedback = r_vals[0] ^ (r_vals[0] << 13) ^ (r_vals[1] >> 19) ^ (r_vals[2] << 7);
    r_vals[0] = r_vals[1];
    r_vals[1] = r_vals[2];
    r_vals[2] = r_vals[3];
    r_vals[3] = feedback;

    ctx->vu0_r = _mm_castsi128_ps(_mm_loadu_si128((__m128i*)r_vals));
}
    // 0x33a7a4: 0x482a2001  qmfc2.i     $t2, $vf4
    ctx->pc = 0x33a7a4u;
    SET_GPR_VEC(ctx, 10, _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x33a7a8: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x33a7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x33a7ac: 0x3c060068  lui         $a2, 0x68
    ctx->pc = 0x33a7acu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)104 << 16));
    // 0x33a7b0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x33a7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x33a7b4: 0x24080  sll         $t0, $v0, 2
    ctx->pc = 0x33a7b4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x33a7b8: 0x24c6ddf0  addiu       $a2, $a2, -0x2210
    ctx->pc = 0x33a7b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294958576));
    // 0x33a7bc: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x33a7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x33a7c0: 0xc83021  addu        $a2, $a2, $t0
    ctx->pc = 0x33a7c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x33a7c4: 0x31420001  andi        $v0, $t2, 0x1
    ctx->pc = 0x33a7c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)1);
    // 0x33a7c8: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x33a7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x33a7cc: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x33a7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x33a7d0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x33a7d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33a7d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33a7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33a7d8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x33a7d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33a7dc: 0x94460000  lhu         $a2, 0x0($v0)
    ctx->pc = 0x33a7dcu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33a7e0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x33a7e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33a7e4: 0xc0ce74c  jal         func_339D30
    ctx->pc = 0x33A7E4u;
    SET_GPR_U32(ctx, 31, 0x33A7ECu);
    ctx->pc = 0x33A7E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33A7E4u;
    // 0x33a7e8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x339D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x339D30u, 0x33A7E4u, 0x33A7ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33A7ECu;
label_33a7ec:
    // 0x33a7ec: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x33A7ECu;
    {
        const bool branch_taken_0x33a7ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33a7ec) {
            ctx->pc = 0x33A850u;
            goto label_33a850;
        }
    }
    ctx->pc = 0x33A7F4u;
    // 0x33a7f4: 0x0  nop
    ctx->pc = 0x33a7f4u;
    // NOP
label_33a7f8:
    // 0x33a7f8: 0x4b04043c  vrnext.x    $vf4, $R
    ctx->pc = 0x33a7f8u;
    {
    uint32_t r_vals[4];
    _mm_storeu_si128((__m128i*)r_vals, _mm_castps_si128(ctx->vu0_r));

    // Simple LFSR-based random number generation (PS2-like behavior)
    uint32_t feedback = r_vals[0] ^ (r_vals[0] << 13) ^ (r_vals[1] >> 19) ^ (r_vals[2] << 7);
    r_vals[0] = r_vals[1];
    r_vals[1] = r_vals[2];
    r_vals[2] = r_vals[3];
    r_vals[3] = feedback;

    ctx->vu0_r = _mm_castsi128_ps(_mm_loadu_si128((__m128i*)r_vals));
}
    // 0x33a7fc: 0x48282001  qmfc2.i     $t0, $vf4
    ctx->pc = 0x33a7fcu;
    SET_GPR_VEC(ctx, 8, _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x33a800: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x33a800u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x33a804: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x33a804u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x33a808: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x33a808u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x33a80c: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x33a80cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x33a810: 0x2442de30  addiu       $v0, $v0, -0x21D0
    ctx->pc = 0x33a810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958640));
    // 0x33a814: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x33a814u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x33a818: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x33a818u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33a81c: 0x3108ffff  andi        $t0, $t0, 0xFFFF
    ctx->pc = 0x33a81cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x33a820: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33a820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33a824: 0x106001b  divu        $zero, $t0, $a2
    ctx->pc = 0x33a824u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 8) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 8) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,8); } }
    // 0x33a828: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x33a828u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33a82c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x33a82cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33a830: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x33a830u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33a834: 0x1810  mfhi        $v1
    ctx->pc = 0x33a834u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x33a838: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x33a838u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x33a83c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x33a83cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x33a840: 0x94460000  lhu         $a2, 0x0($v0)
    ctx->pc = 0x33a840u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33a844: 0xc0ce74c  jal         func_339D30
    ctx->pc = 0x33A844u;
    SET_GPR_U32(ctx, 31, 0x33A84Cu);
    ctx->pc = 0x33A848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33A844u;
    // 0x33a848: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x339D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x339D30u, 0x33A844u, 0x33A84Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33A84Cu;
label_33a84c:
    // 0x33a84c: 0x0  nop
    ctx->pc = 0x33a84cu;
    // NOP
label_33a850:
    // 0x33a850: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x33a850u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x33a854: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x33a854u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x33a858: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x33a858u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x33a85c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x33a85cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x33a860: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x33a860u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33a864: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x33a864u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33a868: 0x3e00008  jr          $ra
    ctx->pc = 0x33A868u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33A86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A868u;
        // 0x33a86c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33A868u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33A870u;
}
