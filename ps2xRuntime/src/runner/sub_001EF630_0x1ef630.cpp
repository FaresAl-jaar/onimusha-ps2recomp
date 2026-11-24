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

// Function: sub_001EF630
// Address: 0x1ef630 - 0x1ef660
void sub_001EF630_0x1ef630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EF630_0x1ef630");
#endif

    ctx->pc = 0x1ef630u;

    // 0x1ef630: 0x8c830030  lw          $v1, 0x30($a0)
    ctx->pc = 0x1ef630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1ef634: 0x90650000  lbu         $a1, 0x0($v1)
    ctx->pc = 0x1ef634u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ef638: 0x24620002  addiu       $v0, $v1, 0x2
    ctx->pc = 0x1ef638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x1ef63c: 0x90630001  lbu         $v1, 0x1($v1)
    ctx->pc = 0x1ef63cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x1ef640: 0xac820030  sw          $v0, 0x30($a0)
    ctx->pc = 0x1ef640u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
    // 0x1ef644: 0x31200  sll         $v0, $v1, 8
    ctx->pc = 0x1ef644u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x1ef648: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1ef648u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1ef64c: 0xa21025  or          $v0, $a1, $v0
    ctx->pc = 0x1ef64cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x1ef650: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1ef650u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1ef654: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1ef654u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1ef658: 0x3e00008  jr          $ra
    ctx->pc = 0x1EF658u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EF65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF658u;
        // 0x1ef65c: 0x2143f  dsra32      $v0, $v0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EF658u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EF660u;
}
