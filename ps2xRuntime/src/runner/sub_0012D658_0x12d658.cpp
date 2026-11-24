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

// Function: sub_0012D658
// Address: 0x12d658 - 0x12dd04
void sub_0012D658_0x12d658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012D658_0x12d658");
#endif

    switch (ctx->pc) {
        case 0x12d6b0u: goto label_12d6b0;
        case 0x12d7b8u: goto label_12d7b8;
        case 0x12d7e0u: goto label_12d7e0;
        case 0x12d7e4u: goto label_12d7e4;
        case 0x12d878u: goto label_12d878;
        case 0x12d8b0u: goto label_12d8b0;
        case 0x12daa4u: goto label_12daa4;
        case 0x12db20u: goto label_12db20;
        default: break;
    }

    ctx->pc = 0x12d658u;

    // 0x12d658: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12d658u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12d65c: 0x5503f  dsra32      $t2, $a1, 0
    ctx->pc = 0x12d65cu;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x12d660: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x12d660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x12d664: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x12d664u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x12d668: 0x4c03c  dsll32      $t8, $a0, 0
    ctx->pc = 0x12d668u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 4) << (32 + 0));
    // 0x12d66c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12d66cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12d670: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x12d670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x12d674: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x12d674u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d678: 0x4483f  dsra32      $t1, $a0, 0
    ctx->pc = 0x12d678u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x12d67c: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x12d67cu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x12d680: 0x154000fd  bnez        $t2, . + 4 + (0xFD << 2)
    ctx->pc = 0x12D680u;
    {
        const bool branch_taken_0x12d680 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x12D684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D680u;
        // 0x12d684: 0x18c03f  dsra32      $t8, $t8, 0 (Delay Slot)
        SET_GPR_S64(ctx, 24, GPR_S64(ctx, 24) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d680) {
            ctx->pc = 0x12DA78u;
            goto label_12da78;
        }
    }
    ctx->pc = 0x12D688u;
    // 0x12d688: 0x125782b  sltu        $t7, $t1, $a1
    ctx->pc = 0x12d688u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x12d68c: 0x11e0006b  beqz        $t7, . + 4 + (0x6B << 2)
    ctx->pc = 0x12D68Cu;
    {
        const bool branch_taken_0x12d68c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D68Cu;
        // 0x12d690: 0x340fffff  ori         $t7, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d68c) {
            ctx->pc = 0x12D83Cu;
            goto label_12d83c;
        }
    }
    ctx->pc = 0x12D694u;
    // 0x12d694: 0x1e5782b  sltu        $t7, $t7, $a1
    ctx->pc = 0x12d694u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x12d698: 0x15e00061  bnez        $t7, . + 4 + (0x61 << 2)
    ctx->pc = 0x12D698u;
    {
        const bool branch_taken_0x12d698 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12D69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D698u;
        // 0x12d69c: 0x3c0f00ff  lui         $t7, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d698) {
            ctx->pc = 0x12D820u;
            goto label_12d820;
        }
    }
    ctx->pc = 0x12D6A0u;
    // 0x12d6a0: 0x240f0008  addiu       $t7, $zero, 0x8
    ctx->pc = 0x12d6a0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x12d6a4: 0x2cae0100  sltiu       $t6, $a1, 0x100
    ctx->pc = 0x12d6a4u;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x12d6a8: 0x1e0602d  daddu       $t4, $t7, $zero
    ctx->pc = 0x12d6a8u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d6ac: 0xe600b  movn        $t4, $zero, $t6
    ctx->pc = 0x12d6acu;
    if (GPR_U64(ctx, 14) != 0) SET_GPR_VEC(ctx, 12, GPR_VEC(ctx, 0));
label_12d6b0:
    // 0x12d6b0: 0x3c0e0066  lui         $t6, 0x66
    ctx->pc = 0x12d6b0u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)102 << 16));
    // 0x12d6b4: 0x1857806  srlv        $t7, $a1, $t4
    ctx->pc = 0x12d6b4u;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 5), GPR_U32(ctx, 12) & 0x1F));
    // 0x12d6b8: 0x25ce4478  addiu       $t6, $t6, 0x4478
    ctx->pc = 0x12d6b8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 17528));
    // 0x12d6bc: 0x240b0020  addiu       $t3, $zero, 0x20
    ctx->pc = 0x12d6bcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x12d6c0: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x12d6c0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x12d6c4: 0x91ed0000  lbu         $t5, 0x0($t7)
    ctx->pc = 0x12d6c4u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x12d6c8: 0x1ac6821  addu        $t5, $t5, $t4
    ctx->pc = 0x12d6c8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 12)));
    // 0x12d6cc: 0x16dc823  subu        $t9, $t3, $t5
    ctx->pc = 0x12d6ccu;
    SET_GPR_S32(ctx, 25, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 13)));
    // 0x12d6d0: 0x13200006  beqz        $t9, . + 4 + (0x6 << 2)
    ctx->pc = 0x12D6D0u;
    {
        const bool branch_taken_0x12d6d0 = (GPR_U64(ctx, 25) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D6D0u;
        // 0x12d6d4: 0x1797823  subu        $t7, $t3, $t9 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 25)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d6d0) {
            ctx->pc = 0x12D6ECu;
            goto label_12d6ec;
        }
    }
    ctx->pc = 0x12D6D8u;
    // 0x12d6d8: 0x3297004  sllv        $t6, $t1, $t9
    ctx->pc = 0x12d6d8u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 25) & 0x1F));
    // 0x12d6dc: 0x1f87806  srlv        $t7, $t8, $t7
    ctx->pc = 0x12d6dcu;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 24), GPR_U32(ctx, 15) & 0x1F));
    // 0x12d6e0: 0x3252804  sllv        $a1, $a1, $t9
    ctx->pc = 0x12d6e0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 25) & 0x1F));
    // 0x12d6e4: 0x1cf4825  or          $t1, $t6, $t7
    ctx->pc = 0x12d6e4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 14) | GPR_U64(ctx, 15));
    // 0x12d6e8: 0x338c004  sllv        $t8, $t8, $t9
    ctx->pc = 0x12d6e8u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 24), GPR_U32(ctx, 25) & 0x1F));
label_12d6ec:
    // 0x12d6ec: 0x55c02  srl         $t3, $a1, 16
    ctx->pc = 0x12d6ecu;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
    // 0x12d6f0: 0x30a7ffff  andi        $a3, $a1, 0xFFFF
    ctx->pc = 0x12d6f0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x12d6f4: 0x12b001b  divu        $zero, $t1, $t3
    ctx->pc = 0x12d6f4u;
    { uint32_t divisor = GPR_U32(ctx, 11); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 9) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 9) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,9); } }
    // 0x12d6f8: 0x186c02  srl         $t5, $t8, 16
    ctx->pc = 0x12d6f8u;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 24), 16));
    // 0x12d6fc: 0x51600001  beql        $t3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x12D6FCu;
    {
        const bool branch_taken_0x12d6fc = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        if (branch_taken_0x12d6fc) {
            ctx->pc = 0x12D700u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12D6FCu;
            // 0x12d700: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x12D704u;
            goto label_12d704;
        }
    }
    ctx->pc = 0x12D704u;
