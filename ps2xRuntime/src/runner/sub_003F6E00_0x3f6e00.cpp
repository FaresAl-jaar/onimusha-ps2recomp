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

// Function: sub_003F6E00
// Address: 0x3f6e00 - 0x3f6e40
void sub_003F6E00_0x3f6e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F6E00_0x3f6e00");
#endif

    switch (ctx->pc) {
        case 0x3f6e28u: goto label_3f6e28;
        default: break;
    }

    ctx->pc = 0x3f6e00u;

    // 0x3f6e00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3f6e00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3f6e04: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3f6e04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3f6e08: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3f6e08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3f6e0c: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x3f6e0cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x3f6e10: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3F6E10u;
    {
        const bool branch_taken_0x3f6e10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F6E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6E10u;
        // 0x3f6e14: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f6e10) {
            ctx->pc = 0x3F6E20u;
            goto label_3f6e20;
        }
    }
    ctx->pc = 0x3F6E18u;
    // 0x3f6e18: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3F6E18u;
    {
        const bool branch_taken_0x3f6e18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f6e18) {
            ctx->pc = 0x3F6E30u;
            goto label_3f6e30;
        }
    }
    ctx->pc = 0x3F6E20u;
label_3f6e20:
    // 0x3f6e20: 0xc09c438  jal         func_2710E0
    ctx->pc = 0x3F6E20u;
    SET_GPR_U32(ctx, 31, 0x3F6E28u);
    ctx->pc = 0x2710E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2710E0u, 0x3F6E20u, 0x3F6E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F6E28u;
label_3f6e28:
    // 0x3f6e28: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x3f6e28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x3f6e2c: 0xa2030001  sb          $v1, 0x1($s0)
    ctx->pc = 0x3f6e2cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
label_3f6e30:
    // 0x3f6e30: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3f6e30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3f6e34: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3f6e34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3f6e38: 0x3e00008  jr          $ra
    ctx->pc = 0x3F6E38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F6E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6E38u;
        // 0x3f6e3c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F6E38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F6E40u;
}
