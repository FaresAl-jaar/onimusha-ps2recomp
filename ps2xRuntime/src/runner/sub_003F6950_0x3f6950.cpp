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

// Function: sub_003F6950
// Address: 0x3f6950 - 0x3f698c
void sub_003F6950_0x3f6950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F6950_0x3f6950");
#endif

    switch (ctx->pc) {
        case 0x3f6974u: goto label_3f6974;
        case 0x3f6980u: goto label_3f6980;
        default: break;
    }

    ctx->pc = 0x3f6950u;

    // 0x3f6950: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3f6950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3f6954: 0x3c070066  lui         $a3, 0x66
    ctx->pc = 0x3f6954u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)102 << 16));
    // 0x3f6958: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3f6958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3f695c: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x3f695cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x3f6960: 0x80890024  lb          $t1, 0x24($a0)
    ctx->pc = 0x3f6960u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x3f6964: 0x24060041  addiu       $a2, $zero, 0x41
    ctx->pc = 0x3f6964u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x3f6968: 0x24e717f0  addiu       $a3, $a3, 0x17F0
    ctx->pc = 0x3f6968u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 6128));
    // 0x3f696c: 0xc0dc390  jal         func_370E40
    ctx->pc = 0x3F696Cu;
    SET_GPR_U32(ctx, 31, 0x3F6974u);
    ctx->pc = 0x3F6970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F696Cu;
    // 0x3f6970: 0x24080003  addiu       $t0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x370E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x370E40u, 0x3F696Cu, 0x3F6974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F6974u;
label_3f6974:
    // 0x3f6974: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x3f6974u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x3f6978: 0xc0cc01c  jal         func_330070
    ctx->pc = 0x3F6978u;
    SET_GPR_U32(ctx, 31, 0x3F6980u);
    ctx->pc = 0x3F697Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F6978u;
    // 0x3f697c: 0x24841270  addiu       $a0, $a0, 0x1270 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x330070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x330070u, 0x3F6978u, 0x3F6980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F6980u;
label_3f6980:
    // 0x3f6980: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3f6980u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3f6984: 0x3e00008  jr          $ra
    ctx->pc = 0x3F6984u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F6988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6984u;
        // 0x3f6988: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F6984u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F698Cu;
}
