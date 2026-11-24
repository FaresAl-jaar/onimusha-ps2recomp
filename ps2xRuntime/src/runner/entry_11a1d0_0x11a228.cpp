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

// Function: entry_11a1d0
// Address: 0x11a1d0 - 0x11a228
void entry_11a1d0_0x11a228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_11a1d0_0x11a228");
#endif

    ctx->pc = 0x11a1d0u;

    // 0x11a1d0: 0x4830008  bgezl       $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x11A1D0u;
    {
        const bool branch_taken_0x11a1d0 = (GPR_S64(ctx, 4) >= 0);
        if (branch_taken_0x11a1d0) {
            ctx->pc = 0x11A1D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11A1D0u;
            // 0x11a1d4: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11A1F4u;
            goto label_11a1f4;
        }
    }
    ctx->pc = 0x11A1D8u;
    // 0x11a1d8: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x11a1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x11a1dc: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x11a1dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x11a1e0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x11a1e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x11a1e4: 0x24653f48  addiu       $a1, $v1, 0x3F48
    ctx->pc = 0x11a1e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 16200));
    // 0x11a1e8: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x11a1e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x11a1ec: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x11A1ECu;
    {
        const bool branch_taken_0x11a1ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A1ECu;
        // 0x11a1f0: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a1ec) {
            ctx->pc = 0x11A200u;
            goto label_11a200;
        }
    }
    ctx->pc = 0x11A1F4u;
label_11a1f4:
    // 0x11a1f4: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x11a1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x11a1f8: 0x8c454168  lw          $a1, 0x4168($v0)
    ctx->pc = 0x11a1f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16744)));
    // 0x11a1fc: 0x8c62416c  lw          $v0, 0x416C($v1)
    ctx->pc = 0x11a1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x40416Cu));
label_11a200:
    // 0x11a200: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x11a200u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x11a204: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11A204u;
    {
        const bool branch_taken_0x11a204 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11A208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A204u;
        // 0x11a208: 0x41900  sll         $v1, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a204) {
            ctx->pc = 0x11A214u;
            goto label_11a214;
        }
    }
    ctx->pc = 0x11A20Cu;
    // 0x11a20c: 0x3e00008  jr          $ra
    ctx->pc = 0x11A20Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11A210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A20Cu;
        // 0x11a210: 0x2402ff97  addiu       $v0, $zero, -0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967191));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11A20Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11A214u;
label_11a214:
    // 0x11a214: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x11a214u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a218: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x11a218u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x11a21c: 0x3e00008  jr          $ra
    ctx->pc = 0x11A21Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11A220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A21Cu;
        // 0x11a220: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11A21Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11A224u;
    // 0x11a224: 0x0  nop
    ctx->pc = 0x11a224u;
    // NOP
    ctx->pc = 0x11a228u;
}
