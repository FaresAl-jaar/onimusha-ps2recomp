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

// Function: sub_00222AF0
// Address: 0x222af0 - 0x222b4c
void sub_00222AF0_0x222af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00222AF0_0x222af0");
#endif

    switch (ctx->pc) {
        case 0x222b10u: goto label_222b10;
        case 0x222b38u: goto label_222b38;
        default: break;
    }

    ctx->pc = 0x222af0u;

    // 0x222af0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x222af0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x222af4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x222af4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x222af8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x222af8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222afc: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x222afcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x222b00: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x222b00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x222b04: 0x1840000a  blez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x222B04u;
    {
        const bool branch_taken_0x222b04 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x222B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222B04u;
        // 0x222b08: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222b04) {
            ctx->pc = 0x222B30u;
            goto label_222b30;
        }
    }
    ctx->pc = 0x222B0Cu;
    // 0x222b0c: 0x26030018  addiu       $v1, $s0, 0x18
    ctx->pc = 0x222b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
label_222b10:
    // 0x222b10: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x222b10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x222b14: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x222b14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x222b18: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x222b18u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x222b1c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x222b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x222b20: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x222b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x222b24: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x222b24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x222b28: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x222B28u;
    {
        const bool branch_taken_0x222b28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x222B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222B28u;
        // 0x222b2c: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222b28) {
            ctx->pc = 0x222B10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_222b10;
        }
    }
    ctx->pc = 0x222B30u;
label_222b30:
    // 0x222b30: 0xc088ad4  jal         func_222B50
    ctx->pc = 0x222B30u;
    SET_GPR_U32(ctx, 31, 0x222B38u);
    ctx->pc = 0x222B34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222B30u;
    // 0x222b34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222B50u, 0x222B30u, 0x222B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222B38u;
label_222b38:
    // 0x222b38: 0xae0201a8  sw          $v0, 0x1A8($s0)
    ctx->pc = 0x222b38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 424), GPR_U32(ctx, 2));
    // 0x222b3c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x222b3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x222b40: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x222b40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x222b44: 0x3e00008  jr          $ra
    ctx->pc = 0x222B44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x222B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222B44u;
        // 0x222b48: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x222B44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x222B4Cu;
}
