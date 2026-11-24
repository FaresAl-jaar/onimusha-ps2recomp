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

// Function: sub_003D0260
// Address: 0x3d0260 - 0x3d02b8
void sub_003D0260_0x3d0260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D0260_0x3d0260");
#endif

    switch (ctx->pc) {
        case 0x3d0288u: goto label_3d0288;
        case 0x3d0294u: goto label_3d0294;
        default: break;
    }

    ctx->pc = 0x3d0260u;

    // 0x3d0260: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3d0260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3d0264: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3d0264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3d0268: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3d0268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3d026c: 0x8f838cd0  lw          $v1, -0x7330($gp)
    ctx->pc = 0x3d026cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937808)));
    // 0x3d0270: 0x1860000d  blez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x3D0270u;
    {
        const bool branch_taken_0x3d0270 = (GPR_S64(ctx, 3) <= 0);
        if (branch_taken_0x3d0270) {
            ctx->pc = 0x3D02A8u;
            goto label_3d02a8;
        }
    }
    ctx->pc = 0x3D0278u;
    // 0x3d0278: 0x8f838cc8  lw          $v1, -0x7338($gp)
    ctx->pc = 0x3d0278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937800)));
    // 0x3d027c: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x3D027Cu;
    {
        const bool branch_taken_0x3d027c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d027c) {
            ctx->pc = 0x3D02A8u;
            goto label_3d02a8;
        }
    }
    ctx->pc = 0x3D0284u;
    // 0x3d0284: 0x0  nop
    ctx->pc = 0x3d0284u;
    // NOP
label_3d0288:
    // 0x3d0288: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x3d0288u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x3d028c: 0xc0c0860  jal         func_302180
    ctx->pc = 0x3D028Cu;
    SET_GPR_U32(ctx, 31, 0x3D0294u);
    ctx->pc = 0x3D0290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D028Cu;
    // 0x3d0290: 0x8c700584  lw          $s0, 0x584($v1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302180u, 0x3D028Cu, 0x3D0294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D0294u;
label_3d0294:
    // 0x3d0294: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x3d0294u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d0298: 0x0  nop
    ctx->pc = 0x3d0298u;
    // NOP
    // 0x3d029c: 0x1600fffa  bnez        $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3D029Cu;
    {
        const bool branch_taken_0x3d029c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d029c) {
            ctx->pc = 0x3D0288u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d0288;
        }
    }
    ctx->pc = 0x3D02A4u;
    // 0x3d02a4: 0x0  nop
    ctx->pc = 0x3d02a4u;
    // NOP
label_3d02a8:
    // 0x3d02a8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3d02a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3d02ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3d02acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d02b0: 0x3e00008  jr          $ra
    ctx->pc = 0x3D02B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D02B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D02B0u;
        // 0x3d02b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D02B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D02B8u;
}
