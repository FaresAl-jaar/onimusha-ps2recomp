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

// Function: sub_00238DC8
// Address: 0x238dc8 - 0x238e14
void sub_00238DC8_0x238dc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00238DC8_0x238dc8");
#endif

    switch (ctx->pc) {
        case 0x238df8u: goto label_238df8;
        case 0x238e04u: goto label_238e04;
        default: break;
    }

    ctx->pc = 0x238dc8u;

    // 0x238dc8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x238dc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x238dcc: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x238dccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238dd0: 0x24c707ff  addiu       $a3, $a2, 0x7FF
    ctx->pc = 0x238dd0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 2047));
    // 0x238dd4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x238dd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238dd8: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x238dd8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x238ddc: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x238ddcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x238de0: 0x73ac2  srl         $a3, $a3, 11
    ctx->pc = 0x238de0u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 7), 11));
    // 0x238de4: 0x24a5af70  addiu       $a1, $a1, -0x5090
    ctx->pc = 0x238de4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946672));
    // 0x238de8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x238de8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238dec: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x238decu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x238df0: 0xc049ce8  jal         func_1273A0
    ctx->pc = 0x238DF0u;
    SET_GPR_U32(ctx, 31, 0x238DF8u);
    ctx->pc = 0x238DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238DF0u;
    // 0x238df4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1273A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1273A0u, 0x238DF0u, 0x238DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238DF8u;
label_238df8:
    // 0x238df8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x238df8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238dfc: 0xc08f244  jal         func_23C910
    ctx->pc = 0x238DFCu;
    SET_GPR_U32(ctx, 31, 0x238E04u);
    ctx->pc = 0x238E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238DFCu;
    // 0x238e00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C910u, 0x238DFCu, 0x238E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238E04u;
label_238e04:
    // 0x238e04: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x238e04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x238e08: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x238e08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x238e0c: 0x3e00008  jr          $ra
    ctx->pc = 0x238E0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x238E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238E0Cu;
        // 0x238e10: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x238E0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x238E14u;
}