label_12d704:
    // 0x12d704: 0x7812  mflo        $t7
    ctx->pc = 0x12d704u;
    SET_GPR_U64(ctx, 15, ctx->lo);
    // 0x12d708: 0x7010  mfhi        $t6
    ctx->pc = 0x12d708u;
    SET_GPR_U64(ctx, 14, ctx->hi);
    // 0x12d70c: 0x6012  mflo        $t4
    ctx->pc = 0x12d70cu;
    SET_GPR_U64(ctx, 12, ctx->lo);
    // 0x12d710: 0xe7400  sll         $t6, $t6, 16
    ctx->pc = 0x12d710u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 16));
    // 0x12d714: 0x1e75018  mult        $t2, $t7, $a3
    ctx->pc = 0x12d714u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x12d718: 0x1cd7025  or          $t6, $t6, $t5
    ctx->pc = 0x12d718u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 13));
    // 0x12d71c: 0x1ca782b  sltu        $t7, $t6, $t2
    ctx->pc = 0x12d71cu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x12d720: 0x51e0000b  beql        $t7, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x12D720u;
    {
        const bool branch_taken_0x12d720 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x12d720) {
            ctx->pc = 0x12D724u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12D720u;
            // 0x12d724: 0x1ca7023  subu        $t6, $t6, $t2 (Delay Slot)
            SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 10)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12D750u;
            goto label_12d750;
        }
    }
    ctx->pc = 0x12D728u;
    // 0x12d728: 0x1c57021  addu        $t6, $t6, $a1
    ctx->pc = 0x12d728u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 5)));
    // 0x12d72c: 0x1c5782b  sltu        $t7, $t6, $a1
    ctx->pc = 0x12d72cu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x12d730: 0x15e00006  bnez        $t7, . + 4 + (0x6 << 2)
    ctx->pc = 0x12D730u;
    {
        const bool branch_taken_0x12d730 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12D734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D730u;
        // 0x12d734: 0x258cffff  addiu       $t4, $t4, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d730) {
            ctx->pc = 0x12D74Cu;
            goto label_12d74c;
        }
    }
    ctx->pc = 0x12D738u;
    // 0x12d738: 0x1ca782b  sltu        $t7, $t6, $t2
    ctx->pc = 0x12d738u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x12d73c: 0x51e00004  beql        $t7, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x12D73Cu;
    {
        const bool branch_taken_0x12d73c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x12d73c) {
            ctx->pc = 0x12D740u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12D73Cu;
            // 0x12d740: 0x1ca7023  subu        $t6, $t6, $t2 (Delay Slot)
            SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 10)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12D750u;
            goto label_12d750;
        }
    }
    ctx->pc = 0x12D744u;
    // 0x12d744: 0x258cffff  addiu       $t4, $t4, -0x1
    ctx->pc = 0x12d744u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
    // 0x12d748: 0x1c57021  addu        $t6, $t6, $a1
    ctx->pc = 0x12d748u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 5)));
label_12d74c:
    // 0x12d74c: 0x1ca7023  subu        $t6, $t6, $t2
    ctx->pc = 0x12d74cu;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 10)));
label_12d750:
    // 0x12d750: 0x330dffff  andi        $t5, $t8, 0xFFFF
    ctx->pc = 0x12d750u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 24) & (uint64_t)(uint16_t)65535);
    // 0x12d754: 0x1cb001b  divu        $zero, $t6, $t3
    ctx->pc = 0x12d754u;
    { uint32_t divisor = GPR_U32(ctx, 11); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,14); } }
    // 0x12d758: 0x51600001  beql        $t3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x12D758u;
    {
        const bool branch_taken_0x12d758 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        if (branch_taken_0x12d758) {
            ctx->pc = 0x12D75Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12D758u;
            // 0x12d75c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x12D760u;
            goto label_12d760;
        }
    }
    ctx->pc = 0x12D760u;
label_12d760:
    // 0x12d760: 0x7812  mflo        $t7
    ctx->pc = 0x12d760u;
    SET_GPR_U64(ctx, 15, ctx->lo);
    // 0x12d764: 0x7010  mfhi        $t6
    ctx->pc = 0x12d764u;
    SET_GPR_U64(ctx, 14, ctx->hi);
    // 0x12d768: 0x5812  mflo        $t3
    ctx->pc = 0x12d768u;
    SET_GPR_U64(ctx, 11, ctx->lo);
    // 0x12d76c: 0xe7400  sll         $t6, $t6, 16
    ctx->pc = 0x12d76cu;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 16));
    // 0x12d770: 0x1e75018  mult        $t2, $t7, $a3
    ctx->pc = 0x12d770u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x12d774: 0x1cd2025  or          $a0, $t6, $t5
    ctx->pc = 0x12d774u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 14) | GPR_U64(ctx, 13));
    // 0x12d778: 0x8a782b  sltu        $t7, $a0, $t2
    ctx->pc = 0x12d778u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x12d77c: 0x11e0000b  beqz        $t7, . + 4 + (0xB << 2)
    ctx->pc = 0x12D77Cu;
    {
        const bool branch_taken_0x12d77c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D77Cu;
        // 0x12d780: 0xc7c00  sll         $t7, $t4, 16 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 12), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d77c) {
            ctx->pc = 0x12D7ACu;
            goto label_12d7ac;
        }
    }
    ctx->pc = 0x12D784u;
    // 0x12d784: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x12d784u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x12d788: 0x85782b  sltu        $t7, $a0, $a1
    ctx->pc = 0x12d788u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x12d78c: 0x15e00006  bnez        $t7, . + 4 + (0x6 << 2)
    ctx->pc = 0x12D78Cu;
    {
        const bool branch_taken_0x12d78c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12D790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D78Cu;
        // 0x12d790: 0x256bffff  addiu       $t3, $t3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d78c) {
            ctx->pc = 0x12D7A8u;
            goto label_12d7a8;
        }
    }
    ctx->pc = 0x12D794u;
    // 0x12d794: 0x8a782b  sltu        $t7, $a0, $t2
    ctx->pc = 0x12d794u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x12d798: 0x11e00004  beqz        $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x12D798u;
    {
        const bool branch_taken_0x12d798 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D798u;
        // 0x12d79c: 0xc7c00  sll         $t7, $t4, 16 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 12), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d798) {
            ctx->pc = 0x12D7ACu;
            goto label_12d7ac;
        }
    }
    ctx->pc = 0x12D7A0u;
    // 0x12d7a0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x12d7a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x12d7a4: 0x256bffff  addiu       $t3, $t3, -0x1
    ctx->pc = 0x12d7a4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
label_12d7a8:
    // 0x12d7a8: 0xc7c00  sll         $t7, $t4, 16
    ctx->pc = 0x12d7a8u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 12), 16));
label_12d7ac:
    // 0x12d7ac: 0x8ac023  subu        $t8, $a0, $t2
    ctx->pc = 0x12d7acu;
    SET_GPR_S32(ctx, 24, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x12d7b0: 0x1eb3825  or          $a3, $t7, $t3
    ctx->pc = 0x12d7b0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 15) | GPR_U64(ctx, 11));
    // 0x12d7b4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x12d7b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12d7b8:
    // 0x12d7b8: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x12D7B8u;
    {
        const bool branch_taken_0x12d7b8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D7B8u;
        // 0x12d7bc: 0x3387806  srlv        $t7, $t8, $t9 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 24), GPR_U32(ctx, 25) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d7b8) {
            ctx->pc = 0x12D7E4u;
            goto label_12d7e4;
        }
    }
    ctx->pc = 0x12D7C0u;
    // 0x12d7c0: 0x240effff  addiu       $t6, $zero, -0x1
    ctx->pc = 0x12d7c0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12d7c4: 0xf783c  dsll32      $t7, $t7, 0
    ctx->pc = 0x12d7c4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 0));
    // 0x12d7c8: 0xe703c  dsll32      $t6, $t6, 0
    ctx->pc = 0x12d7c8u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << (32 + 0));
    // 0x12d7cc: 0x10e4024  and         $t0, $t0, $t6
    ctx->pc = 0x12d7ccu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 14));
    // 0x12d7d0: 0xf783e  dsrl32      $t7, $t7, 0
    ctx->pc = 0x12d7d0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) >> (32 + 0));
    // 0x12d7d4: 0x10f4025  or          $t0, $t0, $t7
    ctx->pc = 0x12d7d4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 15));
    // 0x12d7d8: 0x8403c  dsll32      $t0, $t0, 0
    ctx->pc = 0x12d7d8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 0));
    // 0x12d7dc: 0x8403e  dsrl32      $t0, $t0, 0
    ctx->pc = 0x12d7dcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) >> (32 + 0));
label_12d7e0:
    // 0x12d7e0: 0xfe280000  sd          $t0, 0x0($s1)
    ctx->pc = 0x12d7e0u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 8));
label_12d7e4:
    // 0x12d7e4: 0x240effff  addiu       $t6, $zero, -0x1
    ctx->pc = 0x12d7e4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12d7e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12d7e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12d7ec: 0x7783c  dsll32      $t7, $a3, 0
    ctx->pc = 0x12d7ecu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 7) << (32 + 0));
    // 0x12d7f0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x12d7f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12d7f4: 0xe703c  dsll32      $t6, $t6, 0
    ctx->pc = 0x12d7f4u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << (32 + 0));
    // 0x12d7f8: 0xf783e  dsrl32      $t7, $t7, 0
    ctx->pc = 0x12d7f8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) >> (32 + 0));
    // 0x12d7fc: 0x4e1024  and         $v0, $v0, $t6
    ctx->pc = 0x12d7fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 14));
    // 0x12d800: 0x4f1025  or          $v0, $v0, $t7
    ctx->pc = 0x12d800u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 15));
    // 0x12d804: 0x12703c  dsll32      $t6, $s2, 0
    ctx->pc = 0x12d804u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 18) << (32 + 0));
    // 0x12d808: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x12d808u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x12d80c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x12d80cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12d810: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x12d810u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x12d814: 0x4e1025  or          $v0, $v0, $t6
    ctx->pc = 0x12d814u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 14));
    // 0x12d818: 0x3e00008  jr          $ra
    ctx->pc = 0x12D818u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12D81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D818u;
        // 0x12d81c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12D818u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12D820u;
