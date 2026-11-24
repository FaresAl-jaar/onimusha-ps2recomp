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

// Function: sub_001494D0
// Address: 0x1494d0 - 0x14953c
void sub_001494D0_0x1494d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001494D0_0x1494d0");
#endif

    ctx->pc = 0x1494d0u;

    // 0x1494d0: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x1494d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1494d4: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x1494d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1494d8: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x1494d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x1494dc: 0x8c680004  lw          $t0, 0x4($v1)
    ctx->pc = 0x1494dcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1494e0: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x1494e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1494e4: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x1494e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1494e8: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1494e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1494ec: 0x84430002  lh          $v1, 0x2($v0)
    ctx->pc = 0x1494ecu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x1494f0: 0x1053023  subu        $a2, $t0, $a1
    ctx->pc = 0x1494f0u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x1494f4: 0xe63018  mult        $a2, $a3, $a2
    ctx->pc = 0x1494f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x1494f8: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x1494f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x1494fc: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1494fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x149500: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x149500u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x149504: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x149504u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x149508: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x149508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x14950c: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x14950cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x149510: 0x61a03  sra         $v1, $a2, 8
    ctx->pc = 0x149510u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), 8));
    // 0x149514: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x149514u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x149518: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x149518u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
    // 0x14951c: 0xe31818  mult        $v1, $a3, $v1
    ctx->pc = 0x14951cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x149520: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x149520u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
    // 0x149524: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x149524u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x149528: 0x31103  sra         $v0, $v1, 4
    ctx->pc = 0x149528u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
    // 0x14952c: 0x471018  mult        $v0, $v0, $a3
    ctx->pc = 0x14952cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x149530: 0x21303  sra         $v0, $v0, 12
    ctx->pc = 0x149530u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 12));
    // 0x149534: 0x3e00008  jr          $ra
    ctx->pc = 0x149534u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x149538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149534u;
        // 0x149538: 0x821021  addu        $v0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x149534u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14953Cu;
}
