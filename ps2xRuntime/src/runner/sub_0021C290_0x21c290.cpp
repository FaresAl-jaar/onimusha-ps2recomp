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

// Function: sub_0021C290
// Address: 0x21c290 - 0x21c2e4
void sub_0021C290_0x21c290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021C290_0x21c290");
#endif

    switch (ctx->pc) {
        case 0x21c2a4u: goto label_21c2a4;
        case 0x21c2d0u: goto label_21c2d0;
        default: break;
    }

    ctx->pc = 0x21c290u;

    // 0x21c290: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21c290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21c294: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21c294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21c298: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x21c298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x21c29c: 0xc084968  jal         func_2125A0
    ctx->pc = 0x21C29Cu;
    SET_GPR_U32(ctx, 31, 0x21C2A4u);
    ctx->pc = 0x21C2A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C29Cu;
    // 0x21c2a0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2125A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2125A0u, 0x21C29Cu, 0x21C2A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C2A4u;
label_21c2a4:
    // 0x21c2a4: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x21c2a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x21c2a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21c2a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c2ac: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x21C2ACu;
    {
        const bool branch_taken_0x21c2ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C2ACu;
        // 0x21c2b0: 0x34a50138  ori         $a1, $a1, 0x138 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)312);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c2ac) {
            ctx->pc = 0x21C2C8u;
            goto label_21c2c8;
        }
    }
    ctx->pc = 0x21C2B4u;
    // 0x21c2b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21c2b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21c2b8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x21c2b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c2bc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x21c2bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21c2c0: 0x80848e0  j           func_212380
    ctx->pc = 0x21C2C0u;
    ctx->pc = 0x21C2C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C2C0u;
    // 0x21c2c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212380u;
    sub_00212380_0x212380(rdram, ctx, runtime); return;
    ctx->pc = 0x21C2C8u;
label_21c2c8:
    // 0x21c2c8: 0xc0870d0  jal         func_21C340
    ctx->pc = 0x21C2C8u;
    SET_GPR_U32(ctx, 31, 0x21C2D0u);
    ctx->pc = 0x21C340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C340u, 0x21C2C8u, 0x21C2D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C2D0u;
label_21c2d0:
    // 0x21c2d0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x21c2d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c2d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21c2d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21c2d8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x21c2d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21c2dc: 0x3e00008  jr          $ra
    ctx->pc = 0x21C2DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21C2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C2DCu;
        // 0x21c2e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21C2DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21C2E4u;
}
