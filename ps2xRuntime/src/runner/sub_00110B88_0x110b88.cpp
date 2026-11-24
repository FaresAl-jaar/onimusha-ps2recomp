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

// Function: sub_00110B88
// Address: 0x110b88 - 0x110bd4
void sub_00110B88_0x110b88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00110B88_0x110b88");
#endif

    switch (ctx->pc) {
        case 0x110bb4u: goto label_110bb4;
        default: break;
    }

    ctx->pc = 0x110b88u;

    // 0x110b88: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x110b88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x110b8c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x110b8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x110b90: 0xffa80060  sd          $t0, 0x60($sp)
    ctx->pc = 0x110b90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 8));
    // 0x110b94: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x110b94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110b98: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x110b98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x110b9c: 0x27a80060  addiu       $t0, $sp, 0x60
    ctx->pc = 0x110b9cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x110ba0: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x110ba0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x110ba4: 0xffa90068  sd          $t1, 0x68($sp)
    ctx->pc = 0x110ba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 9));
    // 0x110ba8: 0xffaa0070  sd          $t2, 0x70($sp)
    ctx->pc = 0x110ba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 10));
    // 0x110bac: 0xc043f72  jal         func_10FDC8
    ctx->pc = 0x110BACu;
    SET_GPR_U32(ctx, 31, 0x110BB4u);
    ctx->pc = 0x110BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110BACu;
    // 0x110bb0: 0xffab0078  sd          $t3, 0x78($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FDC8u, 0x110BACu, 0x110BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110BB4u;
label_110bb4:
    // 0x110bb4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x110bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x110bb8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x110bb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110bbc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x110bbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x110bc0: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x110bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x110bc4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x110bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x110bc8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x110bc8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x110bcc: 0x3e00008  jr          $ra
    ctx->pc = 0x110BCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x110BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110BCCu;
        // 0x110bd0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x110BCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x110BD4u;
}
