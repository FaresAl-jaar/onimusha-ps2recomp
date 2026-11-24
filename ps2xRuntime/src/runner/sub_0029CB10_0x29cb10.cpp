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

// Function: sub_0029CB10
// Address: 0x29cb10 - 0x29cb60
void sub_0029CB10_0x29cb10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029CB10_0x29cb10");
#endif

    switch (ctx->pc) {
        case 0x29cb34u: goto label_29cb34;
        case 0x29cb50u: goto label_29cb50;
        default: break;
    }

    ctx->pc = 0x29cb10u;

    // 0x29cb10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x29cb10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x29cb14: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x29cb14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29cb18: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x29cb18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x29cb1c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29cb1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x29cb20: 0x9085000a  lbu         $a1, 0xA($a0)
    ctx->pc = 0x29cb20u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 10)));
    // 0x29cb24: 0x14a30004  bne         $a1, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x29CB24u;
    {
        const bool branch_taken_0x29cb24 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x29CB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CB24u;
        // 0x29cb28: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29cb24) {
            ctx->pc = 0x29CB38u;
            goto label_29cb38;
        }
    }
    ctx->pc = 0x29CB2Cu;
    // 0x29cb2c: 0xc0a72a8  jal         func_29CAA0
    ctx->pc = 0x29CB2Cu;
    SET_GPR_U32(ctx, 31, 0x29CB34u);
    ctx->pc = 0x29CAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29CAA0u, 0x29CB2Cu, 0x29CB34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CB34u;
label_29cb34:
    // 0x29cb34: 0x0  nop
    ctx->pc = 0x29cb34u;
    // NOP
label_29cb38:
    // 0x29cb38: 0x9204000a  lbu         $a0, 0xA($s0)
    ctx->pc = 0x29cb38u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x29cb3c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x29cb3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29cb40: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x29CB40u;
    {
        const bool branch_taken_0x29cb40 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x29CB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CB40u;
        // 0x29cb44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29cb40) {
            ctx->pc = 0x29CB50u;
            goto label_29cb50;
        }
    }
    ctx->pc = 0x29CB48u;
    // 0x29cb48: 0xc0a728c  jal         func_29CA30
    ctx->pc = 0x29CB48u;
    SET_GPR_U32(ctx, 31, 0x29CB50u);
    ctx->pc = 0x29CA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29CA30u, 0x29CB48u, 0x29CB50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CB50u;
label_29cb50:
    // 0x29cb50: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x29cb50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29cb54: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29cb54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29cb58: 0x3e00008  jr          $ra
    ctx->pc = 0x29CB58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29CB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CB58u;
        // 0x29cb5c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29CB58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29CB60u;
}
