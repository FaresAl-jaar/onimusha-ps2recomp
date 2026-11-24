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

// Function: sub_00339890
// Address: 0x339890 - 0x3398e8
void sub_00339890_0x339890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00339890_0x339890");
#endif

    switch (ctx->pc) {
        case 0x3398b4u: goto label_3398b4;
        case 0x3398d0u: goto label_3398d0;
        default: break;
    }

    ctx->pc = 0x339890u;

    // 0x339890: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x339890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x339894: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x339894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x339898: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x339898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x33989c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x33989cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3398a0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3398a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3398a4: 0x8e250058  lw          $a1, 0x58($s1)
    ctx->pc = 0x3398a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x3398a8: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x3398a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x3398ac: 0xc0ce31c  jal         func_338C70
    ctx->pc = 0x3398ACu;
    SET_GPR_U32(ctx, 31, 0x3398B4u);
    ctx->pc = 0x3398B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3398ACu;
    // 0x3398b0: 0x24843fb0  addiu       $a0, $a0, 0x3FB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338C70u, 0x3398ACu, 0x3398B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3398B4u;
label_3398b4:
    // 0x3398b4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3398b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3398b8: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3398B8u;
    {
        const bool branch_taken_0x3398b8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3398b8) {
            ctx->pc = 0x3398D0u;
            goto label_3398d0;
        }
    }
    ctx->pc = 0x3398C0u;
    // 0x3398c0: 0x8e250058  lw          $a1, 0x58($s1)
    ctx->pc = 0x3398c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x3398c4: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x3398c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x3398c8: 0xc0ce3f8  jal         func_338FE0
    ctx->pc = 0x3398C8u;
    SET_GPR_U32(ctx, 31, 0x3398D0u);
    ctx->pc = 0x3398CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3398C8u;
    // 0x3398cc: 0x24843fb0  addiu       $a0, $a0, 0x3FB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338FE0u, 0x3398C8u, 0x3398D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3398D0u;
label_3398d0:
    // 0x3398d0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3398d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3398d4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3398d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3398d8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3398d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3398dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3398dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3398e0: 0x3e00008  jr          $ra
    ctx->pc = 0x3398E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3398E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3398E0u;
        // 0x3398e4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3398E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3398E8u;
}
