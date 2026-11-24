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

// Function: sub_0011C818
// Address: 0x11c818 - 0x11d250
void sub_0011C818_0x11c818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011C818_0x11c818");
#endif

    switch (ctx->pc) {
        case 0x11c8c8u: goto label_11c8c8;
        case 0x11c8d8u: goto label_11c8d8;
        case 0x11c91cu: goto label_11c91c;
        case 0x11c93cu: goto label_11c93c;
        case 0x11c950u: goto label_11c950;
        case 0x11c960u: goto label_11c960;
        case 0x11c98cu: goto label_11c98c;
        case 0x11c9a8u: goto label_11c9a8;
        case 0x11c9bcu: goto label_11c9bc;
        case 0x11c9c4u: goto label_11c9c4;
        case 0x11c9ccu: goto label_11c9cc;
        case 0x11c9e0u: goto label_11c9e0;
        case 0x11c9ecu: goto label_11c9ec;
        case 0x11c9f4u: goto label_11c9f4;
        case 0x11ca08u: goto label_11ca08;
        case 0x11ca20u: goto label_11ca20;
        case 0x11ca34u: goto label_11ca34;
        case 0x11ca3cu: goto label_11ca3c;
        case 0x11ca4cu: goto label_11ca4c;
        case 0x11ca58u: goto label_11ca58;
        case 0x11ca64u: goto label_11ca64;
        case 0x11ca70u: goto label_11ca70;
        case 0x11ca7cu: goto label_11ca7c;
        case 0x11cac8u: goto label_11cac8;
        case 0x11cafcu: goto label_11cafc;
        case 0x11cb40u: goto label_11cb40;
        case 0x11cb64u: goto label_11cb64;
        case 0x11cb78u: goto label_11cb78;
        case 0x11cb84u: goto label_11cb84;
        case 0x11cb94u: goto label_11cb94;
        case 0x11cbbcu: goto label_11cbbc;
        case 0x11cc10u: goto label_11cc10;
        case 0x11cc8cu: goto label_11cc8c;
        case 0x11cc98u: goto label_11cc98;
        case 0x11ccbcu: goto label_11ccbc;
        case 0x11ccd0u: goto label_11ccd0;
        case 0x11cce0u: goto label_11cce0;
        case 0x11cd20u: goto label_11cd20;
        case 0x11cd50u: goto label_11cd50;
        case 0x11cd6cu: goto label_11cd6c;
        case 0x11cd80u: goto label_11cd80;
        case 0x11cd9cu: goto label_11cd9c;
        case 0x11cda8u: goto label_11cda8;
        case 0x11cdb8u: goto label_11cdb8;
        case 0x11cdccu: goto label_11cdcc;
        case 0x11cde8u: goto label_11cde8;
        case 0x11ce14u: goto label_11ce14;
        case 0x11ce24u: goto label_11ce24;
        case 0x11ce34u: goto label_11ce34;
        case 0x11ce50u: goto label_11ce50;
        case 0x11ce88u: goto label_11ce88;
        case 0x11ce8cu: goto label_11ce8c;
        case 0x11ced4u: goto label_11ced4;
        case 0x11cee4u: goto label_11cee4;
        case 0x11cf08u: goto label_11cf08;
        case 0x11cf28u: goto label_11cf28;
        case 0x11cf38u: goto label_11cf38;
        case 0x11cf5cu: goto label_11cf5c;
        case 0x11cf70u: goto label_11cf70;
        case 0x11cf84u: goto label_11cf84;
        case 0x11cf94u: goto label_11cf94;
        case 0x11cfbcu: goto label_11cfbc;
        case 0x11cfe4u: goto label_11cfe4;
        case 0x11cffcu: goto label_11cffc;
        case 0x11d00cu: goto label_11d00c;
        case 0x11d018u: goto label_11d018;
        case 0x11d03cu: goto label_11d03c;
        case 0x11d054u: goto label_11d054;
        case 0x11d064u: goto label_11d064;
        case 0x11d070u: goto label_11d070;
        case 0x11d0a0u: goto label_11d0a0;
        case 0x11d0b0u: goto label_11d0b0;
        case 0x11d0f4u: goto label_11d0f4;
        case 0x11d108u: goto label_11d108;
        case 0x11d11cu: goto label_11d11c;
        case 0x11d144u: goto label_11d144;
        case 0x11d154u: goto label_11d154;
        case 0x11d184u: goto label_11d184;
        case 0x11d18cu: goto label_11d18c;
        case 0x11d194u: goto label_11d194;
        case 0x11d1a8u: goto label_11d1a8;
        case 0x11d1b8u: goto label_11d1b8;
        case 0x11d1c0u: goto label_11d1c0;
        case 0x11d1c8u: goto label_11d1c8;
        case 0x11d1d0u: goto label_11d1d0;
        case 0x11d1e8u: goto label_11d1e8;
        case 0x11d240u: goto label_11d240;
        default: break;
    }

    ctx->pc = 0x11c818u;

    // 0x11c818: 0x240d0018  addiu       $t5, $zero, 0x18
    ctx->pc = 0x11c818u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x11c81c: 0x24ccfffd  addiu       $t4, $a2, -0x3
    ctx->pc = 0x11c81cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967293));
    // 0x11c820: 0x18d001a  div         $zero, $t4, $t5
    ctx->pc = 0x11c820u;
    { int32_t divisor = GPR_S32(ctx, 13);    int32_t dividend = GPR_S32(ctx, 12);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x11c824: 0x27bdfd40  addiu       $sp, $sp, -0x2C0
    ctx->pc = 0x11c824u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966592));
    // 0x11c828: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x11c828u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x11c82c: 0xffb00270  sd          $s0, 0x270($sp)
    ctx->pc = 0x11c82cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 624), GPR_U64(ctx, 16));
    // 0x11c830: 0xffb10278  sd          $s1, 0x278($sp)
    ctx->pc = 0x11c830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 632), GPR_U64(ctx, 17));
    // 0x11c834: 0x25ef3388  addiu       $t7, $t7, 0x3388
    ctx->pc = 0x11c834u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 13192));
    // 0x11c838: 0xffb20280  sd          $s2, 0x280($sp)
    ctx->pc = 0x11c838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 640), GPR_U64(ctx, 18));
    // 0x11c83c: 0x87080  sll         $t6, $t0, 2
    ctx->pc = 0x11c83cu;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x11c840: 0xffb30288  sd          $s3, 0x288($sp)
    ctx->pc = 0x11c840u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 648), GPR_U64(ctx, 19));
    // 0x11c844: 0x1cf7021  addu        $t6, $t6, $t7
    ctx->pc = 0x11c844u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 15)));
    // 0x11c848: 0xffb40290  sd          $s4, 0x290($sp)
    ctx->pc = 0x11c848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 656), GPR_U64(ctx, 20));
    // 0x11c84c: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x11c84cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x11c850: 0xffb50298  sd          $s5, 0x298($sp)
    ctx->pc = 0x11c850u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 664), GPR_U64(ctx, 21));
    // 0x11c854: 0xffb602a0  sd          $s6, 0x2A0($sp)
    ctx->pc = 0x11c854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 672), GPR_U64(ctx, 22));
    // 0x11c858: 0xffb702a8  sd          $s7, 0x2A8($sp)
    ctx->pc = 0x11c858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 680), GPR_U64(ctx, 23));
    // 0x11c85c: 0xffbe02b0  sd          $fp, 0x2B0($sp)
    ctx->pc = 0x11c85cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 688), GPR_U64(ctx, 30));
    // 0x11c860: 0xffbf02b8  sd          $ra, 0x2B8($sp)
    ctx->pc = 0x11c860u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 696), GPR_U64(ctx, 31));
    // 0x11c864: 0xafa80238  sw          $t0, 0x238($sp)
    ctx->pc = 0x11c864u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 568), GPR_U32(ctx, 8));
    // 0x11c868: 0x8dce0000  lw          $t6, 0x0($t6)
    ctx->pc = 0x11c868u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x11c86c: 0xafa70240  sw          $a3, 0x240($sp)
    ctx->pc = 0x11c86cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 576), GPR_U32(ctx, 7));
    // 0x11c870: 0xafae0248  sw          $t6, 0x248($sp)
    ctx->pc = 0x11c870u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 584), GPR_U32(ctx, 14));
    // 0x11c874: 0xee5821  addu        $t3, $a3, $t6
    ctx->pc = 0x11c874u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 14)));
    // 0x11c878: 0xafa40230  sw          $a0, 0x230($sp)
    ctx->pc = 0x11c878u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 560), GPR_U32(ctx, 4));
    // 0x11c87c: 0xafa50234  sw          $a1, 0x234($sp)
    ctx->pc = 0x11c87cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 564), GPR_U32(ctx, 5));
    // 0x11c880: 0xafa9023c  sw          $t1, 0x23C($sp)
    ctx->pc = 0x11c880u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 572), GPR_U32(ctx, 9));
    // 0x11c884: 0x51a00001  beql        $t5, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x11C884u;
    {
        const bool branch_taken_0x11c884 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        if (branch_taken_0x11c884) {
            ctx->pc = 0x11C888u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11C884u;
            // 0x11c888: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x11C88Cu;
            goto label_11c88c;
        }
    }
    ctx->pc = 0x11C88Cu;
label_11c88c:
    // 0x11c88c: 0x6012  mflo        $t4
    ctx->pc = 0x11c88cu;
    SET_GPR_U64(ctx, 12, ctx->lo);
    // 0x11c890: 0x298f0000  slti        $t7, $t4, 0x0
    ctx->pc = 0x11c890u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 12) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x11c894: 0xf600b  movn        $t4, $zero, $t7
    ctx->pc = 0x11c894u;
    if (GPR_U64(ctx, 15) != 0) SET_GPR_VEC(ctx, 12, GPR_VEC(ctx, 0));
    // 0x11c898: 0x18d6818  mult        $t5, $t4, $t5
    ctx->pc = 0x11c898u;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 13); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x11c89c: 0xafac0244  sw          $t4, 0x244($sp)
    ctx->pc = 0x11c89cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 580), GPR_U32(ctx, 12));
    // 0x11c8a0: 0x1877023  subu        $t6, $t4, $a3
    ctx->pc = 0x11c8a0u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 7)));
    // 0x11c8a4: 0xcd3023  subu        $a2, $a2, $t5
    ctx->pc = 0x11c8a4u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 13)));
    // 0x11c8a8: 0x24c6ffe8  addiu       $a2, $a2, -0x18
    ctx->pc = 0x11c8a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967272));
    // 0x11c8ac: 0x5600010  bltz        $t3, . + 4 + (0x10 << 2)
    ctx->pc = 0x11C8ACu;
    {
        const bool branch_taken_0x11c8ac = (GPR_S64(ctx, 11) < 0);
        ctx->pc = 0x11C8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C8ACu;
        // 0x11c8b0: 0xafa60250  sw          $a2, 0x250($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 592), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c8ac) {
            ctx->pc = 0x11C8F0u;
            goto label_11c8f0;
        }
    }
    ctx->pc = 0x11C8B4u;
    // 0x11c8b4: 0xe7880  sll         $t7, $t6, 2
    ctx->pc = 0x11c8b4u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 14), 2));
    // 0x11c8b8: 0x1c0982d  daddu       $s3, $t6, $zero
    ctx->pc = 0x11c8b8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c8bc: 0x25720001  addiu       $s2, $t3, 0x1
    ctx->pc = 0x11c8bcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x11c8c0: 0x1e98021  addu        $s0, $t7, $t1
    ctx->pc = 0x11c8c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 9)));
    // 0x11c8c4: 0x27b10050  addiu       $s1, $sp, 0x50
    ctx->pc = 0x11c8c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_11c8c8:
    // 0x11c8c8: 0x6600003  bltz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x11C8C8u;
    {
        const bool branch_taken_0x11c8c8 = (GPR_S64(ctx, 19) < 0);
        ctx->pc = 0x11C8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C8C8u;
        // 0x11c8cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c8c8) {
            ctx->pc = 0x11C8D8u;
            goto label_11c8d8;
        }
    }
    ctx->pc = 0x11C8D0u;
    // 0x11c8d0: 0xc04bba2  jal         func_12EE88
    ctx->pc = 0x11C8D0u;
    SET_GPR_U32(ctx, 31, 0x11C8D8u);
    ctx->pc = 0x11C8D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C8D0u;
    // 0x11c8d4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EE88u, 0x11C8D0u, 0x11C8D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C8D8u;
label_11c8d8:
    // 0x11c8d8: 0xfe220000  sd          $v0, 0x0($s1)
    ctx->pc = 0x11c8d8u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 2));
    // 0x11c8dc: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x11c8dcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x11c8e0: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x11c8e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x11c8e4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x11c8e4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x11c8e8: 0x1640fff7  bnez        $s2, . + 4 + (-0x9 << 2)
    ctx->pc = 0x11C8E8u;
    {
        const bool branch_taken_0x11c8e8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C8E8u;
        // 0x11c8ec: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c8e8) {
            ctx->pc = 0x11C8C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11c8c8;
        }
    }
    ctx->pc = 0x11C8F0u;
