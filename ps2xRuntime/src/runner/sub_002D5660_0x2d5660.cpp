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

// Function: sub_002D5660
// Address: 0x2d5660 - 0x2d5a2c
void sub_002D5660_0x2d5660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D5660_0x2d5660");
#endif

    switch (ctx->pc) {
        case 0x2d56d8u: goto label_2d56d8;
        case 0x2d580cu: goto label_2d580c;
        case 0x2d5870u: goto label_2d5870;
        case 0x2d58dcu: goto label_2d58dc;
        case 0x2d5930u: goto label_2d5930;
        case 0x2d5990u: goto label_2d5990;
        case 0x2d59e4u: goto label_2d59e4;
        case 0x2d59ecu: goto label_2d59ec;
        default: break;
    }

    ctx->pc = 0x2d5660u;

    // 0x2d5660: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2d5660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2d5664: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2d5664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2d5668: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2d5668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2d566c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2d566cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2d5670: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2d5670u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5674: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2d5674u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2d5678: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2d5678u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d567c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2d567cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2d5680: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d5680u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2d5684: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d5684u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d5688: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2d5688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2d568c: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x2d568cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x2d5690: 0x106000dd  beqz        $v1, . + 4 + (0xDD << 2)
    ctx->pc = 0x2D5690u;
    {
        const bool branch_taken_0x2d5690 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D5694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5690u;
        // 0x2d5694: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5690) {
            ctx->pc = 0x2D5A08u;
            goto label_2d5a08;
        }
    }
    ctx->pc = 0x2D5698u;
    // 0x2d5698: 0x92a30044  lbu         $v1, 0x44($s5)
    ctx->pc = 0x2d5698u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 68)));
    // 0x2d569c: 0x106000da  beqz        $v1, . + 4 + (0xDA << 2)
    ctx->pc = 0x2D569Cu;
    {
        const bool branch_taken_0x2d569c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d569c) {
            ctx->pc = 0x2D5A08u;
            goto label_2d5a08;
        }
    }
    ctx->pc = 0x2D56A4u;
    // 0x2d56a4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2d56a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2d56a8: 0x3403fffc  ori         $v1, $zero, 0xFFFC
    ctx->pc = 0x2d56a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65532);
    // 0x2d56ac: 0xaea20040  sw          $v0, 0x40($s5)
    ctx->pc = 0x2d56acu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 64), GPR_U32(ctx, 2));
    // 0x2d56b0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2d56b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2d56b4: 0xaea3003c  sw          $v1, 0x3C($s5)
    ctx->pc = 0x2d56b4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 60), GPR_U32(ctx, 3));
    // 0x2d56b8: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x2d56b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x2d56bc: 0xa6a00034  sh          $zero, 0x34($s5)
    ctx->pc = 0x2d56bcu;
    WRITE16(ADD32(GPR_U32(ctx, 21), 52), (uint16_t)GPR_U32(ctx, 0));
    // 0x2d56c0: 0xa6a00036  sh          $zero, 0x36($s5)
    ctx->pc = 0x2d56c0u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 54), (uint16_t)GPR_U32(ctx, 0));
    // 0x2d56c4: 0x8c23fc90  lw          $v1, -0x370($at)
    ctx->pc = 0x2d56c4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81FC90u));
    // 0x2d56c8: 0x2463000f  addiu       $v1, $v1, 0xF
    ctx->pc = 0x2d56c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x2d56cc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2d56ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2d56d0: 0xc0b5204  jal         func_2D4810
    ctx->pc = 0x2D56D0u;
    SET_GPR_U32(ctx, 31, 0x2D56D8u);
    ctx->pc = 0x2D56D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D56D0u;
    // 0x2d56d4: 0xaea20000  sw          $v0, 0x0($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D4810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D4810u, 0x2D56D0u, 0x2D56D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D56D8u;
