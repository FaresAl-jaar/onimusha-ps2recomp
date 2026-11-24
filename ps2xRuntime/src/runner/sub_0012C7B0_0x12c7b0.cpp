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

// Function: sub_0012C7B0
// Address: 0x12c7b0 - 0x12ce5c
void sub_0012C7B0_0x12c7b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012C7B0_0x12c7b0");
#endif

    switch (ctx->pc) {
        case 0x12c808u: goto label_12c808;
        case 0x12c910u: goto label_12c910;
        case 0x12c938u: goto label_12c938;
        case 0x12c93cu: goto label_12c93c;
        case 0x12c9d0u: goto label_12c9d0;
        case 0x12ca08u: goto label_12ca08;
        case 0x12cbfcu: goto label_12cbfc;
        case 0x12cc78u: goto label_12cc78;
        default: break;
    }

    ctx->pc = 0x12c7b0u;

    // 0x12c7b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12c7b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12c7b4: 0x5503f  dsra32      $t2, $a1, 0
    ctx->pc = 0x12c7b4u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x12c7b8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x12c7b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x12c7bc: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x12c7bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x12c7c0: 0x4c03c  dsll32      $t8, $a0, 0
    ctx->pc = 0x12c7c0u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 4) << (32 + 0));
    // 0x12c7c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12c7c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12c7c8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x12c7c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x12c7cc: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x12c7ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c7d0: 0x4483f  dsra32      $t1, $a0, 0
    ctx->pc = 0x12c7d0u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x12c7d4: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x12c7d4u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x12c7d8: 0x154000fd  bnez        $t2, . + 4 + (0xFD << 2)
    ctx->pc = 0x12C7D8u;
    {
        const bool branch_taken_0x12c7d8 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x12C7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C7D8u;
        // 0x12c7dc: 0x18c03f  dsra32      $t8, $t8, 0 (Delay Slot)
        SET_GPR_S64(ctx, 24, GPR_S64(ctx, 24) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c7d8) {
            ctx->pc = 0x12CBD0u;
            goto label_12cbd0;
        }
    }
    ctx->pc = 0x12C7E0u;
    // 0x12c7e0: 0x125782b  sltu        $t7, $t1, $a1
    ctx->pc = 0x12c7e0u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x12c7e4: 0x11e0006b  beqz        $t7, . + 4 + (0x6B << 2)
    ctx->pc = 0x12C7E4u;
    {
        const bool branch_taken_0x12c7e4 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C7E4u;
        // 0x12c7e8: 0x340fffff  ori         $t7, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c7e4) {
            ctx->pc = 0x12C994u;
            goto label_12c994;
        }
    }
    ctx->pc = 0x12C7ECu;
    // 0x12c7ec: 0x1e5782b  sltu        $t7, $t7, $a1
    ctx->pc = 0x12c7ecu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x12c7f0: 0x15e00061  bnez        $t7, . + 4 + (0x61 << 2)
    ctx->pc = 0x12C7F0u;
    {
        const bool branch_taken_0x12c7f0 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12C7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C7F0u;
        // 0x12c7f4: 0x3c0f00ff  lui         $t7, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c7f0) {
            ctx->pc = 0x12C978u;
            goto label_12c978;
        }
    }
    ctx->pc = 0x12C7F8u;
    // 0x12c7f8: 0x240f0008  addiu       $t7, $zero, 0x8
    ctx->pc = 0x12c7f8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x12c7fc: 0x2cae0100  sltiu       $t6, $a1, 0x100
    ctx->pc = 0x12c7fcu;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x12c800: 0x1e0602d  daddu       $t4, $t7, $zero
    ctx->pc = 0x12c800u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c804: 0xe600b  movn        $t4, $zero, $t6
    ctx->pc = 0x12c804u;
    if (GPR_U64(ctx, 14) != 0) SET_GPR_VEC(ctx, 12, GPR_VEC(ctx, 0));
label_12c808:
    // 0x12c808: 0x3c0e0066  lui         $t6, 0x66
    ctx->pc = 0x12c808u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)102 << 16));
    // 0x12c80c: 0x1857806  srlv        $t7, $a1, $t4
    ctx->pc = 0x12c80cu;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 5), GPR_U32(ctx, 12) & 0x1F));
    // 0x12c810: 0x25ce4478  addiu       $t6, $t6, 0x4478
    ctx->pc = 0x12c810u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 17528));
    // 0x12c814: 0x240b0020  addiu       $t3, $zero, 0x20
    ctx->pc = 0x12c814u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x12c818: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x12c818u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x12c81c: 0x91ed0000  lbu         $t5, 0x0($t7)
    ctx->pc = 0x12c81cu;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x12c820: 0x1ac6821  addu        $t5, $t5, $t4
    ctx->pc = 0x12c820u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 12)));
    // 0x12c824: 0x16dc823  subu        $t9, $t3, $t5
    ctx->pc = 0x12c824u;
    SET_GPR_S32(ctx, 25, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 13)));
    // 0x12c828: 0x13200006  beqz        $t9, . + 4 + (0x6 << 2)
    ctx->pc = 0x12C828u;
    {
        const bool branch_taken_0x12c828 = (GPR_U64(ctx, 25) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C828u;
        // 0x12c82c: 0x1797823  subu        $t7, $t3, $t9 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 25)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c828) {
            ctx->pc = 0x12C844u;
            goto label_12c844;
        }
    }
    ctx->pc = 0x12C830u;
    // 0x12c830: 0x3297004  sllv        $t6, $t1, $t9
    ctx->pc = 0x12c830u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 25) & 0x1F));
    // 0x12c834: 0x1f87806  srlv        $t7, $t8, $t7
    ctx->pc = 0x12c834u;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 24), GPR_U32(ctx, 15) & 0x1F));
    // 0x12c838: 0x3252804  sllv        $a1, $a1, $t9
    ctx->pc = 0x12c838u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 25) & 0x1F));
    // 0x12c83c: 0x1cf4825  or          $t1, $t6, $t7
    ctx->pc = 0x12c83cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 14) | GPR_U64(ctx, 15));
    // 0x12c840: 0x338c004  sllv        $t8, $t8, $t9
    ctx->pc = 0x12c840u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 24), GPR_U32(ctx, 25) & 0x1F));
label_12c844:
    // 0x12c844: 0x55c02  srl         $t3, $a1, 16
    ctx->pc = 0x12c844u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
    // 0x12c848: 0x30a7ffff  andi        $a3, $a1, 0xFFFF
    ctx->pc = 0x12c848u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x12c84c: 0x12b001b  divu        $zero, $t1, $t3
    ctx->pc = 0x12c84cu;
    { uint32_t divisor = GPR_U32(ctx, 11); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 9) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 9) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,9); } }
    // 0x12c850: 0x186c02  srl         $t5, $t8, 16
    ctx->pc = 0x12c850u;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 24), 16));
    // 0x12c854: 0x51600001  beql        $t3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x12C854u;
    {
        const bool branch_taken_0x12c854 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        if (branch_taken_0x12c854) {
            ctx->pc = 0x12C858u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12C854u;
            // 0x12c858: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x12C85Cu;
            goto label_12c85c;
        }
    }
    ctx->pc = 0x12C85Cu;
label_12c85c:
    // 0x12c85c: 0x7812  mflo        $t7
    ctx->pc = 0x12c85cu;
    SET_GPR_U64(ctx, 15, ctx->lo);
    // 0x12c860: 0x7010  mfhi        $t6
    ctx->pc = 0x12c860u;
    SET_GPR_U64(ctx, 14, ctx->hi);
    // 0x12c864: 0x6012  mflo        $t4
    ctx->pc = 0x12c864u;
    SET_GPR_U64(ctx, 12, ctx->lo);
    // 0x12c868: 0xe7400  sll         $t6, $t6, 16
    ctx->pc = 0x12c868u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 16));
    // 0x12c86c: 0x1e75018  mult        $t2, $t7, $a3
    ctx->pc = 0x12c86cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x12c870: 0x1cd7025  or          $t6, $t6, $t5
    ctx->pc = 0x12c870u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 13));
    // 0x12c874: 0x1ca782b  sltu        $t7, $t6, $t2
    ctx->pc = 0x12c874u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x12c878: 0x51e0000b  beql        $t7, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x12C878u;
    {
        const bool branch_taken_0x12c878 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x12c878) {
            ctx->pc = 0x12C87Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12C878u;
            // 0x12c87c: 0x1ca7023  subu        $t6, $t6, $t2 (Delay Slot)
            SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 10)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12C8A8u;
            goto label_12c8a8;
        }
    }
    ctx->pc = 0x12C880u;
    // 0x12c880: 0x1c57021  addu        $t6, $t6, $a1
    ctx->pc = 0x12c880u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 5)));
    // 0x12c884: 0x1c5782b  sltu        $t7, $t6, $a1
    ctx->pc = 0x12c884u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x12c888: 0x15e00006  bnez        $t7, . + 4 + (0x6 << 2)
    ctx->pc = 0x12C888u;
    {
        const bool branch_taken_0x12c888 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12C88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C888u;
        // 0x12c88c: 0x258cffff  addiu       $t4, $t4, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c888) {
            ctx->pc = 0x12C8A4u;
            goto label_12c8a4;
        }
    }
    ctx->pc = 0x12C890u;
    // 0x12c890: 0x1ca782b  sltu        $t7, $t6, $t2
    ctx->pc = 0x12c890u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x12c894: 0x51e00004  beql        $t7, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x12C894u;
    {
        const bool branch_taken_0x12c894 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x12c894) {
            ctx->pc = 0x12C898u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12C894u;
            // 0x12c898: 0x1ca7023  subu        $t6, $t6, $t2 (Delay Slot)
            SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 10)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12C8A8u;
            goto label_12c8a8;
        }
    }
    ctx->pc = 0x12C89Cu;
    // 0x12c89c: 0x258cffff  addiu       $t4, $t4, -0x1
    ctx->pc = 0x12c89cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
    // 0x12c8a0: 0x1c57021  addu        $t6, $t6, $a1
    ctx->pc = 0x12c8a0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 5)));
