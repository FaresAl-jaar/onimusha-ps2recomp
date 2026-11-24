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

// Function: sub_0028EEE0
// Address: 0x28eee0 - 0x28ef3c
void sub_0028EEE0_0x28eee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028EEE0_0x28eee0");
#endif

    switch (ctx->pc) {
        case 0x28ef30u: goto label_28ef30;
        default: break;
    }

    ctx->pc = 0x28eee0u;

    // 0x28eee0: 0x24850100  addiu       $a1, $a0, 0x100
    ctx->pc = 0x28eee0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 256));
    // 0x28eee4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x28eee4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x28eee8: 0x51942  srl         $v1, $a1, 5
    ctx->pc = 0x28eee8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 5));
    // 0x28eeec: 0x3c040081  lui         $a0, 0x81
    ctx->pc = 0x28eeecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)129 << 16));
    // 0x28eef0: 0x24840fe0  addiu       $a0, $a0, 0xFE0
    ctx->pc = 0x28eef0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4064));
    // 0x28eef4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x28eef4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x28eef8: 0x833821  addu        $a3, $a0, $v1
    ctx->pc = 0x28eef8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x28eefc: 0x30a6001f  andi        $a2, $a1, 0x1F
    ctx->pc = 0x28eefcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31);
    // 0x28ef00: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x28ef00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x28ef04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28ef04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28ef08: 0xc34006  srlv        $t0, $v1, $a2
    ctx->pc = 0x28ef08u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 3), GPR_U32(ctx, 6) & 0x1F));
    // 0x28ef0c: 0x8ce60000  lw          $a2, 0x0($a3)
    ctx->pc = 0x28ef0cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x28ef10: 0x1061824  and         $v1, $t0, $a2
    ctx->pc = 0x28ef10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & GPR_U64(ctx, 6));
    // 0x28ef14: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x28EF14u;
    {
        const bool branch_taken_0x28ef14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28EF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EF14u;
        // 0x28ef18: 0x1001827  not         $v1, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 8) | GPR_U64(ctx, 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ef14) {
            ctx->pc = 0x28EF28u;
            goto label_28ef28;
        }
    }
    ctx->pc = 0x28EF1Cu;
    // 0x28ef1c: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x28ef1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x28ef20: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x28EF20u;
    {
        const bool branch_taken_0x28ef20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28EF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EF20u;
        // 0x28ef24: 0xace30000  sw          $v1, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ef20) {
            ctx->pc = 0x28EF30u;
            goto label_28ef30;
        }
    }
    ctx->pc = 0x28EF28u;
label_28ef28:
    // 0x28ef28: 0xc056e04  jal         func_15B810
    ctx->pc = 0x28EF28u;
    SET_GPR_U32(ctx, 31, 0x28EF30u);
    ctx->pc = 0x15B810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15B810u, 0x28EF28u, 0x28EF30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28EF30u;
label_28ef30:
    // 0x28ef30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28ef30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28ef34: 0x3e00008  jr          $ra
    ctx->pc = 0x28EF34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28EF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EF34u;
        // 0x28ef38: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28EF34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28EF3Cu;
}
