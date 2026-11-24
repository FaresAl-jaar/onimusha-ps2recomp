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

// Function: sub_00331F80
// Address: 0x331f80 - 0x331fc4
void sub_00331F80_0x331f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00331F80_0x331f80");
#endif

    ctx->pc = 0x331f80u;

    // 0x331f80: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x331f80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x331f84: 0x84851c7c  lh          $a1, 0x1C7C($a0)
    ctx->pc = 0x331f84u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 7292)));
    // 0x331f88: 0x84831c7a  lh          $v1, 0x1C7A($a0)
    ctx->pc = 0x331f88u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 7290)));
    // 0x331f8c: 0x84820024  lh          $v0, 0x24($a0)
    ctx->pc = 0x331f8cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x331f90: 0x94c6000e  lhu         $a2, 0xE($a2)
    ctx->pc = 0x331f90u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 14)));
    // 0x331f94: 0xa62818  mult        $a1, $a1, $a2
    ctx->pc = 0x331f94u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x331f98: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x331f98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x331f9c: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x331f9cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x331fa0: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x331FA0u;
    {
        const bool branch_taken_0x331fa0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x331FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331FA0u;
        // 0x331fa4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x331fa0) {
            ctx->pc = 0x331FBCu;
            goto label_331fbc;
        }
    }
    ctx->pc = 0x331FA8u;
    // 0x331fa8: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x331fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x331fac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x331facu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x331fb0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x331fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x331fb4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x331fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x331fb8: 0x24420028  addiu       $v0, $v0, 0x28
    ctx->pc = 0x331fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_331fbc:
    // 0x331fbc: 0x3e00008  jr          $ra
    ctx->pc = 0x331FBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x331FBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x331FC4u;
}
