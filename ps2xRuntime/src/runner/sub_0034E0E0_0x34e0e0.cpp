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

// Function: sub_0034E0E0
// Address: 0x34e0e0 - 0x34e128
void sub_0034E0E0_0x34e0e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034E0E0_0x34e0e0");
#endif

    switch (ctx->pc) {
        case 0x34e0fcu: goto label_34e0fc;
        default: break;
    }

    ctx->pc = 0x34e0e0u;

    // 0x34e0e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x34e0e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x34e0e4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x34e0e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e0e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x34e0e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x34e0ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x34e0ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x34e0f0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x34e0f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e0f4: 0xc0d37f8  jal         func_34DFE0
    ctx->pc = 0x34E0F4u;
    SET_GPR_U32(ctx, 31, 0x34E0FCu);
    ctx->pc = 0x34E0F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34E0F4u;
    // 0x34e0f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DFE0u, 0x34E0F4u, 0x34E0FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E0FCu;
label_34e0fc:
    // 0x34e0fc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x34E0FCu;
    {
        const bool branch_taken_0x34e0fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34e0fc) {
            ctx->pc = 0x34E110u;
            goto label_34e110;
        }
    }
    ctx->pc = 0x34E104u;
    // 0x34e104: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x34E104u;
    {
        const bool branch_taken_0x34e104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34E108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E104u;
        // 0x34e108: 0xa0500010  sb          $s0, 0x10($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 16), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34e104) {
            ctx->pc = 0x34E118u;
            goto label_34e118;
        }
    }
    ctx->pc = 0x34E10Cu;
    // 0x34e10c: 0x0  nop
    ctx->pc = 0x34e10cu;
    // NOP
label_34e110:
    // 0x34e110: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x34e110u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e114: 0x0  nop
    ctx->pc = 0x34e114u;
    // NOP
label_34e118:
    // 0x34e118: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x34e118u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34e11c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x34e11cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34e120: 0x3e00008  jr          $ra
    ctx->pc = 0x34E120u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34E124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E120u;
        // 0x34e124: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34E120u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34E128u;
}
