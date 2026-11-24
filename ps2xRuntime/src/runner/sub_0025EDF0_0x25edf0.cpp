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

// Function: sub_0025EDF0
// Address: 0x25edf0 - 0x25ee24
void sub_0025EDF0_0x25edf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025EDF0_0x25edf0");
#endif

    switch (ctx->pc) {
        case 0x25ee0cu: goto label_25ee0c;
        default: break;
    }

    ctx->pc = 0x25edf0u;

    // 0x25edf0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x25edf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25edf4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x25edf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x25edf8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25edf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25edfc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x25edfcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ee00: 0x26040070  addiu       $a0, $s0, 0x70
    ctx->pc = 0x25ee00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x25ee04: 0xc096d40  jal         func_25B500
    ctx->pc = 0x25EE04u;
    SET_GPR_U32(ctx, 31, 0x25EE0Cu);
    ctx->pc = 0x25EE08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25EE04u;
    // 0x25ee08: 0x260500b0  addiu       $a1, $s0, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B500u, 0x25EE04u, 0x25EE0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EE0Cu;
label_25ee0c:
    // 0x25ee0c: 0x7a030040  lq          $v1, 0x40($s0)
    ctx->pc = 0x25ee0cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x25ee10: 0x7e0300a0  sq          $v1, 0xA0($s0)
    ctx->pc = 0x25ee10u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 160), GPR_VEC(ctx, 3));
    // 0x25ee14: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x25ee14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25ee18: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25ee18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25ee1c: 0x3e00008  jr          $ra
    ctx->pc = 0x25EE1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25EE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EE1Cu;
        // 0x25ee20: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25EE1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25EE24u;
}