label_12c8a4:
    // 0x12c8a4: 0x1ca7023  subu        $t6, $t6, $t2
    ctx->pc = 0x12c8a4u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 10)));
label_12c8a8:
    // 0x12c8a8: 0x330dffff  andi        $t5, $t8, 0xFFFF
    ctx->pc = 0x12c8a8u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 24) & (uint64_t)(uint16_t)65535);
    // 0x12c8ac: 0x1cb001b  divu        $zero, $t6, $t3
    ctx->pc = 0x12c8acu;
    { uint32_t divisor = GPR_U32(ctx, 11); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,14); } }
    // 0x12c8b0: 0x51600001  beql        $t3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x12C8B0u;
    {
        const bool branch_taken_0x12c8b0 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        if (branch_taken_0x12c8b0) {
            ctx->pc = 0x12C8B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12C8B0u;
            // 0x12c8b4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x12C8B8u;
            goto label_12c8b8;
        }
    }
    ctx->pc = 0x12C8B8u;
label_12c8b8:
    // 0x12c8b8: 0x7812  mflo        $t7
    ctx->pc = 0x12c8b8u;
    SET_GPR_U64(ctx, 15, ctx->lo);
    // 0x12c8bc: 0x7010  mfhi        $t6
    ctx->pc = 0x12c8bcu;
    SET_GPR_U64(ctx, 14, ctx->hi);
    // 0x12c8c0: 0x5812  mflo        $t3
    ctx->pc = 0x12c8c0u;
    SET_GPR_U64(ctx, 11, ctx->lo);
    // 0x12c8c4: 0xe7400  sll         $t6, $t6, 16
    ctx->pc = 0x12c8c4u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 16));
    // 0x12c8c8: 0x1e75018  mult        $t2, $t7, $a3
    ctx->pc = 0x12c8c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x12c8cc: 0x1cd2025  or          $a0, $t6, $t5
    ctx->pc = 0x12c8ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 14) | GPR_U64(ctx, 13));
    // 0x12c8d0: 0x8a782b  sltu        $t7, $a0, $t2
    ctx->pc = 0x12c8d0u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x12c8d4: 0x11e0000b  beqz        $t7, . + 4 + (0xB << 2)
    ctx->pc = 0x12C8D4u;
    {
        const bool branch_taken_0x12c8d4 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C8D4u;
        // 0x12c8d8: 0xc7c00  sll         $t7, $t4, 16 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 12), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c8d4) {
            ctx->pc = 0x12C904u;
            goto label_12c904;
        }
    }
    ctx->pc = 0x12C8DCu;
    // 0x12c8dc: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x12c8dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x12c8e0: 0x85782b  sltu        $t7, $a0, $a1
    ctx->pc = 0x12c8e0u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x12c8e4: 0x15e00006  bnez        $t7, . + 4 + (0x6 << 2)
    ctx->pc = 0x12C8E4u;
    {
        const bool branch_taken_0x12c8e4 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12C8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C8E4u;
        // 0x12c8e8: 0x256bffff  addiu       $t3, $t3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c8e4) {
            ctx->pc = 0x12C900u;
            goto label_12c900;
        }
    }
    ctx->pc = 0x12C8ECu;
    // 0x12c8ec: 0x8a782b  sltu        $t7, $a0, $t2
    ctx->pc = 0x12c8ecu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x12c8f0: 0x11e00004  beqz        $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x12C8F0u;
    {
        const bool branch_taken_0x12c8f0 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C8F0u;
        // 0x12c8f4: 0xc7c00  sll         $t7, $t4, 16 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 12), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c8f0) {
            ctx->pc = 0x12C904u;
            goto label_12c904;
        }
    }
    ctx->pc = 0x12C8F8u;
    // 0x12c8f8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x12c8f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x12c8fc: 0x256bffff  addiu       $t3, $t3, -0x1
    ctx->pc = 0x12c8fcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
label_12c900:
    // 0x12c900: 0xc7c00  sll         $t7, $t4, 16
    ctx->pc = 0x12c900u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 12), 16));
label_12c904:
    // 0x12c904: 0x8ac023  subu        $t8, $a0, $t2
    ctx->pc = 0x12c904u;
    SET_GPR_S32(ctx, 24, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x12c908: 0x1eb3825  or          $a3, $t7, $t3
    ctx->pc = 0x12c908u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 15) | GPR_U64(ctx, 11));
    // 0x12c90c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x12c90cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12c910:
    // 0x12c910: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x12C910u;
    {
        const bool branch_taken_0x12c910 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C910u;
        // 0x12c914: 0x3387806  srlv        $t7, $t8, $t9 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 24), GPR_U32(ctx, 25) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c910) {
            ctx->pc = 0x12C93Cu;
            goto label_12c93c;
        }
    }
    ctx->pc = 0x12C918u;
    // 0x12c918: 0x240effff  addiu       $t6, $zero, -0x1
    ctx->pc = 0x12c918u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12c91c: 0xf783c  dsll32      $t7, $t7, 0
    ctx->pc = 0x12c91cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 0));
    // 0x12c920: 0xe703c  dsll32      $t6, $t6, 0
    ctx->pc = 0x12c920u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << (32 + 0));
    // 0x12c924: 0x10e4024  and         $t0, $t0, $t6
    ctx->pc = 0x12c924u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 14));
    // 0x12c928: 0xf783e  dsrl32      $t7, $t7, 0
    ctx->pc = 0x12c928u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) >> (32 + 0));
    // 0x12c92c: 0x10f4025  or          $t0, $t0, $t7
    ctx->pc = 0x12c92cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 15));
    // 0x12c930: 0x8403c  dsll32      $t0, $t0, 0
    ctx->pc = 0x12c930u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 0));
    // 0x12c934: 0x8403e  dsrl32      $t0, $t0, 0
    ctx->pc = 0x12c934u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) >> (32 + 0));
label_12c938:
    // 0x12c938: 0xfe280000  sd          $t0, 0x0($s1)
    ctx->pc = 0x12c938u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 8));
label_12c93c:
    // 0x12c93c: 0x240effff  addiu       $t6, $zero, -0x1
    ctx->pc = 0x12c93cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12c940: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12c940u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12c944: 0x7783c  dsll32      $t7, $a3, 0
    ctx->pc = 0x12c944u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 7) << (32 + 0));
    // 0x12c948: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x12c948u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12c94c: 0xe703c  dsll32      $t6, $t6, 0
    ctx->pc = 0x12c94cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << (32 + 0));
    // 0x12c950: 0xf783e  dsrl32      $t7, $t7, 0
    ctx->pc = 0x12c950u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) >> (32 + 0));
    // 0x12c954: 0x4e1024  and         $v0, $v0, $t6
    ctx->pc = 0x12c954u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 14));
    // 0x12c958: 0x4f1025  or          $v0, $v0, $t7
    ctx->pc = 0x12c958u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 15));
    // 0x12c95c: 0x12703c  dsll32      $t6, $s2, 0
    ctx->pc = 0x12c95cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 18) << (32 + 0));
    // 0x12c960: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x12c960u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x12c964: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x12c964u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12c968: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x12c968u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x12c96c: 0x4e1025  or          $v0, $v0, $t6
    ctx->pc = 0x12c96cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 14));
    // 0x12c970: 0x3e00008  jr          $ra
    ctx->pc = 0x12C970u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12C974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C970u;
        // 0x12c974: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12C970u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12C978u;
