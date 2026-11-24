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

// Function: sub_002F0AB0
// Address: 0x2f0ab0 - 0x2f0af0
void sub_002F0AB0_0x2f0ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F0AB0_0x2f0ab0");
#endif

    switch (ctx->pc) {
        case 0x2f0ad4u: goto label_2f0ad4;
        default: break;
    }

    ctx->pc = 0x2f0ab0u;

    // 0x2f0ab0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2f0ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2f0ab4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2f0ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2f0ab8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2f0ab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2f0abc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f0abcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2f0ac0: 0x78830020  lq          $v1, 0x20($a0)
    ctx->pc = 0x2f0ac0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x2f0ac4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f0ac4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0ac8: 0x7c832b20  sq          $v1, 0x2B20($a0)
    ctx->pc = 0x2f0ac8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 11040), GPR_VEC(ctx, 3));
    // 0x2f0acc: 0xc0a4a1c  jal         func_292870
    ctx->pc = 0x2F0ACCu;
    SET_GPR_U32(ctx, 31, 0x2F0AD4u);
    ctx->pc = 0x2F0AD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0ACCu;
    // 0x2f0ad0: 0xac822b2c  sw          $v0, 0x2B2C($a0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 4), 11052), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292870u, 0x2F0ACCu, 0x2F0AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0AD4u;
label_2f0ad4:
    // 0x2f0ad4: 0x3c033fc0  lui         $v1, 0x3FC0
    ctx->pc = 0x2f0ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16320 << 16));
    // 0x2f0ad8: 0xae0300e8  sw          $v1, 0xE8($s0)
    ctx->pc = 0x2f0ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 3));
    // 0x2f0adc: 0xae0306c0  sw          $v1, 0x6C0($s0)
    ctx->pc = 0x2f0adcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1728), GPR_U32(ctx, 3));
    // 0x2f0ae0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2f0ae0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f0ae4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f0ae4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f0ae8: 0x3e00008  jr          $ra
    ctx->pc = 0x2F0AE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F0AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0AE8u;
        // 0x2f0aec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F0AE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F0AF0u;
}
