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

// Function: sub_0014E1F0
// Address: 0x14e1f0 - 0x14e240
void sub_0014E1F0_0x14e1f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014E1F0_0x14e1f0");
#endif

    switch (ctx->pc) {
        case 0x14e204u: goto label_14e204;
        default: break;
    }

    ctx->pc = 0x14e1f0u;

    // 0x14e1f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14e1f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14e1f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x14e1f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x14e1f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14e1f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14e1fc: 0xc05d6b8  jal         func_175AE0
    ctx->pc = 0x14E1FCu;
    SET_GPR_U32(ctx, 31, 0x14E204u);
    ctx->pc = 0x14E200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E1FCu;
    // 0x14e200: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175AE0u, 0x14E1FCu, 0x14E204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E204u;
label_14e204:
    // 0x14e204: 0x3c030084  lui         $v1, 0x84
    ctx->pc = 0x14e204u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)132 << 16));
    // 0x14e208: 0x26050240  addiu       $a1, $s0, 0x240
    ctx->pc = 0x14e208u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 576));
    // 0x14e20c: 0x246324a0  addiu       $v1, $v1, 0x24A0
    ctx->pc = 0x14e20cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9376));
    // 0x14e210: 0x78660000  lq          $a2, 0x0($v1)
    ctx->pc = 0x14e210u;
    SET_GPR_VEC(ctx, 6, FAST_READ128(0x8424A0u));
    // 0x14e214: 0x26040250  addiu       $a0, $s0, 0x250
    ctx->pc = 0x14e214u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 592));
    // 0x14e218: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x14e218u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e21c: 0x7ca60000  sq          $a2, 0x0($a1)
    ctx->pc = 0x14e21cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 6));
    // 0x14e220: 0x3c030084  lui         $v1, 0x84
    ctx->pc = 0x14e220u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)132 << 16));
    // 0x14e224: 0x246324b0  addiu       $v1, $v1, 0x24B0
    ctx->pc = 0x14e224u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9392));
    // 0x14e228: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x14e228u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x8424B0u));
    // 0x14e22c: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x14e22cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x14e230: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x14e230u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14e234: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14e234u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14e238: 0x3e00008  jr          $ra
    ctx->pc = 0x14E238u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14E23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E238u;
        // 0x14e23c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14E238u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14E240u;
}
