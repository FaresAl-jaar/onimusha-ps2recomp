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

// Function: sub_002A1D50
// Address: 0x2a1d50 - 0x2a1db0
void sub_002A1D50_0x2a1d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A1D50_0x2a1d50");
#endif

    switch (ctx->pc) {
        case 0x2a1d78u: goto label_2a1d78;
        case 0x2a1d88u: goto label_2a1d88;
        default: break;
    }

    ctx->pc = 0x2a1d50u;

    // 0x2a1d50: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2a1d50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2a1d54: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2a1d54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2a1d58: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2a1d58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2a1d5c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2a1d5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2a1d60: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2a1d60u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1d64: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a1d64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2a1d68: 0x94830068  lhu         $v1, 0x68($a0)
    ctx->pc = 0x2a1d68u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 104)));
    // 0x2a1d6c: 0x2470ffff  addiu       $s0, $v1, -0x1
    ctx->pc = 0x2a1d6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2a1d70: 0x6000009  bltz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2A1D70u;
    {
        const bool branch_taken_0x2a1d70 = (GPR_S64(ctx, 16) < 0);
        ctx->pc = 0x2A1D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1D70u;
        // 0x2a1d74: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1d70) {
            ctx->pc = 0x2A1D98u;
            goto label_2a1d98;
        }
    }
    ctx->pc = 0x2A1D78u;
label_2a1d78:
    // 0x2a1d78: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2a1d78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1d7c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2a1d7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1d80: 0xc0a874c  jal         func_2A1D30
    ctx->pc = 0x2A1D80u;
    SET_GPR_U32(ctx, 31, 0x2A1D88u);
    ctx->pc = 0x2A1D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1D80u;
    // 0x2a1d84: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A1D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A1D30u, 0x2A1D80u, 0x2A1D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1D88u;
label_2a1d88:
    // 0x2a1d88: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x2a1d88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2a1d8c: 0x601fffa  bgez        $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2A1D8Cu;
    {
        const bool branch_taken_0x2a1d8c = (GPR_S64(ctx, 16) >= 0);
        if (branch_taken_0x2a1d8c) {
            ctx->pc = 0x2A1D78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a1d78;
        }
    }
    ctx->pc = 0x2A1D94u;
    // 0x2a1d94: 0x0  nop
    ctx->pc = 0x2a1d94u;
    // NOP
label_2a1d98:
    // 0x2a1d98: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2a1d98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a1d9c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2a1d9cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a1da0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2a1da0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a1da4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a1da4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a1da8: 0x3e00008  jr          $ra
    ctx->pc = 0x2A1DA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A1DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1DA8u;
        // 0x2a1dac: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A1DA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A1DB0u;
}
