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

// Function: sub_00213D78
// Address: 0x213d78 - 0x213de0
void sub_00213D78_0x213d78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00213D78_0x213d78");
#endif

    switch (ctx->pc) {
        case 0x213da4u: goto label_213da4;
        case 0x213dbcu: goto label_213dbc;
        default: break;
    }

    ctx->pc = 0x213d78u;

    // 0x213d78: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x213d78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x213d7c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x213d7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x213d80: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x213d80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213d84: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x213d84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x213d88: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x213d88u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213d8c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x213d8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x213d90: 0x26021f74  addiu       $v0, $s0, 0x1F74
    ctx->pc = 0x213d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 8052));
    // 0x213d94: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x213d94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x213d98: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x213d98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x213d9c: 0xc08408e  jal         func_210238
    ctx->pc = 0x213D9Cu;
    SET_GPR_U32(ctx, 31, 0x213DA4u);
    ctx->pc = 0x213DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213D9Cu;
    // 0x213da0: 0x8c510008  lw          $s1, 0x8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x210238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210238u, 0x213D9Cu, 0x213DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213DA4u;
label_213da4:
    // 0x213da4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x213da4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213da8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x213da8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x213dac: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x213DACu;
    {
        const bool branch_taken_0x213dac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x213DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213DACu;
        // 0x213db0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213dac) {
            ctx->pc = 0x213DC0u;
            goto label_213dc0;
        }
    }
    ctx->pc = 0x213DB4u;
    // 0x213db4: 0xc084eac  jal         func_213AB0
    ctx->pc = 0x213DB4u;
    SET_GPR_U32(ctx, 31, 0x213DBCu);
    ctx->pc = 0x213DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213DB4u;
    // 0x213db8: 0x8e25003c  lw          $a1, 0x3C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x213AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x213AB0u, 0x213DB4u, 0x213DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213DBCu;
label_213dbc:
    // 0x213dbc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x213dbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_213dc0:
    // 0x213dc0: 0x56400001  bnel        $s2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x213DC0u;
    {
        const bool branch_taken_0x213dc0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x213dc0) {
            ctx->pc = 0x213DC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x213DC0u;
            // 0x213dc4: 0xae450000  sw          $a1, 0x0($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x213DC8u;
            goto label_213dc8;
        }
    }
    ctx->pc = 0x213DC8u;
label_213dc8:
    // 0x213dc8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x213dc8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x213dcc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x213dccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x213dd0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x213dd0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x213dd4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x213dd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x213dd8: 0x3e00008  jr          $ra
    ctx->pc = 0x213DD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x213DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213DD8u;
        // 0x213ddc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x213DD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x213DE0u;
}
