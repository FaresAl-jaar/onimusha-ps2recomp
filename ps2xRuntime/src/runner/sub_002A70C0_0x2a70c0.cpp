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

// Function: sub_002A70C0
// Address: 0x2a70c0 - 0x2a7100
void sub_002A70C0_0x2a70c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A70C0_0x2a70c0");
#endif

    switch (ctx->pc) {
        case 0x2a70f4u: goto label_2a70f4;
        default: break;
    }

    ctx->pc = 0x2a70c0u;

    // 0x2a70c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a70c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2a70c4: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x2a70c4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a70c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a70c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2a70cc: 0xc0582d  daddu       $t3, $a2, $zero
    ctx->pc = 0x2a70ccu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a70d0: 0xffa70000  sd          $a3, 0x0($sp)
    ctx->pc = 0x2a70d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 7));
    // 0x2a70d4: 0x3405bc68  ori         $a1, $zero, 0xBC68
    ctx->pc = 0x2a70d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48232);
    // 0x2a70d8: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2a70d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a70dc: 0x24060110  addiu       $a2, $zero, 0x110
    ctx->pc = 0x2a70dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
    // 0x2a70e0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2a70e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a70e4: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x2a70e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a70e8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2a70e8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a70ec: 0xc097d38  jal         func_25F4E0
    ctx->pc = 0x2A70ECu;
    SET_GPR_U32(ctx, 31, 0x2A70F4u);
    ctx->pc = 0x2A70F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A70ECu;
    // 0x2a70f0: 0xffa00008  sd          $zero, 0x8($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F4E0u, 0x2A70ECu, 0x2A70F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A70F4u;
label_2a70f4:
    // 0x2a70f4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a70f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a70f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2A70F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A70FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A70F8u;
        // 0x2a70fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A70F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A7100u;
}
