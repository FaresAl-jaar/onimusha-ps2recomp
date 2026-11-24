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

// Function: sub_00339A90
// Address: 0x339a90 - 0x339acc
void sub_00339A90_0x339a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00339A90_0x339a90");
#endif

    switch (ctx->pc) {
        case 0x339ab4u: goto label_339ab4;
        default: break;
    }

    ctx->pc = 0x339a90u;

    // 0x339a90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x339a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x339a94: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x339a94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x339a98: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x339a98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x339a9c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x339a9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x339aa0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x339aa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x339aa4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x339aa4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x339aa8: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x339aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x339aac: 0xc0ce3bc  jal         func_338EF0
    ctx->pc = 0x339AACu;
    SET_GPR_U32(ctx, 31, 0x339AB4u);
    ctx->pc = 0x339AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x339AACu;
    // 0x339ab0: 0x24843fb0  addiu       $a0, $a0, 0x3FB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338EF0u, 0x339AACu, 0x339AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x339AB4u;
label_339ab4:
    // 0x339ab4: 0xa2000040  sb          $zero, 0x40($s0)
    ctx->pc = 0x339ab4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 64), (uint8_t)GPR_U32(ctx, 0));
    // 0x339ab8: 0xa2000041  sb          $zero, 0x41($s0)
    ctx->pc = 0x339ab8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 65), (uint8_t)GPR_U32(ctx, 0));
    // 0x339abc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x339abcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x339ac0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x339ac0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x339ac4: 0x3e00008  jr          $ra
    ctx->pc = 0x339AC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x339AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339AC4u;
        // 0x339ac8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x339AC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x339ACCu;
}
