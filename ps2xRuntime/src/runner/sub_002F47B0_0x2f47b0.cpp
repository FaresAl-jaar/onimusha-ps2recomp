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

// Function: sub_002F47B0
// Address: 0x2f47b0 - 0x2f4800
void sub_002F47B0_0x2f47b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F47B0_0x2f47b0");
#endif

    ctx->pc = 0x2f47b0u;

    // 0x2f47b0: 0x30a2ffff  andi        $v0, $a1, 0xFFFF
    ctx->pc = 0x2f47b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x2f47b4: 0x30420f00  andi        $v0, $v0, 0xF00
    ctx->pc = 0x2f47b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3840);
    // 0x2f47b8: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x2f47b8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x2f47bc: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2f47bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2f47c0: 0x440000b  bltz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2F47C0u;
    {
        const bool branch_taken_0x2f47c0 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2F47C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F47C0u;
        // 0x2f47c4: 0x30a300ff  andi        $v1, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f47c0) {
            ctx->pc = 0x2F47F0u;
            goto label_2f47f0;
        }
    }
    ctx->pc = 0x2F47C8u;
    // 0x2f47c8: 0x28410005  slti        $at, $v0, 0x5
    ctx->pc = 0x2f47c8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x2f47cc: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x2F47CCu;
    {
        const bool branch_taken_0x2f47cc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f47cc) {
            ctx->pc = 0x2F47F0u;
            goto label_2f47f0;
        }
    }
    ctx->pc = 0x2F47D4u;
    // 0x2f47d4: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x2f47d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2f47d8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F47D8u;
    {
        const bool branch_taken_0x2f47d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F47DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F47D8u;
        // 0x2f47dc: 0x2402001e  addiu       $v0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f47d8) {
            ctx->pc = 0x2F47E8u;
            goto label_2f47e8;
        }
    }
    ctx->pc = 0x2F47E0u;
    // 0x2f47e0: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F47E0u;
    {
        const bool branch_taken_0x2f47e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2f47e0) {
            ctx->pc = 0x2F47F0u;
            goto label_2f47f0;
        }
    }
    ctx->pc = 0x2F47E8u;
label_2f47e8:
    // 0x2f47e8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2F47E8u;
    {
        const bool branch_taken_0x2f47e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F47ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F47E8u;
        // 0x2f47ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f47e8) {
            ctx->pc = 0x2F47F8u;
            goto label_2f47f8;
        }
    }
    ctx->pc = 0x2F47F0u;
label_2f47f0:
    // 0x2f47f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f47f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f47f4: 0x0  nop
    ctx->pc = 0x2f47f4u;
    // NOP
label_2f47f8:
    // 0x2f47f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2F47F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F47F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F4800u;
}
