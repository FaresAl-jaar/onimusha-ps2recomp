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

// Function: sub_00252DB0
// Address: 0x252db0 - 0x252e10
void sub_00252DB0_0x252db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00252DB0_0x252db0");
#endif

    switch (ctx->pc) {
        case 0x252db0u: goto label_252db0;
        case 0x252db4u: goto label_252db4;
        case 0x252db8u: goto label_252db8;
        case 0x252dbcu: goto label_252dbc;
        case 0x252dc0u: goto label_252dc0;
        case 0x252dc4u: goto label_252dc4;
        case 0x252dc8u: goto label_252dc8;
        case 0x252dccu: goto label_252dcc;
        case 0x252dd0u: goto label_252dd0;
        case 0x252dd4u: goto label_252dd4;
        case 0x252dd8u: goto label_252dd8;
        case 0x252ddcu: goto label_252ddc;
        case 0x252de0u: goto label_252de0;
        case 0x252de4u: goto label_252de4;
        case 0x252de8u: goto label_252de8;
        case 0x252decu: goto label_252dec;
        case 0x252df0u: goto label_252df0;
        case 0x252df4u: goto label_252df4;
        case 0x252df8u: goto label_252df8;
        case 0x252dfcu: goto label_252dfc;
        case 0x252e00u: goto label_252e00;
        case 0x252e04u: goto label_252e04;
        case 0x252e08u: goto label_252e08;
        case 0x252e0cu: goto label_252e0c;
        default: break;
    }

    ctx->pc = 0x252db0u;

label_252db0:
    // 0x252db0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x252db0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_252db4:
    // 0x252db4: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x252db4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
label_252db8:
    // 0x252db8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x252db8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_252dbc:
    // 0x252dbc: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x252dbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_252dc0:
    // 0x252dc0: 0x24428960  addiu       $v0, $v0, -0x76A0
    ctx->pc = 0x252dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936928));
label_252dc4:
    // 0x252dc4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x252dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_252dc8:
    // 0x252dc8: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
label_252dcc:
    if (ctx->pc == 0x252DCCu) {
        ctx->pc = 0x252DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252DC8u;
        // 0x252dcc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x252DD0u;
        goto label_252dd0;
    }
    ctx->pc = 0x252DC8u;
    {
        const bool branch_taken_0x252dc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x252DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252DC8u;
        // 0x252dcc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252dc8) {
            ctx->pc = 0x252E00u;
            goto label_252e00;
        }
    }
    ctx->pc = 0x252DD0u;
label_252dd0:
    // 0x252dd0: 0x60f809  jalr        $v1
label_252dd4:
    if (ctx->pc == 0x252DD4u) {
        ctx->pc = 0x252DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252DD0u;
        // 0x252dd4: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x252DD8u;
        goto label_252dd8;
    }
    ctx->pc = 0x252DD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x252DD8u);
        ctx->pc = 0x252DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252DD0u;
        // 0x252dd4: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x252DD0u, 0x252DD8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x252DD8u;
label_252dd8:
    // 0x252dd8: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x252dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
label_252ddc:
    // 0x252ddc: 0x3c03004e  lui         $v1, 0x4E
    ctx->pc = 0x252ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)78 << 16));
label_252de0:
    // 0x252de0: 0x24440714  addiu       $a0, $v0, 0x714
    ctx->pc = 0x252de0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1812));
label_252de4:
    // 0x252de4: 0x24630710  addiu       $v1, $v1, 0x710
    ctx->pc = 0x252de4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1808));
label_252de8:
    // 0x252de8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x252de8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_252dec:
    // 0x252dec: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_252df0:
    if (ctx->pc == 0x252DF0u) {
        ctx->pc = 0x252DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252DECu;
        // 0x252df0: 0xac900000  sw          $s0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x252DF4u;
        goto label_252df4;
    }
    ctx->pc = 0x252DECu;
    {
        const bool branch_taken_0x252dec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x252dec) {
            ctx->pc = 0x252DF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x252DECu;
            // 0x252df0: 0xac900000  sw          $s0, 0x0($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x252DF4u;
            goto label_252df4;
        }
    }
    ctx->pc = 0x252DF4u;
label_252df4:
    // 0x252df4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x252df4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_252df8:
    // 0x252df8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x252df8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_252dfc:
    // 0x252dfc: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x252dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_252e00:
    // 0x252e00: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x252e00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_252e04:
    // 0x252e04: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x252e04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_252e08:
    // 0x252e08: 0x3e00008  jr          $ra
label_252e0c:
    if (ctx->pc == 0x252E0Cu) {
        ctx->pc = 0x252E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252E08u;
        // 0x252e0c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x252E10u;
        goto label_fallthrough_0x252e08;
    }
    ctx->pc = 0x252E08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x252E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252E08u;
        // 0x252e0c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x252E08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x252e08:
    ctx->pc = 0x252E10u;
}
