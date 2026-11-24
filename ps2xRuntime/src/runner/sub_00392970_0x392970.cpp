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

// Function: sub_00392970
// Address: 0x392970 - 0x3929c8
void sub_00392970_0x392970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00392970_0x392970");
#endif

    ctx->pc = 0x392970u;

    // 0x392970: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x392970u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x392974: 0x10a0000c  beqz        $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x392974u;
    {
        const bool branch_taken_0x392974 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x392978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392974u;
        // 0x392978: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392974) {
            ctx->pc = 0x3929A8u;
            goto label_3929a8;
        }
    }
    ctx->pc = 0x39297Cu;
    // 0x39297c: 0x10a30004  beq         $a1, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x39297Cu;
    {
        const bool branch_taken_0x39297c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x39297c) {
            ctx->pc = 0x392990u;
            goto label_392990;
        }
    }
    ctx->pc = 0x392984u;
    // 0x392984: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x392984u;
    {
        const bool branch_taken_0x392984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x392984) {
            ctx->pc = 0x3929A8u;
            goto label_3929a8;
        }
    }
    ctx->pc = 0x39298Cu;
    // 0x39298c: 0x0  nop
    ctx->pc = 0x39298cu;
    // NOP
label_392990:
    // 0x392990: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x392990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x392994: 0xa0830030  sb          $v1, 0x30($a0)
    ctx->pc = 0x392994u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 48), (uint8_t)GPR_U32(ctx, 3));
    // 0x392998: 0xa0800032  sb          $zero, 0x32($a0)
    ctx->pc = 0x392998u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 50), (uint8_t)GPR_U32(ctx, 0));
    // 0x39299c: 0xa4800034  sh          $zero, 0x34($a0)
    ctx->pc = 0x39299cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 52), (uint16_t)GPR_U32(ctx, 0));
    // 0x3929a0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3929A0u;
    {
        const bool branch_taken_0x3929a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3929A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3929A0u;
        // 0x3929a4: 0xac800038  sw          $zero, 0x38($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3929a0) {
            ctx->pc = 0x3929C0u;
            goto label_3929c0;
        }
    }
    ctx->pc = 0x3929A8u;
label_3929a8:
    // 0x3929a8: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x3929a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3929ac: 0xa0830030  sb          $v1, 0x30($a0)
    ctx->pc = 0x3929acu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 48), (uint8_t)GPR_U32(ctx, 3));
    // 0x3929b0: 0xa0800032  sb          $zero, 0x32($a0)
    ctx->pc = 0x3929b0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 50), (uint8_t)GPR_U32(ctx, 0));
    // 0x3929b4: 0xa4800034  sh          $zero, 0x34($a0)
    ctx->pc = 0x3929b4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 52), (uint16_t)GPR_U32(ctx, 0));
    // 0x3929b8: 0xac800038  sw          $zero, 0x38($a0)
    ctx->pc = 0x3929b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 0));
    // 0x3929bc: 0x0  nop
    ctx->pc = 0x3929bcu;
    // NOP
label_3929c0:
    // 0x3929c0: 0x3e00008  jr          $ra
    ctx->pc = 0x3929C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3929C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3929C8u;
}
