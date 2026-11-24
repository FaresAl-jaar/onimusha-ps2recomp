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

// Function: sub_00131840
// Address: 0x131840 - 0x131894
void sub_00131840_0x131840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00131840_0x131840");
#endif

    switch (ctx->pc) {
        case 0x131860u: goto label_131860;
        case 0x131870u: goto label_131870;
        default: break;
    }

    ctx->pc = 0x131840u;

    // 0x131840: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x131840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x131844: 0x2406003c  addiu       $a2, $zero, 0x3C
    ctx->pc = 0x131844u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x131848: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x131848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x13184c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13184cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x131850: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x131850u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131854: 0x260400d4  addiu       $a0, $s0, 0xD4
    ctx->pc = 0x131854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 212));
    // 0x131858: 0xc049590  jal         func_125640
    ctx->pc = 0x131858u;
    SET_GPR_U32(ctx, 31, 0x131860u);
    ctx->pc = 0x13185Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131858u;
    // 0x13185c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x131858u, 0x131860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131860u;
label_131860:
    // 0x131860: 0x26040110  addiu       $a0, $s0, 0x110
    ctx->pc = 0x131860u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x131864: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x131864u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131868: 0xc049590  jal         func_125640
    ctx->pc = 0x131868u;
    SET_GPR_U32(ctx, 31, 0x131870u);
    ctx->pc = 0x13186Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131868u;
    // 0x13186c: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x131868u, 0x131870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131870u;
label_131870:
    // 0x131870: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x131870u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x131874: 0xa20300ec  sb          $v1, 0xEC($s0)
    ctx->pc = 0x131874u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 236), (uint8_t)GPR_U32(ctx, 3));
    // 0x131878: 0xa20300ed  sb          $v1, 0xED($s0)
    ctx->pc = 0x131878u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 237), (uint8_t)GPR_U32(ctx, 3));
    // 0x13187c: 0xa20300ee  sb          $v1, 0xEE($s0)
    ctx->pc = 0x13187cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 238), (uint8_t)GPR_U32(ctx, 3));
    // 0x131880: 0xa20300ef  sb          $v1, 0xEF($s0)
    ctx->pc = 0x131880u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 239), (uint8_t)GPR_U32(ctx, 3));
    // 0x131884: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x131884u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x131888: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x131888u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13188c: 0x3e00008  jr          $ra
    ctx->pc = 0x13188Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x131890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13188Cu;
        // 0x131890: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13188Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x131894u;
}