label_2d56d8:
    // 0x2d56d8: 0x8ea500d0  lw          $a1, 0xD0($s5)
    ctx->pc = 0x2d56d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 208)));
    // 0x2d56dc: 0x8ea4012c  lw          $a0, 0x12C($s5)
    ctx->pc = 0x2d56dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 300)));
    // 0x2d56e0: 0xa4082a  slt         $at, $a1, $a0
    ctx->pc = 0x2d56e0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2d56e4: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D56E4u;
    {
        const bool branch_taken_0x2d56e4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D56E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D56E4u;
        // 0x2d56e8: 0x2482ffff  addiu       $v0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d56e4) {
            ctx->pc = 0x2D56F4u;
            goto label_2d56f4;
        }
    }
    ctx->pc = 0x2D56ECu;
    // 0x2d56ec: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2D56ECu;
    {
        const bool branch_taken_0x2d56ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D56F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D56ECu;
        // 0x2d56f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d56ec) {
            ctx->pc = 0x2D5704u;
            goto label_2d5704;
        }
    }
    ctx->pc = 0x2D56F4u;
label_2d56f4:
    // 0x2d56f4: 0x45001a  div         $zero, $v0, $a1
    ctx->pc = 0x2d56f4u;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2d56f8: 0x0  nop
    ctx->pc = 0x2d56f8u;
    // NOP
    // 0x2d56fc: 0x0  nop
    ctx->pc = 0x2d56fcu;
    // NOP
    // 0x2d5700: 0x1012  mflo        $v0
    ctx->pc = 0x2d5700u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_2d5704:
    // 0x2d5704: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2d5704u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2d5708: 0x8ea200cc  lw          $v0, 0xCC($s5)
    ctx->pc = 0x2d5708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 204)));
    // 0x2d570c: 0x653018  mult        $a2, $v1, $a1
    ctx->pc = 0x2d570cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x2d5710: 0x861823  subu        $v1, $a0, $a2
    ctx->pc = 0x2d5710u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x2d5714: 0x462023  subu        $a0, $v0, $a2
    ctx->pc = 0x2d5714u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2d5718: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D5718u;
    {
        const bool branch_taken_0x2d5718 = (GPR_S64(ctx, 4) >= 0);
        if (branch_taken_0x2d5718) {
            ctx->pc = 0x2D5728u;
            goto label_2d5728;
        }
    }
    ctx->pc = 0x2D5720u;
    // 0x2d5720: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2d5720u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5724: 0x0  nop
    ctx->pc = 0x2d5724u;
    // NOP
label_2d5728:
    // 0x2d5728: 0xa4082a  slt         $at, $a1, $a0
    ctx->pc = 0x2d5728u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2d572c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x2D572Cu;
    {
        const bool branch_taken_0x2d572c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d572c) {
            ctx->pc = 0x2D5738u;
            goto label_2d5738;
        }
    }
    ctx->pc = 0x2D5734u;
    // 0x2d5734: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2d5734u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2d5738:
    // 0x2d5738: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D5738u;
    {
        const bool branch_taken_0x2d5738 = (GPR_S64(ctx, 3) >= 0);
        if (branch_taken_0x2d5738) {
            ctx->pc = 0x2D5748u;
            goto label_2d5748;
        }
    }
    ctx->pc = 0x2D5740u;
    // 0x2d5740: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2d5740u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5744: 0x0  nop
    ctx->pc = 0x2d5744u;
    // NOP
