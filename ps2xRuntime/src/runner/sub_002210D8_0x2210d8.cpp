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

// Function: sub_002210D8
// Address: 0x2210d8 - 0x221110
void sub_002210D8_0x2210d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002210D8_0x2210d8");
#endif

    switch (ctx->pc) {
        case 0x2210f8u: goto label_2210f8;
        default: break;
    }

    ctx->pc = 0x2210d8u;

    // 0x2210d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2210d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2210dc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2210dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2210e0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2210e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2210e4: 0x24045dc0  addiu       $a0, $zero, 0x5DC0
    ctx->pc = 0x2210e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24000));
    // 0x2210e8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2210e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2210ec: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2210ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2210f0: 0xc088412  jal         func_221048
    ctx->pc = 0x2210F0u;
    SET_GPR_U32(ctx, 31, 0x2210F8u);
    ctx->pc = 0x2210F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2210F0u;
    // 0x2210f4: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221048u, 0x2210F0u, 0x2210F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2210F8u;
label_2210f8:
    // 0x2210f8: 0xae110000  sw          $s1, 0x0($s0)
    ctx->pc = 0x2210f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
    // 0x2210fc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2210fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x221100: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x221100u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x221104: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x221104u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x221108: 0x3e00008  jr          $ra
    ctx->pc = 0x221108u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22110Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221108u;
        // 0x22110c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x221108u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x221110u;
}
