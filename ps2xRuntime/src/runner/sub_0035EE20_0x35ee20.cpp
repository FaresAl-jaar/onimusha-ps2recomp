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

// Function: sub_0035EE20
// Address: 0x35ee20 - 0x35ee60
void sub_0035EE20_0x35ee20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035EE20_0x35ee20");
#endif

    switch (ctx->pc) {
        case 0x35ee34u: goto label_35ee34;
        default: break;
    }

    ctx->pc = 0x35ee20u;

    // 0x35ee20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35ee20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35ee24: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x35ee24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x35ee28: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x35ee28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x35ee2c: 0xc0a7114  jal         func_29C450
    ctx->pc = 0x35EE2Cu;
    SET_GPR_U32(ctx, 31, 0x35EE34u);
    ctx->pc = 0x35EE30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35EE2Cu;
    // 0x35ee30: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29C450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C450u, 0x35EE2Cu, 0x35EE34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35EE34u;
label_35ee34:
    // 0x35ee34: 0xa2000514  sb          $zero, 0x514($s0)
    ctx->pc = 0x35ee34u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1300), (uint8_t)GPR_U32(ctx, 0));
    // 0x35ee38: 0x8e030148  lw          $v1, 0x148($s0)
    ctx->pc = 0x35ee38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x35ee3c: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x35ee3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x35ee40: 0xae030148  sw          $v1, 0x148($s0)
    ctx->pc = 0x35ee40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 3));
    // 0x35ee44: 0x8e03014c  lw          $v1, 0x14C($s0)
    ctx->pc = 0x35ee44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 332)));
    // 0x35ee48: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x35ee48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x35ee4c: 0xae03014c  sw          $v1, 0x14C($s0)
    ctx->pc = 0x35ee4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 332), GPR_U32(ctx, 3));
    // 0x35ee50: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x35ee50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35ee54: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x35ee54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35ee58: 0x3e00008  jr          $ra
    ctx->pc = 0x35EE58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35EE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EE58u;
        // 0x35ee5c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35EE58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35EE60u;
}
