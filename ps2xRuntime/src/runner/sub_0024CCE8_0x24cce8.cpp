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

// Function: sub_0024CCE8
// Address: 0x24cce8 - 0x24cd20
void sub_0024CCE8_0x24cce8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024CCE8_0x24cce8");
#endif

    switch (ctx->pc) {
        case 0x24cd04u: goto label_24cd04;
        default: break;
    }

    ctx->pc = 0x24cce8u;

    // 0x24cce8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x24cce8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24ccec: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x24ccecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ccf0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x24CCF0u;
    {
        const bool branch_taken_0x24ccf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24CCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CCF0u;
        // 0x24ccf4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ccf0) {
            ctx->pc = 0x24CD10u;
            goto label_24cd10;
        }
    }
    ctx->pc = 0x24CCF8u;
    // 0x24ccf8: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x24ccf8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x24ccfc: 0xc093184  jal         func_24C610
    ctx->pc = 0x24CCFCu;
    SET_GPR_U32(ctx, 31, 0x24CD04u);
    ctx->pc = 0x24CD00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24CCFCu;
    // 0x24cd00: 0x24a5dd50  addiu       $a1, $a1, -0x22B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24C610u, 0x24CCFCu, 0x24CD04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CD04u;
label_24cd04:
    // 0x24cd04: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x24CD04u;
    {
        const bool branch_taken_0x24cd04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24CD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CD04u;
        // 0x24cd08: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cd04) {
            ctx->pc = 0x24CD14u;
            goto label_24cd14;
        }
    }
    ctx->pc = 0x24CD0Cu;
    // 0x24cd0c: 0x0  nop
    ctx->pc = 0x24cd0cu;
    // NOP
label_24cd10:
    // 0x24cd10: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x24cd10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_24cd14:
    // 0x24cd14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24cd14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24cd18: 0x3e00008  jr          $ra
    ctx->pc = 0x24CD18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24CD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CD18u;
        // 0x24cd1c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24CD18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24CD20u;
}
