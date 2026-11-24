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

// Function: sub_0025EA10
// Address: 0x25ea10 - 0x25ea48
void sub_0025EA10_0x25ea10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025EA10_0x25ea10");
#endif

    switch (ctx->pc) {
        case 0x25ea24u: goto label_25ea24;
        default: break;
    }

    ctx->pc = 0x25ea10u;

    // 0x25ea10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x25ea10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25ea14: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x25ea14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x25ea18: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25ea18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25ea1c: 0xc096b00  jal         func_25AC00
    ctx->pc = 0x25EA1Cu;
    SET_GPR_U32(ctx, 31, 0x25EA24u);
    ctx->pc = 0x25EA20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25EA1Cu;
    // 0x25ea20: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25AC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AC00u, 0x25EA1Cu, 0x25EA24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EA24u;
label_25ea24:
    // 0x25ea24: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x25ea24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x25ea28: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x25ea28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ea2c: 0x246373f0  addiu       $v1, $v1, 0x73F0
    ctx->pc = 0x25ea2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29680));
    // 0x25ea30: 0xae030034  sw          $v1, 0x34($s0)
    ctx->pc = 0x25ea30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 3));
    // 0x25ea34: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x25ea34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
    // 0x25ea38: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x25ea38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25ea3c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25ea3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25ea40: 0x3e00008  jr          $ra
    ctx->pc = 0x25EA40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25EA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EA40u;
        // 0x25ea44: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25EA40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25EA48u;
}
