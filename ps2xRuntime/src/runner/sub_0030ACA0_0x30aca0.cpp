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

// Function: sub_0030ACA0
// Address: 0x30aca0 - 0x30ad20
void sub_0030ACA0_0x30aca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030ACA0_0x30aca0");
#endif

    ctx->pc = 0x30aca0u;

    // 0x30aca0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x30aca0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x30aca4: 0x8c22ceec  lw          $v0, -0x3114($at)
    ctx->pc = 0x30aca4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x81CEECu));
    // 0x30aca8: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x30aca8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x30acac: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x30ACACu;
    {
        const bool branch_taken_0x30acac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30acac) {
            ctx->pc = 0x30ACB8u;
            goto label_30acb8;
        }
    }
    ctx->pc = 0x30ACB4u;
    // 0x30acb4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x30acb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_30acb8:
    // 0x30acb8: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x30acb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x30acbc: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x30acbcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x30acc0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30ACC0u;
    {
        const bool branch_taken_0x30acc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30ACC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30ACC0u;
        // 0x30acc4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30acc0) {
            ctx->pc = 0x30ACD0u;
            goto label_30acd0;
        }
    }
    ctx->pc = 0x30ACC8u;
    // 0x30acc8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x30ACC8u;
    {
        const bool branch_taken_0x30acc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30acc8) {
            ctx->pc = 0x30AD18u;
            goto label_30ad18;
        }
    }
    ctx->pc = 0x30ACD0u;
label_30acd0:
    // 0x30acd0: 0x84860004  lh          $a2, 0x4($a0)
    ctx->pc = 0x30acd0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x30acd4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x30acd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x30acd8: 0x14c20003  bne         $a2, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30ACD8u;
    {
        const bool branch_taken_0x30acd8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x30ACDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30ACD8u;
        // 0x30acdc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30acd8) {
            ctx->pc = 0x30ACE8u;
            goto label_30ace8;
        }
    }
    ctx->pc = 0x30ACE0u;
    // 0x30ace0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x30ACE0u;
    {
        const bool branch_taken_0x30ace0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30ace0) {
            ctx->pc = 0x30AD18u;
            goto label_30ad18;
        }
    }
    ctx->pc = 0x30ACE8u;
label_30ace8:
    // 0x30ace8: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x30ace8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x30acec: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x30acecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x30acf0: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x30acf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x30acf4: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x30acf4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x30acf8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x30acf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30acfc: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x30acfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x30ad00: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x30ad00u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x30ad04: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x30AD04u;
    {
        const bool branch_taken_0x30ad04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x30ad04) {
            ctx->pc = 0x30AD14u;
            goto label_30ad14;
        }
    }
    ctx->pc = 0x30AD0Cu;
    // 0x30ad0c: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x30AD0Cu;
    {
        const bool branch_taken_0x30ad0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30AD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30AD0Cu;
        // 0x30ad10: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ad0c) {
            ctx->pc = 0x30AD14u;
            goto label_30ad14;
        }
    }
    ctx->pc = 0x30AD14u;
label_30ad14:
    // 0x30ad14: 0x0  nop
    ctx->pc = 0x30ad14u;
    // NOP
label_30ad18:
    // 0x30ad18: 0x3e00008  jr          $ra
    ctx->pc = 0x30AD18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30AD18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30AD20u;
}