label_11c8f0:
    // 0x11c8f0: 0x8fad0248  lw          $t5, 0x248($sp)
    ctx->pc = 0x11c8f0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 584)));
    // 0x11c8f4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x11c8f4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c8f8: 0x29ad0000  slti        $t5, $t5, 0x0
    ctx->pc = 0x11c8f8u;
    SET_GPR_U64(ctx, 13, ((int64_t)GPR_S64(ctx, 13) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x11c8fc: 0x15a00022  bnez        $t5, . + 4 + (0x22 << 2)
    ctx->pc = 0x11C8FCu;
    {
        const bool branch_taken_0x11c8fc = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C8FCu;
        // 0x11c900: 0xafad0258  sw          $t5, 0x258($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 600), GPR_U32(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c8fc) {
            ctx->pc = 0x11C988u;
            goto label_11c988;
        }
    }
    ctx->pc = 0x11C904u;
    // 0x11c904: 0x8fae0240  lw          $t6, 0x240($sp)
    ctx->pc = 0x11c904u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x11c908: 0x27b60190  addiu       $s6, $sp, 0x190
    ctx->pc = 0x11c908u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x11c90c: 0x29cb0000  slti        $t3, $t6, 0x0
    ctx->pc = 0x11c90cu;
    SET_GPR_U64(ctx, 11, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x11c910: 0xe78c0  sll         $t7, $t6, 3
    ctx->pc = 0x11c910u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 14), 3));
    // 0x11c914: 0xafab0260  sw          $t3, 0x260($sp)
    ctx->pc = 0x11c914u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 608), GPR_U32(ctx, 11));
    // 0x11c918: 0x1fda821  addu        $s5, $t7, $sp
    ctx->pc = 0x11c918u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 29)));
label_11c91c:
    // 0x11c91c: 0x8fac0260  lw          $t4, 0x260($sp)
    ctx->pc = 0x11c91cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x11c920: 0x15800012  bnez        $t4, . + 4 + (0x12 << 2)
    ctx->pc = 0x11C920u;
    {
        const bool branch_taken_0x11c920 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C920u;
        // 0x11c924: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c920) {
            ctx->pc = 0x11C96Cu;
            goto label_11c96c;
        }
    }
    ctx->pc = 0x11C928u;
    // 0x11c928: 0x8fad0240  lw          $t5, 0x240($sp)
    ctx->pc = 0x11c928u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x11c92c: 0x240982d  daddu       $s3, $s2, $zero
    ctx->pc = 0x11c92cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c930: 0x8fb00230  lw          $s0, 0x230($sp)
    ctx->pc = 0x11c930u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x11c934: 0x26b10050  addiu       $s1, $s5, 0x50
    ctx->pc = 0x11c934u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 80));
    // 0x11c938: 0x25b20001  addiu       $s2, $t5, 0x1
    ctx->pc = 0x11c938u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
label_11c93c:
    // 0x11c93c: 0xde040000  ld          $a0, 0x0($s0)
    ctx->pc = 0x11c93cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x11c940: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x11c940u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x11c944: 0xde250000  ld          $a1, 0x0($s1)
    ctx->pc = 0x11c944u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x11c948: 0xc04ba66  jal         func_12E998
    ctx->pc = 0x11C948u;
    SET_GPR_U32(ctx, 31, 0x11C950u);
    ctx->pc = 0x11C94Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C948u;
    // 0x11c94c: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E998u, 0x11C948u, 0x11C950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C950u;
label_11c950:
    // 0x11c950: 0x2631fff8  addiu       $s1, $s1, -0x8
    ctx->pc = 0x11c950u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967288));
    // 0x11c954: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11c954u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c958: 0xc04ba36  jal         func_12E8D8
    ctx->pc = 0x11C958u;
    SET_GPR_U32(ctx, 31, 0x11C960u);
    ctx->pc = 0x11C95Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C958u;
    // 0x11c95c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E8D8u, 0x11C958u, 0x11C960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C960u;
label_11c960:
    // 0x11c960: 0x1640fff6  bnez        $s2, . + 4 + (-0xA << 2)
    ctx->pc = 0x11C960u;
    {
        const bool branch_taken_0x11c960 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C960u;
        // 0x11c964: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c960) {
            ctx->pc = 0x11C93Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11c93c;
        }
    }
    ctx->pc = 0x11C968u;
    // 0x11c968: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x11c968u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11c96c:
    // 0x11c96c: 0xfed20000  sd          $s2, 0x0($s6)
    ctx->pc = 0x11c96cu;
    WRITE64(ADD32(GPR_U32(ctx, 22), 0), GPR_U64(ctx, 18));
    // 0x11c970: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x11c970u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x11c974: 0x8fae0248  lw          $t6, 0x248($sp)
    ctx->pc = 0x11c974u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 584)));
    // 0x11c978: 0x26b50008  addiu       $s5, $s5, 0x8
    ctx->pc = 0x11c978u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
    // 0x11c97c: 0x1d4782a  slt         $t7, $t6, $s4
    ctx->pc = 0x11c97cu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 14) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x11c980: 0x11e0ffe6  beqz        $t7, . + 4 + (-0x1A << 2)
    ctx->pc = 0x11C980u;
    {
        const bool branch_taken_0x11c980 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C980u;
        // 0x11c984: 0x26d60008  addiu       $s6, $s6, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c980) {
            ctx->pc = 0x11C91Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11c91c;
        }
    }
    ctx->pc = 0x11C988u;
label_11c988:
    // 0x11c988: 0x8fb60248  lw          $s6, 0x248($sp)
    ctx->pc = 0x11c988u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 584)));
label_11c98c:
    // 0x11c98c: 0x1678c0  sll         $t7, $s6, 3
    ctx->pc = 0x11c98cu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 22), 3));
    // 0x11c990: 0x1fd2021  addu        $a0, $t7, $sp
    ctx->pc = 0x11c990u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 29)));
    // 0x11c994: 0x1ac0001f  blez        $s6, . + 4 + (0x1F << 2)
    ctx->pc = 0x11C994u;
    {
        const bool branch_taken_0x11c994 = (GPR_S64(ctx, 22) <= 0);
        ctx->pc = 0x11C998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C994u;
        // 0x11c998: 0xdc930190  ld          $s3, 0x190($a0) (Delay Slot)
        SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 4), 400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c994) {
            ctx->pc = 0x11CA14u;
            goto label_11ca14;
        }
    }
    ctx->pc = 0x11C99Cu;
    // 0x11c99c: 0x2c0a02d  daddu       $s4, $s6, $zero
    ctx->pc = 0x11c99cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c9a0: 0x24910188  addiu       $s1, $a0, 0x188
    ctx->pc = 0x11c9a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 392));
    // 0x11c9a4: 0x3a0902d  daddu       $s2, $sp, $zero
    ctx->pc = 0x11c9a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_11c9a8:
    // 0x11c9a8: 0x240503e7  addiu       $a1, $zero, 0x3E7
    ctx->pc = 0x11c9a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
    // 0x11c9ac: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11c9acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c9b0: 0x52d3c  dsll32      $a1, $a1, 20
    ctx->pc = 0x11c9b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 20));
    // 0x11c9b4: 0xc04ba66  jal         func_12E998
    ctx->pc = 0x11C9B4u;
    SET_GPR_U32(ctx, 31, 0x11C9BCu);
    ctx->pc = 0x11C9B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C9B4u;
    // 0x11c9b8: 0x2694ffff  addiu       $s4, $s4, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E998u, 0x11C9B4u, 0x11C9BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C9BCu;
label_11c9bc:
    // 0x11c9bc: 0xc04bbce  jal         func_12EF38
    ctx->pc = 0x11C9BCu;
    SET_GPR_U32(ctx, 31, 0x11C9C4u);
    ctx->pc = 0x11C9C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C9BCu;
    // 0x11c9c0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EF38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EF38u, 0x11C9BCu, 0x11C9C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C9C4u;
label_11c9c4:
    // 0x11c9c4: 0xc04bba2  jal         func_12EE88
    ctx->pc = 0x11C9C4u;
    SET_GPR_U32(ctx, 31, 0x11C9CCu);
    ctx->pc = 0x11C9C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C9C4u;
    // 0x11c9c8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EE88u, 0x11C9C4u, 0x11C9CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C9CCu;
label_11c9cc:
    // 0x11c9cc: 0x24050417  addiu       $a1, $zero, 0x417
    ctx->pc = 0x11c9ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1047));
    // 0x11c9d0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x11c9d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c9d4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11c9d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c9d8: 0xc04ba66  jal         func_12E998
    ctx->pc = 0x11C9D8u;
    SET_GPR_U32(ctx, 31, 0x11C9E0u);
    ctx->pc = 0x11C9DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C9D8u;
    // 0x11c9dc: 0x52d3c  dsll32      $a1, $a1, 20 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E998u, 0x11C9D8u, 0x11C9E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C9E0u;
label_11c9e0:
    // 0x11c9e0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11c9e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c9e4: 0xc04ba4c  jal         func_12E930
    ctx->pc = 0x11C9E4u;
    SET_GPR_U32(ctx, 31, 0x11C9ECu);
    ctx->pc = 0x11C9E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C9E4u;
    // 0x11c9e8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E930u, 0x11C9E4u, 0x11C9ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C9ECu;
label_11c9ec:
    // 0x11c9ec: 0xc04bbce  jal         func_12EF38
    ctx->pc = 0x11C9ECu;
    SET_GPR_U32(ctx, 31, 0x11C9F4u);
    ctx->pc = 0x11C9F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C9ECu;
    // 0x11c9f0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EF38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EF38u, 0x11C9ECu, 0x11C9F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C9F4u;
label_11c9f4:
    // 0x11c9f4: 0xde240000  ld          $a0, 0x0($s1)
    ctx->pc = 0x11c9f4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x11c9f8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x11c9f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c9fc: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x11c9fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x11ca00: 0xc04ba36  jal         func_12E8D8
    ctx->pc = 0x11CA00u;
    SET_GPR_U32(ctx, 31, 0x11CA08u);
    ctx->pc = 0x11CA04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CA00u;
    // 0x11ca04: 0x2631fff8  addiu       $s1, $s1, -0x8 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E8D8u, 0x11CA00u, 0x11CA08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CA08u;
label_11ca08:
    // 0x11ca08: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x11ca08u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x11ca0c: 0x1e80ffe6  bgtz        $s4, . + 4 + (-0x1A << 2)
    ctx->pc = 0x11CA0Cu;
    {
        const bool branch_taken_0x11ca0c = (GPR_S64(ctx, 20) > 0);
        ctx->pc = 0x11CA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CA0Cu;
        // 0x11ca10: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ca0c) {
            ctx->pc = 0x11C9A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11c9a8;
        }
    }
    ctx->pc = 0x11CA14u;
label_11ca14:
    // 0x11ca14: 0x8fa50250  lw          $a1, 0x250($sp)
    ctx->pc = 0x11ca14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x11ca18: 0xc047946  jal         func_11E518
    ctx->pc = 0x11CA18u;
    SET_GPR_U32(ctx, 31, 0x11CA20u);
    ctx->pc = 0x11CA1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CA18u;
    // 0x11ca1c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E518u, 0x11CA18u, 0x11CA20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CA20u;
label_11ca20:
    // 0x11ca20: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x11ca20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x11ca24: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x11ca24u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ca28: 0x52dbc  dsll32      $a1, $a1, 22
    ctx->pc = 0x11ca28u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 22));
    // 0x11ca2c: 0xc04ba66  jal         func_12E998
    ctx->pc = 0x11CA2Cu;
    SET_GPR_U32(ctx, 31, 0x11CA34u);
    ctx->pc = 0x11CA30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CA2Cu;
    // 0x11ca30: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E998u, 0x11CA2Cu, 0x11CA34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CA34u;
label_11ca34:
    // 0x11ca34: 0xc0478b0  jal         func_11E2C0
    ctx->pc = 0x11CA34u;
    SET_GPR_U32(ctx, 31, 0x11CA3Cu);
    ctx->pc = 0x11CA38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CA34u;
    // 0x11ca38: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E2C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E2C0u, 0x11CA34u, 0x11CA3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CA3Cu;
label_11ca3c:
    // 0x11ca3c: 0x24050201  addiu       $a1, $zero, 0x201
    ctx->pc = 0x11ca3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 513));
    // 0x11ca40: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11ca40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ca44: 0xc04ba66  jal         func_12E998
    ctx->pc = 0x11CA44u;
    SET_GPR_U32(ctx, 31, 0x11CA4Cu);
    ctx->pc = 0x11CA48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CA44u;
    // 0x11ca48: 0x52d7c  dsll32      $a1, $a1, 21 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E998u, 0x11CA44u, 0x11CA4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CA4Cu;
label_11ca4c:
    // 0x11ca4c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11ca4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ca50: 0xc04ba4c  jal         func_12E930
    ctx->pc = 0x11CA50u;
    SET_GPR_U32(ctx, 31, 0x11CA58u);
    ctx->pc = 0x11CA54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CA50u;
    // 0x11ca54: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E930u, 0x11CA50u, 0x11CA58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CA58u;
label_11ca58:
    // 0x11ca58: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x11ca58u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ca5c: 0xc04bbce  jal         func_12EF38
    ctx->pc = 0x11CA5Cu;
    SET_GPR_U32(ctx, 31, 0x11CA64u);
    ctx->pc = 0x11CA60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CA5Cu;
    // 0x11ca60: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EF38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EF38u, 0x11CA5Cu, 0x11CA64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CA64u;
