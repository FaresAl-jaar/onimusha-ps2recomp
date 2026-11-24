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

// Function: sub_001C1FC0
// Address: 0x1c1fc0 - 0x1c1ff0
void sub_001C1FC0_0x1c1fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C1FC0_0x1c1fc0");
#endif

    ctx->pc = 0x1c1fc0u;

    // 0x1c1fc0: 0x8c867840  lw          $a2, 0x7840($a0)
    ctx->pc = 0x1c1fc0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 30784)));
    // 0x1c1fc4: 0x94c3000e  lhu         $v1, 0xE($a2)
    ctx->pc = 0x1c1fc4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 14)));
    // 0x1c1fc8: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x1c1fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1c1fcc: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1c1fccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1c1fd0: 0xa4c4000e  sh          $a0, 0xE($a2)
    ctx->pc = 0x1c1fd0u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 14), (uint16_t)GPR_U32(ctx, 4));
    // 0x1c1fd4: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1c1fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1c1fd8: 0x94640010  lhu         $a0, 0x10($v1)
    ctx->pc = 0x1c1fd8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1c1fdc: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x1c1fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1c1fe0: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x1c1fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1c1fe4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1c1fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1c1fe8: 0x3e00008  jr          $ra
    ctx->pc = 0x1C1FE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C1FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1FE8u;
        // 0x1c1fec: 0x7c650000  sq          $a1, 0x0($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C1FE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C1FF0u;
}
