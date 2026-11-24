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

// Function: sub_00390030
// Address: 0x390030 - 0x390064
void sub_00390030_0x390030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00390030_0x390030");
#endif

    switch (ctx->pc) {
        case 0x390048u: goto label_390048;
        case 0x390054u: goto label_390054;
        default: break;
    }

    ctx->pc = 0x390030u;

    // 0x390030: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x390030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x390034: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x390034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x390038: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x390038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x39003c: 0x8c850550  lw          $a1, 0x550($a0)
    ctx->pc = 0x39003cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1360)));
    // 0x390040: 0xc0c0844  jal         func_302110
    ctx->pc = 0x390040u;
    SET_GPR_U32(ctx, 31, 0x390048u);
    ctx->pc = 0x390044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x390040u;
    // 0x390044: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302110u, 0x390040u, 0x390048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390048u;
label_390048:
    // 0x390048: 0x8e050554  lw          $a1, 0x554($s0)
    ctx->pc = 0x390048u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1364)));
    // 0x39004c: 0xc0c0844  jal         func_302110
    ctx->pc = 0x39004Cu;
    SET_GPR_U32(ctx, 31, 0x390054u);
    ctx->pc = 0x390050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39004Cu;
    // 0x390050: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302110u, 0x39004Cu, 0x390054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390054u;
label_390054:
    // 0x390054: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x390054u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x390058: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x390058u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39005c: 0x3e00008  jr          $ra
    ctx->pc = 0x39005Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x390060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39005Cu;
        // 0x390060: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39005Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x390064u;
}
