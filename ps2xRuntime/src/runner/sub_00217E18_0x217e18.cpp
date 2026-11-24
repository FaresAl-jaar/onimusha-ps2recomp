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

// Function: sub_00217E18
// Address: 0x217e18 - 0x217e68
void sub_00217E18_0x217e18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00217E18_0x217e18");
#endif

    switch (ctx->pc) {
        case 0x217e58u: goto label_217e58;
        default: break;
    }

    ctx->pc = 0x217e18u;

    // 0x217e18: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x217e18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x217e1c: 0x248536b4  addiu       $a1, $a0, 0x36B4
    ctx->pc = 0x217e1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 14004));
    // 0x217e20: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x217e20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x217e24: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x217e24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217e28: 0x24830e48  addiu       $v1, $a0, 0xE48
    ctx->pc = 0x217e28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 3656));
    // 0x217e2c: 0x8ca60004  lw          $a2, 0x4($a1)
    ctx->pc = 0x217e2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x217e30: 0x4c0000a  bltz        $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x217E30u;
    {
        const bool branch_taken_0x217e30 = (GPR_S64(ctx, 6) < 0);
        ctx->pc = 0x217E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217E30u;
        // 0x217e34: 0x24880df0  addiu       $t0, $a0, 0xDF0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 3568));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217e30) {
            ctx->pc = 0x217E5Cu;
            goto label_217e5c;
        }
    }
    ctx->pc = 0x217E38u;
    // 0x217e38: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x217e38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x217e3c: 0x54600008  bnel        $v1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x217E3Cu;
    {
        const bool branch_taken_0x217e3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x217e3c) {
            ctx->pc = 0x217E40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x217E3Cu;
            // 0x217e40: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x217E60u;
            goto label_217e60;
        }
    }
    ctx->pc = 0x217E44u;
    // 0x217e44: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x217e44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217e48: 0x8d060024  lw          $a2, 0x24($t0)
    ctx->pc = 0x217e48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 36)));
    // 0x217e4c: 0x8ca50008  lw          $a1, 0x8($a1)
    ctx->pc = 0x217e4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x217e50: 0xc07d36e  jal         func_1F4DB8
    ctx->pc = 0x217E50u;
    SET_GPR_U32(ctx, 31, 0x217E58u);
    ctx->pc = 0x217E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217E50u;
    // 0x217e54: 0x8d070028  lw          $a3, 0x28($t0) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4DB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4DB8u, 0x217E50u, 0x217E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217E58u;
label_217e58:
    // 0x217e58: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x217e58u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_217e5c:
    // 0x217e5c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x217e5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_217e60:
    // 0x217e60: 0x3e00008  jr          $ra
    ctx->pc = 0x217E60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x217E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217E60u;
        // 0x217e64: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x217E60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x217E68u;
}
