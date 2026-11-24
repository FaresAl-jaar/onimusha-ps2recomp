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

// Function: sub_0030BA60
// Address: 0x30ba60 - 0x30ba88
void sub_0030BA60_0x30ba60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030BA60_0x30ba60");
#endif

    ctx->pc = 0x30ba60u;

    // 0x30ba60: 0x9483004a  lhu         $v1, 0x4A($a0)
    ctx->pc = 0x30ba60u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 74)));
    // 0x30ba64: 0x30a6ffff  andi        $a2, $a1, 0xFFFF
    ctx->pc = 0x30ba64u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x30ba68: 0x10c30005  beq         $a2, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x30BA68u;
    {
        const bool branch_taken_0x30ba68 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x30BA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BA68u;
        // 0x30ba6c: 0x24030010  addiu       $v1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ba68) {
            ctx->pc = 0x30BA80u;
            goto label_30ba80;
        }
    }
    ctx->pc = 0x30BA70u;
    // 0x30ba70: 0xa0830045  sb          $v1, 0x45($a0)
    ctx->pc = 0x30ba70u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 69), (uint8_t)GPR_U32(ctx, 3));
    // 0x30ba74: 0xa0800046  sb          $zero, 0x46($a0)
    ctx->pc = 0x30ba74u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 70), (uint8_t)GPR_U32(ctx, 0));
    // 0x30ba78: 0xa4850048  sh          $a1, 0x48($a0)
    ctx->pc = 0x30ba78u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 72), (uint16_t)GPR_U32(ctx, 5));
    // 0x30ba7c: 0xa480004a  sh          $zero, 0x4A($a0)
    ctx->pc = 0x30ba7cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 74), (uint16_t)GPR_U32(ctx, 0));
label_30ba80:
    // 0x30ba80: 0x3e00008  jr          $ra
    ctx->pc = 0x30BA80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30BA80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30BA88u;
}
