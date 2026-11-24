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

// Function: sub_0023EB10
// Address: 0x23eb10 - 0x23eb60
void sub_0023EB10_0x23eb10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023EB10_0x23eb10");
#endif

    switch (ctx->pc) {
        case 0x23eb40u: goto label_23eb40;
        default: break;
    }

    ctx->pc = 0x23eb10u;

    // 0x23eb10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x23eb10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x23eb14: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23eb14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23eb18: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23eb18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23eb1c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x23eb1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x23eb20: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x23eb20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23eb24: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x23eb24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x23eb28: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x23eb28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x23eb2c: 0x71102a  slt         $v0, $v1, $s1
    ctx->pc = 0x23eb2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x23eb30: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x23EB30u;
    {
        const bool branch_taken_0x23eb30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23eb30) {
            ctx->pc = 0x23EB34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23EB30u;
            // 0x23eb34: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
            SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23EB4Cu;
            goto label_23eb4c;
        }
    }
    ctx->pc = 0x23EB38u;
    // 0x23eb38: 0xc08fa34  jal         func_23E8D0
    ctx->pc = 0x23EB38u;
    SET_GPR_U32(ctx, 31, 0x23EB40u);
    ctx->pc = 0x23E8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23E8D0u, 0x23EB38u, 0x23EB40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EB40u;
label_23eb40:
    // 0x23eb40: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x23eb40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x23eb44: 0x71102a  slt         $v0, $v1, $s1
    ctx->pc = 0x23eb44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x23eb48: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x23eb48u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_23eb4c:
    // 0x23eb4c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23eb4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23eb50: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x23eb50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x23eb54: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x23eb54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23eb58: 0x3e00008  jr          $ra
    ctx->pc = 0x23EB58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23EB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EB58u;
        // 0x23eb5c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23EB58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23EB60u;
}
