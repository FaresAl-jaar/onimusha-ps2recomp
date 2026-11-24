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

// Function: sub_002A8110
// Address: 0x2a8110 - 0x2a8150
void sub_002A8110_0x2a8110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A8110_0x2a8110");
#endif

    switch (ctx->pc) {
        case 0x2a8144u: goto label_2a8144;
        default: break;
    }

    ctx->pc = 0x2a8110u;

    // 0x2a8110: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a8110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2a8114: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2a8114u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8118: 0xc0582d  daddu       $t3, $a2, $zero
    ctx->pc = 0x2a8118u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a811c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a811cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2a8120: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x2a8120u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8124: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2a8124u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2a8128: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2a8128u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a812c: 0x24060064  addiu       $a2, $zero, 0x64
    ctx->pc = 0x2a812cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2a8130: 0x34450d50  ori         $a1, $v0, 0xD50
    ctx->pc = 0x2a8130u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3408);
    // 0x2a8134: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x2a8134u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a8138: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2a8138u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a813c: 0xc097bb8  jal         func_25EEE0
    ctx->pc = 0x2A813Cu;
    SET_GPR_U32(ctx, 31, 0x2A8144u);
    ctx->pc = 0x2A8140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A813Cu;
    // 0x2a8140: 0xffa00000  sd          $zero, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25EEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25EEE0u, 0x2A813Cu, 0x2A8144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8144u;
label_2a8144:
    // 0x2a8144: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a8144u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a8148: 0x3e00008  jr          $ra
    ctx->pc = 0x2A8148u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A814Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8148u;
        // 0x2a814c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A8148u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A8150u;
}
