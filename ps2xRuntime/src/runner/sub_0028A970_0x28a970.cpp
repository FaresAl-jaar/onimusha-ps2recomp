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

// Function: sub_0028A970
// Address: 0x28a970 - 0x28aa18
void sub_0028A970_0x28a970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028A970_0x28a970");
#endif

    switch (ctx->pc) {
        case 0x28a9c8u: goto label_28a9c8;
        default: break;
    }

    ctx->pc = 0x28a970u;

    // 0x28a970: 0x30e200ff  andi        $v0, $a3, 0xFF
    ctx->pc = 0x28a970u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x28a974: 0x23e00  sll         $a3, $v0, 24
    ctx->pc = 0x28a974u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x28a978: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x28a978u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x28a97c: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x28a97cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x28a980: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x28a980u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x28a984: 0xe31825  or          $v1, $a3, $v1
    ctx->pc = 0x28a984u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x28a988: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x28a988u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x28a98c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x28a98cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a990: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x28a990u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x28a994: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x28a994u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x28a998: 0x433825  or          $a3, $v0, $v1
    ctx->pc = 0x28a998u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x28a99c: 0x314200ff  andi        $v0, $t2, 0xFF
    ctx->pc = 0x28a99cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)255);
    // 0x28a9a0: 0x22600  sll         $a0, $v0, 24
    ctx->pc = 0x28a9a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x28a9a4: 0x312200ff  andi        $v0, $t1, 0xFF
    ctx->pc = 0x28a9a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
    // 0x28a9a8: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x28a9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x28a9ac: 0x310200ff  andi        $v0, $t0, 0xFF
    ctx->pc = 0x28a9acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x28a9b0: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x28a9b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x28a9b4: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x28a9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x28a9b8: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x28a9b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x28a9bc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x28a9bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x28a9c0: 0x248494b0  addiu       $a0, $a0, -0x6B50
    ctx->pc = 0x28a9c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939824));
    // 0x28a9c4: 0x34460001  ori         $a2, $v0, 0x1
    ctx->pc = 0x28a9c4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_28a9c8:
    // 0x28a9c8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x28a9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x28a9cc: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x28A9CCu;
    {
        const bool branch_taken_0x28a9cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x28a9cc) {
            ctx->pc = 0x28A9F8u;
            goto label_28a9f8;
        }
    }
    ctx->pc = 0x28A9D4u;
    // 0x28a9d4: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x28a9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x28a9d8: 0x14e20007  bne         $a3, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x28A9D8u;
    {
        const bool branch_taken_0x28a9d8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x28a9d8) {
            ctx->pc = 0x28A9F8u;
            goto label_28a9f8;
        }
    }
    ctx->pc = 0x28A9E0u;
    // 0x28a9e0: 0x14c30005  bne         $a2, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x28A9E0u;
    {
        const bool branch_taken_0x28a9e0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x28a9e0) {
            ctx->pc = 0x28A9F8u;
            goto label_28a9f8;
        }
    }
    ctx->pc = 0x28A9E8u;
    // 0x28a9e8: 0xaf858940  sw          $a1, -0x76C0($gp)
    ctx->pc = 0x28a9e8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936896), GPR_U32(ctx, 5));
    // 0x28a9ec: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x28A9ECu;
    {
        const bool branch_taken_0x28a9ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A9ECu;
        // 0x28a9f0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a9ec) {
            ctx->pc = 0x28AA10u;
            goto label_28aa10;
        }
    }
    ctx->pc = 0x28A9F4u;
    // 0x28a9f4: 0x0  nop
    ctx->pc = 0x28a9f4u;
    // NOP
label_28a9f8:
    // 0x28a9f8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x28a9f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x28a9fc: 0x28a20100  slti        $v0, $a1, 0x100
    ctx->pc = 0x28a9fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x28aa00: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x28AA00u;
    {
        const bool branch_taken_0x28aa00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28AA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AA00u;
        // 0x28aa04: 0x2484000c  addiu       $a0, $a0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28aa00) {
            ctx->pc = 0x28A9C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28a9c8;
        }
    }
    ctx->pc = 0x28AA08u;
    // 0x28aa08: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x28aa08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28aa0c: 0x0  nop
    ctx->pc = 0x28aa0cu;
    // NOP
label_28aa10:
    // 0x28aa10: 0x3e00008  jr          $ra
    ctx->pc = 0x28AA10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28AA10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28AA18u;
}
