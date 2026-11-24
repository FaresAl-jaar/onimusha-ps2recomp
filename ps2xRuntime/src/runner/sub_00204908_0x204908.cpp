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

// Function: sub_00204908
// Address: 0x204908 - 0x20494c
void sub_00204908_0x204908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00204908_0x204908");
#endif

    ctx->pc = 0x204908u;

    // 0x204908: 0x8ca30058  lw          $v1, 0x58($a1)
    ctx->pc = 0x204908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 88)));
    // 0x20490c: 0x24840088  addiu       $a0, $a0, 0x88
    ctx->pc = 0x20490cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 136));
    // 0x204910: 0x8ca6003c  lw          $a2, 0x3C($a1)
    ctx->pc = 0x204910u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 60)));
    // 0x204914: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x204914u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x204918: 0x8ca2005c  lw          $v0, 0x5C($a1)
    ctx->pc = 0x204918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 92)));
    // 0x20491c: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x20491cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x204920: 0x80a3006c  lb          $v1, 0x6C($a1)
    ctx->pc = 0x204920u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 108)));
    // 0x204924: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x204924u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x204928: 0x80a2006d  lb          $v0, 0x6D($a1)
    ctx->pc = 0x204928u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 109)));
    // 0x20492c: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x20492cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x204930: 0x80a3006e  lb          $v1, 0x6E($a1)
    ctx->pc = 0x204930u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 110)));
    // 0x204934: 0xac860014  sw          $a2, 0x14($a0)
    ctx->pc = 0x204934u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 6));
    // 0x204938: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x204938u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
    // 0x20493c: 0x8ca20040  lw          $v0, 0x40($a1)
    ctx->pc = 0x20493cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x204940: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x204940u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x204944: 0x3e00008  jr          $ra
    ctx->pc = 0x204944u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x204948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204944u;
        // 0x204948: 0xac820018  sw          $v0, 0x18($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x204944u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20494Cu;
}
