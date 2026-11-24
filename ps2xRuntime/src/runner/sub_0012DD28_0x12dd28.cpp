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

// Function: sub_0012DD28
// Address: 0x12dd28 - 0x12e3d4
void sub_0012DD28_0x12dd28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012DD28_0x12dd28");
#endif

    switch (ctx->pc) {
        case 0x12dd80u: goto label_12dd80;
        case 0x12de88u: goto label_12de88;
        case 0x12deb0u: goto label_12deb0;
        case 0x12deb4u: goto label_12deb4;
        case 0x12df48u: goto label_12df48;
        case 0x12df80u: goto label_12df80;
        case 0x12e174u: goto label_12e174;
        case 0x12e1f0u: goto label_12e1f0;
        default: break;
    }

    ctx->pc = 0x12dd28u;

    // 0x12dd28: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12dd28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12dd2c: 0x5503f  dsra32      $t2, $a1, 0
    ctx->pc = 0x12dd2cu;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x12dd30: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x12dd30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x12dd34: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x12dd34u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x12dd38: 0x4c03c  dsll32      $t8, $a0, 0
    ctx->pc = 0x12dd38u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 4) << (32 + 0));
    // 0x12dd3c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12dd3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12dd40: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x12dd40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x12dd44: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x12dd44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dd48: 0x4483f  dsra32      $t1, $a0, 0
    ctx->pc = 0x12dd48u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x12dd4c: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x12dd4cu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x12dd50: 0x154000fd  bnez        $t2, . + 4 + (0xFD << 2)
    ctx->pc = 0x12DD50u;
    {
        const bool branch_taken_0x12dd50 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x12DD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DD50u;
        // 0x12dd54: 0x18c03f  dsra32      $t8, $t8, 0 (Delay Slot)
        SET_GPR_S64(ctx, 24, GPR_S64(ctx, 24) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12dd50) {
            ctx->pc = 0x12E148u;
            goto label_12e148;
        }
    }
    ctx->pc = 0x12DD58u;
    // 0x12dd58: 0x125782b  sltu        $t7, $t1, $a1
    ctx->pc = 0x12dd58u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x12dd5c: 0x11e0006b  beqz        $t7, . + 4 + (0x6B << 2)
    ctx->pc = 0x12DD5Cu;
    {
        const bool branch_taken_0x12dd5c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DD5Cu;
        // 0x12dd60: 0x340fffff  ori         $t7, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12dd5c) {
            ctx->pc = 0x12DF0Cu;
            goto label_12df0c;
        }
    }
    ctx->pc = 0x12DD64u;
    // 0x12dd64: 0x1e5782b  sltu        $t7, $t7, $a1
    ctx->pc = 0x12dd64u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x12dd68: 0x15e00061  bnez        $t7, . + 4 + (0x61 << 2)
    ctx->pc = 0x12DD68u;
    {
        const bool branch_taken_0x12dd68 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12DD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DD68u;
        // 0x12dd6c: 0x3c0f00ff  lui         $t7, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12dd68) {
            ctx->pc = 0x12DEF0u;
            goto label_12def0;
        }
    }
    ctx->pc = 0x12DD70u;
    // 0x12dd70: 0x240f0008  addiu       $t7, $zero, 0x8
    ctx->pc = 0x12dd70u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x12dd74: 0x2cae0100  sltiu       $t6, $a1, 0x100
    ctx->pc = 0x12dd74u;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x12dd78: 0x1e0602d  daddu       $t4, $t7, $zero
    ctx->pc = 0x12dd78u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dd7c: 0xe600b  movn        $t4, $zero, $t6
    ctx->pc = 0x12dd7cu;
    if (GPR_U64(ctx, 14) != 0) SET_GPR_VEC(ctx, 12, GPR_VEC(ctx, 0));
label_12dd80:
    // 0x12dd80: 0x3c0e0066  lui         $t6, 0x66
    ctx->pc = 0x12dd80u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)102 << 16));
    // 0x12dd84: 0x1857806  srlv        $t7, $a1, $t4
    ctx->pc = 0x12dd84u;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 5), GPR_U32(ctx, 12) & 0x1F));
    // 0x12dd88: 0x25ce4478  addiu       $t6, $t6, 0x4478
    ctx->pc = 0x12dd88u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 17528));
    // 0x12dd8c: 0x240b0020  addiu       $t3, $zero, 0x20
    ctx->pc = 0x12dd8cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x12dd90: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x12dd90u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x12dd94: 0x91ed0000  lbu         $t5, 0x0($t7)
    ctx->pc = 0x12dd94u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x12dd98: 0x1ac6821  addu        $t5, $t5, $t4
    ctx->pc = 0x12dd98u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 12)));
    // 0x12dd9c: 0x16dc823  subu        $t9, $t3, $t5
    ctx->pc = 0x12dd9cu;
    SET_GPR_S32(ctx, 25, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 13)));
    // 0x12dda0: 0x13200006  beqz        $t9, . + 4 + (0x6 << 2)
    ctx->pc = 0x12DDA0u;
    {
        const bool branch_taken_0x12dda0 = (GPR_U64(ctx, 25) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DDA0u;
        // 0x12dda4: 0x1797823  subu        $t7, $t3, $t9 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 25)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12dda0) {
            ctx->pc = 0x12DDBCu;
            goto label_12ddbc;
        }
    }
    ctx->pc = 0x12DDA8u;
    // 0x12dda8: 0x3297004  sllv        $t6, $t1, $t9
    ctx->pc = 0x12dda8u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 25) & 0x1F));
    // 0x12ddac: 0x1f87806  srlv        $t7, $t8, $t7
    ctx->pc = 0x12ddacu;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 24), GPR_U32(ctx, 15) & 0x1F));
    // 0x12ddb0: 0x3252804  sllv        $a1, $a1, $t9
    ctx->pc = 0x12ddb0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 25) & 0x1F));
    // 0x12ddb4: 0x1cf4825  or          $t1, $t6, $t7
    ctx->pc = 0x12ddb4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 14) | GPR_U64(ctx, 15));
    // 0x12ddb8: 0x338c004  sllv        $t8, $t8, $t9
    ctx->pc = 0x12ddb8u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 24), GPR_U32(ctx, 25) & 0x1F));
label_12ddbc:
    // 0x12ddbc: 0x55c02  srl         $t3, $a1, 16
    ctx->pc = 0x12ddbcu;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
    // 0x12ddc0: 0x30a7ffff  andi        $a3, $a1, 0xFFFF
    ctx->pc = 0x12ddc0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x12ddc4: 0x12b001b  divu        $zero, $t1, $t3
    ctx->pc = 0x12ddc4u;
    { uint32_t divisor = GPR_U32(ctx, 11); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 9) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 9) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,9); } }
    // 0x12ddc8: 0x186c02  srl         $t5, $t8, 16
    ctx->pc = 0x12ddc8u;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 24), 16));
    // 0x12ddcc: 0x51600001  beql        $t3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x12DDCCu;
    {
        const bool branch_taken_0x12ddcc = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        if (branch_taken_0x12ddcc) {
            ctx->pc = 0x12DDD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12DDCCu;
            // 0x12ddd0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x12DDD4u;
            goto label_12ddd4;
        }
    }
    ctx->pc = 0x12DDD4u;
