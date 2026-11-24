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

// Function: sub_003C7980
// Address: 0x3c7980 - 0x3c79d0
void sub_003C7980_0x3c7980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C7980_0x3c7980");
#endif

    switch (ctx->pc) {
        case 0x3c79b4u: goto label_3c79b4;
        default: break;
    }

    ctx->pc = 0x3c7980u;

    // 0x3c7980: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3c7980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3c7984: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3c7984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3c7988: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3c7988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3c798c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3c798cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c7990: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x3C7990u;
    {
        const bool branch_taken_0x3c7990 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C7994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7990u;
        // 0x3c7994: 0x3c030068  lui         $v1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c7990) {
            ctx->pc = 0x3C79C0u;
            goto label_3c79c0;
        }
    }
    ctx->pc = 0x3C7998u;
    // 0x3c7998: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x3c7998u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x3c799c: 0x246377e0  addiu       $v1, $v1, 0x77E0
    ctx->pc = 0x3c799cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30688));
    // 0x3c79a0: 0x24427800  addiu       $v0, $v0, 0x7800
    ctx->pc = 0x3c79a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30720));
    // 0x3c79a4: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x3c79a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x3c79a8: 0x260404e0  addiu       $a0, $s0, 0x4E0
    ctx->pc = 0x3c79a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1248));
    // 0x3c79ac: 0xc09d694  jal         func_275A50
    ctx->pc = 0x3C79ACu;
    SET_GPR_U32(ctx, 31, 0x3C79B4u);
    ctx->pc = 0x3C79B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C79ACu;
    // 0x3c79b0: 0xae0204d4  sw          $v0, 0x4D4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275A50u, 0x3C79ACu, 0x3C79B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C79B4u;
label_3c79b4:
    // 0x3c79b4: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x3c79b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x3c79b8: 0x2463a6a0  addiu       $v1, $v1, -0x5960
    ctx->pc = 0x3c79b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944416));
    // 0x3c79bc: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x3c79bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
label_3c79c0:
    // 0x3c79c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3c79c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3c79c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3c79c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3c79c8: 0x3e00008  jr          $ra
    ctx->pc = 0x3C79C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C79CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C79C8u;
        // 0x3c79cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C79C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C79D0u;
}