label_11ca64:
    // 0x11ca64: 0xafa2024c  sw          $v0, 0x24C($sp)
    ctx->pc = 0x11ca64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 588), GPR_U32(ctx, 2));
    // 0x11ca68: 0xc04bba2  jal         func_12EE88
    ctx->pc = 0x11CA68u;
    SET_GPR_U32(ctx, 31, 0x11CA70u);
    ctx->pc = 0x11CA6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CA68u;
    // 0x11ca6c: 0x8fa4024c  lw          $a0, 0x24C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 588)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EE88u, 0x11CA68u, 0x11CA70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CA70u;
label_11ca70:
    // 0x11ca70: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11ca70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ca74: 0xc04ba4c  jal         func_12E930
    ctx->pc = 0x11CA74u;
    SET_GPR_U32(ctx, 31, 0x11CA7Cu);
    ctx->pc = 0x11CA78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CA74u;
    // 0x11ca78: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E930u, 0x11CA74u, 0x11CA7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CA7Cu;
label_11ca7c:
    // 0x11ca7c: 0x8faf0250  lw          $t7, 0x250($sp)
    ctx->pc = 0x11ca7cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x11ca80: 0x19e001e2  blez        $t7, . + 4 + (0x1E2 << 2)
    ctx->pc = 0x11CA80u;
    {
        const bool branch_taken_0x11ca80 = (GPR_S64(ctx, 15) <= 0);
        ctx->pc = 0x11CA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CA80u;
        // 0x11ca84: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ca80) {
            ctx->pc = 0x11D20Cu;
            goto label_11d20c;
        }
    }
    ctx->pc = 0x11CA88u;
    // 0x11ca88: 0x166080  sll         $t4, $s6, 2
    ctx->pc = 0x11ca88u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
    // 0x11ca8c: 0x8fab0250  lw          $t3, 0x250($sp)
    ctx->pc = 0x11ca8cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x11ca90: 0x19d6021  addu        $t4, $t4, $sp
    ctx->pc = 0x11ca90u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 29)));
    // 0x11ca94: 0x240f0018  addiu       $t7, $zero, 0x18
    ctx->pc = 0x11ca94u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x11ca98: 0x8d8efffc  lw          $t6, -0x4($t4)
    ctx->pc = 0x11ca98u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 4294967292)));
    // 0x11ca9c: 0x1eb7823  subu        $t7, $t7, $t3
    ctx->pc = 0x11ca9cu;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 11)));
    // 0x11caa0: 0x240d0017  addiu       $t5, $zero, 0x17
    ctx->pc = 0x11caa0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x11caa4: 0x1eea007  srav        $s4, $t6, $t7
    ctx->pc = 0x11caa4u;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 14), GPR_U32(ctx, 15) & 0x1F));
    // 0x11caa8: 0x1ab6823  subu        $t5, $t5, $t3
    ctx->pc = 0x11caa8u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 11)));
    // 0x11caac: 0x8fab024c  lw          $t3, 0x24C($sp)
    ctx->pc = 0x11caacu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 588)));
    // 0x11cab0: 0x1f47804  sllv        $t7, $s4, $t7
    ctx->pc = 0x11cab0u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 20), GPR_U32(ctx, 15) & 0x1F));
    // 0x11cab4: 0x1cf7023  subu        $t6, $t6, $t7
    ctx->pc = 0x11cab4u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 15)));
    // 0x11cab8: 0x1745821  addu        $t3, $t3, $s4
    ctx->pc = 0x11cab8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 20)));
    // 0x11cabc: 0xad8efffc  sw          $t6, -0x4($t4)
    ctx->pc = 0x11cabcu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 4294967292), GPR_U32(ctx, 14));
    // 0x11cac0: 0xafab024c  sw          $t3, 0x24C($sp)
    ctx->pc = 0x11cac0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 588), GPR_U32(ctx, 11));
    // 0x11cac4: 0x1ae7007  srav        $t6, $t6, $t5
    ctx->pc = 0x11cac4u;
    SET_GPR_S32(ctx, 14, SRA32(GPR_S32(ctx, 14), GPR_U32(ctx, 13) & 0x1F));
label_11cac8:
    // 0x11cac8: 0xafae0254  sw          $t6, 0x254($sp)
    ctx->pc = 0x11cac8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 596), GPR_U32(ctx, 14));
    // 0x11cacc: 0x8faf0254  lw          $t7, 0x254($sp)
    ctx->pc = 0x11caccu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 596)));
    // 0x11cad0: 0x19e0002d  blez        $t7, . + 4 + (0x2D << 2)
    ctx->pc = 0x11CAD0u;
    {
        const bool branch_taken_0x11cad0 = (GPR_S64(ctx, 15) <= 0);
        ctx->pc = 0x11CAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CAD0u;
        // 0x11cad4: 0x8fab024c  lw          $t3, 0x24C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cad0) {
            ctx->pc = 0x11CB88u;
            goto label_11cb88;
        }
    }
    ctx->pc = 0x11CAD8u;
    // 0x11cad8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x11cad8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cadc: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x11cadcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x11cae0: 0x1ac00010  blez        $s6, . + 4 + (0x10 << 2)
    ctx->pc = 0x11CAE0u;
    {
        const bool branch_taken_0x11cae0 = (GPR_S64(ctx, 22) <= 0);
        ctx->pc = 0x11CAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CAE0u;
        // 0x11cae4: 0xafab024c  sw          $t3, 0x24C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 588), GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cae0) {
            ctx->pc = 0x11CB24u;
            goto label_11cb24;
        }
    }
    ctx->pc = 0x11CAE8u;
    // 0x11cae8: 0x3c0b00ff  lui         $t3, 0xFF
    ctx->pc = 0x11cae8u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)255 << 16));
    // 0x11caec: 0x3c0a0100  lui         $t2, 0x100
    ctx->pc = 0x11caecu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)256 << 16));
    // 0x11caf0: 0x356bffff  ori         $t3, $t3, 0xFFFF
    ctx->pc = 0x11caf0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)65535);
    // 0x11caf4: 0x3a0682d  daddu       $t5, $sp, $zero
    ctx->pc = 0x11caf4u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11caf8: 0x2c0602d  daddu       $t4, $s6, $zero
    ctx->pc = 0x11caf8u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_11cafc:
    // 0x11cafc: 0x8dae0000  lw          $t6, 0x0($t5)
    ctx->pc = 0x11cafcu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x11cb00: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11CB00u;
    {
        const bool branch_taken_0x11cb00 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x11CB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CB00u;
        // 0x11cb04: 0x16e7823  subu        $t7, $t3, $t6 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cb00) {
            ctx->pc = 0x11CB14u;
            goto label_11cb14;
        }
    }
    ctx->pc = 0x11CB08u;
    // 0x11cb08: 0x11c00003  beqz        $t6, . + 4 + (0x3 << 2)
    ctx->pc = 0x11CB08u;
    {
        const bool branch_taken_0x11cb08 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CB08u;
        // 0x11cb0c: 0x14e7823  subu        $t7, $t2, $t6 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cb08) {
            ctx->pc = 0x11CB18u;
            goto label_11cb18;
        }
    }
    ctx->pc = 0x11CB10u;
    // 0x11cb10: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x11cb10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11cb14:
    // 0x11cb14: 0xadaf0000  sw          $t7, 0x0($t5)
    ctx->pc = 0x11cb14u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 15));
label_11cb18:
    // 0x11cb18: 0x258cffff  addiu       $t4, $t4, -0x1
    ctx->pc = 0x11cb18u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
    // 0x11cb1c: 0x1580fff7  bnez        $t4, . + 4 + (-0x9 << 2)
    ctx->pc = 0x11CB1Cu;
    {
        const bool branch_taken_0x11cb1c = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x11CB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CB1Cu;
        // 0x11cb20: 0x25ad0004  addiu       $t5, $t5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cb1c) {
            ctx->pc = 0x11CAFCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11cafc;
        }
    }
    ctx->pc = 0x11CB24u;
label_11cb24:
    // 0x11cb24: 0x8fac0250  lw          $t4, 0x250($sp)
    ctx->pc = 0x11cb24u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x11cb28: 0x19800005  blez        $t4, . + 4 + (0x5 << 2)
    ctx->pc = 0x11CB28u;
    {
        const bool branch_taken_0x11cb28 = (GPR_S64(ctx, 12) <= 0);
        ctx->pc = 0x11CB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CB28u;
        // 0x11cb2c: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cb28) {
            ctx->pc = 0x11CB40u;
            goto label_11cb40;
        }
    }
    ctx->pc = 0x11CB30u;
    // 0x11cb30: 0x118f01b3  beq         $t4, $t7, . + 4 + (0x1B3 << 2)
    ctx->pc = 0x11CB30u;
    {
        const bool branch_taken_0x11cb30 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 15));
        ctx->pc = 0x11CB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CB30u;
        // 0x11cb34: 0x240f0002  addiu       $t7, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cb30) {
            ctx->pc = 0x11D200u;
            goto label_11d200;
        }
    }
    ctx->pc = 0x11CB38u;
    // 0x11cb38: 0x118f01aa  beq         $t4, $t7, . + 4 + (0x1AA << 2)
    ctx->pc = 0x11CB38u;
    {
        const bool branch_taken_0x11cb38 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 15));
        ctx->pc = 0x11CB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CB38u;
        // 0x11cb3c: 0x166880  sll         $t5, $s6, 2 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cb38) {
            ctx->pc = 0x11D1E4u;
            goto label_11d1e4;
        }
    }
    ctx->pc = 0x11CB40u;
label_11cb40:
    // 0x11cb40: 0x8fad0254  lw          $t5, 0x254($sp)
    ctx->pc = 0x11cb40u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 596)));
    // 0x11cb44: 0x240f0002  addiu       $t7, $zero, 0x2
    ctx->pc = 0x11cb44u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x11cb48: 0x15af0010  bne         $t5, $t7, . + 4 + (0x10 << 2)
    ctx->pc = 0x11CB48u;
    {
        const bool branch_taken_0x11cb48 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 15));
        ctx->pc = 0x11CB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CB48u;
        // 0x11cb4c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cb48) {
            ctx->pc = 0x11CB8Cu;
            goto label_11cb8c;
        }
    }
    ctx->pc = 0x11CB50u;
    // 0x11cb50: 0x241103ff  addiu       $s1, $zero, 0x3FF
    ctx->pc = 0x11cb50u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    // 0x11cb54: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x11cb54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cb58: 0x118d3c  dsll32      $s1, $s1, 20
    ctx->pc = 0x11cb58u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << (32 + 20));
    // 0x11cb5c: 0xc04ba4c  jal         func_12E930
    ctx->pc = 0x11CB5Cu;
    SET_GPR_U32(ctx, 31, 0x11CB64u);
    ctx->pc = 0x11CB60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CB5Cu;
    // 0x11cb60: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E930u, 0x11CB5Cu, 0x11CB64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CB64u;
label_11cb64:
    // 0x11cb64: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x11CB64u;
    {
        const bool branch_taken_0x11cb64 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CB64u;
        // 0x11cb68: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cb64) {
            ctx->pc = 0x11CB88u;
            goto label_11cb88;
        }
    }
    ctx->pc = 0x11CB6Cu;
    // 0x11cb6c: 0x8fa50250  lw          $a1, 0x250($sp)
    ctx->pc = 0x11cb6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x11cb70: 0xc047946  jal         func_11E518
    ctx->pc = 0x11CB70u;
    SET_GPR_U32(ctx, 31, 0x11CB78u);
    ctx->pc = 0x11CB74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CB70u;
    // 0x11cb74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E518u, 0x11CB70u, 0x11CB78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CB78u;
label_11cb78:
    // 0x11cb78: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11cb78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cb7c: 0xc04ba4c  jal         func_12E930
    ctx->pc = 0x11CB7Cu;
    SET_GPR_U32(ctx, 31, 0x11CB84u);
    ctx->pc = 0x11CB80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CB7Cu;
    // 0x11cb80: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E930u, 0x11CB7Cu, 0x11CB84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CB84u;
label_11cb84:
    // 0x11cb84: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x11cb84u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11cb88:
    // 0x11cb88: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11cb88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_11cb8c:
    // 0x11cb8c: 0xc04bb8e  jal         func_12EE38
    ctx->pc = 0x11CB8Cu;
    SET_GPR_U32(ctx, 31, 0x11CB94u);
    ctx->pc = 0x11CB90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CB8Cu;
    // 0x11cb90: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EE38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EE38u, 0x11CB8Cu, 0x11CB94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CB94u;