label_12ddd4:
    // 0x12ddd4: 0x7812  mflo        $t7
    ctx->pc = 0x12ddd4u;
    SET_GPR_U64(ctx, 15, ctx->lo);
    // 0x12ddd8: 0x7010  mfhi        $t6
    ctx->pc = 0x12ddd8u;
    SET_GPR_U64(ctx, 14, ctx->hi);
    // 0x12dddc: 0x6012  mflo        $t4
    ctx->pc = 0x12dddcu;
    SET_GPR_U64(ctx, 12, ctx->lo);
    // 0x12dde0: 0xe7400  sll         $t6, $t6, 16
    ctx->pc = 0x12dde0u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 16));
    // 0x12dde4: 0x1e75018  mult        $t2, $t7, $a3
    ctx->pc = 0x12dde4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x12dde8: 0x1cd7025  or          $t6, $t6, $t5
    ctx->pc = 0x12dde8u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 13));
    // 0x12ddec: 0x1ca782b  sltu        $t7, $t6, $t2
    ctx->pc = 0x12ddecu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x12ddf0: 0x51e0000b  beql        $t7, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x12DDF0u;
    {
        const bool branch_taken_0x12ddf0 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x12ddf0) {
            ctx->pc = 0x12DDF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12DDF0u;
            // 0x12ddf4: 0x1ca7023  subu        $t6, $t6, $t2 (Delay Slot)
            SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 10)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12DE20u;
            goto label_12de20;
        }
    }
    ctx->pc = 0x12DDF8u;
    // 0x12ddf8: 0x1c57021  addu        $t6, $t6, $a1
    ctx->pc = 0x12ddf8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 5)));
    // 0x12ddfc: 0x1c5782b  sltu        $t7, $t6, $a1
    ctx->pc = 0x12ddfcu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x12de00: 0x15e00006  bnez        $t7, . + 4 + (0x6 << 2)
    ctx->pc = 0x12DE00u;
    {
        const bool branch_taken_0x12de00 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12DE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DE00u;
        // 0x12de04: 0x258cffff  addiu       $t4, $t4, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12de00) {
            ctx->pc = 0x12DE1Cu;
            goto label_12de1c;
        }
    }
    ctx->pc = 0x12DE08u;
    // 0x12de08: 0x1ca782b  sltu        $t7, $t6, $t2
    ctx->pc = 0x12de08u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x12de0c: 0x51e00004  beql        $t7, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x12DE0Cu;
    {
        const bool branch_taken_0x12de0c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x12de0c) {
            ctx->pc = 0x12DE10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12DE0Cu;
            // 0x12de10: 0x1ca7023  subu        $t6, $t6, $t2 (Delay Slot)
            SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 10)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12DE20u;
            goto label_12de20;
        }
    }
    ctx->pc = 0x12DE14u;
    // 0x12de14: 0x258cffff  addiu       $t4, $t4, -0x1
    ctx->pc = 0x12de14u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
    // 0x12de18: 0x1c57021  addu        $t6, $t6, $a1
    ctx->pc = 0x12de18u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 5)));
label_12de1c:
    // 0x12de1c: 0x1ca7023  subu        $t6, $t6, $t2
    ctx->pc = 0x12de1cu;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 10)));
label_12de20:
    // 0x12de20: 0x330dffff  andi        $t5, $t8, 0xFFFF
    ctx->pc = 0x12de20u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 24) & (uint64_t)(uint16_t)65535);
    // 0x12de24: 0x1cb001b  divu        $zero, $t6, $t3
    ctx->pc = 0x12de24u;
    { uint32_t divisor = GPR_U32(ctx, 11); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,14); } }
    // 0x12de28: 0x51600001  beql        $t3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x12DE28u;
    {
        const bool branch_taken_0x12de28 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        if (branch_taken_0x12de28) {
            ctx->pc = 0x12DE2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12DE28u;
            // 0x12de2c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x12DE30u;
            goto label_12de30;
        }
    }
    ctx->pc = 0x12DE30u;
label_12de30:
    // 0x12de30: 0x7812  mflo        $t7
    ctx->pc = 0x12de30u;
    SET_GPR_U64(ctx, 15, ctx->lo);
    // 0x12de34: 0x7010  mfhi        $t6
    ctx->pc = 0x12de34u;
    SET_GPR_U64(ctx, 14, ctx->hi);
    // 0x12de38: 0x5812  mflo        $t3
    ctx->pc = 0x12de38u;
    SET_GPR_U64(ctx, 11, ctx->lo);
    // 0x12de3c: 0xe7400  sll         $t6, $t6, 16
    ctx->pc = 0x12de3cu;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 16));
    // 0x12de40: 0x1e75018  mult        $t2, $t7, $a3
    ctx->pc = 0x12de40u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x12de44: 0x1cd2025  or          $a0, $t6, $t5
    ctx->pc = 0x12de44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 14) | GPR_U64(ctx, 13));
    // 0x12de48: 0x8a782b  sltu        $t7, $a0, $t2
    ctx->pc = 0x12de48u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x12de4c: 0x11e0000b  beqz        $t7, . + 4 + (0xB << 2)
    ctx->pc = 0x12DE4Cu;
    {
        const bool branch_taken_0x12de4c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DE4Cu;
        // 0x12de50: 0xc7c00  sll         $t7, $t4, 16 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 12), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12de4c) {
            ctx->pc = 0x12DE7Cu;
            goto label_12de7c;
        }
    }
    ctx->pc = 0x12DE54u;
    // 0x12de54: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x12de54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x12de58: 0x85782b  sltu        $t7, $a0, $a1
    ctx->pc = 0x12de58u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x12de5c: 0x15e00006  bnez        $t7, . + 4 + (0x6 << 2)
    ctx->pc = 0x12DE5Cu;
    {
        const bool branch_taken_0x12de5c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12DE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DE5Cu;
        // 0x12de60: 0x256bffff  addiu       $t3, $t3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12de5c) {
            ctx->pc = 0x12DE78u;
            goto label_12de78;
        }
    }
    ctx->pc = 0x12DE64u;
    // 0x12de64: 0x8a782b  sltu        $t7, $a0, $t2
    ctx->pc = 0x12de64u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x12de68: 0x11e00004  beqz        $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x12DE68u;
    {
        const bool branch_taken_0x12de68 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DE68u;
        // 0x12de6c: 0xc7c00  sll         $t7, $t4, 16 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 12), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12de68) {
            ctx->pc = 0x12DE7Cu;
            goto label_12de7c;
        }
    }
    ctx->pc = 0x12DE70u;
    // 0x12de70: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x12de70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x12de74: 0x256bffff  addiu       $t3, $t3, -0x1
    ctx->pc = 0x12de74u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
label_12de78:
    // 0x12de78: 0xc7c00  sll         $t7, $t4, 16
    ctx->pc = 0x12de78u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 12), 16));
label_12de7c:
    // 0x12de7c: 0x8ac023  subu        $t8, $a0, $t2
    ctx->pc = 0x12de7cu;
    SET_GPR_S32(ctx, 24, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x12de80: 0x1eb3825  or          $a3, $t7, $t3
    ctx->pc = 0x12de80u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 15) | GPR_U64(ctx, 11));
    // 0x12de84: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x12de84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12de88:
    // 0x12de88: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x12DE88u;
    {
        const bool branch_taken_0x12de88 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DE88u;
        // 0x12de8c: 0x3387806  srlv        $t7, $t8, $t9 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 24), GPR_U32(ctx, 25) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12de88) {
            ctx->pc = 0x12DEB4u;
            goto label_12deb4;
        }
    }
    ctx->pc = 0x12DE90u;
    // 0x12de90: 0x240effff  addiu       $t6, $zero, -0x1
    ctx->pc = 0x12de90u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12de94: 0xf783c  dsll32      $t7, $t7, 0
    ctx->pc = 0x12de94u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 0));
    // 0x12de98: 0xe703c  dsll32      $t6, $t6, 0
    ctx->pc = 0x12de98u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << (32 + 0));
    // 0x12de9c: 0x10e4024  and         $t0, $t0, $t6
    ctx->pc = 0x12de9cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 14));
    // 0x12dea0: 0xf783e  dsrl32      $t7, $t7, 0
    ctx->pc = 0x12dea0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) >> (32 + 0));
    // 0x12dea4: 0x10f4025  or          $t0, $t0, $t7
    ctx->pc = 0x12dea4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 15));
    // 0x12dea8: 0x8403c  dsll32      $t0, $t0, 0
    ctx->pc = 0x12dea8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 0));
    // 0x12deac: 0x8403e  dsrl32      $t0, $t0, 0
    ctx->pc = 0x12deacu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) >> (32 + 0));
label_12deb0:
    // 0x12deb0: 0xfe280000  sd          $t0, 0x0($s1)
    ctx->pc = 0x12deb0u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 8));
label_12deb4:
    // 0x12deb4: 0x240effff  addiu       $t6, $zero, -0x1
    ctx->pc = 0x12deb4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12deb8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12deb8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12debc: 0x7783c  dsll32      $t7, $a3, 0
    ctx->pc = 0x12debcu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 7) << (32 + 0));
    // 0x12dec0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x12dec0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12dec4: 0xe703c  dsll32      $t6, $t6, 0
    ctx->pc = 0x12dec4u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << (32 + 0));
    // 0x12dec8: 0xf783e  dsrl32      $t7, $t7, 0
    ctx->pc = 0x12dec8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) >> (32 + 0));
    // 0x12decc: 0x4e1024  and         $v0, $v0, $t6
    ctx->pc = 0x12deccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 14));
    // 0x12ded0: 0x4f1025  or          $v0, $v0, $t7
    ctx->pc = 0x12ded0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 15));
    // 0x12ded4: 0x12703c  dsll32      $t6, $s2, 0
    ctx->pc = 0x12ded4u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 18) << (32 + 0));
    // 0x12ded8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x12ded8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x12dedc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x12dedcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12dee0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x12dee0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x12dee4: 0x4e1025  or          $v0, $v0, $t6
    ctx->pc = 0x12dee4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 14));
    // 0x12dee8: 0x3e00008  jr          $ra
    ctx->pc = 0x12DEE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12DEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DEE8u;
        // 0x12deec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12DEE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12DEF0u;
