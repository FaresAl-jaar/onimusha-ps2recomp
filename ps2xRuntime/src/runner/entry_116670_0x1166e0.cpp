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

// Function: entry_116670
// Address: 0x116670 - 0x1166e0
void entry_116670_0x1166e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_116670_0x1166e0");
#endif

    switch (ctx->pc) {
        case 0x1166c0u: goto label_1166c0;
        default: break;
    }

    ctx->pc = 0x116670u;

    // 0x116670: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x116670u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x116674: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x116674u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x116678: 0x8c432b58  lw          $v1, 0x2B58($v0)
    ctx->pc = 0x116678u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x402B58u));
    // 0x11667c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x11667cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x116680: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x116680u;
    {
        const bool branch_taken_0x116680 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x116684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116680u;
        // 0x116684: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116680) {
            ctx->pc = 0x116690u;
            goto label_116690;
        }
    }
    ctx->pc = 0x116688u;
    // 0x116688: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x116688u;
    {
        const bool branch_taken_0x116688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11668Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116688u;
        // 0x11668c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116688) {
            ctx->pc = 0x1166D0u;
            goto label_1166d0;
        }
    }
    ctx->pc = 0x116690u;
label_116690:
    // 0x116690: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x116690u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x116694: 0x3c100069  lui         $s0, 0x69
    ctx->pc = 0x116694u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)105 << 16));
    // 0x116698: 0x24840480  addiu       $a0, $a0, 0x480
    ctx->pc = 0x116698u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    // 0x11669c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x11669cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1166a0: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1166a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1166a4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1166a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1166a8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1166a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1166ac: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1166acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1166b0: 0x260904c0  addiu       $t1, $s0, 0x4C0
    ctx->pc = 0x1166b0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 1216));
    // 0x1166b4: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1166b4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1166b8: 0xc0447ca  jal         func_111F28
    ctx->pc = 0x1166B8u;
    SET_GPR_U32(ctx, 31, 0x1166C0u);
    ctx->pc = 0x1166BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1166B8u;
    // 0x1166bc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111F28u, 0x1166B8u, 0x1166C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1166C0u;
label_1166c0:
    // 0x1166c0: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1166C0u;
    {
        const bool branch_taken_0x1166c0 = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x1166c0) {
            ctx->pc = 0x1166C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1166C0u;
            // 0x1166c4: 0x8e0204c0  lw          $v0, 0x4C0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1216)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1166D0u;
            goto label_1166d0;
        }
    }
    ctx->pc = 0x1166C8u;
    // 0x1166c8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1166c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1166cc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1166ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1166d0:
    // 0x1166d0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1166d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1166d4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1166d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1166d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1166D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1166DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1166D8u;
        // 0x1166dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1166D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1166E0u;
}
