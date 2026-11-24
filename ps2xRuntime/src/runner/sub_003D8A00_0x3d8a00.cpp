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

// Function: sub_003D8A00
// Address: 0x3d8a00 - 0x3d8a60
void sub_003D8A00_0x3d8a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D8A00_0x3d8a00");
#endif

    switch (ctx->pc) {
        case 0x3d8a18u: goto label_3d8a18;
        default: break;
    }

    ctx->pc = 0x3d8a00u;

    // 0x3d8a00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3d8a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3d8a04: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3d8a04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3d8a08: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3d8a08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3d8a0c: 0x8c8229c0  lw          $v0, 0x29C0($a0)
    ctx->pc = 0x3d8a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 10688)));
    // 0x3d8a10: 0xc0a6998  jal         func_29A660
    ctx->pc = 0x3D8A10u;
    SET_GPR_U32(ctx, 31, 0x3D8A18u);
    ctx->pc = 0x3D8A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D8A10u;
    // 0x3d8a14: 0x94500000  lhu         $s0, 0x0($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A660u, 0x3D8A10u, 0x3D8A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D8A18u;
label_3d8a18:
    // 0x3d8a18: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x3d8a18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3d8a1c: 0x3203ffff  andi        $v1, $s0, 0xFFFF
    ctx->pc = 0x3d8a1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x3d8a20: 0x41042  srl         $v0, $a0, 1
    ctx->pc = 0x3d8a20u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x3d8a24: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x3d8a24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3d8a28: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D8A28u;
    {
        const bool branch_taken_0x3d8a28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d8a28) {
            ctx->pc = 0x3D8A38u;
            goto label_3d8a38;
        }
    }
    ctx->pc = 0x3D8A30u;
    // 0x3d8a30: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3D8A30u;
    {
        const bool branch_taken_0x3d8a30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D8A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8A30u;
        // 0x3d8a34: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d8a30) {
            ctx->pc = 0x3D8A50u;
            goto label_3d8a50;
        }
    }
    ctx->pc = 0x3D8A38u;
label_3d8a38:
    // 0x3d8a38: 0x41082  srl         $v0, $a0, 2
    ctx->pc = 0x3d8a38u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 2));
    // 0x3d8a3c: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x3d8a3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3d8a40: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D8A40u;
    {
        const bool branch_taken_0x3d8a40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D8A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8A40u;
        // 0x3d8a44: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d8a40) {
            ctx->pc = 0x3D8A50u;
            goto label_3d8a50;
        }
    }
    ctx->pc = 0x3D8A48u;
    // 0x3d8a48: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x3D8A48u;
    {
        const bool branch_taken_0x3d8a48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D8A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8A48u;
        // 0x3d8a4c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d8a48) {
            ctx->pc = 0x3D8A50u;
            goto label_3d8a50;
        }
    }
    ctx->pc = 0x3D8A50u;
label_3d8a50:
    // 0x3d8a50: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3d8a50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3d8a54: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3d8a54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d8a58: 0x3e00008  jr          $ra
    ctx->pc = 0x3D8A58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D8A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8A58u;
        // 0x3d8a5c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D8A58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D8A60u;
}
