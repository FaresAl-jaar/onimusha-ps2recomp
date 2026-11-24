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

// Function: sub_002A87A0
// Address: 0x2a87a0 - 0x2a87e0
void sub_002A87A0_0x2a87a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A87A0_0x2a87a0");
#endif

    switch (ctx->pc) {
        case 0x2a87d4u: goto label_2a87d4;
        default: break;
    }

    ctx->pc = 0x2a87a0u;

    // 0x2a87a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a87a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2a87a4: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2a87a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a87a8: 0xc0582d  daddu       $t3, $a2, $zero
    ctx->pc = 0x2a87a8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a87ac: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a87acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2a87b0: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x2a87b0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a87b4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2a87b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2a87b8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2a87b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a87bc: 0x240600a4  addiu       $a2, $zero, 0xA4
    ctx->pc = 0x2a87bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 164));
    // 0x2a87c0: 0x344527fc  ori         $a1, $v0, 0x27FC
    ctx->pc = 0x2a87c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10236);
    // 0x2a87c4: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x2a87c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a87c8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2a87c8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a87cc: 0xc097bb8  jal         func_25EEE0
    ctx->pc = 0x2A87CCu;
    SET_GPR_U32(ctx, 31, 0x2A87D4u);
    ctx->pc = 0x2A87D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A87CCu;
    // 0x2a87d0: 0xffa00000  sd          $zero, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25EEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25EEE0u, 0x2A87CCu, 0x2A87D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A87D4u;
label_2a87d4:
    // 0x2a87d4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a87d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a87d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2A87D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A87DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A87D8u;
        // 0x2a87dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A87D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A87E0u;
}