label_12d820:
    // 0x12d820: 0x240e0010  addiu       $t6, $zero, 0x10
    ctx->pc = 0x12d820u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x12d824: 0x35efffff  ori         $t7, $t7, 0xFFFF
    ctx->pc = 0x12d824u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)65535);
    // 0x12d828: 0x240d0018  addiu       $t5, $zero, 0x18
    ctx->pc = 0x12d828u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x12d82c: 0x1e5782b  sltu        $t7, $t7, $a1
    ctx->pc = 0x12d82cu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x12d830: 0x1c0602d  daddu       $t4, $t6, $zero
    ctx->pc = 0x12d830u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d834: 0x1000ff9e  b           . + 4 + (-0x62 << 2)
    ctx->pc = 0x12D834u;
    {
        const bool branch_taken_0x12d834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D834u;
        // 0x12d838: 0x1af600b  movn        $t4, $t5, $t7 (Delay Slot)
        if (GPR_U64(ctx, 15) != 0) SET_GPR_VEC(ctx, 12, GPR_VEC(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d834) {
            ctx->pc = 0x12D6B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12d6b0;
        }
    }
    ctx->pc = 0x12D83Cu;
label_12d83c:
    // 0x12d83c: 0x14a00008  bnez        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x12D83Cu;
    {
        const bool branch_taken_0x12d83c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x12D840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D83Cu;
        // 0x12d840: 0x1e5782b  sltu        $t7, $t7, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d83c) {
            ctx->pc = 0x12D860u;
            goto label_12d860;
        }
    }
    ctx->pc = 0x12D844u;
    // 0x12d844: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x12d844u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12d848: 0x1ea001b  divu        $zero, $t7, $t2
    ctx->pc = 0x12d848u;
    { uint32_t divisor = GPR_U32(ctx, 10); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 15) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 15) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,15); } }
    // 0x12d84c: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x12D84Cu;
    {
        const bool branch_taken_0x12d84c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x12d84c) {
            ctx->pc = 0x12D850u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12D84Cu;
            // 0x12d850: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x12D854u;
            goto label_12d854;
        }
    }
    ctx->pc = 0x12D854u;
label_12d854:
    // 0x12d854: 0x2812  mflo        $a1
    ctx->pc = 0x12d854u;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x12d858: 0x340fffff  ori         $t7, $zero, 0xFFFF
    ctx->pc = 0x12d858u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x12d85c: 0x1e5782b  sltu        $t7, $t7, $a1
    ctx->pc = 0x12d85cu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_12d860:
    // 0x12d860: 0x15e0007e  bnez        $t7, . + 4 + (0x7E << 2)
    ctx->pc = 0x12D860u;
    {
        const bool branch_taken_0x12d860 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12D864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D860u;
        // 0x12d864: 0x3c0f00ff  lui         $t7, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d860) {
            ctx->pc = 0x12DA5Cu;
            goto label_12da5c;
        }
    }
    ctx->pc = 0x12D868u;
    // 0x12d868: 0x240f0008  addiu       $t7, $zero, 0x8
    ctx->pc = 0x12d868u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x12d86c: 0x2cae0100  sltiu       $t6, $a1, 0x100
    ctx->pc = 0x12d86cu;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x12d870: 0x1e0602d  daddu       $t4, $t7, $zero
    ctx->pc = 0x12d870u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d874: 0xe600b  movn        $t4, $zero, $t6
    ctx->pc = 0x12d874u;
    if (GPR_U64(ctx, 14) != 0) SET_GPR_VEC(ctx, 12, GPR_VEC(ctx, 0));
label_12d878:
    // 0x12d878: 0x3c0e0066  lui         $t6, 0x66
    ctx->pc = 0x12d878u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)102 << 16));
    // 0x12d87c: 0x1857806  srlv        $t7, $a1, $t4
    ctx->pc = 0x12d87cu;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 5), GPR_U32(ctx, 12) & 0x1F));
    // 0x12d880: 0x25ce4478  addiu       $t6, $t6, 0x4478
    ctx->pc = 0x12d880u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 17528));
    // 0x12d884: 0x240b0020  addiu       $t3, $zero, 0x20
    ctx->pc = 0x12d884u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x12d888: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x12d888u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x12d88c: 0x91ed0000  lbu         $t5, 0x0($t7)
    ctx->pc = 0x12d88cu;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x12d890: 0x1ac6821  addu        $t5, $t5, $t4
    ctx->pc = 0x12d890u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 12)));
    // 0x12d894: 0x16dc823  subu        $t9, $t3, $t5
    ctx->pc = 0x12d894u;
    SET_GPR_S32(ctx, 25, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 13)));
    // 0x12d898: 0x17200036  bnez        $t9, . + 4 + (0x36 << 2)
    ctx->pc = 0x12D898u;
    {
        const bool branch_taken_0x12d898 = (GPR_U64(ctx, 25) != GPR_U64(ctx, 0));
        ctx->pc = 0x12D89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D898u;
        // 0x12d89c: 0x1798023  subu        $s0, $t3, $t9 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 25)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d898) {
            ctx->pc = 0x12D974u;
            goto label_12d974;
        }
    }
    ctx->pc = 0x12D8A0u;
    // 0x12d8a0: 0x1254823  subu        $t1, $t1, $a1
    ctx->pc = 0x12d8a0u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
    // 0x12d8a4: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x12d8a4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12d8a8: 0x55402  srl         $t2, $a1, 16
    ctx->pc = 0x12d8a8u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
    // 0x12d8ac: 0x30a3ffff  andi        $v1, $a1, 0xFFFF
    ctx->pc = 0x12d8acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
label_12d8b0:
    // 0x12d8b0: 0x12a001b  divu        $zero, $t1, $t2
    ctx->pc = 0x12d8b0u;
    { uint32_t divisor = GPR_U32(ctx, 10); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 9) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 9) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,9); } }
    // 0x12d8b4: 0x186402  srl         $t4, $t8, 16
    ctx->pc = 0x12d8b4u;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 24), 16));
    // 0x12d8b8: 0x51400001  beql        $t2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x12D8B8u;
    {
        const bool branch_taken_0x12d8b8 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x12d8b8) {
            ctx->pc = 0x12D8BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12D8B8u;
            // 0x12d8bc: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x12D8C0u;
            goto label_12d8c0;
        }
    }
    ctx->pc = 0x12D8C0u;
label_12d8c0:
    // 0x12d8c0: 0x7010  mfhi        $t6
    ctx->pc = 0x12d8c0u;
    SET_GPR_U64(ctx, 14, ctx->hi);
    // 0x12d8c4: 0x6812  mflo        $t5
    ctx->pc = 0x12d8c4u;
    SET_GPR_U64(ctx, 13, ctx->lo);
    // 0x12d8c8: 0x4812  mflo        $t1
    ctx->pc = 0x12d8c8u;
    SET_GPR_U64(ctx, 9, ctx->lo);
    // 0x12d8cc: 0xe7400  sll         $t6, $t6, 16
    ctx->pc = 0x12d8ccu;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 16));
    // 0x12d8d0: 0x1a35818  mult        $t3, $t5, $v1
    ctx->pc = 0x12d8d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x12d8d4: 0x1cc7025  or          $t6, $t6, $t4
    ctx->pc = 0x12d8d4u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 12));
    // 0x12d8d8: 0x1cb782b  sltu        $t7, $t6, $t3
    ctx->pc = 0x12d8d8u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x12d8dc: 0x51e0000b  beql        $t7, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x12D8DCu;
    {
        const bool branch_taken_0x12d8dc = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x12d8dc) {
            ctx->pc = 0x12D8E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12D8DCu;
            // 0x12d8e0: 0x1cb7023  subu        $t6, $t6, $t3 (Delay Slot)
            SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 11)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12D90Cu;
            goto label_12d90c;
        }
    }
    ctx->pc = 0x12D8E4u;
    // 0x12d8e4: 0x1c57021  addu        $t6, $t6, $a1
    ctx->pc = 0x12d8e4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 5)));
    // 0x12d8e8: 0x1c5782b  sltu        $t7, $t6, $a1
    ctx->pc = 0x12d8e8u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x12d8ec: 0x15e00006  bnez        $t7, . + 4 + (0x6 << 2)
    ctx->pc = 0x12D8ECu;
    {
        const bool branch_taken_0x12d8ec = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12D8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D8ECu;
        // 0x12d8f0: 0x25a9ffff  addiu       $t1, $t5, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d8ec) {
            ctx->pc = 0x12D908u;
            goto label_12d908;
        }
    }
    ctx->pc = 0x12D8F4u;
    // 0x12d8f4: 0x1cb782b  sltu        $t7, $t6, $t3
    ctx->pc = 0x12d8f4u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x12d8f8: 0x51e00004  beql        $t7, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x12D8F8u;
    {
        const bool branch_taken_0x12d8f8 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x12d8f8) {
            ctx->pc = 0x12D8FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12D8F8u;
            // 0x12d8fc: 0x1cb7023  subu        $t6, $t6, $t3 (Delay Slot)
            SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 11)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12D90Cu;
            goto label_12d90c;
        }
    }
    ctx->pc = 0x12D900u;
    // 0x12d900: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x12d900u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x12d904: 0x1c57021  addu        $t6, $t6, $a1
    ctx->pc = 0x12d904u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 5)));
