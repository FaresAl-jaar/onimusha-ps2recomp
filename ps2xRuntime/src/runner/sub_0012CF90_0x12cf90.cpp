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

// Function: sub_0012CF90
// Address: 0x12cf90 - 0x12d63c
void sub_0012CF90_0x12cf90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012CF90_0x12cf90");
#endif

    switch (ctx->pc) {
        case 0x12cfe8u: goto label_12cfe8;
        case 0x12d0f0u: goto label_12d0f0;
        case 0x12d118u: goto label_12d118;
        case 0x12d11cu: goto label_12d11c;
        case 0x12d1b0u: goto label_12d1b0;
        case 0x12d1e8u: goto label_12d1e8;
        case 0x12d3dcu: goto label_12d3dc;
        case 0x12d458u: goto label_12d458;
        default: break;
    }

    ctx->pc = 0x12cf90u;

    // 0x12cf90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12cf90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12cf94: 0x5503f  dsra32      $t2, $a1, 0
    ctx->pc = 0x12cf94u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x12cf98: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x12cf98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x12cf9c: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x12cf9cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x12cfa0: 0x4c03c  dsll32      $t8, $a0, 0
    ctx->pc = 0x12cfa0u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 4) << (32 + 0));
    // 0x12cfa4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12cfa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12cfa8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x12cfa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x12cfac: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x12cfacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cfb0: 0x4483f  dsra32      $t1, $a0, 0
    ctx->pc = 0x12cfb0u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x12cfb4: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x12cfb4u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x12cfb8: 0x154000fd  bnez        $t2, . + 4 + (0xFD << 2)
    ctx->pc = 0x12CFB8u;
    {
        const bool branch_taken_0x12cfb8 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x12CFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CFB8u;
        // 0x12cfbc: 0x18c03f  dsra32      $t8, $t8, 0 (Delay Slot)
        SET_GPR_S64(ctx, 24, GPR_S64(ctx, 24) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cfb8) {
            ctx->pc = 0x12D3B0u;
            goto label_12d3b0;
        }
    }
    ctx->pc = 0x12CFC0u;
    // 0x12cfc0: 0x125782b  sltu        $t7, $t1, $a1
    ctx->pc = 0x12cfc0u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x12cfc4: 0x11e0006b  beqz        $t7, . + 4 + (0x6B << 2)
    ctx->pc = 0x12CFC4u;
    {
        const bool branch_taken_0x12cfc4 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12CFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CFC4u;
        // 0x12cfc8: 0x340fffff  ori         $t7, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cfc4) {
            ctx->pc = 0x12D174u;
            goto label_12d174;
        }
    }
    ctx->pc = 0x12CFCCu;
    // 0x12cfcc: 0x1e5782b  sltu        $t7, $t7, $a1
    ctx->pc = 0x12cfccu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x12cfd0: 0x15e00061  bnez        $t7, . + 4 + (0x61 << 2)
    ctx->pc = 0x12CFD0u;
    {
        const bool branch_taken_0x12cfd0 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12CFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CFD0u;
        // 0x12cfd4: 0x3c0f00ff  lui         $t7, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cfd0) {
            ctx->pc = 0x12D158u;
            goto label_12d158;
        }
    }
    ctx->pc = 0x12CFD8u;
    // 0x12cfd8: 0x240f0008  addiu       $t7, $zero, 0x8
    ctx->pc = 0x12cfd8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x12cfdc: 0x2cae0100  sltiu       $t6, $a1, 0x100
    ctx->pc = 0x12cfdcu;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x12cfe0: 0x1e0602d  daddu       $t4, $t7, $zero
    ctx->pc = 0x12cfe0u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cfe4: 0xe600b  movn        $t4, $zero, $t6
    ctx->pc = 0x12cfe4u;
    if (GPR_U64(ctx, 14) != 0) SET_GPR_VEC(ctx, 12, GPR_VEC(ctx, 0));
label_12cfe8:
    // 0x12cfe8: 0x3c0e0066  lui         $t6, 0x66
    ctx->pc = 0x12cfe8u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)102 << 16));
    // 0x12cfec: 0x1857806  srlv        $t7, $a1, $t4
    ctx->pc = 0x12cfecu;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 5), GPR_U32(ctx, 12) & 0x1F));
    // 0x12cff0: 0x25ce4478  addiu       $t6, $t6, 0x4478
    ctx->pc = 0x12cff0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 17528));
    // 0x12cff4: 0x240b0020  addiu       $t3, $zero, 0x20
    ctx->pc = 0x12cff4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x12cff8: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x12cff8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x12cffc: 0x91ed0000  lbu         $t5, 0x0($t7)
    ctx->pc = 0x12cffcu;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x12d000: 0x1ac6821  addu        $t5, $t5, $t4
    ctx->pc = 0x12d000u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 12)));
    // 0x12d004: 0x16dc823  subu        $t9, $t3, $t5
    ctx->pc = 0x12d004u;
    SET_GPR_S32(ctx, 25, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 13)));
    // 0x12d008: 0x13200006  beqz        $t9, . + 4 + (0x6 << 2)
    ctx->pc = 0x12D008u;
    {
        const bool branch_taken_0x12d008 = (GPR_U64(ctx, 25) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D008u;
        // 0x12d00c: 0x1797823  subu        $t7, $t3, $t9 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 25)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d008) {
            ctx->pc = 0x12D024u;
            goto label_12d024;
        }
    }
    ctx->pc = 0x12D010u;
    // 0x12d010: 0x3297004  sllv        $t6, $t1, $t9
    ctx->pc = 0x12d010u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 25) & 0x1F));
    // 0x12d014: 0x1f87806  srlv        $t7, $t8, $t7
    ctx->pc = 0x12d014u;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 24), GPR_U32(ctx, 15) & 0x1F));
    // 0x12d018: 0x3252804  sllv        $a1, $a1, $t9
    ctx->pc = 0x12d018u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 25) & 0x1F));
    // 0x12d01c: 0x1cf4825  or          $t1, $t6, $t7
    ctx->pc = 0x12d01cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 14) | GPR_U64(ctx, 15));
    // 0x12d020: 0x338c004  sllv        $t8, $t8, $t9
    ctx->pc = 0x12d020u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 24), GPR_U32(ctx, 25) & 0x1F));
label_12d024:
    // 0x12d024: 0x55c02  srl         $t3, $a1, 16
    ctx->pc = 0x12d024u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
    // 0x12d028: 0x30a7ffff  andi        $a3, $a1, 0xFFFF
    ctx->pc = 0x12d028u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x12d02c: 0x12b001b  divu        $zero, $t1, $t3
    ctx->pc = 0x12d02cu;
    { uint32_t divisor = GPR_U32(ctx, 11); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 9) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 9) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,9); } }
    // 0x12d030: 0x186c02  srl         $t5, $t8, 16
    ctx->pc = 0x12d030u;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 24), 16));
    // 0x12d034: 0x51600001  beql        $t3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x12D034u;
    {
        const bool branch_taken_0x12d034 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        if (branch_taken_0x12d034) {
            ctx->pc = 0x12D038u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12D034u;
            // 0x12d038: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x12D03Cu;
            goto label_12d03c;
        }
    }
    ctx->pc = 0x12D03Cu;
