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

// Function: sub_002118D8
// Address: 0x2118d8 - 0x211918
void sub_002118D8_0x2118d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002118D8_0x2118d8");
#endif

    switch (ctx->pc) {
        case 0x2118ecu: goto label_2118ec;
        default: break;
    }

    ctx->pc = 0x2118d8u;

    // 0x2118d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2118d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2118dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2118dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2118e0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2118e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2118e4: 0xc084694  jal         func_211A50
    ctx->pc = 0x2118E4u;
    SET_GPR_U32(ctx, 31, 0x2118ECu);
    ctx->pc = 0x2118E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2118E4u;
    // 0x2118e8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211A50u, 0x2118E4u, 0x2118ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2118ECu;
label_2118ec:
    // 0x2118ec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2118ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2118f0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2118F0u;
    {
        const bool branch_taken_0x2118f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2118F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2118F0u;
        // 0x2118f4: 0x26050078  addiu       $a1, $s0, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2118f0) {
            ctx->pc = 0x211908u;
            goto label_211908;
        }
    }
    ctx->pc = 0x2118F8u;
    // 0x2118f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2118f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2118fc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2118fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x211900: 0x8084646  j           func_211918
    ctx->pc = 0x211900u;
    ctx->pc = 0x211904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211900u;
    // 0x211904: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211918u;
    sub_00211918_0x211918(rdram, ctx, runtime); return;
    ctx->pc = 0x211908u;
label_211908:
    // 0x211908: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x211908u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21190c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x21190cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x211910: 0x3e00008  jr          $ra
    ctx->pc = 0x211910u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x211914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211910u;
        // 0x211914: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211910u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x211918u;
}
