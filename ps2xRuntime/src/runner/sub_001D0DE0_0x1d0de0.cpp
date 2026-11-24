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

// Function: sub_001D0DE0
// Address: 0x1d0de0 - 0x1d0e28
void sub_001D0DE0_0x1d0de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D0DE0_0x1d0de0");
#endif

    switch (ctx->pc) {
        case 0x1d0dfcu: goto label_1d0dfc;
        default: break;
    }

    ctx->pc = 0x1d0de0u;

    // 0x1d0de0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d0de0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d0de4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1d0de4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1d0de8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d0de8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d0dec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d0decu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d0df0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d0df0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0df4: 0xc074364  jal         func_1D0D90
    ctx->pc = 0x1D0DF4u;
    SET_GPR_U32(ctx, 31, 0x1D0DFCu);
    ctx->pc = 0x1D0DF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0DF4u;
    // 0x1d0df8: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0D90u, 0x1D0DF4u, 0x1D0DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0DFCu;
label_1d0dfc:
    // 0x1d0dfc: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1d0dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1d0e00: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1d0e00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d0e04: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x1d0e04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    // 0x1d0e08: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1d0e08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1d0e0c: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x1d0e0cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1d0e10: 0xa2230008  sb          $v1, 0x8($s1)
    ctx->pc = 0x1d0e10u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 8), (uint8_t)GPR_U32(ctx, 3));
    // 0x1d0e14: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1d0e14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d0e18: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d0e18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d0e1c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d0e1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d0e20: 0x3e00008  jr          $ra
    ctx->pc = 0x1D0E20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D0E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0E20u;
        // 0x1d0e24: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D0E20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D0E28u;
}
