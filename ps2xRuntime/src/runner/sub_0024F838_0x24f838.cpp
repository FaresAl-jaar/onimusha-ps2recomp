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

// Function: sub_0024F838
// Address: 0x24f838 - 0x24f888
void sub_0024F838_0x24f838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024F838_0x24f838");
#endif

    ctx->pc = 0x24f838u;

    // 0x24f838: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x24f838u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
    // 0x24f83c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x24f83cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24f840: 0x8c4374d8  lw          $v1, 0x74D8($v0)
    ctx->pc = 0x24f840u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4D74D8u));
    // 0x24f844: 0x28c9fff1  slti        $t1, $a2, -0xF
    ctx->pc = 0x24f844u;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4294967281) ? 1 : 0);
    // 0x24f848: 0x14670005  bne         $v1, $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x24F848u;
    {
        const bool branch_taken_0x24f848 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        ctx->pc = 0x24F84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F848u;
        // 0x24f84c: 0x80402d  daddu       $t0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f848) {
            ctx->pc = 0x24F860u;
            goto label_24f860;
        }
    }
    ctx->pc = 0x24F850u;
    // 0x24f850: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x24f850u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
    // 0x24f854: 0x8c4374d0  lw          $v1, 0x74D0($v0)
    ctx->pc = 0x24f854u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4D74D0u));
    // 0x24f858: 0x18600009  blez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x24F858u;
    {
        const bool branch_taken_0x24f858 = (GPR_S64(ctx, 3) <= 0);
        if (branch_taken_0x24f858) {
            ctx->pc = 0x24F880u;
            goto label_24f880;
        }
    }
    ctx->pc = 0x24F860u;
label_24f860:
    // 0x24f860: 0x2402fff1  addiu       $v0, $zero, -0xF
    ctx->pc = 0x24f860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967281));
    // 0x24f864: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x24f864u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x24f868: 0xc9100a  movz        $v0, $a2, $t1
    ctx->pc = 0x24f868u;
    if (GPR_U64(ctx, 9) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 6));
    // 0x24f86c: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x24f86cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x24f870: 0x28430010  slti        $v1, $v0, 0x10
    ctx->pc = 0x24f870u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x24f874: 0x882021  addu        $a0, $a0, $t0
    ctx->pc = 0x24f874u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x24f878: 0xa3100a  movz        $v0, $a1, $v1
    ctx->pc = 0x24f878u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x24f87c: 0xac820040  sw          $v0, 0x40($a0)
    ctx->pc = 0x24f87cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 2));
label_24f880:
    // 0x24f880: 0x3e00008  jr          $ra
    ctx->pc = 0x24F880u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24F880u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24F888u;
}
