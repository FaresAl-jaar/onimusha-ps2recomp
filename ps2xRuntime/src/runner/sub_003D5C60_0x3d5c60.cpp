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

// Function: sub_003D5C60
// Address: 0x3d5c60 - 0x3d5cdc
void sub_003D5C60_0x3d5c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D5C60_0x3d5c60");
#endif

    switch (ctx->pc) {
        case 0x3d5c84u: goto label_3d5c84;
        case 0x3d5ca0u: goto label_3d5ca0;
        default: break;
    }

    ctx->pc = 0x3d5c60u;

    // 0x3d5c60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3d5c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3d5c64: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x3d5c64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x3d5c68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3d5c68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3d5c6c: 0x24020ff2  addiu       $v0, $zero, 0xFF2
    ctx->pc = 0x3d5c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4082));
    // 0x3d5c70: 0x94246ac4  lhu         $a0, 0x6AC4($at)
    ctx->pc = 0x3d5c70u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)FAST_READ16(0x7E6AC4u));
    // 0x3d5c74: 0x14820006  bne         $a0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3D5C74u;
    {
        const bool branch_taken_0x3d5c74 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x3d5c74) {
            ctx->pc = 0x3D5C90u;
            goto label_3d5c90;
        }
    }
    ctx->pc = 0x3D5C7Cu;
    // 0x3d5c7c: 0xc0d8ca0  jal         func_363280
    ctx->pc = 0x3D5C7Cu;
    SET_GPR_U32(ctx, 31, 0x3D5C84u);
    ctx->pc = 0x363280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363280u, 0x3D5C7Cu, 0x3D5C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D5C84u;
label_3d5c84:
    // 0x3d5c84: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x3D5C84u;
    {
        const bool branch_taken_0x3d5c84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D5C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5C84u;
        // 0x3d5c88: 0x2442004f  addiu       $v0, $v0, 0x4F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 79));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d5c84) {
            ctx->pc = 0x3D5CD0u;
            goto label_3d5cd0;
        }
    }
    ctx->pc = 0x3D5C8Cu;
    // 0x3d5c8c: 0x0  nop
    ctx->pc = 0x3d5c8cu;
    // NOP
label_3d5c90:
    // 0x3d5c90: 0x3c050068  lui         $a1, 0x68
    ctx->pc = 0x3d5c90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)104 << 16));
    // 0x3d5c94: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3d5c94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d5c98: 0x24a532b0  addiu       $a1, $a1, 0x32B0
    ctx->pc = 0x3d5c98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12976));
    // 0x3d5c9c: 0x0  nop
    ctx->pc = 0x3d5c9cu;
    // NOP
label_3d5ca0:
    // 0x3d5ca0: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x3d5ca0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3d5ca4: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D5CA4u;
    {
        const bool branch_taken_0x3d5ca4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3d5ca4) {
            ctx->pc = 0x3D5CB8u;
            goto label_3d5cb8;
        }
    }
    ctx->pc = 0x3D5CACu;
    // 0x3d5cac: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3D5CACu;
    {
        const bool branch_taken_0x3d5cac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d5cac) {
            ctx->pc = 0x3D5CD0u;
            goto label_3d5cd0;
        }
    }
    ctx->pc = 0x3D5CB4u;
    // 0x3d5cb4: 0x0  nop
    ctx->pc = 0x3d5cb4u;
    // NOP
label_3d5cb8:
    // 0x3d5cb8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3d5cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3d5cbc: 0x2c43007a  sltiu       $v1, $v0, 0x7A
    ctx->pc = 0x3d5cbcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)122) ? 1 : 0);
    // 0x3d5cc0: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x3D5CC0u;
    {
        const bool branch_taken_0x3d5cc0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D5CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5CC0u;
        // 0x3d5cc4: 0x24a50024  addiu       $a1, $a1, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d5cc0) {
            ctx->pc = 0x3D5CA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d5ca0;
        }
    }
    ctx->pc = 0x3D5CC8u;
    // 0x3d5cc8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3d5cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3d5ccc: 0x0  nop
    ctx->pc = 0x3d5cccu;
    // NOP
label_3d5cd0:
    // 0x3d5cd0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3d5cd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d5cd4: 0x3e00008  jr          $ra
    ctx->pc = 0x3D5CD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D5CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5CD4u;
        // 0x3d5cd8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D5CD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D5CDCu;
}
