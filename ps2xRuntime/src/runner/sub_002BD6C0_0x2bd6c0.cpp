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

// Function: sub_002BD6C0
// Address: 0x2bd6c0 - 0x2bd6e4
void sub_002BD6C0_0x2bd6c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BD6C0_0x2bd6c0");
#endif

    ctx->pc = 0x2bd6c0u;

    // 0x2bd6c0: 0x90c70001  lbu         $a3, 0x1($a2)
    ctx->pc = 0x2bd6c0u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x2bd6c4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2bd6c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bd6c8: 0x90a307d7  lbu         $v1, 0x7D7($a1)
    ctx->pc = 0x2bd6c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2007)));
    // 0x2bd6cc: 0x24c20002  addiu       $v0, $a2, 0x2
    ctx->pc = 0x2bd6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x2bd6d0: 0xe42004  sllv        $a0, $a0, $a3
    ctx->pc = 0x2bd6d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 7) & 0x1F));
    // 0x2bd6d4: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x2bd6d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2bd6d8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2bd6d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2bd6dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2BD6DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BD6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD6DCu;
        // 0x2bd6e0: 0xa0a307d7  sb          $v1, 0x7D7($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 2007), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BD6DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BD6E4u;
}
