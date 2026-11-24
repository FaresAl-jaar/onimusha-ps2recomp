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

// Function: sub_002E8BE0
// Address: 0x2e8be0 - 0x2e8c10
void sub_002E8BE0_0x2e8be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E8BE0_0x2e8be0");
#endif

    ctx->pc = 0x2e8be0u;

    // 0x2e8be0: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x2e8be0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e8be4: 0x2405fffe  addiu       $a1, $zero, -0x2
    ctx->pc = 0x2e8be4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x2e8be8: 0x2403ff60  addiu       $v1, $zero, -0xA0
    ctx->pc = 0x2e8be8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967136));
    // 0x2e8bec: 0xc52824  and         $a1, $a2, $a1
    ctx->pc = 0x2e8becu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    // 0x2e8bf0: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x2e8bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x2e8bf4: 0xa483015a  sh          $v1, 0x15A($a0)
    ctx->pc = 0x2e8bf4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 346), (uint16_t)GPR_U32(ctx, 3));
    // 0x2e8bf8: 0xa0800150  sb          $zero, 0x150($a0)
    ctx->pc = 0x2e8bf8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 336), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e8bfc: 0xa0800151  sb          $zero, 0x151($a0)
    ctx->pc = 0x2e8bfcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 337), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e8c00: 0xa4800152  sh          $zero, 0x152($a0)
    ctx->pc = 0x2e8c00u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 338), (uint16_t)GPR_U32(ctx, 0));
    // 0x2e8c04: 0xa4800158  sh          $zero, 0x158($a0)
    ctx->pc = 0x2e8c04u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 344), (uint16_t)GPR_U32(ctx, 0));
    // 0x2e8c08: 0x3e00008  jr          $ra
    ctx->pc = 0x2E8C08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E8C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8C08u;
        // 0x2e8c0c: 0xa4800156  sh          $zero, 0x156($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 342), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E8C08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E8C10u;
}
