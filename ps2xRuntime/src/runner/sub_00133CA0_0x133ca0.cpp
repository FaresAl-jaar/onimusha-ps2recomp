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

// Function: sub_00133CA0
// Address: 0x133ca0 - 0x133d00
void sub_00133CA0_0x133ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00133CA0_0x133ca0");
#endif

    switch (ctx->pc) {
        case 0x133cb0u: goto label_133cb0;
        default: break;
    }

    ctx->pc = 0x133ca0u;

    // 0x133ca0: 0x24871588  addiu       $a3, $a0, 0x1588
    ctx->pc = 0x133ca0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 5512));
    // 0x133ca4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x133ca4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133ca8: 0x24832d88  addiu       $v1, $a0, 0x2D88
    ctx->pc = 0x133ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 11656));
    // 0x133cac: 0x0  nop
    ctx->pc = 0x133cacu;
    // NOP
label_133cb0:
    // 0x133cb0: 0x90e20010  lbu         $v0, 0x10($a3)
    ctx->pc = 0x133cb0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x133cb4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x133cb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x133cb8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x133CB8u;
    {
        const bool branch_taken_0x133cb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x133cb8) {
            ctx->pc = 0x133CE0u;
            goto label_133ce0;
        }
    }
    ctx->pc = 0x133CC0u;
    // 0x133cc0: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x133cc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x133cc4: 0x14c00008  bnez        $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x133CC4u;
    {
        const bool branch_taken_0x133cc4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x133CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133CC4u;
        // 0x133cc8: 0x51040  sll         $v0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133cc4) {
            ctx->pc = 0x133CE8u;
            goto label_133ce8;
        }
    }
    ctx->pc = 0x133CCCu;
    // 0x133ccc: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x133cccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x133cd0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x133cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x133cd4: 0xe21023  subu        $v0, $a3, $v0
    ctx->pc = 0x133cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x133cd8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x133CD8u;
    {
        const bool branch_taken_0x133cd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x133CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133CD8u;
        // 0x133cdc: 0x24420018  addiu       $v0, $v0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133cd8) {
            ctx->pc = 0x133CF8u;
            goto label_133cf8;
        }
    }
    ctx->pc = 0x133CE0u;
label_133ce0:
    // 0x133ce0: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x133ce0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133ce4: 0x0  nop
    ctx->pc = 0x133ce4u;
    // NOP
label_133ce8:
    // 0x133ce8: 0x24e70018  addiu       $a3, $a3, 0x18
    ctx->pc = 0x133ce8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 24));
    // 0x133cec: 0xe3102b  sltu        $v0, $a3, $v1
    ctx->pc = 0x133cecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x133cf0: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x133CF0u;
    {
        const bool branch_taken_0x133cf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x133CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133CF0u;
        // 0x133cf4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133cf0) {
            ctx->pc = 0x133CB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_133cb0;
        }
    }
    ctx->pc = 0x133CF8u;
label_133cf8:
    // 0x133cf8: 0x3e00008  jr          $ra
    ctx->pc = 0x133CF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x133CF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x133D00u;
}