label_12c978:
    // 0x12c978: 0x240e0010  addiu       $t6, $zero, 0x10
    ctx->pc = 0x12c978u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x12c97c: 0x35efffff  ori         $t7, $t7, 0xFFFF
    ctx->pc = 0x12c97cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)65535);
    // 0x12c980: 0x240d0018  addiu       $t5, $zero, 0x18
    ctx->pc = 0x12c980u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x12c984: 0x1e5782b  sltu        $t7, $t7, $a1
    ctx->pc = 0x12c984u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x12c988: 0x1c0602d  daddu       $t4, $t6, $zero
    ctx->pc = 0x12c988u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c98c: 0x1000ff9e  b           . + 4 + (-0x62 << 2)
    ctx->pc = 0x12C98Cu;
    {
        const bool branch_taken_0x12c98c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C98Cu;
        // 0x12c990: 0x1af600b  movn        $t4, $t5, $t7 (Delay Slot)
        if (GPR_U64(ctx, 15) != 0) SET_GPR_VEC(ctx, 12, GPR_VEC(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c98c) {
            ctx->pc = 0x12C808u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12c808;
        }
    }
    ctx->pc = 0x12C994u;
label_12c994:
    // 0x12c994: 0x14a00008  bnez        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x12C994u;
    {
        const bool branch_taken_0x12c994 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x12C998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C994u;
        // 0x12c998: 0x1e5782b  sltu        $t7, $t7, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c994) {
            ctx->pc = 0x12C9B8u;
            goto label_12c9b8;
        }
    }
    ctx->pc = 0x12C99Cu;
    // 0x12c99c: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x12c99cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12c9a0: 0x1ea001b  divu        $zero, $t7, $t2
    ctx->pc = 0x12c9a0u;
    { uint32_t divisor = GPR_U32(ctx, 10); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 15) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 15) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,15); } }
    // 0x12c9a4: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x12C9A4u;
    {
        const bool branch_taken_0x12c9a4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x12c9a4) {
            ctx->pc = 0x12C9A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12C9A4u;
            // 0x12c9a8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x12C9ACu;
            goto label_12c9ac;
        }
    }
    ctx->pc = 0x12C9ACu;
label_12c9ac:
    // 0x12c9ac: 0x2812  mflo        $a1
    ctx->pc = 0x12c9acu;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x12c9b0: 0x340fffff  ori         $t7, $zero, 0xFFFF
    ctx->pc = 0x12c9b0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x12c9b4: 0x1e5782b  sltu        $t7, $t7, $a1
    ctx->pc = 0x12c9b4u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_12c9b8:
    // 0x12c9b8: 0x15e0007e  bnez        $t7, . + 4 + (0x7E << 2)
    ctx->pc = 0x12C9B8u;
    {
        const bool branch_taken_0x12c9b8 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12C9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C9B8u;
        // 0x12c9bc: 0x3c0f00ff  lui         $t7, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c9b8) {
            ctx->pc = 0x12CBB4u;
            goto label_12cbb4;
        }
    }
    ctx->pc = 0x12C9C0u;
    // 0x12c9c0: 0x240f0008  addiu       $t7, $zero, 0x8
    ctx->pc = 0x12c9c0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x12c9c4: 0x2cae0100  sltiu       $t6, $a1, 0x100
    ctx->pc = 0x12c9c4u;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x12c9c8: 0x1e0602d  daddu       $t4, $t7, $zero
    ctx->pc = 0x12c9c8u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c9cc: 0xe600b  movn        $t4, $zero, $t6
    ctx->pc = 0x12c9ccu;
    if (GPR_U64(ctx, 14) != 0) SET_GPR_VEC(ctx, 12, GPR_VEC(ctx, 0));
label_12c9d0:
    // 0x12c9d0: 0x3c0e0066  lui         $t6, 0x66
    ctx->pc = 0x12c9d0u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)102 << 16));
    // 0x12c9d4: 0x1857806  srlv        $t7, $a1, $t4
    ctx->pc = 0x12c9d4u;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 5), GPR_U32(ctx, 12) & 0x1F));
    // 0x12c9d8: 0x25ce4478  addiu       $t6, $t6, 0x4478
    ctx->pc = 0x12c9d8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 17528));
    // 0x12c9dc: 0x240b0020  addiu       $t3, $zero, 0x20
    ctx->pc = 0x12c9dcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x12c9e0: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x12c9e0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x12c9e4: 0x91ed0000  lbu         $t5, 0x0($t7)
    ctx->pc = 0x12c9e4u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x12c9e8: 0x1ac6821  addu        $t5, $t5, $t4
    ctx->pc = 0x12c9e8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 12)));
    // 0x12c9ec: 0x16dc823  subu        $t9, $t3, $t5
    ctx->pc = 0x12c9ecu;
    SET_GPR_S32(ctx, 25, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 13)));
    // 0x12c9f0: 0x17200036  bnez        $t9, . + 4 + (0x36 << 2)
    ctx->pc = 0x12C9F0u;
    {
        const bool branch_taken_0x12c9f0 = (GPR_U64(ctx, 25) != GPR_U64(ctx, 0));
        ctx->pc = 0x12C9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C9F0u;
        // 0x12c9f4: 0x1798023  subu        $s0, $t3, $t9 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 25)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c9f0) {
            ctx->pc = 0x12CACCu;
            goto label_12cacc;
        }
    }
    ctx->pc = 0x12C9F8u;
    // 0x12c9f8: 0x1254823  subu        $t1, $t1, $a1
    ctx->pc = 0x12c9f8u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
    // 0x12c9fc: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x12c9fcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12ca00: 0x55402  srl         $t2, $a1, 16
    ctx->pc = 0x12ca00u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
    // 0x12ca04: 0x30a3ffff  andi        $v1, $a1, 0xFFFF
    ctx->pc = 0x12ca04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
label_12ca08:
    // 0x12ca08: 0x12a001b  divu        $zero, $t1, $t2
    ctx->pc = 0x12ca08u;
    { uint32_t divisor = GPR_U32(ctx, 10); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 9) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 9) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,9); } }
    // 0x12ca0c: 0x186402  srl         $t4, $t8, 16
    ctx->pc = 0x12ca0cu;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 24), 16));
    // 0x12ca10: 0x51400001  beql        $t2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x12CA10u;
    {
        const bool branch_taken_0x12ca10 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x12ca10) {
            ctx->pc = 0x12CA14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12CA10u;
            // 0x12ca14: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x12CA18u;
            goto label_12ca18;
        }
    }
    ctx->pc = 0x12CA18u;
label_12ca18:
    // 0x12ca18: 0x7010  mfhi        $t6
    ctx->pc = 0x12ca18u;
    SET_GPR_U64(ctx, 14, ctx->hi);
    // 0x12ca1c: 0x6812  mflo        $t5
    ctx->pc = 0x12ca1cu;
    SET_GPR_U64(ctx, 13, ctx->lo);
    // 0x12ca20: 0x4812  mflo        $t1
    ctx->pc = 0x12ca20u;
    SET_GPR_U64(ctx, 9, ctx->lo);
    // 0x12ca24: 0xe7400  sll         $t6, $t6, 16
    ctx->pc = 0x12ca24u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 16));
    // 0x12ca28: 0x1a35818  mult        $t3, $t5, $v1
    ctx->pc = 0x12ca28u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x12ca2c: 0x1cc7025  or          $t6, $t6, $t4
    ctx->pc = 0x12ca2cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 12));
    // 0x12ca30: 0x1cb782b  sltu        $t7, $t6, $t3
    ctx->pc = 0x12ca30u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x12ca34: 0x51e0000b  beql        $t7, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x12CA34u;
    {
        const bool branch_taken_0x12ca34 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x12ca34) {
            ctx->pc = 0x12CA38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12CA34u;
            // 0x12ca38: 0x1cb7023  subu        $t6, $t6, $t3 (Delay Slot)
            SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 11)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12CA64u;
            goto label_12ca64;
        }
    }
    ctx->pc = 0x12CA3Cu;
    // 0x12ca3c: 0x1c57021  addu        $t6, $t6, $a1
    ctx->pc = 0x12ca3cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 5)));
    // 0x12ca40: 0x1c5782b  sltu        $t7, $t6, $a1
    ctx->pc = 0x12ca40u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x12ca44: 0x15e00006  bnez        $t7, . + 4 + (0x6 << 2)
    ctx->pc = 0x12CA44u;
    {
        const bool branch_taken_0x12ca44 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12CA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CA44u;
        // 0x12ca48: 0x25a9ffff  addiu       $t1, $t5, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ca44) {
            ctx->pc = 0x12CA60u;
            goto label_12ca60;
        }
    }
    ctx->pc = 0x12CA4Cu;
    // 0x12ca4c: 0x1cb782b  sltu        $t7, $t6, $t3
    ctx->pc = 0x12ca4cu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x12ca50: 0x51e00004  beql        $t7, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x12CA50u;
    {
        const bool branch_taken_0x12ca50 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x12ca50) {
            ctx->pc = 0x12CA54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12CA50u;
            // 0x12ca54: 0x1cb7023  subu        $t6, $t6, $t3 (Delay Slot)
            SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 11)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12CA64u;
            goto label_12ca64;
        }
    }
    ctx->pc = 0x12CA58u;
    // 0x12ca58: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x12ca58u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x12ca5c: 0x1c57021  addu        $t6, $t6, $a1
    ctx->pc = 0x12ca5cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 5)));
