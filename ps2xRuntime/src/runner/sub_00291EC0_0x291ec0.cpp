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

// Function: sub_00291EC0
// Address: 0x291ec0 - 0x291f00
void sub_00291EC0_0x291ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00291EC0_0x291ec0");
#endif

    ctx->pc = 0x291ec0u;

    // 0x291ec0: 0x8c8306cc  lw          $v1, 0x6CC($a0)
    ctx->pc = 0x291ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1740)));
    // 0x291ec4: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x291ec4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
    // 0x291ec8: 0xac8306cc  sw          $v1, 0x6CC($a0)
    ctx->pc = 0x291ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1740), GPR_U32(ctx, 3));
    // 0x291ecc: 0x90832ab0  lbu         $v1, 0x2AB0($a0)
    ctx->pc = 0x291eccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 10928)));
    // 0x291ed0: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x291ed0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x291ed4: 0xa0832ab0  sb          $v1, 0x2AB0($a0)
    ctx->pc = 0x291ed4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 10928), (uint8_t)GPR_U32(ctx, 3));
    // 0x291ed8: 0x8c830148  lw          $v1, 0x148($a0)
    ctx->pc = 0x291ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
    // 0x291edc: 0x34630200  ori         $v1, $v1, 0x200
    ctx->pc = 0x291edcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)512);
    // 0x291ee0: 0xac830148  sw          $v1, 0x148($a0)
    ctx->pc = 0x291ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 3));
    // 0x291ee4: 0x8c830148  lw          $v1, 0x148($a0)
    ctx->pc = 0x291ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
    // 0x291ee8: 0x34632000  ori         $v1, $v1, 0x2000
    ctx->pc = 0x291ee8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
    // 0x291eec: 0xac830148  sw          $v1, 0x148($a0)
    ctx->pc = 0x291eecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 3));
    // 0x291ef0: 0x90832b0d  lbu         $v1, 0x2B0D($a0)
    ctx->pc = 0x291ef0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 11021)));
    // 0x291ef4: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x291ef4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x291ef8: 0x3e00008  jr          $ra
    ctx->pc = 0x291EF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x291EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291EF8u;
        // 0x291efc: 0xa0832b0d  sb          $v1, 0x2B0D($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 11021), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x291EF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x291F00u;
}
