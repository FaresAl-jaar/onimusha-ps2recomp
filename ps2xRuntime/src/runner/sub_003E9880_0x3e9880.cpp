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

// Function: sub_003E9880
// Address: 0x3e9880 - 0x3e98b8
void sub_003E9880_0x3e9880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E9880_0x3e9880");
#endif

    ctx->pc = 0x3e9880u;

    // 0x3e9880: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x3e9880u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x3e9884: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x3e9884u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x3e9888: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3e9888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3e988c: 0x24652b34  addiu       $a1, $v1, 0x2B34
    ctx->pc = 0x3e988cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 11060));
    // 0x3e9890: 0x90632b34  lbu         $v1, 0x2B34($v1)
    ctx->pc = 0x3e9890u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 11060)));
    // 0x3e9894: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3E9894u;
    {
        const bool branch_taken_0x3e9894 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E9898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9894u;
        // 0x3e9898: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9894) {
            ctx->pc = 0x3E98B0u;
            goto label_3e98b0;
        }
    }
    ctx->pc = 0x3E989Cu;
    // 0x3e989c: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x3e989cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3e98a0: 0x84832b38  lh          $v1, 0x2B38($a0)
    ctx->pc = 0x3e98a0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 11064)));
    // 0x3e98a4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3e98a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3e98a8: 0xa4832b38  sh          $v1, 0x2B38($a0)
    ctx->pc = 0x3e98a8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 11064), (uint16_t)GPR_U32(ctx, 3));
    // 0x3e98ac: 0x0  nop
    ctx->pc = 0x3e98acu;
    // NOP
label_3e98b0:
    // 0x3e98b0: 0x3e00008  jr          $ra
    ctx->pc = 0x3E98B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E98B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E98B8u;
}
