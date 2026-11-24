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

// Function: sub_002ACA90
// Address: 0x2aca90 - 0x2acad0
void sub_002ACA90_0x2aca90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ACA90_0x2aca90");
#endif

    switch (ctx->pc) {
        case 0x2acab8u: goto label_2acab8;
        default: break;
    }

    ctx->pc = 0x2aca90u;

    // 0x2aca90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2aca90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2aca94: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2aca94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2aca98: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2aca98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2aca9c: 0x8c8508c8  lw          $a1, 0x8C8($a0)
    ctx->pc = 0x2aca9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2248)));
    // 0x2acaa0: 0x18a00007  blez        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2ACAA0u;
    {
        const bool branch_taken_0x2acaa0 = (GPR_S64(ctx, 5) <= 0);
        ctx->pc = 0x2ACAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACAA0u;
        // 0x2acaa4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2acaa0) {
            ctx->pc = 0x2ACAC0u;
            goto label_2acac0;
        }
    }
    ctx->pc = 0x2ACAA8u;
    // 0x2acaa8: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x2acaa8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2acaac: 0x3c040092  lui         $a0, 0x92
    ctx->pc = 0x2acaacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)146 << 16));
    // 0x2acab0: 0xc0e360c  jal         func_38D830
    ctx->pc = 0x2ACAB0u;
    SET_GPR_U32(ctx, 31, 0x2ACAB8u);
    ctx->pc = 0x2ACAB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ACAB0u;
    // 0x2acab4: 0x248428b0  addiu       $a0, $a0, 0x28B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38D830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38D830u, 0x2ACAB0u, 0x2ACAB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACAB8u;
label_2acab8:
    // 0x2acab8: 0xae0008c8  sw          $zero, 0x8C8($s0)
    ctx->pc = 0x2acab8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2248), GPR_U32(ctx, 0));
    // 0x2acabc: 0x0  nop
    ctx->pc = 0x2acabcu;
    // NOP
label_2acac0:
    // 0x2acac0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2acac0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2acac4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2acac4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2acac8: 0x3e00008  jr          $ra
    ctx->pc = 0x2ACAC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ACACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACAC8u;
        // 0x2acacc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ACAC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ACAD0u;
}
