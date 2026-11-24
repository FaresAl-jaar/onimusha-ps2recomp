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

// Function: sub_00209DC0
// Address: 0x209dc0 - 0x209e1c
void sub_00209DC0_0x209dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00209DC0_0x209dc0");
#endif

    switch (ctx->pc) {
        case 0x209dd4u: goto label_209dd4;
        case 0x209decu: goto label_209dec;
        case 0x209e08u: goto label_209e08;
        default: break;
    }

    ctx->pc = 0x209dc0u;

    // 0x209dc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x209dc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x209dc4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x209dc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x209dc8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x209dc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x209dcc: 0xc081d84  jal         func_207610
    ctx->pc = 0x209DCCu;
    SET_GPR_U32(ctx, 31, 0x209DD4u);
    ctx->pc = 0x209DD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209DCCu;
    // 0x209dd0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207610u, 0x209DCCu, 0x209DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209DD4u;
label_209dd4:
    // 0x209dd4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x209dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x209dd8: 0x10430009  beq         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x209DD8u;
    {
        const bool branch_taken_0x209dd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x209DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209DD8u;
        // 0x209ddc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209dd8) {
            ctx->pc = 0x209E00u;
            goto label_209e00;
        }
    }
    ctx->pc = 0x209DE0u;
    // 0x209de0: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x209de0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x209de4: 0xc082e3e  jal         func_20B8F8
    ctx->pc = 0x209DE4u;
    SET_GPR_U32(ctx, 31, 0x209DECu);
    ctx->pc = 0x209DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209DE4u;
    // 0x209de8: 0x24848198  addiu       $a0, $a0, -0x7E68 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934936));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B8F8u, 0x209DE4u, 0x209DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209DECu;
label_209dec:
    // 0x209dec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x209decu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209df0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x209df0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x209df4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x209df4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x209df8: 0x3e00008  jr          $ra
    ctx->pc = 0x209DF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x209DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209DF8u;
        // 0x209dfc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x209DF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x209E00u;
label_209e00:
    // 0x209e00: 0xc0821e6  jal         func_208798
    ctx->pc = 0x209E00u;
    SET_GPR_U32(ctx, 31, 0x209E08u);
    ctx->pc = 0x208798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208798u, 0x209E00u, 0x209E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209E08u;
label_209e08:
    // 0x209e08: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x209e08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x209e0c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x209e0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209e10: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x209e10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x209e14: 0x8089980  j           func_226600
    ctx->pc = 0x209E14u;
    ctx->pc = 0x209E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209E14u;
    // 0x209e18: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226600u;
    sub_00226600_0x226600(rdram, ctx, runtime); return;
    ctx->pc = 0x209E1Cu;
}
