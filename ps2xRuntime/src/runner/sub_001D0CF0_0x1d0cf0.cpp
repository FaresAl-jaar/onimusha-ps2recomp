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

// Function: sub_001D0CF0
// Address: 0x1d0cf0 - 0x1d0d34
void sub_001D0CF0_0x1d0cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D0CF0_0x1d0cf0");
#endif

    switch (ctx->pc) {
        case 0x1d0d1cu: goto label_1d0d1c;
        default: break;
    }

    ctx->pc = 0x1d0cf0u;

    // 0x1d0cf0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d0cf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d0cf4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d0cf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d0cf8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d0cf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d0cfc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d0cfcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0d00: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D0D00u;
    {
        const bool branch_taken_0x1d0d00 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0D00u;
        // 0x1d0d04: 0x5143c  dsll32      $v0, $a1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0d00) {
            ctx->pc = 0x1D0D20u;
            goto label_1d0d20;
        }
    }
    ctx->pc = 0x1D0D08u;
    // 0x1d0d08: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1d0d08u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1d0d0c: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D0D0Cu;
    {
        const bool branch_taken_0x1d0d0c = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x1d0d0c) {
            ctx->pc = 0x1D0D20u;
            goto label_1d0d20;
        }
    }
    ctx->pc = 0x1D0D14u;
    // 0x1d0d14: 0xc040148  jal         func_100520
    ctx->pc = 0x1D0D14u;
    SET_GPR_U32(ctx, 31, 0x1D0D1Cu);
    ctx->pc = 0x100520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100520u, 0x1D0D14u, 0x1D0D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0D1Cu;
label_1d0d1c:
    // 0x1d0d1c: 0x0  nop
    ctx->pc = 0x1d0d1cu;
    // NOP
label_1d0d20:
    // 0x1d0d20: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1d0d20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0d24: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d0d24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d0d28: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d0d28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d0d2c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D0D2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D0D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0D2Cu;
        // 0x1d0d30: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D0D2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D0D34u;
}