label_12ca60:
    // 0x12ca60: 0x1cb7023  subu        $t6, $t6, $t3
    ctx->pc = 0x12ca60u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 11)));
label_12ca64:
    // 0x12ca64: 0x330dffff  andi        $t5, $t8, 0xFFFF
    ctx->pc = 0x12ca64u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 24) & (uint64_t)(uint16_t)65535);
    // 0x12ca68: 0x1ca001b  divu        $zero, $t6, $t2
    ctx->pc = 0x12ca68u;
    { uint32_t divisor = GPR_U32(ctx, 10); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,14); } }
    // 0x12ca6c: 0x51400001  beql        $t2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x12CA6Cu;
    {
        const bool branch_taken_0x12ca6c = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x12ca6c) {
            ctx->pc = 0x12CA70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12CA6Cu;
            // 0x12ca70: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x12CA74u;
            goto label_12ca74;
        }
    }
    ctx->pc = 0x12CA74u;
label_12ca74:
    // 0x12ca74: 0x7812  mflo        $t7
    ctx->pc = 0x12ca74u;
    SET_GPR_U64(ctx, 15, ctx->lo);
    // 0x12ca78: 0x7010  mfhi        $t6
    ctx->pc = 0x12ca78u;
    SET_GPR_U64(ctx, 14, ctx->hi);
    // 0x12ca7c: 0x5012  mflo        $t2
    ctx->pc = 0x12ca7cu;
    SET_GPR_U64(ctx, 10, ctx->lo);
    // 0x12ca80: 0xe7400  sll         $t6, $t6, 16
    ctx->pc = 0x12ca80u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 16));
    // 0x12ca84: 0x1e35818  mult        $t3, $t7, $v1
    ctx->pc = 0x12ca84u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x12ca88: 0x1cd2025  or          $a0, $t6, $t5
    ctx->pc = 0x12ca88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 14) | GPR_U64(ctx, 13));
    // 0x12ca8c: 0x8b782b  sltu        $t7, $a0, $t3
    ctx->pc = 0x12ca8cu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x12ca90: 0x11e0000b  beqz        $t7, . + 4 + (0xB << 2)
    ctx->pc = 0x12CA90u;
    {
        const bool branch_taken_0x12ca90 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12CA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CA90u;
        // 0x12ca94: 0x97c00  sll         $t7, $t1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 9), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ca90) {
            ctx->pc = 0x12CAC0u;
            goto label_12cac0;
        }
    }
    ctx->pc = 0x12CA98u;
    // 0x12ca98: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x12ca98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x12ca9c: 0x85782b  sltu        $t7, $a0, $a1
    ctx->pc = 0x12ca9cu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x12caa0: 0x15e00006  bnez        $t7, . + 4 + (0x6 << 2)
    ctx->pc = 0x12CAA0u;
    {
        const bool branch_taken_0x12caa0 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12CAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CAA0u;
        // 0x12caa4: 0x254affff  addiu       $t2, $t2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12caa0) {
            ctx->pc = 0x12CABCu;
            goto label_12cabc;
        }
    }
    ctx->pc = 0x12CAA8u;
    // 0x12caa8: 0x8b782b  sltu        $t7, $a0, $t3
    ctx->pc = 0x12caa8u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x12caac: 0x11e00004  beqz        $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x12CAACu;
    {
        const bool branch_taken_0x12caac = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12CAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CAACu;
        // 0x12cab0: 0x97c00  sll         $t7, $t1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 9), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12caac) {
            ctx->pc = 0x12CAC0u;
            goto label_12cac0;
        }
    }
    ctx->pc = 0x12CAB4u;
    // 0x12cab4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x12cab4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x12cab8: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x12cab8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
label_12cabc:
    // 0x12cabc: 0x97c00  sll         $t7, $t1, 16
    ctx->pc = 0x12cabcu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 9), 16));
label_12cac0:
    // 0x12cac0: 0x8bc023  subu        $t8, $a0, $t3
    ctx->pc = 0x12cac0u;
    SET_GPR_S32(ctx, 24, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
    // 0x12cac4: 0x1000ff92  b           . + 4 + (-0x6E << 2)
    ctx->pc = 0x12CAC4u;
    {
        const bool branch_taken_0x12cac4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12CAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CAC4u;
        // 0x12cac8: 0x1ea3825  or          $a3, $t7, $t2 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 15) | GPR_U64(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cac4) {
            ctx->pc = 0x12C910u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12c910;
        }
    }
    ctx->pc = 0x12CACCu;
label_12cacc:
    // 0x12cacc: 0x3252804  sllv        $a1, $a1, $t9
    ctx->pc = 0x12caccu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 25) & 0x1F));
    // 0x12cad0: 0x55402  srl         $t2, $a1, 16
    ctx->pc = 0x12cad0u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
    // 0x12cad4: 0x2096006  srlv        $t4, $t1, $s0
    ctx->pc = 0x12cad4u;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 9), GPR_U32(ctx, 16) & 0x1F));
    // 0x12cad8: 0x18a001b  divu        $zero, $t4, $t2
    ctx->pc = 0x12cad8u;
    { uint32_t divisor = GPR_U32(ctx, 10); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 12) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 12) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,12); } }
    // 0x12cadc: 0x30a3ffff  andi        $v1, $a1, 0xFFFF
    ctx->pc = 0x12cadcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x12cae0: 0x2187006  srlv        $t6, $t8, $s0
    ctx->pc = 0x12cae0u;
    SET_GPR_S32(ctx, 14, (int32_t)SRL32(GPR_U32(ctx, 24), GPR_U32(ctx, 16) & 0x1F));
    // 0x12cae4: 0x3297804  sllv        $t7, $t1, $t9
    ctx->pc = 0x12cae4u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 25) & 0x1F));
    // 0x12cae8: 0x1ee4825  or          $t1, $t7, $t6
    ctx->pc = 0x12cae8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 15) | GPR_U64(ctx, 14));
    // 0x12caec: 0x140382d  daddu       $a3, $t2, $zero
    ctx->pc = 0x12caecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12caf0: 0x97402  srl         $t6, $t1, 16
    ctx->pc = 0x12caf0u;
    SET_GPR_S32(ctx, 14, (int32_t)SRL32(GPR_U32(ctx, 9), 16));
    // 0x12caf4: 0x338c004  sllv        $t8, $t8, $t9
    ctx->pc = 0x12caf4u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 24), GPR_U32(ctx, 25) & 0x1F));
    // 0x12caf8: 0x51400001  beql        $t2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x12CAF8u;
    {
        const bool branch_taken_0x12caf8 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x12caf8) {
            ctx->pc = 0x12CAFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12CAF8u;
            // 0x12cafc: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x12CB00u;
            goto label_12cb00;
        }
    }
    ctx->pc = 0x12CB00u;