label_12def0:
    // 0x12def0: 0x240e0010  addiu       $t6, $zero, 0x10
    ctx->pc = 0x12def0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x12def4: 0x35efffff  ori         $t7, $t7, 0xFFFF
    ctx->pc = 0x12def4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)65535);
    // 0x12def8: 0x240d0018  addiu       $t5, $zero, 0x18
    ctx->pc = 0x12def8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x12defc: 0x1e5782b  sltu        $t7, $t7, $a1
    ctx->pc = 0x12defcu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x12df00: 0x1c0602d  daddu       $t4, $t6, $zero
    ctx->pc = 0x12df00u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12df04: 0x1000ff9e  b           . + 4 + (-0x62 << 2)
    ctx->pc = 0x12DF04u;
    {
        const bool branch_taken_0x12df04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DF04u;
        // 0x12df08: 0x1af600b  movn        $t4, $t5, $t7 (Delay Slot)
        if (GPR_U64(ctx, 15) != 0) SET_GPR_VEC(ctx, 12, GPR_VEC(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12df04) {
            ctx->pc = 0x12DD80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12dd80;
        }
    }
    ctx->pc = 0x12DF0Cu;
label_12df0c:
    // 0x12df0c: 0x14a00008  bnez        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x12DF0Cu;
    {
        const bool branch_taken_0x12df0c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x12DF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DF0Cu;
        // 0x12df10: 0x1e5782b  sltu        $t7, $t7, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12df0c) {
            ctx->pc = 0x12DF30u;
            goto label_12df30;
        }
    }
    ctx->pc = 0x12DF14u;
    // 0x12df14: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x12df14u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12df18: 0x1ea001b  divu        $zero, $t7, $t2
    ctx->pc = 0x12df18u;
    { uint32_t divisor = GPR_U32(ctx, 10); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 15) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 15) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,15); } }
    // 0x12df1c: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x12DF1Cu;
    {
        const bool branch_taken_0x12df1c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x12df1c) {
            ctx->pc = 0x12DF20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12DF1Cu;
            // 0x12df20: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x12DF24u;
            goto label_12df24;
        }
    }
    ctx->pc = 0x12DF24u;
label_12df24:
    // 0x12df24: 0x2812  mflo        $a1
    ctx->pc = 0x12df24u;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x12df28: 0x340fffff  ori         $t7, $zero, 0xFFFF
    ctx->pc = 0x12df28u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x12df2c: 0x1e5782b  sltu        $t7, $t7, $a1
    ctx->pc = 0x12df2cu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_12df30:
    // 0x12df30: 0x15e0007e  bnez        $t7, . + 4 + (0x7E << 2)
    ctx->pc = 0x12DF30u;
    {
        const bool branch_taken_0x12df30 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12DF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DF30u;
        // 0x12df34: 0x3c0f00ff  lui         $t7, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12df30) {
            ctx->pc = 0x12E12Cu;
            goto label_12e12c;
        }
    }
    ctx->pc = 0x12DF38u;
    // 0x12df38: 0x240f0008  addiu       $t7, $zero, 0x8
    ctx->pc = 0x12df38u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x12df3c: 0x2cae0100  sltiu       $t6, $a1, 0x100
    ctx->pc = 0x12df3cu;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x12df40: 0x1e0602d  daddu       $t4, $t7, $zero
    ctx->pc = 0x12df40u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12df44: 0xe600b  movn        $t4, $zero, $t6
    ctx->pc = 0x12df44u;
    if (GPR_U64(ctx, 14) != 0) SET_GPR_VEC(ctx, 12, GPR_VEC(ctx, 0));
label_12df48:
    // 0x12df48: 0x3c0e0066  lui         $t6, 0x66
    ctx->pc = 0x12df48u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)102 << 16));
    // 0x12df4c: 0x1857806  srlv        $t7, $a1, $t4
    ctx->pc = 0x12df4cu;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 5), GPR_U32(ctx, 12) & 0x1F));
    // 0x12df50: 0x25ce4478  addiu       $t6, $t6, 0x4478
    ctx->pc = 0x12df50u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 17528));
    // 0x12df54: 0x240b0020  addiu       $t3, $zero, 0x20
    ctx->pc = 0x12df54u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x12df58: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x12df58u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x12df5c: 0x91ed0000  lbu         $t5, 0x0($t7)
    ctx->pc = 0x12df5cu;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x12df60: 0x1ac6821  addu        $t5, $t5, $t4
    ctx->pc = 0x12df60u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 12)));
    // 0x12df64: 0x16dc823  subu        $t9, $t3, $t5
    ctx->pc = 0x12df64u;
    SET_GPR_S32(ctx, 25, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 13)));
    // 0x12df68: 0x17200036  bnez        $t9, . + 4 + (0x36 << 2)
    ctx->pc = 0x12DF68u;
    {
        const bool branch_taken_0x12df68 = (GPR_U64(ctx, 25) != GPR_U64(ctx, 0));
        ctx->pc = 0x12DF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DF68u;
        // 0x12df6c: 0x1798023  subu        $s0, $t3, $t9 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 25)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12df68) {
            ctx->pc = 0x12E044u;
            goto label_12e044;
        }
    }
    ctx->pc = 0x12DF70u;
    // 0x12df70: 0x1254823  subu        $t1, $t1, $a1
    ctx->pc = 0x12df70u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
    // 0x12df74: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x12df74u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12df78: 0x55402  srl         $t2, $a1, 16
    ctx->pc = 0x12df78u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
    // 0x12df7c: 0x30a3ffff  andi        $v1, $a1, 0xFFFF
    ctx->pc = 0x12df7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
label_12df80:
    // 0x12df80: 0x12a001b  divu        $zero, $t1, $t2
    ctx->pc = 0x12df80u;
    { uint32_t divisor = GPR_U32(ctx, 10); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 9) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 9) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,9); } }
    // 0x12df84: 0x186402  srl         $t4, $t8, 16
    ctx->pc = 0x12df84u;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 24), 16));
    // 0x12df88: 0x51400001  beql        $t2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x12DF88u;
    {
        const bool branch_taken_0x12df88 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x12df88) {
            ctx->pc = 0x12DF8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12DF88u;
            // 0x12df8c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x12DF90u;
            goto label_12df90;
        }
    }
    ctx->pc = 0x12DF90u;
label_12df90:
    // 0x12df90: 0x7010  mfhi        $t6
    ctx->pc = 0x12df90u;
    SET_GPR_U64(ctx, 14, ctx->hi);
    // 0x12df94: 0x6812  mflo        $t5
    ctx->pc = 0x12df94u;
    SET_GPR_U64(ctx, 13, ctx->lo);
    // 0x12df98: 0x4812  mflo        $t1
    ctx->pc = 0x12df98u;
    SET_GPR_U64(ctx, 9, ctx->lo);
    // 0x12df9c: 0xe7400  sll         $t6, $t6, 16
    ctx->pc = 0x12df9cu;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 16));
    // 0x12dfa0: 0x1a35818  mult        $t3, $t5, $v1
    ctx->pc = 0x12dfa0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x12dfa4: 0x1cc7025  or          $t6, $t6, $t4
    ctx->pc = 0x12dfa4u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 12));
    // 0x12dfa8: 0x1cb782b  sltu        $t7, $t6, $t3
    ctx->pc = 0x12dfa8u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x12dfac: 0x51e0000b  beql        $t7, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x12DFACu;
    {
        const bool branch_taken_0x12dfac = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x12dfac) {
            ctx->pc = 0x12DFB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12DFACu;
            // 0x12dfb0: 0x1cb7023  subu        $t6, $t6, $t3 (Delay Slot)
            SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 11)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12DFDCu;
            goto label_12dfdc;
        }
    }
    ctx->pc = 0x12DFB4u;
    // 0x12dfb4: 0x1c57021  addu        $t6, $t6, $a1
    ctx->pc = 0x12dfb4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 5)));
    // 0x12dfb8: 0x1c5782b  sltu        $t7, $t6, $a1
    ctx->pc = 0x12dfb8u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x12dfbc: 0x15e00006  bnez        $t7, . + 4 + (0x6 << 2)
    ctx->pc = 0x12DFBCu;
    {
        const bool branch_taken_0x12dfbc = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12DFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DFBCu;
        // 0x12dfc0: 0x25a9ffff  addiu       $t1, $t5, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12dfbc) {
            ctx->pc = 0x12DFD8u;
            goto label_12dfd8;
        }
    }
    ctx->pc = 0x12DFC4u;
    // 0x12dfc4: 0x1cb782b  sltu        $t7, $t6, $t3
    ctx->pc = 0x12dfc4u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x12dfc8: 0x51e00004  beql        $t7, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x12DFC8u;
    {
        const bool branch_taken_0x12dfc8 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x12dfc8) {
            ctx->pc = 0x12DFCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12DFC8u;
            // 0x12dfcc: 0x1cb7023  subu        $t6, $t6, $t3 (Delay Slot)
            SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 11)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12DFDCu;
            goto label_12dfdc;
        }
    }
    ctx->pc = 0x12DFD0u;
    // 0x12dfd0: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x12dfd0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x12dfd4: 0x1c57021  addu        $t6, $t6, $a1
    ctx->pc = 0x12dfd4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 5)));
