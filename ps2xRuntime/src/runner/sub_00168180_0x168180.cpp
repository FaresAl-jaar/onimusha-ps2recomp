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

// Function: sub_00168180
// Address: 0x168180 - 0x1681b8
void sub_00168180_0x168180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00168180_0x168180");
#endif

    switch (ctx->pc) {
        case 0x1681a4u: goto label_1681a4;
        default: break;
    }

    ctx->pc = 0x168180u;

    // 0x168180: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x168180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x168184: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x168184u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168188: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x168188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x16818c: 0x24060011  addiu       $a2, $zero, 0x11
    ctx->pc = 0x16818cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x168190: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x168190u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x168194: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x168194u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168198: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x168198u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x16819c: 0xc04cd28  jal         func_1334A0
    ctx->pc = 0x16819Cu;
    SET_GPR_U32(ctx, 31, 0x1681A4u);
    ctx->pc = 0x1681A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16819Cu;
    // 0x1681a0: 0x2484fe40  addiu       $a0, $a0, -0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1334A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1334A0u, 0x16819Cu, 0x1681A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1681A4u;
label_1681a4:
    // 0x1681a4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1681a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1681a8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1681a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1681ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1681acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1681b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1681B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1681B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1681B0u;
        // 0x1681b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1681B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1681B8u;
}