label_11cb94:
    // 0x11cb94: 0x14400060  bnez        $v0, . + 4 + (0x60 << 2)
    ctx->pc = 0x11CB94u;
    {
        const bool branch_taken_0x11cb94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11CB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CB94u;
        // 0x11cb98: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cb94) {
            ctx->pc = 0x11CD18u;
            goto label_11cd18;
        }
    }
    ctx->pc = 0x11CB9Cu;
    // 0x11cb9c: 0x8fab0248  lw          $t3, 0x248($sp)
    ctx->pc = 0x11cb9cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 584)));
    // 0x11cba0: 0x26d4ffff  addiu       $s4, $s6, -0x1
    ctx->pc = 0x11cba0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
    // 0x11cba4: 0x28b782a  slt         $t7, $s4, $t3
    ctx->pc = 0x11cba4u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
    // 0x11cba8: 0x15e0000d  bnez        $t7, . + 4 + (0xD << 2)
    ctx->pc = 0x11CBA8u;
    {
        const bool branch_taken_0x11cba8 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x11CBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CBA8u;
        // 0x11cbac: 0x702d  daddu       $t6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cba8) {
            ctx->pc = 0x11CBE0u;
            goto label_11cbe0;
        }
    }
    ctx->pc = 0x11CBB0u;
    // 0x11cbb0: 0x147880  sll         $t7, $s4, 2
    ctx->pc = 0x11cbb0u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x11cbb4: 0x1c0602d  daddu       $t4, $t6, $zero
    ctx->pc = 0x11cbb4u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cbb8: 0x1fd6821  addu        $t5, $t7, $sp
    ctx->pc = 0x11cbb8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 29)));
label_11cbbc:
    // 0x11cbbc: 0x8daf0000  lw          $t7, 0x0($t5)
    ctx->pc = 0x11cbbcu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x11cbc0: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x11cbc0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x11cbc4: 0x28b702a  slt         $t6, $s4, $t3
    ctx->pc = 0x11cbc4u;
    SET_GPR_U64(ctx, 14, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
    // 0x11cbc8: 0x18f6025  or          $t4, $t4, $t7
    ctx->pc = 0x11cbc8u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 15));
    // 0x11cbcc: 0x0  nop
    ctx->pc = 0x11cbccu;
    // NOP
    // 0x11cbd0: 0x11c0fffa  beqz        $t6, . + 4 + (-0x6 << 2)
    ctx->pc = 0x11CBD0u;
    {
        const bool branch_taken_0x11cbd0 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CBD0u;
        // 0x11cbd4: 0x25adfffc  addiu       $t5, $t5, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cbd0) {
            ctx->pc = 0x11CBBCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11cbbc;
        }
    }
    ctx->pc = 0x11CBD8u;
    // 0x11cbd8: 0xafab0248  sw          $t3, 0x248($sp)
    ctx->pc = 0x11cbd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 584), GPR_U32(ctx, 11));
    // 0x11cbdc: 0x180702d  daddu       $t6, $t4, $zero
    ctx->pc = 0x11cbdcu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
label_11cbe0:
    // 0x11cbe0: 0x15c0004d  bnez        $t6, . + 4 + (0x4D << 2)
    ctx->pc = 0x11CBE0u;
    {
        const bool branch_taken_0x11cbe0 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x11CBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CBE0u;
        // 0x11cbe4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cbe0) {
            ctx->pc = 0x11CD18u;
            goto label_11cd18;
        }
    }
    ctx->pc = 0x11CBE8u;
    // 0x11cbe8: 0x8fac0248  lw          $t4, 0x248($sp)
    ctx->pc = 0x11cbe8u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 584)));
    // 0x11cbec: 0x258fffff  addiu       $t7, $t4, -0x1
    ctx->pc = 0x11cbecu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
    // 0x11cbf0: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x11cbf0u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x11cbf4: 0x1fd7821  addu        $t7, $t7, $sp
    ctx->pc = 0x11cbf4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 29)));
    // 0x11cbf8: 0x8dee0000  lw          $t6, 0x0($t7)
    ctx->pc = 0x11cbf8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x11cbfc: 0x15c0000b  bnez        $t6, . + 4 + (0xB << 2)
    ctx->pc = 0x11CBFCu;
    {
        const bool branch_taken_0x11cbfc = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x11CC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CBFCu;
        // 0x11cc00: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cbfc) {
            ctx->pc = 0x11CC2Cu;
            goto label_11cc2c;
        }
    }
    ctx->pc = 0x11CC04u;
    // 0x11cc04: 0xc7880  sll         $t7, $t4, 2
    ctx->pc = 0x11cc04u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
    // 0x11cc08: 0x1fd7821  addu        $t7, $t7, $sp
    ctx->pc = 0x11cc08u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 29)));
    // 0x11cc0c: 0x25eefffc  addiu       $t6, $t7, -0x4
    ctx->pc = 0x11cc0cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967292));
label_11cc10:
    // 0x11cc10: 0x25cefffc  addiu       $t6, $t6, -0x4
    ctx->pc = 0x11cc10u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967292));
    // 0x11cc14: 0x8dcf0000  lw          $t7, 0x0($t6)
    ctx->pc = 0x11cc14u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x11cc18: 0x0  nop
    ctx->pc = 0x11cc18u;
    // NOP
    // 0x11cc1c: 0x0  nop
    ctx->pc = 0x11cc1cu;
    // NOP
    // 0x11cc20: 0x0  nop
    ctx->pc = 0x11cc20u;
    // NOP
    // 0x11cc24: 0x11e0fffa  beqz        $t7, . + 4 + (-0x6 << 2)
    ctx->pc = 0x11CC24u;
    {
        const bool branch_taken_0x11cc24 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CC24u;
        // 0x11cc28: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cc24) {
            ctx->pc = 0x11CC10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11cc10;
        }
    }
    ctx->pc = 0x11CC2Cu;
label_11cc2c:
    // 0x11cc2c: 0x2d08021  addu        $s0, $s6, $s0
    ctx->pc = 0x11cc2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 16)));
    // 0x11cc30: 0x26d40001  addiu       $s4, $s6, 0x1
    ctx->pc = 0x11cc30u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x11cc34: 0x214782a  slt         $t7, $s0, $s4
    ctx->pc = 0x11cc34u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x11cc38: 0x15e00035  bnez        $t7, . + 4 + (0x35 << 2)
    ctx->pc = 0x11CC38u;
    {
        const bool branch_taken_0x11cc38 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x11CC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CC38u;
        // 0x11cc3c: 0xafb0025c  sw          $s0, 0x25C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 604), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cc38) {
            ctx->pc = 0x11CD10u;
            goto label_11cd10;
        }
    }
    ctx->pc = 0x11CC40u;
    // 0x11cc40: 0x8fad0240  lw          $t5, 0x240($sp)
    ctx->pc = 0x11cc40u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x11cc44: 0x1470c0  sll         $t6, $s4, 3
    ctx->pc = 0x11cc44u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
    // 0x11cc48: 0x8fab0244  lw          $t3, 0x244($sp)
    ctx->pc = 0x11cc48u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 580)));
    // 0x11cc4c: 0xd78c0  sll         $t7, $t5, 3
    ctx->pc = 0x11cc4cu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 13), 3));
    // 0x11cc50: 0x1cf7821  addu        $t7, $t6, $t7
    ctx->pc = 0x11cc50u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 15)));
    // 0x11cc54: 0x1746821  addu        $t5, $t3, $s4
    ctx->pc = 0x11cc54u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 20)));
    // 0x11cc58: 0x8fab0240  lw          $t3, 0x240($sp)
    ctx->pc = 0x11cc58u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x11cc5c: 0x1fd7821  addu        $t7, $t7, $sp
    ctx->pc = 0x11cc5cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 29)));
    // 0x11cc60: 0x1dd7021  addu        $t6, $t6, $sp
    ctx->pc = 0x11cc60u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 29)));
    // 0x11cc64: 0x25f70050  addiu       $s7, $t7, 0x50
    ctx->pc = 0x11cc64u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 15), 80));
    // 0x11cc68: 0x25d60190  addiu       $s6, $t6, 0x190
    ctx->pc = 0x11cc68u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 14), 400));
    // 0x11cc6c: 0x1746021  addu        $t4, $t3, $s4
    ctx->pc = 0x11cc6cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 20)));
    // 0x11cc70: 0x8fae023c  lw          $t6, 0x23C($sp)
    ctx->pc = 0x11cc70u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 572)));
    // 0x11cc74: 0x296f0000  slti        $t7, $t3, 0x0
    ctx->pc = 0x11cc74u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x11cc78: 0xd6880  sll         $t5, $t5, 2
    ctx->pc = 0x11cc78u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 13), 2));
    // 0x11cc7c: 0xafaf0260  sw          $t7, 0x260($sp)
    ctx->pc = 0x11cc7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 608), GPR_U32(ctx, 15));
    // 0x11cc80: 0xc60c0  sll         $t4, $t4, 3
    ctx->pc = 0x11cc80u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
    // 0x11cc84: 0x1aea821  addu        $s5, $t5, $t6
    ctx->pc = 0x11cc84u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 14)));
    // 0x11cc88: 0x19df021  addu        $fp, $t4, $sp
    ctx->pc = 0x11cc88u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 29)));
label_11cc8c:
    // 0x11cc8c: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x11cc8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x11cc90: 0xc04bba2  jal         func_12EE88
    ctx->pc = 0x11CC90u;
    SET_GPR_U32(ctx, 31, 0x11CC98u);
    ctx->pc = 0x11CC94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CC90u;
    // 0x11cc94: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EE88u, 0x11CC90u, 0x11CC98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CC98u;
label_11cc98:
    // 0x11cc98: 0xfee20000  sd          $v0, 0x0($s7)
    ctx->pc = 0x11cc98u;
    WRITE64(ADD32(GPR_U32(ctx, 23), 0), GPR_U64(ctx, 2));
    // 0x11cc9c: 0x8fab0260  lw          $t3, 0x260($sp)
    ctx->pc = 0x11cc9cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x11cca0: 0x55600013  bnel        $t3, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x11CCA0u;
    {
        const bool branch_taken_0x11cca0 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        if (branch_taken_0x11cca0) {
            ctx->pc = 0x11CCA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11CCA0u;
            // 0x11cca4: 0xfed20000  sd          $s2, 0x0($s6) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 22), 0), GPR_U64(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11CCF0u;
            goto label_11ccf0;
        }
    }
    ctx->pc = 0x11CCA8u;
    // 0x11cca8: 0x8fac0240  lw          $t4, 0x240($sp)
    ctx->pc = 0x11cca8u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x11ccac: 0x240982d  daddu       $s3, $s2, $zero
    ctx->pc = 0x11ccacu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ccb0: 0x8fb00230  lw          $s0, 0x230($sp)
    ctx->pc = 0x11ccb0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x11ccb4: 0x27d10050  addiu       $s1, $fp, 0x50
    ctx->pc = 0x11ccb4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 30), 80));
    // 0x11ccb8: 0x25920001  addiu       $s2, $t4, 0x1
    ctx->pc = 0x11ccb8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
label_11ccbc:
    // 0x11ccbc: 0xde040000  ld          $a0, 0x0($s0)
    ctx->pc = 0x11ccbcu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x11ccc0: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x11ccc0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x11ccc4: 0xde250000  ld          $a1, 0x0($s1)
    ctx->pc = 0x11ccc4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x11ccc8: 0xc04ba66  jal         func_12E998
    ctx->pc = 0x11CCC8u;
    SET_GPR_U32(ctx, 31, 0x11CCD0u);
    ctx->pc = 0x11CCCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CCC8u;
    // 0x11cccc: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E998u, 0x11CCC8u, 0x11CCD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CCD0u;
label_11ccd0:
    // 0x11ccd0: 0x2631fff8  addiu       $s1, $s1, -0x8
    ctx->pc = 0x11ccd0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967288));
    // 0x11ccd4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11ccd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ccd8: 0xc04ba36  jal         func_12E8D8
    ctx->pc = 0x11CCD8u;
    SET_GPR_U32(ctx, 31, 0x11CCE0u);
    ctx->pc = 0x11CCDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CCD8u;
    // 0x11ccdc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E8D8u, 0x11CCD8u, 0x11CCE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CCE0u;
label_11cce0:
    // 0x11cce0: 0x1640fff6  bnez        $s2, . + 4 + (-0xA << 2)
    ctx->pc = 0x11CCE0u;
    {
        const bool branch_taken_0x11cce0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x11CCE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CCE0u;
        // 0x11cce4: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cce0) {
            ctx->pc = 0x11CCBCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11ccbc;
        }
    }
    ctx->pc = 0x11CCE8u;
    // 0x11cce8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x11cce8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ccec: 0xfed20000  sd          $s2, 0x0($s6)
    ctx->pc = 0x11ccecu;
    WRITE64(ADD32(GPR_U32(ctx, 22), 0), GPR_U64(ctx, 18));
label_11ccf0:
    // 0x11ccf0: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x11ccf0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x11ccf4: 0x8fad025c  lw          $t5, 0x25C($sp)
    ctx->pc = 0x11ccf4u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 604)));
    // 0x11ccf8: 0x26f70008  addiu       $s7, $s7, 0x8
    ctx->pc = 0x11ccf8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 8));
    // 0x11ccfc: 0x26b50004  addiu       $s5, $s5, 0x4
    ctx->pc = 0x11ccfcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
    // 0x11cd00: 0x26d60008  addiu       $s6, $s6, 0x8
    ctx->pc = 0x11cd00u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
    // 0x11cd04: 0x1b4782a  slt         $t7, $t5, $s4
    ctx->pc = 0x11cd04u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x11cd08: 0x11e0ffe0  beqz        $t7, . + 4 + (-0x20 << 2)
    ctx->pc = 0x11CD08u;
    {
        const bool branch_taken_0x11cd08 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CD08u;
        // 0x11cd0c: 0x27de0008  addiu       $fp, $fp, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cd08) {
            ctx->pc = 0x11CC8Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11cc8c;
        }
    }
    ctx->pc = 0x11CD10u;
