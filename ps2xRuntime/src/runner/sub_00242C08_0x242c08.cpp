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

// Function: sub_00242C08
// Address: 0x242c08 - 0x242c4c
void sub_00242C08_0x242c08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00242C08_0x242c08");
#endif

    switch (ctx->pc) {
        case 0x242c30u: goto label_242c30;
        default: break;
    }

    ctx->pc = 0x242c08u;

    // 0x242c08: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x242c08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x242c0c: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x242c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
    // 0x242c10: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x242c10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x242c14: 0x2450d748  addiu       $s0, $v0, -0x28B8
    ctx->pc = 0x242c14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956872));
    // 0x242c18: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x242c18u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4CD748u));
    // 0x242c1c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x242c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x242c20: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x242C20u;
    {
        const bool branch_taken_0x242c20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x242C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242C20u;
        // 0x242c24: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242c20) {
            ctx->pc = 0x242C34u;
            goto label_242c34;
        }
    }
    ctx->pc = 0x242C28u;
    // 0x242c28: 0xc08fc4c  jal         func_23F130
    ctx->pc = 0x242C28u;
    SET_GPR_U32(ctx, 31, 0x242C30u);
    ctx->pc = 0x23F130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F130u, 0x242C28u, 0x242C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242C30u;
label_242c30:
    // 0x242c30: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x242c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_242c34:
    // 0x242c34: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x242c34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x242c38: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x242c38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x242c3c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x242c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x242c40: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x242c40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x242c44: 0x3e00008  jr          $ra
    ctx->pc = 0x242C44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x242C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242C44u;
        // 0x242c48: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x242C44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x242C4Cu;
}
