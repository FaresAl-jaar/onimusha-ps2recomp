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

// Function: sub_002F6DA0
// Address: 0x2f6da0 - 0x2f6e28
void sub_002F6DA0_0x2f6da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F6DA0_0x2f6da0");
#endif

    switch (ctx->pc) {
        case 0x2f6dc0u: goto label_2f6dc0;
        case 0x2f6de0u: goto label_2f6de0;
        case 0x2f6df8u: goto label_2f6df8;
        case 0x2f6e08u: goto label_2f6e08;
        default: break;
    }

    ctx->pc = 0x2f6da0u;

    // 0x2f6da0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2f6da0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2f6da4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2f6da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2f6da8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f6da8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2f6dac: 0x8082000c  lb          $v0, 0xC($a0)
    ctx->pc = 0x2f6dacu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2f6db0: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2F6DB0u;
    {
        const bool branch_taken_0x2f6db0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F6DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6DB0u;
        // 0x2f6db4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6db0) {
            ctx->pc = 0x2F6DF0u;
            goto label_2f6df0;
        }
    }
    ctx->pc = 0x2F6DB8u;
    // 0x2f6db8: 0xc0fd4c0  jal         func_3F5300
    ctx->pc = 0x2F6DB8u;
    SET_GPR_U32(ctx, 31, 0x2F6DC0u);
    ctx->pc = 0x3F5300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F5300u, 0x2F6DB8u, 0x2F6DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6DC0u;
label_2f6dc0:
    // 0x2f6dc0: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x2f6dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x2f6dc4: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x2f6dc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x2f6dc8: 0x2484cbe0  addiu       $a0, $a0, -0x3420
    ctx->pc = 0x2f6dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    // 0x2f6dcc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2f6dccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6dd0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2f6dd0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6dd4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2f6dd4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6dd8: 0xc063c70  jal         func_18F1C0
    ctx->pc = 0x2F6DD8u;
    SET_GPR_U32(ctx, 31, 0x2F6DE0u);
    ctx->pc = 0x2F6DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6DD8u;
    // 0x2f6ddc: 0x2409ffff  addiu       $t1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F1C0u, 0x2F6DD8u, 0x2F6DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6DE0u;
label_2f6de0:
    // 0x2f6de0: 0x8202000c  lb          $v0, 0xC($s0)
    ctx->pc = 0x2f6de0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2f6de4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2f6de4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2f6de8: 0xa202000c  sb          $v0, 0xC($s0)
    ctx->pc = 0x2f6de8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12), (uint8_t)GPR_U32(ctx, 2));
    // 0x2f6dec: 0x0  nop
    ctx->pc = 0x2f6decu;
    // NOP
label_2f6df0:
    // 0x2f6df0: 0xc0fd4d0  jal         func_3F5340
    ctx->pc = 0x2F6DF0u;
    SET_GPR_U32(ctx, 31, 0x2F6DF8u);
    ctx->pc = 0x3F5340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F5340u, 0x2F6DF0u, 0x2F6DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6DF8u;
label_2f6df8:
    // 0x2f6df8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F6DF8u;
    {
        const bool branch_taken_0x2f6df8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F6DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6DF8u;
        // 0x2f6dfc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6df8) {
            ctx->pc = 0x2F6E10u;
            goto label_2f6e10;
        }
    }
    ctx->pc = 0x2F6E00u;
    // 0x2f6e00: 0xc0bd418  jal         func_2F5060
    ctx->pc = 0x2F6E00u;
    SET_GPR_U32(ctx, 31, 0x2F6E08u);
    ctx->pc = 0x2F6E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6E00u;
    // 0x2f6e04: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F5060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F5060u, 0x2F6E00u, 0x2F6E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6E08u;
label_2f6e08:
    // 0x2f6e08: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2F6E08u;
    {
        const bool branch_taken_0x2f6e08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6E08u;
        // 0x2f6e0c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6e08) {
            ctx->pc = 0x2F6E18u;
            goto label_2f6e18;
        }
    }
    ctx->pc = 0x2F6E10u;
label_2f6e10:
    // 0x2f6e10: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f6e10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6e14: 0x0  nop
    ctx->pc = 0x2f6e14u;
    // NOP
label_2f6e18:
    // 0x2f6e18: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2f6e18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f6e1c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f6e1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f6e20: 0x3e00008  jr          $ra
    ctx->pc = 0x2F6E20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F6E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6E20u;
        // 0x2f6e24: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F6E20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F6E28u;
}
