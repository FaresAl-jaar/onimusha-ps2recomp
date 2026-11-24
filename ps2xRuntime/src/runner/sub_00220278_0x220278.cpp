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

// Function: sub_00220278
// Address: 0x220278 - 0x2202b4
void sub_00220278_0x220278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00220278_0x220278");
#endif

    ctx->pc = 0x220278u;

    // 0x220278: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x220278u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22027c: 0x8c850294  lw          $a1, 0x294($a0)
    ctx->pc = 0x22027cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 660)));
    // 0x220280: 0x8c820298  lw          $v0, 0x298($a0)
    ctx->pc = 0x220280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 664)));
    // 0x220284: 0x8c83029c  lw          $v1, 0x29C($a0)
    ctx->pc = 0x220284u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 668)));
    // 0x220288: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x220288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x22028c: 0xc2202a  slt         $a0, $a2, $v0
    ctx->pc = 0x22028cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x220290: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x220290u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x220294: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x220294u;
    {
        const bool branch_taken_0x220294 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x220298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220294u;
        // 0x220298: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220294) {
            ctx->pc = 0x2202ACu;
            goto label_2202ac;
        }
    }
    ctx->pc = 0x22029Cu;
    // 0x22029c: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x22029cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x2202a0: 0xc5102a  slt         $v0, $a2, $a1
    ctx->pc = 0x2202a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2202a4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2202a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2202a8: 0xa2180b  movn        $v1, $a1, $v0
    ctx->pc = 0x2202a8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 5));
label_2202ac:
    // 0x2202ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2202ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2202B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2202ACu;
        // 0x2202b0: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2202ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2202B4u;
}