label_12cb00:
    // 0x12cb00: 0x6810  mfhi        $t5
    ctx->pc = 0x12cb00u;
    SET_GPR_U64(ctx, 13, ctx->hi);
    // 0x12cb04: 0x6012  mflo        $t4
    ctx->pc = 0x12cb04u;
    SET_GPR_U64(ctx, 12, ctx->lo);
    // 0x12cb08: 0x2012  mflo        $a0
    ctx->pc = 0x12cb08u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x12cb0c: 0xd6c00  sll         $t5, $t5, 16
    ctx->pc = 0x12cb0cu;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 13), 16));
    // 0x12cb10: 0x1835818  mult        $t3, $t4, $v1
    ctx->pc = 0x12cb10u;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x12cb14: 0x1ae7025  or          $t6, $t5, $t6
    ctx->pc = 0x12cb14u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 13) | GPR_U64(ctx, 14));
    // 0x12cb18: 0x1cb782b  sltu        $t7, $t6, $t3
    ctx->pc = 0x12cb18u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x12cb1c: 0x11e0000a  beqz        $t7, . + 4 + (0xA << 2)
    ctx->pc = 0x12CB1Cu;
    {
        const bool branch_taken_0x12cb1c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12CB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CB1Cu;
        // 0x12cb20: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cb1c) {
            ctx->pc = 0x12CB48u;
            goto label_12cb48;
        }
    }
    ctx->pc = 0x12CB24u;
    // 0x12cb24: 0x1c57021  addu        $t6, $t6, $a1
    ctx->pc = 0x12cb24u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 5)));
    // 0x12cb28: 0x1c5782b  sltu        $t7, $t6, $a1
    ctx->pc = 0x12cb28u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x12cb2c: 0x15e00006  bnez        $t7, . + 4 + (0x6 << 2)
    ctx->pc = 0x12CB2Cu;
    {
        const bool branch_taken_0x12cb2c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12CB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CB2Cu;
        // 0x12cb30: 0x2584ffff  addiu       $a0, $t4, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cb2c) {
            ctx->pc = 0x12CB48u;
            goto label_12cb48;
        }
    }
    ctx->pc = 0x12CB34u;
    // 0x12cb34: 0x1cb782b  sltu        $t7, $t6, $t3
    ctx->pc = 0x12cb34u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x12cb38: 0x51e00004  beql        $t7, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x12CB38u;
    {
        const bool branch_taken_0x12cb38 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x12cb38) {
            ctx->pc = 0x12CB3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12CB38u;
            // 0x12cb3c: 0x1cb7023  subu        $t6, $t6, $t3 (Delay Slot)
            SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 11)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12CB4Cu;
            goto label_12cb4c;
        }
    }
    ctx->pc = 0x12CB40u;
    // 0x12cb40: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x12cb40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x12cb44: 0x1c57021  addu        $t6, $t6, $a1
    ctx->pc = 0x12cb44u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 5)));
label_12cb48:
    // 0x12cb48: 0x1cb7023  subu        $t6, $t6, $t3
    ctx->pc = 0x12cb48u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 11)));
label_12cb4c:
    // 0x12cb4c: 0x312dffff  andi        $t5, $t1, 0xFFFF
    ctx->pc = 0x12cb4cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
    // 0x12cb50: 0x1c7001b  divu        $zero, $t6, $a3
    ctx->pc = 0x12cb50u;
    { uint32_t divisor = GPR_U32(ctx, 7); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,14); } }
    // 0x12cb54: 0x50e00001  beql        $a3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x12CB54u;
    {
        const bool branch_taken_0x12cb54 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x12cb54) {
            ctx->pc = 0x12CB58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12CB54u;
            // 0x12cb58: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x12CB5Cu;
            goto label_12cb5c;
        }
    }
    ctx->pc = 0x12CB5Cu;
label_12cb5c:
    // 0x12cb5c: 0x7812  mflo        $t7
    ctx->pc = 0x12cb5cu;
    SET_GPR_U64(ctx, 15, ctx->lo);
    // 0x12cb60: 0x7010  mfhi        $t6
    ctx->pc = 0x12cb60u;
    SET_GPR_U64(ctx, 14, ctx->hi);
    // 0x12cb64: 0x3812  mflo        $a3
    ctx->pc = 0x12cb64u;
    SET_GPR_U64(ctx, 7, ctx->lo);
    // 0x12cb68: 0xe7400  sll         $t6, $t6, 16
    ctx->pc = 0x12cb68u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 16));
    // 0x12cb6c: 0x1e65818  mult        $t3, $t7, $a2
    ctx->pc = 0x12cb6cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x12cb70: 0x1cd6025  or          $t4, $t6, $t5
    ctx->pc = 0x12cb70u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 14) | GPR_U64(ctx, 13));
    // 0x12cb74: 0x18b782b  sltu        $t7, $t4, $t3
    ctx->pc = 0x12cb74u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x12cb78: 0x11e0000b  beqz        $t7, . + 4 + (0xB << 2)
    ctx->pc = 0x12CB78u;
    {
        const bool branch_taken_0x12cb78 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12CB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CB78u;
        // 0x12cb7c: 0x47c00  sll         $t7, $a0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cb78) {
            ctx->pc = 0x12CBA8u;
            goto label_12cba8;
        }
    }
    ctx->pc = 0x12CB80u;
    // 0x12cb80: 0x1856021  addu        $t4, $t4, $a1
    ctx->pc = 0x12cb80u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 5)));
    // 0x12cb84: 0x185782b  sltu        $t7, $t4, $a1
    ctx->pc = 0x12cb84u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x12cb88: 0x15e00006  bnez        $t7, . + 4 + (0x6 << 2)
    ctx->pc = 0x12CB88u;
    {
        const bool branch_taken_0x12cb88 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12CB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CB88u;
        // 0x12cb8c: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cb88) {
            ctx->pc = 0x12CBA4u;
            goto label_12cba4;
        }
    }
    ctx->pc = 0x12CB90u;
    // 0x12cb90: 0x18b782b  sltu        $t7, $t4, $t3
    ctx->pc = 0x12cb90u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x12cb94: 0x11e00004  beqz        $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x12CB94u;
    {
        const bool branch_taken_0x12cb94 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12CB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CB94u;
        // 0x12cb98: 0x47c00  sll         $t7, $a0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cb94) {
            ctx->pc = 0x12CBA8u;
            goto label_12cba8;
        }
    }
    ctx->pc = 0x12CB9Cu;
    // 0x12cb9c: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x12cb9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x12cba0: 0x1856021  addu        $t4, $t4, $a1
    ctx->pc = 0x12cba0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 5)));
label_12cba4:
    // 0x12cba4: 0x47c00  sll         $t7, $a0, 16
    ctx->pc = 0x12cba4u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
label_12cba8:
    // 0x12cba8: 0x18b4823  subu        $t1, $t4, $t3
    ctx->pc = 0x12cba8u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 11)));
    // 0x12cbac: 0x1000ff96  b           . + 4 + (-0x6A << 2)
    ctx->pc = 0x12CBACu;
    {
        const bool branch_taken_0x12cbac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12CBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CBACu;
        // 0x12cbb0: 0x1e79025  or          $s2, $t7, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 15) | GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cbac) {
            ctx->pc = 0x12CA08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12ca08;
        }
    }
    ctx->pc = 0x12CBB4u;
label_12cbb4:
    // 0x12cbb4: 0x240e0010  addiu       $t6, $zero, 0x10
    ctx->pc = 0x12cbb4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x12cbb8: 0x35efffff  ori         $t7, $t7, 0xFFFF
    ctx->pc = 0x12cbb8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)65535);
    // 0x12cbbc: 0x240d0018  addiu       $t5, $zero, 0x18
    ctx->pc = 0x12cbbcu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x12cbc0: 0x1e5782b  sltu        $t7, $t7, $a1
    ctx->pc = 0x12cbc0u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x12cbc4: 0x1c0602d  daddu       $t4, $t6, $zero
    ctx->pc = 0x12cbc4u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cbc8: 0x1000ff81  b           . + 4 + (-0x7F << 2)
    ctx->pc = 0x12CBC8u;
    {
        const bool branch_taken_0x12cbc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12CBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CBC8u;
        // 0x12cbcc: 0x1af600b  movn        $t4, $t5, $t7 (Delay Slot)
        if (GPR_U64(ctx, 15) != 0) SET_GPR_VEC(ctx, 12, GPR_VEC(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cbc8) {
            ctx->pc = 0x12C9D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12c9d0;
        }
    }
    ctx->pc = 0x12CBD0u;
label_12cbd0:
    // 0x12cbd0: 0x12a782b  sltu        $t7, $t1, $t2
    ctx->pc = 0x12cbd0u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x12cbd4: 0x15e0001f  bnez        $t7, . + 4 + (0x1F << 2)
    ctx->pc = 0x12CBD4u;
    {
        const bool branch_taken_0x12cbd4 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12CBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CBD4u;
        // 0x12cbd8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cbd4) {
            ctx->pc = 0x12CC54u;
            goto label_12cc54;
        }
    }
    ctx->pc = 0x12CBDCu;
    // 0x12cbdc: 0x340fffff  ori         $t7, $zero, 0xFFFF
    ctx->pc = 0x12cbdcu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x12cbe0: 0x1ea782b  sltu        $t7, $t7, $t2
    ctx->pc = 0x12cbe0u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x12cbe4: 0x15e00096  bnez        $t7, . + 4 + (0x96 << 2)
    ctx->pc = 0x12CBE4u;
    {
        const bool branch_taken_0x12cbe4 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12CBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CBE4u;
        // 0x12cbe8: 0x3c0f00ff  lui         $t7, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cbe4) {
            ctx->pc = 0x12CE40u;
            goto label_12ce40;
        }
    }
    ctx->pc = 0x12CBECu;
    // 0x12cbec: 0x240f0008  addiu       $t7, $zero, 0x8
    ctx->pc = 0x12cbecu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x12cbf0: 0x2d4e0100  sltiu       $t6, $t2, 0x100
    ctx->pc = 0x12cbf0u;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x12cbf4: 0x1e0602d  daddu       $t4, $t7, $zero
    ctx->pc = 0x12cbf4u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cbf8: 0xe600b  movn        $t4, $zero, $t6
    ctx->pc = 0x12cbf8u;
    if (GPR_U64(ctx, 14) != 0) SET_GPR_VEC(ctx, 12, GPR_VEC(ctx, 0));
