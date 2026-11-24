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

// Function: sub_001F5CC0
// Address: 0x1f5cc0 - 0x1f5d2c
void sub_001F5CC0_0x1f5cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F5CC0_0x1f5cc0");
#endif

    ctx->pc = 0x1f5cc0u;

    // 0x1f5cc0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1f5cc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5cc4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1f5cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1f5cc8: 0x8ca20118  lw          $v0, 0x118($a1)
    ctx->pc = 0x1f5cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 280)));
    // 0x1f5ccc: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F5CCCu;
    {
        const bool branch_taken_0x1f5ccc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1f5ccc) {
            ctx->pc = 0x1F5CD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F5CCCu;
            // 0x1f5cd0: 0x8ca203c8  lw          $v0, 0x3C8($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 968)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F5CE0u;
            goto label_1f5ce0;
        }
    }
    ctx->pc = 0x1F5CD4u;
    // 0x1f5cd4: 0xaca003c8  sw          $zero, 0x3C8($a1)
    ctx->pc = 0x1f5cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 968), GPR_U32(ctx, 0));
    // 0x1f5cd8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1F5CD8u;
    {
        const bool branch_taken_0x1f5cd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5CD8u;
        // 0x1f5cdc: 0xaca003c4  sw          $zero, 0x3C4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 964), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5cd8) {
            ctx->pc = 0x1F5D00u;
            goto label_1f5d00;
        }
    }
    ctx->pc = 0x1F5CE0u;
label_1f5ce0:
    // 0x1f5ce0: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x1f5ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x1f5ce4: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x1f5ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f5ce8: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1f5ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f5cec: 0xaca403c8  sw          $a0, 0x3C8($a1)
    ctx->pc = 0x1f5cecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 968), GPR_U32(ctx, 4));
    // 0x1f5cf0: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x1f5cf0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x1f5cf4: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1f5cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1f5cf8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1f5cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f5cfc: 0xaca203c4  sw          $v0, 0x3C4($a1)
    ctx->pc = 0x1f5cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 964), GPR_U32(ctx, 2));
label_1f5d00:
    // 0x1f5d00: 0x8ca20114  lw          $v0, 0x114($a1)
    ctx->pc = 0x1f5d00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 276)));
    // 0x1f5d04: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1f5d04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1f5d08: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x1f5d08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x1f5d0c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1f5d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1f5d10: 0x8c6361b0  lw          $v1, 0x61B0($v1)
    ctx->pc = 0x1f5d10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 25008)));
    // 0x1f5d14: 0xaca30320  sw          $v1, 0x320($a1)
    ctx->pc = 0x1f5d14u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 800), GPR_U32(ctx, 3));
    // 0x1f5d18: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x1f5d18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x1f5d1c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1f5d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1f5d20: 0x8c8461c0  lw          $a0, 0x61C0($a0)
    ctx->pc = 0x1f5d20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 25024)));
    // 0x1f5d24: 0x3e00008  jr          $ra
    ctx->pc = 0x1F5D24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F5D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5D24u;
        // 0x1f5d28: 0xaca40330  sw          $a0, 0x330($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 816), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F5D24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F5D2Cu;
}