label_11cd10:
    // 0x11cd10: 0x1000ff1e  b           . + 4 + (-0xE2 << 2)
    ctx->pc = 0x11CD10u;
    {
        const bool branch_taken_0x11cd10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CD10u;
        // 0x11cd14: 0x8fb6025c  lw          $s6, 0x25C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 604)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cd10) {
            ctx->pc = 0x11C98Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11c98c;
        }
    }
    ctx->pc = 0x11CD18u;
label_11cd18:
    // 0x11cd18: 0xc04bb8e  jal         func_12EE38
    ctx->pc = 0x11CD18u;
    SET_GPR_U32(ctx, 31, 0x11CD20u);
    ctx->pc = 0x11CD1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CD18u;
    // 0x11cd1c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EE38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EE38u, 0x11CD18u, 0x11CD20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CD20u;
label_11cd20:
    // 0x11cd20: 0x14400103  bnez        $v0, . + 4 + (0x103 << 2)
    ctx->pc = 0x11CD20u;
    {
        const bool branch_taken_0x11cd20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11CD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CD20u;
        // 0x11cd24: 0x8fac0250  lw          $t4, 0x250($sp) (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cd20) {
            ctx->pc = 0x11D130u;
            goto label_11d130;
        }
    }
    ctx->pc = 0x11CD28u;
    // 0x11cd28: 0x8fae0250  lw          $t6, 0x250($sp)
    ctx->pc = 0x11cd28u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x11cd2c: 0x26d6ffff  addiu       $s6, $s6, -0x1
    ctx->pc = 0x11cd2cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
    // 0x11cd30: 0x167880  sll         $t7, $s6, 2
    ctx->pc = 0x11cd30u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
    // 0x11cd34: 0x25ceffe8  addiu       $t6, $t6, -0x18
    ctx->pc = 0x11cd34u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967272));
    // 0x11cd38: 0x1fd7821  addu        $t7, $t7, $sp
    ctx->pc = 0x11cd38u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 29)));
    // 0x11cd3c: 0xafae0250  sw          $t6, 0x250($sp)
    ctx->pc = 0x11cd3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 592), GPR_U32(ctx, 14));
    // 0x11cd40: 0x8dee0000  lw          $t6, 0x0($t7)
    ctx->pc = 0x11cd40u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x11cd44: 0x55c0000a  bnel        $t6, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x11CD44u;
    {
        const bool branch_taken_0x11cd44 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        if (branch_taken_0x11cd44) {
            ctx->pc = 0x11CD48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11CD44u;
            // 0x11cd48: 0x8fa50250  lw          $a1, 0x250($sp) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11CD70u;
            goto label_11cd70;
        }
    }
    ctx->pc = 0x11CD4Cu;
    // 0x11cd4c: 0x1e0702d  daddu       $t6, $t7, $zero
    ctx->pc = 0x11cd4cu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
label_11cd50:
    // 0x11cd50: 0x8fab0250  lw          $t3, 0x250($sp)
    ctx->pc = 0x11cd50u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x11cd54: 0x25cefffc  addiu       $t6, $t6, -0x4
    ctx->pc = 0x11cd54u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967292));
    // 0x11cd58: 0x8dcf0000  lw          $t7, 0x0($t6)
    ctx->pc = 0x11cd58u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x11cd5c: 0x26d6ffff  addiu       $s6, $s6, -0x1
    ctx->pc = 0x11cd5cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
    // 0x11cd60: 0x256bffe8  addiu       $t3, $t3, -0x18
    ctx->pc = 0x11cd60u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967272));
    // 0x11cd64: 0x11e0fffa  beqz        $t7, . + 4 + (-0x6 << 2)
    ctx->pc = 0x11CD64u;
    {
        const bool branch_taken_0x11cd64 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CD64u;
        // 0x11cd68: 0xafab0250  sw          $t3, 0x250($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 592), GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cd64) {
            ctx->pc = 0x11CD50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11cd50;
        }
    }
    ctx->pc = 0x11CD6Cu;
label_11cd6c:
    // 0x11cd6c: 0x8fa50250  lw          $a1, 0x250($sp)
    ctx->pc = 0x11cd6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
label_11cd70:
    // 0x11cd70: 0x240403ff  addiu       $a0, $zero, 0x3FF
    ctx->pc = 0x11cd70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    // 0x11cd74: 0x4253c  dsll32      $a0, $a0, 20
    ctx->pc = 0x11cd74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 20));
    // 0x11cd78: 0xc047946  jal         func_11E518
    ctx->pc = 0x11CD78u;
    SET_GPR_U32(ctx, 31, 0x11CD80u);
    ctx->pc = 0x11CD7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CD78u;
    // 0x11cd7c: 0x2c0a02d  daddu       $s4, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E518u, 0x11CD78u, 0x11CD80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CD80u;
label_11cd80:
    // 0x11cd80: 0x6c00039  bltz        $s6, . + 4 + (0x39 << 2)
    ctx->pc = 0x11CD80u;
    {
        const bool branch_taken_0x11cd80 = (GPR_S64(ctx, 22) < 0);
        ctx->pc = 0x11CD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CD80u;
        // 0x11cd84: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cd80) {
            ctx->pc = 0x11CE68u;
            goto label_11ce68;
        }
    }
    ctx->pc = 0x11CD88u;
    // 0x11cd88: 0x1678c0  sll         $t7, $s6, 3
    ctx->pc = 0x11cd88u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 22), 3));
    // 0x11cd8c: 0x167080  sll         $t6, $s6, 2
    ctx->pc = 0x11cd8cu;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
    // 0x11cd90: 0x1fd7821  addu        $t7, $t7, $sp
    ctx->pc = 0x11cd90u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 29)));
    // 0x11cd94: 0x1dd8821  addu        $s1, $t6, $sp
    ctx->pc = 0x11cd94u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 29)));
    // 0x11cd98: 0x25f00190  addiu       $s0, $t7, 0x190
    ctx->pc = 0x11cd98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 15), 400));
label_11cd9c:
    // 0x11cd9c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x11cd9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x11cda0: 0xc04bba2  jal         func_12EE88
    ctx->pc = 0x11CDA0u;
    SET_GPR_U32(ctx, 31, 0x11CDA8u);
    ctx->pc = 0x11CDA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CDA0u;
    // 0x11cda4: 0x2694ffff  addiu       $s4, $s4, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EE88u, 0x11CDA0u, 0x11CDA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CDA8u;
label_11cda8:
    // 0x11cda8: 0x2631fffc  addiu       $s1, $s1, -0x4
    ctx->pc = 0x11cda8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
    // 0x11cdac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11cdacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cdb0: 0xc04ba66  jal         func_12E998
    ctx->pc = 0x11CDB0u;
    SET_GPR_U32(ctx, 31, 0x11CDB8u);
    ctx->pc = 0x11CDB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CDB0u;
    // 0x11cdb4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E998u, 0x11CDB0u, 0x11CDB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CDB8u;
label_11cdb8:
    // 0x11cdb8: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x11cdb8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x11cdbc: 0x240503e7  addiu       $a1, $zero, 0x3E7
    ctx->pc = 0x11cdbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
    // 0x11cdc0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11cdc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cdc4: 0xc04ba66  jal         func_12E998
    ctx->pc = 0x11CDC4u;
    SET_GPR_U32(ctx, 31, 0x11CDCCu);
    ctx->pc = 0x11CDC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CDC4u;
    // 0x11cdc8: 0x52d3c  dsll32      $a1, $a1, 20 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E998u, 0x11CDC4u, 0x11CDCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CDCCu;
label_11cdcc:
    // 0x11cdcc: 0x2610fff8  addiu       $s0, $s0, -0x8
    ctx->pc = 0x11cdccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
    // 0x11cdd0: 0x681fff2  bgez        $s4, . + 4 + (-0xE << 2)
    ctx->pc = 0x11CDD0u;
    {
        const bool branch_taken_0x11cdd0 = (GPR_S64(ctx, 20) >= 0);
        ctx->pc = 0x11CDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CDD0u;
        // 0x11cdd4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cdd0) {
            ctx->pc = 0x11CD9Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11cd9c;
        }
    }
    ctx->pc = 0x11CDD8u;
    // 0x11cdd8: 0x6c00023  bltz        $s6, . + 4 + (0x23 << 2)
    ctx->pc = 0x11CDD8u;
    {
        const bool branch_taken_0x11cdd8 = (GPR_S64(ctx, 22) < 0);
        ctx->pc = 0x11CDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CDD8u;
        // 0x11cddc: 0x2c0a02d  daddu       $s4, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cdd8) {
            ctx->pc = 0x11CE68u;
            goto label_11ce68;
        }
    }
    ctx->pc = 0x11CDE0u;
    // 0x11cde0: 0x1678c0  sll         $t7, $s6, 3
    ctx->pc = 0x11cde0u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 22), 3));
    // 0x11cde4: 0x1fdf021  addu        $fp, $t7, $sp
    ctx->pc = 0x11cde4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 29)));
label_11cde8:
    // 0x11cde8: 0x8fae0258  lw          $t6, 0x258($sp)
    ctx->pc = 0x11cde8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 600)));
    // 0x11cdec: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x11cdecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cdf0: 0x15c000cd  bnez        $t6, . + 4 + (0xCD << 2)
    ctx->pc = 0x11CDF0u;
    {
        const bool branch_taken_0x11cdf0 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x11CDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CDF0u;
        // 0x11cdf4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cdf0) {
            ctx->pc = 0x11D128u;
            goto label_11d128;
        }
    }
    ctx->pc = 0x11CDF8u;
    // 0x11cdf8: 0x2d4a823  subu        $s5, $s6, $s4
    ctx->pc = 0x11cdf8u;
    SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 20)));
    // 0x11cdfc: 0x6a00014  bltz        $s5, . + 4 + (0x14 << 2)
    ctx->pc = 0x11CDFCu;
    {
        const bool branch_taken_0x11cdfc = (GPR_S64(ctx, 21) < 0);
        ctx->pc = 0x11CE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CDFCu;
        // 0x11ce00: 0x2a0b82d  daddu       $s7, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cdfc) {
            ctx->pc = 0x11CE50u;
            goto label_11ce50;
        }
    }
    ctx->pc = 0x11CE04u;
    // 0x11ce04: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x11ce04u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x11ce08: 0x27d30190  addiu       $s3, $fp, 0x190
    ctx->pc = 0x11ce08u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 30), 400));
    // 0x11ce0c: 0x25f13398  addiu       $s1, $t7, 0x3398
    ctx->pc = 0x11ce0cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 15), 13208));
    // 0x11ce10: 0xde240000  ld          $a0, 0x0($s1)
    ctx->pc = 0x11ce10u;
    SET_GPR_U64(ctx, 4, FAST_READ64(0x663398u));
label_11ce14:
    // 0x11ce14: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x11ce14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x11ce18: 0xde650000  ld          $a1, 0x0($s3)
    ctx->pc = 0x11ce18u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x11ce1c: 0xc04ba66  jal         func_12E998
    ctx->pc = 0x11CE1Cu;
    SET_GPR_U32(ctx, 31, 0x11CE24u);
    ctx->pc = 0x11CE20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CE1Cu;
    // 0x11ce20: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E998u, 0x11CE1Cu, 0x11CE24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CE24u;
label_11ce24:
    // 0x11ce24: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x11ce24u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x11ce28: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11ce28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ce2c: 0xc04ba36  jal         func_12E8D8
    ctx->pc = 0x11CE2Cu;
    SET_GPR_U32(ctx, 31, 0x11CE34u);
    ctx->pc = 0x11CE30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CE2Cu;
    // 0x11ce30: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E8D8u, 0x11CE2Cu, 0x11CE34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CE34u;
label_11ce34:
    // 0x11ce34: 0x8fab0248  lw          $t3, 0x248($sp)
    ctx->pc = 0x11ce34u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 584)));
    // 0x11ce38: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x11ce38u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ce3c: 0x170782a  slt         $t7, $t3, $s0
    ctx->pc = 0x11ce3cu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x11ce40: 0x15e00003  bnez        $t7, . + 4 + (0x3 << 2)
    ctx->pc = 0x11CE40u;
    {
        const bool branch_taken_0x11ce40 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x11CE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CE40u;
        // 0x11ce44: 0x2f0702a  slt         $t6, $s7, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 14, ((int64_t)GPR_S64(ctx, 23) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ce40) {
            ctx->pc = 0x11CE50u;
            goto label_11ce50;
        }
    }
    ctx->pc = 0x11CE48u;
    // 0x11ce48: 0x51c0fff2  beql        $t6, $zero, . + 4 + (-0xE << 2)
    ctx->pc = 0x11CE48u;
    {
        const bool branch_taken_0x11ce48 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        if (branch_taken_0x11ce48) {
            ctx->pc = 0x11CE4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11CE48u;
            // 0x11ce4c: 0xde240000  ld          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11CE14u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11ce14;
        }
    }
    ctx->pc = 0x11CE50u;
