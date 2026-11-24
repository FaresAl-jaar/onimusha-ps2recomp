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

// Function: sub_003D7B20
// Address: 0x3d7b20 - 0x3d7b58
void sub_003D7B20_0x3d7b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D7B20_0x3d7b20");
#endif

    switch (ctx->pc) {
        case 0x3d7b34u: goto label_3d7b34;
        default: break;
    }

    ctx->pc = 0x3d7b20u;

    // 0x3d7b20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3d7b20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3d7b24: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3d7b24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3d7b28: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3d7b28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3d7b2c: 0xc0a4a1c  jal         func_292870
    ctx->pc = 0x3D7B2Cu;
    SET_GPR_U32(ctx, 31, 0x3D7B34u);
    ctx->pc = 0x3D7B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D7B2Cu;
    // 0x3d7b30: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292870u, 0x3D7B2Cu, 0x3D7B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D7B34u;
label_3d7b34:
    // 0x3d7b34: 0xae002bb4  sw          $zero, 0x2BB4($s0)
    ctx->pc = 0x3d7b34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11188), GPR_U32(ctx, 0));
    // 0x3d7b38: 0xa6002b2a  sh          $zero, 0x2B2A($s0)
    ctx->pc = 0x3d7b38u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11050), (uint16_t)GPR_U32(ctx, 0));
    // 0x3d7b3c: 0xa2002b32  sb          $zero, 0x2B32($s0)
    ctx->pc = 0x3d7b3cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11058), (uint8_t)GPR_U32(ctx, 0));
    // 0x3d7b40: 0xa2002bae  sb          $zero, 0x2BAE($s0)
    ctx->pc = 0x3d7b40u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11182), (uint8_t)GPR_U32(ctx, 0));
    // 0x3d7b44: 0xa2002baf  sb          $zero, 0x2BAF($s0)
    ctx->pc = 0x3d7b44u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11183), (uint8_t)GPR_U32(ctx, 0));
    // 0x3d7b48: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3d7b48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3d7b4c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3d7b4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d7b50: 0x3e00008  jr          $ra
    ctx->pc = 0x3D7B50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D7B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7B50u;
        // 0x3d7b54: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D7B50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D7B58u;
}
