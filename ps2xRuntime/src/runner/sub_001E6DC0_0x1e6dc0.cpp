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

// Function: sub_001E6DC0
// Address: 0x1e6dc0 - 0x1e6e14
void sub_001E6DC0_0x1e6dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E6DC0_0x1e6dc0");
#endif

    switch (ctx->pc) {
        case 0x1e6dc0u: goto label_1e6dc0;
        case 0x1e6dc4u: goto label_1e6dc4;
        case 0x1e6dc8u: goto label_1e6dc8;
        case 0x1e6dccu: goto label_1e6dcc;
        case 0x1e6dd0u: goto label_1e6dd0;
        case 0x1e6dd4u: goto label_1e6dd4;
        case 0x1e6dd8u: goto label_1e6dd8;
        case 0x1e6ddcu: goto label_1e6ddc;
        case 0x1e6de0u: goto label_1e6de0;
        case 0x1e6de4u: goto label_1e6de4;
        case 0x1e6de8u: goto label_1e6de8;
        case 0x1e6decu: goto label_1e6dec;
        case 0x1e6df0u: goto label_1e6df0;
        case 0x1e6df4u: goto label_1e6df4;
        case 0x1e6df8u: goto label_1e6df8;
        case 0x1e6dfcu: goto label_1e6dfc;
        case 0x1e6e00u: goto label_1e6e00;
        case 0x1e6e04u: goto label_1e6e04;
        case 0x1e6e08u: goto label_1e6e08;
        case 0x1e6e0cu: goto label_1e6e0c;
        case 0x1e6e10u: goto label_1e6e10;
        default: break;
    }

    ctx->pc = 0x1e6dc0u;

label_1e6dc0:
    // 0x1e6dc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e6dc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1e6dc4:
    // 0x1e6dc4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e6dc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1e6dc8:
    // 0x1e6dc8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e6dc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e6dcc:
    // 0x1e6dcc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e6dccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e6dd0:
    // 0x1e6dd0: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
label_1e6dd4:
    if (ctx->pc == 0x1E6DD4u) {
        ctx->pc = 0x1E6DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6DD0u;
        // 0x1e6dd4: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6DD8u;
        goto label_1e6dd8;
    }
    ctx->pc = 0x1E6DD0u;
    {
        const bool branch_taken_0x1e6dd0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6DD0u;
        // 0x1e6dd4: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6dd0) {
            ctx->pc = 0x1E6E00u;
            goto label_1e6e00;
        }
    }
    ctx->pc = 0x1E6DD8u;
label_1e6dd8:
    // 0x1e6dd8: 0x24426c30  addiu       $v0, $v0, 0x6C30
    ctx->pc = 0x1e6dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27696));
label_1e6ddc:
    // 0x1e6ddc: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x1e6ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_1e6de0:
    // 0x1e6de0: 0x8c990020  lw          $t9, 0x20($a0)
    ctx->pc = 0x1e6de0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_1e6de4:
    // 0x1e6de4: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1e6de4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1e6de8:
    // 0x1e6de8: 0x320f809  jalr        $t9
label_1e6dec:
    if (ctx->pc == 0x1E6DECu) {
        ctx->pc = 0x1E6DF0u;
        goto label_1e6df0;
    }
    ctx->pc = 0x1E6DE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E6DF0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E6DE8u, 0x1E6DF0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E6DF0u;
label_1e6df0:
    // 0x1e6df0: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
label_1e6df4:
    if (ctx->pc == 0x1E6DF4u) {
        ctx->pc = 0x1E6DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6DF0u;
        // 0x1e6df4: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6DF8u;
        goto label_1e6df8;
    }
    ctx->pc = 0x1E6DF0u;
    {
        const bool branch_taken_0x1e6df0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6DF0u;
        // 0x1e6df4: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6df0) {
            ctx->pc = 0x1E6E00u;
            goto label_1e6e00;
        }
    }
    ctx->pc = 0x1E6DF8u;
label_1e6df8:
    // 0x1e6df8: 0x244272f0  addiu       $v0, $v0, 0x72F0
    ctx->pc = 0x1e6df8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29424));
label_1e6dfc:
    // 0x1e6dfc: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x1e6dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_1e6e00:
    // 0x1e6e00: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1e6e00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e6e04:
    // 0x1e6e04: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e6e04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1e6e08:
    // 0x1e6e08: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e6e08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e6e0c:
    // 0x1e6e0c: 0x3e00008  jr          $ra
label_1e6e10:
    if (ctx->pc == 0x1E6E10u) {
        ctx->pc = 0x1E6E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6E0Cu;
        // 0x1e6e10: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6E14u;
        goto label_fallthrough_0x1e6e0c;
    }
    ctx->pc = 0x1E6E0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E6E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6E0Cu;
        // 0x1e6e10: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E6E0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1e6e0c:
    ctx->pc = 0x1E6E14u;
}
