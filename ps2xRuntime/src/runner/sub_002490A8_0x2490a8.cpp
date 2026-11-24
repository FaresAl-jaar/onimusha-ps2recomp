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

// Function: sub_002490A8
// Address: 0x2490a8 - 0x2490e4
void sub_002490A8_0x2490a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002490A8_0x2490a8");
#endif

    switch (ctx->pc) {
        case 0x2490bcu: goto label_2490bc;
        default: break;
    }

    ctx->pc = 0x2490a8u;

    // 0x2490a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2490a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2490ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2490acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2490b0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2490b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2490b4: 0xc049f18  jal         func_127C60
    ctx->pc = 0x2490B4u;
    SET_GPR_U32(ctx, 31, 0x2490BCu);
    ctx->pc = 0x2490B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2490B4u;
    // 0x2490b8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127C60u, 0x2490B4u, 0x2490BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2490BCu;
label_2490bc:
    // 0x2490bc: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x2490bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x2490c0: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2490C0u;
    {
        const bool branch_taken_0x2490c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2490C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2490C0u;
        // 0x2490c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2490c0) {
            ctx->pc = 0x2490D4u;
            goto label_2490d4;
        }
    }
    ctx->pc = 0x2490C8u;
    // 0x2490c8: 0x82020008  lb          $v0, 0x8($s0)
    ctx->pc = 0x2490c8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2490cc: 0x3842002e  xori        $v0, $v0, 0x2E
    ctx->pc = 0x2490ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)46);
    // 0x2490d0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2490d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2490d4:
    // 0x2490d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2490d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2490d8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2490d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2490dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2490DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2490E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2490DCu;
        // 0x2490e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2490DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2490E4u;
}
