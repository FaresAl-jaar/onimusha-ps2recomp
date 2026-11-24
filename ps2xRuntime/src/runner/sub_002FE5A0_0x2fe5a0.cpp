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

// Function: sub_002FE5A0
// Address: 0x2fe5a0 - 0x2fe5d0
void sub_002FE5A0_0x2fe5a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FE5A0_0x2fe5a0");
#endif

    ctx->pc = 0x2fe5a0u;

    // 0x2fe5a0: 0x8c86010c  lw          $a2, 0x10C($a0)
    ctx->pc = 0x2fe5a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 268)));
    // 0x2fe5a4: 0x8c870004  lw          $a3, 0x4($a0)
    ctx->pc = 0x2fe5a4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2fe5a8: 0x28c3000e  slti        $v1, $a2, 0xE
    ctx->pc = 0x2fe5a8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)14) ? 1 : 0);
    // 0x2fe5ac: 0x38c4000f  xori        $a0, $a2, 0xF
    ctx->pc = 0x2fe5acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)15);
    // 0x2fe5b0: 0x4202b  sltu        $a0, $zero, $a0
    ctx->pc = 0x2fe5b0u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2fe5b4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2fe5b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2fe5b8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FE5B8u;
    {
        const bool branch_taken_0x2fe5b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FE5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE5B8u;
        // 0x2fe5bc: 0x61880  sll         $v1, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe5b8) {
            ctx->pc = 0x2FE5C8u;
            goto label_2fe5c8;
        }
    }
    ctx->pc = 0x2FE5C0u;
    // 0x2fe5c0: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x2fe5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x2fe5c4: 0xac652988  sw          $a1, 0x2988($v1)
    ctx->pc = 0x2fe5c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 10632), GPR_U32(ctx, 5));
label_2fe5c8:
    // 0x2fe5c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2FE5C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FE5C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FE5D0u;
}
