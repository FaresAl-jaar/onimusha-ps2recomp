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

// Function: sub_003D3490
// Address: 0x3d3490 - 0x3d34e0
void sub_003D3490_0x3d3490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D3490_0x3d3490");
#endif

    switch (ctx->pc) {
        case 0x3d34c8u: goto label_3d34c8;
        case 0x3d34d0u: goto label_3d34d0;
        default: break;
    }

    ctx->pc = 0x3d3490u;

    // 0x3d3490: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3d3490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3d3494: 0x240200f0  addiu       $v0, $zero, 0xF0
    ctx->pc = 0x3d3494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    // 0x3d3498: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3d3498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3d349c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3d349cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3d34a0: 0x8c830148  lw          $v1, 0x148($a0)
    ctx->pc = 0x3d34a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
    // 0x3d34a4: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x3d34a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x3d34a8: 0xac830148  sw          $v1, 0x148($a0)
    ctx->pc = 0x3d34a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 3));
    // 0x3d34ac: 0x9083065c  lbu         $v1, 0x65C($a0)
    ctx->pc = 0x3d34acu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1628)));
    // 0x3d34b0: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D34B0u;
    {
        const bool branch_taken_0x3d34b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3D34B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D34B0u;
        // 0x3d34b4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d34b0) {
            ctx->pc = 0x3D34C0u;
            goto label_3d34c0;
        }
    }
    ctx->pc = 0x3D34B8u;
    // 0x3d34b8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3D34B8u;
    {
        const bool branch_taken_0x3d34b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d34b8) {
            ctx->pc = 0x3D34C8u;
            goto label_3d34c8;
        }
    }
    ctx->pc = 0x3D34C0u;
label_3d34c0:
    // 0x3d34c0: 0xc0f4d00  jal         func_3D3400
    ctx->pc = 0x3D34C0u;
    SET_GPR_U32(ctx, 31, 0x3D34C8u);
    ctx->pc = 0x3D3400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3400u, 0x3D34C0u, 0x3D34C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D34C8u;
label_3d34c8:
    // 0x3d34c8: 0xc0a4d3c  jal         func_2934F0
    ctx->pc = 0x3D34C8u;
    SET_GPR_U32(ctx, 31, 0x3D34D0u);
    ctx->pc = 0x3D34CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D34C8u;
    // 0x3d34cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2934F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2934F0u, 0x3D34C8u, 0x3D34D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D34D0u;
label_3d34d0:
    // 0x3d34d0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3d34d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3d34d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3d34d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d34d8: 0x3e00008  jr          $ra
    ctx->pc = 0x3D34D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D34DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D34D8u;
        // 0x3d34dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D34D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D34E0u;
}
