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

// Function: sub_00203DF0
// Address: 0x203df0 - 0x203e38
void sub_00203DF0_0x203df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00203DF0_0x203df0");
#endif

    switch (ctx->pc) {
        case 0x203e14u: goto label_203e14;
        default: break;
    }

    ctx->pc = 0x203df0u;

    // 0x203df0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x203df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x203df4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x203df4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x203df8: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x203df8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203dfc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x203dfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x203e00: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x203e00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203e04: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x203e04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x203e08: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x203e08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x203e0c: 0xc081544  jal         func_205510
    ctx->pc = 0x203E0Cu;
    SET_GPR_U32(ctx, 31, 0x203E14u);
    ctx->pc = 0x203E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203E0Cu;
    // 0x203e10: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205510u, 0x203E0Cu, 0x203E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203E14u;
label_203e14:
    // 0x203e14: 0xac500030  sw          $s0, 0x30($v0)
    ctx->pc = 0x203e14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 16));
    // 0x203e18: 0xac510028  sw          $s1, 0x28($v0)
    ctx->pc = 0x203e18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 17));
    // 0x203e1c: 0xac52002c  sw          $s2, 0x2C($v0)
    ctx->pc = 0x203e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 18));
    // 0x203e20: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x203e20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x203e24: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x203e24u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x203e28: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x203e28u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x203e2c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x203e2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x203e30: 0x3e00008  jr          $ra
    ctx->pc = 0x203E30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x203E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203E30u;
        // 0x203e34: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x203E30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x203E38u;
}
