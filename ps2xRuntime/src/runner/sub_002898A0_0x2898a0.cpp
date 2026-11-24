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

// Function: sub_002898A0
// Address: 0x2898a0 - 0x2898f8
void sub_002898A0_0x2898a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002898A0_0x2898a0");
#endif

    ctx->pc = 0x2898a0u;

    // 0x2898a0: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x2898a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2898a4: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x2898a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x2898a8: 0x2c410002  sltiu       $at, $v0, 0x2
    ctx->pc = 0x2898a8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2898ac: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x2898ACu;
    {
        const bool branch_taken_0x2898ac = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2898B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2898ACu;
        // 0x2898b0: 0x64030001  daddiu      $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2898ac) {
            ctx->pc = 0x2898B8u;
            goto label_2898b8;
        }
    }
    ctx->pc = 0x2898B4u;
    // 0x2898b4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2898b4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2898b8:
    // 0x2898b8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2898B8u;
    {
        const bool branch_taken_0x2898b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2898BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2898B8u;
        // 0x2898bc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2898b8) {
            ctx->pc = 0x2898C8u;
            goto label_2898c8;
        }
    }
    ctx->pc = 0x2898C0u;
    // 0x2898c0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2898C0u;
    {
        const bool branch_taken_0x2898c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2898c0) {
            ctx->pc = 0x2898F0u;
            goto label_2898f0;
        }
    }
    ctx->pc = 0x2898C8u;
label_2898c8:
    // 0x2898c8: 0x8c8229c0  lw          $v0, 0x29C0($a0)
    ctx->pc = 0x2898c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 10688)));
    // 0x2898cc: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x2898ccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2898d0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2898D0u;
    {
        const bool branch_taken_0x2898d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2898D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2898D0u;
        // 0x2898d4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2898d0) {
            ctx->pc = 0x2898E0u;
            goto label_2898e0;
        }
    }
    ctx->pc = 0x2898D8u;
    // 0x2898d8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2898D8u;
    {
        const bool branch_taken_0x2898d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2898d8) {
            ctx->pc = 0x2898F0u;
            goto label_2898f0;
        }
    }
    ctx->pc = 0x2898E0u;
label_2898e0:
    // 0x2898e0: 0x8c8206c8  lw          $v0, 0x6C8($a0)
    ctx->pc = 0x2898e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1736)));
    // 0x2898e4: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x2898e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x2898e8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2898e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2898ec: 0x0  nop
    ctx->pc = 0x2898ecu;
    // NOP
label_2898f0:
    // 0x2898f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2898F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2898F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2898F8u;
}
