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

// Function: sub_003D7AC0
// Address: 0x3d7ac0 - 0x3d7af8
void sub_003D7AC0_0x3d7ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D7AC0_0x3d7ac0");
#endif

    ctx->pc = 0x3d7ac0u;

    // 0x3d7ac0: 0x90832b32  lbu         $v1, 0x2B32($a0)
    ctx->pc = 0x3d7ac0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 11058)));
    // 0x3d7ac4: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3D7AC4u;
    {
        const bool branch_taken_0x3d7ac4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d7ac4) {
            ctx->pc = 0x3D7AE0u;
            goto label_3d7ae0;
        }
    }
    ctx->pc = 0x3D7ACCu;
    // 0x3d7acc: 0x8c830148  lw          $v1, 0x148($a0)
    ctx->pc = 0x3d7accu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
    // 0x3d7ad0: 0x34630200  ori         $v1, $v1, 0x200
    ctx->pc = 0x3d7ad0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)512);
    // 0x3d7ad4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3D7AD4u;
    {
        const bool branch_taken_0x3d7ad4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D7AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7AD4u;
        // 0x3d7ad8: 0xac830148  sw          $v1, 0x148($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d7ad4) {
            ctx->pc = 0x3D7AF0u;
            goto label_3d7af0;
        }
    }
    ctx->pc = 0x3D7ADCu;
    // 0x3d7adc: 0x0  nop
    ctx->pc = 0x3d7adcu;
    // NOP
label_3d7ae0:
    // 0x3d7ae0: 0x8c850148  lw          $a1, 0x148($a0)
    ctx->pc = 0x3d7ae0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
    // 0x3d7ae4: 0x2403fdff  addiu       $v1, $zero, -0x201
    ctx->pc = 0x3d7ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966783));
    // 0x3d7ae8: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x3d7ae8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x3d7aec: 0xac830148  sw          $v1, 0x148($a0)
    ctx->pc = 0x3d7aecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 3));
label_3d7af0:
    // 0x3d7af0: 0x3e00008  jr          $ra
    ctx->pc = 0x3D7AF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D7AF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D7AF8u;
}
