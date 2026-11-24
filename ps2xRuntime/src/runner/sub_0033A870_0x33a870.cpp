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

// Function: sub_0033A870
// Address: 0x33a870 - 0x33a8e0
void sub_0033A870_0x33a870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033A870_0x33a870");
#endif

    switch (ctx->pc) {
        case 0x33a888u: goto label_33a888;
        default: break;
    }

    ctx->pc = 0x33a870u;

    // 0x33a870: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x33a870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x33a874: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x33a874u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33a878: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x33a878u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33a87c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x33a87cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33a880: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x33a880u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33a884: 0x0  nop
    ctx->pc = 0x33a884u;
    // NOP
label_33a888:
    // 0x33a888: 0x8d420004  lw          $v0, 0x4($t2)
    ctx->pc = 0x33a888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x33a88c: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x33A88Cu;
    {
        const bool branch_taken_0x33a88c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x33a88c) {
            ctx->pc = 0x33A8A0u;
            goto label_33a8a0;
        }
    }
    ctx->pc = 0x33A894u;
    // 0x33a894: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x33A894u;
    {
        const bool branch_taken_0x33a894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A894u;
        // 0x33a898: 0x160682d  daddu       $t5, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a894) {
            ctx->pc = 0x33A8C8u;
            goto label_33a8c8;
        }
    }
    ctx->pc = 0x33A89Cu;
    // 0x33a89c: 0x0  nop
    ctx->pc = 0x33a89cu;
    // NOP
label_33a8a0:
    // 0x33a8a0: 0x8d42001c  lw          $v0, 0x1C($t2)
    ctx->pc = 0x33a8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 28)));
    // 0x33a8a4: 0x182082b  sltu        $at, $t4, $v0
    ctx->pc = 0x33a8a4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x33a8a8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x33A8A8u;
    {
        const bool branch_taken_0x33a8a8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x33a8a8) {
            ctx->pc = 0x33A8B8u;
            goto label_33a8b8;
        }
    }
    ctx->pc = 0x33A8B0u;
    // 0x33a8b0: 0x40602d  daddu       $t4, $v0, $zero
    ctx->pc = 0x33a8b0u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33a8b4: 0x160682d  daddu       $t5, $t3, $zero
    ctx->pc = 0x33a8b4u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_33a8b8:
    // 0x33a8b8: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x33a8b8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x33a8bc: 0x29620002  slti        $v0, $t3, 0x2
    ctx->pc = 0x33a8bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x33a8c0: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x33A8C0u;
    {
        const bool branch_taken_0x33a8c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33A8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A8C0u;
        // 0x33a8c4: 0x254a0020  addiu       $t2, $t2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a8c0) {
            ctx->pc = 0x33A888u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33a888;
        }
    }
    ctx->pc = 0x33A8C8u;
label_33a8c8:
    // 0x33a8c8: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x33a8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x33a8cc: 0x3522000d  ori         $v0, $t1, 0xD
    ctx->pc = 0x33a8ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)13);
    // 0x33a8d0: 0xd180a  movz        $v1, $zero, $t5
    ctx->pc = 0x33a8d0u;
    if (GPR_U64(ctx, 13) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x33a8d4: 0x24c6151a  addiu       $a2, $a2, 0x151A
    ctx->pc = 0x33a8d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5402));
    // 0x33a8d8: 0x80ce74c  j           func_339D30
    ctx->pc = 0x33A8D8u;
    ctx->pc = 0x33A8DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33A8D8u;
    // 0x33a8dc: 0x434825  or          $t1, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x339D30u;
    sub_00339D30_0x339d30(rdram, ctx, runtime); return;
    ctx->pc = 0x33A8E0u;
}
