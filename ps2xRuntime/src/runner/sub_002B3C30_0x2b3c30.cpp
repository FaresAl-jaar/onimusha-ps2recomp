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

// Function: sub_002B3C30
// Address: 0x2b3c30 - 0x2b3c98
void sub_002B3C30_0x2b3c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B3C30_0x2b3c30");
#endif

    switch (ctx->pc) {
        case 0x2b3c50u: goto label_2b3c50;
        case 0x2b3c58u: goto label_2b3c58;
        case 0x2b3c68u: goto label_2b3c68;
        case 0x2b3c7cu: goto label_2b3c7c;
        default: break;
    }

    ctx->pc = 0x2b3c30u;

    // 0x2b3c30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b3c30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b3c34: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x2b3c34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x2b3c38: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2b3c38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2b3c3c: 0x24845a80  addiu       $a0, $a0, 0x5A80
    ctx->pc = 0x2b3c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23168));
    // 0x2b3c40: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x2b3c40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2b3c44: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2b3c44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3c48: 0xc0ad0d8  jal         func_2B4360
    ctx->pc = 0x2B3C48u;
    SET_GPR_U32(ctx, 31, 0x2B3C50u);
    ctx->pc = 0x2B3C4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3C48u;
    // 0x2b3c4c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4360u, 0x2B3C48u, 0x2B3C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3C50u;
label_2b3c50:
    // 0x2b3c50: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2B3C50u;
    {
        const bool branch_taken_0x2b3c50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3C50u;
        // 0x2b3c54: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3c50) {
            ctx->pc = 0x2B3C88u;
            goto label_2b3c88;
        }
    }
    ctx->pc = 0x2B3C58u;
label_2b3c58:
    // 0x2b3c58: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x2b3c58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x2b3c5c: 0x24845a80  addiu       $a0, $a0, 0x5A80
    ctx->pc = 0x2b3c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23168));
    // 0x2b3c60: 0xc0ad0ec  jal         func_2B43B0
    ctx->pc = 0x2B3C60u;
    SET_GPR_U32(ctx, 31, 0x2B3C68u);
    ctx->pc = 0x2B3C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3C60u;
    // 0x2b3c64: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B43B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B43B0u, 0x2B3C60u, 0x2B3C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3C68u;
label_2b3c68:
    // 0x2b3c68: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x2b3c68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x2b3c6c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2b3c6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3c70: 0x24845a80  addiu       $a0, $a0, 0x5A80
    ctx->pc = 0x2b3c70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23168));
    // 0x2b3c74: 0xc0ad0d8  jal         func_2B4360
    ctx->pc = 0x2B3C74u;
    SET_GPR_U32(ctx, 31, 0x2B3C7Cu);
    ctx->pc = 0x2B3C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3C74u;
    // 0x2b3c78: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4360u, 0x2B3C74u, 0x2B3C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3C7Cu;
label_2b3c7c:
    // 0x2b3c7c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x2B3C7Cu;
    {
        const bool branch_taken_0x2b3c7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B3C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3C7Cu;
        // 0x2b3c80: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3c7c) {
            ctx->pc = 0x2B3C58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b3c58;
        }
    }
    ctx->pc = 0x2B3C84u;
    // 0x2b3c84: 0x0  nop
    ctx->pc = 0x2b3c84u;
    // NOP
label_2b3c88:
    // 0x2b3c88: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2b3c88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b3c8c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b3c8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b3c90: 0x3e00008  jr          $ra
    ctx->pc = 0x2B3C90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B3C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3C90u;
        // 0x2b3c94: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B3C90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B3C98u;
}
