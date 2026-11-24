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

// Function: sub_0024B398
// Address: 0x24b398 - 0x24b3e8
void sub_0024B398_0x24b398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024B398_0x24b398");
#endif

    switch (ctx->pc) {
        case 0x24b3b4u: goto label_24b3b4;
        default: break;
    }

    ctx->pc = 0x24b398u;

    // 0x24b398: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x24b398u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24b39c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24b39cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24b3a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x24b3a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b3a4: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x24B3A4u;
    {
        const bool branch_taken_0x24b3a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x24B3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B3A4u;
        // 0x24b3a8: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b3a4) {
            ctx->pc = 0x24B3D8u;
            goto label_24b3d8;
        }
    }
    ctx->pc = 0x24B3ACu;
    // 0x24b3ac: 0xc092dee  jal         func_24B7B8
    ctx->pc = 0x24B3ACu;
    SET_GPR_U32(ctx, 31, 0x24B3B4u);
    ctx->pc = 0x24B7B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B7B8u, 0x24B3ACu, 0x24B3B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B3B4u;
label_24b3b4:
    // 0x24b3b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x24b3b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b3b8: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x24b3b8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x24b3bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24b3bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b3c0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x24b3c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x24b3c4: 0x24060238  addiu       $a2, $zero, 0x238
    ctx->pc = 0x24b3c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 568));
    // 0x24b3c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24b3c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24b3cc: 0x8049590  j           func_125640
    ctx->pc = 0x24B3CCu;
    ctx->pc = 0x24B3D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B3CCu;
    // 0x24b3d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    sub_00125640_0x125640(rdram, ctx, runtime); return;
    ctx->pc = 0x24B3D4u;
    // 0x24b3d4: 0x0  nop
    ctx->pc = 0x24b3d4u;
    // NOP
label_24b3d8:
    // 0x24b3d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24b3d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24b3dc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x24b3dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x24b3e0: 0x3e00008  jr          $ra
    ctx->pc = 0x24B3E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24B3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B3E0u;
        // 0x24b3e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24B3E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24B3E8u;
}
