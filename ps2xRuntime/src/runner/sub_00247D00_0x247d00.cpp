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

// Function: sub_00247D00
// Address: 0x247d00 - 0x247d30
void sub_00247D00_0x247d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00247D00_0x247d00");
#endif

    switch (ctx->pc) {
        case 0x247d1cu: goto label_247d1c;
        default: break;
    }

    ctx->pc = 0x247d00u;

    // 0x247d00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x247d00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x247d04: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x247d04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
    // 0x247d08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x247d08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x247d0c: 0x2442fe50  addiu       $v0, $v0, -0x1B0
    ctx->pc = 0x247d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966864));
    // 0x247d10: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x247d10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247d14: 0xc092566  jal         func_249598
    ctx->pc = 0x247D14u;
    SET_GPR_U32(ctx, 31, 0x247D1Cu);
    ctx->pc = 0x247D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247D14u;
    // 0x247d18: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249598u, 0x247D14u, 0x247D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247D1Cu;
label_247d1c:
    // 0x247d1c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x247d1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x247d20: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x247d20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
    // 0x247d24: 0x2442fe68  addiu       $v0, $v0, -0x198
    ctx->pc = 0x247d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966888));
    // 0x247d28: 0x3e00008  jr          $ra
    ctx->pc = 0x247D28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x247D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247D28u;
        // 0x247d2c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x247D28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x247D30u;
}