label_12d03c:
    // 0x12d03c: 0x7812  mflo        $t7
    ctx->pc = 0x12d03cu;
    SET_GPR_U64(ctx, 15, ctx->lo);
    // 0x12d040: 0x7010  mfhi        $t6
    ctx->pc = 0x12d040u;
    SET_GPR_U64(ctx, 14, ctx->hi);
    // 0x12d044: 0x6012  mflo        $t4
    ctx->pc = 0x12d044u;
    SET_GPR_U64(ctx, 12, ctx->lo);
    // 0x12d048: 0xe7400  sll         $t6, $t6, 16
    ctx->pc = 0x12d048u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 16));
    // 0x12d04c: 0x1e75018  mult        $t2, $t7, $a3
    ctx->pc = 0x12d04cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x12d050: 0x1cd7025  or          $t6, $t6, $t5
    ctx->pc = 0x12d050u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 13));
    // 0x12d054: 0x1ca782b  sltu        $t7, $t6, $t2
    ctx->pc = 0x12d054u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x12d058: 0x51e0000b  beql        $t7, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x12D058u;
    {
        const bool branch_taken_0x12d058 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x12d058) {
            ctx->pc = 0x12D05Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12D058u;
            // 0x12d05c: 0x1ca7023  subu        $t6, $t6, $t2 (Delay Slot)
            SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 10)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12D088u;
            goto label_12d088;
        }
    }
    ctx->pc = 0x12D060u;
    // 0x12d060: 0x1c57021  addu        $t6, $t6, $a1
    ctx->pc = 0x12d060u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 5)));
    // 0x12d064: 0x1c5782b  sltu        $t7, $t6, $a1
    ctx->pc = 0x12d064u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x12d068: 0x15e00006  bnez        $t7, . + 4 + (0x6 << 2)
    ctx->pc = 0x12D068u;
    {
        const bool branch_taken_0x12d068 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12D06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D068u;
        // 0x12d06c: 0x258cffff  addiu       $t4, $t4, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d068) {
            ctx->pc = 0x12D084u;
            goto label_12d084;
        }
    }
    ctx->pc = 0x12D070u;
    // 0x12d070: 0x1ca782b  sltu        $t7, $t6, $t2
    ctx->pc = 0x12d070u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x12d074: 0x51e00004  beql        $t7, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x12D074u;
    {
        const bool branch_taken_0x12d074 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x12d074) {
            ctx->pc = 0x12D078u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12D074u;
            // 0x12d078: 0x1ca7023  subu        $t6, $t6, $t2 (Delay Slot)
            SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 10)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12D088u;
            goto label_12d088;
        }
    }
    ctx->pc = 0x12D07Cu;
    // 0x12d07c: 0x258cffff  addiu       $t4, $t4, -0x1
    ctx->pc = 0x12d07cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
    // 0x12d080: 0x1c57021  addu        $t6, $t6, $a1
    ctx->pc = 0x12d080u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 5)));
label_12d084:
    // 0x12d084: 0x1ca7023  subu        $t6, $t6, $t2
    ctx->pc = 0x12d084u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 10)));
label_12d088:
    // 0x12d088: 0x330dffff  andi        $t5, $t8, 0xFFFF
    ctx->pc = 0x12d088u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 24) & (uint64_t)(uint16_t)65535);
    // 0x12d08c: 0x1cb001b  divu        $zero, $t6, $t3
    ctx->pc = 0x12d08cu;
    { uint32_t divisor = GPR_U32(ctx, 11); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,14); } }
    // 0x12d090: 0x51600001  beql        $t3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x12D090u;
    {
        const bool branch_taken_0x12d090 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        if (branch_taken_0x12d090) {
            ctx->pc = 0x12D094u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12D090u;
            // 0x12d094: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x12D098u;
            goto label_12d098;
        }
    }
    ctx->pc = 0x12D098u;
label_12d098:
    // 0x12d098: 0x7812  mflo        $t7
    ctx->pc = 0x12d098u;
    SET_GPR_U64(ctx, 15, ctx->lo);
    // 0x12d09c: 0x7010  mfhi        $t6
    ctx->pc = 0x12d09cu;
    SET_GPR_U64(ctx, 14, ctx->hi);
    // 0x12d0a0: 0x5812  mflo        $t3
    ctx->pc = 0x12d0a0u;
    SET_GPR_U64(ctx, 11, ctx->lo);
    // 0x12d0a4: 0xe7400  sll         $t6, $t6, 16
    ctx->pc = 0x12d0a4u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 16));
    // 0x12d0a8: 0x1e75018  mult        $t2, $t7, $a3
    ctx->pc = 0x12d0a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x12d0ac: 0x1cd2025  or          $a0, $t6, $t5
    ctx->pc = 0x12d0acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 14) | GPR_U64(ctx, 13));
    // 0x12d0b0: 0x8a782b  sltu        $t7, $a0, $t2
    ctx->pc = 0x12d0b0u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x12d0b4: 0x11e0000b  beqz        $t7, . + 4 + (0xB << 2)
    ctx->pc = 0x12D0B4u;
    {
        const bool branch_taken_0x12d0b4 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D0B4u;
        // 0x12d0b8: 0xc7c00  sll         $t7, $t4, 16 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 12), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d0b4) {
            ctx->pc = 0x12D0E4u;
            goto label_12d0e4;
        }
    }
    ctx->pc = 0x12D0BCu;
    // 0x12d0bc: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x12d0bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x12d0c0: 0x85782b  sltu        $t7, $a0, $a1
    ctx->pc = 0x12d0c0u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x12d0c4: 0x15e00006  bnez        $t7, . + 4 + (0x6 << 2)
    ctx->pc = 0x12D0C4u;
    {
        const bool branch_taken_0x12d0c4 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12D0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D0C4u;
        // 0x12d0c8: 0x256bffff  addiu       $t3, $t3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d0c4) {
            ctx->pc = 0x12D0E0u;
            goto label_12d0e0;
        }
    }
    ctx->pc = 0x12D0CCu;
    // 0x12d0cc: 0x8a782b  sltu        $t7, $a0, $t2
    ctx->pc = 0x12d0ccu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x12d0d0: 0x11e00004  beqz        $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x12D0D0u;
    {
        const bool branch_taken_0x12d0d0 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D0D0u;
        // 0x12d0d4: 0xc7c00  sll         $t7, $t4, 16 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 12), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d0d0) {
            ctx->pc = 0x12D0E4u;
            goto label_12d0e4;
        }
    }
    ctx->pc = 0x12D0D8u;
    // 0x12d0d8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x12d0d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x12d0dc: 0x256bffff  addiu       $t3, $t3, -0x1
    ctx->pc = 0x12d0dcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
label_12d0e0:
    // 0x12d0e0: 0xc7c00  sll         $t7, $t4, 16
    ctx->pc = 0x12d0e0u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 12), 16));
label_12d0e4:
    // 0x12d0e4: 0x8ac023  subu        $t8, $a0, $t2
    ctx->pc = 0x12d0e4u;
    SET_GPR_S32(ctx, 24, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x12d0e8: 0x1eb3825  or          $a3, $t7, $t3
    ctx->pc = 0x12d0e8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 15) | GPR_U64(ctx, 11));
    // 0x12d0ec: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x12d0ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12d0f0:
    // 0x12d0f0: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x12D0F0u;
    {
        const bool branch_taken_0x12d0f0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D0F0u;
        // 0x12d0f4: 0x3387806  srlv        $t7, $t8, $t9 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 24), GPR_U32(ctx, 25) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d0f0) {
            ctx->pc = 0x12D11Cu;
            goto label_12d11c;
        }
    }
    ctx->pc = 0x12D0F8u;
    // 0x12d0f8: 0x240effff  addiu       $t6, $zero, -0x1
    ctx->pc = 0x12d0f8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12d0fc: 0xf783c  dsll32      $t7, $t7, 0
    ctx->pc = 0x12d0fcu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 0));
    // 0x12d100: 0xe703c  dsll32      $t6, $t6, 0
    ctx->pc = 0x12d100u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << (32 + 0));
    // 0x12d104: 0x10e4024  and         $t0, $t0, $t6
    ctx->pc = 0x12d104u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 14));
    // 0x12d108: 0xf783e  dsrl32      $t7, $t7, 0
    ctx->pc = 0x12d108u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) >> (32 + 0));
    // 0x12d10c: 0x10f4025  or          $t0, $t0, $t7
    ctx->pc = 0x12d10cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 15));
    // 0x12d110: 0x8403c  dsll32      $t0, $t0, 0
    ctx->pc = 0x12d110u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 0));
    // 0x12d114: 0x8403e  dsrl32      $t0, $t0, 0
    ctx->pc = 0x12d114u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) >> (32 + 0));
label_12d118:
    // 0x12d118: 0xfe280000  sd          $t0, 0x0($s1)
    ctx->pc = 0x12d118u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 8));
label_12d11c:
    // 0x12d11c: 0x240effff  addiu       $t6, $zero, -0x1
    ctx->pc = 0x12d11cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12d120: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12d120u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12d124: 0x7783c  dsll32      $t7, $a3, 0
    ctx->pc = 0x12d124u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 7) << (32 + 0));
    // 0x12d128: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x12d128u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12d12c: 0xe703c  dsll32      $t6, $t6, 0
    ctx->pc = 0x12d12cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << (32 + 0));
    // 0x12d130: 0xf783e  dsrl32      $t7, $t7, 0
    ctx->pc = 0x12d130u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) >> (32 + 0));
    // 0x12d134: 0x4e1024  and         $v0, $v0, $t6
    ctx->pc = 0x12d134u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 14));
    // 0x12d138: 0x4f1025  or          $v0, $v0, $t7
    ctx->pc = 0x12d138u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 15));
    // 0x12d13c: 0x12703c  dsll32      $t6, $s2, 0
    ctx->pc = 0x12d13cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 18) << (32 + 0));
    // 0x12d140: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x12d140u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x12d144: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x12d144u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12d148: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x12d148u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x12d14c: 0x4e1025  or          $v0, $v0, $t6
    ctx->pc = 0x12d14cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 14));
    // 0x12d150: 0x3e00008  jr          $ra
    ctx->pc = 0x12D150u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12D154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D150u;
        // 0x12d154: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12D150u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12D158u;
