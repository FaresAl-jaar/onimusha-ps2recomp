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

// Function: sub_002541E0
// Address: 0x2541e0 - 0x254244
void sub_002541E0_0x2541e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002541E0_0x2541e0");
#endif

    switch (ctx->pc) {
        case 0x254214u: goto label_254214;
        default: break;
    }

    ctx->pc = 0x2541e0u;

    // 0x2541e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2541e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2541e4: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x2541e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x2541e8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2541e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2541ec: 0x24426500  addiu       $v0, $v0, 0x6500
    ctx->pc = 0x2541ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25856));
    // 0x2541f0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2541f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2541f4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2541f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2541f8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2541f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2541fc: 0x8f83883c  lw          $v1, -0x77C4($gp)
    ctx->pc = 0x2541fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936636)));
    // 0x254200: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x254200u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254204: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x254204u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254208: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x254208u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25420c: 0xc049522  jal         func_125488
    ctx->pc = 0x25420Cu;
    SET_GPR_U32(ctx, 31, 0x254214u);
    ctx->pc = 0x254210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25420Cu;
    // 0x254210: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x25420Cu, 0x254214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254214u;
label_254214:
    // 0x254214: 0x8f84883c  lw          $a0, -0x77C4($gp)
    ctx->pc = 0x254214u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936636)));
    // 0x254218: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x254218u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x25421c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x25421cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254220: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x254220u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x254224: 0x2484000f  addiu       $a0, $a0, 0xF
    ctx->pc = 0x254224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x254228: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x254228u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x25422c: 0xaf83883c  sw          $v1, -0x77C4($gp)
    ctx->pc = 0x25422cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936636), GPR_U32(ctx, 3));
    // 0x254230: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x254230u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x254234: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x254234u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x254238: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x254238u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25423c: 0x3e00008  jr          $ra
    ctx->pc = 0x25423Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x254240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25423Cu;
        // 0x254240: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25423Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x254244u;
}
