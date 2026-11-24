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

// Function: sub_003F7490
// Address: 0x3f7490 - 0x3f74dc
void sub_003F7490_0x3f7490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F7490_0x3f7490");
#endif

    switch (ctx->pc) {
        case 0x3f74b4u: goto label_3f74b4;
        case 0x3f74c4u: goto label_3f74c4;
        default: break;
    }

    ctx->pc = 0x3f7490u;

    // 0x3f7490: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3f7490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3f7494: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3f7494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3f7498: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3f7498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3f749c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3f749cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3f74a0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3f74a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f74a4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3f74a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3f74a8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3f74a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f74ac: 0xc0fdcf8  jal         func_3F73E0
    ctx->pc = 0x3F74ACu;
    SET_GPR_U32(ctx, 31, 0x3F74B4u);
    ctx->pc = 0x3F74B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F74ACu;
    // 0x3f74b0: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F73E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F73E0u, 0x3F74ACu, 0x3F74B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F74B4u;
label_3f74b4:
    // 0x3f74b4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f74b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f74b8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3f74b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f74bc: 0xc0caec8  jal         func_32BB20
    ctx->pc = 0x3F74BCu;
    SET_GPR_U32(ctx, 31, 0x3F74C4u);
    ctx->pc = 0x3F74C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F74BCu;
    // 0x3f74c0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32BB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32BB20u, 0x3F74BCu, 0x3F74C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F74C4u;
label_3f74c4:
    // 0x3f74c4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3f74c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3f74c8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3f74c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3f74cc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3f74ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3f74d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3f74d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3f74d4: 0x3e00008  jr          $ra
    ctx->pc = 0x3F74D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F74D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F74D4u;
        // 0x3f74d8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F74D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F74DCu;
}