label_12dfd8:
    // 0x12dfd8: 0x1cb7023  subu        $t6, $t6, $t3
    ctx->pc = 0x12dfd8u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 11)));
label_12dfdc:
    // 0x12dfdc: 0x330dffff  andi        $t5, $t8, 0xFFFF
    ctx->pc = 0x12dfdcu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 24) & (uint64_t)(uint16_t)65535);
    // 0x12dfe0: 0x1ca001b  divu        $zero, $t6, $t2
    ctx->pc = 0x12dfe0u;
    { uint32_t divisor = GPR_U32(ctx, 10); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,14); } }
    // 0x12dfe4: 0x51400001  beql        $t2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x12DFE4u;
    {
        const bool branch_taken_0x12dfe4 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x12dfe4) {
            ctx->pc = 0x12DFE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12DFE4u;
            // 0x12dfe8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x12DFECu;
            goto label_12dfec;
        }
    }
    ctx->pc = 0x12DFECu;
label_12dfec:
    // 0x12dfec: 0x7812  mflo        $t7
    ctx->pc = 0x12dfecu;
    SET_GPR_U64(ctx, 15, ctx->lo);
    // 0x12dff0: 0x7010  mfhi        $t6
    ctx->pc = 0x12dff0u;
    SET_GPR_U64(ctx, 14, ctx->hi);
    // 0x12dff4: 0x5012  mflo        $t2
    ctx->pc = 0x12dff4u;
    SET_GPR_U64(ctx, 10, ctx->lo);
    // 0x12dff8: 0xe7400  sll         $t6, $t6, 16
    ctx->pc = 0x12dff8u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 16));
    // 0x12dffc: 0x1e35818  mult        $t3, $t7, $v1
    ctx->pc = 0x12dffcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x12e000: 0x1cd2025  or          $a0, $t6, $t5
    ctx->pc = 0x12e000u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 14) | GPR_U64(ctx, 13));
    // 0x12e004: 0x8b782b  sltu        $t7, $a0, $t3
    ctx->pc = 0x12e004u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x12e008: 0x11e0000b  beqz        $t7, . + 4 + (0xB << 2)
    ctx->pc = 0x12E008u;
    {
        const bool branch_taken_0x12e008 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E008u;
        // 0x12e00c: 0x97c00  sll         $t7, $t1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 9), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e008) {
            ctx->pc = 0x12E038u;
            goto label_12e038;
        }
    }
    ctx->pc = 0x12E010u;
    // 0x12e010: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x12e010u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x12e014: 0x85782b  sltu        $t7, $a0, $a1
    ctx->pc = 0x12e014u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x12e018: 0x15e00006  bnez        $t7, . + 4 + (0x6 << 2)
    ctx->pc = 0x12E018u;
    {
        const bool branch_taken_0x12e018 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12E01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E018u;
        // 0x12e01c: 0x254affff  addiu       $t2, $t2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e018) {
            ctx->pc = 0x12E034u;
            goto label_12e034;
        }
    }
    ctx->pc = 0x12E020u;
    // 0x12e020: 0x8b782b  sltu        $t7, $a0, $t3
    ctx->pc = 0x12e020u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x12e024: 0x11e00004  beqz        $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x12E024u;
    {
        const bool branch_taken_0x12e024 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E024u;
        // 0x12e028: 0x97c00  sll         $t7, $t1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 9), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e024) {
            ctx->pc = 0x12E038u;
            goto label_12e038;
        }
    }
    ctx->pc = 0x12E02Cu;
    // 0x12e02c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x12e02cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x12e030: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x12e030u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
label_12e034:
    // 0x12e034: 0x97c00  sll         $t7, $t1, 16
    ctx->pc = 0x12e034u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 9), 16));
label_12e038:
    // 0x12e038: 0x8bc023  subu        $t8, $a0, $t3
    ctx->pc = 0x12e038u;
    SET_GPR_S32(ctx, 24, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
    // 0x12e03c: 0x1000ff92  b           . + 4 + (-0x6E << 2)
    ctx->pc = 0x12E03Cu;
    {
        const bool branch_taken_0x12e03c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E03Cu;
        // 0x12e040: 0x1ea3825  or          $a3, $t7, $t2 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 15) | GPR_U64(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e03c) {
            ctx->pc = 0x12DE88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12de88;
        }
    }
    ctx->pc = 0x12E044u;
label_12e044:
    // 0x12e044: 0x3252804  sllv        $a1, $a1, $t9
    ctx->pc = 0x12e044u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 25) & 0x1F));
    // 0x12e048: 0x55402  srl         $t2, $a1, 16
    ctx->pc = 0x12e048u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
    // 0x12e04c: 0x2096006  srlv        $t4, $t1, $s0
    ctx->pc = 0x12e04cu;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 9), GPR_U32(ctx, 16) & 0x1F));
    // 0x12e050: 0x18a001b  divu        $zero, $t4, $t2
    ctx->pc = 0x12e050u;
    { uint32_t divisor = GPR_U32(ctx, 10); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 12) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 12) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,12); } }
    // 0x12e054: 0x30a3ffff  andi        $v1, $a1, 0xFFFF
    ctx->pc = 0x12e054u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x12e058: 0x2187006  srlv        $t6, $t8, $s0
    ctx->pc = 0x12e058u;
    SET_GPR_S32(ctx, 14, (int32_t)SRL32(GPR_U32(ctx, 24), GPR_U32(ctx, 16) & 0x1F));
    // 0x12e05c: 0x3297804  sllv        $t7, $t1, $t9
    ctx->pc = 0x12e05cu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 25) & 0x1F));
    // 0x12e060: 0x1ee4825  or          $t1, $t7, $t6
    ctx->pc = 0x12e060u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 15) | GPR_U64(ctx, 14));
    // 0x12e064: 0x140382d  daddu       $a3, $t2, $zero
    ctx->pc = 0x12e064u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e068: 0x97402  srl         $t6, $t1, 16
    ctx->pc = 0x12e068u;
    SET_GPR_S32(ctx, 14, (int32_t)SRL32(GPR_U32(ctx, 9), 16));
    // 0x12e06c: 0x338c004  sllv        $t8, $t8, $t9
    ctx->pc = 0x12e06cu;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 24), GPR_U32(ctx, 25) & 0x1F));
    // 0x12e070: 0x51400001  beql        $t2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x12E070u;
    {
        const bool branch_taken_0x12e070 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x12e070) {
            ctx->pc = 0x12E074u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12E070u;
            // 0x12e074: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x12E078u;
            goto label_12e078;
        }
    }
    ctx->pc = 0x12E078u;