label_12d158:
    // 0x12d158: 0x240e0010  addiu       $t6, $zero, 0x10
    ctx->pc = 0x12d158u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x12d15c: 0x35efffff  ori         $t7, $t7, 0xFFFF
    ctx->pc = 0x12d15cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)65535);
    // 0x12d160: 0x240d0018  addiu       $t5, $zero, 0x18
    ctx->pc = 0x12d160u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x12d164: 0x1e5782b  sltu        $t7, $t7, $a1
    ctx->pc = 0x12d164u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x12d168: 0x1c0602d  daddu       $t4, $t6, $zero
    ctx->pc = 0x12d168u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d16c: 0x1000ff9e  b           . + 4 + (-0x62 << 2)
    ctx->pc = 0x12D16Cu;
    {
        const bool branch_taken_0x12d16c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D16Cu;
        // 0x12d170: 0x1af600b  movn        $t4, $t5, $t7 (Delay Slot)
        if (GPR_U64(ctx, 15) != 0) SET_GPR_VEC(ctx, 12, GPR_VEC(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d16c) {
            ctx->pc = 0x12CFE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12cfe8;
        }
    }
    ctx->pc = 0x12D174u;
label_12d174:
    // 0x12d174: 0x14a00008  bnez        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x12D174u;
    {
        const bool branch_taken_0x12d174 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x12D178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D174u;
        // 0x12d178: 0x1e5782b  sltu        $t7, $t7, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d174) {
            ctx->pc = 0x12D198u;
            goto label_12d198;
        }
    }
    ctx->pc = 0x12D17Cu;
    // 0x12d17c: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x12d17cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12d180: 0x1ea001b  divu        $zero, $t7, $t2
    ctx->pc = 0x12d180u;
    { uint32_t divisor = GPR_U32(ctx, 10); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 15) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 15) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,15); } }
    // 0x12d184: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x12D184u;
    {
        const bool branch_taken_0x12d184 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x12d184) {
            ctx->pc = 0x12D188u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12D184u;
            // 0x12d188: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x12D18Cu;
            goto label_12d18c;
        }
    }
    ctx->pc = 0x12D18Cu;
label_12d18c:
    // 0x12d18c: 0x2812  mflo        $a1
    ctx->pc = 0x12d18cu;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x12d190: 0x340fffff  ori         $t7, $zero, 0xFFFF
    ctx->pc = 0x12d190u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x12d194: 0x1e5782b  sltu        $t7, $t7, $a1
    ctx->pc = 0x12d194u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_12d198:
    // 0x12d198: 0x15e0007e  bnez        $t7, . + 4 + (0x7E << 2)
    ctx->pc = 0x12D198u;
    {
        const bool branch_taken_0x12d198 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12D19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D198u;
        // 0x12d19c: 0x3c0f00ff  lui         $t7, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d198) {
            ctx->pc = 0x12D394u;
            goto label_12d394;
        }
    }
    ctx->pc = 0x12D1A0u;
    // 0x12d1a0: 0x240f0008  addiu       $t7, $zero, 0x8
    ctx->pc = 0x12d1a0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x12d1a4: 0x2cae0100  sltiu       $t6, $a1, 0x100
    ctx->pc = 0x12d1a4u;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x12d1a8: 0x1e0602d  daddu       $t4, $t7, $zero
    ctx->pc = 0x12d1a8u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d1ac: 0xe600b  movn        $t4, $zero, $t6
    ctx->pc = 0x12d1acu;
    if (GPR_U64(ctx, 14) != 0) SET_GPR_VEC(ctx, 12, GPR_VEC(ctx, 0));
label_12d1b0:
    // 0x12d1b0: 0x3c0e0066  lui         $t6, 0x66
    ctx->pc = 0x12d1b0u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)102 << 16));
    // 0x12d1b4: 0x1857806  srlv        $t7, $a1, $t4
    ctx->pc = 0x12d1b4u;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 5), GPR_U32(ctx, 12) & 0x1F));
    // 0x12d1b8: 0x25ce4478  addiu       $t6, $t6, 0x4478
    ctx->pc = 0x12d1b8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 17528));
    // 0x12d1bc: 0x240b0020  addiu       $t3, $zero, 0x20
    ctx->pc = 0x12d1bcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x12d1c0: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x12d1c0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x12d1c4: 0x91ed0000  lbu         $t5, 0x0($t7)
    ctx->pc = 0x12d1c4u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x12d1c8: 0x1ac6821  addu        $t5, $t5, $t4
    ctx->pc = 0x12d1c8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 12)));
    // 0x12d1cc: 0x16dc823  subu        $t9, $t3, $t5
    ctx->pc = 0x12d1ccu;
    SET_GPR_S32(ctx, 25, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 13)));
    // 0x12d1d0: 0x17200036  bnez        $t9, . + 4 + (0x36 << 2)
    ctx->pc = 0x12D1D0u;
    {
        const bool branch_taken_0x12d1d0 = (GPR_U64(ctx, 25) != GPR_U64(ctx, 0));
        ctx->pc = 0x12D1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D1D0u;
        // 0x12d1d4: 0x1798023  subu        $s0, $t3, $t9 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 25)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d1d0) {
            ctx->pc = 0x12D2ACu;
            goto label_12d2ac;
        }
    }
    ctx->pc = 0x12D1D8u;
    // 0x12d1d8: 0x1254823  subu        $t1, $t1, $a1
    ctx->pc = 0x12d1d8u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
    // 0x12d1dc: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x12d1dcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12d1e0: 0x55402  srl         $t2, $a1, 16
    ctx->pc = 0x12d1e0u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
    // 0x12d1e4: 0x30a3ffff  andi        $v1, $a1, 0xFFFF
    ctx->pc = 0x12d1e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
label_12d1e8:
    // 0x12d1e8: 0x12a001b  divu        $zero, $t1, $t2
    ctx->pc = 0x12d1e8u;
    { uint32_t divisor = GPR_U32(ctx, 10); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 9) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 9) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,9); } }
    // 0x12d1ec: 0x186402  srl         $t4, $t8, 16
    ctx->pc = 0x12d1ecu;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 24), 16));
    // 0x12d1f0: 0x51400001  beql        $t2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x12D1F0u;
    {
        const bool branch_taken_0x12d1f0 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x12d1f0) {
            ctx->pc = 0x12D1F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12D1F0u;
            // 0x12d1f4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x12D1F8u;
            goto label_12d1f8;
        }
    }
    ctx->pc = 0x12D1F8u;
label_12d1f8:
    // 0x12d1f8: 0x7010  mfhi        $t6
    ctx->pc = 0x12d1f8u;
    SET_GPR_U64(ctx, 14, ctx->hi);
    // 0x12d1fc: 0x6812  mflo        $t5
    ctx->pc = 0x12d1fcu;
    SET_GPR_U64(ctx, 13, ctx->lo);
    // 0x12d200: 0x4812  mflo        $t1
    ctx->pc = 0x12d200u;
    SET_GPR_U64(ctx, 9, ctx->lo);
    // 0x12d204: 0xe7400  sll         $t6, $t6, 16
    ctx->pc = 0x12d204u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 16));
    // 0x12d208: 0x1a35818  mult        $t3, $t5, $v1
    ctx->pc = 0x12d208u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x12d20c: 0x1cc7025  or          $t6, $t6, $t4
    ctx->pc = 0x12d20cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 12));
    // 0x12d210: 0x1cb782b  sltu        $t7, $t6, $t3
    ctx->pc = 0x12d210u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x12d214: 0x51e0000b  beql        $t7, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x12D214u;
    {
        const bool branch_taken_0x12d214 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x12d214) {
            ctx->pc = 0x12D218u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12D214u;
            // 0x12d218: 0x1cb7023  subu        $t6, $t6, $t3 (Delay Slot)
            SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 11)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12D244u;
            goto label_12d244;
        }
    }
    ctx->pc = 0x12D21Cu;
    // 0x12d21c: 0x1c57021  addu        $t6, $t6, $a1
    ctx->pc = 0x12d21cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 5)));
    // 0x12d220: 0x1c5782b  sltu        $t7, $t6, $a1
    ctx->pc = 0x12d220u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x12d224: 0x15e00006  bnez        $t7, . + 4 + (0x6 << 2)
    ctx->pc = 0x12D224u;
    {
        const bool branch_taken_0x12d224 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12D228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D224u;
        // 0x12d228: 0x25a9ffff  addiu       $t1, $t5, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d224) {
            ctx->pc = 0x12D240u;
            goto label_12d240;
        }
    }
    ctx->pc = 0x12D22Cu;
    // 0x12d22c: 0x1cb782b  sltu        $t7, $t6, $t3
    ctx->pc = 0x12d22cu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x12d230: 0x51e00004  beql        $t7, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x12D230u;
    {
        const bool branch_taken_0x12d230 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x12d230) {
            ctx->pc = 0x12D234u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12D230u;
            // 0x12d234: 0x1cb7023  subu        $t6, $t6, $t3 (Delay Slot)
            SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 11)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12D244u;
            goto label_12d244;
        }
    }
    ctx->pc = 0x12D238u;
    // 0x12d238: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x12d238u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x12d23c: 0x1c57021  addu        $t6, $t6, $a1
    ctx->pc = 0x12d23cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 5)));
