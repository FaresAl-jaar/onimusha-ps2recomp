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

// Function: sub_002B4130
// Address: 0x2b4130 - 0x2b416c
void sub_002B4130_0x2b4130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B4130_0x2b4130");
#endif

    ctx->pc = 0x2b4130u;

    // 0x2b4130: 0x8ca90004  lw          $t1, 0x4($a1)
    ctx->pc = 0x2b4130u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2b4134: 0x3c038080  lui         $v1, 0x8080
    ctx->pc = 0x2b4134u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32896 << 16));
    // 0x2b4138: 0x90a8002c  lbu         $t0, 0x2C($a1)
    ctx->pc = 0x2b4138u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x2b413c: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x2b413cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2b4140: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x2b4140u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
    // 0x2b4144: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2b4144u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b4148: 0x34638080  ori         $v1, $v1, 0x8080
    ctx->pc = 0x2b4148u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32896);
    // 0x2b414c: 0xa1280001  sb          $t0, 0x1($t1)
    ctx->pc = 0x2b414cu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 1), (uint8_t)GPR_U32(ctx, 8));
    // 0x2b4150: 0xa1270002  sb          $a3, 0x2($t1)
    ctx->pc = 0x2b4150u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 2), (uint8_t)GPR_U32(ctx, 7));
    // 0x2b4154: 0xad260020  sw          $a2, 0x20($t1)
    ctx->pc = 0x2b4154u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 32), GPR_U32(ctx, 6));
    // 0x2b4158: 0x8ca50018  lw          $a1, 0x18($a1)
    ctx->pc = 0x2b4158u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x2b415c: 0xad250010  sw          $a1, 0x10($t1)
    ctx->pc = 0x2b415cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 16), GPR_U32(ctx, 5));
    // 0x2b4160: 0xad24001c  sw          $a0, 0x1C($t1)
    ctx->pc = 0x2b4160u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 28), GPR_U32(ctx, 4));
    // 0x2b4164: 0x3e00008  jr          $ra
    ctx->pc = 0x2B4164u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B4168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4164u;
        // 0x2b4168: 0xad230014  sw          $v1, 0x14($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B4164u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B416Cu;
}
