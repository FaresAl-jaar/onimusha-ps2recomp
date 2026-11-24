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

// Function: sub_00204E90
// Address: 0x204e90 - 0x204ec0
void sub_00204E90_0x204e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00204E90_0x204e90");
#endif

    switch (ctx->pc) {
        case 0x204ea0u: goto label_204ea0;
        default: break;
    }

    ctx->pc = 0x204e90u;

    // 0x204e90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x204e90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x204e94: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x204e94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x204e98: 0xc0890fc  jal         func_2243F0
    ctx->pc = 0x204E98u;
    SET_GPR_U32(ctx, 31, 0x204EA0u);
    ctx->pc = 0x204E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204E98u;
    // 0x204e9c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2243F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2243F0u, 0x204E98u, 0x204EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204EA0u;
label_204ea0:
    // 0x204ea0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x204ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x204ea4: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x204ea4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x204ea8: 0x432026  xor         $a0, $v0, $v1
    ctx->pc = 0x204ea8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x204eac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x204eacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x204eb0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x204eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x204eb4: 0xa4100a  movz        $v0, $a1, $a0
    ctx->pc = 0x204eb4u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x204eb8: 0x3e00008  jr          $ra
    ctx->pc = 0x204EB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x204EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204EB8u;
        // 0x204ebc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x204EB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x204EC0u;
}
