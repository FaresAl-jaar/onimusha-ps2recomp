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

// Function: sub_002377B8
// Address: 0x2377b8 - 0x237800
void sub_002377B8_0x2377b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002377B8_0x2377b8");
#endif

    switch (ctx->pc) {
        case 0x2377d4u: goto label_2377d4;
        case 0x2377e0u: goto label_2377e0;
        case 0x2377e8u: goto label_2377e8;
        default: break;
    }

    ctx->pc = 0x2377b8u;

    // 0x2377b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2377b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2377bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2377bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2377c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2377c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2377c4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2377c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2377c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2377c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2377cc: 0xc08e2bc  jal         func_238AF0
    ctx->pc = 0x2377CCu;
    SET_GPR_U32(ctx, 31, 0x2377D4u);
    ctx->pc = 0x2377D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2377CCu;
    // 0x2377d0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238AF0u, 0x2377CCu, 0x2377D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2377D4u;
label_2377d4:
    // 0x2377d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2377d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2377d8: 0xc08de00  jal         func_237800
    ctx->pc = 0x2377D8u;
    SET_GPR_U32(ctx, 31, 0x2377E0u);
    ctx->pc = 0x2377DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2377D8u;
    // 0x2377dc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237800u, 0x2377D8u, 0x2377E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2377E0u;
label_2377e0:
    // 0x2377e0: 0xc08e2c2  jal         func_238B08
    ctx->pc = 0x2377E0u;
    SET_GPR_U32(ctx, 31, 0x2377E8u);
    ctx->pc = 0x2377E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2377E0u;
    // 0x2377e4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238B08u, 0x2377E0u, 0x2377E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2377E8u;
label_2377e8:
    // 0x2377e8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2377e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2377ec: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2377ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2377f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2377f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2377f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2377f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2377f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2377F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2377FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2377F8u;
        // 0x2377fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2377F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x237800u;
}
