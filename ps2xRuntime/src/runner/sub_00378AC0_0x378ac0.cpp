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

// Function: sub_00378AC0
// Address: 0x378ac0 - 0x378af0
void sub_00378AC0_0x378ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00378AC0_0x378ac0");
#endif

    switch (ctx->pc) {
        case 0x378ad8u: goto label_378ad8;
        case 0x378ae0u: goto label_378ae0;
        default: break;
    }

    ctx->pc = 0x378ac0u;

    // 0x378ac0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x378ac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x378ac4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x378ac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x378ac8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x378ac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x378acc: 0x8c8505a0  lw          $a1, 0x5A0($a0)
    ctx->pc = 0x378accu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1440)));
    // 0x378ad0: 0xc0c0844  jal         func_302110
    ctx->pc = 0x378AD0u;
    SET_GPR_U32(ctx, 31, 0x378AD8u);
    ctx->pc = 0x378AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378AD0u;
    // 0x378ad4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302110u, 0x378AD0u, 0x378AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378AD8u;
label_378ad8:
    // 0x378ad8: 0xc0ddec4  jal         func_377B10
    ctx->pc = 0x378AD8u;
    SET_GPR_U32(ctx, 31, 0x378AE0u);
    ctx->pc = 0x378ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378AD8u;
    // 0x378adc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x377B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x377B10u, 0x378AD8u, 0x378AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378AE0u;
label_378ae0:
    // 0x378ae0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x378ae0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x378ae4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x378ae4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x378ae8: 0x3e00008  jr          $ra
    ctx->pc = 0x378AE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x378AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378AE8u;
        // 0x378aec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x378AE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x378AF0u;
}
