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

// Function: sub_001E7B70
// Address: 0x1e7b70 - 0x1e7bc0
void sub_001E7B70_0x1e7b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E7B70_0x1e7b70");
#endif

    switch (ctx->pc) {
        case 0x1e7ba4u: goto label_1e7ba4;
        default: break;
    }

    ctx->pc = 0x1e7b70u;

    // 0x1e7b70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e7b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e7b74: 0x24037ffe  addiu       $v1, $zero, 0x7FFE
    ctx->pc = 0x1e7b74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
    // 0x1e7b78: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e7b78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e7b7c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e7b7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e7b80: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e7b80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7b84: 0x84840000  lh          $a0, 0x0($a0)
    ctx->pc = 0x1e7b84u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e7b88: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E7B88u;
    {
        const bool branch_taken_0x1e7b88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1e7b88) {
            ctx->pc = 0x1E7BB0u;
            goto label_1e7bb0;
        }
    }
    ctx->pc = 0x1E7B90u;
    // 0x1e7b90: 0x8e040090  lw          $a0, 0x90($s0)
    ctx->pc = 0x1e7b90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x1e7b94: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E7B94u;
    {
        const bool branch_taken_0x1e7b94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e7b94) {
            ctx->pc = 0x1E7BA8u;
            goto label_1e7ba8;
        }
    }
    ctx->pc = 0x1E7B9Cu;
    // 0x1e7b9c: 0xc0741a8  jal         func_1D06A0
    ctx->pc = 0x1E7B9Cu;
    SET_GPR_U32(ctx, 31, 0x1E7BA4u);
    ctx->pc = 0x1D06A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D06A0u, 0x1E7B9Cu, 0x1E7BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7BA4u;
label_1e7ba4:
    // 0x1e7ba4: 0xae000090  sw          $zero, 0x90($s0)
    ctx->pc = 0x1e7ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 0));
label_1e7ba8:
    // 0x1e7ba8: 0x24037ffe  addiu       $v1, $zero, 0x7FFE
    ctx->pc = 0x1e7ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
    // 0x1e7bac: 0xa6030000  sh          $v1, 0x0($s0)
    ctx->pc = 0x1e7bacu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
label_1e7bb0:
    // 0x1e7bb0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e7bb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e7bb4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e7bb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e7bb8: 0x3e00008  jr          $ra
    ctx->pc = 0x1E7BB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E7BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7BB8u;
        // 0x1e7bbc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E7BB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E7BC0u;
}
