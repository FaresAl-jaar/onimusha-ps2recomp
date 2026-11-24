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

// Function: sub_002AB4C0
// Address: 0x2ab4c0 - 0x2ab500
void sub_002AB4C0_0x2ab4c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AB4C0_0x2ab4c0");
#endif

    switch (ctx->pc) {
        case 0x2ab4f4u: goto label_2ab4f4;
        default: break;
    }

    ctx->pc = 0x2ab4c0u;

    // 0x2ab4c0: 0xe0582d  daddu       $t3, $a3, $zero
    ctx->pc = 0x2ab4c0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab4c4: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ab4c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ab4c8: 0xc0502d  daddu       $t2, $a2, $zero
    ctx->pc = 0x2ab4c8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab4cc: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2ab4ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab4d0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2ab4d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2ab4d4: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x2ab4d4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab4d8: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x2ab4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x2ab4dc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2ab4dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab4e0: 0x240600bc  addiu       $a2, $zero, 0xBC
    ctx->pc = 0x2ab4e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 188));
    // 0x2ab4e4: 0x34453f08  ori         $a1, $v0, 0x3F08
    ctx->pc = 0x2ab4e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16136);
    // 0x2ab4e8: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x2ab4e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ab4ec: 0xc097bb8  jal         func_25EEE0
    ctx->pc = 0x2AB4ECu;
    SET_GPR_U32(ctx, 31, 0x2AB4F4u);
    ctx->pc = 0x2AB4F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB4ECu;
    // 0x2ab4f0: 0xffa00000  sd          $zero, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25EEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25EEE0u, 0x2AB4ECu, 0x2AB4F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB4F4u;
label_2ab4f4:
    // 0x2ab4f4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2ab4f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ab4f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2AB4F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AB4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB4F8u;
        // 0x2ab4fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AB4F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AB500u;
}
