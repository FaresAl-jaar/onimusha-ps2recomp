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

// Function: sub_00370C10
// Address: 0x370c10 - 0x370c4c
void sub_00370C10_0x370c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00370C10_0x370c10");
#endif

    switch (ctx->pc) {
        case 0x370c34u: goto label_370c34;
        case 0x370c40u: goto label_370c40;
        default: break;
    }

    ctx->pc = 0x370c10u;

    // 0x370c10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x370c10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x370c14: 0x3c070066  lui         $a3, 0x66
    ctx->pc = 0x370c14u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)102 << 16));
    // 0x370c18: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x370c18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x370c1c: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x370c1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x370c20: 0x80890330  lb          $t1, 0x330($a0)
    ctx->pc = 0x370c20u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 816)));
    // 0x370c24: 0x24060041  addiu       $a2, $zero, 0x41
    ctx->pc = 0x370c24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x370c28: 0x24e7ac20  addiu       $a3, $a3, -0x53E0
    ctx->pc = 0x370c28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294945824));
    // 0x370c2c: 0xc0dc390  jal         func_370E40
    ctx->pc = 0x370C2Cu;
    SET_GPR_U32(ctx, 31, 0x370C34u);
    ctx->pc = 0x370C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370C2Cu;
    // 0x370c30: 0x24080005  addiu       $t0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x370E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x370E40u, 0x370C2Cu, 0x370C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370C34u;
label_370c34:
    // 0x370c34: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x370c34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x370c38: 0xc0cc01c  jal         func_330070
    ctx->pc = 0x370C38u;
    SET_GPR_U32(ctx, 31, 0x370C40u);
    ctx->pc = 0x370C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370C38u;
    // 0x370c3c: 0x24841270  addiu       $a0, $a0, 0x1270 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x330070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x330070u, 0x370C38u, 0x370C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370C40u;
label_370c40:
    // 0x370c40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x370c40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x370c44: 0x3e00008  jr          $ra
    ctx->pc = 0x370C44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x370C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370C44u;
        // 0x370c48: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x370C44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x370C4Cu;
}
