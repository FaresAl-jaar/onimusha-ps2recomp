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

// Function: sub_0032EC20
// Address: 0x32ec20 - 0x32ec58
void sub_0032EC20_0x32ec20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032EC20_0x32ec20");
#endif

    switch (ctx->pc) {
        case 0x32ec44u: goto label_32ec44;
        default: break;
    }

    ctx->pc = 0x32ec20u;

    // 0x32ec20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x32ec20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x32ec24: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x32ec24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x32ec28: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x32ec28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x32ec2c: 0xa0800114  sb          $zero, 0x114($a0)
    ctx->pc = 0x32ec2cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 276), (uint8_t)GPR_U32(ctx, 0));
    // 0x32ec30: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x32ec30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32ec34: 0x92050003  lbu         $a1, 0x3($s0)
    ctx->pc = 0x32ec34u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x32ec38: 0x92060001  lbu         $a2, 0x1($s0)
    ctx->pc = 0x32ec38u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x32ec3c: 0xc09d4f4  jal         func_2753D0
    ctx->pc = 0x32EC3Cu;
    SET_GPR_U32(ctx, 31, 0x32EC44u);
    ctx->pc = 0x32EC40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32EC3Cu;
    // 0x32ec40: 0x90840002  lbu         $a0, 0x2($a0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2753D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2753D0u, 0x32EC3Cu, 0x32EC44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32EC44u;
label_32ec44:
    // 0x32ec44: 0xae020190  sw          $v0, 0x190($s0)
    ctx->pc = 0x32ec44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 400), GPR_U32(ctx, 2));
    // 0x32ec48: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x32ec48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32ec4c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x32ec4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32ec50: 0x3e00008  jr          $ra
    ctx->pc = 0x32EC50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32EC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32EC50u;
        // 0x32ec54: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32EC50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32EC58u;
}
