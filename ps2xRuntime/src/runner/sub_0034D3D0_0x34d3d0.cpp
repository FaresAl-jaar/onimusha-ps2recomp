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

// Function: sub_0034D3D0
// Address: 0x34d3d0 - 0x34d43c
void sub_0034D3D0_0x34d3d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034D3D0_0x34d3d0");
#endif

    switch (ctx->pc) {
        case 0x34d3e0u: goto label_34d3e0;
        case 0x34d3f8u: goto label_34d3f8;
        default: break;
    }

    ctx->pc = 0x34d3d0u;

    // 0x34d3d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x34d3d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x34d3d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x34d3d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x34d3d8: 0xc0d8d1c  jal         func_363470
    ctx->pc = 0x34D3D8u;
    SET_GPR_U32(ctx, 31, 0x34D3E0u);
    ctx->pc = 0x363470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363470u, 0x34D3D8u, 0x34D3E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D3E0u;
label_34d3e0:
    // 0x34d3e0: 0xafa2001c  sw          $v0, 0x1C($sp)
    ctx->pc = 0x34d3e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
    // 0x34d3e4: 0x3c040065  lui         $a0, 0x65
    ctx->pc = 0x34d3e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)101 << 16));
    // 0x34d3e8: 0x8fa3001c  lw          $v1, 0x1C($sp)
    ctx->pc = 0x34d3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x34d3ec: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x34d3ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x34d3f0: 0x24847c1c  addiu       $a0, $a0, 0x7C1C
    ctx->pc = 0x34d3f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31772));
    // 0x34d3f4: 0x0  nop
    ctx->pc = 0x34d3f4u;
    // NOP
label_34d3f8:
    // 0x34d3f8: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x34d3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x34d3fc: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x34d3fcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x34d400: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x34D400u;
    {
        const bool branch_taken_0x34d400 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x34d400) {
            ctx->pc = 0x34D418u;
            goto label_34d418;
        }
    }
    ctx->pc = 0x34D408u;
    // 0x34d408: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x34d408u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x34d40c: 0x14a0fffa  bnez        $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x34D40Cu;
    {
        const bool branch_taken_0x34d40c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x34D410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34D40Cu;
        // 0x34d410: 0x2484ffe4  addiu       $a0, $a0, -0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967268));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34d40c) {
            ctx->pc = 0x34D3F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_34d3f8;
        }
    }
    ctx->pc = 0x34D414u;
    // 0x34d414: 0x0  nop
    ctx->pc = 0x34d414u;
    // NOP
label_34d418:
    // 0x34d418: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x34d418u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34d41c: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x34d41cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x34d420: 0x451823  subu        $v1, $v0, $a1
    ctx->pc = 0x34d420u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x34d424: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x34d424u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
    // 0x34d428: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x34d428u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x34d42c: 0x24427ab0  addiu       $v0, $v0, 0x7AB0
    ctx->pc = 0x34d42cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31408));
    // 0x34d430: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x34d430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x34d434: 0x3e00008  jr          $ra
    ctx->pc = 0x34D434u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34D438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34D434u;
        // 0x34d438: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34D434u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34D43Cu;
}