label_12cbfc:
    // 0x12cbfc: 0x3c0e0066  lui         $t6, 0x66
    ctx->pc = 0x12cbfcu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)102 << 16));
    // 0x12cc00: 0x18a7806  srlv        $t7, $t2, $t4
    ctx->pc = 0x12cc00u;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 10), GPR_U32(ctx, 12) & 0x1F));
    // 0x12cc04: 0x25ce4478  addiu       $t6, $t6, 0x4478
    ctx->pc = 0x12cc04u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 17528));
    // 0x12cc08: 0x240b0020  addiu       $t3, $zero, 0x20
    ctx->pc = 0x12cc08u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x12cc0c: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x12cc0cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x12cc10: 0x91ed0000  lbu         $t5, 0x0($t7)
    ctx->pc = 0x12cc10u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x12cc14: 0x1ac6821  addu        $t5, $t5, $t4
    ctx->pc = 0x12cc14u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 12)));
    // 0x12cc18: 0x16dc823  subu        $t9, $t3, $t5
    ctx->pc = 0x12cc18u;
    SET_GPR_S32(ctx, 25, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 13)));
    // 0x12cc1c: 0x1720001a  bnez        $t9, . + 4 + (0x1A << 2)
    ctx->pc = 0x12CC1Cu;
    {
        const bool branch_taken_0x12cc1c = (GPR_U64(ctx, 25) != GPR_U64(ctx, 0));
        ctx->pc = 0x12CC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CC1Cu;
        // 0x12cc20: 0x1798023  subu        $s0, $t3, $t9 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 25)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cc1c) {
            ctx->pc = 0x12CC88u;
            goto label_12cc88;
        }
    }
    ctx->pc = 0x12CC24u;
    // 0x12cc24: 0x149782b  sltu        $t7, $t2, $t1
    ctx->pc = 0x12cc24u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x12cc28: 0x15e00005  bnez        $t7, . + 4 + (0x5 << 2)
    ctx->pc = 0x12CC28u;
    {
        const bool branch_taken_0x12cc28 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12CC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CC28u;
        // 0x12cc2c: 0x3056823  subu        $t5, $t8, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 24), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cc28) {
            ctx->pc = 0x12CC40u;
            goto label_12cc40;
        }
    }
    ctx->pc = 0x12CC30u;
    // 0x12cc30: 0x305782b  sltu        $t7, $t8, $a1
    ctx->pc = 0x12cc30u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 24) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x12cc34: 0x15e00007  bnez        $t7, . + 4 + (0x7 << 2)
    ctx->pc = 0x12CC34u;
    {
        const bool branch_taken_0x12cc34 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12CC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CC34u;
        // 0x12cc38: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cc34) {
            ctx->pc = 0x12CC54u;
            goto label_12cc54;
        }
    }
    ctx->pc = 0x12CC3Cu;
    // 0x12cc3c: 0x3056823  subu        $t5, $t8, $a1
    ctx->pc = 0x12cc3cu;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 24), GPR_U32(ctx, 5)));
label_12cc40:
    // 0x12cc40: 0x12a7023  subu        $t6, $t1, $t2
    ctx->pc = 0x12cc40u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x12cc44: 0x30d782b  sltu        $t7, $t8, $t5
    ctx->pc = 0x12cc44u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 24) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x12cc48: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x12cc48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12cc4c: 0x1cf4823  subu        $t1, $t6, $t7
    ctx->pc = 0x12cc4cu;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 15)));
    // 0x12cc50: 0x1a0c02d  daddu       $t8, $t5, $zero
    ctx->pc = 0x12cc50u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
label_12cc54:
    // 0x12cc54: 0x1220ff39  beqz        $s1, . + 4 + (-0xC7 << 2)
    ctx->pc = 0x12CC54u;
    {
        const bool branch_taken_0x12cc54 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x12CC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CC54u;
        // 0x12cc58: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cc54) {
            ctx->pc = 0x12C93Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12c93c;
        }
    }
    ctx->pc = 0x12CC5Cu;
    // 0x12cc5c: 0x240effff  addiu       $t6, $zero, -0x1
    ctx->pc = 0x12cc5cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12cc60: 0x18783c  dsll32      $t7, $t8, 0
    ctx->pc = 0x12cc60u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 24) << (32 + 0));
    // 0x12cc64: 0xe703c  dsll32      $t6, $t6, 0
    ctx->pc = 0x12cc64u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << (32 + 0));
    // 0x12cc68: 0xf783e  dsrl32      $t7, $t7, 0
    ctx->pc = 0x12cc68u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) >> (32 + 0));
    // 0x12cc6c: 0x10e4024  and         $t0, $t0, $t6
    ctx->pc = 0x12cc6cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 14));
    // 0x12cc70: 0x10f4025  or          $t0, $t0, $t7
    ctx->pc = 0x12cc70u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 15));
    // 0x12cc74: 0x9703c  dsll32      $t6, $t1, 0
    ctx->pc = 0x12cc74u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 9) << (32 + 0));
label_12cc78:
    // 0x12cc78: 0x8403c  dsll32      $t0, $t0, 0
    ctx->pc = 0x12cc78u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 0));
    // 0x12cc7c: 0x8403e  dsrl32      $t0, $t0, 0
    ctx->pc = 0x12cc7cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) >> (32 + 0));
    // 0x12cc80: 0x1000ff2d  b           . + 4 + (-0xD3 << 2)
    ctx->pc = 0x12CC80u;
    {
        const bool branch_taken_0x12cc80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12CC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CC80u;
        // 0x12cc84: 0x10e4025  or          $t0, $t0, $t6 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cc80) {
            ctx->pc = 0x12C938u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12c938;
        }
    }
    ctx->pc = 0x12CC88u;
label_12cc88:
    // 0x12cc88: 0x32a7004  sllv        $t6, $t2, $t9
    ctx->pc = 0x12cc88u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 25) & 0x1F));
    // 0x12cc8c: 0x2057806  srlv        $t7, $a1, $s0
    ctx->pc = 0x12cc8cu;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 5), GPR_U32(ctx, 16) & 0x1F));
    // 0x12cc90: 0x2096006  srlv        $t4, $t1, $s0
    ctx->pc = 0x12cc90u;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 9), GPR_U32(ctx, 16) & 0x1F));
    // 0x12cc94: 0x1cf5025  or          $t2, $t6, $t7
    ctx->pc = 0x12cc94u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 14) | GPR_U64(ctx, 15));
    // 0x12cc98: 0x3296804  sllv        $t5, $t1, $t9
    ctx->pc = 0x12cc98u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 25) & 0x1F));
    // 0x12cc9c: 0xa5c02  srl         $t3, $t2, 16
    ctx->pc = 0x12cc9cu;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 10), 16));
    // 0x12cca0: 0x3146ffff  andi        $a2, $t2, 0xFFFF
    ctx->pc = 0x12cca0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
    // 0x12cca4: 0x18b001b  divu        $zero, $t4, $t3
    ctx->pc = 0x12cca4u;
    { uint32_t divisor = GPR_U32(ctx, 11); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 12) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 12) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,12); } }
    // 0x12cca8: 0x2187806  srlv        $t7, $t8, $s0
    ctx->pc = 0x12cca8u;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 24), GPR_U32(ctx, 16) & 0x1F));
    // 0x12ccac: 0x1af4825  or          $t1, $t5, $t7
    ctx->pc = 0x12ccacu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 13) | GPR_U64(ctx, 15));
    // 0x12ccb0: 0x3252804  sllv        $a1, $a1, $t9
    ctx->pc = 0x12ccb0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 25) & 0x1F));
    // 0x12ccb4: 0x96c02  srl         $t5, $t1, 16
    ctx->pc = 0x12ccb4u;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 9), 16));
    // 0x12ccb8: 0x338c004  sllv        $t8, $t8, $t9
    ctx->pc = 0x12ccb8u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 24), GPR_U32(ctx, 25) & 0x1F));
    // 0x12ccbc: 0x51600001  beql        $t3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x12CCBCu;
    {
        const bool branch_taken_0x12ccbc = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        if (branch_taken_0x12ccbc) {
            ctx->pc = 0x12CCC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12CCBCu;
            // 0x12ccc0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x12CCC4u;
            goto label_12ccc4;
        }
    }
    ctx->pc = 0x12CCC4u;
