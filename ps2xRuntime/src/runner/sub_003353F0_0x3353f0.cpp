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

// Function: sub_003353F0
// Address: 0x3353f0 - 0x335444
void sub_003353F0_0x3353f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003353F0_0x3353f0");
#endif

    switch (ctx->pc) {
        case 0x335410u: goto label_335410;
        case 0x33541cu: goto label_33541c;
        default: break;
    }

    ctx->pc = 0x3353f0u;

    // 0x3353f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3353f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3353f4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3353f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3353f8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3353f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3353fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3353fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x335400: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x335400u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335404: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x335404u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x335408: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x335408u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33540c: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x33540cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_335410:
    // 0x335410: 0x8e050590  lw          $a1, 0x590($s0)
    ctx->pc = 0x335410u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1424)));
    // 0x335414: 0xc0c0844  jal         func_302110
    ctx->pc = 0x335414u;
    SET_GPR_U32(ctx, 31, 0x33541Cu);
    ctx->pc = 0x335418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335414u;
    // 0x335418: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302110u, 0x335414u, 0x33541Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33541Cu;
label_33541c:
    // 0x33541c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x33541cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x335420: 0x2a230006  slti        $v1, $s1, 0x6
    ctx->pc = 0x335420u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x335424: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x335424u;
    {
        const bool branch_taken_0x335424 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x335428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335424u;
        // 0x335428: 0x26100050  addiu       $s0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335424) {
            ctx->pc = 0x335410u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_335410;
        }
    }
    ctx->pc = 0x33542Cu;
    // 0x33542c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x33542cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x335430: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x335430u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x335434: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x335434u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x335438: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x335438u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33543c: 0x3e00008  jr          $ra
    ctx->pc = 0x33543Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x335440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33543Cu;
        // 0x335440: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33543Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x335444u;
}
