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

// Function: sub_002A0F70
// Address: 0x2a0f70 - 0x2a0fd8
void sub_002A0F70_0x2a0f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A0F70_0x2a0f70");
#endif

    switch (ctx->pc) {
        case 0x2a0f80u: goto label_2a0f80;
        case 0x2a0f90u: goto label_2a0f90;
        case 0x2a0f98u: goto label_2a0f98;
        default: break;
    }

    ctx->pc = 0x2a0f70u;

    // 0x2a0f70: 0x8c820078  lw          $v0, 0x78($a0)
    ctx->pc = 0x2a0f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 120)));
    // 0x2a0f74: 0x8c87007c  lw          $a3, 0x7C($a0)
    ctx->pc = 0x2a0f74u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
    // 0x2a0f78: 0x94860068  lhu         $a2, 0x68($a0)
    ctx->pc = 0x2a0f78u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 104)));
    // 0x2a0f7c: 0x24490010  addiu       $t1, $v0, 0x10
    ctx->pc = 0x2a0f7cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_2a0f80:
    // 0x2a0f80: 0xace50018  sw          $a1, 0x18($a3)
    ctx->pc = 0x2a0f80u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 5));
    // 0x2a0f84: 0x8d280020  lw          $t0, 0x20($t1)
    ctx->pc = 0x2a0f84u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 32)));
    // 0x2a0f88: 0x91240024  lbu         $a0, 0x24($t1)
    ctx->pc = 0x2a0f88u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 36)));
    // 0x2a0f8c: 0x0  nop
    ctx->pc = 0x2a0f8cu;
    // NOP
label_2a0f90:
    // 0x2a0f90: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2a0f90u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0f94: 0x0  nop
    ctx->pc = 0x2a0f94u;
    // NOP
label_2a0f98:
    // 0x2a0f98: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2a0f98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2a0f9c: 0xaca80000  sw          $t0, 0x0($a1)
    ctx->pc = 0x2a0f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 8));
    // 0x2a0fa0: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x2a0fa0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2a0fa4: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x2a0fa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x2a0fa8: 0x0  nop
    ctx->pc = 0x2a0fa8u;
    // NOP
    // 0x2a0fac: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2A0FACu;
    {
        const bool branch_taken_0x2a0fac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a0fac) {
            ctx->pc = 0x2A0F98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a0f98;
        }
    }
    ctx->pc = 0x2A0FB4u;
    // 0x2a0fb4: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x2a0fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2a0fb8: 0x1c80fff5  bgtz        $a0, . + 4 + (-0xB << 2)
    ctx->pc = 0x2A0FB8u;
    {
        const bool branch_taken_0x2a0fb8 = (GPR_S64(ctx, 4) > 0);
        ctx->pc = 0x2A0FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0FB8u;
        // 0x2a0fbc: 0x2508001c  addiu       $t0, $t0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0fb8) {
            ctx->pc = 0x2A0F90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a0f90;
        }
    }
    ctx->pc = 0x2A0FC0u;
    // 0x2a0fc0: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x2a0fc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x2a0fc4: 0x24e701f0  addiu       $a3, $a3, 0x1F0
    ctx->pc = 0x2a0fc4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 496));
    // 0x2a0fc8: 0x1cc0ffed  bgtz        $a2, . + 4 + (-0x13 << 2)
    ctx->pc = 0x2A0FC8u;
    {
        const bool branch_taken_0x2a0fc8 = (GPR_S64(ctx, 6) > 0);
        ctx->pc = 0x2A0FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0FC8u;
        // 0x2a0fcc: 0x25290050  addiu       $t1, $t1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0fc8) {
            ctx->pc = 0x2A0F80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a0f80;
        }
    }
    ctx->pc = 0x2A0FD0u;
    // 0x2a0fd0: 0x3e00008  jr          $ra
    ctx->pc = 0x2A0FD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A0FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0FD0u;
        // 0x2a0fd4: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A0FD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A0FD8u;
}
