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

// Function: sub_00119470
// Address: 0x119470 - 0x1194c0
void sub_00119470_0x119470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00119470_0x119470");
#endif

    ctx->pc = 0x119470u;

    // 0x119470: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x119470u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x119474: 0x24434148  addiu       $v1, $v0, 0x4148
    ctx->pc = 0x119474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16712));
    // 0x119478: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x119478u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x404150u));
    // 0x11947c: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11947Cu;
    {
        const bool branch_taken_0x11947c = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x11947c) {
            ctx->pc = 0x119490u;
            goto label_119490;
        }
    }
    ctx->pc = 0x119484u;
    // 0x119484: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x119484u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x119488: 0x3e00008  jr          $ra
    ctx->pc = 0x119488u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11948Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119488u;
        // 0x11948c: 0x34428001  ori         $v0, $v0, 0x8001 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32769);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119488u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x119490u;
label_119490:
    // 0x119490: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x119490u;
    {
        const bool branch_taken_0x119490 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x119490) {
            ctx->pc = 0x1194A0u;
            goto label_1194a0;
        }
    }
    ctx->pc = 0x119498u;
    // 0x119498: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x119498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x11949c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x11949cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_1194a0:
    // 0x1194a0: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1194A0u;
    {
        const bool branch_taken_0x1194a0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1194a0) {
            ctx->pc = 0x1194B8u;
            goto label_1194b8;
        }
    }
    ctx->pc = 0x1194A8u;
    // 0x1194a8: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x1194a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1194ac: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1194acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1194b0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1194b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1194b4: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1194b4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_1194b8:
    // 0x1194b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1194B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1194BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1194B8u;
        // 0x1194bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1194B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1194C0u;
}
