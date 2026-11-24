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

// Function: sub_002047A8
// Address: 0x2047a8 - 0x2047e4
void sub_002047A8_0x2047a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002047A8_0x2047a8");
#endif

    ctx->pc = 0x2047a8u;

    // 0x2047a8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2047a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2047ac: 0x2c850003  sltiu       $a1, $a0, 0x3
    ctx->pc = 0x2047acu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x2047b0: 0x1082000a  beq         $a0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2047B0u;
    {
        const bool branch_taken_0x2047b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2047B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2047B0u;
        // 0x2047b4: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2047b0) {
            ctx->pc = 0x2047DCu;
            goto label_2047dc;
        }
    }
    ctx->pc = 0x2047B8u;
    // 0x2047b8: 0x50a00005  beql        $a1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2047B8u;
    {
        const bool branch_taken_0x2047b8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2047b8) {
            ctx->pc = 0x2047BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2047B8u;
            // 0x2047bc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2047D0u;
            goto label_2047d0;
        }
    }
    ctx->pc = 0x2047C0u;
    // 0x2047c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2047c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2047c4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2047C4u;
    {
        const bool branch_taken_0x2047c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2047C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2047C4u;
        // 0x2047c8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2047c4) {
            ctx->pc = 0x2047D4u;
            goto label_2047d4;
        }
    }
    ctx->pc = 0x2047CCu;
    // 0x2047cc: 0x0  nop
    ctx->pc = 0x2047ccu;
    // NOP
label_2047d0:
    // 0x2047d0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2047d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2047d4:
    // 0x2047d4: 0x54820001  bnel        $a0, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x2047D4u;
    {
        const bool branch_taken_0x2047d4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x2047d4) {
            ctx->pc = 0x2047D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2047D4u;
            // 0x2047d8: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2047DCu;
            goto label_2047dc;
        }
    }
    ctx->pc = 0x2047DCu;
label_2047dc:
    // 0x2047dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2047DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2047E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2047DCu;
        // 0x2047e0: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2047DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2047E4u;
}