label_2d5748:
    // 0x2d5748: 0xa3082a  slt         $at, $a1, $v1
    ctx->pc = 0x2d5748u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2d574c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x2D574Cu;
    {
        const bool branch_taken_0x2d574c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d574c) {
            ctx->pc = 0x2D5758u;
            goto label_2d5758;
        }
    }
    ctx->pc = 0x2D5754u;
    // 0x2d5754: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x2d5754u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2d5758:
    // 0x2d5758: 0x41140  sll         $v0, $a0, 5
    ctx->pc = 0x2d5758u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x2d575c: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x2d575cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2d5760: 0x31140  sll         $v0, $v1, 5
    ctx->pc = 0x2d5760u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x2d5764: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x2d5764u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d5768: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x2d5768u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2d576c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2d576cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2d5770: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2d5770u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2d5774: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2d5774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2d5778: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x2d5778u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x2d577c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2d577cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2d5780: 0x65001a  div         $zero, $v1, $a1
    ctx->pc = 0x2d5780u;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2d5784: 0x0  nop
    ctx->pc = 0x2d5784u;
    // NOP
    // 0x2d5788: 0x0  nop
    ctx->pc = 0x2d5788u;
    // NOP
    // 0x2d578c: 0x9812  mflo        $s3
    ctx->pc = 0x2d578cu;
    SET_GPR_U64(ctx, 19, ctx->lo);
    // 0x2d5790: 0x7045001a  div1        $zero, $v0, $a1
    ctx->pc = 0x2d5790u;
    { int32_t divisor = GPR_S32(ctx, 5); int32_t dividend = GPR_S32(ctx, 2); if (divisor != 0) {     if (divisor == -1 && dividend == INT32_MIN) {         ctx->lo1 = (uint64_t)(int64_t)INT32_MIN; ctx->hi1 = 0;     } else {         ctx->lo1 = (uint64_t)(int64_t)(dividend / divisor);         ctx->hi1 = (uint64_t)(int64_t)(dividend % divisor);     } } else {     ctx->lo1 = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi1 = (uint64_t)(int64_t)dividend; } }
    // 0x2d5794: 0x0  nop
    ctx->pc = 0x2d5794u;
    // NOP
    // 0x2d5798: 0x0  nop
    ctx->pc = 0x2d5798u;
    // NOP
    // 0x2d579c: 0x70009012  mflo1       $s2
    ctx->pc = 0x2d579cu;
    SET_GPR_U64(ctx, 18, ctx->lo1);
    // 0x2d57a0: 0x272082a  slt         $at, $s3, $s2
    ctx->pc = 0x2d57a0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x2d57a4: 0x10200034  beqz        $at, . + 4 + (0x34 << 2)
    ctx->pc = 0x2D57A4u;
    {
        const bool branch_taken_0x2d57a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D57A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D57A4u;
        // 0x2d57a8: 0x3c01004e  lui         $at, 0x4E (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d57a4) {
            ctx->pc = 0x2D5878u;
            goto label_2d5878;
        }
    }
    ctx->pc = 0x2D57ACu;
    // 0x2d57ac: 0x108c3c  dsll32      $s1, $s0, 16
    ctx->pc = 0x2d57acu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 16) << (32 + 16));
    // 0x2d57b0: 0x84235fcc  lh          $v1, 0x5FCC($at)
    ctx->pc = 0x2d57b0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 24524)));
    // 0x2d57b4: 0x14843c  dsll32      $s0, $s4, 16
    ctx->pc = 0x2d57b4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 20) << (32 + 16));
    // 0x2d57b8: 0x10843f  dsra32      $s0, $s0, 16
    ctx->pc = 0x2d57b8u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
    // 0x2d57bc: 0x13443c  dsll32      $t0, $s3, 16
    ctx->pc = 0x2d57bcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 19) << (32 + 16));
    // 0x2d57c0: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x2d57c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x2d57c4: 0x118c3f  dsra32      $s1, $s1, 16
    ctx->pc = 0x2d57c4u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
    // 0x2d57c8: 0x8443f  dsra32      $t0, $t0, 16
    ctx->pc = 0x2d57c8u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
    // 0x2d57cc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2d57ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d57d0: 0x24a55fc8  addiu       $a1, $a1, 0x5FC8
    ctx->pc = 0x2d57d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24520));
    // 0x2d57d4: 0x240b001a  addiu       $t3, $zero, 0x1A
    ctx->pc = 0x2d57d4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x2d57d8: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d57d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d57dc: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x2d57dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2d57e0: 0x84225fce  lh          $v0, 0x5FCE($at)
    ctx->pc = 0x2d57e0u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x4E5FCEu));
    // 0x2d57e4: 0x3343c  dsll32      $a2, $v1, 16
    ctx->pc = 0x2d57e4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2d57e8: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x2d57e8u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x2d57ec: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d57ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d57f0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2d57f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2d57f4: 0x84295fd2  lh          $t1, 0x5FD2($at)
    ctx->pc = 0x2d57f4u;
    SET_GPR_S32(ctx, 9, (int16_t)FAST_READ16(0x4E5FD2u));
    // 0x2d57f8: 0x23c3c  dsll32      $a3, $v0, 16
    ctx->pc = 0x2d57f8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2d57fc: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d57fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d5800: 0x8c2a5fc8  lw          $t2, 0x5FC8($at)
    ctx->pc = 0x2d5800u;
    SET_GPR_S32(ctx, 10, (int32_t)FAST_READ32(0x4E5FC8u));
    // 0x2d5804: 0xc0b506c  jal         func_2D41B0
    ctx->pc = 0x2D5804u;
    SET_GPR_U32(ctx, 31, 0x2D580Cu);
    ctx->pc = 0x2D5808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5804u;
    // 0x2d5808: 0x73c3f  dsra32      $a3, $a3, 16 (Delay Slot)
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D41B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D41B0u, 0x2D5804u, 0x2D580Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D580Cu;
label_2d580c:
    // 0x2d580c: 0x2131821  addu        $v1, $s0, $s3
    ctx->pc = 0x2d580cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    // 0x2d5810: 0x2531023  subu        $v0, $s2, $s3
    ctx->pc = 0x2d5810u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x2d5814: 0x3343c  dsll32      $a2, $v1, 16
    ctx->pc = 0x2d5814u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2d5818: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d5818u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d581c: 0x84235fe8  lh          $v1, 0x5FE8($at)
    ctx->pc = 0x2d581cu;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x4E5FE8u));
    // 0x2d5820: 0x2443c  dsll32      $t0, $v0, 16
    ctx->pc = 0x2d5820u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2d5824: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x2d5824u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x2d5828: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x2d5828u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x2d582c: 0x8443f  dsra32      $t0, $t0, 16
    ctx->pc = 0x2d582cu;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
    // 0x2d5830: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2d5830u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5834: 0x24a55fe4  addiu       $a1, $a1, 0x5FE4
    ctx->pc = 0x2d5834u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24548));
    // 0x2d5838: 0x240b001a  addiu       $t3, $zero, 0x1A
    ctx->pc = 0x2d5838u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x2d583c: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d583cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d5840: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x2d5840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2d5844: 0x84225fea  lh          $v0, 0x5FEA($at)
    ctx->pc = 0x2d5844u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x4E5FEAu));
    // 0x2d5848: 0x3343c  dsll32      $a2, $v1, 16
    ctx->pc = 0x2d5848u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2d584c: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x2d584cu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x2d5850: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d5850u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d5854: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2d5854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2d5858: 0x84295fee  lh          $t1, 0x5FEE($at)
    ctx->pc = 0x2d5858u;
    SET_GPR_S32(ctx, 9, (int16_t)FAST_READ16(0x4E5FEEu));
    // 0x2d585c: 0x23c3c  dsll32      $a3, $v0, 16
    ctx->pc = 0x2d585cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2d5860: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d5860u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d5864: 0x8c2a5fe4  lw          $t2, 0x5FE4($at)
    ctx->pc = 0x2d5864u;
    SET_GPR_S32(ctx, 10, (int32_t)FAST_READ32(0x4E5FE4u));
    // 0x2d5868: 0xc0b506c  jal         func_2D41B0
    ctx->pc = 0x2D5868u;
    SET_GPR_U32(ctx, 31, 0x2D5870u);
    ctx->pc = 0x2D586Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5868u;
    // 0x2d586c: 0x73c3f  dsra32      $a3, $a3, 16 (Delay Slot)
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D41B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D41B0u, 0x2D5868u, 0x2D5870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5870u;
label_2d5870:
    // 0x2d5870: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x2D5870u;
    {
        const bool branch_taken_0x2d5870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d5870) {
            ctx->pc = 0x2D58E0u;
            goto label_2d58e0;
        }
    }
    ctx->pc = 0x2D5878u;
