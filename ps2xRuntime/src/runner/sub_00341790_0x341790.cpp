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

// Function: sub_00341790
// Address: 0x341790 - 0x3417f8
void sub_00341790_0x341790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00341790_0x341790");
#endif

    switch (ctx->pc) {
        case 0x3417a0u: goto label_3417a0;
        default: break;
    }

    ctx->pc = 0x341790u;

    // 0x341790: 0x3c040065  lui         $a0, 0x65
    ctx->pc = 0x341790u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)101 << 16));
    // 0x341794: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x341794u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x341798: 0x248478e0  addiu       $a0, $a0, 0x78E0
    ctx->pc = 0x341798u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30944));
    // 0x34179c: 0x24a30100  addiu       $v1, $a1, 0x100
    ctx->pc = 0x34179cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 256));
label_3417a0:
    // 0x3417a0: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x3417a0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3417a4: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x3417A4u;
    {
        const bool branch_taken_0x3417a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3417a4) {
            ctx->pc = 0x3417D8u;
            goto label_3417d8;
        }
    }
    ctx->pc = 0x3417ACu;
    // 0x3417ac: 0x90820004  lbu         $v0, 0x4($a0)
    ctx->pc = 0x3417acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3417b0: 0x14c20009  bne         $a2, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3417B0u;
    {
        const bool branch_taken_0x3417b0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x3417b0) {
            ctx->pc = 0x3417D8u;
            goto label_3417d8;
        }
    }
    ctx->pc = 0x3417B8u;
    // 0x3417b8: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x3417b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x3417bc: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x3417bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
    // 0x3417c0: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x3417c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x3417c4: 0x244278e5  addiu       $v0, $v0, 0x78E5
    ctx->pc = 0x3417c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30949));
    // 0x3417c8: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x3417c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x3417cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3417ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3417d0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3417D0u;
    {
        const bool branch_taken_0x3417d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3417D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3417D0u;
        // 0x3417d4: 0x90420000  lbu         $v0, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3417d0) {
            ctx->pc = 0x3417F0u;
            goto label_3417f0;
        }
    }
    ctx->pc = 0x3417D8u;
label_3417d8:
    // 0x3417d8: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x3417d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x3417dc: 0x28e20003  slti        $v0, $a3, 0x3
    ctx->pc = 0x3417dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3417e0: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x3417E0u;
    {
        const bool branch_taken_0x3417e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3417E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3417E0u;
        // 0x3417e4: 0x24840006  addiu       $a0, $a0, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3417e0) {
            ctx->pc = 0x3417A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3417a0;
        }
    }
    ctx->pc = 0x3417E8u;
    // 0x3417e8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3417e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3417ec: 0x0  nop
    ctx->pc = 0x3417ecu;
    // NOP
label_3417f0:
    // 0x3417f0: 0x3e00008  jr          $ra
    ctx->pc = 0x3417F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3417F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3417F8u;
}
