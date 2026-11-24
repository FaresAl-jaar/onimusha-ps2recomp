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

// Function: sub_003B57C0
// Address: 0x3b57c0 - 0x3b5814
void sub_003B57C0_0x3b57c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B57C0_0x3b57c0");
#endif

    switch (ctx->pc) {
        case 0x3b57e0u: goto label_3b57e0;
        case 0x3b5800u: goto label_3b5800;
        default: break;
    }

    ctx->pc = 0x3b57c0u;

    // 0x3b57c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3b57c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3b57c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3b57c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3b57c8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x3b57c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3b57cc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3b57ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3b57d0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3b57d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3b57d4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3b57d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b57d8: 0xc0ed6ac  jal         func_3B5AB0
    ctx->pc = 0x3B57D8u;
    SET_GPR_U32(ctx, 31, 0x3B57E0u);
    ctx->pc = 0x3B57DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B57D8u;
    // 0x3b57dc: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B5AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B5AB0u, 0x3B57D8u, 0x3B57E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B57E0u;
label_3b57e0:
    // 0x3b57e0: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x3b57e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x3b57e4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3b57e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b57e8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3b57e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b57ec: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x3b57ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x3b57f0: 0x24070500  addiu       $a3, $zero, 0x500
    ctx->pc = 0x3b57f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1280));
    // 0x3b57f4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3b57f4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b57f8: 0xc09565c  jal         func_255970
    ctx->pc = 0x3B57F8u;
    SET_GPR_U32(ctx, 31, 0x3B5800u);
    ctx->pc = 0x3B57FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B57F8u;
    // 0x3b57fc: 0x27a90030  addiu       $t1, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255970u, 0x3B57F8u, 0x3B5800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5800u;
label_3b5800:
    // 0x3b5800: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3b5800u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b5804: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3b5804u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b5808: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3b5808u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b580c: 0x3e00008  jr          $ra
    ctx->pc = 0x3B580Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B5810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B580Cu;
        // 0x3b5810: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B580Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B5814u;
}
