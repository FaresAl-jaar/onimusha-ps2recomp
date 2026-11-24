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

// Function: sub_003CD780
// Address: 0x3cd780 - 0x3cd7d0
void sub_003CD780_0x3cd780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003CD780_0x3cd780");
#endif

    switch (ctx->pc) {
        case 0x3cd790u: goto label_3cd790;
        case 0x3cd798u: goto label_3cd798;
        default: break;
    }

    ctx->pc = 0x3cd780u;

    // 0x3cd780: 0x248601c4  addiu       $a2, $a0, 0x1C4
    ctx->pc = 0x3cd780u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 452));
    // 0x3cd784: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3cd784u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cd788: 0x30a4ffff  andi        $a0, $a1, 0xFFFF
    ctx->pc = 0x3cd788u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x3cd78c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3cd78cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3cd790:
    // 0x3cd790: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3cd790u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cd794: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x3cd794u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3cd798:
    // 0x3cd798: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x3cd798u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3cd79c: 0x14820002  bne         $a0, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3CD79Cu;
    {
        const bool branch_taken_0x3cd79c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x3cd79c) {
            ctx->pc = 0x3CD7A8u;
            goto label_3cd7a8;
        }
    }
    ctx->pc = 0x3CD7A4u;
    // 0x3cd7a4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3cd7a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_3cd7a8:
    // 0x3cd7a8: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x3cd7a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x3cd7ac: 0x28e20005  slti        $v0, $a3, 0x5
    ctx->pc = 0x3cd7acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x3cd7b0: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3CD7B0u;
    {
        const bool branch_taken_0x3cd7b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CD7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD7B0u;
        // 0x3cd7b4: 0x24630002  addiu       $v1, $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cd7b0) {
            ctx->pc = 0x3CD798u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3cd798;
        }
    }
    ctx->pc = 0x3CD7B8u;
    // 0x3cd7b8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3cd7b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x3cd7bc: 0x2d020005  sltiu       $v0, $t0, 0x5
    ctx->pc = 0x3cd7bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x3cd7c0: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x3CD7C0u;
    {
        const bool branch_taken_0x3cd7c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CD7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD7C0u;
        // 0x3cd7c4: 0x24c60024  addiu       $a2, $a2, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cd7c0) {
            ctx->pc = 0x3CD790u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3cd790;
        }
    }
    ctx->pc = 0x3CD7C8u;
    // 0x3cd7c8: 0x3e00008  jr          $ra
    ctx->pc = 0x3CD7C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CD7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD7C8u;
        // 0x3cd7cc: 0x30a2ffff  andi        $v0, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CD7C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3CD7D0u;
}
