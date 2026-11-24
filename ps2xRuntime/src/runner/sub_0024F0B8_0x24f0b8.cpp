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

// Function: sub_0024F0B8
// Address: 0x24f0b8 - 0x24f100
void sub_0024F0B8_0x24f0b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024F0B8_0x24f0b8");
#endif

    ctx->pc = 0x24f0b8u;

    // 0x24f0b8: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x24f0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
    // 0x24f0bc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x24f0bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24f0c0: 0x8c4374d8  lw          $v1, 0x74D8($v0)
    ctx->pc = 0x24f0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4D74D8u));
    // 0x24f0c4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x24f0c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24f0c8: 0x14640005  bne         $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x24F0C8u;
    {
        const bool branch_taken_0x24f0c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x24F0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F0C8u;
        // 0x24f0cc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f0c8) {
            ctx->pc = 0x24F0E0u;
            goto label_24f0e0;
        }
    }
    ctx->pc = 0x24F0D0u;
    // 0x24f0d0: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x24f0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
    // 0x24f0d4: 0x8c4374d0  lw          $v1, 0x74D0($v0)
    ctx->pc = 0x24f0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4D74D0u));
    // 0x24f0d8: 0x18600007  blez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x24F0D8u;
    {
        const bool branch_taken_0x24f0d8 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x24F0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F0D8u;
        // 0x24f0dc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f0d8) {
            ctx->pc = 0x24F0F8u;
            goto label_24f0f8;
        }
    }
    ctx->pc = 0x24F0E0u;
label_24f0e0:
    // 0x24f0e0: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x24f0e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x24f0e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24f0e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24f0e8: 0x2484e798  addiu       $a0, $a0, -0x1868
    ctx->pc = 0x24f0e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961048));
    // 0x24f0ec: 0x808d47e  j           func_2351F8
    ctx->pc = 0x24F0ECu;
    ctx->pc = 0x24F0F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24F0ECu;
    // 0x24f0f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2351F8u;
    sub_002351F8_0x2351f8(rdram, ctx, runtime); return;
    ctx->pc = 0x24F0F4u;
    // 0x24f0f4: 0x0  nop
    ctx->pc = 0x24f0f4u;
    // NOP
label_24f0f8:
    // 0x24f0f8: 0x3e00008  jr          $ra
    ctx->pc = 0x24F0F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24F0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F0F8u;
        // 0x24f0fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24F0F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24F100u;
}
