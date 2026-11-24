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

// Function: sub_003C0600
// Address: 0x3c0600 - 0x3c0634
void sub_003C0600_0x3c0600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C0600_0x3c0600");
#endif

    switch (ctx->pc) {
        case 0x3c061cu: goto label_3c061c;
        default: break;
    }

    ctx->pc = 0x3c0600u;

    // 0x3c0600: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3c0600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3c0604: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3c0604u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c0608: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3c0608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3c060c: 0x24060050  addiu       $a2, $zero, 0x50
    ctx->pc = 0x3c060cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x3c0610: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3c0610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3c0614: 0xc049590  jal         func_125640
    ctx->pc = 0x3C0614u;
    SET_GPR_U32(ctx, 31, 0x3C061Cu);
    ctx->pc = 0x3C0618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C0614u;
    // 0x3c0618: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x3C0614u, 0x3C061Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C061Cu;
label_3c061c:
    // 0x3c061c: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x3c061cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x3c0620: 0xa203000b  sb          $v1, 0xB($s0)
    ctx->pc = 0x3c0620u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11), (uint8_t)GPR_U32(ctx, 3));
    // 0x3c0624: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3c0624u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3c0628: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3c0628u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3c062c: 0x3e00008  jr          $ra
    ctx->pc = 0x3C062Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C0630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C062Cu;
        // 0x3c0630: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C062Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C0634u;
}
