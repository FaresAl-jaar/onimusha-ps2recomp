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

// Function: sub_0025A0E0
// Address: 0x25a0e0 - 0x25a114
void sub_0025A0E0_0x25a0e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025A0E0_0x25a0e0");
#endif

    switch (ctx->pc) {
        case 0x25a0fcu: goto label_25a0fc;
        case 0x25a108u: goto label_25a108;
        default: break;
    }

    ctx->pc = 0x25a0e0u;

    // 0x25a0e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x25a0e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25a0e4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x25a0e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a0e8: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x25a0e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a0ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25a0ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25a0f0: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x25a0f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x25a0f4: 0xc0414d0  jal         func_105340
    ctx->pc = 0x25A0F4u;
    SET_GPR_U32(ctx, 31, 0x25A0FCu);
    ctx->pc = 0x25A0F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A0F4u;
    // 0x25a0f8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x25A0F4u, 0x25A0FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A0FCu;
label_25a0fc:
    // 0x25a0fc: 0xc7ad0018  lwc1        $f13, 0x18($sp)
    ctx->pc = 0x25a0fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x25a100: 0xc047b88  jal         func_11EE20
    ctx->pc = 0x25A100u;
    SET_GPR_U32(ctx, 31, 0x25A108u);
    ctx->pc = 0x25A104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A100u;
    // 0x25a104: 0xc7ac0010  lwc1        $f12, 0x10($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EE20u, 0x25A100u, 0x25A108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A108u;
label_25a108:
    // 0x25a108: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25a108u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25a10c: 0x3e00008  jr          $ra
    ctx->pc = 0x25A10Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25A110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A10Cu;
        // 0x25a110: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25A10Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25A114u;
}