label_12d240:
    // 0x12d240: 0x1cb7023  subu        $t6, $t6, $t3
    ctx->pc = 0x12d240u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 11)));
label_12d244:
    // 0x12d244: 0x330dffff  andi        $t5, $t8, 0xFFFF
    ctx->pc = 0x12d244u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 24) & (uint64_t)(uint16_t)65535);
    // 0x12d248: 0x1ca001b  divu        $zero, $t6, $t2
    ctx->pc = 0x12d248u;
    { uint32_t divisor = GPR_U32(ctx, 10); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,14); } }
    // 0x12d24c: 0x51400001  beql        $t2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x12D24Cu;
    {
        const bool branch_taken_0x12d24c = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x12d24c) {
            ctx->pc = 0x12D250u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12D24Cu;
            // 0x12d250: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x12D254u;
            goto label_12d254;
        }
    }
    ctx->pc = 0x12D254u;
label_12d254:
    // 0x12d254: 0x7812  mflo        $t7
    ctx->pc = 0x12d254u;
    SET_GPR_U64(ctx, 15, ctx->lo);
    // 0x12d258: 0x7010  mfhi        $t6
    ctx->pc = 0x12d258u;
    SET_GPR_U64(ctx, 14, ctx->hi);
    // 0x12d25c: 0x5012  mflo        $t2
    ctx->pc = 0x12d25cu;
    SET_GPR_U64(ctx, 10, ctx->lo);
    // 0x12d260: 0xe7400  sll         $t6, $t6, 16
    ctx->pc = 0x12d260u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 16));
    // 0x12d264: 0x1e35818  mult        $t3, $t7, $v1
    ctx->pc = 0x12d264u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x12d268: 0x1cd2025  or          $a0, $t6, $t5
    ctx->pc = 0x12d268u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 14) | GPR_U64(ctx, 13));
    // 0x12d26c: 0x8b782b  sltu        $t7, $a0, $t3
    ctx->pc = 0x12d26cu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x12d270: 0x11e0000b  beqz        $t7, . + 4 + (0xB << 2)
    ctx->pc = 0x12D270u;
    {
        const bool branch_taken_0x12d270 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D270u;
        // 0x12d274: 0x97c00  sll         $t7, $t1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 9), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d270) {
            ctx->pc = 0x12D2A0u;
            goto label_12d2a0;
        }
    }
    ctx->pc = 0x12D278u;
    // 0x12d278: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x12d278u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x12d27c: 0x85782b  sltu        $t7, $a0, $a1
    ctx->pc = 0x12d27cu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x12d280: 0x15e00006  bnez        $t7, . + 4 + (0x6 << 2)
    ctx->pc = 0x12D280u;
    {
        const bool branch_taken_0x12d280 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12D284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D280u;
        // 0x12d284: 0x254affff  addiu       $t2, $t2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d280) {
            ctx->pc = 0x12D29Cu;
            goto label_12d29c;
        }
    }
    ctx->pc = 0x12D288u;
    // 0x12d288: 0x8b782b  sltu        $t7, $a0, $t3
    ctx->pc = 0x12d288u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x12d28c: 0x11e00004  beqz        $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x12D28Cu;
    {
        const bool branch_taken_0x12d28c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D28Cu;
        // 0x12d290: 0x97c00  sll         $t7, $t1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 9), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d28c) {
            ctx->pc = 0x12D2A0u;
            goto label_12d2a0;
        }
    }
    ctx->pc = 0x12D294u;
    // 0x12d294: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x12d294u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x12d298: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x12d298u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
label_12d29c:
    // 0x12d29c: 0x97c00  sll         $t7, $t1, 16
    ctx->pc = 0x12d29cu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 9), 16));
label_12d2a0:
    // 0x12d2a0: 0x8bc023  subu        $t8, $a0, $t3
    ctx->pc = 0x12d2a0u;
    SET_GPR_S32(ctx, 24, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
    // 0x12d2a4: 0x1000ff92  b           . + 4 + (-0x6E << 2)
    ctx->pc = 0x12D2A4u;
    {
        const bool branch_taken_0x12d2a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D2A4u;
        // 0x12d2a8: 0x1ea3825  or          $a3, $t7, $t2 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 15) | GPR_U64(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d2a4) {
            ctx->pc = 0x12D0F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12d0f0;
        }
    }
    ctx->pc = 0x12D2ACu;
label_12d2ac:
    // 0x12d2ac: 0x3252804  sllv        $a1, $a1, $t9
    ctx->pc = 0x12d2acu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 25) & 0x1F));
    // 0x12d2b0: 0x55402  srl         $t2, $a1, 16
    ctx->pc = 0x12d2b0u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
    // 0x12d2b4: 0x2096006  srlv        $t4, $t1, $s0
    ctx->pc = 0x12d2b4u;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 9), GPR_U32(ctx, 16) & 0x1F));
    // 0x12d2b8: 0x18a001b  divu        $zero, $t4, $t2
    ctx->pc = 0x12d2b8u;
    { uint32_t divisor = GPR_U32(ctx, 10); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 12) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 12) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,12); } }
    // 0x12d2bc: 0x30a3ffff  andi        $v1, $a1, 0xFFFF
    ctx->pc = 0x12d2bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x12d2c0: 0x2187006  srlv        $t6, $t8, $s0
    ctx->pc = 0x12d2c0u;
    SET_GPR_S32(ctx, 14, (int32_t)SRL32(GPR_U32(ctx, 24), GPR_U32(ctx, 16) & 0x1F));
    // 0x12d2c4: 0x3297804  sllv        $t7, $t1, $t9
    ctx->pc = 0x12d2c4u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 25) & 0x1F));
    // 0x12d2c8: 0x1ee4825  or          $t1, $t7, $t6
    ctx->pc = 0x12d2c8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 15) | GPR_U64(ctx, 14));
    // 0x12d2cc: 0x140382d  daddu       $a3, $t2, $zero
    ctx->pc = 0x12d2ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d2d0: 0x97402  srl         $t6, $t1, 16
    ctx->pc = 0x12d2d0u;
    SET_GPR_S32(ctx, 14, (int32_t)SRL32(GPR_U32(ctx, 9), 16));
    // 0x12d2d4: 0x338c004  sllv        $t8, $t8, $t9
    ctx->pc = 0x12d2d4u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 24), GPR_U32(ctx, 25) & 0x1F));
    // 0x12d2d8: 0x51400001  beql        $t2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x12D2D8u;
    {
        const bool branch_taken_0x12d2d8 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x12d2d8) {
            ctx->pc = 0x12D2DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12D2D8u;
            // 0x12d2dc: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x12D2E0u;
            goto label_12d2e0;
        }
    }
    ctx->pc = 0x12D2E0u;
