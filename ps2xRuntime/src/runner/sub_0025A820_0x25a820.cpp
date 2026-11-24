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

// Function: sub_0025A820
// Address: 0x25a820 - 0x25a83c
void sub_0025A820_0x25a820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025A820_0x25a820");
#endif

    ctx->pc = 0x25a820u;

    // 0x25a820: 0x4143c  dsll32      $v0, $a0, 16
    ctx->pc = 0x25a820u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 16));
    // 0x25a824: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x25a824u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x25a828: 0x24420200  addiu       $v0, $v0, 0x200
    ctx->pc = 0x25a828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x25a82c: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x25a82cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x25a830: 0x21283  sra         $v0, $v0, 10
    ctx->pc = 0x25a830u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 10));
    // 0x25a834: 0x3e00008  jr          $ra
    ctx->pc = 0x25A834u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25A838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A834u;
        // 0x25a838: 0x30420003  andi        $v0, $v0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25A834u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25A83Cu;
}