label_2d5878:
    // 0x2d5878: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d5878u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d587c: 0x84235fcc  lh          $v1, 0x5FCC($at)
    ctx->pc = 0x2d587cu;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x4E5FCCu));
    // 0x2d5880: 0x108c3c  dsll32      $s1, $s0, 16
    ctx->pc = 0x2d5880u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 16) << (32 + 16));
    // 0x2d5884: 0x14843c  dsll32      $s0, $s4, 16
    ctx->pc = 0x2d5884u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 20) << (32 + 16));
    // 0x2d5888: 0x12443c  dsll32      $t0, $s2, 16
    ctx->pc = 0x2d5888u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 18) << (32 + 16));
    // 0x2d588c: 0x10843f  dsra32      $s0, $s0, 16
    ctx->pc = 0x2d588cu;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
    // 0x2d5890: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x2d5890u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x2d5894: 0x118c3f  dsra32      $s1, $s1, 16
    ctx->pc = 0x2d5894u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
    // 0x2d5898: 0x8443f  dsra32      $t0, $t0, 16
    ctx->pc = 0x2d5898u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
    // 0x2d589c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2d589cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d58a0: 0x24a55fc8  addiu       $a1, $a1, 0x5FC8
    ctx->pc = 0x2d58a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24520));
    // 0x2d58a4: 0x240b001a  addiu       $t3, $zero, 0x1A
    ctx->pc = 0x2d58a4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x2d58a8: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d58a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d58ac: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x2d58acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2d58b0: 0x84225fce  lh          $v0, 0x5FCE($at)
    ctx->pc = 0x2d58b0u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x4E5FCEu));
    // 0x2d58b4: 0x3343c  dsll32      $a2, $v1, 16
    ctx->pc = 0x2d58b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2d58b8: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x2d58b8u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x2d58bc: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d58bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d58c0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2d58c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2d58c4: 0x84295fd2  lh          $t1, 0x5FD2($at)
    ctx->pc = 0x2d58c4u;
    SET_GPR_S32(ctx, 9, (int16_t)FAST_READ16(0x4E5FD2u));
    // 0x2d58c8: 0x23c3c  dsll32      $a3, $v0, 16
    ctx->pc = 0x2d58c8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2d58cc: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d58ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d58d0: 0x8c2a5fc8  lw          $t2, 0x5FC8($at)
    ctx->pc = 0x2d58d0u;
    SET_GPR_S32(ctx, 10, (int32_t)FAST_READ32(0x4E5FC8u));
    // 0x2d58d4: 0xc0b506c  jal         func_2D41B0
    ctx->pc = 0x2D58D4u;
    SET_GPR_U32(ctx, 31, 0x2D58DCu);
    ctx->pc = 0x2D58D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D58D4u;
    // 0x2d58d8: 0x73c3f  dsra32      $a3, $a3, 16 (Delay Slot)
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D41B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D41B0u, 0x2D58D4u, 0x2D58DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D58DCu;
label_2d58dc:
    // 0x2d58dc: 0x0  nop
    ctx->pc = 0x2d58dcu;
    // NOP
