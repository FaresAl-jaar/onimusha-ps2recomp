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

// Function: sub_002E5D80
// Address: 0x2e5d80 - 0x2e5e44
void sub_002E5D80_0x2e5d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E5D80_0x2e5d80");
#endif

    switch (ctx->pc) {
        case 0x2e5e38u: goto label_2e5e38;
        default: break;
    }

    ctx->pc = 0x2e5d80u;

    // 0x2e5d80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e5d80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e5d84: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x2e5d84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x2e5d88: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e5d88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e5d8c: 0x244268f0  addiu       $v0, $v0, 0x68F0
    ctx->pc = 0x2e5d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26864));
    // 0x2e5d90: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2e5d90u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x4E68F0u));
    // 0x2e5d94: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x2e5d94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2e5d98: 0x24071ff0  addiu       $a3, $zero, 0x1FF0
    ctx->pc = 0x2e5d98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8176));
    // 0x2e5d9c: 0x24080df0  addiu       $t0, $zero, 0xDF0
    ctx->pc = 0x2e5d9cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3568));
    // 0x2e5da0: 0x7cc30000  sq          $v1, 0x0($a2)
    ctx->pc = 0x2e5da0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 3));
    // 0x2e5da4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2e5da4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2e5da8: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x2e5da8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x2e5dac: 0x344b0dcd  ori         $t3, $v0, 0xDCD
    ctx->pc = 0x2e5dacu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
    // 0x2e5db0: 0x8d2c0000  lw          $t4, 0x0($t1)
    ctx->pc = 0x2e5db0u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x2e5db4: 0x6b1818  mult        $v1, $v1, $t3
    ctx->pc = 0x2e5db4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2e5db8: 0x18c1021  addu        $v0, $t4, $t4
    ctx->pc = 0x2e5db8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 12)));
    // 0x2e5dbc: 0x244a0001  addiu       $t2, $v0, 0x1
    ctx->pc = 0x2e5dbcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2e5dc0: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x2e5dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2e5dc4: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x2e5dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
    // 0x2e5dc8: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x2e5dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x2e5dcc: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2e5dccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2e5dd0: 0x31b02  srl         $v1, $v1, 12
    ctx->pc = 0x2e5dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 12));
    // 0x2e5dd4: 0x6a001b  divu        $zero, $v1, $t2
    ctx->pc = 0x2e5dd4u;
    { uint32_t divisor = GPR_U32(ctx, 10); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x2e5dd8: 0x0  nop
    ctx->pc = 0x2e5dd8u;
    // NOP
    // 0x2e5ddc: 0x0  nop
    ctx->pc = 0x2e5ddcu;
    // NOP
    // 0x2e5de0: 0x1810  mfhi        $v1
    ctx->pc = 0x2e5de0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2e5de4: 0x6c1823  subu        $v1, $v1, $t4
    ctx->pc = 0x2e5de4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x2e5de8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e5de8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e5dec: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x2e5decu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x2e5df0: 0x8d2a0004  lw          $t2, 0x4($t1)
    ctx->pc = 0x2e5df0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x2e5df4: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x2e5df4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x2e5df8: 0x14a1021  addu        $v0, $t2, $t2
    ctx->pc = 0x2e5df8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 10)));
    // 0x2e5dfc: 0x706b1818  mult1       $v1, $v1, $t3
    ctx->pc = 0x2e5dfcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 11); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2e5e00: 0x24490001  addiu       $t1, $v0, 0x1
    ctx->pc = 0x2e5e00u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2e5e04: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x2e5e04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2e5e08: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x2e5e08u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
    // 0x2e5e0c: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x2e5e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x2e5e10: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2e5e10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2e5e14: 0x31b02  srl         $v1, $v1, 12
    ctx->pc = 0x2e5e14u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 12));
    // 0x2e5e18: 0x69001b  divu        $zero, $v1, $t1
    ctx->pc = 0x2e5e18u;
    { uint32_t divisor = GPR_U32(ctx, 9); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x2e5e1c: 0x0  nop
    ctx->pc = 0x2e5e1cu;
    // NOP
    // 0x2e5e20: 0x0  nop
    ctx->pc = 0x2e5e20u;
    // NOP
    // 0x2e5e24: 0x1810  mfhi        $v1
    ctx->pc = 0x2e5e24u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2e5e28: 0x6a1823  subu        $v1, $v1, $t2
    ctx->pc = 0x2e5e28u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x2e5e2c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e5e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e5e30: 0xc07683c  jal         func_1DA0F0
    ctx->pc = 0x2E5E30u;
    SET_GPR_U32(ctx, 31, 0x2E5E38u);
    ctx->pc = 0x2E5E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5E30u;
    // 0x2e5e34: 0xaca20004  sw          $v0, 0x4($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA0F0u, 0x2E5E30u, 0x2E5E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5E38u;
label_2e5e38:
    // 0x2e5e38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e5e38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e5e3c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E5E3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E5E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5E3Cu;
        // 0x2e5e40: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E5E3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E5E44u;
}
