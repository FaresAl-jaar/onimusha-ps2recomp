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

// Function: sub_0028CBC0
// Address: 0x28cbc0 - 0x28cc00
void sub_0028CBC0_0x28cbc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028CBC0_0x28cbc0");
#endif

    switch (ctx->pc) {
        case 0x28cbecu: goto label_28cbec;
        default: break;
    }

    ctx->pc = 0x28cbc0u;

    // 0x28cbc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x28cbc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x28cbc4: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x28cbc4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28cbc8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x28cbc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x28cbcc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x28cbccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x28cbd0: 0x9083015d  lbu         $v1, 0x15D($a0)
    ctx->pc = 0x28cbd0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 349)));
    // 0x28cbd4: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x28CBD4u;
    {
        const bool branch_taken_0x28cbd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28CBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CBD4u;
        // 0x28cbd8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cbd4) {
            ctx->pc = 0x28CBF0u;
            goto label_28cbf0;
        }
    }
    ctx->pc = 0x28CBDCu;
    // 0x28cbdc: 0x86080158  lh          $t0, 0x158($s0)
    ctx->pc = 0x28cbdcu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 344)));
    // 0x28cbe0: 0x8e060150  lw          $a2, 0x150($s0)
    ctx->pc = 0x28cbe0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x28cbe4: 0xc0a2b88  jal         func_28AE20
    ctx->pc = 0x28CBE4u;
    SET_GPR_U32(ctx, 31, 0x28CBECu);
    ctx->pc = 0x28CBE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28CBE4u;
    // 0x28cbe8: 0x260500a0  addiu       $a1, $s0, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28AE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AE20u, 0x28CBE4u, 0x28CBECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28CBECu;
label_28cbec:
    // 0x28cbec: 0xa6020158  sh          $v0, 0x158($s0)
    ctx->pc = 0x28cbecu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 344), (uint16_t)GPR_U32(ctx, 2));
label_28cbf0:
    // 0x28cbf0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x28cbf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28cbf4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x28cbf4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28cbf8: 0x3e00008  jr          $ra
    ctx->pc = 0x28CBF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28CBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CBF8u;
        // 0x28cbfc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28CBF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28CC00u;
}
