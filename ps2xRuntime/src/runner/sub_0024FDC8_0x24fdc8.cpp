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

// Function: sub_0024FDC8
// Address: 0x24fdc8 - 0x24fe14
void sub_0024FDC8_0x24fdc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024FDC8_0x24fdc8");
#endif

    switch (ctx->pc) {
        case 0x24fdf8u: goto label_24fdf8;
        default: break;
    }

    ctx->pc = 0x24fdc8u;

    // 0x24fdc8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x24fdc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24fdcc: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x24fdccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x24fdd0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24fdd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24fdd4: 0x2450a890  addiu       $s0, $v0, -0x5770
    ctx->pc = 0x24fdd4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944912));
    // 0x24fdd8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x24fdd8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4DA890u));
    // 0x24fddc: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x24FDDCu;
    {
        const bool branch_taken_0x24fddc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24FDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FDDCu;
        // 0x24fde0: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fddc) {
            ctx->pc = 0x24FDFCu;
            goto label_24fdfc;
        }
    }
    ctx->pc = 0x24FDE4u;
    // 0x24fde4: 0x3c04004e  lui         $a0, 0x4E
    ctx->pc = 0x24fde4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)78 << 16));
    // 0x24fde8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x24fde8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24fdec: 0x2484a898  addiu       $a0, $a0, -0x5768
    ctx->pc = 0x24fdecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944920));
    // 0x24fdf0: 0xc049590  jal         func_125640
    ctx->pc = 0x24FDF0u;
    SET_GPR_U32(ctx, 31, 0x24FDF8u);
    ctx->pc = 0x24FDF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24FDF0u;
    // 0x24fdf4: 0x24060480  addiu       $a2, $zero, 0x480 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x24FDF0u, 0x24FDF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24FDF8u;
label_24fdf8:
    // 0x24fdf8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x24fdf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_24fdfc:
    // 0x24fdfc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x24fdfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x24fe00: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x24fe00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x24fe04: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x24fe04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x24fe08: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24fe08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24fe0c: 0x3e00008  jr          $ra
    ctx->pc = 0x24FE0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24FE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FE0Cu;
        // 0x24fe10: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24FE0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24FE14u;
}