label_12d908:
    // 0x12d908: 0x1cb7023  subu        $t6, $t6, $t3
    ctx->pc = 0x12d908u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 11)));
label_12d90c:
    // 0x12d90c: 0x330dffff  andi        $t5, $t8, 0xFFFF
    ctx->pc = 0x12d90cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 24) & (uint64_t)(uint16_t)65535);
    // 0x12d910: 0x1ca001b  divu        $zero, $t6, $t2
    ctx->pc = 0x12d910u;
    { uint32_t divisor = GPR_U32(ctx, 10); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,14); } }
    // 0x12d914: 0x51400001  beql        $t2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x12D914u;
    {
        const bool branch_taken_0x12d914 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x12d914) {
            ctx->pc = 0x12D918u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12D914u;
            // 0x12d918: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x12D91Cu;
            goto label_12d91c;
        }
    }
    ctx->pc = 0x12D91Cu;
label_12d91c:
    // 0x12d91c: 0x7812  mflo        $t7
    ctx->pc = 0x12d91cu;
    SET_GPR_U64(ctx, 15, ctx->lo);
    // 0x12d920: 0x7010  mfhi        $t6
    ctx->pc = 0x12d920u;
    SET_GPR_U64(ctx, 14, ctx->hi);
    // 0x12d924: 0x5012  mflo        $t2
    ctx->pc = 0x12d924u;
    SET_GPR_U64(ctx, 10, ctx->lo);
    // 0x12d928: 0xe7400  sll         $t6, $t6, 16
    ctx->pc = 0x12d928u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 16));
    // 0x12d92c: 0x1e35818  mult        $t3, $t7, $v1
    ctx->pc = 0x12d92cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x12d930: 0x1cd2025  or          $a0, $t6, $t5
    ctx->pc = 0x12d930u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 14) | GPR_U64(ctx, 13));
    // 0x12d934: 0x8b782b  sltu        $t7, $a0, $t3
    ctx->pc = 0x12d934u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x12d938: 0x11e0000b  beqz        $t7, . + 4 + (0xB << 2)
    ctx->pc = 0x12D938u;
    {
        const bool branch_taken_0x12d938 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D938u;
        // 0x12d93c: 0x97c00  sll         $t7, $t1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 9), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d938) {
            ctx->pc = 0x12D968u;
            goto label_12d968;
        }
    }
    ctx->pc = 0x12D940u;
    // 0x12d940: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x12d940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x12d944: 0x85782b  sltu        $t7, $a0, $a1
    ctx->pc = 0x12d944u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x12d948: 0x15e00006  bnez        $t7, . + 4 + (0x6 << 2)
    ctx->pc = 0x12D948u;
    {
        const bool branch_taken_0x12d948 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12D94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D948u;
        // 0x12d94c: 0x254affff  addiu       $t2, $t2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d948) {
            ctx->pc = 0x12D964u;
            goto label_12d964;
        }
    }
    ctx->pc = 0x12D950u;
    // 0x12d950: 0x8b782b  sltu        $t7, $a0, $t3
    ctx->pc = 0x12d950u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x12d954: 0x11e00004  beqz        $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x12D954u;
    {
        const bool branch_taken_0x12d954 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D954u;
        // 0x12d958: 0x97c00  sll         $t7, $t1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 9), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d954) {
            ctx->pc = 0x12D968u;
            goto label_12d968;
        }
    }
    ctx->pc = 0x12D95Cu;
    // 0x12d95c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x12d95cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x12d960: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x12d960u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
label_12d964:
    // 0x12d964: 0x97c00  sll         $t7, $t1, 16
    ctx->pc = 0x12d964u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 9), 16));
label_12d968:
    // 0x12d968: 0x8bc023  subu        $t8, $a0, $t3
    ctx->pc = 0x12d968u;
    SET_GPR_S32(ctx, 24, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
    // 0x12d96c: 0x1000ff92  b           . + 4 + (-0x6E << 2)
    ctx->pc = 0x12D96Cu;
    {
        const bool branch_taken_0x12d96c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D96Cu;
        // 0x12d970: 0x1ea3825  or          $a3, $t7, $t2 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 15) | GPR_U64(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d96c) {
            ctx->pc = 0x12D7B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12d7b8;
        }
    }
    ctx->pc = 0x12D974u;
label_12d974:
    // 0x12d974: 0x3252804  sllv        $a1, $a1, $t9
    ctx->pc = 0x12d974u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 25) & 0x1F));
    // 0x12d978: 0x55402  srl         $t2, $a1, 16
    ctx->pc = 0x12d978u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
    // 0x12d97c: 0x2096006  srlv        $t4, $t1, $s0
    ctx->pc = 0x12d97cu;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 9), GPR_U32(ctx, 16) & 0x1F));
    // 0x12d980: 0x18a001b  divu        $zero, $t4, $t2
    ctx->pc = 0x12d980u;
    { uint32_t divisor = GPR_U32(ctx, 10); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 12) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 12) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,12); } }
    // 0x12d984: 0x30a3ffff  andi        $v1, $a1, 0xFFFF
    ctx->pc = 0x12d984u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x12d988: 0x2187006  srlv        $t6, $t8, $s0
    ctx->pc = 0x12d988u;
    SET_GPR_S32(ctx, 14, (int32_t)SRL32(GPR_U32(ctx, 24), GPR_U32(ctx, 16) & 0x1F));
    // 0x12d98c: 0x3297804  sllv        $t7, $t1, $t9
    ctx->pc = 0x12d98cu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 25) & 0x1F));
    // 0x12d990: 0x1ee4825  or          $t1, $t7, $t6
    ctx->pc = 0x12d990u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 15) | GPR_U64(ctx, 14));
    // 0x12d994: 0x140382d  daddu       $a3, $t2, $zero
    ctx->pc = 0x12d994u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d998: 0x97402  srl         $t6, $t1, 16
    ctx->pc = 0x12d998u;
    SET_GPR_S32(ctx, 14, (int32_t)SRL32(GPR_U32(ctx, 9), 16));
    // 0x12d99c: 0x338c004  sllv        $t8, $t8, $t9
    ctx->pc = 0x12d99cu;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 24), GPR_U32(ctx, 25) & 0x1F));
    // 0x12d9a0: 0x51400001  beql        $t2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x12D9A0u;
    {
        const bool branch_taken_0x12d9a0 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x12d9a0) {
            ctx->pc = 0x12D9A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12D9A0u;
            // 0x12d9a4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x12D9A8u;
            goto label_12d9a8;
        }
    }
    ctx->pc = 0x12D9A8u;
