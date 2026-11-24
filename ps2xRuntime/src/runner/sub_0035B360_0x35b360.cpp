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

// Function: sub_0035B360
// Address: 0x35b360 - 0x35b3bc
void sub_0035B360_0x35b360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035B360_0x35b360");
#endif

    switch (ctx->pc) {
        case 0x35b390u: goto label_35b390;
        case 0x35b3a8u: goto label_35b3a8;
        default: break;
    }

    ctx->pc = 0x35b360u;

    // 0x35b360: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35b360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35b364: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x35b364u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x35b368: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35b368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35b36c: 0x24428640  addiu       $v0, $v0, -0x79C0
    ctx->pc = 0x35b36cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936128));
    // 0x35b370: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x35b370u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x658640u));
    // 0x35b374: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x35b374u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x35b378: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x35b378u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35b37c: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x35b37cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x35b380: 0x8f828bb8  lw          $v0, -0x7448($gp)
    ctx->pc = 0x35b380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937528)));
    // 0x35b384: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x35b384u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x35b388: 0xc0d6b88  jal         func_35AE20
    ctx->pc = 0x35B388u;
    SET_GPR_U32(ctx, 31, 0x35B390u);
    ctx->pc = 0x35B38Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B388u;
    // 0x35b38c: 0x244500f0  addiu       $a1, $v0, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AE20u, 0x35B388u, 0x35B390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B390u;
label_35b390:
    // 0x35b390: 0x8f828bb8  lw          $v0, -0x7448($gp)
    ctx->pc = 0x35b390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937528)));
    // 0x35b394: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x35b394u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x35b398: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x35b398u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35b39c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x35b39cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x35b3a0: 0xc0d6b88  jal         func_35AE20
    ctx->pc = 0x35B3A0u;
    SET_GPR_U32(ctx, 31, 0x35B3A8u);
    ctx->pc = 0x35B3A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B3A0u;
    // 0x35b3a4: 0x244502b0  addiu       $a1, $v0, 0x2B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AE20u, 0x35B3A0u, 0x35B3A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B3A8u;
label_35b3a8:
    // 0x35b3a8: 0x8f838bb8  lw          $v1, -0x7448($gp)
    ctx->pc = 0x35b3a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937528)));
    // 0x35b3ac: 0xa06003a2  sb          $zero, 0x3A2($v1)
    ctx->pc = 0x35b3acu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 930), (uint8_t)GPR_U32(ctx, 0));
    // 0x35b3b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35b3b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35b3b4: 0x3e00008  jr          $ra
    ctx->pc = 0x35B3B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35B3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B3B4u;
        // 0x35b3b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35B3B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35B3BCu;
}
