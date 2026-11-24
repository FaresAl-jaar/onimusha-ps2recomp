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

// Function: sub_00219EA8
// Address: 0x219ea8 - 0x219ef0
void sub_00219EA8_0x219ea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00219EA8_0x219ea8");
#endif

    switch (ctx->pc) {
        case 0x219ec0u: goto label_219ec0;
        default: break;
    }

    ctx->pc = 0x219ea8u;

    // 0x219ea8: 0x8c821fc0  lw          $v0, 0x1FC0($a0)
    ctx->pc = 0x219ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8128)));
    // 0x219eac: 0x248416b0  addiu       $a0, $a0, 0x16B0
    ctx->pc = 0x219eacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5808));
    // 0x219eb0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x219eb0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219eb4: 0x24460180  addiu       $a2, $v0, 0x180
    ctx->pc = 0x219eb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x219eb8: 0x24830008  addiu       $v1, $a0, 0x8
    ctx->pc = 0x219eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x219ebc: 0x0  nop
    ctx->pc = 0x219ebcu;
    // NOP
label_219ec0:
    // 0x219ec0: 0x24840088  addiu       $a0, $a0, 0x88
    ctx->pc = 0x219ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 136));
    // 0x219ec4: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x219ec4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219ec8: 0x10650007  beq         $v1, $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x219EC8u;
    {
        const bool branch_taken_0x219ec8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x219ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219EC8u;
        // 0x219ecc: 0x24c600f0  addiu       $a2, $a2, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219ec8) {
            ctx->pc = 0x219EE8u;
            goto label_219ee8;
        }
    }
    ctx->pc = 0x219ED0u;
    // 0x219ed0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x219ed0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x219ed4: 0x28e20010  slti        $v0, $a3, 0x10
    ctx->pc = 0x219ed4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x219ed8: 0x0  nop
    ctx->pc = 0x219ed8u;
    // NOP
    // 0x219edc: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x219EDCu;
    {
        const bool branch_taken_0x219edc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x219EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219EDCu;
        // 0x219ee0: 0x24830008  addiu       $v1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219edc) {
            ctx->pc = 0x219EC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_219ec0;
        }
    }
    ctx->pc = 0x219EE4u;
    // 0x219ee4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x219ee4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_219ee8:
    // 0x219ee8: 0x3e00008  jr          $ra
    ctx->pc = 0x219EE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x219EE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x219EF0u;
}