label_12d2e0:
    // 0x12d2e0: 0x6810  mfhi        $t5
    ctx->pc = 0x12d2e0u;
    SET_GPR_U64(ctx, 13, ctx->hi);
    // 0x12d2e4: 0x6012  mflo        $t4
    ctx->pc = 0x12d2e4u;
    SET_GPR_U64(ctx, 12, ctx->lo);
    // 0x12d2e8: 0x2012  mflo        $a0
    ctx->pc = 0x12d2e8u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x12d2ec: 0xd6c00  sll         $t5, $t5, 16
    ctx->pc = 0x12d2ecu;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 13), 16));
    // 0x12d2f0: 0x1835818  mult        $t3, $t4, $v1
    ctx->pc = 0x12d2f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x12d2f4: 0x1ae7025  or          $t6, $t5, $t6
    ctx->pc = 0x12d2f4u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 13) | GPR_U64(ctx, 14));
    // 0x12d2f8: 0x1cb782b  sltu        $t7, $t6, $t3
    ctx->pc = 0x12d2f8u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x12d2fc: 0x11e0000a  beqz        $t7, . + 4 + (0xA << 2)
    ctx->pc = 0x12D2FCu;
    {
        const bool branch_taken_0x12d2fc = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D2FCu;
        // 0x12d300: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d2fc) {
            ctx->pc = 0x12D328u;
            goto label_12d328;
        }
    }
    ctx->pc = 0x12D304u;
    // 0x12d304: 0x1c57021  addu        $t6, $t6, $a1
    ctx->pc = 0x12d304u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 5)));
    // 0x12d308: 0x1c5782b  sltu        $t7, $t6, $a1
    ctx->pc = 0x12d308u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x12d30c: 0x15e00006  bnez        $t7, . + 4 + (0x6 << 2)
    ctx->pc = 0x12D30Cu;
    {
        const bool branch_taken_0x12d30c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12D310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D30Cu;
        // 0x12d310: 0x2584ffff  addiu       $a0, $t4, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d30c) {
            ctx->pc = 0x12D328u;
            goto label_12d328;
        }
    }
    ctx->pc = 0x12D314u;
    // 0x12d314: 0x1cb782b  sltu        $t7, $t6, $t3
    ctx->pc = 0x12d314u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x12d318: 0x51e00004  beql        $t7, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x12D318u;
    {
        const bool branch_taken_0x12d318 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x12d318) {
            ctx->pc = 0x12D31Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12D318u;
            // 0x12d31c: 0x1cb7023  subu        $t6, $t6, $t3 (Delay Slot)
            SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 11)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12D32Cu;
            goto label_12d32c;
        }
    }
    ctx->pc = 0x12D320u;
    // 0x12d320: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x12d320u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x12d324: 0x1c57021  addu        $t6, $t6, $a1
    ctx->pc = 0x12d324u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 5)));
label_12d328:
    // 0x12d328: 0x1cb7023  subu        $t6, $t6, $t3
    ctx->pc = 0x12d328u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 11)));
label_12d32c:
    // 0x12d32c: 0x312dffff  andi        $t5, $t1, 0xFFFF
    ctx->pc = 0x12d32cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
    // 0x12d330: 0x1c7001b  divu        $zero, $t6, $a3
    ctx->pc = 0x12d330u;
    { uint32_t divisor = GPR_U32(ctx, 7); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,14); } }
    // 0x12d334: 0x50e00001  beql        $a3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x12D334u;
    {
        const bool branch_taken_0x12d334 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x12d334) {
            ctx->pc = 0x12D338u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12D334u;
            // 0x12d338: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x12D33Cu;
            goto label_12d33c;
        }
    }
    ctx->pc = 0x12D33Cu;
label_12d33c:
    // 0x12d33c: 0x7812  mflo        $t7
    ctx->pc = 0x12d33cu;
    SET_GPR_U64(ctx, 15, ctx->lo);
    // 0x12d340: 0x7010  mfhi        $t6
    ctx->pc = 0x12d340u;
    SET_GPR_U64(ctx, 14, ctx->hi);
    // 0x12d344: 0x3812  mflo        $a3
    ctx->pc = 0x12d344u;
    SET_GPR_U64(ctx, 7, ctx->lo);
    // 0x12d348: 0xe7400  sll         $t6, $t6, 16
    ctx->pc = 0x12d348u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 16));
    // 0x12d34c: 0x1e65818  mult        $t3, $t7, $a2
    ctx->pc = 0x12d34cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x12d350: 0x1cd6025  or          $t4, $t6, $t5
    ctx->pc = 0x12d350u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 14) | GPR_U64(ctx, 13));
    // 0x12d354: 0x18b782b  sltu        $t7, $t4, $t3
    ctx->pc = 0x12d354u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x12d358: 0x11e0000b  beqz        $t7, . + 4 + (0xB << 2)
    ctx->pc = 0x12D358u;
    {
        const bool branch_taken_0x12d358 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D358u;
        // 0x12d35c: 0x47c00  sll         $t7, $a0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d358) {
            ctx->pc = 0x12D388u;
            goto label_12d388;
        }
    }
    ctx->pc = 0x12D360u;
    // 0x12d360: 0x1856021  addu        $t4, $t4, $a1
    ctx->pc = 0x12d360u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 5)));
    // 0x12d364: 0x185782b  sltu        $t7, $t4, $a1
    ctx->pc = 0x12d364u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x12d368: 0x15e00006  bnez        $t7, . + 4 + (0x6 << 2)
    ctx->pc = 0x12D368u;
    {
        const bool branch_taken_0x12d368 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12D36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D368u;
        // 0x12d36c: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d368) {
            ctx->pc = 0x12D384u;
            goto label_12d384;
        }
    }
    ctx->pc = 0x12D370u;
    // 0x12d370: 0x18b782b  sltu        $t7, $t4, $t3
    ctx->pc = 0x12d370u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x12d374: 0x11e00004  beqz        $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x12D374u;
    {
        const bool branch_taken_0x12d374 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D374u;
        // 0x12d378: 0x47c00  sll         $t7, $a0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d374) {
            ctx->pc = 0x12D388u;
            goto label_12d388;
        }
    }
    ctx->pc = 0x12D37Cu;
    // 0x12d37c: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x12d37cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x12d380: 0x1856021  addu        $t4, $t4, $a1
    ctx->pc = 0x12d380u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 5)));
label_12d384:
    // 0x12d384: 0x47c00  sll         $t7, $a0, 16
    ctx->pc = 0x12d384u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
label_12d388:
    // 0x12d388: 0x18b4823  subu        $t1, $t4, $t3
    ctx->pc = 0x12d388u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 11)));
    // 0x12d38c: 0x1000ff96  b           . + 4 + (-0x6A << 2)
    ctx->pc = 0x12D38Cu;
    {
        const bool branch_taken_0x12d38c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D38Cu;
        // 0x12d390: 0x1e79025  or          $s2, $t7, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 15) | GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d38c) {
            ctx->pc = 0x12D1E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12d1e8;
        }
    }
    ctx->pc = 0x12D394u;
label_12d394:
    // 0x12d394: 0x240e0010  addiu       $t6, $zero, 0x10
    ctx->pc = 0x12d394u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x12d398: 0x35efffff  ori         $t7, $t7, 0xFFFF
    ctx->pc = 0x12d398u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)65535);
    // 0x12d39c: 0x240d0018  addiu       $t5, $zero, 0x18
    ctx->pc = 0x12d39cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x12d3a0: 0x1e5782b  sltu        $t7, $t7, $a1
    ctx->pc = 0x12d3a0u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x12d3a4: 0x1c0602d  daddu       $t4, $t6, $zero
    ctx->pc = 0x12d3a4u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d3a8: 0x1000ff81  b           . + 4 + (-0x7F << 2)
    ctx->pc = 0x12D3A8u;
    {
        const bool branch_taken_0x12d3a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D3A8u;
        // 0x12d3ac: 0x1af600b  movn        $t4, $t5, $t7 (Delay Slot)
        if (GPR_U64(ctx, 15) != 0) SET_GPR_VEC(ctx, 12, GPR_VEC(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d3a8) {
            ctx->pc = 0x12D1B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12d1b0;
        }
    }
    ctx->pc = 0x12D3B0u;
label_12d3b0:
    // 0x12d3b0: 0x12a782b  sltu        $t7, $t1, $t2
    ctx->pc = 0x12d3b0u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x12d3b4: 0x15e0001f  bnez        $t7, . + 4 + (0x1F << 2)
    ctx->pc = 0x12D3B4u;
    {
        const bool branch_taken_0x12d3b4 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12D3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D3B4u;
        // 0x12d3b8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d3b4) {
            ctx->pc = 0x12D434u;
            goto label_12d434;
        }
    }
    ctx->pc = 0x12D3BCu;
    // 0x12d3bc: 0x340fffff  ori         $t7, $zero, 0xFFFF
    ctx->pc = 0x12d3bcu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x12d3c0: 0x1ea782b  sltu        $t7, $t7, $t2
    ctx->pc = 0x12d3c0u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x12d3c4: 0x15e00096  bnez        $t7, . + 4 + (0x96 << 2)
    ctx->pc = 0x12D3C4u;
    {
        const bool branch_taken_0x12d3c4 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12D3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D3C4u;
        // 0x12d3c8: 0x3c0f00ff  lui         $t7, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d3c4) {
            ctx->pc = 0x12D620u;
            goto label_12d620;
        }
    }
    ctx->pc = 0x12D3CCu;
    // 0x12d3cc: 0x240f0008  addiu       $t7, $zero, 0x8
    ctx->pc = 0x12d3ccu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x12d3d0: 0x2d4e0100  sltiu       $t6, $t2, 0x100
    ctx->pc = 0x12d3d0u;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x12d3d4: 0x1e0602d  daddu       $t4, $t7, $zero
    ctx->pc = 0x12d3d4u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d3d8: 0xe600b  movn        $t4, $zero, $t6
    ctx->pc = 0x12d3d8u;
    if (GPR_U64(ctx, 14) != 0) SET_GPR_VEC(ctx, 12, GPR_VEC(ctx, 0));
