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

// Function: sub_003197E0
// Address: 0x3197e0 - 0x3198e8
void sub_003197E0_0x3197e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003197E0_0x3197e0");
#endif

    ctx->pc = 0x3197e0u;

    // 0x3197e0: 0x10c0001f  beqz        $a2, . + 4 + (0x1F << 2)
    ctx->pc = 0x3197E0u;
    {
        const bool branch_taken_0x3197e0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3197E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3197E0u;
        // 0x3197e4: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3197e0) {
            ctx->pc = 0x319860u;
            goto label_319860;
        }
    }
    ctx->pc = 0x3197E8u;
    // 0x3197e8: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x3197e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x3197ec: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x3197ecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x3197f0: 0x34430404  ori         $v1, $v0, 0x404
    ctx->pc = 0x3197f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1028);
    // 0x3197f4: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x3197f4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x3197f8: 0x3c026c04  lui         $v0, 0x6C04
    ctx->pc = 0x3197f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27652 << 16));
    // 0x3197fc: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x3197fcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x319800: 0x344203f8  ori         $v0, $v0, 0x3F8
    ctx->pc = 0x319800u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1016);
    // 0x319804: 0xaca2000c  sw          $v0, 0xC($a1)
    ctx->pc = 0x319804u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
    // 0x319808: 0xaf858b28  sw          $a1, -0x74D8($gp)
    ctx->pc = 0x319808u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937384), GPR_U32(ctx, 5));
    // 0x31980c: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x31980cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x319810: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x319810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x319814: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x319814u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x319818: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x319818u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x31981c: 0x78c20010  lq          $v0, 0x10($a2)
    ctx->pc = 0x31981cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x319820: 0x7ca20010  sq          $v0, 0x10($a1)
    ctx->pc = 0x319820u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), GPR_VEC(ctx, 2));
    // 0x319824: 0x78c20020  lq          $v0, 0x20($a2)
    ctx->pc = 0x319824u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x319828: 0x7ca20020  sq          $v0, 0x20($a1)
    ctx->pc = 0x319828u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), GPR_VEC(ctx, 2));
    // 0x31982c: 0x78c20030  lq          $v0, 0x30($a2)
    ctx->pc = 0x31982cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x319830: 0x7ca20030  sq          $v0, 0x30($a1)
    ctx->pc = 0x319830u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 48), GPR_VEC(ctx, 2));
    // 0x319834: 0x8f828b28  lw          $v0, -0x74D8($gp)
    ctx->pc = 0x319834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937384)));
    // 0x319838: 0x24a50040  addiu       $a1, $a1, 0x40
    ctx->pc = 0x319838u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x31983c: 0xa21823  subu        $v1, $a1, $v0
    ctx->pc = 0x31983cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x319840: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x319840u;
    {
        const bool branch_taken_0x319840 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x319844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319840u;
        // 0x319844: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319840) {
            ctx->pc = 0x319850u;
            goto label_319850;
        }
    }
    ctx->pc = 0x319848u;
    // 0x319848: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x319848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x31984c: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x31984cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_319850:
    // 0x319850: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x319850u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x319854: 0x8f828b28  lw          $v0, -0x74D8($gp)
    ctx->pc = 0x319854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937384)));
    // 0x319858: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x319858u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x31985c: 0x0  nop
    ctx->pc = 0x31985cu;
    // NOP
label_319860:
    // 0x319860: 0x10e0001f  beqz        $a3, . + 4 + (0x1F << 2)
    ctx->pc = 0x319860u;
    {
        const bool branch_taken_0x319860 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x319864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319860u;
        // 0x319864: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319860) {
            ctx->pc = 0x3198E0u;
            goto label_3198e0;
        }
    }
    ctx->pc = 0x319868u;
    // 0x319868: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x319868u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x31986c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x31986cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x319870: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x319870u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x319874: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x319874u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x319878: 0x34420404  ori         $v0, $v0, 0x404
    ctx->pc = 0x319878u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1028);
    // 0x31987c: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x31987cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
    // 0x319880: 0x3c026c04  lui         $v0, 0x6C04
    ctx->pc = 0x319880u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27652 << 16));
    // 0x319884: 0x344203fc  ori         $v0, $v0, 0x3FC
    ctx->pc = 0x319884u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1020);
    // 0x319888: 0xaca2000c  sw          $v0, 0xC($a1)
    ctx->pc = 0x319888u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
    // 0x31988c: 0xaf858b28  sw          $a1, -0x74D8($gp)
    ctx->pc = 0x31988cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937384), GPR_U32(ctx, 5));
    // 0x319890: 0x78e20000  lq          $v0, 0x0($a3)
    ctx->pc = 0x319890u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x319894: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x319894u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x319898: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x319898u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x31989c: 0x78e20010  lq          $v0, 0x10($a3)
    ctx->pc = 0x31989cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x3198a0: 0x7ca20010  sq          $v0, 0x10($a1)
    ctx->pc = 0x3198a0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), GPR_VEC(ctx, 2));
    // 0x3198a4: 0x78e20020  lq          $v0, 0x20($a3)
    ctx->pc = 0x3198a4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x3198a8: 0x7ca20020  sq          $v0, 0x20($a1)
    ctx->pc = 0x3198a8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), GPR_VEC(ctx, 2));
    // 0x3198ac: 0x78e20030  lq          $v0, 0x30($a3)
    ctx->pc = 0x3198acu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x3198b0: 0x7ca20030  sq          $v0, 0x30($a1)
    ctx->pc = 0x3198b0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 48), GPR_VEC(ctx, 2));
    // 0x3198b4: 0x8f828b28  lw          $v0, -0x74D8($gp)
    ctx->pc = 0x3198b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937384)));
    // 0x3198b8: 0x24a50040  addiu       $a1, $a1, 0x40
    ctx->pc = 0x3198b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x3198bc: 0xa21823  subu        $v1, $a1, $v0
    ctx->pc = 0x3198bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x3198c0: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3198C0u;
    {
        const bool branch_taken_0x3198c0 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x3198C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3198C0u;
        // 0x3198c4: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3198c0) {
            ctx->pc = 0x3198D0u;
            goto label_3198d0;
        }
    }
    ctx->pc = 0x3198C8u;
    // 0x3198c8: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x3198c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x3198cc: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x3198ccu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_3198d0:
    // 0x3198d0: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x3198d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3198d4: 0x8f828b28  lw          $v0, -0x74D8($gp)
    ctx->pc = 0x3198d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937384)));
    // 0x3198d8: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x3198d8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x3198dc: 0x0  nop
    ctx->pc = 0x3198dcu;
    // NOP
label_3198e0:
    // 0x3198e0: 0x3e00008  jr          $ra
    ctx->pc = 0x3198E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3198E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3198E0u;
        // 0x3198e4: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3198E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3198E8u;
}