label_11ce50:
    // 0x11ce50: 0x1578c0  sll         $t7, $s5, 3
    ctx->pc = 0x11ce50u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 21), 3));
    // 0x11ce54: 0x27defff8  addiu       $fp, $fp, -0x8
    ctx->pc = 0x11ce54u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967288));
    // 0x11ce58: 0x1fd7821  addu        $t7, $t7, $sp
    ctx->pc = 0x11ce58u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 29)));
    // 0x11ce5c: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x11ce5cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x11ce60: 0x681ffe1  bgez        $s4, . + 4 + (-0x1F << 2)
    ctx->pc = 0x11CE60u;
    {
        const bool branch_taken_0x11ce60 = (GPR_S64(ctx, 20) >= 0);
        ctx->pc = 0x11CE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CE60u;
        // 0x11ce64: 0xfdf200f0  sd          $s2, 0xF0($t7) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 15), 240), GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ce60) {
            ctx->pc = 0x11CDE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11cde8;
        }
    }
    ctx->pc = 0x11CE68u;
label_11ce68:
    // 0x11ce68: 0x8fac0238  lw          $t4, 0x238($sp)
    ctx->pc = 0x11ce68u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 568)));
    // 0x11ce6c: 0x298f0003  slti        $t7, $t4, 0x3
    ctx->pc = 0x11ce6cu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 12) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x11ce70: 0x11e00055  beqz        $t7, . + 4 + (0x55 << 2)
    ctx->pc = 0x11CE70u;
    {
        const bool branch_taken_0x11ce70 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CE70u;
        // 0x11ce74: 0x8fad0238  lw          $t5, 0x238($sp) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 568)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ce70) {
            ctx->pc = 0x11CFC8u;
            goto label_11cfc8;
        }
    }
    ctx->pc = 0x11CE78u;
    // 0x11ce78: 0x5d800026  bgtzl       $t4, . + 4 + (0x26 << 2)
    ctx->pc = 0x11CE78u;
    {
        const bool branch_taken_0x11ce78 = (GPR_S64(ctx, 12) > 0);
        if (branch_taken_0x11ce78) {
            ctx->pc = 0x11CE7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11CE78u;
            // 0x11ce7c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11CF14u;
            goto label_11cf14;
        }
    }
    ctx->pc = 0x11CE80u;
    // 0x11ce80: 0x1180000f  beqz        $t4, . + 4 + (0xF << 2)
    ctx->pc = 0x11CE80u;
    {
        const bool branch_taken_0x11ce80 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CE80u;
        // 0x11ce84: 0x2c0a02d  daddu       $s4, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ce80) {
            ctx->pc = 0x11CEC0u;
            goto label_11cec0;
        }
    }
    ctx->pc = 0x11CE88u;
label_11ce88:
    // 0x11ce88: 0x8faf024c  lw          $t7, 0x24C($sp)
    ctx->pc = 0x11ce88u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 588)));
label_11ce8c:
    // 0x11ce8c: 0xdfb00270  ld          $s0, 0x270($sp)
    ctx->pc = 0x11ce8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 624)));
    // 0x11ce90: 0xdfb10278  ld          $s1, 0x278($sp)
    ctx->pc = 0x11ce90u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 632)));
    // 0x11ce94: 0x31e20007  andi        $v0, $t7, 0x7
    ctx->pc = 0x11ce94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)7);
    // 0x11ce98: 0xdfb20280  ld          $s2, 0x280($sp)
    ctx->pc = 0x11ce98u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x11ce9c: 0xdfb30288  ld          $s3, 0x288($sp)
    ctx->pc = 0x11ce9cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 648)));
    // 0x11cea0: 0xdfb40290  ld          $s4, 0x290($sp)
    ctx->pc = 0x11cea0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x11cea4: 0xdfb50298  ld          $s5, 0x298($sp)
    ctx->pc = 0x11cea4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x11cea8: 0xdfb602a0  ld          $s6, 0x2A0($sp)
    ctx->pc = 0x11cea8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x11ceac: 0xdfb702a8  ld          $s7, 0x2A8($sp)
    ctx->pc = 0x11ceacu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 680)));
    // 0x11ceb0: 0xdfbe02b0  ld          $fp, 0x2B0($sp)
    ctx->pc = 0x11ceb0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x11ceb4: 0xdfbf02b8  ld          $ra, 0x2B8($sp)
    ctx->pc = 0x11ceb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 696)));
    // 0x11ceb8: 0x3e00008  jr          $ra
    ctx->pc = 0x11CEB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11CEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CEB8u;
        // 0x11cebc: 0x27bd02c0  addiu       $sp, $sp, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11CEB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11CEC0u;
label_11cec0:
    // 0x11cec0: 0x6c0000b  bltz        $s6, . + 4 + (0xB << 2)
    ctx->pc = 0x11CEC0u;
    {
        const bool branch_taken_0x11cec0 = (GPR_S64(ctx, 22) < 0);
        ctx->pc = 0x11CEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CEC0u;
        // 0x11cec4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cec0) {
            ctx->pc = 0x11CEF0u;
            goto label_11cef0;
        }
    }
    ctx->pc = 0x11CEC8u;
    // 0x11cec8: 0x1678c0  sll         $t7, $s6, 3
    ctx->pc = 0x11cec8u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 22), 3));
    // 0x11cecc: 0x1fd7821  addu        $t7, $t7, $sp
    ctx->pc = 0x11ceccu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 29)));
    // 0x11ced0: 0x25f000f0  addiu       $s0, $t7, 0xF0
    ctx->pc = 0x11ced0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 15), 240));
label_11ced4:
    // 0x11ced4: 0xde050000  ld          $a1, 0x0($s0)
    ctx->pc = 0x11ced4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x11ced8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11ced8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cedc: 0xc04ba36  jal         func_12E8D8
    ctx->pc = 0x11CEDCu;
    SET_GPR_U32(ctx, 31, 0x11CEE4u);
    ctx->pc = 0x11CEE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CEDCu;
    // 0x11cee0: 0x2694ffff  addiu       $s4, $s4, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E8D8u, 0x11CEDCu, 0x11CEE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CEE4u;
label_11cee4:
    // 0x11cee4: 0x2610fff8  addiu       $s0, $s0, -0x8
    ctx->pc = 0x11cee4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
    // 0x11cee8: 0x681fffa  bgez        $s4, . + 4 + (-0x6 << 2)
    ctx->pc = 0x11CEE8u;
    {
        const bool branch_taken_0x11cee8 = (GPR_S64(ctx, 20) >= 0);
        ctx->pc = 0x11CEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CEE8u;
        // 0x11ceec: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cee8) {
            ctx->pc = 0x11CED4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11ced4;
        }
    }
    ctx->pc = 0x11CEF0u;
label_11cef0:
    // 0x11cef0: 0x8fae0254  lw          $t6, 0x254($sp)
    ctx->pc = 0x11cef0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 596)));
    // 0x11cef4: 0x11c00004  beqz        $t6, . + 4 + (0x4 << 2)
    ctx->pc = 0x11CEF4u;
    {
        const bool branch_taken_0x11cef4 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CEF4u;
        // 0x11cef8: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cef4) {
            ctx->pc = 0x11CF08u;
            goto label_11cf08;
        }
    }
    ctx->pc = 0x11CEFCu;
    // 0x11cefc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x11cefcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cf00: 0xc04ba4c  jal         func_12E930
    ctx->pc = 0x11CF00u;
    SET_GPR_U32(ctx, 31, 0x11CF08u);
    ctx->pc = 0x11CF04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CF00u;
    // 0x11cf04: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E930u, 0x11CF00u, 0x11CF08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CF08u;
label_11cf08:
    // 0x11cf08: 0x8faf0234  lw          $t7, 0x234($sp)
    ctx->pc = 0x11cf08u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 564)));
    // 0x11cf0c: 0x1000ffde  b           . + 4 + (-0x22 << 2)
    ctx->pc = 0x11CF0Cu;
    {
        const bool branch_taken_0x11cf0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CF0Cu;
        // 0x11cf10: 0xfde20000  sd          $v0, 0x0($t7) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 15), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cf0c) {
            ctx->pc = 0x11CE88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11ce88;
        }
    }
    ctx->pc = 0x11CF14u;
label_11cf14:
    // 0x11cf14: 0x6c0000b  bltz        $s6, . + 4 + (0xB << 2)
    ctx->pc = 0x11CF14u;
    {
        const bool branch_taken_0x11cf14 = (GPR_S64(ctx, 22) < 0);
        ctx->pc = 0x11CF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CF14u;
        // 0x11cf18: 0x2c0a02d  daddu       $s4, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cf14) {
            ctx->pc = 0x11CF44u;
            goto label_11cf44;
        }
    }
    ctx->pc = 0x11CF1Cu;
    // 0x11cf1c: 0x1678c0  sll         $t7, $s6, 3
    ctx->pc = 0x11cf1cu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 22), 3));
    // 0x11cf20: 0x1fd7821  addu        $t7, $t7, $sp
    ctx->pc = 0x11cf20u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 29)));
    // 0x11cf24: 0x25f000f0  addiu       $s0, $t7, 0xF0
    ctx->pc = 0x11cf24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 15), 240));
label_11cf28:
    // 0x11cf28: 0xde050000  ld          $a1, 0x0($s0)
    ctx->pc = 0x11cf28u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x11cf2c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11cf2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cf30: 0xc04ba36  jal         func_12E8D8
    ctx->pc = 0x11CF30u;
    SET_GPR_U32(ctx, 31, 0x11CF38u);
    ctx->pc = 0x11CF34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CF30u;
    // 0x11cf34: 0x2694ffff  addiu       $s4, $s4, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E8D8u, 0x11CF30u, 0x11CF38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CF38u;
label_11cf38:
    // 0x11cf38: 0x2610fff8  addiu       $s0, $s0, -0x8
    ctx->pc = 0x11cf38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
    // 0x11cf3c: 0x681fffa  bgez        $s4, . + 4 + (-0x6 << 2)
    ctx->pc = 0x11CF3Cu;
    {
        const bool branch_taken_0x11cf3c = (GPR_S64(ctx, 20) >= 0);
        ctx->pc = 0x11CF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CF3Cu;
        // 0x11cf40: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cf3c) {
            ctx->pc = 0x11CF28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11cf28;
        }
    }
    ctx->pc = 0x11CF44u;
label_11cf44:
    // 0x11cf44: 0x8fab0254  lw          $t3, 0x254($sp)
    ctx->pc = 0x11cf44u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 596)));
    // 0x11cf48: 0x11600004  beqz        $t3, . + 4 + (0x4 << 2)
    ctx->pc = 0x11CF48u;
    {
        const bool branch_taken_0x11cf48 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CF48u;
        // 0x11cf4c: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cf48) {
            ctx->pc = 0x11CF5Cu;
            goto label_11cf5c;
        }
    }
    ctx->pc = 0x11CF50u;
    // 0x11cf50: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x11cf50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cf54: 0xc04ba4c  jal         func_12E930
    ctx->pc = 0x11CF54u;
    SET_GPR_U32(ctx, 31, 0x11CF5Cu);
    ctx->pc = 0x11CF58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CF54u;
    // 0x11cf58: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E930u, 0x11CF54u, 0x11CF5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CF5Cu;
label_11cf5c:
    // 0x11cf5c: 0xdfa400f0  ld          $a0, 0xF0($sp)
    ctx->pc = 0x11cf5cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x11cf60: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x11cf60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cf64: 0x8fac0234  lw          $t4, 0x234($sp)
    ctx->pc = 0x11cf64u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 564)));
    // 0x11cf68: 0xc04ba4c  jal         func_12E930
    ctx->pc = 0x11CF68u;
    SET_GPR_U32(ctx, 31, 0x11CF70u);
    ctx->pc = 0x11CF6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CF68u;
    // 0x11cf6c: 0xfd820000  sd          $v0, 0x0($t4) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 12), 0), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E930u, 0x11CF68u, 0x11CF70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CF70u;
label_11cf70:
    // 0x11cf70: 0x1ac0000c  blez        $s6, . + 4 + (0xC << 2)
    ctx->pc = 0x11CF70u;
    {
        const bool branch_taken_0x11cf70 = (GPR_S64(ctx, 22) <= 0);
        ctx->pc = 0x11CF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CF70u;
        // 0x11cf74: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cf70) {
            ctx->pc = 0x11CFA4u;
            goto label_11cfa4;
        }
    }
    ctx->pc = 0x11CF78u;
    // 0x11cf78: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x11cf78u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cf7c: 0x2c0802d  daddu       $s0, $s6, $zero
    ctx->pc = 0x11cf7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cf80: 0x27b200f8  addiu       $s2, $sp, 0xF8
    ctx->pc = 0x11cf80u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
label_11cf84:
    // 0x11cf84: 0xde450000  ld          $a1, 0x0($s2)
    ctx->pc = 0x11cf84u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x11cf88: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11cf88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cf8c: 0xc04ba36  jal         func_12E8D8
    ctx->pc = 0x11CF8Cu;
    SET_GPR_U32(ctx, 31, 0x11CF94u);
    ctx->pc = 0x11CF90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CF8Cu;
    // 0x11cf90: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E8D8u, 0x11CF8Cu, 0x11CF94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CF94u;