label_12d3dc:
    // 0x12d3dc: 0x3c0e0066  lui         $t6, 0x66
    ctx->pc = 0x12d3dcu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)102 << 16));
    // 0x12d3e0: 0x18a7806  srlv        $t7, $t2, $t4
    ctx->pc = 0x12d3e0u;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 10), GPR_U32(ctx, 12) & 0x1F));
    // 0x12d3e4: 0x25ce4478  addiu       $t6, $t6, 0x4478
    ctx->pc = 0x12d3e4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 17528));
    // 0x12d3e8: 0x240b0020  addiu       $t3, $zero, 0x20
    ctx->pc = 0x12d3e8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x12d3ec: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x12d3ecu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x12d3f0: 0x91ed0000  lbu         $t5, 0x0($t7)
    ctx->pc = 0x12d3f0u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x12d3f4: 0x1ac6821  addu        $t5, $t5, $t4
    ctx->pc = 0x12d3f4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 12)));
    // 0x12d3f8: 0x16dc823  subu        $t9, $t3, $t5
    ctx->pc = 0x12d3f8u;
    SET_GPR_S32(ctx, 25, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 13)));
    // 0x12d3fc: 0x1720001a  bnez        $t9, . + 4 + (0x1A << 2)
    ctx->pc = 0x12D3FCu;
    {
        const bool branch_taken_0x12d3fc = (GPR_U64(ctx, 25) != GPR_U64(ctx, 0));
        ctx->pc = 0x12D400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D3FCu;
        // 0x12d400: 0x1798023  subu        $s0, $t3, $t9 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 25)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d3fc) {
            ctx->pc = 0x12D468u;
            goto label_12d468;
        }
    }
    ctx->pc = 0x12D404u;
    // 0x12d404: 0x149782b  sltu        $t7, $t2, $t1
    ctx->pc = 0x12d404u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x12d408: 0x15e00005  bnez        $t7, . + 4 + (0x5 << 2)
    ctx->pc = 0x12D408u;
    {
        const bool branch_taken_0x12d408 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12D40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D408u;
        // 0x12d40c: 0x3056823  subu        $t5, $t8, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 24), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d408) {
            ctx->pc = 0x12D420u;
            goto label_12d420;
        }
    }
    ctx->pc = 0x12D410u;
    // 0x12d410: 0x305782b  sltu        $t7, $t8, $a1
    ctx->pc = 0x12d410u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 24) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x12d414: 0x15e00007  bnez        $t7, . + 4 + (0x7 << 2)
    ctx->pc = 0x12D414u;
    {
        const bool branch_taken_0x12d414 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12D418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D414u;
        // 0x12d418: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d414) {
            ctx->pc = 0x12D434u;
            goto label_12d434;
        }
    }
    ctx->pc = 0x12D41Cu;
    // 0x12d41c: 0x3056823  subu        $t5, $t8, $a1
    ctx->pc = 0x12d41cu;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 24), GPR_U32(ctx, 5)));
label_12d420:
    // 0x12d420: 0x12a7023  subu        $t6, $t1, $t2
    ctx->pc = 0x12d420u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x12d424: 0x30d782b  sltu        $t7, $t8, $t5
    ctx->pc = 0x12d424u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 24) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x12d428: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x12d428u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12d42c: 0x1cf4823  subu        $t1, $t6, $t7
    ctx->pc = 0x12d42cu;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 15)));
    // 0x12d430: 0x1a0c02d  daddu       $t8, $t5, $zero
    ctx->pc = 0x12d430u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
label_12d434:
    // 0x12d434: 0x1220ff39  beqz        $s1, . + 4 + (-0xC7 << 2)
    ctx->pc = 0x12D434u;
    {
        const bool branch_taken_0x12d434 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D434u;
        // 0x12d438: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d434) {
            ctx->pc = 0x12D11Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12d11c;
        }
    }
    ctx->pc = 0x12D43Cu;
    // 0x12d43c: 0x240effff  addiu       $t6, $zero, -0x1
    ctx->pc = 0x12d43cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12d440: 0x18783c  dsll32      $t7, $t8, 0
    ctx->pc = 0x12d440u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 24) << (32 + 0));
    // 0x12d444: 0xe703c  dsll32      $t6, $t6, 0
    ctx->pc = 0x12d444u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << (32 + 0));
    // 0x12d448: 0xf783e  dsrl32      $t7, $t7, 0
    ctx->pc = 0x12d448u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) >> (32 + 0));
    // 0x12d44c: 0x10e4024  and         $t0, $t0, $t6
    ctx->pc = 0x12d44cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 14));
    // 0x12d450: 0x10f4025  or          $t0, $t0, $t7
    ctx->pc = 0x12d450u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 15));
    // 0x12d454: 0x9703c  dsll32      $t6, $t1, 0
    ctx->pc = 0x12d454u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 9) << (32 + 0));
label_12d458:
    // 0x12d458: 0x8403c  dsll32      $t0, $t0, 0
    ctx->pc = 0x12d458u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 0));
    // 0x12d45c: 0x8403e  dsrl32      $t0, $t0, 0
    ctx->pc = 0x12d45cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) >> (32 + 0));
    // 0x12d460: 0x1000ff2d  b           . + 4 + (-0xD3 << 2)
    ctx->pc = 0x12D460u;
    {
        const bool branch_taken_0x12d460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D460u;
        // 0x12d464: 0x10e4025  or          $t0, $t0, $t6 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d460) {
            ctx->pc = 0x12D118u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12d118;
        }
    }
    ctx->pc = 0x12D468u;
label_12d468:
    // 0x12d468: 0x32a7004  sllv        $t6, $t2, $t9
    ctx->pc = 0x12d468u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 25) & 0x1F));
    // 0x12d46c: 0x2057806  srlv        $t7, $a1, $s0
    ctx->pc = 0x12d46cu;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 5), GPR_U32(ctx, 16) & 0x1F));
    // 0x12d470: 0x2096006  srlv        $t4, $t1, $s0
    ctx->pc = 0x12d470u;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 9), GPR_U32(ctx, 16) & 0x1F));
    // 0x12d474: 0x1cf5025  or          $t2, $t6, $t7
    ctx->pc = 0x12d474u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 14) | GPR_U64(ctx, 15));
    // 0x12d478: 0x3296804  sllv        $t5, $t1, $t9
    ctx->pc = 0x12d478u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 25) & 0x1F));
    // 0x12d47c: 0xa5c02  srl         $t3, $t2, 16
    ctx->pc = 0x12d47cu;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 10), 16));
    // 0x12d480: 0x3146ffff  andi        $a2, $t2, 0xFFFF
    ctx->pc = 0x12d480u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
    // 0x12d484: 0x18b001b  divu        $zero, $t4, $t3
    ctx->pc = 0x12d484u;
    { uint32_t divisor = GPR_U32(ctx, 11); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 12) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 12) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,12); } }
    // 0x12d488: 0x2187806  srlv        $t7, $t8, $s0
    ctx->pc = 0x12d488u;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 24), GPR_U32(ctx, 16) & 0x1F));
    // 0x12d48c: 0x1af4825  or          $t1, $t5, $t7
    ctx->pc = 0x12d48cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 13) | GPR_U64(ctx, 15));
    // 0x12d490: 0x3252804  sllv        $a1, $a1, $t9
    ctx->pc = 0x12d490u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 25) & 0x1F));
    // 0x12d494: 0x96c02  srl         $t5, $t1, 16
    ctx->pc = 0x12d494u;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 9), 16));
    // 0x12d498: 0x338c004  sllv        $t8, $t8, $t9
    ctx->pc = 0x12d498u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 24), GPR_U32(ctx, 25) & 0x1F));
    // 0x12d49c: 0x51600001  beql        $t3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x12D49Cu;
    {
        const bool branch_taken_0x12d49c = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        if (branch_taken_0x12d49c) {
            ctx->pc = 0x12D4A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12D49Cu;
            // 0x12d4a0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x12D4A4u;
            goto label_12d4a4;
        }
    }
    ctx->pc = 0x12D4A4u;
