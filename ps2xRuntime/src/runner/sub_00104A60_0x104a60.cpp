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

// Function: sub_00104A60
// Address: 0x104a60 - 0x104ab8
void sub_00104A60_0x104a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00104A60_0x104a60");
#endif

    switch (ctx->pc) {
        case 0x104a70u: goto label_104a70;
        default: break;
    }

    ctx->pc = 0x104a60u;

    // 0x104a60: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x104a60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x104a64: 0x30a2000c  andi        $v0, $a1, 0xC
    ctx->pc = 0x104a64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)12);
    // 0x104a68: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x104A68u;
    {
        const bool branch_taken_0x104a68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x104A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104A68u;
        // 0x104a6c: 0x8c860008  lw          $a2, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104a68) {
            ctx->pc = 0x104A8Cu;
            goto label_104a8c;
        }
    }
    ctx->pc = 0x104A70u;
label_104a70:
    // 0x104a70: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x104a70u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x104a74: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x104a74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x104a78: 0x30a2000c  andi        $v0, $a1, 0xC
    ctx->pc = 0x104a78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)12);
    // 0x104a7c: 0x0  nop
    ctx->pc = 0x104a7cu;
    // NOP
    // 0x104a80: 0x0  nop
    ctx->pc = 0x104a80u;
    // NOP
    // 0x104a84: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x104A84u;
    {
        const bool branch_taken_0x104a84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x104a84) {
            ctx->pc = 0x104A70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_104a70;
        }
    }
    ctx->pc = 0x104A8Cu;
label_104a8c:
    // 0x104a8c: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x104A8Cu;
    {
        const bool branch_taken_0x104a8c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x104A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104A8Cu;
        // 0x104a90: 0xa61023  subu        $v0, $a1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104a8c) {
            ctx->pc = 0x104AA8u;
            goto label_104aa8;
        }
    }
    ctx->pc = 0x104A94u;
    // 0x104a94: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x104a94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x104a98: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x104a98u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x104a9c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x104a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x104aa0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x104aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x104aa4: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x104aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
label_104aa8:
    // 0x104aa8: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x104aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x104aac: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x104aacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104ab0: 0x3e00008  jr          $ra
    ctx->pc = 0x104AB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x104AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104AB0u;
        // 0x104ab4: 0xac850000  sw          $a1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x104AB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x104AB8u;
}
