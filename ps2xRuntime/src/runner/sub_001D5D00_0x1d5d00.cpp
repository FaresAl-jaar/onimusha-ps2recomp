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

// Function: sub_001D5D00
// Address: 0x1d5d00 - 0x1d5d70
void sub_001D5D00_0x1d5d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D5D00_0x1d5d00");
#endif

    ctx->pc = 0x1d5d00u;

    // 0x1d5d00: 0x8f828814  lw          $v0, -0x77EC($gp)
    ctx->pc = 0x1d5d00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936596)));
    // 0x1d5d04: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D5D04u;
    {
        const bool branch_taken_0x1d5d04 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x1D5D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5D04u;
        // 0x1d5d08: 0x21843  sra         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5d04) {
            ctx->pc = 0x1D5D14u;
            goto label_1d5d14;
        }
    }
    ctx->pc = 0x1D5D0Cu;
    // 0x1d5d0c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d5d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d5d10: 0x21843  sra         $v1, $v0, 1
    ctx->pc = 0x1d5d10u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
label_1d5d14:
    // 0x1d5d14: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x1d5d14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1d5d18: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1D5D18u;
    {
        const bool branch_taken_0x1d5d18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d5d18) {
            ctx->pc = 0x1D5D58u;
            goto label_1d5d58;
        }
    }
    ctx->pc = 0x1D5D20u;
    // 0x1d5d20: 0x8f858810  lw          $a1, -0x77F0($gp)
    ctx->pc = 0x1d5d20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936592)));
    // 0x1d5d24: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d5d24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d5d28: 0x3c032025  lui         $v1, 0x2025
    ctx->pc = 0x1d5d28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8229 << 16));
    // 0x1d5d2c: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x1d5d2cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x1d5d30: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x1d5d30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x1d5d34: 0x24020051  addiu       $v0, $zero, 0x51
    ctx->pc = 0x1d5d34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
    // 0x1d5d38: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1d5d38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d5d3c: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1d5d3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1d5d40: 0xfca30000  sd          $v1, 0x0($a1)
    ctx->pc = 0x1d5d40u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 3));
    // 0x1d5d44: 0xfca20008  sd          $v0, 0x8($a1)
    ctx->pc = 0x1d5d44u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 2));
    // 0x1d5d48: 0x8f828814  lw          $v0, -0x77EC($gp)
    ctx->pc = 0x1d5d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936596)));
    // 0x1d5d4c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d5d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d5d50: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1D5D50u;
    {
        const bool branch_taken_0x1d5d50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5D50u;
        // 0x1d5d54: 0xaf828814  sw          $v0, -0x77EC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936596), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5d50) {
            ctx->pc = 0x1D5D60u;
            goto label_1d5d60;
        }
    }
    ctx->pc = 0x1D5D58u;
label_1d5d58:
    // 0x1d5d58: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1D5D58u;
    {
        const bool branch_taken_0x1d5d58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5D58u;
        // 0x1d5d5c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5d58) {
            ctx->pc = 0x1D5D68u;
            goto label_1d5d68;
        }
    }
    ctx->pc = 0x1D5D60u;
label_1d5d60:
    // 0x1d5d60: 0x8f828814  lw          $v0, -0x77EC($gp)
    ctx->pc = 0x1d5d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936596)));
    // 0x1d5d64: 0x0  nop
    ctx->pc = 0x1d5d64u;
    // NOP
label_1d5d68:
    // 0x1d5d68: 0x3e00008  jr          $ra
    ctx->pc = 0x1D5D68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D5D68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D5D70u;
}
