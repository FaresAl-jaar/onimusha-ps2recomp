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

// Function: sub_0012E8D8
// Address: 0x12e8d8 - 0x12e930
void sub_0012E8D8_0x12e8d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012E8D8_0x12e8d8");
#endif

    switch (ctx->pc) {
        case 0x12e8f8u: goto label_12e8f8;
        case 0x12e908u: goto label_12e908;
        case 0x12e918u: goto label_12e918;
        case 0x12e920u: goto label_12e920;
        default: break;
    }

    ctx->pc = 0x12e8d8u;

    // 0x12e8d8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x12e8d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x12e8dc: 0xffa40060  sd          $a0, 0x60($sp)
    ctx->pc = 0x12e8dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 4));
    // 0x12e8e0: 0xffa50068  sd          $a1, 0x68($sp)
    ctx->pc = 0x12e8e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 5));
    // 0x12e8e4: 0xffbf0078  sd          $ra, 0x78($sp)
    ctx->pc = 0x12e8e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
    // 0x12e8e8: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x12e8e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x12e8ec: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x12e8ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x12e8f0: 0xc04b988  jal         func_12E620
    ctx->pc = 0x12E8F0u;
    SET_GPR_U32(ctx, 31, 0x12E8F8u);
    ctx->pc = 0x12E8F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E8F0u;
    // 0x12e8f4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E620u, 0x12E8F0u, 0x12E8F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E8F8u;
label_12e8f8:
    // 0x12e8f8: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x12e8f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x12e8fc: 0x27a40068  addiu       $a0, $sp, 0x68
    ctx->pc = 0x12e8fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x12e900: 0xc04b988  jal         func_12E620
    ctx->pc = 0x12E900u;
    SET_GPR_U32(ctx, 31, 0x12E908u);
    ctx->pc = 0x12E904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E900u;
    // 0x12e904: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E620u, 0x12E900u, 0x12E908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E908u;
label_12e908:
    // 0x12e908: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x12e908u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e90c: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x12e90cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x12e910: 0xc04b9ac  jal         func_12E6B0
    ctx->pc = 0x12E910u;
    SET_GPR_U32(ctx, 31, 0x12E918u);
    ctx->pc = 0x12E914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E910u;
    // 0x12e914: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E6B0u, 0x12E910u, 0x12E918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E918u;
label_12e918:
    // 0x12e918: 0xc04b956  jal         func_12E558
    ctx->pc = 0x12E918u;
    SET_GPR_U32(ctx, 31, 0x12E920u);
    ctx->pc = 0x12E91Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E918u;
    // 0x12e91c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E558u, 0x12E918u, 0x12E920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E920u;
label_12e920:
    // 0x12e920: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x12e920u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x12e924: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x12e924u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x12e928: 0x3e00008  jr          $ra
    ctx->pc = 0x12E928u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12E92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E928u;
        // 0x12e92c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12E928u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12E930u;
}