label_12d9a8:
    // 0x12d9a8: 0x6810  mfhi        $t5
    ctx->pc = 0x12d9a8u;
    SET_GPR_U64(ctx, 13, ctx->hi);
    // 0x12d9ac: 0x6012  mflo        $t4
    ctx->pc = 0x12d9acu;
    SET_GPR_U64(ctx, 12, ctx->lo);
    // 0x12d9b0: 0x2012  mflo        $a0
    ctx->pc = 0x12d9b0u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x12d9b4: 0xd6c00  sll         $t5, $t5, 16
    ctx->pc = 0x12d9b4u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 13), 16));
    // 0x12d9b8: 0x1835818  mult        $t3, $t4, $v1
    ctx->pc = 0x12d9b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x12d9bc: 0x1ae7025  or          $t6, $t5, $t6
    ctx->pc = 0x12d9bcu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 13) | GPR_U64(ctx, 14));
    // 0x12d9c0: 0x1cb782b  sltu        $t7, $t6, $t3
    ctx->pc = 0x12d9c0u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x12d9c4: 0x11e0000a  beqz        $t7, . + 4 + (0xA << 2)
    ctx->pc = 0x12D9C4u;
    {
        const bool branch_taken_0x12d9c4 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D9C4u;
        // 0x12d9c8: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d9c4) {
            ctx->pc = 0x12D9F0u;
            goto label_12d9f0;
        }
    }
    ctx->pc = 0x12D9CCu;
    // 0x12d9cc: 0x1c57021  addu        $t6, $t6, $a1
    ctx->pc = 0x12d9ccu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 5)));
    // 0x12d9d0: 0x1c5782b  sltu        $t7, $t6, $a1
    ctx->pc = 0x12d9d0u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x12d9d4: 0x15e00006  bnez        $t7, . + 4 + (0x6 << 2)
    ctx->pc = 0x12D9D4u;
    {
        const bool branch_taken_0x12d9d4 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12D9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D9D4u;
        // 0x12d9d8: 0x2584ffff  addiu       $a0, $t4, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d9d4) {
            ctx->pc = 0x12D9F0u;
            goto label_12d9f0;
        }
    }
    ctx->pc = 0x12D9DCu;
    // 0x12d9dc: 0x1cb782b  sltu        $t7, $t6, $t3
    ctx->pc = 0x12d9dcu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x12d9e0: 0x51e00004  beql        $t7, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x12D9E0u;
    {
        const bool branch_taken_0x12d9e0 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x12d9e0) {
            ctx->pc = 0x12D9E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12D9E0u;
            // 0x12d9e4: 0x1cb7023  subu        $t6, $t6, $t3 (Delay Slot)
            SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 11)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12D9F4u;
            goto label_12d9f4;
        }
    }
    ctx->pc = 0x12D9E8u;
    // 0x12d9e8: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x12d9e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x12d9ec: 0x1c57021  addu        $t6, $t6, $a1
    ctx->pc = 0x12d9ecu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 5)));
label_12d9f0:
    // 0x12d9f0: 0x1cb7023  subu        $t6, $t6, $t3
    ctx->pc = 0x12d9f0u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 11)));
label_12d9f4:
    // 0x12d9f4: 0x312dffff  andi        $t5, $t1, 0xFFFF
    ctx->pc = 0x12d9f4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
    // 0x12d9f8: 0x1c7001b  divu        $zero, $t6, $a3
    ctx->pc = 0x12d9f8u;
    { uint32_t divisor = GPR_U32(ctx, 7); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,14); } }
    // 0x12d9fc: 0x50e00001  beql        $a3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x12D9FCu;
    {
        const bool branch_taken_0x12d9fc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x12d9fc) {
            ctx->pc = 0x12DA00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12D9FCu;
            // 0x12da00: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x12DA04u;
            goto label_12da04;
        }
    }
    ctx->pc = 0x12DA04u;
label_12da04:
    // 0x12da04: 0x7812  mflo        $t7
    ctx->pc = 0x12da04u;
    SET_GPR_U64(ctx, 15, ctx->lo);
    // 0x12da08: 0x7010  mfhi        $t6
    ctx->pc = 0x12da08u;
    SET_GPR_U64(ctx, 14, ctx->hi);
    // 0x12da0c: 0x3812  mflo        $a3
    ctx->pc = 0x12da0cu;
    SET_GPR_U64(ctx, 7, ctx->lo);
    // 0x12da10: 0xe7400  sll         $t6, $t6, 16
    ctx->pc = 0x12da10u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 16));
    // 0x12da14: 0x1e65818  mult        $t3, $t7, $a2
    ctx->pc = 0x12da14u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x12da18: 0x1cd6025  or          $t4, $t6, $t5
    ctx->pc = 0x12da18u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 14) | GPR_U64(ctx, 13));
    // 0x12da1c: 0x18b782b  sltu        $t7, $t4, $t3
    ctx->pc = 0x12da1cu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x12da20: 0x11e0000b  beqz        $t7, . + 4 + (0xB << 2)
    ctx->pc = 0x12DA20u;
    {
        const bool branch_taken_0x12da20 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DA20u;
        // 0x12da24: 0x47c00  sll         $t7, $a0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12da20) {
            ctx->pc = 0x12DA50u;
            goto label_12da50;
        }
    }
    ctx->pc = 0x12DA28u;
    // 0x12da28: 0x1856021  addu        $t4, $t4, $a1
    ctx->pc = 0x12da28u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 5)));
    // 0x12da2c: 0x185782b  sltu        $t7, $t4, $a1
    ctx->pc = 0x12da2cu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x12da30: 0x15e00006  bnez        $t7, . + 4 + (0x6 << 2)
    ctx->pc = 0x12DA30u;
    {
        const bool branch_taken_0x12da30 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12DA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DA30u;
        // 0x12da34: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12da30) {
            ctx->pc = 0x12DA4Cu;
            goto label_12da4c;
        }
    }
    ctx->pc = 0x12DA38u;
    // 0x12da38: 0x18b782b  sltu        $t7, $t4, $t3
    ctx->pc = 0x12da38u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x12da3c: 0x11e00004  beqz        $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x12DA3Cu;
    {
        const bool branch_taken_0x12da3c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DA3Cu;
        // 0x12da40: 0x47c00  sll         $t7, $a0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12da3c) {
            ctx->pc = 0x12DA50u;
            goto label_12da50;
        }
    }
    ctx->pc = 0x12DA44u;
    // 0x12da44: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x12da44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x12da48: 0x1856021  addu        $t4, $t4, $a1
    ctx->pc = 0x12da48u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 5)));
label_12da4c:
    // 0x12da4c: 0x47c00  sll         $t7, $a0, 16
    ctx->pc = 0x12da4cu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
label_12da50:
    // 0x12da50: 0x18b4823  subu        $t1, $t4, $t3
    ctx->pc = 0x12da50u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 11)));
    // 0x12da54: 0x1000ff96  b           . + 4 + (-0x6A << 2)
    ctx->pc = 0x12DA54u;
    {
        const bool branch_taken_0x12da54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DA54u;
        // 0x12da58: 0x1e79025  or          $s2, $t7, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 15) | GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12da54) {
            ctx->pc = 0x12D8B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12d8b0;
        }
    }
    ctx->pc = 0x12DA5Cu;
label_12da5c:
    // 0x12da5c: 0x240e0010  addiu       $t6, $zero, 0x10
    ctx->pc = 0x12da5cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x12da60: 0x35efffff  ori         $t7, $t7, 0xFFFF
    ctx->pc = 0x12da60u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)65535);
    // 0x12da64: 0x240d0018  addiu       $t5, $zero, 0x18
    ctx->pc = 0x12da64u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x12da68: 0x1e5782b  sltu        $t7, $t7, $a1
    ctx->pc = 0x12da68u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x12da6c: 0x1c0602d  daddu       $t4, $t6, $zero
    ctx->pc = 0x12da6cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12da70: 0x1000ff81  b           . + 4 + (-0x7F << 2)
    ctx->pc = 0x12DA70u;
    {
        const bool branch_taken_0x12da70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DA70u;
        // 0x12da74: 0x1af600b  movn        $t4, $t5, $t7 (Delay Slot)
        if (GPR_U64(ctx, 15) != 0) SET_GPR_VEC(ctx, 12, GPR_VEC(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12da70) {
            ctx->pc = 0x12D878u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12d878;
        }
    }
    ctx->pc = 0x12DA78u;
label_12da78:
    // 0x12da78: 0x12a782b  sltu        $t7, $t1, $t2
    ctx->pc = 0x12da78u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x12da7c: 0x15e0001f  bnez        $t7, . + 4 + (0x1F << 2)
    ctx->pc = 0x12DA7Cu;
    {
        const bool branch_taken_0x12da7c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12DA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DA7Cu;
        // 0x12da80: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12da7c) {
            ctx->pc = 0x12DAFCu;
            goto label_12dafc;
        }
    }
    ctx->pc = 0x12DA84u;
    // 0x12da84: 0x340fffff  ori         $t7, $zero, 0xFFFF
    ctx->pc = 0x12da84u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x12da88: 0x1ea782b  sltu        $t7, $t7, $t2
    ctx->pc = 0x12da88u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x12da8c: 0x15e00096  bnez        $t7, . + 4 + (0x96 << 2)
    ctx->pc = 0x12DA8Cu;
    {
        const bool branch_taken_0x12da8c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12DA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DA8Cu;
        // 0x12da90: 0x3c0f00ff  lui         $t7, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12da8c) {
            ctx->pc = 0x12DCE8u;
            goto label_12dce8;
        }
    }
    ctx->pc = 0x12DA94u;
    // 0x12da94: 0x240f0008  addiu       $t7, $zero, 0x8
    ctx->pc = 0x12da94u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x12da98: 0x2d4e0100  sltiu       $t6, $t2, 0x100
    ctx->pc = 0x12da98u;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x12da9c: 0x1e0602d  daddu       $t4, $t7, $zero
    ctx->pc = 0x12da9cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12daa0: 0xe600b  movn        $t4, $zero, $t6
    ctx->pc = 0x12daa0u;
    if (GPR_U64(ctx, 14) != 0) SET_GPR_VEC(ctx, 12, GPR_VEC(ctx, 0));
