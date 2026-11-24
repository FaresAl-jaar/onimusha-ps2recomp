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

// Function: sub_00349CD0
// Address: 0x349cd0 - 0x349d08
void sub_00349CD0_0x349cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00349CD0_0x349cd0");
#endif

    ctx->pc = 0x349cd0u;

    // 0x349cd0: 0x9085005f  lbu         $a1, 0x5F($a0)
    ctx->pc = 0x349cd0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 95)));
    // 0x349cd4: 0x3c030092  lui         $v1, 0x92
    ctx->pc = 0x349cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)146 << 16));
    // 0x349cd8: 0x94820008  lhu         $v0, 0x8($a0)
    ctx->pc = 0x349cd8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x349cdc: 0x24631760  addiu       $v1, $v1, 0x1760
    ctx->pc = 0x349cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5984));
    // 0x349ce0: 0x52240  sll         $a0, $a1, 9
    ctx->pc = 0x349ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 9));
    // 0x349ce4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x349ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x349ce8: 0x946301ce  lhu         $v1, 0x1CE($v1)
    ctx->pc = 0x349ce8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 462)));
    // 0x349cec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x349cecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x349cf0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x349cf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x349cf4: 0x1c400002  bgtz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x349CF4u;
    {
        const bool branch_taken_0x349cf4 = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x349cf4) {
            ctx->pc = 0x349D00u;
            goto label_349d00;
        }
    }
    ctx->pc = 0x349CFCu;
    // 0x349cfc: 0x64020001  daddiu      $v0, $zero, 0x1
    ctx->pc = 0x349cfcu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_349d00:
    // 0x349d00: 0x3e00008  jr          $ra
    ctx->pc = 0x349D00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x349D00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x349D08u;
}
