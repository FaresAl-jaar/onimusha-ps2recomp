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

// Function: sub_00231988
// Address: 0x231988 - 0x2319d0
void sub_00231988_0x231988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00231988_0x231988");
#endif

    switch (ctx->pc) {
        case 0x2319a4u: goto label_2319a4;
        case 0x2319b0u: goto label_2319b0;
        case 0x2319b8u: goto label_2319b8;
        default: break;
    }

    ctx->pc = 0x231988u;

    // 0x231988: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x231988u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x23198c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23198cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x231990: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x231990u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231994: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x231994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x231998: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x231998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x23199c: 0xc08c732  jal         func_231CC8
    ctx->pc = 0x23199Cu;
    SET_GPR_U32(ctx, 31, 0x2319A4u);
    ctx->pc = 0x2319A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23199Cu;
    // 0x2319a0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231CC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231CC8u, 0x23199Cu, 0x2319A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2319A4u;
label_2319a4:
    // 0x2319a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2319a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2319a8: 0xc08c674  jal         func_2319D0
    ctx->pc = 0x2319A8u;
    SET_GPR_U32(ctx, 31, 0x2319B0u);
    ctx->pc = 0x2319ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2319A8u;
    // 0x2319ac: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2319D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2319D0u, 0x2319A8u, 0x2319B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2319B0u;
label_2319b0:
    // 0x2319b0: 0xc08c738  jal         func_231CE0
    ctx->pc = 0x2319B0u;
    SET_GPR_U32(ctx, 31, 0x2319B8u);
    ctx->pc = 0x2319B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2319B0u;
    // 0x2319b4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231CE0u, 0x2319B0u, 0x2319B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2319B8u;
label_2319b8:
    // 0x2319b8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2319b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2319bc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2319bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2319c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2319c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2319c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2319c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2319c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2319C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2319CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2319C8u;
        // 0x2319cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2319C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2319D0u;
}
