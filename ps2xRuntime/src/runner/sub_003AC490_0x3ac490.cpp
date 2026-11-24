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

// Function: sub_003AC490
// Address: 0x3ac490 - 0x3ac4c8
void sub_003AC490_0x3ac490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AC490_0x3ac490");
#endif

    ctx->pc = 0x3ac490u;

    // 0x3ac490: 0xa0800053  sb          $zero, 0x53($a0)
    ctx->pc = 0x3ac490u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 83), (uint8_t)GPR_U32(ctx, 0));
    // 0x3ac494: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x3ac494u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3ac498: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3AC498u;
    {
        const bool branch_taken_0x3ac498 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ac498) {
            ctx->pc = 0x3AC4C0u;
            goto label_3ac4c0;
        }
    }
    ctx->pc = 0x3AC4A0u;
    // 0x3ac4a0: 0x84a30002  lh          $v1, 0x2($a1)
    ctx->pc = 0x3ac4a0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x3ac4a4: 0x28610000  slti        $at, $v1, 0x0
    ctx->pc = 0x3ac4a4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x3ac4a8: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x3AC4A8u;
    {
        const bool branch_taken_0x3ac4a8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AC4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC4A8u;
        // 0x3ac4ac: 0x28610062  slti        $at, $v1, 0x62 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)98) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac4a8) {
            ctx->pc = 0x3AC4C0u;
            goto label_3ac4c0;
        }
    }
    ctx->pc = 0x3AC4B0u;
    // 0x3ac4b0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x3AC4B0u;
    {
        const bool branch_taken_0x3ac4b0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AC4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC4B0u;
        // 0x3ac4b4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac4b0) {
            ctx->pc = 0x3AC4C0u;
            goto label_3ac4c0;
        }
    }
    ctx->pc = 0x3AC4B8u;
    // 0x3ac4b8: 0xa083004f  sb          $v1, 0x4F($a0)
    ctx->pc = 0x3ac4b8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 79), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ac4bc: 0x0  nop
    ctx->pc = 0x3ac4bcu;
    // NOP
label_3ac4c0:
    // 0x3ac4c0: 0x3e00008  jr          $ra
    ctx->pc = 0x3AC4C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AC4C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AC4C8u;
}