label_11cf94:
    // 0x11cf94: 0x26520008  addiu       $s2, $s2, 0x8
    ctx->pc = 0x11cf94u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x11cf98: 0x1600fffa  bnez        $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x11CF98u;
    {
        const bool branch_taken_0x11cf98 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x11CF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CF98u;
        // 0x11cf9c: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cf98) {
            ctx->pc = 0x11CF84u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11cf84;
        }
    }
    ctx->pc = 0x11CFA0u;
    // 0x11cfa0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x11cfa0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11cfa4:
    // 0x11cfa4: 0x8fad0254  lw          $t5, 0x254($sp)
    ctx->pc = 0x11cfa4u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 596)));
    // 0x11cfa8: 0x11a00004  beqz        $t5, . + 4 + (0x4 << 2)
    ctx->pc = 0x11CFA8u;
    {
        const bool branch_taken_0x11cfa8 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CFA8u;
        // 0x11cfac: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cfa8) {
            ctx->pc = 0x11CFBCu;
            goto label_11cfbc;
        }
    }
    ctx->pc = 0x11CFB0u;
    // 0x11cfb0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x11cfb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cfb4: 0xc04ba4c  jal         func_12E930
    ctx->pc = 0x11CFB4u;
    SET_GPR_U32(ctx, 31, 0x11CFBCu);
    ctx->pc = 0x11CFB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CFB4u;
    // 0x11cfb8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E930u, 0x11CFB4u, 0x11CFBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CFBCu;
label_11cfbc:
    // 0x11cfbc: 0x8fae0234  lw          $t6, 0x234($sp)
    ctx->pc = 0x11cfbcu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 564)));
    // 0x11cfc0: 0x1000ffb1  b           . + 4 + (-0x4F << 2)
    ctx->pc = 0x11CFC0u;
    {
        const bool branch_taken_0x11cfc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CFC0u;
        // 0x11cfc4: 0xfdc20008  sd          $v0, 0x8($t6) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 14), 8), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cfc0) {
            ctx->pc = 0x11CE88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11ce88;
        }
    }
    ctx->pc = 0x11CFC8u;
label_11cfc8:
    // 0x11cfc8: 0x240f0003  addiu       $t7, $zero, 0x3
    ctx->pc = 0x11cfc8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x11cfcc: 0x15afffaf  bne         $t5, $t7, . + 4 + (-0x51 << 2)
    ctx->pc = 0x11CFCCu;
    {
        const bool branch_taken_0x11cfcc = (GPR_U64(ctx, 13) != GPR_U64(ctx, 15));
        ctx->pc = 0x11CFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CFCCu;
        // 0x11cfd0: 0x8faf024c  lw          $t7, 0x24C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cfcc) {
            ctx->pc = 0x11CE8Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11ce8c;
        }
    }
    ctx->pc = 0x11CFD4u;
    // 0x11cfd4: 0x1ac00014  blez        $s6, . + 4 + (0x14 << 2)
    ctx->pc = 0x11CFD4u;
    {
        const bool branch_taken_0x11cfd4 = (GPR_S64(ctx, 22) <= 0);
        ctx->pc = 0x11CFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CFD4u;
        // 0x11cfd8: 0x2c0a02d  daddu       $s4, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cfd4) {
            ctx->pc = 0x11D028u;
            goto label_11d028;
        }
    }
    ctx->pc = 0x11CFDCu;
    // 0x11cfdc: 0x1678c0  sll         $t7, $s6, 3
    ctx->pc = 0x11cfdcu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 22), 3));
    // 0x11cfe0: 0x1fd9821  addu        $s3, $t7, $sp
    ctx->pc = 0x11cfe0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 29)));
label_11cfe4:
    // 0x11cfe4: 0xde7000e8  ld          $s0, 0xE8($s3)
    ctx->pc = 0x11cfe4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 19), 232)));
    // 0x11cfe8: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x11cfe8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x11cfec: 0xde7100f0  ld          $s1, 0xF0($s3)
    ctx->pc = 0x11cfecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 19), 240)));
    // 0x11cff0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11cff0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cff4: 0xc04ba36  jal         func_12E8D8
    ctx->pc = 0x11CFF4u;
    SET_GPR_U32(ctx, 31, 0x11CFFCu);
    ctx->pc = 0x11CFF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CFF4u;
    // 0x11cff8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E8D8u, 0x11CFF4u, 0x11CFFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CFFCu;
label_11cffc:
    // 0x11cffc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x11cffcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d000: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11d000u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d004: 0xc04ba4c  jal         func_12E930
    ctx->pc = 0x11D004u;
    SET_GPR_U32(ctx, 31, 0x11D00Cu);
    ctx->pc = 0x11D008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D004u;
    // 0x11d008: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E930u, 0x11D004u, 0x11D00Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D00Cu;
label_11d00c:
    // 0x11d00c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11d00cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d010: 0xc04ba36  jal         func_12E8D8
    ctx->pc = 0x11D010u;
    SET_GPR_U32(ctx, 31, 0x11D018u);
    ctx->pc = 0x11D014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D010u;
    // 0x11d014: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E8D8u, 0x11D010u, 0x11D018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D018u;
label_11d018:
    // 0x11d018: 0xfe6200f0  sd          $v0, 0xF0($s3)
    ctx->pc = 0x11d018u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 240), GPR_U64(ctx, 2));
    // 0x11d01c: 0xfe7200e8  sd          $s2, 0xE8($s3)
    ctx->pc = 0x11d01cu;
    WRITE64(ADD32(GPR_U32(ctx, 19), 232), GPR_U64(ctx, 18));
    // 0x11d020: 0x1e80fff0  bgtz        $s4, . + 4 + (-0x10 << 2)
    ctx->pc = 0x11D020u;
    {
        const bool branch_taken_0x11d020 = (GPR_S64(ctx, 20) > 0);
        ctx->pc = 0x11D024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D020u;
        // 0x11d024: 0x2673fff8  addiu       $s3, $s3, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d020) {
            ctx->pc = 0x11CFE4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11cfe4;
        }
    }
    ctx->pc = 0x11D028u;
label_11d028:
    // 0x11d028: 0x2acf0002  slti        $t7, $s6, 0x2
    ctx->pc = 0x11d028u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x11d02c: 0x15e00015  bnez        $t7, . + 4 + (0x15 << 2)
    ctx->pc = 0x11D02Cu;
    {
        const bool branch_taken_0x11d02c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x11D030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D02Cu;
        // 0x11d030: 0x2c0a02d  daddu       $s4, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d02c) {
            ctx->pc = 0x11D084u;
            goto label_11d084;
        }
    }
    ctx->pc = 0x11D034u;
    // 0x11d034: 0x1678c0  sll         $t7, $s6, 3
    ctx->pc = 0x11d034u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 22), 3));
    // 0x11d038: 0x1fd9821  addu        $s3, $t7, $sp
    ctx->pc = 0x11d038u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 29)));
label_11d03c:
    // 0x11d03c: 0xde7000e8  ld          $s0, 0xE8($s3)
    ctx->pc = 0x11d03cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 19), 232)));
    // 0x11d040: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x11d040u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x11d044: 0xde7100f0  ld          $s1, 0xF0($s3)
    ctx->pc = 0x11d044u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 19), 240)));
    // 0x11d048: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11d048u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d04c: 0xc04ba36  jal         func_12E8D8
    ctx->pc = 0x11D04Cu;
    SET_GPR_U32(ctx, 31, 0x11D054u);
    ctx->pc = 0x11D050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D04Cu;
    // 0x11d050: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E8D8u, 0x11D04Cu, 0x11D054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D054u;
label_11d054:
    // 0x11d054: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x11d054u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d058: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11d058u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d05c: 0xc04ba4c  jal         func_12E930
    ctx->pc = 0x11D05Cu;
    SET_GPR_U32(ctx, 31, 0x11D064u);
    ctx->pc = 0x11D060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D05Cu;
    // 0x11d060: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E930u, 0x11D05Cu, 0x11D064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D064u;
label_11d064:
    // 0x11d064: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11d064u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d068: 0xc04ba36  jal         func_12E8D8
    ctx->pc = 0x11D068u;
    SET_GPR_U32(ctx, 31, 0x11D070u);
    ctx->pc = 0x11D06Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D068u;
    // 0x11d06c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E8D8u, 0x11D068u, 0x11D070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D070u;
label_11d070:
    // 0x11d070: 0xfe6200f0  sd          $v0, 0xF0($s3)
    ctx->pc = 0x11d070u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 240), GPR_U64(ctx, 2));
    // 0x11d074: 0x2a8f0002  slti        $t7, $s4, 0x2
    ctx->pc = 0x11d074u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x11d078: 0xfe7200e8  sd          $s2, 0xE8($s3)
    ctx->pc = 0x11d078u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 232), GPR_U64(ctx, 18));
    // 0x11d07c: 0x11e0ffef  beqz        $t7, . + 4 + (-0x11 << 2)
    ctx->pc = 0x11D07Cu;
    {
        const bool branch_taken_0x11d07c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D07Cu;
        // 0x11d080: 0x2673fff8  addiu       $s3, $s3, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d07c) {
            ctx->pc = 0x11D03Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11d03c;
        }
    }
    ctx->pc = 0x11D084u;
label_11d084:
    // 0x11d084: 0x2c0a02d  daddu       $s4, $s6, $zero
    ctx->pc = 0x11d084u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d088: 0x2acf0002  slti        $t7, $s6, 0x2
    ctx->pc = 0x11d088u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x11d08c: 0x15e0000c  bnez        $t7, . + 4 + (0xC << 2)
    ctx->pc = 0x11D08Cu;
    {
        const bool branch_taken_0x11d08c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x11D090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D08Cu;
        // 0x11d090: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d08c) {
            ctx->pc = 0x11D0C0u;
            goto label_11d0c0;
        }
    }
    ctx->pc = 0x11D094u;
    // 0x11d094: 0x1678c0  sll         $t7, $s6, 3
    ctx->pc = 0x11d094u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 22), 3));
    // 0x11d098: 0x1fd7821  addu        $t7, $t7, $sp
    ctx->pc = 0x11d098u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 29)));
    // 0x11d09c: 0x25f000f0  addiu       $s0, $t7, 0xF0
    ctx->pc = 0x11d09cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 15), 240));
label_11d0a0:
    // 0x11d0a0: 0xde050000  ld          $a1, 0x0($s0)
    ctx->pc = 0x11d0a0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x11d0a4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11d0a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d0a8: 0xc04ba36  jal         func_12E8D8
    ctx->pc = 0x11D0A8u;
    SET_GPR_U32(ctx, 31, 0x11D0B0u);
    ctx->pc = 0x11D0ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D0A8u;
    // 0x11d0ac: 0x2694ffff  addiu       $s4, $s4, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E8D8u, 0x11D0A8u, 0x11D0B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D0B0u;
label_11d0b0:
    // 0x11d0b0: 0x2610fff8  addiu       $s0, $s0, -0x8
    ctx->pc = 0x11d0b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
    // 0x11d0b4: 0x2a8f0002  slti        $t7, $s4, 0x2
    ctx->pc = 0x11d0b4u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x11d0b8: 0x11e0fff9  beqz        $t7, . + 4 + (-0x7 << 2)
    ctx->pc = 0x11D0B8u;
    {
        const bool branch_taken_0x11d0b8 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D0B8u;
        // 0x11d0bc: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d0b8) {
            ctx->pc = 0x11D0A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11d0a0;
        }
    }
    ctx->pc = 0x11D0C0u;
label_11d0c0:
    // 0x11d0c0: 0x8faf0254  lw          $t7, 0x254($sp)
    ctx->pc = 0x11d0c0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 596)));
    // 0x11d0c4: 0x55e00008  bnel        $t7, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x11D0C4u;
    {
        const bool branch_taken_0x11d0c4 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x11d0c4) {
            ctx->pc = 0x11D0C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11D0C4u;
            // 0x11d0c8: 0xdfa500f0  ld          $a1, 0xF0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11D0E8u;
            goto label_11d0e8;
        }
    }
    ctx->pc = 0x11D0CCu;
    // 0x11d0cc: 0xdfaf00f0  ld          $t7, 0xF0($sp)
    ctx->pc = 0x11d0ccu;
    SET_GPR_U64(ctx, 15, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x11d0d0: 0xdfae00f8  ld          $t6, 0xF8($sp)
    ctx->pc = 0x11d0d0u;
    SET_GPR_U64(ctx, 14, READ64(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x11d0d4: 0x8fab0234  lw          $t3, 0x234($sp)
    ctx->pc = 0x11d0d4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 564)));
    // 0x11d0d8: 0xfd720010  sd          $s2, 0x10($t3)
    ctx->pc = 0x11d0d8u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 16), GPR_U64(ctx, 18));
    // 0x11d0dc: 0xfd6f0000  sd          $t7, 0x0($t3)
    ctx->pc = 0x11d0dcu;
    WRITE64(ADD32(GPR_U32(ctx, 11), 0), GPR_U64(ctx, 15));
    // 0x11d0e0: 0x1000ff69  b           . + 4 + (-0x97 << 2)
    ctx->pc = 0x11D0E0u;
    {
        const bool branch_taken_0x11d0e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D0E0u;
        // 0x11d0e4: 0xfd6e0008  sd          $t6, 0x8($t3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 11), 8), GPR_U64(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d0e0) {
            ctx->pc = 0x11CE88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11ce88;
        }
    }
    ctx->pc = 0x11D0E8u;
