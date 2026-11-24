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

// Function: sub_0024CAA0
// Address: 0x24caa0 - 0x24cad8
void sub_0024CAA0_0x24caa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024CAA0_0x24caa0");
#endif

    switch (ctx->pc) {
        case 0x24cabcu: goto label_24cabc;
        default: break;
    }

    ctx->pc = 0x24caa0u;

    // 0x24caa0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x24caa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24caa4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x24caa4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24caa8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x24CAA8u;
    {
        const bool branch_taken_0x24caa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24CAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CAA8u;
        // 0x24caac: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24caa8) {
            ctx->pc = 0x24CAC8u;
            goto label_24cac8;
        }
    }
    ctx->pc = 0x24CAB0u;
    // 0x24cab0: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x24cab0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x24cab4: 0xc093184  jal         func_24C610
    ctx->pc = 0x24CAB4u;
    SET_GPR_U32(ctx, 31, 0x24CABCu);
    ctx->pc = 0x24CAB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24CAB4u;
    // 0x24cab8: 0x24a5dcb0  addiu       $a1, $a1, -0x2350 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24C610u, 0x24CAB4u, 0x24CABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CABCu;
label_24cabc:
    // 0x24cabc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x24CABCu;
    {
        const bool branch_taken_0x24cabc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24CAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CABCu;
        // 0x24cac0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cabc) {
            ctx->pc = 0x24CACCu;
            goto label_24cacc;
        }
    }
    ctx->pc = 0x24CAC4u;
    // 0x24cac4: 0x0  nop
    ctx->pc = 0x24cac4u;
    // NOP
label_24cac8:
    // 0x24cac8: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x24cac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_24cacc:
    // 0x24cacc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24caccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24cad0: 0x3e00008  jr          $ra
    ctx->pc = 0x24CAD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24CAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CAD0u;
        // 0x24cad4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24CAD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24CAD8u;
}
