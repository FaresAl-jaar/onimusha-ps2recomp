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

// Function: sub_003AD9E0
// Address: 0x3ad9e0 - 0x3ada50
void sub_003AD9E0_0x3ad9e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AD9E0_0x3ad9e0");
#endif

    switch (ctx->pc) {
        case 0x3ada08u: goto label_3ada08;
        case 0x3ada28u: goto label_3ada28;
        default: break;
    }

    ctx->pc = 0x3ad9e0u;

    // 0x3ad9e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3ad9e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3ad9e4: 0x3c060068  lui         $a2, 0x68
    ctx->pc = 0x3ad9e4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)104 << 16));
    // 0x3ad9e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3ad9e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3ad9ec: 0x24c62930  addiu       $a2, $a2, 0x2930
    ctx->pc = 0x3ad9ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 10544));
    // 0x3ad9f0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3ad9f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3ad9f4: 0x80850007  lb          $a1, 0x7($a0)
    ctx->pc = 0x3ad9f4u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 7)));
    // 0x3ad9f8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3ad9f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ad9fc: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x3ad9fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x3ada00: 0xc052b70  jal         func_14ADC0
    ctx->pc = 0x3ADA00u;
    SET_GPR_U32(ctx, 31, 0x3ADA08u);
    ctx->pc = 0x3ADA04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ADA00u;
    // 0x3ada04: 0x24848c10  addiu       $a0, $a0, -0x73F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14ADC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14ADC0u, 0x3ADA00u, 0x3ADA08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ADA08u;
label_3ada08:
    // 0x3ada08: 0x4400009  bltz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3ADA08u;
    {
        const bool branch_taken_0x3ada08 = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x3ada08) {
            ctx->pc = 0x3ADA30u;
            goto label_3ada30;
        }
    }
    ctx->pc = 0x3ADA10u;
    // 0x3ada10: 0x82050007  lb          $a1, 0x7($s0)
    ctx->pc = 0x3ada10u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
    // 0x3ada14: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x3ada14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x3ada18: 0x3c060068  lui         $a2, 0x68
    ctx->pc = 0x3ada18u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)104 << 16));
    // 0x3ada1c: 0x24848c10  addiu       $a0, $a0, -0x73F0
    ctx->pc = 0x3ada1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937616));
    // 0x3ada20: 0xc052b70  jal         func_14ADC0
    ctx->pc = 0x3ADA20u;
    SET_GPR_U32(ctx, 31, 0x3ADA28u);
    ctx->pc = 0x3ADA24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ADA20u;
    // 0x3ada24: 0x24c628b8  addiu       $a2, $a2, 0x28B8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 10424));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14ADC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14ADC0u, 0x3ADA20u, 0x3ADA28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ADA28u;
label_3ada28:
    // 0x3ada28: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3ADA28u;
    {
        const bool branch_taken_0x3ada28 = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x3ada28) {
            ctx->pc = 0x3ADA38u;
            goto label_3ada38;
        }
    }
    ctx->pc = 0x3ADA30u;
label_3ada30:
    // 0x3ada30: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3ADA30u;
    {
        const bool branch_taken_0x3ada30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ADA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADA30u;
        // 0x3ada34: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ada30) {
            ctx->pc = 0x3ADA40u;
            goto label_3ada40;
        }
    }
    ctx->pc = 0x3ADA38u;
label_3ada38:
    // 0x3ada38: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3ada38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ada3c: 0x0  nop
    ctx->pc = 0x3ada3cu;
    // NOP
label_3ada40:
    // 0x3ada40: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3ada40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3ada44: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3ada44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ada48: 0x3e00008  jr          $ra
    ctx->pc = 0x3ADA48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3ADA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADA48u;
        // 0x3ada4c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3ADA48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3ADA50u;
}