label_11d0e8:
    // 0x11d0e8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x11d0e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d0ec: 0xc04ba4c  jal         func_12E930
    ctx->pc = 0x11D0ECu;
    SET_GPR_U32(ctx, 31, 0x11D0F4u);
    ctx->pc = 0x11D0F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D0ECu;
    // 0x11d0f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E930u, 0x11D0ECu, 0x11D0F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D0F4u;
label_11d0f4:
    // 0x11d0f4: 0xdfa500f8  ld          $a1, 0xF8($sp)
    ctx->pc = 0x11d0f4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x11d0f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11d0f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d0fc: 0x8fac0234  lw          $t4, 0x234($sp)
    ctx->pc = 0x11d0fcu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 564)));
    // 0x11d100: 0xc04ba4c  jal         func_12E930
    ctx->pc = 0x11D100u;
    SET_GPR_U32(ctx, 31, 0x11D108u);
    ctx->pc = 0x11D104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D100u;
    // 0x11d104: 0xfd820000  sd          $v0, 0x0($t4) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 12), 0), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E930u, 0x11D100u, 0x11D108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D108u;
label_11d108:
    // 0x11d108: 0x8fad0234  lw          $t5, 0x234($sp)
    ctx->pc = 0x11d108u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 564)));
    // 0x11d10c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11d10cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d110: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x11d110u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d114: 0xc04ba4c  jal         func_12E930
    ctx->pc = 0x11D114u;
    SET_GPR_U32(ctx, 31, 0x11D11Cu);
    ctx->pc = 0x11D118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D114u;
    // 0x11d118: 0xfda20008  sd          $v0, 0x8($t5) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 13), 8), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E930u, 0x11D114u, 0x11D11Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D11Cu;
label_11d11c:
    // 0x11d11c: 0x8fae0234  lw          $t6, 0x234($sp)
    ctx->pc = 0x11d11cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 564)));
    // 0x11d120: 0x1000ff59  b           . + 4 + (-0xA7 << 2)
    ctx->pc = 0x11D120u;
    {
        const bool branch_taken_0x11d120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D120u;
        // 0x11d124: 0xfdc20010  sd          $v0, 0x10($t6) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 14), 16), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d120) {
            ctx->pc = 0x11CE88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11ce88;
        }
    }
    ctx->pc = 0x11D128u;
label_11d128:
    // 0x11d128: 0x1000ff49  b           . + 4 + (-0xB7 << 2)
    ctx->pc = 0x11D128u;
    {
        const bool branch_taken_0x11d128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D128u;
        // 0x11d12c: 0x2d4a823  subu        $s5, $s6, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d128) {
            ctx->pc = 0x11CE50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11ce50;
        }
    }
    ctx->pc = 0x11D130u;
label_11d130:
    // 0x11d130: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11d130u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d134: 0x24100417  addiu       $s0, $zero, 0x417
    ctx->pc = 0x11d134u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1047));
    // 0x11d138: 0xc2823  negu        $a1, $t4
    ctx->pc = 0x11d138u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 12)));
    // 0x11d13c: 0xc047946  jal         func_11E518
    ctx->pc = 0x11D13Cu;
    SET_GPR_U32(ctx, 31, 0x11D144u);
    ctx->pc = 0x11D140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D13Cu;
    // 0x11d140: 0x10853c  dsll32      $s0, $s0, 20 (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E518u, 0x11D13Cu, 0x11D144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D144u;
label_11d144:
    // 0x11d144: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x11d144u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d148: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11d148u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d14c: 0xc04bb8e  jal         func_12EE38
    ctx->pc = 0x11D14Cu;
    SET_GPR_U32(ctx, 31, 0x11D154u);
    ctx->pc = 0x11D150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D14Cu;
    // 0x11d150: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EE38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EE38u, 0x11D14Cu, 0x11D154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D154u;
label_11d154:
    // 0x11d154: 0x5c400020  bgtzl       $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x11D154u;
    {
        const bool branch_taken_0x11d154 = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x11d154) {
            ctx->pc = 0x11D158u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11D154u;
            // 0x11d158: 0x168080  sll         $s0, $s6, 2 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11D1D8u;
            goto label_11d1d8;
        }
    }
    ctx->pc = 0x11D15Cu;
    // 0x11d15c: 0x8fad0250  lw          $t5, 0x250($sp)
    ctx->pc = 0x11d15cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x11d160: 0x240503e7  addiu       $a1, $zero, 0x3E7
    ctx->pc = 0x11d160u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
    // 0x11d164: 0x52d3c  dsll32      $a1, $a1, 20
    ctx->pc = 0x11d164u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 20));
    // 0x11d168: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11d168u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d16c: 0x25ad0018  addiu       $t5, $t5, 0x18
    ctx->pc = 0x11d16cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 24));
    // 0x11d170: 0x168880  sll         $s1, $s6, 2
    ctx->pc = 0x11d170u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
    // 0x11d174: 0xafad0250  sw          $t5, 0x250($sp)
    ctx->pc = 0x11d174u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 592), GPR_U32(ctx, 13));
    // 0x11d178: 0x23d8821  addu        $s1, $s1, $sp
    ctx->pc = 0x11d178u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 29)));
    // 0x11d17c: 0xc04ba66  jal         func_12E998
    ctx->pc = 0x11D17Cu;
    SET_GPR_U32(ctx, 31, 0x11D184u);
    ctx->pc = 0x11D180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D17Cu;
    // 0x11d180: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E998u, 0x11D17Cu, 0x11D184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D184u;
label_11d184:
    // 0x11d184: 0xc04bbce  jal         func_12EF38
    ctx->pc = 0x11D184u;
    SET_GPR_U32(ctx, 31, 0x11D18Cu);
    ctx->pc = 0x11D188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D184u;
    // 0x11d188: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EF38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EF38u, 0x11D184u, 0x11D18Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D18Cu;
label_11d18c:
    // 0x11d18c: 0xc04bba2  jal         func_12EE88
    ctx->pc = 0x11D18Cu;
    SET_GPR_U32(ctx, 31, 0x11D194u);
    ctx->pc = 0x11D190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D18Cu;
    // 0x11d190: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EE88u, 0x11D18Cu, 0x11D194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D194u;
label_11d194:
    // 0x11d194: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x11d194u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d198: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x11d198u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d19c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11d19cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d1a0: 0xc04ba66  jal         func_12E998
    ctx->pc = 0x11D1A0u;
    SET_GPR_U32(ctx, 31, 0x11D1A8u);
    ctx->pc = 0x11D1A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D1A0u;
    // 0x11d1a4: 0x168080  sll         $s0, $s6, 2 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E998u, 0x11D1A0u, 0x11D1A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D1A8u;
label_11d1a8:
    // 0x11d1a8: 0x21d8021  addu        $s0, $s0, $sp
    ctx->pc = 0x11d1a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 29)));
    // 0x11d1ac: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11d1acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d1b0: 0xc04ba4c  jal         func_12E930
    ctx->pc = 0x11D1B0u;
    SET_GPR_U32(ctx, 31, 0x11D1B8u);
    ctx->pc = 0x11D1B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D1B0u;
    // 0x11d1b4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E930u, 0x11D1B0u, 0x11D1B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D1B8u;
label_11d1b8:
    // 0x11d1b8: 0xc04bbce  jal         func_12EF38
    ctx->pc = 0x11D1B8u;
    SET_GPR_U32(ctx, 31, 0x11D1C0u);
    ctx->pc = 0x11D1BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D1B8u;
    // 0x11d1bc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EF38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EF38u, 0x11D1B8u, 0x11D1C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D1C0u;
label_11d1c0:
    // 0x11d1c0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x11d1c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x11d1c4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11d1c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_11d1c8:
    // 0x11d1c8: 0xc04bbce  jal         func_12EF38
    ctx->pc = 0x11D1C8u;
    SET_GPR_U32(ctx, 31, 0x11D1D0u);
    ctx->pc = 0x12EF38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EF38u, 0x11D1C8u, 0x11D1D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D1D0u;
label_11d1d0:
    // 0x11d1d0: 0x1000fee6  b           . + 4 + (-0x11A << 2)
    ctx->pc = 0x11D1D0u;
    {
        const bool branch_taken_0x11d1d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D1D0u;
        // 0x11d1d4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d1d0) {
            ctx->pc = 0x11CD6Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11cd6c;
        }
    }
    ctx->pc = 0x11D1D8u;
label_11d1d8:
    // 0x11d1d8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11d1d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d1dc: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x11D1DCu;
    {
        const bool branch_taken_0x11d1dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D1DCu;
        // 0x11d1e0: 0x21d8021  addu        $s0, $s0, $sp (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 29)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d1dc) {
            ctx->pc = 0x11D1C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11d1c8;
        }
    }
    ctx->pc = 0x11D1E4u;
label_11d1e4:
    // 0x11d1e4: 0x3c0e003f  lui         $t6, 0x3F
    ctx->pc = 0x11d1e4u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)63 << 16));
label_11d1e8:
    // 0x11d1e8: 0x1bd6821  addu        $t5, $t5, $sp
    ctx->pc = 0x11d1e8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 29)));
    // 0x11d1ec: 0x35ceffff  ori         $t6, $t6, 0xFFFF
    ctx->pc = 0x11d1ecu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)65535);
    // 0x11d1f0: 0x8daffffc  lw          $t7, -0x4($t5)
    ctx->pc = 0x11d1f0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4294967292)));
    // 0x11d1f4: 0x1ee7824  and         $t7, $t7, $t6
    ctx->pc = 0x11d1f4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & GPR_U64(ctx, 14));
    // 0x11d1f8: 0x1000fe51  b           . + 4 + (-0x1AF << 2)
    ctx->pc = 0x11D1F8u;
    {
        const bool branch_taken_0x11d1f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D1F8u;
        // 0x11d1fc: 0xadaffffc  sw          $t7, -0x4($t5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 13), 4294967292), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d1f8) {
            ctx->pc = 0x11CB40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11cb40;
        }
    }
    ctx->pc = 0x11D200u;
label_11d200:
    // 0x11d200: 0x166880  sll         $t5, $s6, 2
    ctx->pc = 0x11d200u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
    // 0x11d204: 0x1000fff8  b           . + 4 + (-0x8 << 2)
    ctx->pc = 0x11D204u;
    {
        const bool branch_taken_0x11d204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D204u;
        // 0x11d208: 0x3c0e007f  lui         $t6, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d204) {
            ctx->pc = 0x11D1E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11d1e8;
        }
    }
    ctx->pc = 0x11D20Cu;
label_11d20c:
    // 0x11d20c: 0x8fac0250  lw          $t4, 0x250($sp)
    ctx->pc = 0x11d20cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x11d210: 0x15800006  bnez        $t4, . + 4 + (0x6 << 2)
    ctx->pc = 0x11D210u;
    {
        const bool branch_taken_0x11d210 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x11D214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D210u;
        // 0x11d214: 0x240d0002  addiu       $t5, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d210) {
            ctx->pc = 0x11D22Cu;
            goto label_11d22c;
        }
    }
    ctx->pc = 0x11D218u;
    // 0x11d218: 0x167880  sll         $t7, $s6, 2
    ctx->pc = 0x11d218u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
    // 0x11d21c: 0x1fd7821  addu        $t7, $t7, $sp
    ctx->pc = 0x11d21cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 29)));
    // 0x11d220: 0x8deefffc  lw          $t6, -0x4($t7)
    ctx->pc = 0x11d220u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294967292)));
    // 0x11d224: 0x1000fe28  b           . + 4 + (-0x1D8 << 2)
    ctx->pc = 0x11D224u;
    {
        const bool branch_taken_0x11d224 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D224u;
        // 0x11d228: 0xe75c3  sra         $t6, $t6, 23 (Delay Slot)
        SET_GPR_S32(ctx, 14, SRA32(GPR_S32(ctx, 14), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d224) {
            ctx->pc = 0x11CAC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11cac8;
        }
    }
    ctx->pc = 0x11D22Cu;
label_11d22c:
    // 0x11d22c: 0x240401ff  addiu       $a0, $zero, 0x1FF
    ctx->pc = 0x11d22cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 511));
    // 0x11d230: 0xafad0254  sw          $t5, 0x254($sp)
    ctx->pc = 0x11d230u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 596), GPR_U32(ctx, 13));
    // 0x11d234: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11d234u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d238: 0xc04bb8e  jal         func_12EE38
    ctx->pc = 0x11D238u;
    SET_GPR_U32(ctx, 31, 0x11D240u);
    ctx->pc = 0x11D23Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D238u;
    // 0x11d23c: 0x4257c  dsll32      $a0, $a0, 21 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EE38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EE38u, 0x11D238u, 0x11D240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D240u;
label_11d240:
    // 0x11d240: 0x8fae0254  lw          $t6, 0x254($sp)
    ctx->pc = 0x11d240u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 596)));
    // 0x11d244: 0x2102a  slt         $v0, $zero, $v0
    ctx->pc = 0x11d244u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x11d248: 0x1000fe1f  b           . + 4 + (-0x1E1 << 2)
    ctx->pc = 0x11D248u;
    {
        const bool branch_taken_0x11d248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D248u;
        // 0x11d24c: 0x2700b  movn        $t6, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 14, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d248) {
            ctx->pc = 0x11CAC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11cac8;
        }
    }
    ctx->pc = 0x11D250u;
}
