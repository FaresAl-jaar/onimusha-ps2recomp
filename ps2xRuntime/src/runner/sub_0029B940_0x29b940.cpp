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

// Function: sub_0029B940
// Address: 0x29b940 - 0x29b974
void sub_0029B940_0x29b940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029B940_0x29b940");
#endif

    switch (ctx->pc) {
        case 0x29b960u: goto label_29b960;
        default: break;
    }

    ctx->pc = 0x29b940u;

    // 0x29b940: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x29b940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x29b944: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x29b944u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x29b948: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x29b948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x29b94c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29b94cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x29b950: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29b950u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b954: 0x8c84004c  lw          $a0, 0x4C($a0)
    ctx->pc = 0x29b954u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x29b958: 0xc0a7e10  jal         func_29F840
    ctx->pc = 0x29B958u;
    SET_GPR_U32(ctx, 31, 0x29B960u);
    ctx->pc = 0x29B95Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B958u;
    // 0x29b95c: 0x24a5b890  addiu       $a1, $a1, -0x4770 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949008));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29F840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29F840u, 0x29B958u, 0x29B960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B960u;
label_29b960:
    // 0x29b960: 0xa2000115  sb          $zero, 0x115($s0)
    ctx->pc = 0x29b960u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 277), (uint8_t)GPR_U32(ctx, 0));
    // 0x29b964: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x29b964u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29b968: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29b968u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29b96c: 0x3e00008  jr          $ra
    ctx->pc = 0x29B96Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29B970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B96Cu;
        // 0x29b970: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29B96Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29B974u;
}
