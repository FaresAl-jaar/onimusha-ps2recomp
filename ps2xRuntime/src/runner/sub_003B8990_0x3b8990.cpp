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

// Function: sub_003B8990
// Address: 0x3b8990 - 0x3b89c0
void sub_003B8990_0x3b8990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B8990_0x3b8990");
#endif

    ctx->pc = 0x3b8990u;

    // 0x3b8990: 0x90822b4b  lbu         $v0, 0x2B4B($a0)
    ctx->pc = 0x3b8990u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 11083)));
    // 0x3b8994: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3b8994u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3b8998: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x3b8998u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3b899c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3B899Cu;
    {
        const bool branch_taken_0x3b899c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b899c) {
            ctx->pc = 0x3B89B8u;
            goto label_3b89b8;
        }
    }
    ctx->pc = 0x3B89A4u;
    // 0x3b89a4: 0xdc830500  ld          $v1, 0x500($a0)
    ctx->pc = 0x3b89a4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 1280)));
    // 0x3b89a8: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x3b89a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x3b89ac: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3b89acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3b89b0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3b89b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3b89b4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x3b89b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3b89b8:
    // 0x3b89b8: 0x3e00008  jr          $ra
    ctx->pc = 0x3B89B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B89BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B89B8u;
        // 0x3b89bc: 0x304200ff  andi        $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B89B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B89C0u;
}
