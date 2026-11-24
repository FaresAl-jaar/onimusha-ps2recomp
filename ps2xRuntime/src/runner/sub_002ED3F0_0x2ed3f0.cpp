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

// Function: sub_002ED3F0
// Address: 0x2ed3f0 - 0x2ed444
void sub_002ED3F0_0x2ed3f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ED3F0_0x2ed3f0");
#endif

    switch (ctx->pc) {
        case 0x2ed438u: goto label_2ed438;
        default: break;
    }

    ctx->pc = 0x2ed3f0u;

    // 0x2ed3f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ed3f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ed3f4: 0x10c00010  beqz        $a2, . + 4 + (0x10 << 2)
    ctx->pc = 0x2ED3F4u;
    {
        const bool branch_taken_0x2ed3f4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED3F4u;
        // 0x2ed3f8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed3f4) {
            ctx->pc = 0x2ED438u;
            goto label_2ed438;
        }
    }
    ctx->pc = 0x2ED3FCu;
    // 0x2ed3fc: 0x8ca60148  lw          $a2, 0x148($a1)
    ctx->pc = 0x2ed3fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 328)));
    // 0x2ed400: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x2ed400u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x2ed404: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x2ed404u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x2ed408: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x2ED408u;
    {
        const bool branch_taken_0x2ed408 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ed408) {
            ctx->pc = 0x2ED438u;
            goto label_2ed438;
        }
    }
    ctx->pc = 0x2ED410u;
    // 0x2ed410: 0x94860000  lhu         $a2, 0x0($a0)
    ctx->pc = 0x2ed410u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2ed414: 0x8ca304ac  lw          $v1, 0x4AC($a1)
    ctx->pc = 0x2ed414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1196)));
    // 0x2ed418: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2ed418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ed41c: 0xc42004  sllv        $a0, $a0, $a2
    ctx->pc = 0x2ed41cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 6) & 0x1F));
    // 0x2ed420: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2ed420u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2ed424: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2ED424u;
    {
        const bool branch_taken_0x2ed424 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ed424) {
            ctx->pc = 0x2ED438u;
            goto label_2ed438;
        }
    }
    ctx->pc = 0x2ED42Cu;
    // 0x2ed42c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2ed42cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed430: 0xc0bfaa8  jal         func_2FEAA0
    ctx->pc = 0x2ED430u;
    SET_GPR_U32(ctx, 31, 0x2ED438u);
    ctx->pc = 0x2ED434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED430u;
    // 0x2ed434: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FEAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FEAA0u, 0x2ED430u, 0x2ED438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED438u;
label_2ed438:
    // 0x2ed438: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ed438u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ed43c: 0x3e00008  jr          $ra
    ctx->pc = 0x2ED43Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ED440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED43Cu;
        // 0x2ed440: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ED43Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ED444u;
}