label_12ccc4:
    // 0x12ccc4: 0x7010  mfhi        $t6
    ctx->pc = 0x12ccc4u;
    SET_GPR_U64(ctx, 14, ctx->hi);
    // 0x12ccc8: 0x6012  mflo        $t4
    ctx->pc = 0x12ccc8u;
    SET_GPR_U64(ctx, 12, ctx->lo);
    // 0x12cccc: 0x3812  mflo        $a3
    ctx->pc = 0x12ccccu;
    SET_GPR_U64(ctx, 7, ctx->lo);
    // 0x12ccd0: 0xe7400  sll         $t6, $t6, 16
    ctx->pc = 0x12ccd0u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 16));
    // 0x12ccd4: 0x1861818  mult        $v1, $t4, $a2
    ctx->pc = 0x12ccd4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x12ccd8: 0x1cd7025  or          $t6, $t6, $t5
    ctx->pc = 0x12ccd8u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 13));
    // 0x12ccdc: 0x1c3782b  sltu        $t7, $t6, $v1
    ctx->pc = 0x12ccdcu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x12cce0: 0x51e0000b  beql        $t7, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x12CCE0u;
    {
        const bool branch_taken_0x12cce0 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x12cce0) {
            ctx->pc = 0x12CCE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12CCE0u;
            // 0x12cce4: 0x1c37023  subu        $t6, $t6, $v1 (Delay Slot)
            SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 3)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12CD10u;
            goto label_12cd10;
        }
    }
    ctx->pc = 0x12CCE8u;
    // 0x12cce8: 0x1ca7021  addu        $t6, $t6, $t2
    ctx->pc = 0x12cce8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 10)));
    // 0x12ccec: 0x1ca782b  sltu        $t7, $t6, $t2
    ctx->pc = 0x12ccecu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x12ccf0: 0x15e00006  bnez        $t7, . + 4 + (0x6 << 2)
    ctx->pc = 0x12CCF0u;
    {
        const bool branch_taken_0x12ccf0 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12CCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CCF0u;
        // 0x12ccf4: 0x2587ffff  addiu       $a3, $t4, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ccf0) {
            ctx->pc = 0x12CD0Cu;
            goto label_12cd0c;
        }
    }
    ctx->pc = 0x12CCF8u;
    // 0x12ccf8: 0x1c3782b  sltu        $t7, $t6, $v1
    ctx->pc = 0x12ccf8u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x12ccfc: 0x51e00004  beql        $t7, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x12CCFCu;
    {
        const bool branch_taken_0x12ccfc = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x12ccfc) {
            ctx->pc = 0x12CD00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12CCFCu;
            // 0x12cd00: 0x1c37023  subu        $t6, $t6, $v1 (Delay Slot)
            SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 3)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12CD10u;
            goto label_12cd10;
        }
    }
    ctx->pc = 0x12CD04u;
    // 0x12cd04: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x12cd04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x12cd08: 0x1ca7021  addu        $t6, $t6, $t2
    ctx->pc = 0x12cd08u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 10)));
label_12cd0c:
    // 0x12cd0c: 0x1c37023  subu        $t6, $t6, $v1
    ctx->pc = 0x12cd0cu;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 3)));
label_12cd10:
    // 0x12cd10: 0x312dffff  andi        $t5, $t1, 0xFFFF
    ctx->pc = 0x12cd10u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
    // 0x12cd14: 0x1cb001b  divu        $zero, $t6, $t3
    ctx->pc = 0x12cd14u;
    { uint32_t divisor = GPR_U32(ctx, 11); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,14); } }
    // 0x12cd18: 0x51600001  beql        $t3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x12CD18u;
    {
        const bool branch_taken_0x12cd18 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        if (branch_taken_0x12cd18) {
            ctx->pc = 0x12CD1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12CD18u;
            // 0x12cd1c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x12CD20u;
            goto label_12cd20;
        }
    }
    ctx->pc = 0x12CD20u;
label_12cd20:
    // 0x12cd20: 0x7812  mflo        $t7
    ctx->pc = 0x12cd20u;
    SET_GPR_U64(ctx, 15, ctx->lo);
    // 0x12cd24: 0x7010  mfhi        $t6
    ctx->pc = 0x12cd24u;
    SET_GPR_U64(ctx, 14, ctx->hi);
    // 0x12cd28: 0x6012  mflo        $t4
    ctx->pc = 0x12cd28u;
    SET_GPR_U64(ctx, 12, ctx->lo);
    // 0x12cd2c: 0xe7400  sll         $t6, $t6, 16
    ctx->pc = 0x12cd2cu;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 16));
    // 0x12cd30: 0x1e61818  mult        $v1, $t7, $a2
    ctx->pc = 0x12cd30u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x12cd34: 0x1cd3025  or          $a2, $t6, $t5
    ctx->pc = 0x12cd34u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 14) | GPR_U64(ctx, 13));
    // 0x12cd38: 0xc3782b  sltu        $t7, $a2, $v1
    ctx->pc = 0x12cd38u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x12cd3c: 0x11e0000b  beqz        $t7, . + 4 + (0xB << 2)
    ctx->pc = 0x12CD3Cu;
    {
        const bool branch_taken_0x12cd3c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12CD40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CD3Cu;
        // 0x12cd40: 0x77c00  sll         $t7, $a3, 16 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cd3c) {
            ctx->pc = 0x12CD6Cu;
            goto label_12cd6c;
        }
    }
    ctx->pc = 0x12CD44u;
    // 0x12cd44: 0xca3021  addu        $a2, $a2, $t2
    ctx->pc = 0x12cd44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
    // 0x12cd48: 0xca782b  sltu        $t7, $a2, $t2
    ctx->pc = 0x12cd48u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x12cd4c: 0x15e00006  bnez        $t7, . + 4 + (0x6 << 2)
    ctx->pc = 0x12CD4Cu;
    {
        const bool branch_taken_0x12cd4c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12CD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CD4Cu;
        // 0x12cd50: 0x258cffff  addiu       $t4, $t4, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cd4c) {
            ctx->pc = 0x12CD68u;
            goto label_12cd68;
        }
    }
    ctx->pc = 0x12CD54u;
    // 0x12cd54: 0xc3782b  sltu        $t7, $a2, $v1
    ctx->pc = 0x12cd54u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x12cd58: 0x11e00004  beqz        $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x12CD58u;
    {
        const bool branch_taken_0x12cd58 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12CD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CD58u;
        // 0x12cd5c: 0x77c00  sll         $t7, $a3, 16 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cd58) {
            ctx->pc = 0x12CD6Cu;
            goto label_12cd6c;
        }
    }
    ctx->pc = 0x12CD60u;
    // 0x12cd60: 0x258cffff  addiu       $t4, $t4, -0x1
    ctx->pc = 0x12cd60u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
    // 0x12cd64: 0xca3021  addu        $a2, $a2, $t2
    ctx->pc = 0x12cd64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
label_12cd68:
    // 0x12cd68: 0x77c00  sll         $t7, $a3, 16
    ctx->pc = 0x12cd68u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
