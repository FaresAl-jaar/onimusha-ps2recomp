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

// Function: sub_0018F4C0
// Address: 0x18f4c0 - 0x18f518
void sub_0018F4C0_0x18f4c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018F4C0_0x18f4c0");
#endif

    ctx->pc = 0x18f4c0u;

    // 0x18f4c0: 0x310900ff  andi        $t1, $t0, 0xFF
    ctx->pc = 0x18f4c0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x18f4c4: 0x19200012  blez        $t1, . + 4 + (0x12 << 2)
    ctx->pc = 0x18F4C4u;
    {
        const bool branch_taken_0x18f4c4 = (GPR_S64(ctx, 9) <= 0);
        if (branch_taken_0x18f4c4) {
            ctx->pc = 0x18F510u;
            goto label_18f510;
        }
    }
    ctx->pc = 0x18F4CCu;
    // 0x18f4cc: 0x30a800ff  andi        $t0, $a1, 0xFF
    ctx->pc = 0x18f4ccu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x18f4d0: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x18f4d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x18f4d4: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x18f4d4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x18f4d8: 0x30e300ff  andi        $v1, $a3, 0xFF
    ctx->pc = 0x18f4d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x18f4dc: 0x1052821  addu        $a1, $t0, $a1
    ctx->pc = 0x18f4dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x18f4e0: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x18f4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x18f4e4: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x18f4e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x18f4e8: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x18f4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x18f4ec: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x18f4ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x18f4f0: 0xac850044  sw          $a1, 0x44($a0)
    ctx->pc = 0x18f4f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 5));
    // 0x18f4f4: 0x3403fffd  ori         $v1, $zero, 0xFFFD
    ctx->pc = 0x18f4f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65533);
    // 0x18f4f8: 0xac80004c  sw          $zero, 0x4C($a0)
    ctx->pc = 0x18f4f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 0));
    // 0x18f4fc: 0xac800048  sw          $zero, 0x48($a0)
    ctx->pc = 0x18f4fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
    // 0x18f500: 0xac890050  sw          $t1, 0x50($a0)
    ctx->pc = 0x18f500u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 9));
    // 0x18f504: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x18f504u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x18f508: 0xac830034  sw          $v1, 0x34($a0)
    ctx->pc = 0x18f508u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 3));
    // 0x18f50c: 0x0  nop
    ctx->pc = 0x18f50cu;
    // NOP
label_18f510:
    // 0x18f510: 0x3e00008  jr          $ra
    ctx->pc = 0x18F510u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18F514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F510u;
        // 0x18f514: 0xac800054  sw          $zero, 0x54($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18F510u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18F518u;
}
