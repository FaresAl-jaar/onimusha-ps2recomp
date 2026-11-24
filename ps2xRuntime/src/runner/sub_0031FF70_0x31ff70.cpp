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

// Function: sub_0031FF70
// Address: 0x31ff70 - 0x31ffb0
void sub_0031FF70_0x31ff70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031FF70_0x31ff70");
#endif

    switch (ctx->pc) {
        case 0x31ff84u: goto label_31ff84;
        case 0x31ffa0u: goto label_31ffa0;
        default: break;
    }

    ctx->pc = 0x31ff70u;

    // 0x31ff70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x31ff70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x31ff74: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x31ff74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x31ff78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x31ff78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x31ff7c: 0xc0c7fd8  jal         func_31FF60
    ctx->pc = 0x31FF7Cu;
    SET_GPR_U32(ctx, 31, 0x31FF84u);
    ctx->pc = 0x31FF80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31FF7Cu;
    // 0x31ff80: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31FF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31FF60u, 0x31FF7Cu, 0x31FF84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31FF84u;
label_31ff84:
    // 0x31ff84: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x31FF84u;
    {
        const bool branch_taken_0x31ff84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31ff84) {
            ctx->pc = 0x31FFA0u;
            goto label_31ffa0;
        }
    }
    ctx->pc = 0x31FF8Cu;
    // 0x31ff8c: 0x8e020068  lw          $v0, 0x68($s0)
    ctx->pc = 0x31ff8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x31ff90: 0x3c040081  lui         $a0, 0x81
    ctx->pc = 0x31ff90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)129 << 16));
    // 0x31ff94: 0x24840fe0  addiu       $a0, $a0, 0xFE0
    ctx->pc = 0x31ff94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4064));
    // 0x31ff98: 0xc056e04  jal         func_15B810
    ctx->pc = 0x31FF98u;
    SET_GPR_U32(ctx, 31, 0x31FFA0u);
    ctx->pc = 0x31FF9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31FF98u;
    // 0x31ff9c: 0x24450100  addiu       $a1, $v0, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15B810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15B810u, 0x31FF98u, 0x31FFA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31FFA0u;
label_31ffa0:
    // 0x31ffa0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x31ffa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31ffa4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x31ffa4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31ffa8: 0x3e00008  jr          $ra
    ctx->pc = 0x31FFA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31FFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FFA8u;
        // 0x31ffac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31FFA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31FFB0u;
}