label_12daa4:
    // 0x12daa4: 0x3c0e0066  lui         $t6, 0x66
    ctx->pc = 0x12daa4u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)102 << 16));
    // 0x12daa8: 0x18a7806  srlv        $t7, $t2, $t4
    ctx->pc = 0x12daa8u;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 10), GPR_U32(ctx, 12) & 0x1F));
    // 0x12daac: 0x25ce4478  addiu       $t6, $t6, 0x4478
    ctx->pc = 0x12daacu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 17528));
    // 0x12dab0: 0x240b0020  addiu       $t3, $zero, 0x20
    ctx->pc = 0x12dab0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x12dab4: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x12dab4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x12dab8: 0x91ed0000  lbu         $t5, 0x0($t7)
    ctx->pc = 0x12dab8u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x12dabc: 0x1ac6821  addu        $t5, $t5, $t4
    ctx->pc = 0x12dabcu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 12)));
    // 0x12dac0: 0x16dc823  subu        $t9, $t3, $t5
    ctx->pc = 0x12dac0u;
    SET_GPR_S32(ctx, 25, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 13)));
    // 0x12dac4: 0x1720001a  bnez        $t9, . + 4 + (0x1A << 2)
    ctx->pc = 0x12DAC4u;
    {
        const bool branch_taken_0x12dac4 = (GPR_U64(ctx, 25) != GPR_U64(ctx, 0));
        ctx->pc = 0x12DAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DAC4u;
        // 0x12dac8: 0x1798023  subu        $s0, $t3, $t9 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 25)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12dac4) {
            ctx->pc = 0x12DB30u;
            goto label_12db30;
        }
    }
    ctx->pc = 0x12DACCu;
    // 0x12dacc: 0x149782b  sltu        $t7, $t2, $t1
    ctx->pc = 0x12daccu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x12dad0: 0x15e00005  bnez        $t7, . + 4 + (0x5 << 2)
    ctx->pc = 0x12DAD0u;
    {
        const bool branch_taken_0x12dad0 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12DAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DAD0u;
        // 0x12dad4: 0x3056823  subu        $t5, $t8, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 24), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12dad0) {
            ctx->pc = 0x12DAE8u;
            goto label_12dae8;
        }
    }
    ctx->pc = 0x12DAD8u;
    // 0x12dad8: 0x305782b  sltu        $t7, $t8, $a1
    ctx->pc = 0x12dad8u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 24) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x12dadc: 0x15e00007  bnez        $t7, . + 4 + (0x7 << 2)
    ctx->pc = 0x12DADCu;
    {
        const bool branch_taken_0x12dadc = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12DAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DADCu;
        // 0x12dae0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12dadc) {
            ctx->pc = 0x12DAFCu;
            goto label_12dafc;
        }
    }
    ctx->pc = 0x12DAE4u;
    // 0x12dae4: 0x3056823  subu        $t5, $t8, $a1
    ctx->pc = 0x12dae4u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 24), GPR_U32(ctx, 5)));
label_12dae8:
    // 0x12dae8: 0x12a7023  subu        $t6, $t1, $t2
    ctx->pc = 0x12dae8u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x12daec: 0x30d782b  sltu        $t7, $t8, $t5
    ctx->pc = 0x12daecu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 24) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x12daf0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x12daf0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12daf4: 0x1cf4823  subu        $t1, $t6, $t7
    ctx->pc = 0x12daf4u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 15)));
    // 0x12daf8: 0x1a0c02d  daddu       $t8, $t5, $zero
    ctx->pc = 0x12daf8u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
label_12dafc:
    // 0x12dafc: 0x1220ff39  beqz        $s1, . + 4 + (-0xC7 << 2)
    ctx->pc = 0x12DAFCu;
    {
        const bool branch_taken_0x12dafc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DAFCu;
        // 0x12db00: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12dafc) {
            ctx->pc = 0x12D7E4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12d7e4;
        }
    }
    ctx->pc = 0x12DB04u;
    // 0x12db04: 0x240effff  addiu       $t6, $zero, -0x1
    ctx->pc = 0x12db04u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12db08: 0x18783c  dsll32      $t7, $t8, 0
    ctx->pc = 0x12db08u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 24) << (32 + 0));
    // 0x12db0c: 0xe703c  dsll32      $t6, $t6, 0
    ctx->pc = 0x12db0cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << (32 + 0));
    // 0x12db10: 0xf783e  dsrl32      $t7, $t7, 0
    ctx->pc = 0x12db10u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) >> (32 + 0));
    // 0x12db14: 0x10e4024  and         $t0, $t0, $t6
    ctx->pc = 0x12db14u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 14));
    // 0x12db18: 0x10f4025  or          $t0, $t0, $t7
    ctx->pc = 0x12db18u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 15));
    // 0x12db1c: 0x9703c  dsll32      $t6, $t1, 0
    ctx->pc = 0x12db1cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 9) << (32 + 0));
label_12db20:
    // 0x12db20: 0x8403c  dsll32      $t0, $t0, 0
    ctx->pc = 0x12db20u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 0));
    // 0x12db24: 0x8403e  dsrl32      $t0, $t0, 0
    ctx->pc = 0x12db24u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) >> (32 + 0));
    // 0x12db28: 0x1000ff2d  b           . + 4 + (-0xD3 << 2)
    ctx->pc = 0x12DB28u;
    {
        const bool branch_taken_0x12db28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DB28u;
        // 0x12db2c: 0x10e4025  or          $t0, $t0, $t6 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12db28) {
            ctx->pc = 0x12D7E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12d7e0;
        }
    }
    ctx->pc = 0x12DB30u;
label_12db30:
    // 0x12db30: 0x32a7004  sllv        $t6, $t2, $t9
    ctx->pc = 0x12db30u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 25) & 0x1F));
    // 0x12db34: 0x2057806  srlv        $t7, $a1, $s0
    ctx->pc = 0x12db34u;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 5), GPR_U32(ctx, 16) & 0x1F));
    // 0x12db38: 0x2096006  srlv        $t4, $t1, $s0
    ctx->pc = 0x12db38u;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 9), GPR_U32(ctx, 16) & 0x1F));
    // 0x12db3c: 0x1cf5025  or          $t2, $t6, $t7
    ctx->pc = 0x12db3cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 14) | GPR_U64(ctx, 15));
    // 0x12db40: 0x3296804  sllv        $t5, $t1, $t9
    ctx->pc = 0x12db40u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 25) & 0x1F));
    // 0x12db44: 0xa5c02  srl         $t3, $t2, 16
    ctx->pc = 0x12db44u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 10), 16));
    // 0x12db48: 0x3146ffff  andi        $a2, $t2, 0xFFFF
    ctx->pc = 0x12db48u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
    // 0x12db4c: 0x18b001b  divu        $zero, $t4, $t3
    ctx->pc = 0x12db4cu;
    { uint32_t divisor = GPR_U32(ctx, 11); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 12) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 12) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,12); } }
    // 0x12db50: 0x2187806  srlv        $t7, $t8, $s0
    ctx->pc = 0x12db50u;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 24), GPR_U32(ctx, 16) & 0x1F));
    // 0x12db54: 0x1af4825  or          $t1, $t5, $t7
    ctx->pc = 0x12db54u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 13) | GPR_U64(ctx, 15));
    // 0x12db58: 0x3252804  sllv        $a1, $a1, $t9
    ctx->pc = 0x12db58u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 25) & 0x1F));
    // 0x12db5c: 0x96c02  srl         $t5, $t1, 16
    ctx->pc = 0x12db5cu;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 9), 16));
    // 0x12db60: 0x338c004  sllv        $t8, $t8, $t9
    ctx->pc = 0x12db60u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 24), GPR_U32(ctx, 25) & 0x1F));
    // 0x12db64: 0x51600001  beql        $t3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x12DB64u;
    {
        const bool branch_taken_0x12db64 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        if (branch_taken_0x12db64) {
            ctx->pc = 0x12DB68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12DB64u;
            // 0x12db68: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x12DB6Cu;
            goto label_12db6c;
        }
    }
    ctx->pc = 0x12DB6Cu;
