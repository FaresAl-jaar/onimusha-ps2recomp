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

// Function: sub_0034D370
// Address: 0x34d370 - 0x34d3c8
void sub_0034D370_0x34d370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034D370_0x34d370");
#endif

    switch (ctx->pc) {
        case 0x34d388u: goto label_34d388;
        case 0x34d390u: goto label_34d390;
        default: break;
    }

    ctx->pc = 0x34d370u;

    // 0x34d370: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x34d370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x34d374: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x34d374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x34d378: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x34d378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x34d37c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x34d37cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x34d380: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x34d380u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34d384: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x34d384u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_34d388:
    // 0x34d388: 0xc0d8d30  jal         func_3634C0
    ctx->pc = 0x34D388u;
    SET_GPR_U32(ctx, 31, 0x34D390u);
    ctx->pc = 0x34D38Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34D388u;
    // 0x34d38c: 0x320400ff  andi        $a0, $s0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3634C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3634C0u, 0x34D388u, 0x34D390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D390u;
label_34d390:
    // 0x34d390: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x34D390u;
    {
        const bool branch_taken_0x34d390 = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x34d390) {
            ctx->pc = 0x34D3A0u;
            goto label_34d3a0;
        }
    }
    ctx->pc = 0x34D398u;
    // 0x34d398: 0x321100ff  andi        $s1, $s0, 0xFF
    ctx->pc = 0x34d398u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x34d39c: 0x0  nop
    ctx->pc = 0x34d39cu;
    // NOP
label_34d3a0:
    // 0x34d3a0: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x34d3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x34d3a4: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x34d3a4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x34d3a8: 0x2a020020  slti        $v0, $s0, 0x20
    ctx->pc = 0x34d3a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x34d3ac: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x34D3ACu;
    {
        const bool branch_taken_0x34d3ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x34D3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34D3ACu;
        // 0x34d3b0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34d3ac) {
            ctx->pc = 0x34D388u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_34d388;
        }
    }
    ctx->pc = 0x34D3B4u;
    // 0x34d3b4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x34d3b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x34d3b8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x34d3b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34d3bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x34d3bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34d3c0: 0x3e00008  jr          $ra
    ctx->pc = 0x34D3C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34D3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34D3C0u;
        // 0x34d3c4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34D3C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34D3C8u;
}
