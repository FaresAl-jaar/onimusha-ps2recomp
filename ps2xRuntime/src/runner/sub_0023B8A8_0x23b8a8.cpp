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

// Function: sub_0023B8A8
// Address: 0x23b8a8 - 0x23b8d8
void sub_0023B8A8_0x23b8a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023B8A8_0x23b8a8");
#endif

    ctx->pc = 0x23b8a8u;

    // 0x23b8a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23b8a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23b8ac: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x23B8ACu;
    {
        const bool branch_taken_0x23b8ac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x23B8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B8ACu;
        // 0x23b8b0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b8ac) {
            ctx->pc = 0x23B8C8u;
            goto label_23b8c8;
        }
    }
    ctx->pc = 0x23B8B4u;
    // 0x23b8b4: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x23b8b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x23b8b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23b8b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23b8bc: 0x2484b5e0  addiu       $a0, $a0, -0x4A20
    ctx->pc = 0x23b8bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948320));
    // 0x23b8c0: 0x808baa4  j           func_22EA90
    ctx->pc = 0x23B8C0u;
    ctx->pc = 0x23B8C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B8C0u;
    // 0x23b8c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EA90u;
    sub_0022EA90_0x22ea90(rdram, ctx, runtime); return;
    ctx->pc = 0x23B8C8u;
label_23b8c8:
    // 0x23b8c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23b8c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23b8cc: 0xa0850070  sb          $a1, 0x70($a0)
    ctx->pc = 0x23b8ccu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 112), (uint8_t)GPR_U32(ctx, 5));
    // 0x23b8d0: 0x3e00008  jr          $ra
    ctx->pc = 0x23B8D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23B8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B8D0u;
        // 0x23b8d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23B8D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23B8D8u;
}
