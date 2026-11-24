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

// Function: sub_002A6E90
// Address: 0x2a6e90 - 0x2a6ecc
void sub_002A6E90_0x2a6e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A6E90_0x2a6e90");
#endif

    switch (ctx->pc) {
        case 0x2a6ec0u: goto label_2a6ec0;
        default: break;
    }

    ctx->pc = 0x2a6e90u;

    // 0x2a6e90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a6e90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2a6e94: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2a6e94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6e98: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x2a6e98u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6e9c: 0xc0582d  daddu       $t3, $a2, $zero
    ctx->pc = 0x2a6e9cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6ea0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a6ea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2a6ea4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2a6ea4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6ea8: 0x3405b3c8  ori         $a1, $zero, 0xB3C8
    ctx->pc = 0x2a6ea8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)46024);
    // 0x2a6eac: 0x240600d0  addiu       $a2, $zero, 0xD0
    ctx->pc = 0x2a6eacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
    // 0x2a6eb0: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x2a6eb0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a6eb4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2a6eb4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6eb8: 0xc097bb8  jal         func_25EEE0
    ctx->pc = 0x2A6EB8u;
    SET_GPR_U32(ctx, 31, 0x2A6EC0u);
    ctx->pc = 0x2A6EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6EB8u;
    // 0x2a6ebc: 0xffa00000  sd          $zero, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25EEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25EEE0u, 0x2A6EB8u, 0x2A6EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6EC0u;
label_2a6ec0:
    // 0x2a6ec0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a6ec0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a6ec4: 0x3e00008  jr          $ra
    ctx->pc = 0x2A6EC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A6EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6EC4u;
        // 0x2a6ec8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A6EC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A6ECCu;
}
