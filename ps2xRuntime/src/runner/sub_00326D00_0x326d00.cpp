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

// Function: sub_00326D00
// Address: 0x326d00 - 0x326d40
void sub_00326D00_0x326d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00326D00_0x326d00");
#endif

    switch (ctx->pc) {
        case 0x326d14u: goto label_326d14;
        default: break;
    }

    ctx->pc = 0x326d00u;

    // 0x326d00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x326d00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x326d04: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x326d04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x326d08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x326d08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x326d0c: 0xc0a737c  jal         func_29CDF0
    ctx->pc = 0x326D0Cu;
    SET_GPR_U32(ctx, 31, 0x326D14u);
    ctx->pc = 0x326D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326D0Cu;
    // 0x326d10: 0x24840d40  addiu       $a0, $a0, 0xD40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3392));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29CDF0u, 0x326D0Cu, 0x326D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326D14u;
label_326d14:
    // 0x326d14: 0x3c040032  lui         $a0, 0x32
    ctx->pc = 0x326d14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)50 << 16));
    // 0x326d18: 0x3c030032  lui         $v1, 0x32
    ctx->pc = 0x326d18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50 << 16));
    // 0x326d1c: 0x24846aa0  addiu       $a0, $a0, 0x6AA0
    ctx->pc = 0x326d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27296));
    // 0x326d20: 0x3c010091  lui         $at, 0x91
    ctx->pc = 0x326d20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)145 << 16));
    // 0x326d24: 0xac240e60  sw          $a0, 0xE60($at)
    ctx->pc = 0x326d24u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x910E60u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x910E60u, _value); } while (0);
    // 0x326d28: 0x24636af0  addiu       $v1, $v1, 0x6AF0
    ctx->pc = 0x326d28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27376));
    // 0x326d2c: 0x3c010091  lui         $at, 0x91
    ctx->pc = 0x326d2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)145 << 16));
    // 0x326d30: 0xac230e64  sw          $v1, 0xE64($at)
    ctx->pc = 0x326d30u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x910E64u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x910E64u, _value); } while (0);
    // 0x326d34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x326d34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x326d38: 0x3e00008  jr          $ra
    ctx->pc = 0x326D38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x326D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326D38u;
        // 0x326d3c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x326D38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x326D40u;
}
