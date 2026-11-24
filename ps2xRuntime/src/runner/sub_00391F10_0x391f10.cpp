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

// Function: sub_00391F10
// Address: 0x391f10 - 0x391f58
void sub_00391F10_0x391f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00391F10_0x391f10");
#endif

    switch (ctx->pc) {
        case 0x391f2cu: goto label_391f2c;
        case 0x391f38u: goto label_391f38;
        case 0x391f48u: goto label_391f48;
        default: break;
    }

    ctx->pc = 0x391f10u;

    // 0x391f10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x391f10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x391f14: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x391f14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x391f18: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x391f18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x391f1c: 0xa480026c  sh          $zero, 0x26C($a0)
    ctx->pc = 0x391f1cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 620), (uint16_t)GPR_U32(ctx, 0));
    // 0x391f20: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x391f20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x391f24: 0xc0cde18  jal         func_337860
    ctx->pc = 0x391F24u;
    SET_GPR_U32(ctx, 31, 0x391F2Cu);
    ctx->pc = 0x391F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x391F24u;
    // 0x391f28: 0x2604026e  addiu       $a0, $s0, 0x26E (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 622));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337860u, 0x391F24u, 0x391F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x391F2Cu;
label_391f2c:
    // 0x391f2c: 0x2604026e  addiu       $a0, $s0, 0x26E
    ctx->pc = 0x391f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 622));
    // 0x391f30: 0xc0cde24  jal         func_337890
    ctx->pc = 0x391F30u;
    SET_GPR_U32(ctx, 31, 0x391F38u);
    ctx->pc = 0x391F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x391F30u;
    // 0x391f34: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337890u, 0x391F30u, 0x391F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x391F38u;
label_391f38:
    // 0x391f38: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x391f38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x391f3c: 0x2604026e  addiu       $a0, $s0, 0x26E
    ctx->pc = 0x391f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 622));
    // 0x391f40: 0xc0cde20  jal         func_337880
    ctx->pc = 0x391F40u;
    SET_GPR_U32(ctx, 31, 0x391F48u);
    ctx->pc = 0x391F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x391F40u;
    // 0x391f44: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337880u, 0x391F40u, 0x391F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x391F48u;
label_391f48:
    // 0x391f48: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x391f48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x391f4c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x391f4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x391f50: 0x3e00008  jr          $ra
    ctx->pc = 0x391F50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x391F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391F50u;
        // 0x391f54: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x391F50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x391F58u;
}
