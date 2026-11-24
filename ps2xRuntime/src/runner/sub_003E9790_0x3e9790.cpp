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

// Function: sub_003E9790
// Address: 0x3e9790 - 0x3e97c8
void sub_003E9790_0x3e9790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E9790_0x3e9790");
#endif

    ctx->pc = 0x3e9790u;

    // 0x3e9790: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x3e9790u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x3e9794: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x3e9794u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x3e9798: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3e9798u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3e979c: 0x24652b2e  addiu       $a1, $v1, 0x2B2E
    ctx->pc = 0x3e979cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 11054));
    // 0x3e97a0: 0x90632b2e  lbu         $v1, 0x2B2E($v1)
    ctx->pc = 0x3e97a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 11054)));
    // 0x3e97a4: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3E97A4u;
    {
        const bool branch_taken_0x3e97a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E97A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E97A4u;
        // 0x3e97a8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e97a4) {
            ctx->pc = 0x3E97C0u;
            goto label_3e97c0;
        }
    }
    ctx->pc = 0x3E97ACu;
    // 0x3e97ac: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x3e97acu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3e97b0: 0x84832b32  lh          $v1, 0x2B32($a0)
    ctx->pc = 0x3e97b0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 11058)));
    // 0x3e97b4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3e97b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3e97b8: 0xa4832b32  sh          $v1, 0x2B32($a0)
    ctx->pc = 0x3e97b8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 11058), (uint16_t)GPR_U32(ctx, 3));
    // 0x3e97bc: 0x0  nop
    ctx->pc = 0x3e97bcu;
    // NOP
label_3e97c0:
    // 0x3e97c0: 0x3e00008  jr          $ra
    ctx->pc = 0x3E97C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E97C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E97C8u;
}