label_12db6c:
    // 0x12db6c: 0x7010  mfhi        $t6
    ctx->pc = 0x12db6cu;
    SET_GPR_U64(ctx, 14, ctx->hi);
    // 0x12db70: 0x6012  mflo        $t4
    ctx->pc = 0x12db70u;
    SET_GPR_U64(ctx, 12, ctx->lo);
    // 0x12db74: 0x3812  mflo        $a3
    ctx->pc = 0x12db74u;
    SET_GPR_U64(ctx, 7, ctx->lo);
    // 0x12db78: 0xe7400  sll         $t6, $t6, 16
    ctx->pc = 0x12db78u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 16));
    // 0x12db7c: 0x1861818  mult        $v1, $t4, $a2
    ctx->pc = 0x12db7cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x12db80: 0x1cd7025  or          $t6, $t6, $t5
    ctx->pc = 0x12db80u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 13));
    // 0x12db84: 0x1c3782b  sltu        $t7, $t6, $v1
    ctx->pc = 0x12db84u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x12db88: 0x51e0000b  beql        $t7, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x12DB88u;
    {
        const bool branch_taken_0x12db88 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x12db88) {
            ctx->pc = 0x12DB8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12DB88u;
            // 0x12db8c: 0x1c37023  subu        $t6, $t6, $v1 (Delay Slot)
            SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 3)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12DBB8u;
            goto label_12dbb8;
        }
    }
    ctx->pc = 0x12DB90u;
    // 0x12db90: 0x1ca7021  addu        $t6, $t6, $t2
    ctx->pc = 0x12db90u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 10)));
    // 0x12db94: 0x1ca782b  sltu        $t7, $t6, $t2
    ctx->pc = 0x12db94u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x12db98: 0x15e00006  bnez        $t7, . + 4 + (0x6 << 2)
    ctx->pc = 0x12DB98u;
    {
        const bool branch_taken_0x12db98 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12DB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DB98u;
        // 0x12db9c: 0x2587ffff  addiu       $a3, $t4, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12db98) {
            ctx->pc = 0x12DBB4u;
            goto label_12dbb4;
        }
    }
    ctx->pc = 0x12DBA0u;
    // 0x12dba0: 0x1c3782b  sltu        $t7, $t6, $v1
    ctx->pc = 0x12dba0u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x12dba4: 0x51e00004  beql        $t7, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x12DBA4u;
    {
        const bool branch_taken_0x12dba4 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x12dba4) {
            ctx->pc = 0x12DBA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12DBA4u;
            // 0x12dba8: 0x1c37023  subu        $t6, $t6, $v1 (Delay Slot)
            SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 3)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12DBB8u;
            goto label_12dbb8;
        }
    }
    ctx->pc = 0x12DBACu;
    // 0x12dbac: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x12dbacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x12dbb0: 0x1ca7021  addu        $t6, $t6, $t2
    ctx->pc = 0x12dbb0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 10)));
label_12dbb4:
    // 0x12dbb4: 0x1c37023  subu        $t6, $t6, $v1
    ctx->pc = 0x12dbb4u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 3)));
label_12dbb8:
    // 0x12dbb8: 0x312dffff  andi        $t5, $t1, 0xFFFF
    ctx->pc = 0x12dbb8u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
    // 0x12dbbc: 0x1cb001b  divu        $zero, $t6, $t3
    ctx->pc = 0x12dbbcu;
    { uint32_t divisor = GPR_U32(ctx, 11); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,14); } }
    // 0x12dbc0: 0x51600001  beql        $t3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x12DBC0u;
    {
        const bool branch_taken_0x12dbc0 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        if (branch_taken_0x12dbc0) {
            ctx->pc = 0x12DBC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12DBC0u;
            // 0x12dbc4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x12DBC8u;
            goto label_12dbc8;
        }
    }
    ctx->pc = 0x12DBC8u;
label_12dbc8:
    // 0x12dbc8: 0x7812  mflo        $t7
    ctx->pc = 0x12dbc8u;
    SET_GPR_U64(ctx, 15, ctx->lo);
    // 0x12dbcc: 0x7010  mfhi        $t6
    ctx->pc = 0x12dbccu;
    SET_GPR_U64(ctx, 14, ctx->hi);
    // 0x12dbd0: 0x6012  mflo        $t4
    ctx->pc = 0x12dbd0u;
    SET_GPR_U64(ctx, 12, ctx->lo);
    // 0x12dbd4: 0xe7400  sll         $t6, $t6, 16
    ctx->pc = 0x12dbd4u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 16));
    // 0x12dbd8: 0x1e61818  mult        $v1, $t7, $a2
    ctx->pc = 0x12dbd8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x12dbdc: 0x1cd3025  or          $a2, $t6, $t5
    ctx->pc = 0x12dbdcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 14) | GPR_U64(ctx, 13));
    // 0x12dbe0: 0xc3782b  sltu        $t7, $a2, $v1
    ctx->pc = 0x12dbe0u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x12dbe4: 0x11e0000b  beqz        $t7, . + 4 + (0xB << 2)
    ctx->pc = 0x12DBE4u;
    {
        const bool branch_taken_0x12dbe4 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DBE4u;
        // 0x12dbe8: 0x77c00  sll         $t7, $a3, 16 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12dbe4) {
            ctx->pc = 0x12DC14u;
            goto label_12dc14;
        }
    }
    ctx->pc = 0x12DBECu;
    // 0x12dbec: 0xca3021  addu        $a2, $a2, $t2
    ctx->pc = 0x12dbecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
    // 0x12dbf0: 0xca782b  sltu        $t7, $a2, $t2
    ctx->pc = 0x12dbf0u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x12dbf4: 0x15e00006  bnez        $t7, . + 4 + (0x6 << 2)
    ctx->pc = 0x12DBF4u;
    {
        const bool branch_taken_0x12dbf4 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12DBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DBF4u;
        // 0x12dbf8: 0x258cffff  addiu       $t4, $t4, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12dbf4) {
            ctx->pc = 0x12DC10u;
            goto label_12dc10;
        }
    }
    ctx->pc = 0x12DBFCu;
    // 0x12dbfc: 0xc3782b  sltu        $t7, $a2, $v1
    ctx->pc = 0x12dbfcu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x12dc00: 0x11e00004  beqz        $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x12DC00u;
    {
        const bool branch_taken_0x12dc00 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DC00u;
        // 0x12dc04: 0x77c00  sll         $t7, $a3, 16 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12dc00) {
            ctx->pc = 0x12DC14u;
            goto label_12dc14;
        }
    }
    ctx->pc = 0x12DC08u;
    // 0x12dc08: 0x258cffff  addiu       $t4, $t4, -0x1
    ctx->pc = 0x12dc08u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
    // 0x12dc0c: 0xca3021  addu        $a2, $a2, $t2
    ctx->pc = 0x12dc0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
label_12dc10:
    // 0x12dc10: 0x77c00  sll         $t7, $a3, 16
    ctx->pc = 0x12dc10u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
