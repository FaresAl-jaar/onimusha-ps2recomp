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

// Function: sub_002384F0
// Address: 0x2384f0 - 0x238528
void sub_002384F0_0x2384f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002384F0_0x2384f0");
#endif

    switch (ctx->pc) {
        case 0x238504u: goto label_238504;
        case 0x23850cu: goto label_23850c;
        case 0x238514u: goto label_238514;
        default: break;
    }

    ctx->pc = 0x2384f0u;

    // 0x2384f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2384f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2384f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2384f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2384f8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2384f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2384fc: 0xc08e2bc  jal         func_238AF0
    ctx->pc = 0x2384FCu;
    SET_GPR_U32(ctx, 31, 0x238504u);
    ctx->pc = 0x238500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2384FCu;
    // 0x238500: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238AF0u, 0x2384FCu, 0x238504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238504u;
label_238504:
    // 0x238504: 0xc08e14a  jal         func_238528
    ctx->pc = 0x238504u;
    SET_GPR_U32(ctx, 31, 0x23850Cu);
    ctx->pc = 0x238508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238504u;
    // 0x238508: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238528u, 0x238504u, 0x23850Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23850Cu;
label_23850c:
    // 0x23850c: 0xc08e2c2  jal         func_238B08
    ctx->pc = 0x23850Cu;
    SET_GPR_U32(ctx, 31, 0x238514u);
    ctx->pc = 0x238510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23850Cu;
    // 0x238510: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238B08u, 0x23850Cu, 0x238514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238514u;
label_238514:
    // 0x238514: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x238514u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x238518: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x238518u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23851c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23851cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x238520: 0x3e00008  jr          $ra
    ctx->pc = 0x238520u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x238524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238520u;
        // 0x238524: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x238520u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x238528u;
}