label_12e078:
    // 0x12e078: 0x6810  mfhi        $t5
    ctx->pc = 0x12e078u;
    SET_GPR_U64(ctx, 13, ctx->hi);
    // 0x12e07c: 0x6012  mflo        $t4
    ctx->pc = 0x12e07cu;
    SET_GPR_U64(ctx, 12, ctx->lo);
    // 0x12e080: 0x2012  mflo        $a0
    ctx->pc = 0x12e080u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x12e084: 0xd6c00  sll         $t5, $t5, 16
    ctx->pc = 0x12e084u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 13), 16));
    // 0x12e088: 0x1835818  mult        $t3, $t4, $v1
    ctx->pc = 0x12e088u;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x12e08c: 0x1ae7025  or          $t6, $t5, $t6
    ctx->pc = 0x12e08cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 13) | GPR_U64(ctx, 14));
    // 0x12e090: 0x1cb782b  sltu        $t7, $t6, $t3
    ctx->pc = 0x12e090u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x12e094: 0x11e0000a  beqz        $t7, . + 4 + (0xA << 2)
    ctx->pc = 0x12E094u;
    {
        const bool branch_taken_0x12e094 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E094u;
        // 0x12e098: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e094) {
            ctx->pc = 0x12E0C0u;
            goto label_12e0c0;
        }
    }
    ctx->pc = 0x12E09Cu;
    // 0x12e09c: 0x1c57021  addu        $t6, $t6, $a1
    ctx->pc = 0x12e09cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 5)));
    // 0x12e0a0: 0x1c5782b  sltu        $t7, $t6, $a1
    ctx->pc = 0x12e0a0u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x12e0a4: 0x15e00006  bnez        $t7, . + 4 + (0x6 << 2)
    ctx->pc = 0x12E0A4u;
    {
        const bool branch_taken_0x12e0a4 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12E0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E0A4u;
        // 0x12e0a8: 0x2584ffff  addiu       $a0, $t4, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e0a4) {
            ctx->pc = 0x12E0C0u;
            goto label_12e0c0;
        }
    }
    ctx->pc = 0x12E0ACu;
    // 0x12e0ac: 0x1cb782b  sltu        $t7, $t6, $t3
    ctx->pc = 0x12e0acu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x12e0b0: 0x51e00004  beql        $t7, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x12E0B0u;
    {
        const bool branch_taken_0x12e0b0 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x12e0b0) {
            ctx->pc = 0x12E0B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12E0B0u;
            // 0x12e0b4: 0x1cb7023  subu        $t6, $t6, $t3 (Delay Slot)
            SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 11)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12E0C4u;
            goto label_12e0c4;
        }
    }
    ctx->pc = 0x12E0B8u;
    // 0x12e0b8: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x12e0b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x12e0bc: 0x1c57021  addu        $t6, $t6, $a1
    ctx->pc = 0x12e0bcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 5)));
label_12e0c0:
    // 0x12e0c0: 0x1cb7023  subu        $t6, $t6, $t3
    ctx->pc = 0x12e0c0u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 11)));
label_12e0c4:
    // 0x12e0c4: 0x312dffff  andi        $t5, $t1, 0xFFFF
    ctx->pc = 0x12e0c4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
    // 0x12e0c8: 0x1c7001b  divu        $zero, $t6, $a3
    ctx->pc = 0x12e0c8u;
    { uint32_t divisor = GPR_U32(ctx, 7); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,14); } }
    // 0x12e0cc: 0x50e00001  beql        $a3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x12E0CCu;
    {
        const bool branch_taken_0x12e0cc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x12e0cc) {
            ctx->pc = 0x12E0D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12E0CCu;
            // 0x12e0d0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x12E0D4u;
            goto label_12e0d4;
        }
    }
    ctx->pc = 0x12E0D4u;
label_12e0d4:
    // 0x12e0d4: 0x7812  mflo        $t7
    ctx->pc = 0x12e0d4u;
    SET_GPR_U64(ctx, 15, ctx->lo);
    // 0x12e0d8: 0x7010  mfhi        $t6
    ctx->pc = 0x12e0d8u;
    SET_GPR_U64(ctx, 14, ctx->hi);
    // 0x12e0dc: 0x3812  mflo        $a3
    ctx->pc = 0x12e0dcu;
    SET_GPR_U64(ctx, 7, ctx->lo);
    // 0x12e0e0: 0xe7400  sll         $t6, $t6, 16
    ctx->pc = 0x12e0e0u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 16));
    // 0x12e0e4: 0x1e65818  mult        $t3, $t7, $a2
    ctx->pc = 0x12e0e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x12e0e8: 0x1cd6025  or          $t4, $t6, $t5
    ctx->pc = 0x12e0e8u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 14) | GPR_U64(ctx, 13));
    // 0x12e0ec: 0x18b782b  sltu        $t7, $t4, $t3
    ctx->pc = 0x12e0ecu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x12e0f0: 0x11e0000b  beqz        $t7, . + 4 + (0xB << 2)
    ctx->pc = 0x12E0F0u;
    {
        const bool branch_taken_0x12e0f0 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E0F0u;
        // 0x12e0f4: 0x47c00  sll         $t7, $a0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e0f0) {
            ctx->pc = 0x12E120u;
            goto label_12e120;
        }
    }
    ctx->pc = 0x12E0F8u;
    // 0x12e0f8: 0x1856021  addu        $t4, $t4, $a1
    ctx->pc = 0x12e0f8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 5)));
    // 0x12e0fc: 0x185782b  sltu        $t7, $t4, $a1
    ctx->pc = 0x12e0fcu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x12e100: 0x15e00006  bnez        $t7, . + 4 + (0x6 << 2)
    ctx->pc = 0x12E100u;
    {
        const bool branch_taken_0x12e100 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12E104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E100u;
        // 0x12e104: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e100) {
            ctx->pc = 0x12E11Cu;
            goto label_12e11c;
        }
    }
    ctx->pc = 0x12E108u;
    // 0x12e108: 0x18b782b  sltu        $t7, $t4, $t3
    ctx->pc = 0x12e108u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x12e10c: 0x11e00004  beqz        $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x12E10Cu;
    {
        const bool branch_taken_0x12e10c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E10Cu;
        // 0x12e110: 0x47c00  sll         $t7, $a0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e10c) {
            ctx->pc = 0x12E120u;
            goto label_12e120;
        }
    }
    ctx->pc = 0x12E114u;
    // 0x12e114: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x12e114u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x12e118: 0x1856021  addu        $t4, $t4, $a1
    ctx->pc = 0x12e118u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 5)));
label_12e11c:
    // 0x12e11c: 0x47c00  sll         $t7, $a0, 16
    ctx->pc = 0x12e11cu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
label_12e120:
    // 0x12e120: 0x18b4823  subu        $t1, $t4, $t3
    ctx->pc = 0x12e120u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 11)));
    // 0x12e124: 0x1000ff96  b           . + 4 + (-0x6A << 2)
    ctx->pc = 0x12E124u;
    {
        const bool branch_taken_0x12e124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E124u;
        // 0x12e128: 0x1e79025  or          $s2, $t7, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 15) | GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e124) {
            ctx->pc = 0x12DF80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12df80;
        }
    }
    ctx->pc = 0x12E12Cu;
label_12e12c:
    // 0x12e12c: 0x240e0010  addiu       $t6, $zero, 0x10
    ctx->pc = 0x12e12cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x12e130: 0x35efffff  ori         $t7, $t7, 0xFFFF
    ctx->pc = 0x12e130u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)65535);
    // 0x12e134: 0x240d0018  addiu       $t5, $zero, 0x18
    ctx->pc = 0x12e134u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x12e138: 0x1e5782b  sltu        $t7, $t7, $a1
    ctx->pc = 0x12e138u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x12e13c: 0x1c0602d  daddu       $t4, $t6, $zero
    ctx->pc = 0x12e13cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e140: 0x1000ff81  b           . + 4 + (-0x7F << 2)
    ctx->pc = 0x12E140u;
    {
        const bool branch_taken_0x12e140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E140u;
        // 0x12e144: 0x1af600b  movn        $t4, $t5, $t7 (Delay Slot)
        if (GPR_U64(ctx, 15) != 0) SET_GPR_VEC(ctx, 12, GPR_VEC(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e140) {
            ctx->pc = 0x12DF48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12df48;
        }
    }
    ctx->pc = 0x12E148u;
label_12e148:
    // 0x12e148: 0x12a782b  sltu        $t7, $t1, $t2
    ctx->pc = 0x12e148u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x12e14c: 0x15e0001f  bnez        $t7, . + 4 + (0x1F << 2)
    ctx->pc = 0x12E14Cu;
    {
        const bool branch_taken_0x12e14c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12E150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E14Cu;
        // 0x12e150: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e14c) {
            ctx->pc = 0x12E1CCu;
            goto label_12e1cc;
        }
    }
    ctx->pc = 0x12E154u;
    // 0x12e154: 0x340fffff  ori         $t7, $zero, 0xFFFF
    ctx->pc = 0x12e154u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x12e158: 0x1ea782b  sltu        $t7, $t7, $t2
    ctx->pc = 0x12e158u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x12e15c: 0x15e00096  bnez        $t7, . + 4 + (0x96 << 2)
    ctx->pc = 0x12E15Cu;
    {
        const bool branch_taken_0x12e15c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12E160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E15Cu;
        // 0x12e160: 0x3c0f00ff  lui         $t7, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e15c) {
            ctx->pc = 0x12E3B8u;
            goto label_12e3b8;
        }
    }
    ctx->pc = 0x12E164u;
    // 0x12e164: 0x240f0008  addiu       $t7, $zero, 0x8
    ctx->pc = 0x12e164u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x12e168: 0x2d4e0100  sltiu       $t6, $t2, 0x100
    ctx->pc = 0x12e168u;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x12e16c: 0x1e0602d  daddu       $t4, $t7, $zero
    ctx->pc = 0x12e16cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e170: 0xe600b  movn        $t4, $zero, $t6
    ctx->pc = 0x12e170u;
    if (GPR_U64(ctx, 14) != 0) SET_GPR_VEC(ctx, 12, GPR_VEC(ctx, 0));
