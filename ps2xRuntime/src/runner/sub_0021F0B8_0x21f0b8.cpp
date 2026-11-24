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

// Function: sub_0021F0B8
// Address: 0x21f0b8 - 0x21f124
void sub_0021F0B8_0x21f0b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021F0B8_0x21f0b8");
#endif

    switch (ctx->pc) {
        case 0x21f0e4u: goto label_21f0e4;
        default: break;
    }

    ctx->pc = 0x21f0b8u;

    // 0x21f0b8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x21f0b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x21f0bc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x21f0bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x21f0c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21f0c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f0c4: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x21f0c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x21f0c8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x21f0c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f0cc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x21f0ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x21f0d0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x21f0d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f0d4: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x21F0D4u;
    {
        const bool branch_taken_0x21f0d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F0D4u;
        // 0x21f0d8: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f0d4) {
            ctx->pc = 0x21F110u;
            goto label_21f110;
        }
    }
    ctx->pc = 0x21F0DCu;
    // 0x21f0dc: 0xc087b4c  jal         func_21ED30
    ctx->pc = 0x21F0DCu;
    SET_GPR_U32(ctx, 31, 0x21F0E4u);
    ctx->pc = 0x21ED30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21ED30u, 0x21F0DCu, 0x21F0E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F0E4u;
label_21f0e4:
    // 0x21f0e4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x21f0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21f0e8: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x21F0E8u;
    {
        const bool branch_taken_0x21f0e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21f0e8) {
            ctx->pc = 0x21F0ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21F0E8u;
            // 0x21f0ec: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21F114u;
            goto label_21f114;
        }
    }
    ctx->pc = 0x21F0F0u;
    // 0x21f0f0: 0x8e020dc0  lw          $v0, 0xDC0($s0)
    ctx->pc = 0x21f0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3520)));
    // 0x21f0f4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21F0F4u;
    {
        const bool branch_taken_0x21f0f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21F0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F0F4u;
        // 0x21f0f8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f0f4) {
            ctx->pc = 0x21F10Cu;
            goto label_21f10c;
        }
    }
    ctx->pc = 0x21F0FCu;
    // 0x21f0fc: 0x8e020da8  lw          $v0, 0xDA8($s0)
    ctx->pc = 0x21f0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3496)));
    // 0x21f100: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21F100u;
    {
        const bool branch_taken_0x21f100 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x21F104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F100u;
        // 0x21f104: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f100) {
            ctx->pc = 0x21F114u;
            goto label_21f114;
        }
    }
    ctx->pc = 0x21F108u;
    // 0x21f108: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21f108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21f10c:
    // 0x21f10c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x21f10cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_21f110:
    // 0x21f110: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x21f110u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_21f114:
    // 0x21f114: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x21f114u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21f118: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x21f118u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21f11c: 0x3e00008  jr          $ra
    ctx->pc = 0x21F11Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21F120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F11Cu;
        // 0x21f120: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21F11Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21F124u;
}
