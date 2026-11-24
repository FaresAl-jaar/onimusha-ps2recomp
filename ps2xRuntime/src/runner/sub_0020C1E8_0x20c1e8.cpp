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

// Function: sub_0020C1E8
// Address: 0x20c1e8 - 0x20c220
void sub_0020C1E8_0x20c1e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020C1E8_0x20c1e8");
#endif

    switch (ctx->pc) {
        case 0x20c204u: goto label_20c204;
        default: break;
    }

    ctx->pc = 0x20c1e8u;

    // 0x20c1e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x20c1e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x20c1ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20c1ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x20c1f0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x20c1f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c1f4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x20c1f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x20c1f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x20c1f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x20c1fc: 0xc081544  jal         func_205510
    ctx->pc = 0x20C1FCu;
    SET_GPR_U32(ctx, 31, 0x20C204u);
    ctx->pc = 0x20C200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C1FCu;
    // 0x20c200: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205510u, 0x20C1FCu, 0x20C204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C204u;
label_20c204:
    // 0x20c204: 0xac500054  sw          $s0, 0x54($v0)
    ctx->pc = 0x20c204u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 84), GPR_U32(ctx, 16));
    // 0x20c208: 0xac510050  sw          $s1, 0x50($v0)
    ctx->pc = 0x20c208u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 17));
    // 0x20c20c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20c20cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20c210: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x20c210u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20c214: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x20c214u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20c218: 0x3e00008  jr          $ra
    ctx->pc = 0x20C218u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20C21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C218u;
        // 0x20c21c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20C218u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20C220u;
}