label_12e174:
    // 0x12e174: 0x3c0e0066  lui         $t6, 0x66
    ctx->pc = 0x12e174u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)102 << 16));
    // 0x12e178: 0x18a7806  srlv        $t7, $t2, $t4
    ctx->pc = 0x12e178u;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 10), GPR_U32(ctx, 12) & 0x1F));
    // 0x12e17c: 0x25ce4478  addiu       $t6, $t6, 0x4478
    ctx->pc = 0x12e17cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 17528));
    // 0x12e180: 0x240b0020  addiu       $t3, $zero, 0x20
    ctx->pc = 0x12e180u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x12e184: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x12e184u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x12e188: 0x91ed0000  lbu         $t5, 0x0($t7)
    ctx->pc = 0x12e188u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x12e18c: 0x1ac6821  addu        $t5, $t5, $t4
    ctx->pc = 0x12e18cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 12)));
    // 0x12e190: 0x16dc823  subu        $t9, $t3, $t5
    ctx->pc = 0x12e190u;
    SET_GPR_S32(ctx, 25, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 13)));
    // 0x12e194: 0x1720001a  bnez        $t9, . + 4 + (0x1A << 2)
    ctx->pc = 0x12E194u;
    {
        const bool branch_taken_0x12e194 = (GPR_U64(ctx, 25) != GPR_U64(ctx, 0));
        ctx->pc = 0x12E198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E194u;
        // 0x12e198: 0x1798023  subu        $s0, $t3, $t9 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 25)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e194) {
            ctx->pc = 0x12E200u;
            goto label_12e200;
        }
    }
    ctx->pc = 0x12E19Cu;
    // 0x12e19c: 0x149782b  sltu        $t7, $t2, $t1
    ctx->pc = 0x12e19cu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x12e1a0: 0x15e00005  bnez        $t7, . + 4 + (0x5 << 2)
    ctx->pc = 0x12E1A0u;
    {
        const bool branch_taken_0x12e1a0 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12E1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E1A0u;
        // 0x12e1a4: 0x3056823  subu        $t5, $t8, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 24), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e1a0) {
            ctx->pc = 0x12E1B8u;
            goto label_12e1b8;
        }
    }
    ctx->pc = 0x12E1A8u;
    // 0x12e1a8: 0x305782b  sltu        $t7, $t8, $a1
    ctx->pc = 0x12e1a8u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 24) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x12e1ac: 0x15e00007  bnez        $t7, . + 4 + (0x7 << 2)
    ctx->pc = 0x12E1ACu;
    {
        const bool branch_taken_0x12e1ac = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12E1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E1ACu;
        // 0x12e1b0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e1ac) {
            ctx->pc = 0x12E1CCu;
            goto label_12e1cc;
        }
    }
    ctx->pc = 0x12E1B4u;
    // 0x12e1b4: 0x3056823  subu        $t5, $t8, $a1
    ctx->pc = 0x12e1b4u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 24), GPR_U32(ctx, 5)));
label_12e1b8:
    // 0x12e1b8: 0x12a7023  subu        $t6, $t1, $t2
    ctx->pc = 0x12e1b8u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x12e1bc: 0x30d782b  sltu        $t7, $t8, $t5
    ctx->pc = 0x12e1bcu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 24) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x12e1c0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x12e1c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12e1c4: 0x1cf4823  subu        $t1, $t6, $t7
    ctx->pc = 0x12e1c4u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 15)));
    // 0x12e1c8: 0x1a0c02d  daddu       $t8, $t5, $zero
    ctx->pc = 0x12e1c8u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
label_12e1cc:
    // 0x12e1cc: 0x1220ff39  beqz        $s1, . + 4 + (-0xC7 << 2)
    ctx->pc = 0x12E1CCu;
    {
        const bool branch_taken_0x12e1cc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E1CCu;
        // 0x12e1d0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e1cc) {
            ctx->pc = 0x12DEB4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12deb4;
        }
    }
    ctx->pc = 0x12E1D4u;
    // 0x12e1d4: 0x240effff  addiu       $t6, $zero, -0x1
    ctx->pc = 0x12e1d4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12e1d8: 0x18783c  dsll32      $t7, $t8, 0
    ctx->pc = 0x12e1d8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 24) << (32 + 0));
    // 0x12e1dc: 0xe703c  dsll32      $t6, $t6, 0
    ctx->pc = 0x12e1dcu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << (32 + 0));
    // 0x12e1e0: 0xf783e  dsrl32      $t7, $t7, 0
    ctx->pc = 0x12e1e0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) >> (32 + 0));
    // 0x12e1e4: 0x10e4024  and         $t0, $t0, $t6
    ctx->pc = 0x12e1e4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 14));
    // 0x12e1e8: 0x10f4025  or          $t0, $t0, $t7
    ctx->pc = 0x12e1e8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 15));
    // 0x12e1ec: 0x9703c  dsll32      $t6, $t1, 0
    ctx->pc = 0x12e1ecu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 9) << (32 + 0));
label_12e1f0:
    // 0x12e1f0: 0x8403c  dsll32      $t0, $t0, 0
    ctx->pc = 0x12e1f0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 0));
    // 0x12e1f4: 0x8403e  dsrl32      $t0, $t0, 0
    ctx->pc = 0x12e1f4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) >> (32 + 0));
    // 0x12e1f8: 0x1000ff2d  b           . + 4 + (-0xD3 << 2)
    ctx->pc = 0x12E1F8u;
    {
        const bool branch_taken_0x12e1f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E1F8u;
        // 0x12e1fc: 0x10e4025  or          $t0, $t0, $t6 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e1f8) {
            ctx->pc = 0x12DEB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12deb0;
        }
    }
    ctx->pc = 0x12E200u;
label_12e200:
    // 0x12e200: 0x32a7004  sllv        $t6, $t2, $t9
    ctx->pc = 0x12e200u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 25) & 0x1F));
    // 0x12e204: 0x2057806  srlv        $t7, $a1, $s0
    ctx->pc = 0x12e204u;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 5), GPR_U32(ctx, 16) & 0x1F));
    // 0x12e208: 0x2096006  srlv        $t4, $t1, $s0
    ctx->pc = 0x12e208u;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 9), GPR_U32(ctx, 16) & 0x1F));
    // 0x12e20c: 0x1cf5025  or          $t2, $t6, $t7
    ctx->pc = 0x12e20cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 14) | GPR_U64(ctx, 15));
    // 0x12e210: 0x3296804  sllv        $t5, $t1, $t9
    ctx->pc = 0x12e210u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 25) & 0x1F));
    // 0x12e214: 0xa5c02  srl         $t3, $t2, 16
    ctx->pc = 0x12e214u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 10), 16));
    // 0x12e218: 0x3146ffff  andi        $a2, $t2, 0xFFFF
    ctx->pc = 0x12e218u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
    // 0x12e21c: 0x18b001b  divu        $zero, $t4, $t3
    ctx->pc = 0x12e21cu;
    { uint32_t divisor = GPR_U32(ctx, 11); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 12) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 12) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,12); } }
    // 0x12e220: 0x2187806  srlv        $t7, $t8, $s0
    ctx->pc = 0x12e220u;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 24), GPR_U32(ctx, 16) & 0x1F));
    // 0x12e224: 0x1af4825  or          $t1, $t5, $t7
    ctx->pc = 0x12e224u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 13) | GPR_U64(ctx, 15));
    // 0x12e228: 0x3252804  sllv        $a1, $a1, $t9
    ctx->pc = 0x12e228u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 25) & 0x1F));
    // 0x12e22c: 0x96c02  srl         $t5, $t1, 16
    ctx->pc = 0x12e22cu;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 9), 16));
    // 0x12e230: 0x338c004  sllv        $t8, $t8, $t9
    ctx->pc = 0x12e230u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 24), GPR_U32(ctx, 25) & 0x1F));
    // 0x12e234: 0x51600001  beql        $t3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x12E234u;
    {
        const bool branch_taken_0x12e234 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        if (branch_taken_0x12e234) {
            ctx->pc = 0x12E238u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12E234u;
            // 0x12e238: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x12E23Cu;
            goto label_12e23c;
        }
    }
    ctx->pc = 0x12E23Cu;
