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

// Function: sub_0025E850
// Address: 0x25e850 - 0x25e888
void sub_0025E850_0x25e850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025E850_0x25e850");
#endif

    switch (ctx->pc) {
        case 0x25e864u: goto label_25e864;
        default: break;
    }

    ctx->pc = 0x25e850u;

    // 0x25e850: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x25e850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25e854: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x25e854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x25e858: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25e858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25e85c: 0xc096b00  jal         func_25AC00
    ctx->pc = 0x25E85Cu;
    SET_GPR_U32(ctx, 31, 0x25E864u);
    ctx->pc = 0x25E860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E85Cu;
    // 0x25e860: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25AC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AC00u, 0x25E85Cu, 0x25E864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E864u;
label_25e864:
    // 0x25e864: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x25e864u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x25e868: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x25e868u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e86c: 0x24637410  addiu       $v1, $v1, 0x7410
    ctx->pc = 0x25e86cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29712));
    // 0x25e870: 0xae030034  sw          $v1, 0x34($s0)
    ctx->pc = 0x25e870u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 3));
    // 0x25e874: 0xae0000b0  sw          $zero, 0xB0($s0)
    ctx->pc = 0x25e874u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 0));
    // 0x25e878: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x25e878u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25e87c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25e87cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25e880: 0x3e00008  jr          $ra
    ctx->pc = 0x25E880u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25E884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E880u;
        // 0x25e884: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25E880u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25E888u;
}
