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

// Function: sub_003D8C80
// Address: 0x3d8c80 - 0x3d8cdc
void sub_003D8C80_0x3d8c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D8C80_0x3d8c80");
#endif

    switch (ctx->pc) {
        case 0x3d8c90u: goto label_3d8c90;
        case 0x3d8c9cu: goto label_3d8c9c;
        default: break;
    }

    ctx->pc = 0x3d8c80u;

    // 0x3d8c80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3d8c80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3d8c84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3d8c84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3d8c88: 0xc04d4a0  jal         func_135280
    ctx->pc = 0x3D8C88u;
    SET_GPR_U32(ctx, 31, 0x3D8C90u);
    ctx->pc = 0x135280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135280u, 0x3D8C88u, 0x3D8C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D8C90u;
label_3d8c90:
    // 0x3d8c90: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x3d8c90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x3d8c94: 0xc04b742  jal         func_12DD08
    ctx->pc = 0x3D8C94u;
    SET_GPR_U32(ctx, 31, 0x3D8C9Cu);
    ctx->pc = 0x3D8C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D8C94u;
    // 0x3d8c98: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12DD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12DD08u, 0x3D8C94u, 0x3D8C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D8C9Cu;
label_3d8c9c:
    // 0x3d8c9c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3d8c9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3d8ca0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3d8ca0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3d8ca4: 0x2c41002d  sltiu       $at, $v0, 0x2D
    ctx->pc = 0x3d8ca4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)45) ? 1 : 0);
    // 0x3d8ca8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D8CA8u;
    {
        const bool branch_taken_0x3d8ca8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d8ca8) {
            ctx->pc = 0x3D8CB8u;
            goto label_3d8cb8;
        }
    }
    ctx->pc = 0x3D8CB0u;
    // 0x3d8cb0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3D8CB0u;
    {
        const bool branch_taken_0x3d8cb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D8CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8CB0u;
        // 0x3d8cb4: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d8cb0) {
            ctx->pc = 0x3D8CD0u;
            goto label_3d8cd0;
        }
    }
    ctx->pc = 0x3D8CB8u;
label_3d8cb8:
    // 0x3d8cb8: 0x2c41003c  sltiu       $at, $v0, 0x3C
    ctx->pc = 0x3d8cb8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)60) ? 1 : 0);
    // 0x3d8cbc: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D8CBCu;
    {
        const bool branch_taken_0x3d8cbc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d8cbc) {
            ctx->pc = 0x3D8CCCu;
            goto label_3d8ccc;
        }
    }
    ctx->pc = 0x3D8CC4u;
    // 0x3d8cc4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3D8CC4u;
    {
        const bool branch_taken_0x3d8cc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D8CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8CC4u;
        // 0x3d8cc8: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d8cc4) {
            ctx->pc = 0x3D8CD0u;
            goto label_3d8cd0;
        }
    }
    ctx->pc = 0x3D8CCCu;
label_3d8ccc:
    // 0x3d8ccc: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x3d8cccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_3d8cd0:
    // 0x3d8cd0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3d8cd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d8cd4: 0x3e00008  jr          $ra
    ctx->pc = 0x3D8CD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D8CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8CD4u;
        // 0x3d8cd8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D8CD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D8CDCu;
}
