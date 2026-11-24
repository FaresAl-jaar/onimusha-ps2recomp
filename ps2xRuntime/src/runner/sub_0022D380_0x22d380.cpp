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

// Function: sub_0022D380
// Address: 0x22d380 - 0x22d3e4
void sub_0022D380_0x22d380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022D380_0x22d380");
#endif

    switch (ctx->pc) {
        case 0x22d3a0u: goto label_22d3a0;
        case 0x22d3bcu: goto label_22d3bc;
        default: break;
    }

    ctx->pc = 0x22d380u;

    // 0x22d380: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x22d380u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x22d384: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x22d384u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x22d388: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x22d388u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x22d38c: 0x24a5a250  addiu       $a1, $a1, -0x5DB0
    ctx->pc = 0x22d38cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943312));
    // 0x22d390: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x22d390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22d394: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x22d394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x22d398: 0xc0494fc  jal         func_1253F0
    ctx->pc = 0x22D398u;
    SET_GPR_U32(ctx, 31, 0x22D3A0u);
    ctx->pc = 0x22D39Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D398u;
    // 0x22d39c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1253F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1253F0u, 0x22D398u, 0x22D3A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D3A0u;
label_22d3a0:
    // 0x22d3a0: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x22d3a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x22d3a4: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x22d3a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x22d3a8: 0x24a5a258  addiu       $a1, $a1, -0x5DA8
    ctx->pc = 0x22d3a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943320));
    // 0x22d3ac: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x22D3ACu;
    {
        const bool branch_taken_0x22d3ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22D3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D3ACu;
        // 0x22d3b0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d3ac) {
            ctx->pc = 0x22D3D0u;
            goto label_22d3d0;
        }
    }
    ctx->pc = 0x22D3B4u;
    // 0x22d3b4: 0xc0494fc  jal         func_1253F0
    ctx->pc = 0x22D3B4u;
    SET_GPR_U32(ctx, 31, 0x22D3BCu);
    ctx->pc = 0x1253F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1253F0u, 0x22D3B4u, 0x22D3BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D3BCu;
label_22d3bc:
    // 0x22d3bc: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x22D3BCu;
    {
        const bool branch_taken_0x22d3bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22d3bc) {
            ctx->pc = 0x22D3C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22D3BCu;
            // 0x22d3c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22D3D4u;
            goto label_22d3d4;
        }
    }
    ctx->pc = 0x22D3C4u;
    // 0x22d3c4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x22D3C4u;
    {
        const bool branch_taken_0x22d3c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D3C4u;
        // 0x22d3c8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d3c4) {
            ctx->pc = 0x22D3D4u;
            goto label_22d3d4;
        }
    }
    ctx->pc = 0x22D3CCu;
    // 0x22d3cc: 0x0  nop
    ctx->pc = 0x22d3ccu;
    // NOP
label_22d3d0:
    // 0x22d3d0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x22d3d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22d3d4:
    // 0x22d3d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22d3d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22d3d8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x22d3d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x22d3dc: 0x3e00008  jr          $ra
    ctx->pc = 0x22D3DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22D3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D3DCu;
        // 0x22d3e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22D3DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22D3E4u;
}