label_2d58e0:
    // 0x2d58e0: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d58e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d58e4: 0x84235c44  lh          $v1, 0x5C44($at)
    ctx->pc = 0x2d58e4u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x4E5C44u));
    // 0x2d58e8: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x2d58e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x2d58ec: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2d58ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d58f0: 0x24a55c40  addiu       $a1, $a1, 0x5C40
    ctx->pc = 0x2d58f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23616));
    // 0x2d58f4: 0x2408014a  addiu       $t0, $zero, 0x14A
    ctx->pc = 0x2d58f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 330));
    // 0x2d58f8: 0x240b001a  addiu       $t3, $zero, 0x1A
    ctx->pc = 0x2d58f8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x2d58fc: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d58fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d5900: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x2d5900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2d5904: 0x84225c46  lh          $v0, 0x5C46($at)
    ctx->pc = 0x2d5904u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x4E5C46u));
    // 0x2d5908: 0x3343c  dsll32      $a2, $v1, 16
    ctx->pc = 0x2d5908u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2d590c: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x2d590cu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x2d5910: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d5910u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d5914: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2d5914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2d5918: 0x84295c4a  lh          $t1, 0x5C4A($at)
    ctx->pc = 0x2d5918u;
    SET_GPR_S32(ctx, 9, (int16_t)FAST_READ16(0x4E5C4Au));
    // 0x2d591c: 0x23c3c  dsll32      $a3, $v0, 16
    ctx->pc = 0x2d591cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2d5920: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d5920u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d5924: 0x8c2a5c40  lw          $t2, 0x5C40($at)
    ctx->pc = 0x2d5924u;
    SET_GPR_S32(ctx, 10, (int32_t)FAST_READ32(0x4E5C40u));
    // 0x2d5928: 0xc0b506c  jal         func_2D41B0
    ctx->pc = 0x2D5928u;
    SET_GPR_U32(ctx, 31, 0x2D5930u);
    ctx->pc = 0x2D592Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5928u;
    // 0x2d592c: 0x73c3f  dsra32      $a3, $a3, 16 (Delay Slot)
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D41B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D41B0u, 0x2D5928u, 0x2D5930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5930u;
label_2d5930:
    // 0x2d5930: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d5930u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d5934: 0x2602014a  addiu       $v0, $s0, 0x14A
    ctx->pc = 0x2d5934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 330));
    // 0x2d5938: 0x84235c60  lh          $v1, 0x5C60($at)
    ctx->pc = 0x2d5938u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x4E5C60u));
    // 0x2d593c: 0x2343c  dsll32      $a2, $v0, 16
    ctx->pc = 0x2d593cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2d5940: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x2d5940u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x2d5944: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x2d5944u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x2d5948: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2d5948u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d594c: 0x24a55c5c  addiu       $a1, $a1, 0x5C5C
    ctx->pc = 0x2d594cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23644));
    // 0x2d5950: 0x240b001a  addiu       $t3, $zero, 0x1A
    ctx->pc = 0x2d5950u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x2d5954: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d5954u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d5958: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x2d5958u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2d595c: 0x84225c62  lh          $v0, 0x5C62($at)
    ctx->pc = 0x2d595cu;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x4E5C62u));
    // 0x2d5960: 0x3343c  dsll32      $a2, $v1, 16
    ctx->pc = 0x2d5960u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2d5964: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x2d5964u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x2d5968: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d5968u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d596c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2d596cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2d5970: 0x84285c64  lh          $t0, 0x5C64($at)
    ctx->pc = 0x2d5970u;
    SET_GPR_S32(ctx, 8, (int16_t)FAST_READ16(0x4E5C64u));
    // 0x2d5974: 0x23c3c  dsll32      $a3, $v0, 16
    ctx->pc = 0x2d5974u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2d5978: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d5978u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d597c: 0x84295c66  lh          $t1, 0x5C66($at)
    ctx->pc = 0x2d597cu;
    SET_GPR_S32(ctx, 9, (int16_t)FAST_READ16(0x4E5C66u));
    // 0x2d5980: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d5980u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d5984: 0x8c2a5c5c  lw          $t2, 0x5C5C($at)
    ctx->pc = 0x2d5984u;
    SET_GPR_S32(ctx, 10, (int32_t)FAST_READ32(0x4E5C5Cu));
    // 0x2d5988: 0xc0b506c  jal         func_2D41B0
    ctx->pc = 0x2D5988u;
    SET_GPR_U32(ctx, 31, 0x2D5990u);
    ctx->pc = 0x2D598Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5988u;
    // 0x2d598c: 0x73c3f  dsra32      $a3, $a3, 16 (Delay Slot)
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D41B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D41B0u, 0x2D5988u, 0x2D5990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5990u;
label_2d5990:
    // 0x2d5990: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d5990u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d5994: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x2d5994u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x2d5998: 0x84235c28  lh          $v1, 0x5C28($at)
    ctx->pc = 0x2d5998u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x4E5C28u));
    // 0x2d599c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2d599cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d59a0: 0x24a55c24  addiu       $a1, $a1, 0x5C24
    ctx->pc = 0x2d59a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23588));
    // 0x2d59a4: 0x240b001a  addiu       $t3, $zero, 0x1A
    ctx->pc = 0x2d59a4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x2d59a8: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d59a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d59ac: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x2d59acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2d59b0: 0x84225c2a  lh          $v0, 0x5C2A($at)
    ctx->pc = 0x2d59b0u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x4E5C2Au));
    // 0x2d59b4: 0x3343c  dsll32      $a2, $v1, 16
    ctx->pc = 0x2d59b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2d59b8: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x2d59b8u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x2d59bc: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d59bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d59c0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2d59c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2d59c4: 0x84285c2c  lh          $t0, 0x5C2C($at)
    ctx->pc = 0x2d59c4u;
    SET_GPR_S32(ctx, 8, (int16_t)FAST_READ16(0x4E5C2Cu));
    // 0x2d59c8: 0x23c3c  dsll32      $a3, $v0, 16
    ctx->pc = 0x2d59c8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2d59cc: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d59ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d59d0: 0x84295c2e  lh          $t1, 0x5C2E($at)
    ctx->pc = 0x2d59d0u;
    SET_GPR_S32(ctx, 9, (int16_t)FAST_READ16(0x4E5C2Eu));
    // 0x2d59d4: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d59d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d59d8: 0x8c2a5c24  lw          $t2, 0x5C24($at)
    ctx->pc = 0x2d59d8u;
    SET_GPR_S32(ctx, 10, (int32_t)FAST_READ32(0x4E5C24u));
    // 0x2d59dc: 0xc0b506c  jal         func_2D41B0
    ctx->pc = 0x2D59DCu;
    SET_GPR_U32(ctx, 31, 0x2D59E4u);
    ctx->pc = 0x2D59E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D59DCu;
    // 0x2d59e0: 0x73c3f  dsra32      $a3, $a3, 16 (Delay Slot)
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D41B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D41B0u, 0x2D59DCu, 0x2D59E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D59E4u;
label_2d59e4:
    // 0x2d59e4: 0xc0b522c  jal         func_2D48B0
    ctx->pc = 0x2D59E4u;
    SET_GPR_U32(ctx, 31, 0x2D59ECu);
    ctx->pc = 0x2D59E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D59E4u;
    // 0x2d59e8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D48B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D48B0u, 0x2D59E4u, 0x2D59ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D59ECu;
label_2d59ec:
    // 0x2d59ec: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x2d59ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2d59f0: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x2d59f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x2d59f4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2d59f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2d59f8: 0x2484000f  addiu       $a0, $a0, 0xF
    ctx->pc = 0x2d59f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x2d59fc: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2d59fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2d5a00: 0xac23fc90  sw          $v1, -0x370($at)
    ctx->pc = 0x2d5a00u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966416), GPR_U32(ctx, 3));
    // 0x2d5a04: 0x0  nop
    ctx->pc = 0x2d5a04u;
    // NOP
label_2d5a08:
    // 0x2d5a08: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2d5a08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2d5a0c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2d5a0cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d5a10: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2d5a10u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d5a14: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2d5a14u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d5a18: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2d5a18u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d5a1c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d5a1cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d5a20: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d5a20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d5a24: 0x3e00008  jr          $ra
    ctx->pc = 0x2D5A24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D5A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5A24u;
        // 0x2d5a28: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D5A24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D5A2Cu;
}
