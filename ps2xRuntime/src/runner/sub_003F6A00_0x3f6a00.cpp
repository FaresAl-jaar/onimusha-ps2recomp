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

// Function: sub_003F6A00
// Address: 0x3f6a00 - 0x3f6a24
void sub_003F6A00_0x3f6a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F6A00_0x3f6a00");
#endif

    ctx->pc = 0x3f6a00u;

    // 0x3f6a00: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x3f6a00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x3f6a04: 0x21a00  sll         $v1, $v0, 8
    ctx->pc = 0x3f6a04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x3f6a08: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x3f6a08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x3f6a0c: 0x431007  srav        $v0, $v1, $v0
    ctx->pc = 0x3f6a0cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x3f6a10: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x3f6a10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3f6a14: 0x31203  sra         $v0, $v1, 8
    ctx->pc = 0x3f6a14u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 8));
    // 0x3f6a18: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x3f6a18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3f6a1c: 0x3e00008  jr          $ra
    ctx->pc = 0x3F6A1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F6A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6A1Cu;
        // 0x3f6a20: 0x304200ff  andi        $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F6A1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F6A24u;
}
