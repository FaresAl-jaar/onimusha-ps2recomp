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

// Function: entry_116590
// Address: 0x116590 - 0x116600
void entry_116590_0x116600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_116590_0x116600");
#endif

    switch (ctx->pc) {
        case 0x1165e0u: goto label_1165e0;
        default: break;
    }

    ctx->pc = 0x116590u;

    // 0x116590: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x116590u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x116594: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x116594u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x116598: 0x8c432b58  lw          $v1, 0x2B58($v0)
    ctx->pc = 0x116598u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x402B58u));
    // 0x11659c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x11659cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1165a0: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1165A0u;
    {
        const bool branch_taken_0x1165a0 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x1165A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1165A0u;
        // 0x1165a4: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1165a0) {
            ctx->pc = 0x1165B0u;
            goto label_1165b0;
        }
    }
    ctx->pc = 0x1165A8u;
    // 0x1165a8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1165A8u;
    {
        const bool branch_taken_0x1165a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1165ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1165A8u;
        // 0x1165ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1165a8) {
            ctx->pc = 0x1165F0u;
            goto label_1165f0;
        }
    }
    ctx->pc = 0x1165B0u;
label_1165b0:
    // 0x1165b0: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x1165b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x1165b4: 0x3c100069  lui         $s0, 0x69
    ctx->pc = 0x1165b4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)105 << 16));
    // 0x1165b8: 0x24840480  addiu       $a0, $a0, 0x480
    ctx->pc = 0x1165b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    // 0x1165bc: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1165bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1165c0: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1165c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1165c4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1165c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1165c8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1165c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1165cc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1165ccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1165d0: 0x260904c0  addiu       $t1, $s0, 0x4C0
    ctx->pc = 0x1165d0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 1216));
    // 0x1165d4: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1165d4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1165d8: 0xc0447ca  jal         func_111F28
    ctx->pc = 0x1165D8u;
    SET_GPR_U32(ctx, 31, 0x1165E0u);
    ctx->pc = 0x1165DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1165D8u;
    // 0x1165dc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111F28u, 0x1165D8u, 0x1165E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1165E0u;
label_1165e0:
    // 0x1165e0: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1165E0u;
    {
        const bool branch_taken_0x1165e0 = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x1165e0) {
            ctx->pc = 0x1165E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1165E0u;
            // 0x1165e4: 0x8e0204c0  lw          $v0, 0x4C0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1216)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1165F0u;
            goto label_1165f0;
        }
    }
    ctx->pc = 0x1165E8u;
    // 0x1165e8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1165e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1165ec: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1165ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1165f0:
    // 0x1165f0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1165f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1165f4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1165f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1165f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1165F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1165FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1165F8u;
        // 0x1165fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1165F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x116600u;
}
