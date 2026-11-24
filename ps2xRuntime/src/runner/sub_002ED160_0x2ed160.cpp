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

// Function: sub_002ED160
// Address: 0x2ed160 - 0x2ed190
void sub_002ED160_0x2ed160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ED160_0x2ed160");
#endif

    ctx->pc = 0x2ed160u;

    // 0x2ed160: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x2ed160u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2ed164: 0x94860002  lhu         $a2, 0x2($a0)
    ctx->pc = 0x2ed164u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x2ed168: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2ed168u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2ed16c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2ed16cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ed170: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2ed170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2ed174: 0xc42004  sllv        $a0, $a0, $a2
    ctx->pc = 0x2ed174u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 6) & 0x1F));
    // 0x2ed178: 0x803027  not         $a2, $a0
    ctx->pc = 0x2ed178u;
    SET_GPR_U64(ctx, 6, ~(GPR_U64(ctx, 4) | GPR_U64(ctx, 0)));
    // 0x2ed17c: 0x8c640858  lw          $a0, 0x858($v1)
    ctx->pc = 0x2ed17cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2136)));
    // 0x2ed180: 0x8c8304cc  lw          $v1, 0x4CC($a0)
    ctx->pc = 0x2ed180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1228)));
    // 0x2ed184: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x2ed184u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x2ed188: 0x3e00008  jr          $ra
    ctx->pc = 0x2ED188u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ED18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED188u;
        // 0x2ed18c: 0xac8304cc  sw          $v1, 0x4CC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1228), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ED188u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ED190u;
}