label_12d4a4:
    // 0x12d4a4: 0x7010  mfhi        $t6
    ctx->pc = 0x12d4a4u;
    SET_GPR_U64(ctx, 14, ctx->hi);
    // 0x12d4a8: 0x6012  mflo        $t4
    ctx->pc = 0x12d4a8u;
    SET_GPR_U64(ctx, 12, ctx->lo);
    // 0x12d4ac: 0x3812  mflo        $a3
    ctx->pc = 0x12d4acu;
    SET_GPR_U64(ctx, 7, ctx->lo);
    // 0x12d4b0: 0xe7400  sll         $t6, $t6, 16
    ctx->pc = 0x12d4b0u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 16));
    // 0x12d4b4: 0x1861818  mult        $v1, $t4, $a2
    ctx->pc = 0x12d4b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x12d4b8: 0x1cd7025  or          $t6, $t6, $t5
    ctx->pc = 0x12d4b8u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 13));
    // 0x12d4bc: 0x1c3782b  sltu        $t7, $t6, $v1
    ctx->pc = 0x12d4bcu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x12d4c0: 0x51e0000b  beql        $t7, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x12D4C0u;
    {
        const bool branch_taken_0x12d4c0 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x12d4c0) {
            ctx->pc = 0x12D4C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12D4C0u;
            // 0x12d4c4: 0x1c37023  subu        $t6, $t6, $v1 (Delay Slot)
            SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 3)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12D4F0u;
            goto label_12d4f0;
        }
    }
    ctx->pc = 0x12D4C8u;
    // 0x12d4c8: 0x1ca7021  addu        $t6, $t6, $t2
    ctx->pc = 0x12d4c8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 10)));
    // 0x12d4cc: 0x1ca782b  sltu        $t7, $t6, $t2
    ctx->pc = 0x12d4ccu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x12d4d0: 0x15e00006  bnez        $t7, . + 4 + (0x6 << 2)
    ctx->pc = 0x12D4D0u;
    {
        const bool branch_taken_0x12d4d0 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12D4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D4D0u;
        // 0x12d4d4: 0x2587ffff  addiu       $a3, $t4, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d4d0) {
            ctx->pc = 0x12D4ECu;
            goto label_12d4ec;
        }
    }
    ctx->pc = 0x12D4D8u;
    // 0x12d4d8: 0x1c3782b  sltu        $t7, $t6, $v1
    ctx->pc = 0x12d4d8u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x12d4dc: 0x51e00004  beql        $t7, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x12D4DCu;
    {
        const bool branch_taken_0x12d4dc = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x12d4dc) {
            ctx->pc = 0x12D4E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12D4DCu;
            // 0x12d4e0: 0x1c37023  subu        $t6, $t6, $v1 (Delay Slot)
            SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 3)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12D4F0u;
            goto label_12d4f0;
        }
    }
    ctx->pc = 0x12D4E4u;
    // 0x12d4e4: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x12d4e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x12d4e8: 0x1ca7021  addu        $t6, $t6, $t2
    ctx->pc = 0x12d4e8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 10)));
label_12d4ec:
    // 0x12d4ec: 0x1c37023  subu        $t6, $t6, $v1
    ctx->pc = 0x12d4ecu;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 3)));
label_12d4f0:
    // 0x12d4f0: 0x312dffff  andi        $t5, $t1, 0xFFFF
    ctx->pc = 0x12d4f0u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
    // 0x12d4f4: 0x1cb001b  divu        $zero, $t6, $t3
    ctx->pc = 0x12d4f4u;
    { uint32_t divisor = GPR_U32(ctx, 11); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,14); } }
    // 0x12d4f8: 0x51600001  beql        $t3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x12D4F8u;
    {
        const bool branch_taken_0x12d4f8 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        if (branch_taken_0x12d4f8) {
            ctx->pc = 0x12D4FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12D4F8u;
            // 0x12d4fc: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x12D500u;
            goto label_12d500;
        }
    }
    ctx->pc = 0x12D500u;
label_12d500:
    // 0x12d500: 0x7812  mflo        $t7
    ctx->pc = 0x12d500u;
    SET_GPR_U64(ctx, 15, ctx->lo);
    // 0x12d504: 0x7010  mfhi        $t6
    ctx->pc = 0x12d504u;
    SET_GPR_U64(ctx, 14, ctx->hi);
    // 0x12d508: 0x6012  mflo        $t4
    ctx->pc = 0x12d508u;
    SET_GPR_U64(ctx, 12, ctx->lo);
    // 0x12d50c: 0xe7400  sll         $t6, $t6, 16
    ctx->pc = 0x12d50cu;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 16));
    // 0x12d510: 0x1e61818  mult        $v1, $t7, $a2
    ctx->pc = 0x12d510u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x12d514: 0x1cd3025  or          $a2, $t6, $t5
    ctx->pc = 0x12d514u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 14) | GPR_U64(ctx, 13));
    // 0x12d518: 0xc3782b  sltu        $t7, $a2, $v1
    ctx->pc = 0x12d518u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x12d51c: 0x11e0000b  beqz        $t7, . + 4 + (0xB << 2)
    ctx->pc = 0x12D51Cu;
    {
        const bool branch_taken_0x12d51c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D51Cu;
        // 0x12d520: 0x77c00  sll         $t7, $a3, 16 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d51c) {
            ctx->pc = 0x12D54Cu;
            goto label_12d54c;
        }
    }
    ctx->pc = 0x12D524u;
    // 0x12d524: 0xca3021  addu        $a2, $a2, $t2
    ctx->pc = 0x12d524u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
    // 0x12d528: 0xca782b  sltu        $t7, $a2, $t2
    ctx->pc = 0x12d528u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x12d52c: 0x15e00006  bnez        $t7, . + 4 + (0x6 << 2)
    ctx->pc = 0x12D52Cu;
    {
        const bool branch_taken_0x12d52c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12D530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D52Cu;
        // 0x12d530: 0x258cffff  addiu       $t4, $t4, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d52c) {
            ctx->pc = 0x12D548u;
            goto label_12d548;
        }
    }
    ctx->pc = 0x12D534u;
    // 0x12d534: 0xc3782b  sltu        $t7, $a2, $v1
    ctx->pc = 0x12d534u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x12d538: 0x11e00004  beqz        $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x12D538u;
    {
        const bool branch_taken_0x12d538 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D538u;
        // 0x12d53c: 0x77c00  sll         $t7, $a3, 16 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d538) {
            ctx->pc = 0x12D54Cu;
            goto label_12d54c;
        }
    }
    ctx->pc = 0x12D540u;
    // 0x12d540: 0x258cffff  addiu       $t4, $t4, -0x1
    ctx->pc = 0x12d540u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
    // 0x12d544: 0xca3021  addu        $a2, $a2, $t2
    ctx->pc = 0x12d544u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
label_12d548:
    // 0x12d548: 0x77c00  sll         $t7, $a3, 16
    ctx->pc = 0x12d548u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
