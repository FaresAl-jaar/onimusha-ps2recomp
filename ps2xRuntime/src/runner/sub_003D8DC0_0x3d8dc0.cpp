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

// Function: sub_003D8DC0
// Address: 0x3d8dc0 - 0x3d8de4
void sub_003D8DC0_0x3d8dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D8DC0_0x3d8dc0");
#endif

    ctx->pc = 0x3d8dc0u;

    // 0x3d8dc0: 0xa0852be0  sb          $a1, 0x2BE0($a0)
    ctx->pc = 0x3d8dc0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 11232), (uint8_t)GPR_U32(ctx, 5));
    // 0x3d8dc4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3d8dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3d8dc8: 0xa0802be1  sb          $zero, 0x2BE1($a0)
    ctx->pc = 0x3d8dc8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 11233), (uint8_t)GPR_U32(ctx, 0));
    // 0x3d8dcc: 0xa0802be4  sb          $zero, 0x2BE4($a0)
    ctx->pc = 0x3d8dccu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 11236), (uint8_t)GPR_U32(ctx, 0));
    // 0x3d8dd0: 0xa0802be5  sb          $zero, 0x2BE5($a0)
    ctx->pc = 0x3d8dd0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 11237), (uint8_t)GPR_U32(ctx, 0));
    // 0x3d8dd4: 0xa0832be3  sb          $v1, 0x2BE3($a0)
    ctx->pc = 0x3d8dd4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 11235), (uint8_t)GPR_U32(ctx, 3));
    // 0x3d8dd8: 0xa0802be2  sb          $zero, 0x2BE2($a0)
    ctx->pc = 0x3d8dd8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 11234), (uint8_t)GPR_U32(ctx, 0));
    // 0x3d8ddc: 0x3e00008  jr          $ra
    ctx->pc = 0x3D8DDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D8DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8DDCu;
        // 0x3d8de0: 0xac802bf8  sw          $zero, 0x2BF8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 11256), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D8DDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D8DE4u;
}
