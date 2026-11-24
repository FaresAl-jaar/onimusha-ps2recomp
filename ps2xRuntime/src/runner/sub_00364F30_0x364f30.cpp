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

// Function: sub_00364F30
// Address: 0x364f30 - 0x364f84
void sub_00364F30_0x364f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00364F30_0x364f30");
#endif

    switch (ctx->pc) {
        case 0x364f6cu: goto label_364f6c;
        case 0x364f74u: goto label_364f74;
        default: break;
    }

    ctx->pc = 0x364f30u;

    // 0x364f30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x364f30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x364f34: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x364f34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x364f38: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x364f38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x364f3c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x364f3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x364f40: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x364f40u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x364f44: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x364f44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364f48: 0xa0800001  sb          $zero, 0x1($a0)
    ctx->pc = 0x364f48u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x364f4c: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x364f4cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x364f50: 0xa0800003  sb          $zero, 0x3($a0)
    ctx->pc = 0x364f50u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x364f54: 0xa0800004  sb          $zero, 0x4($a0)
    ctx->pc = 0x364f54u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x364f58: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x364f58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x364f5c: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x364f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x364f60: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x364f60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x364f64: 0xc0b78b4  jal         func_2DE2D0
    ctx->pc = 0x364F64u;
    SET_GPR_U32(ctx, 31, 0x364F6Cu);
    ctx->pc = 0x364F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364F64u;
    // 0x364f68: 0x24847180  addiu       $a0, $a0, 0x7180 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE2D0u, 0x364F64u, 0x364F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364F6Cu;
label_364f6c:
    // 0x364f6c: 0xc0d9408  jal         func_365020
    ctx->pc = 0x364F6Cu;
    SET_GPR_U32(ctx, 31, 0x364F74u);
    ctx->pc = 0x364F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364F6Cu;
    // 0x364f70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x365020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x365020u, 0x364F6Cu, 0x364F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364F74u;
label_364f74:
    // 0x364f74: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x364f74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x364f78: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x364f78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x364f7c: 0x3e00008  jr          $ra
    ctx->pc = 0x364F7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x364F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364F7Cu;
        // 0x364f80: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x364F7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x364F84u;
}
