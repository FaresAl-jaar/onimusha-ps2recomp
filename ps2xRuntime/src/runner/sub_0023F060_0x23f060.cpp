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

// Function: sub_0023F060
// Address: 0x23f060 - 0x23f0cc
void sub_0023F060_0x23f060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023F060_0x23f060");
#endif

    switch (ctx->pc) {
        case 0x23f094u: goto label_23f094;
        case 0x23f0b0u: goto label_23f0b0;
        default: break;
    }

    ctx->pc = 0x23f060u;

    // 0x23f060: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x23f060u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
    // 0x23f064: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x23f064u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x23f068: 0x8c43c4c0  lw          $v1, -0x3B40($v0)
    ctx->pc = 0x23f068u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4CC4C0u));
    // 0x23f06c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23f06cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23f070: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23f070u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f074: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x23f074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x23f078: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x23f078u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f07c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x23f07cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x23f080: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x23f080u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f084: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x23F084u;
    {
        const bool branch_taken_0x23f084 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x23F088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F084u;
        // 0x23f088: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f084) {
            ctx->pc = 0x23F094u;
            goto label_23f094;
        }
    }
    ctx->pc = 0x23F08Cu;
    // 0x23f08c: 0xc08fb9a  jal         func_23EE68
    ctx->pc = 0x23F08Cu;
    SET_GPR_U32(ctx, 31, 0x23F094u);
    ctx->pc = 0x23EE68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23EE68u, 0x23F08Cu, 0x23F094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F094u;
label_23f094:
    // 0x23f094: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x23f094u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x23f098: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x23f098u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f09c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x23f09cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f0a0: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x23f0a0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f0a4: 0x2484b9f0  addiu       $a0, $a0, -0x4610
    ctx->pc = 0x23f0a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949360));
    // 0x23f0a8: 0xc08fbaa  jal         func_23EEA8
    ctx->pc = 0x23F0A8u;
    SET_GPR_U32(ctx, 31, 0x23F0B0u);
    ctx->pc = 0x23F0ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F0A8u;
    // 0x23f0ac: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23EEA8u, 0x23F0A8u, 0x23F0B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F0B0u;
label_23f0b0:
    // 0x23f0b0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x23f0b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f0b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23f0b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23f0b8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x23f0b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23f0bc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x23f0bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23f0c0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x23f0c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x23f0c4: 0x3e00008  jr          $ra
    ctx->pc = 0x23F0C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23F0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F0C4u;
        // 0x23f0c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23F0C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23F0CCu;
}
