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

// Function: sub_0012E998
// Address: 0x12e998 - 0x12e9f0
void sub_0012E998_0x12e998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012E998_0x12e998");
#endif

    switch (ctx->pc) {
        case 0x12e9b8u: goto label_12e9b8;
        case 0x12e9c8u: goto label_12e9c8;
        case 0x12e9d8u: goto label_12e9d8;
        case 0x12e9e0u: goto label_12e9e0;
        default: break;
    }

    ctx->pc = 0x12e998u;

    // 0x12e998: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x12e998u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x12e99c: 0xffa40060  sd          $a0, 0x60($sp)
    ctx->pc = 0x12e99cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 4));
    // 0x12e9a0: 0xffa50068  sd          $a1, 0x68($sp)
    ctx->pc = 0x12e9a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 5));
    // 0x12e9a4: 0xffbf0078  sd          $ra, 0x78($sp)
    ctx->pc = 0x12e9a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
    // 0x12e9a8: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x12e9a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x12e9ac: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x12e9acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x12e9b0: 0xc04b988  jal         func_12E620
    ctx->pc = 0x12E9B0u;
    SET_GPR_U32(ctx, 31, 0x12E9B8u);
    ctx->pc = 0x12E9B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E9B0u;
    // 0x12e9b4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E620u, 0x12E9B0u, 0x12E9B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E9B8u;
label_12e9b8:
    // 0x12e9b8: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x12e9b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x12e9bc: 0x27a40068  addiu       $a0, $sp, 0x68
    ctx->pc = 0x12e9bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x12e9c0: 0xc04b988  jal         func_12E620
    ctx->pc = 0x12E9C0u;
    SET_GPR_U32(ctx, 31, 0x12E9C8u);
    ctx->pc = 0x12E9C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E9C0u;
    // 0x12e9c4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E620u, 0x12E9C0u, 0x12E9C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E9C8u;
label_12e9c8:
    // 0x12e9c8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x12e9c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e9cc: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x12e9ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x12e9d0: 0xc04ba7c  jal         func_12E9F0
    ctx->pc = 0x12E9D0u;
    SET_GPR_U32(ctx, 31, 0x12E9D8u);
    ctx->pc = 0x12E9D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E9D0u;
    // 0x12e9d4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E9F0u, 0x12E9D0u, 0x12E9D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E9D8u;
label_12e9d8:
    // 0x12e9d8: 0xc04b956  jal         func_12E558
    ctx->pc = 0x12E9D8u;
    SET_GPR_U32(ctx, 31, 0x12E9E0u);
    ctx->pc = 0x12E9DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E9D8u;
    // 0x12e9dc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E558u, 0x12E9D8u, 0x12E9E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E9E0u;
label_12e9e0:
    // 0x12e9e0: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x12e9e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x12e9e4: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x12e9e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x12e9e8: 0x3e00008  jr          $ra
    ctx->pc = 0x12E9E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12E9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E9E8u;
        // 0x12e9ec: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12E9E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12E9F0u;
}