label_12dc14:
    // 0x12dc14: 0x30aeffff  andi        $t6, $a1, 0xFFFF
    ctx->pc = 0x12dc14u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x12dc18: 0x1ec3825  or          $a3, $t7, $t4
    ctx->pc = 0x12dc18u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 15) | GPR_U64(ctx, 12));
    // 0x12dc1c: 0xc33023  subu        $a2, $a2, $v1
    ctx->pc = 0x12dc1cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x12dc20: 0x30efffff  andi        $t7, $a3, 0xFFFF
    ctx->pc = 0x12dc20u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x12dc24: 0x56402  srl         $t4, $a1, 16
    ctx->pc = 0x12dc24u;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
    // 0x12dc28: 0x1ee9018  mult        $s2, $t7, $t6
    ctx->pc = 0x12dc28u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
    // 0x12dc2c: 0x71ec5818  mult1       $t3, $t7, $t4
    ctx->pc = 0x12dc2cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 12); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x12dc30: 0x76c02  srl         $t5, $a3, 16
    ctx->pc = 0x12dc30u;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 7), 16));
    // 0x12dc34: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x12dc34u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dc38: 0x1ae7018  mult        $t6, $t5, $t6
    ctx->pc = 0x12dc38u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
    // 0x12dc3c: 0x127c02  srl         $t7, $s2, 16
    ctx->pc = 0x12dc3cu;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 18), 16));
    // 0x12dc40: 0x16f5821  addu        $t3, $t3, $t7
    ctx->pc = 0x12dc40u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 15)));
    // 0x12dc44: 0x16e5821  addu        $t3, $t3, $t6
    ctx->pc = 0x12dc44u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 14)));
    // 0x12dc48: 0x16e702b  sltu        $t6, $t3, $t6
    ctx->pc = 0x12dc48u;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 14)) ? 1 : 0);
    // 0x12dc4c: 0x11c00003  beqz        $t6, . + 4 + (0x3 << 2)
    ctx->pc = 0x12DC4Cu;
    {
        const bool branch_taken_0x12dc4c = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DC4Cu;
        // 0x12dc50: 0x71ac6018  mult1       $t4, $t5, $t4 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 12); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12dc4c) {
            ctx->pc = 0x12DC5Cu;
            goto label_12dc5c;
        }
    }
    ctx->pc = 0x12DC54u;
    // 0x12dc54: 0x3c0f0001  lui         $t7, 0x1
    ctx->pc = 0x12dc54u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)1 << 16));
    // 0x12dc58: 0x18f6021  addu        $t4, $t4, $t7
    ctx->pc = 0x12dc58u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 15)));
label_12dc5c:
    // 0x12dc5c: 0xb7402  srl         $t6, $t3, 16
    ctx->pc = 0x12dc5cu;
    SET_GPR_S32(ctx, 14, (int32_t)SRL32(GPR_U32(ctx, 11), 16));
    // 0x12dc60: 0xb6c00  sll         $t5, $t3, 16
    ctx->pc = 0x12dc60u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 11), 16));
    // 0x12dc64: 0x18e2021  addu        $a0, $t4, $t6
    ctx->pc = 0x12dc64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 14)));
    // 0x12dc68: 0x324fffff  andi        $t7, $s2, 0xFFFF
    ctx->pc = 0x12dc68u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
    // 0x12dc6c: 0x124702b  sltu        $t6, $t1, $a0
    ctx->pc = 0x12dc6cu;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x12dc70: 0x15c00005  bnez        $t6, . + 4 + (0x5 << 2)
    ctx->pc = 0x12DC70u;
    {
        const bool branch_taken_0x12dc70 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x12DC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DC70u;
        // 0x12dc74: 0x1af5821  addu        $t3, $t5, $t7 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 15)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12dc70) {
            ctx->pc = 0x12DC88u;
            goto label_12dc88;
        }
    }
    ctx->pc = 0x12DC78u;
    // 0x12dc78: 0x14890009  bne         $a0, $t1, . + 4 + (0x9 << 2)
    ctx->pc = 0x12DC78u;
    {
        const bool branch_taken_0x12dc78 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 9));
        ctx->pc = 0x12DC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DC78u;
        // 0x12dc7c: 0x30b782b  sltu        $t7, $t8, $t3 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 24) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12dc78) {
            ctx->pc = 0x12DCA0u;
            goto label_12dca0;
        }
    }
    ctx->pc = 0x12DC80u;
    // 0x12dc80: 0x11e00007  beqz        $t7, . + 4 + (0x7 << 2)
    ctx->pc = 0x12DC80u;
    {
        const bool branch_taken_0x12dc80 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x12dc80) {
            ctx->pc = 0x12DCA0u;
            goto label_12dca0;
        }
    }
    ctx->pc = 0x12DC88u;
label_12dc88:
    // 0x12dc88: 0x1656823  subu        $t5, $t3, $a1
    ctx->pc = 0x12dc88u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 5)));
    // 0x12dc8c: 0x8a7023  subu        $t6, $a0, $t2
    ctx->pc = 0x12dc8cu;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x12dc90: 0x16d782b  sltu        $t7, $t3, $t5
    ctx->pc = 0x12dc90u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x12dc94: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x12dc94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x12dc98: 0x1cf2023  subu        $a0, $t6, $t7
    ctx->pc = 0x12dc98u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 15)));
    // 0x12dc9c: 0x1a0582d  daddu       $t3, $t5, $zero
    ctx->pc = 0x12dc9cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
label_12dca0:
    // 0x12dca0: 0x1220fed0  beqz        $s1, . + 4 + (-0x130 << 2)
    ctx->pc = 0x12DCA0u;
    {
        const bool branch_taken_0x12dca0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DCA0u;
        // 0x12dca4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12dca0) {
            ctx->pc = 0x12D7E4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12d7e4;
        }
    }
    ctx->pc = 0x12DCA8u;
    // 0x12dca8: 0x30b6823  subu        $t5, $t8, $t3
    ctx->pc = 0x12dca8u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 24), GPR_U32(ctx, 11)));
    // 0x12dcac: 0xc46023  subu        $t4, $a2, $a0
    ctx->pc = 0x12dcacu;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x12dcb0: 0x30d702b  sltu        $t6, $t8, $t5
    ctx->pc = 0x12dcb0u;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 24) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x12dcb4: 0x18e4823  subu        $t1, $t4, $t6
    ctx->pc = 0x12dcb4u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 14)));
    // 0x12dcb8: 0x32d6806  srlv        $t5, $t5, $t9
    ctx->pc = 0x12dcb8u;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 13), GPR_U32(ctx, 25) & 0x1F));
    // 0x12dcbc: 0x2097804  sllv        $t7, $t1, $s0
    ctx->pc = 0x12dcbcu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 16) & 0x1F));
    // 0x12dcc0: 0x240effff  addiu       $t6, $zero, -0x1
    ctx->pc = 0x12dcc0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12dcc4: 0xe703c  dsll32      $t6, $t6, 0
    ctx->pc = 0x12dcc4u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << (32 + 0));
    // 0x12dcc8: 0x1ed7825  or          $t7, $t7, $t5
    ctx->pc = 0x12dcc8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 13));
    // 0x12dccc: 0x10e4024  and         $t0, $t0, $t6
    ctx->pc = 0x12dcccu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 14));
    // 0x12dcd0: 0xf783c  dsll32      $t7, $t7, 0
    ctx->pc = 0x12dcd0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 0));
    // 0x12dcd4: 0x3297006  srlv        $t6, $t1, $t9
    ctx->pc = 0x12dcd4u;
    SET_GPR_S32(ctx, 14, (int32_t)SRL32(GPR_U32(ctx, 9), GPR_U32(ctx, 25) & 0x1F));
    // 0x12dcd8: 0xf783e  dsrl32      $t7, $t7, 0
    ctx->pc = 0x12dcd8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) >> (32 + 0));
    // 0x12dcdc: 0xe703c  dsll32      $t6, $t6, 0
    ctx->pc = 0x12dcdcu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << (32 + 0));
    // 0x12dce0: 0x1000ff8f  b           . + 4 + (-0x71 << 2)
    ctx->pc = 0x12DCE0u;
    {
        const bool branch_taken_0x12dce0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DCE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DCE0u;
        // 0x12dce4: 0x10f4025  or          $t0, $t0, $t7 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12dce0) {
            ctx->pc = 0x12DB20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12db20;
        }
    }
    ctx->pc = 0x12DCE8u;
label_12dce8:
    // 0x12dce8: 0x240e0010  addiu       $t6, $zero, 0x10
    ctx->pc = 0x12dce8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x12dcec: 0x35efffff  ori         $t7, $t7, 0xFFFF
    ctx->pc = 0x12dcecu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)65535);
    // 0x12dcf0: 0x240d0018  addiu       $t5, $zero, 0x18
    ctx->pc = 0x12dcf0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x12dcf4: 0x1ea782b  sltu        $t7, $t7, $t2
    ctx->pc = 0x12dcf4u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x12dcf8: 0x1c0602d  daddu       $t4, $t6, $zero
    ctx->pc = 0x12dcf8u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dcfc: 0x1000ff69  b           . + 4 + (-0x97 << 2)
    ctx->pc = 0x12DCFCu;
    {
        const bool branch_taken_0x12dcfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DCFCu;
        // 0x12dd00: 0x1af600b  movn        $t4, $t5, $t7 (Delay Slot)
        if (GPR_U64(ctx, 15) != 0) SET_GPR_VEC(ctx, 12, GPR_VEC(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12dcfc) {
            ctx->pc = 0x12DAA4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12daa4;
        }
    }
    ctx->pc = 0x12DD04u;
}
