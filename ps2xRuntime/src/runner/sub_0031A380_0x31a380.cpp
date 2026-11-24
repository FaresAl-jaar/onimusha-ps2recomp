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

// Function: sub_0031A380
// Address: 0x31a380 - 0x31a3fc
void sub_0031A380_0x31a380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031A380_0x31a380");
#endif

    switch (ctx->pc) {
        case 0x31a3f0u: goto label_31a3f0;
        default: break;
    }

    ctx->pc = 0x31a380u;

    // 0x31a380: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x31a380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x31a384: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31a384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x31a388: 0x8c8329c0  lw          $v1, 0x29C0($a0)
    ctx->pc = 0x31a388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 10688)));
    // 0x31a38c: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x31a38cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x31a390: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x31A390u;
    {
        const bool branch_taken_0x31a390 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x31a390) {
            ctx->pc = 0x31A3A8u;
            goto label_31a3a8;
        }
    }
    ctx->pc = 0x31A398u;
    // 0x31a398: 0x8c830148  lw          $v1, 0x148($a0)
    ctx->pc = 0x31a398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
    // 0x31a39c: 0x34632000  ori         $v1, $v1, 0x2000
    ctx->pc = 0x31a39cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
    // 0x31a3a0: 0xac830148  sw          $v1, 0x148($a0)
    ctx->pc = 0x31a3a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 3));
    // 0x31a3a4: 0x0  nop
    ctx->pc = 0x31a3a4u;
    // NOP
label_31a3a8:
    // 0x31a3a8: 0x90830821  lbu         $v1, 0x821($a0)
    ctx->pc = 0x31a3a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2081)));
    // 0x31a3ac: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x31A3ACu;
    {
        const bool branch_taken_0x31a3ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x31a3ac) {
            ctx->pc = 0x31A3C0u;
            goto label_31a3c0;
        }
    }
    ctx->pc = 0x31A3B4u;
    // 0x31a3b4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x31A3B4u;
    {
        const bool branch_taken_0x31a3b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31a3b4) {
            ctx->pc = 0x31A3F0u;
            goto label_31a3f0;
        }
    }
    ctx->pc = 0x31A3BCu;
    // 0x31a3bc: 0x0  nop
    ctx->pc = 0x31a3bcu;
    // NOP
label_31a3c0:
    // 0x31a3c0: 0x908307f6  lbu         $v1, 0x7F6($a0)
    ctx->pc = 0x31a3c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2038)));
    // 0x31a3c4: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x31A3C4u;
    {
        const bool branch_taken_0x31a3c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x31a3c4) {
            ctx->pc = 0x31A3F0u;
            goto label_31a3f0;
        }
    }
    ctx->pc = 0x31A3CCu;
    // 0x31a3cc: 0x8c8329c0  lw          $v1, 0x29C0($a0)
    ctx->pc = 0x31a3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 10688)));
    // 0x31a3d0: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x31a3d0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x31a3d4: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x31A3D4u;
    {
        const bool branch_taken_0x31a3d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x31A3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A3D4u;
        // 0x31a3d8: 0x24030094  addiu       $v1, $zero, 0x94 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 148));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a3d4) {
            ctx->pc = 0x31A3E8u;
            goto label_31a3e8;
        }
    }
    ctx->pc = 0x31A3DCu;
    // 0x31a3dc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x31A3DCu;
    {
        const bool branch_taken_0x31a3dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31A3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A3DCu;
        // 0x31a3e0: 0xa0830780  sb          $v1, 0x780($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 1920), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a3dc) {
            ctx->pc = 0x31A3F0u;
            goto label_31a3f0;
        }
    }
    ctx->pc = 0x31A3E4u;
    // 0x31a3e4: 0x0  nop
    ctx->pc = 0x31a3e4u;
    // NOP
label_31a3e8:
    // 0x31a3e8: 0xc0a012c  jal         func_2804B0
    ctx->pc = 0x31A3E8u;
    SET_GPR_U32(ctx, 31, 0x31A3F0u);
    ctx->pc = 0x2804B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2804B0u, 0x31A3E8u, 0x31A3F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A3F0u;
label_31a3f0:
    // 0x31a3f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31a3f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31a3f4: 0x3e00008  jr          $ra
    ctx->pc = 0x31A3F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31A3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A3F4u;
        // 0x31a3f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31A3F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31A3FCu;
}
