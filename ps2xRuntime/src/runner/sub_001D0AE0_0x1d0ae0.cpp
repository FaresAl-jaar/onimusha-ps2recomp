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

// Function: sub_001D0AE0
// Address: 0x1d0ae0 - 0x1d0b1c
void sub_001D0AE0_0x1d0ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D0AE0_0x1d0ae0");
#endif

    ctx->pc = 0x1d0ae0u;

    // 0x1d0ae0: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x1d0ae0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1d0ae4: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x1d0ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x1d0ae8: 0x22900  sll         $a1, $v0, 4
    ctx->pc = 0x1d0ae8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d0aec: 0x2484bba0  addiu       $a0, $a0, -0x4460
    ctx->pc = 0x1d0aecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949792));
    // 0x1d0af0: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x1d0af0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x1d0af4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1d0af4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1d0af8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d0af8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d0afc: 0x3c020082  lui         $v0, 0x82
    ctx->pc = 0x1d0afcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)130 << 16));
    // 0x1d0b00: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x1d0b00u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d0b04: 0x2442b1a0  addiu       $v0, $v0, -0x4E60
    ctx->pc = 0x1d0b04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947232));
    // 0x1d0b08: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1d0b08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1d0b0c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d0b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d0b10: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1d0b10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1d0b14: 0x3e00008  jr          $ra
    ctx->pc = 0x1D0B14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D0B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0B14u;
        // 0x1d0b18: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D0B14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D0B1Cu;
}
