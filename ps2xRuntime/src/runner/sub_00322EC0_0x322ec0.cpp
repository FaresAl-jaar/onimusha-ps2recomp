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

// Function: sub_00322EC0
// Address: 0x322ec0 - 0x322f3c
void sub_00322EC0_0x322ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00322EC0_0x322ec0");
#endif

    switch (ctx->pc) {
        case 0x322f08u: goto label_322f08;
        case 0x322f18u: goto label_322f18;
        default: break;
    }

    ctx->pc = 0x322ec0u;

    // 0x322ec0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x322ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x322ec4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x322ec4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x322ec8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x322ec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x322ecc: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x322eccu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x322ed0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x322ed0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x322ed4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x322ed4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x322ed8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x322ed8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322edc: 0xac206000  sw          $zero, 0x6000($at)
    ctx->pc = 0x322edcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 24576), GPR_U32(ctx, 0));
    // 0x322ee0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x322ee0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322ee4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x322ee4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x322ee8: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x322ee8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x322eec: 0xac206008  sw          $zero, 0x6008($at)
    ctx->pc = 0x322eecu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 24584), GPR_U32(ctx, 0));
    // 0x322ef0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x322ef0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x322ef4: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x322ef4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x322ef8: 0xa020600c  sb          $zero, 0x600C($at)
    ctx->pc = 0x322ef8u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 24588), (uint8_t)GPR_U32(ctx, 0));
    // 0x322efc: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x322efcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x322f00: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x322f00u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x322f04: 0xac206004  sw          $zero, 0x6004($at)
    ctx->pc = 0x322f04u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 24580), GPR_U32(ctx, 0));
label_322f08:
    // 0x322f08: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x322f08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x322f0c: 0x34211000  ori         $at, $at, 0x1000
    ctx->pc = 0x322f0cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4096);
    // 0x322f10: 0xc0cfae0  jal         func_33EB80
    ctx->pc = 0x322F10u;
    SET_GPR_U32(ctx, 31, 0x322F18u);
    ctx->pc = 0x322F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322F10u;
    // 0x322f14: 0x2012021  addu        $a0, $s0, $at (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33EB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33EB80u, 0x322F10u, 0x322F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322F18u;
label_322f18:
    // 0x322f18: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x322f18u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x322f1c: 0x2a230100  slti        $v1, $s1, 0x100
    ctx->pc = 0x322f1cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x322f20: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x322F20u;
    {
        const bool branch_taken_0x322f20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x322F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322F20u;
        // 0x322f24: 0x26100050  addiu       $s0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322f20) {
            ctx->pc = 0x322F08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_322f08;
        }
    }
    ctx->pc = 0x322F28u;
    // 0x322f28: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x322f28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x322f2c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x322f2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x322f30: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x322f30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x322f34: 0x3e00008  jr          $ra
    ctx->pc = 0x322F34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x322F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322F34u;
        // 0x322f38: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x322F34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x322F3Cu;
}
