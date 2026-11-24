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

// Function: sub_00359C70
// Address: 0x359c70 - 0x359c94
void sub_00359C70_0x359c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00359C70_0x359c70");
#endif

    ctx->pc = 0x359c70u;

    // 0x359c70: 0x4143c  dsll32      $v0, $a0, 16
    ctx->pc = 0x359c70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 16));
    // 0x359c74: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x359c74u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x359c78: 0x30430fff  andi        $v1, $v0, 0xFFF
    ctx->pc = 0x359c78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x359c7c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x359c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x359c80: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x359c80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x359c84: 0x24426540  addiu       $v0, $v0, 0x6540
    ctx->pc = 0x359c84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25920));
    // 0x359c88: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x359c88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x359c8c: 0x3e00008  jr          $ra
    ctx->pc = 0x359C8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x359C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359C8Cu;
        // 0x359c90: 0xc4400000  lwc1        $f0, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x359C8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x359C94u;
}