label_12e23c:
    // 0x12e23c: 0x7010  mfhi        $t6
    ctx->pc = 0x12e23cu;
    SET_GPR_U64(ctx, 14, ctx->hi);
    // 0x12e240: 0x6012  mflo        $t4
    ctx->pc = 0x12e240u;
    SET_GPR_U64(ctx, 12, ctx->lo);
    // 0x12e244: 0x3812  mflo        $a3
    ctx->pc = 0x12e244u;
    SET_GPR_U64(ctx, 7, ctx->lo);
    // 0x12e248: 0xe7400  sll         $t6, $t6, 16
    ctx->pc = 0x12e248u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 16));
    // 0x12e24c: 0x1861818  mult        $v1, $t4, $a2
    ctx->pc = 0x12e24cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x12e250: 0x1cd7025  or          $t6, $t6, $t5
    ctx->pc = 0x12e250u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 13));
    // 0x12e254: 0x1c3782b  sltu        $t7, $t6, $v1
    ctx->pc = 0x12e254u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x12e258: 0x51e0000b  beql        $t7, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x12E258u;
    {
        const bool branch_taken_0x12e258 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x12e258) {
            ctx->pc = 0x12E25Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12E258u;
            // 0x12e25c: 0x1c37023  subu        $t6, $t6, $v1 (Delay Slot)
            SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 3)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12E288u;
            goto label_12e288;
        }
    }
    ctx->pc = 0x12E260u;
    // 0x12e260: 0x1ca7021  addu        $t6, $t6, $t2
    ctx->pc = 0x12e260u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 10)));
    // 0x12e264: 0x1ca782b  sltu        $t7, $t6, $t2
    ctx->pc = 0x12e264u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x12e268: 0x15e00006  bnez        $t7, . + 4 + (0x6 << 2)
    ctx->pc = 0x12E268u;
    {
        const bool branch_taken_0x12e268 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12E26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E268u;
        // 0x12e26c: 0x2587ffff  addiu       $a3, $t4, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e268) {
            ctx->pc = 0x12E284u;
            goto label_12e284;
        }
    }
    ctx->pc = 0x12E270u;
    // 0x12e270: 0x1c3782b  sltu        $t7, $t6, $v1
    ctx->pc = 0x12e270u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x12e274: 0x51e00004  beql        $t7, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x12E274u;
    {
        const bool branch_taken_0x12e274 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x12e274) {
            ctx->pc = 0x12E278u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12E274u;
            // 0x12e278: 0x1c37023  subu        $t6, $t6, $v1 (Delay Slot)
            SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 3)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12E288u;
            goto label_12e288;
        }
    }
    ctx->pc = 0x12E27Cu;
    // 0x12e27c: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x12e27cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x12e280: 0x1ca7021  addu        $t6, $t6, $t2
    ctx->pc = 0x12e280u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 10)));
label_12e284:
    // 0x12e284: 0x1c37023  subu        $t6, $t6, $v1
    ctx->pc = 0x12e284u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 3)));
label_12e288:
    // 0x12e288: 0x312dffff  andi        $t5, $t1, 0xFFFF
    ctx->pc = 0x12e288u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
    // 0x12e28c: 0x1cb001b  divu        $zero, $t6, $t3
    ctx->pc = 0x12e28cu;
    { uint32_t divisor = GPR_U32(ctx, 11); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,14); } }
    // 0x12e290: 0x51600001  beql        $t3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x12E290u;
    {
        const bool branch_taken_0x12e290 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        if (branch_taken_0x12e290) {
            ctx->pc = 0x12E294u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12E290u;
            // 0x12e294: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x12E298u;
            goto label_12e298;
        }
    }
    ctx->pc = 0x12E298u;
label_12e298:
    // 0x12e298: 0x7812  mflo        $t7
    ctx->pc = 0x12e298u;
    SET_GPR_U64(ctx, 15, ctx->lo);
    // 0x12e29c: 0x7010  mfhi        $t6
    ctx->pc = 0x12e29cu;
    SET_GPR_U64(ctx, 14, ctx->hi);
    // 0x12e2a0: 0x6012  mflo        $t4
    ctx->pc = 0x12e2a0u;
    SET_GPR_U64(ctx, 12, ctx->lo);
    // 0x12e2a4: 0xe7400  sll         $t6, $t6, 16
    ctx->pc = 0x12e2a4u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 16));
    // 0x12e2a8: 0x1e61818  mult        $v1, $t7, $a2
    ctx->pc = 0x12e2a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x12e2ac: 0x1cd3025  or          $a2, $t6, $t5
    ctx->pc = 0x12e2acu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 14) | GPR_U64(ctx, 13));
    // 0x12e2b0: 0xc3782b  sltu        $t7, $a2, $v1
    ctx->pc = 0x12e2b0u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x12e2b4: 0x11e0000b  beqz        $t7, . + 4 + (0xB << 2)
    ctx->pc = 0x12E2B4u;
    {
        const bool branch_taken_0x12e2b4 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E2B4u;
        // 0x12e2b8: 0x77c00  sll         $t7, $a3, 16 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e2b4) {
            ctx->pc = 0x12E2E4u;
            goto label_12e2e4;
        }
    }
    ctx->pc = 0x12E2BCu;
    // 0x12e2bc: 0xca3021  addu        $a2, $a2, $t2
    ctx->pc = 0x12e2bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
    // 0x12e2c0: 0xca782b  sltu        $t7, $a2, $t2
    ctx->pc = 0x12e2c0u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x12e2c4: 0x15e00006  bnez        $t7, . + 4 + (0x6 << 2)
    ctx->pc = 0x12E2C4u;
    {
        const bool branch_taken_0x12e2c4 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12E2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E2C4u;
        // 0x12e2c8: 0x258cffff  addiu       $t4, $t4, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e2c4) {
            ctx->pc = 0x12E2E0u;
            goto label_12e2e0;
        }
    }
    ctx->pc = 0x12E2CCu;
    // 0x12e2cc: 0xc3782b  sltu        $t7, $a2, $v1
    ctx->pc = 0x12e2ccu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x12e2d0: 0x11e00004  beqz        $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x12E2D0u;
    {
        const bool branch_taken_0x12e2d0 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E2D0u;
        // 0x12e2d4: 0x77c00  sll         $t7, $a3, 16 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e2d0) {
            ctx->pc = 0x12E2E4u;
            goto label_12e2e4;
        }
    }
    ctx->pc = 0x12E2D8u;
    // 0x12e2d8: 0x258cffff  addiu       $t4, $t4, -0x1
    ctx->pc = 0x12e2d8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
    // 0x12e2dc: 0xca3021  addu        $a2, $a2, $t2
    ctx->pc = 0x12e2dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
label_12e2e0:
    // 0x12e2e0: 0x77c00  sll         $t7, $a3, 16
    ctx->pc = 0x12e2e0u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
