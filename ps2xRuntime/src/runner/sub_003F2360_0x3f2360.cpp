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

// Function: sub_003F2360
// Address: 0x3f2360 - 0x3f23ac
void sub_003F2360_0x3f2360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F2360_0x3f2360");
#endif

    switch (ctx->pc) {
        case 0x3f2390u: goto label_3f2390;
        case 0x3f23a0u: goto label_3f23a0;
        default: break;
    }

    ctx->pc = 0x3f2360u;

    // 0x3f2360: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3f2360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3f2364: 0x30e400ff  andi        $a0, $a3, 0xFF
    ctx->pc = 0x3f2364u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x3f2368: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3f2368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3f236c: 0x1083000a  beq         $a0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x3F236Cu;
    {
        const bool branch_taken_0x3f236c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x3F2370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F236Cu;
        // 0x3f2370: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f236c) {
            ctx->pc = 0x3F2398u;
            goto label_3f2398;
        }
    }
    ctx->pc = 0x3F2374u;
    // 0x3f2374: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3f2374u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3f2378: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3F2378u;
    {
        const bool branch_taken_0x3f2378 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3f2378) {
            ctx->pc = 0x3F2388u;
            goto label_3f2388;
        }
    }
    ctx->pc = 0x3F2380u;
    // 0x3f2380: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3F2380u;
    {
        const bool branch_taken_0x3f2380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f2380) {
            ctx->pc = 0x3F23A0u;
            goto label_3f23a0;
        }
    }
    ctx->pc = 0x3F2388u;
label_3f2388:
    // 0x3f2388: 0xc0fc7f8  jal         func_3F1FE0
    ctx->pc = 0x3F2388u;
    SET_GPR_U32(ctx, 31, 0x3F2390u);
    ctx->pc = 0x3F1FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F1FE0u, 0x3F2388u, 0x3F2390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F2390u;
label_3f2390:
    // 0x3f2390: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3F2390u;
    {
        const bool branch_taken_0x3f2390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f2390) {
            ctx->pc = 0x3F23A0u;
            goto label_3f23a0;
        }
    }
    ctx->pc = 0x3F2398u;
label_3f2398:
    // 0x3f2398: 0xc0fc850  jal         func_3F2140
    ctx->pc = 0x3F2398u;
    SET_GPR_U32(ctx, 31, 0x3F23A0u);
    ctx->pc = 0x3F2140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F2140u, 0x3F2398u, 0x3F23A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F23A0u;
label_3f23a0:
    // 0x3f23a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3f23a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3f23a4: 0x3e00008  jr          $ra
    ctx->pc = 0x3F23A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F23A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F23A4u;
        // 0x3f23a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F23A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F23ACu;
}
