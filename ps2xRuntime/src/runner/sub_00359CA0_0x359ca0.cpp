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

// Function: sub_00359CA0
// Address: 0x359ca0 - 0x359cc8
void sub_00359CA0_0x359ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00359CA0_0x359ca0");
#endif

    ctx->pc = 0x359ca0u;

    // 0x359ca0: 0x4143c  dsll32      $v0, $a0, 16
    ctx->pc = 0x359ca0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 16));
    // 0x359ca4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x359ca4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x359ca8: 0x24430400  addiu       $v1, $v0, 0x400
    ctx->pc = 0x359ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1024));
    // 0x359cac: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x359cacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x359cb0: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x359cb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x359cb4: 0x24426540  addiu       $v0, $v0, 0x6540
    ctx->pc = 0x359cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25920));
    // 0x359cb8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x359cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x359cbc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x359cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x359cc0: 0x3e00008  jr          $ra
    ctx->pc = 0x359CC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x359CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359CC0u;
        // 0x359cc4: 0xc4400000  lwc1        $f0, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x359CC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x359CC8u;
}
