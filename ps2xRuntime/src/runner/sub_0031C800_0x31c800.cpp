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

// Function: sub_0031C800
// Address: 0x31c800 - 0x31c828
void sub_0031C800_0x31c800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031C800_0x31c800");
#endif

    ctx->pc = 0x31c800u;

    // 0x31c800: 0x90a30001  lbu         $v1, 0x1($a1)
    ctx->pc = 0x31c800u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x31c804: 0x24a20006  addiu       $v0, $a1, 0x6
    ctx->pc = 0x31c804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 6));
    // 0x31c808: 0x94a70004  lhu         $a3, 0x4($a1)
    ctx->pc = 0x31c808u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x31c80c: 0x94a40002  lhu         $a0, 0x2($a1)
    ctx->pc = 0x31c80cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x31c810: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x31c810u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x31c814: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x31c814u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x31c818: 0x72c00  sll         $a1, $a3, 16
    ctx->pc = 0x31c818u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x31c81c: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x31c81cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x31c820: 0x3e00008  jr          $ra
    ctx->pc = 0x31C820u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31C824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C820u;
        // 0x31c824: 0xac640100  sw          $a0, 0x100($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 256), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31C820u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31C828u;
}
