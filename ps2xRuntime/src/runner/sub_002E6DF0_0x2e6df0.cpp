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

// Function: sub_002E6DF0
// Address: 0x2e6df0 - 0x2e6e50
void sub_002E6DF0_0x2e6df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E6DF0_0x2e6df0");
#endif

    switch (ctx->pc) {
        case 0x2e6e04u: goto label_2e6e04;
        default: break;
    }

    ctx->pc = 0x2e6df0u;

    // 0x2e6df0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e6df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e6df4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2e6df4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2e6df8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e6df8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e6dfc: 0xc0a4a1c  jal         func_292870
    ctx->pc = 0x2E6DFCu;
    SET_GPR_U32(ctx, 31, 0x2E6E04u);
    ctx->pc = 0x2E6E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6DFCu;
    // 0x2e6e00: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292870u, 0x2E6DFCu, 0x2E6E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6E04u;
label_2e6e04:
    // 0x2e6e04: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x2e6e04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x2e6e08: 0x24030077  addiu       $v1, $zero, 0x77
    ctx->pc = 0x2e6e08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 119));
    // 0x2e6e0c: 0xae0400e8  sw          $a0, 0xE8($s0)
    ctx->pc = 0x2e6e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 4));
    // 0x2e6e10: 0xae0406c0  sw          $a0, 0x6C0($s0)
    ctx->pc = 0x2e6e10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1728), GPR_U32(ctx, 4));
    // 0x2e6e14: 0x92040002  lbu         $a0, 0x2($s0)
    ctx->pc = 0x2e6e14u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x2e6e18: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E6E18u;
    {
        const bool branch_taken_0x2e6e18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e6e18) {
            ctx->pc = 0x2E6E38u;
            goto label_2e6e38;
        }
    }
    ctx->pc = 0x2E6E20u;
    // 0x2e6e20: 0x24030076  addiu       $v1, $zero, 0x76
    ctx->pc = 0x2e6e20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 118));
    // 0x2e6e24: 0x0  nop
    ctx->pc = 0x2e6e24u;
    // NOP
    // 0x2e6e28: 0x24030072  addiu       $v1, $zero, 0x72
    ctx->pc = 0x2e6e28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
    // 0x2e6e2c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2E6E2Cu;
    {
        const bool branch_taken_0x2e6e2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6E2Cu;
        // 0x2e6e30: 0xa2032b64  sb          $v1, 0x2B64($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 11108), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6e2c) {
            ctx->pc = 0x2E6E40u;
            goto label_2e6e40;
        }
    }
    ctx->pc = 0x2E6E34u;
    // 0x2e6e34: 0x0  nop
    ctx->pc = 0x2e6e34u;
    // NOP
label_2e6e38:
    // 0x2e6e38: 0x24030073  addiu       $v1, $zero, 0x73
    ctx->pc = 0x2e6e38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
    // 0x2e6e3c: 0xa2032b64  sb          $v1, 0x2B64($s0)
    ctx->pc = 0x2e6e3cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11108), (uint8_t)GPR_U32(ctx, 3));
label_2e6e40:
    // 0x2e6e40: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2e6e40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e6e44: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e6e44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e6e48: 0x3e00008  jr          $ra
    ctx->pc = 0x2E6E48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E6E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6E48u;
        // 0x2e6e4c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E6E48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E6E50u;
}
