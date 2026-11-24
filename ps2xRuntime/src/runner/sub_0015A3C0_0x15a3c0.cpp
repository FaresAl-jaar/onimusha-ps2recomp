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

// Function: sub_0015A3C0
// Address: 0x15a3c0 - 0x15a43c
void sub_0015A3C0_0x15a3c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015A3C0_0x15a3c0");
#endif

    switch (ctx->pc) {
        case 0x15a428u: goto label_15a428;
        default: break;
    }

    ctx->pc = 0x15a3c0u;

    // 0x15a3c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x15a3c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x15a3c4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15a3c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x15a3c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x15a3c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x15a3cc: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x15a3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x15a3d0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15a3d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15a3d4: 0x8f878610  lw          $a3, -0x79F0($gp)
    ctx->pc = 0x15a3d4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936080)));
    // 0x15a3d8: 0x8c30fc98  lw          $s0, -0x368($at)
    ctx->pc = 0x15a3d8u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x81FC98u));
    // 0x15a3dc: 0x8ce60328  lw          $a2, 0x328($a3)
    ctx->pc = 0x15a3dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 808)));
    // 0x15a3e0: 0x2041821  addu        $v1, $s0, $a0
    ctx->pc = 0x15a3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x15a3e4: 0x2463000f  addiu       $v1, $v1, 0xF
    ctx->pc = 0x15a3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x15a3e8: 0x622824  and         $a1, $v1, $v0
    ctx->pc = 0x15a3e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x15a3ec: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x15a3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x15a3f0: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x15a3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x15a3f4: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x15a3f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x15a3f8: 0x8f838610  lw          $v1, -0x79F0($gp)
    ctx->pc = 0x15a3f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936080)));
    // 0x15a3fc: 0x8c620328  lw          $v0, 0x328($v1)
    ctx->pc = 0x15a3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 808)));
    // 0x15a400: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x15a400u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x15a404: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15a404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15a408: 0xac440190  sw          $a0, 0x190($v0)
    ctx->pc = 0x15a408u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 400), GPR_U32(ctx, 4));
    // 0x15a40c: 0x8f838610  lw          $v1, -0x79F0($gp)
    ctx->pc = 0x15a40cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936080)));
    // 0x15a410: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x15a410u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x15a414: 0x2484cea0  addiu       $a0, $a0, -0x3160
    ctx->pc = 0x15a414u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954656));
    // 0x15a418: 0x8c620328  lw          $v0, 0x328($v1)
    ctx->pc = 0x15a418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 808)));
    // 0x15a41c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x15a41cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x15a420: 0xc05e390  jal         func_178E40
    ctx->pc = 0x15A420u;
    SET_GPR_U32(ctx, 31, 0x15A428u);
    ctx->pc = 0x15A424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A420u;
    // 0x15a424: 0xac620328  sw          $v0, 0x328($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 808), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178E40u, 0x15A420u, 0x15A428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A428u;
label_15a428:
    // 0x15a428: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x15a428u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a42c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x15a42cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15a430: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15a430u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15a434: 0x3e00008  jr          $ra
    ctx->pc = 0x15A434u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15A438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A434u;
        // 0x15a438: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15A434u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15A43Cu;
}