label_12cd6c:
    // 0x12cd6c: 0x30aeffff  andi        $t6, $a1, 0xFFFF
    ctx->pc = 0x12cd6cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x12cd70: 0x1ec3825  or          $a3, $t7, $t4
    ctx->pc = 0x12cd70u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 15) | GPR_U64(ctx, 12));
    // 0x12cd74: 0xc33023  subu        $a2, $a2, $v1
    ctx->pc = 0x12cd74u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x12cd78: 0x30efffff  andi        $t7, $a3, 0xFFFF
    ctx->pc = 0x12cd78u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x12cd7c: 0x56402  srl         $t4, $a1, 16
    ctx->pc = 0x12cd7cu;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
    // 0x12cd80: 0x1ee9018  mult        $s2, $t7, $t6
    ctx->pc = 0x12cd80u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
    // 0x12cd84: 0x71ec5818  mult1       $t3, $t7, $t4
    ctx->pc = 0x12cd84u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 12); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x12cd88: 0x76c02  srl         $t5, $a3, 16
    ctx->pc = 0x12cd88u;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 7), 16));
    // 0x12cd8c: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x12cd8cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cd90: 0x1ae7018  mult        $t6, $t5, $t6
    ctx->pc = 0x12cd90u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
    // 0x12cd94: 0x127c02  srl         $t7, $s2, 16
    ctx->pc = 0x12cd94u;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 18), 16));
    // 0x12cd98: 0x16f5821  addu        $t3, $t3, $t7
    ctx->pc = 0x12cd98u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 15)));
    // 0x12cd9c: 0x16e5821  addu        $t3, $t3, $t6
    ctx->pc = 0x12cd9cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 14)));
    // 0x12cda0: 0x16e702b  sltu        $t6, $t3, $t6
    ctx->pc = 0x12cda0u;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 14)) ? 1 : 0);
    // 0x12cda4: 0x11c00003  beqz        $t6, . + 4 + (0x3 << 2)
    ctx->pc = 0x12CDA4u;
    {
        const bool branch_taken_0x12cda4 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x12CDA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CDA4u;
        // 0x12cda8: 0x71ac6018  mult1       $t4, $t5, $t4 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 12); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cda4) {
            ctx->pc = 0x12CDB4u;
            goto label_12cdb4;
        }
    }
    ctx->pc = 0x12CDACu;
    // 0x12cdac: 0x3c0f0001  lui         $t7, 0x1
    ctx->pc = 0x12cdacu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)1 << 16));
    // 0x12cdb0: 0x18f6021  addu        $t4, $t4, $t7
    ctx->pc = 0x12cdb0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 15)));
label_12cdb4:
    // 0x12cdb4: 0xb7402  srl         $t6, $t3, 16
    ctx->pc = 0x12cdb4u;
    SET_GPR_S32(ctx, 14, (int32_t)SRL32(GPR_U32(ctx, 11), 16));
    // 0x12cdb8: 0xb6c00  sll         $t5, $t3, 16
    ctx->pc = 0x12cdb8u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 11), 16));
    // 0x12cdbc: 0x18e2021  addu        $a0, $t4, $t6
    ctx->pc = 0x12cdbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 14)));
    // 0x12cdc0: 0x324fffff  andi        $t7, $s2, 0xFFFF
    ctx->pc = 0x12cdc0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
    // 0x12cdc4: 0x124702b  sltu        $t6, $t1, $a0
    ctx->pc = 0x12cdc4u;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x12cdc8: 0x15c00005  bnez        $t6, . + 4 + (0x5 << 2)
    ctx->pc = 0x12CDC8u;
    {
        const bool branch_taken_0x12cdc8 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x12CDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CDC8u;
        // 0x12cdcc: 0x1af5821  addu        $t3, $t5, $t7 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 15)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cdc8) {
            ctx->pc = 0x12CDE0u;
            goto label_12cde0;
        }
    }
    ctx->pc = 0x12CDD0u;
    // 0x12cdd0: 0x14890009  bne         $a0, $t1, . + 4 + (0x9 << 2)
    ctx->pc = 0x12CDD0u;
    {
        const bool branch_taken_0x12cdd0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 9));
        ctx->pc = 0x12CDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CDD0u;
        // 0x12cdd4: 0x30b782b  sltu        $t7, $t8, $t3 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 24) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cdd0) {
            ctx->pc = 0x12CDF8u;
            goto label_12cdf8;
        }
    }
    ctx->pc = 0x12CDD8u;
    // 0x12cdd8: 0x11e00007  beqz        $t7, . + 4 + (0x7 << 2)
    ctx->pc = 0x12CDD8u;
    {
        const bool branch_taken_0x12cdd8 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x12cdd8) {
            ctx->pc = 0x12CDF8u;
            goto label_12cdf8;
        }
    }
    ctx->pc = 0x12CDE0u;
label_12cde0:
    // 0x12cde0: 0x1656823  subu        $t5, $t3, $a1
    ctx->pc = 0x12cde0u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 5)));
    // 0x12cde4: 0x8a7023  subu        $t6, $a0, $t2
    ctx->pc = 0x12cde4u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x12cde8: 0x16d782b  sltu        $t7, $t3, $t5
    ctx->pc = 0x12cde8u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x12cdec: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x12cdecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x12cdf0: 0x1cf2023  subu        $a0, $t6, $t7
    ctx->pc = 0x12cdf0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 15)));
    // 0x12cdf4: 0x1a0582d  daddu       $t3, $t5, $zero
    ctx->pc = 0x12cdf4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
label_12cdf8:
    // 0x12cdf8: 0x1220fed0  beqz        $s1, . + 4 + (-0x130 << 2)
    ctx->pc = 0x12CDF8u;
    {
        const bool branch_taken_0x12cdf8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x12CDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CDF8u;
        // 0x12cdfc: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cdf8) {
            ctx->pc = 0x12C93Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12c93c;
        }
    }
    ctx->pc = 0x12CE00u;
    // 0x12ce00: 0x30b6823  subu        $t5, $t8, $t3
    ctx->pc = 0x12ce00u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 24), GPR_U32(ctx, 11)));
    // 0x12ce04: 0xc46023  subu        $t4, $a2, $a0
    ctx->pc = 0x12ce04u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x12ce08: 0x30d702b  sltu        $t6, $t8, $t5
    ctx->pc = 0x12ce08u;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 24) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x12ce0c: 0x18e4823  subu        $t1, $t4, $t6
    ctx->pc = 0x12ce0cu;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 14)));
    // 0x12ce10: 0x32d6806  srlv        $t5, $t5, $t9
    ctx->pc = 0x12ce10u;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 13), GPR_U32(ctx, 25) & 0x1F));
    // 0x12ce14: 0x2097804  sllv        $t7, $t1, $s0
    ctx->pc = 0x12ce14u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 16) & 0x1F));
    // 0x12ce18: 0x240effff  addiu       $t6, $zero, -0x1
    ctx->pc = 0x12ce18u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12ce1c: 0xe703c  dsll32      $t6, $t6, 0
    ctx->pc = 0x12ce1cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << (32 + 0));
    // 0x12ce20: 0x1ed7825  or          $t7, $t7, $t5
    ctx->pc = 0x12ce20u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 13));
    // 0x12ce24: 0x10e4024  and         $t0, $t0, $t6
    ctx->pc = 0x12ce24u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 14));
    // 0x12ce28: 0xf783c  dsll32      $t7, $t7, 0
    ctx->pc = 0x12ce28u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 0));
    // 0x12ce2c: 0x3297006  srlv        $t6, $t1, $t9
    ctx->pc = 0x12ce2cu;
    SET_GPR_S32(ctx, 14, (int32_t)SRL32(GPR_U32(ctx, 9), GPR_U32(ctx, 25) & 0x1F));
    // 0x12ce30: 0xf783e  dsrl32      $t7, $t7, 0
    ctx->pc = 0x12ce30u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) >> (32 + 0));
    // 0x12ce34: 0xe703c  dsll32      $t6, $t6, 0
    ctx->pc = 0x12ce34u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << (32 + 0));
    // 0x12ce38: 0x1000ff8f  b           . + 4 + (-0x71 << 2)
    ctx->pc = 0x12CE38u;
    {
        const bool branch_taken_0x12ce38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12CE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CE38u;
        // 0x12ce3c: 0x10f4025  or          $t0, $t0, $t7 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ce38) {
            ctx->pc = 0x12CC78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12cc78;
        }
    }
    ctx->pc = 0x12CE40u;
label_12ce40:
    // 0x12ce40: 0x240e0010  addiu       $t6, $zero, 0x10
    ctx->pc = 0x12ce40u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x12ce44: 0x35efffff  ori         $t7, $t7, 0xFFFF
    ctx->pc = 0x12ce44u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)65535);
    // 0x12ce48: 0x240d0018  addiu       $t5, $zero, 0x18
    ctx->pc = 0x12ce48u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x12ce4c: 0x1ea782b  sltu        $t7, $t7, $t2
    ctx->pc = 0x12ce4cu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x12ce50: 0x1c0602d  daddu       $t4, $t6, $zero
    ctx->pc = 0x12ce50u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ce54: 0x1000ff69  b           . + 4 + (-0x97 << 2)
    ctx->pc = 0x12CE54u;
    {
        const bool branch_taken_0x12ce54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12CE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CE54u;
        // 0x12ce58: 0x1af600b  movn        $t4, $t5, $t7 (Delay Slot)
        if (GPR_U64(ctx, 15) != 0) SET_GPR_VEC(ctx, 12, GPR_VEC(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ce54) {
            ctx->pc = 0x12CBFCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12cbfc;
        }
    }
    ctx->pc = 0x12CE5Cu;
}