label_12d54c:
    // 0x12d54c: 0x30aeffff  andi        $t6, $a1, 0xFFFF
    ctx->pc = 0x12d54cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x12d550: 0x1ec3825  or          $a3, $t7, $t4
    ctx->pc = 0x12d550u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 15) | GPR_U64(ctx, 12));
    // 0x12d554: 0xc33023  subu        $a2, $a2, $v1
    ctx->pc = 0x12d554u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x12d558: 0x30efffff  andi        $t7, $a3, 0xFFFF
    ctx->pc = 0x12d558u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x12d55c: 0x56402  srl         $t4, $a1, 16
    ctx->pc = 0x12d55cu;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
    // 0x12d560: 0x1ee9018  mult        $s2, $t7, $t6
    ctx->pc = 0x12d560u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
    // 0x12d564: 0x71ec5818  mult1       $t3, $t7, $t4
    ctx->pc = 0x12d564u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 12); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x12d568: 0x76c02  srl         $t5, $a3, 16
    ctx->pc = 0x12d568u;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 7), 16));
    // 0x12d56c: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x12d56cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d570: 0x1ae7018  mult        $t6, $t5, $t6
    ctx->pc = 0x12d570u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
    // 0x12d574: 0x127c02  srl         $t7, $s2, 16
    ctx->pc = 0x12d574u;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 18), 16));
    // 0x12d578: 0x16f5821  addu        $t3, $t3, $t7
    ctx->pc = 0x12d578u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 15)));
    // 0x12d57c: 0x16e5821  addu        $t3, $t3, $t6
    ctx->pc = 0x12d57cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 14)));
    // 0x12d580: 0x16e702b  sltu        $t6, $t3, $t6
    ctx->pc = 0x12d580u;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 14)) ? 1 : 0);
    // 0x12d584: 0x11c00003  beqz        $t6, . + 4 + (0x3 << 2)
    ctx->pc = 0x12D584u;
    {
        const bool branch_taken_0x12d584 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D584u;
        // 0x12d588: 0x71ac6018  mult1       $t4, $t5, $t4 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 12); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d584) {
            ctx->pc = 0x12D594u;
            goto label_12d594;
        }
    }
    ctx->pc = 0x12D58Cu;
    // 0x12d58c: 0x3c0f0001  lui         $t7, 0x1
    ctx->pc = 0x12d58cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)1 << 16));
    // 0x12d590: 0x18f6021  addu        $t4, $t4, $t7
    ctx->pc = 0x12d590u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 15)));
label_12d594:
    // 0x12d594: 0xb7402  srl         $t6, $t3, 16
    ctx->pc = 0x12d594u;
    SET_GPR_S32(ctx, 14, (int32_t)SRL32(GPR_U32(ctx, 11), 16));
    // 0x12d598: 0xb6c00  sll         $t5, $t3, 16
    ctx->pc = 0x12d598u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 11), 16));
    // 0x12d59c: 0x18e2021  addu        $a0, $t4, $t6
    ctx->pc = 0x12d59cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 14)));
    // 0x12d5a0: 0x324fffff  andi        $t7, $s2, 0xFFFF
    ctx->pc = 0x12d5a0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
    // 0x12d5a4: 0x124702b  sltu        $t6, $t1, $a0
    ctx->pc = 0x12d5a4u;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x12d5a8: 0x15c00005  bnez        $t6, . + 4 + (0x5 << 2)
    ctx->pc = 0x12D5A8u;
    {
        const bool branch_taken_0x12d5a8 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x12D5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D5A8u;
        // 0x12d5ac: 0x1af5821  addu        $t3, $t5, $t7 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 15)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d5a8) {
            ctx->pc = 0x12D5C0u;
            goto label_12d5c0;
        }
    }
    ctx->pc = 0x12D5B0u;
    // 0x12d5b0: 0x14890009  bne         $a0, $t1, . + 4 + (0x9 << 2)
    ctx->pc = 0x12D5B0u;
    {
        const bool branch_taken_0x12d5b0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 9));
        ctx->pc = 0x12D5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D5B0u;
        // 0x12d5b4: 0x30b782b  sltu        $t7, $t8, $t3 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 24) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d5b0) {
            ctx->pc = 0x12D5D8u;
            goto label_12d5d8;
        }
    }
    ctx->pc = 0x12D5B8u;
    // 0x12d5b8: 0x11e00007  beqz        $t7, . + 4 + (0x7 << 2)
    ctx->pc = 0x12D5B8u;
    {
        const bool branch_taken_0x12d5b8 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x12d5b8) {
            ctx->pc = 0x12D5D8u;
            goto label_12d5d8;
        }
    }
    ctx->pc = 0x12D5C0u;
label_12d5c0:
    // 0x12d5c0: 0x1656823  subu        $t5, $t3, $a1
    ctx->pc = 0x12d5c0u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 5)));
    // 0x12d5c4: 0x8a7023  subu        $t6, $a0, $t2
    ctx->pc = 0x12d5c4u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x12d5c8: 0x16d782b  sltu        $t7, $t3, $t5
    ctx->pc = 0x12d5c8u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x12d5cc: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x12d5ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x12d5d0: 0x1cf2023  subu        $a0, $t6, $t7
    ctx->pc = 0x12d5d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 15)));
    // 0x12d5d4: 0x1a0582d  daddu       $t3, $t5, $zero
    ctx->pc = 0x12d5d4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
label_12d5d8:
    // 0x12d5d8: 0x1220fed0  beqz        $s1, . + 4 + (-0x130 << 2)
    ctx->pc = 0x12D5D8u;
    {
        const bool branch_taken_0x12d5d8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D5D8u;
        // 0x12d5dc: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d5d8) {
            ctx->pc = 0x12D11Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12d11c;
        }
    }
    ctx->pc = 0x12D5E0u;
    // 0x12d5e0: 0x30b6823  subu        $t5, $t8, $t3
    ctx->pc = 0x12d5e0u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 24), GPR_U32(ctx, 11)));
    // 0x12d5e4: 0xc46023  subu        $t4, $a2, $a0
    ctx->pc = 0x12d5e4u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x12d5e8: 0x30d702b  sltu        $t6, $t8, $t5
    ctx->pc = 0x12d5e8u;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 24) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x12d5ec: 0x18e4823  subu        $t1, $t4, $t6
    ctx->pc = 0x12d5ecu;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 14)));
    // 0x12d5f0: 0x32d6806  srlv        $t5, $t5, $t9
    ctx->pc = 0x12d5f0u;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 13), GPR_U32(ctx, 25) & 0x1F));
    // 0x12d5f4: 0x2097804  sllv        $t7, $t1, $s0
    ctx->pc = 0x12d5f4u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 16) & 0x1F));
    // 0x12d5f8: 0x240effff  addiu       $t6, $zero, -0x1
    ctx->pc = 0x12d5f8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12d5fc: 0xe703c  dsll32      $t6, $t6, 0
    ctx->pc = 0x12d5fcu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << (32 + 0));
    // 0x12d600: 0x1ed7825  or          $t7, $t7, $t5
    ctx->pc = 0x12d600u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 13));
    // 0x12d604: 0x10e4024  and         $t0, $t0, $t6
    ctx->pc = 0x12d604u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 14));
    // 0x12d608: 0xf783c  dsll32      $t7, $t7, 0
    ctx->pc = 0x12d608u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 0));
    // 0x12d60c: 0x3297006  srlv        $t6, $t1, $t9
    ctx->pc = 0x12d60cu;
    SET_GPR_S32(ctx, 14, (int32_t)SRL32(GPR_U32(ctx, 9), GPR_U32(ctx, 25) & 0x1F));
    // 0x12d610: 0xf783e  dsrl32      $t7, $t7, 0
    ctx->pc = 0x12d610u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) >> (32 + 0));
    // 0x12d614: 0xe703c  dsll32      $t6, $t6, 0
    ctx->pc = 0x12d614u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << (32 + 0));
    // 0x12d618: 0x1000ff8f  b           . + 4 + (-0x71 << 2)
    ctx->pc = 0x12D618u;
    {
        const bool branch_taken_0x12d618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D618u;
        // 0x12d61c: 0x10f4025  or          $t0, $t0, $t7 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d618) {
            ctx->pc = 0x12D458u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12d458;
        }
    }
    ctx->pc = 0x12D620u;
label_12d620:
    // 0x12d620: 0x240e0010  addiu       $t6, $zero, 0x10
    ctx->pc = 0x12d620u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x12d624: 0x35efffff  ori         $t7, $t7, 0xFFFF
    ctx->pc = 0x12d624u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)65535);
    // 0x12d628: 0x240d0018  addiu       $t5, $zero, 0x18
    ctx->pc = 0x12d628u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x12d62c: 0x1ea782b  sltu        $t7, $t7, $t2
    ctx->pc = 0x12d62cu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x12d630: 0x1c0602d  daddu       $t4, $t6, $zero
    ctx->pc = 0x12d630u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d634: 0x1000ff69  b           . + 4 + (-0x97 << 2)
    ctx->pc = 0x12D634u;
    {
        const bool branch_taken_0x12d634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D634u;
        // 0x12d638: 0x1af600b  movn        $t4, $t5, $t7 (Delay Slot)
        if (GPR_U64(ctx, 15) != 0) SET_GPR_VEC(ctx, 12, GPR_VEC(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d634) {
            ctx->pc = 0x12D3DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12d3dc;
        }
    }
    ctx->pc = 0x12D63Cu;
}
