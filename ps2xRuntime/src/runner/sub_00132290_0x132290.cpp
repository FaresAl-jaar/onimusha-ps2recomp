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

// Function: sub_00132290
// Address: 0x132290 - 0x1322e0
void sub_00132290_0x132290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00132290_0x132290");
#endif

    switch (ctx->pc) {
        case 0x1322ccu: goto label_1322cc;
        default: break;
    }

    ctx->pc = 0x132290u;

    // 0x132290: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x132290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x132294: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x132294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x132298: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x132298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x13229c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13229cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1322a0: 0xa0800004  sb          $zero, 0x4($a0)
    ctx->pc = 0x1322a0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x1322a4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1322a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1322a8: 0xa0800044  sb          $zero, 0x44($a0)
    ctx->pc = 0x1322a8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 68), (uint8_t)GPR_U32(ctx, 0));
    // 0x1322ac: 0xa0800084  sb          $zero, 0x84($a0)
    ctx->pc = 0x1322acu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 132), (uint8_t)GPR_U32(ctx, 0));
    // 0x1322b0: 0xa08000c4  sb          $zero, 0xC4($a0)
    ctx->pc = 0x1322b0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 196), (uint8_t)GPR_U32(ctx, 0));
    // 0x1322b4: 0xa0800104  sb          $zero, 0x104($a0)
    ctx->pc = 0x1322b4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 260), (uint8_t)GPR_U32(ctx, 0));
    // 0x1322b8: 0xa0800144  sb          $zero, 0x144($a0)
    ctx->pc = 0x1322b8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 324), (uint8_t)GPR_U32(ctx, 0));
    // 0x1322bc: 0xac820188  sw          $v0, 0x188($a0)
    ctx->pc = 0x1322bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 392), GPR_U32(ctx, 2));
    // 0x1322c0: 0xac80018c  sw          $zero, 0x18C($a0)
    ctx->pc = 0x1322c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 396), GPR_U32(ctx, 0));
    // 0x1322c4: 0xc0437f8  jal         func_10DFE0
    ctx->pc = 0x1322C4u;
    SET_GPR_U32(ctx, 31, 0x1322CCu);
    ctx->pc = 0x1322C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1322C4u;
    // 0x1322c8: 0x26040184  addiu       $a0, $s0, 0x184 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 388));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DFE0u, 0x1322C4u, 0x1322CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1322CCu;
label_1322cc:
    // 0x1322cc: 0xae02019c  sw          $v0, 0x19C($s0)
    ctx->pc = 0x1322ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 412), GPR_U32(ctx, 2));
    // 0x1322d0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1322d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1322d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1322d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1322d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1322D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1322DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1322D8u;
        // 0x1322dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1322D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1322E0u;
}