label_12e2e4:
    // 0x12e2e4: 0x30aeffff  andi        $t6, $a1, 0xFFFF
    ctx->pc = 0x12e2e4u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x12e2e8: 0x1ec3825  or          $a3, $t7, $t4
    ctx->pc = 0x12e2e8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 15) | GPR_U64(ctx, 12));
    // 0x12e2ec: 0xc33023  subu        $a2, $a2, $v1
    ctx->pc = 0x12e2ecu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x12e2f0: 0x30efffff  andi        $t7, $a3, 0xFFFF
    ctx->pc = 0x12e2f0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x12e2f4: 0x56402  srl         $t4, $a1, 16
    ctx->pc = 0x12e2f4u;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
    // 0x12e2f8: 0x1ee9018  mult        $s2, $t7, $t6
    ctx->pc = 0x12e2f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
    // 0x12e2fc: 0x71ec5818  mult1       $t3, $t7, $t4
    ctx->pc = 0x12e2fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 12); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x12e300: 0x76c02  srl         $t5, $a3, 16
    ctx->pc = 0x12e300u;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 7), 16));
    // 0x12e304: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x12e304u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e308: 0x1ae7018  mult        $t6, $t5, $t6
    ctx->pc = 0x12e308u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
    // 0x12e30c: 0x127c02  srl         $t7, $s2, 16
    ctx->pc = 0x12e30cu;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 18), 16));
    // 0x12e310: 0x16f5821  addu        $t3, $t3, $t7
    ctx->pc = 0x12e310u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 15)));
    // 0x12e314: 0x16e5821  addu        $t3, $t3, $t6
    ctx->pc = 0x12e314u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 14)));
    // 0x12e318: 0x16e702b  sltu        $t6, $t3, $t6
    ctx->pc = 0x12e318u;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 14)) ? 1 : 0);
    // 0x12e31c: 0x11c00003  beqz        $t6, . + 4 + (0x3 << 2)
    ctx->pc = 0x12E31Cu;
    {
        const bool branch_taken_0x12e31c = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E31Cu;
        // 0x12e320: 0x71ac6018  mult1       $t4, $t5, $t4 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 12); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e31c) {
            ctx->pc = 0x12E32Cu;
            goto label_12e32c;
        }
    }
    ctx->pc = 0x12E324u;
    // 0x12e324: 0x3c0f0001  lui         $t7, 0x1
    ctx->pc = 0x12e324u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)1 << 16));
    // 0x12e328: 0x18f6021  addu        $t4, $t4, $t7
    ctx->pc = 0x12e328u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 15)));
label_12e32c:
    // 0x12e32c: 0xb7402  srl         $t6, $t3, 16
    ctx->pc = 0x12e32cu;
    SET_GPR_S32(ctx, 14, (int32_t)SRL32(GPR_U32(ctx, 11), 16));
    // 0x12e330: 0xb6c00  sll         $t5, $t3, 16
    ctx->pc = 0x12e330u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 11), 16));
    // 0x12e334: 0x18e2021  addu        $a0, $t4, $t6
    ctx->pc = 0x12e334u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 14)));
    // 0x12e338: 0x324fffff  andi        $t7, $s2, 0xFFFF
    ctx->pc = 0x12e338u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
    // 0x12e33c: 0x124702b  sltu        $t6, $t1, $a0
    ctx->pc = 0x12e33cu;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x12e340: 0x15c00005  bnez        $t6, . + 4 + (0x5 << 2)
    ctx->pc = 0x12E340u;
    {
        const bool branch_taken_0x12e340 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x12E344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E340u;
        // 0x12e344: 0x1af5821  addu        $t3, $t5, $t7 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 15)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e340) {
            ctx->pc = 0x12E358u;
            goto label_12e358;
        }
    }
    ctx->pc = 0x12E348u;
    // 0x12e348: 0x14890009  bne         $a0, $t1, . + 4 + (0x9 << 2)
    ctx->pc = 0x12E348u;
    {
        const bool branch_taken_0x12e348 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 9));
        ctx->pc = 0x12E34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E348u;
        // 0x12e34c: 0x30b782b  sltu        $t7, $t8, $t3 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 24) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e348) {
            ctx->pc = 0x12E370u;
            goto label_12e370;
        }
    }
    ctx->pc = 0x12E350u;
    // 0x12e350: 0x11e00007  beqz        $t7, . + 4 + (0x7 << 2)
    ctx->pc = 0x12E350u;
    {
        const bool branch_taken_0x12e350 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x12e350) {
            ctx->pc = 0x12E370u;
            goto label_12e370;
        }
    }
    ctx->pc = 0x12E358u;
label_12e358:
    // 0x12e358: 0x1656823  subu        $t5, $t3, $a1
    ctx->pc = 0x12e358u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 5)));
    // 0x12e35c: 0x8a7023  subu        $t6, $a0, $t2
    ctx->pc = 0x12e35cu;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x12e360: 0x16d782b  sltu        $t7, $t3, $t5
    ctx->pc = 0x12e360u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x12e364: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x12e364u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x12e368: 0x1cf2023  subu        $a0, $t6, $t7
    ctx->pc = 0x12e368u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 15)));
    // 0x12e36c: 0x1a0582d  daddu       $t3, $t5, $zero
    ctx->pc = 0x12e36cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
label_12e370:
    // 0x12e370: 0x1220fed0  beqz        $s1, . + 4 + (-0x130 << 2)
    ctx->pc = 0x12E370u;
    {
        const bool branch_taken_0x12e370 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E370u;
        // 0x12e374: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e370) {
            ctx->pc = 0x12DEB4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12deb4;
        }
    }
    ctx->pc = 0x12E378u;
    // 0x12e378: 0x30b6823  subu        $t5, $t8, $t3
    ctx->pc = 0x12e378u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 24), GPR_U32(ctx, 11)));
    // 0x12e37c: 0xc46023  subu        $t4, $a2, $a0
    ctx->pc = 0x12e37cu;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x12e380: 0x30d702b  sltu        $t6, $t8, $t5
    ctx->pc = 0x12e380u;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 24) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x12e384: 0x18e4823  subu        $t1, $t4, $t6
    ctx->pc = 0x12e384u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 14)));
    // 0x12e388: 0x32d6806  srlv        $t5, $t5, $t9
    ctx->pc = 0x12e388u;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 13), GPR_U32(ctx, 25) & 0x1F));
    // 0x12e38c: 0x2097804  sllv        $t7, $t1, $s0
    ctx->pc = 0x12e38cu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 16) & 0x1F));
    // 0x12e390: 0x240effff  addiu       $t6, $zero, -0x1
    ctx->pc = 0x12e390u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12e394: 0xe703c  dsll32      $t6, $t6, 0
    ctx->pc = 0x12e394u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << (32 + 0));
    // 0x12e398: 0x1ed7825  or          $t7, $t7, $t5
    ctx->pc = 0x12e398u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 13));
    // 0x12e39c: 0x10e4024  and         $t0, $t0, $t6
    ctx->pc = 0x12e39cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 14));
    // 0x12e3a0: 0xf783c  dsll32      $t7, $t7, 0
    ctx->pc = 0x12e3a0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 0));
    // 0x12e3a4: 0x3297006  srlv        $t6, $t1, $t9
    ctx->pc = 0x12e3a4u;
    SET_GPR_S32(ctx, 14, (int32_t)SRL32(GPR_U32(ctx, 9), GPR_U32(ctx, 25) & 0x1F));
    // 0x12e3a8: 0xf783e  dsrl32      $t7, $t7, 0
    ctx->pc = 0x12e3a8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) >> (32 + 0));
    // 0x12e3ac: 0xe703c  dsll32      $t6, $t6, 0
    ctx->pc = 0x12e3acu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << (32 + 0));
    // 0x12e3b0: 0x1000ff8f  b           . + 4 + (-0x71 << 2)
    ctx->pc = 0x12E3B0u;
    {
        const bool branch_taken_0x12e3b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E3B0u;
        // 0x12e3b4: 0x10f4025  or          $t0, $t0, $t7 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e3b0) {
            ctx->pc = 0x12E1F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12e1f0;
        }
    }
    ctx->pc = 0x12E3B8u;
label_12e3b8:
    // 0x12e3b8: 0x240e0010  addiu       $t6, $zero, 0x10
    ctx->pc = 0x12e3b8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x12e3bc: 0x35efffff  ori         $t7, $t7, 0xFFFF
    ctx->pc = 0x12e3bcu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)65535);
    // 0x12e3c0: 0x240d0018  addiu       $t5, $zero, 0x18
    ctx->pc = 0x12e3c0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x12e3c4: 0x1ea782b  sltu        $t7, $t7, $t2
    ctx->pc = 0x12e3c4u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x12e3c8: 0x1c0602d  daddu       $t4, $t6, $zero
    ctx->pc = 0x12e3c8u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e3cc: 0x1000ff69  b           . + 4 + (-0x97 << 2)
    ctx->pc = 0x12E3CCu;
    {
        const bool branch_taken_0x12e3cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E3CCu;
        // 0x12e3d0: 0x1af600b  movn        $t4, $t5, $t7 (Delay Slot)
        if (GPR_U64(ctx, 15) != 0) SET_GPR_VEC(ctx, 12, GPR_VEC(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e3cc) {
            ctx->pc = 0x12E174u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12e174;
        }
    }
    ctx->pc = 0x12E3D4u;
}
