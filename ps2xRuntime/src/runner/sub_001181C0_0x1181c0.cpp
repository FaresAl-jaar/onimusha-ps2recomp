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

// Function: sub_001181C0
// Address: 0x1181c0 - 0x118200
void sub_001181C0_0x1181c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001181C0_0x1181c0");
#endif

    switch (ctx->pc) {
        case 0x1181d8u: goto label_1181d8;
        default: break;
    }

    ctx->pc = 0x1181c0u;

    // 0x1181c0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1181c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1181c4: 0x1046000b  beq         $v0, $a2, . + 4 + (0xB << 2)
    ctx->pc = 0x1181C4u;
    {
        const bool branch_taken_0x1181c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x1181C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1181C4u;
        // 0x1181c8: 0x85102b  sltu        $v0, $a0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1181c4) {
            ctx->pc = 0x1181F4u;
            goto label_1181f4;
        }
    }
    ctx->pc = 0x1181CCu;
    // 0x1181cc: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1181CCu;
    {
        const bool branch_taken_0x1181cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1181cc) {
            ctx->pc = 0x1181D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1181CCu;
            // 0x1181d0: 0x2200a  movz        $a0, $zero, $v0 (Delay Slot)
            if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1181F8u;
            goto label_1181f8;
        }
    }
    ctx->pc = 0x1181D4u;
    // 0x1181d4: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x1181d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_1181d8:
    // 0x1181d8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1181d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1181dc: 0x10460005  beq         $v0, $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x1181DCu;
    {
        const bool branch_taken_0x1181dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x1181E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1181DCu;
        // 0x1181e0: 0x85102b  sltu        $v0, $a0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1181dc) {
            ctx->pc = 0x1181F4u;
            goto label_1181f4;
        }
    }
    ctx->pc = 0x1181E4u;
    // 0x1181e4: 0x5440fffc  bnel        $v0, $zero, . + 4 + (-0x4 << 2)
    ctx->pc = 0x1181E4u;
    {
        const bool branch_taken_0x1181e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1181e4) {
            ctx->pc = 0x1181E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1181E4u;
            // 0x1181e8: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1181D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1181d8;
        }
    }
    ctx->pc = 0x1181ECu;
    // 0x1181ec: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1181ECu;
    {
        const bool branch_taken_0x1181ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1181F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1181ECu;
        // 0x1181f0: 0x2200a  movz        $a0, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1181ec) {
            ctx->pc = 0x1181F8u;
            goto label_1181f8;
        }
    }
    ctx->pc = 0x1181F4u;
label_1181f4:
    // 0x1181f4: 0x2200a  movz        $a0, $zero, $v0
    ctx->pc = 0x1181f4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
label_1181f8:
    // 0x1181f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1181F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1181FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1181F8u;
        // 0x1181fc: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1181F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x118200u;
}
