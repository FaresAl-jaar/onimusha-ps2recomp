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

// Function: sub_00237270
// Address: 0x237270 - 0x2372b8
void sub_00237270_0x237270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00237270_0x237270");
#endif

    switch (ctx->pc) {
        case 0x23728cu: goto label_23728c;
        case 0x237298u: goto label_237298;
        case 0x2372a0u: goto label_2372a0;
        default: break;
    }

    ctx->pc = 0x237270u;

    // 0x237270: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x237270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x237274: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x237274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x237278: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x237278u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23727c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x23727cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x237280: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x237280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x237284: 0xc08e2bc  jal         func_238AF0
    ctx->pc = 0x237284u;
    SET_GPR_U32(ctx, 31, 0x23728Cu);
    ctx->pc = 0x237288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237284u;
    // 0x237288: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238AF0u, 0x237284u, 0x23728Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23728Cu;
label_23728c:
    // 0x23728c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23728cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237290: 0xc08dcae  jal         func_2372B8
    ctx->pc = 0x237290u;
    SET_GPR_U32(ctx, 31, 0x237298u);
    ctx->pc = 0x237294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237290u;
    // 0x237294: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2372B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2372B8u, 0x237290u, 0x237298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237298u;
label_237298:
    // 0x237298: 0xc08e2c2  jal         func_238B08
    ctx->pc = 0x237298u;
    SET_GPR_U32(ctx, 31, 0x2372A0u);
    ctx->pc = 0x23729Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237298u;
    // 0x23729c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238B08u, 0x237298u, 0x2372A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2372A0u;
label_2372a0:
    // 0x2372a0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2372a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2372a4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2372a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2372a8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2372a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2372ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2372acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2372b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2372B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2372B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2372B0u;
        // 0x2372b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2372B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2372B8u;
}
