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

// Function: sub_0032FB90
// Address: 0x32fb90 - 0x32fbc4
void sub_0032FB90_0x32fb90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032FB90_0x32fb90");
#endif

    switch (ctx->pc) {
        case 0x32fba8u: goto label_32fba8;
        case 0x32fbb4u: goto label_32fbb4;
        default: break;
    }

    ctx->pc = 0x32fb90u;

    // 0x32fb90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x32fb90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x32fb94: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x32fb94u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x32fb98: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x32fb98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x32fb9c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x32fb9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x32fba0: 0xc0cbf1c  jal         func_32FC70
    ctx->pc = 0x32FBA0u;
    SET_GPR_U32(ctx, 31, 0x32FBA8u);
    ctx->pc = 0x32FBA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32FBA0u;
    // 0x32fba4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32FC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32FC70u, 0x32FBA0u, 0x32FBA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32FBA8u;
label_32fba8:
    // 0x32fba8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32fba8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32fbac: 0xc0cbfd8  jal         func_32FF60
    ctx->pc = 0x32FBACu;
    SET_GPR_U32(ctx, 31, 0x32FBB4u);
    ctx->pc = 0x32FBB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32FBACu;
    // 0x32fbb0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32FF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32FF60u, 0x32FBACu, 0x32FBB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32FBB4u;
label_32fbb4:
    // 0x32fbb4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x32fbb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32fbb8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x32fbb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32fbbc: 0x3e00008  jr          $ra
    ctx->pc = 0x32FBBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32FBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FBBCu;
        // 0x32fbc0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32FBBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32FBC4u;
}
