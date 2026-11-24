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

// Function: sub_001DB1B0
// Address: 0x1db1b0 - 0x1db214
void sub_001DB1B0_0x1db1b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DB1B0_0x1db1b0");
#endif

    switch (ctx->pc) {
        case 0x1db1d0u: goto label_1db1d0;
        case 0x1db1e8u: goto label_1db1e8;
        default: break;
    }

    ctx->pc = 0x1db1b0u;

    // 0x1db1b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1db1b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1db1b4: 0x24a3000f  addiu       $v1, $a1, 0xF
    ctx->pc = 0x1db1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 15));
    // 0x1db1b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1db1b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1db1bc: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x1db1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x1db1c0: 0x8c850028  lw          $a1, 0x28($a0)
    ctx->pc = 0x1db1c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x1db1c4: 0x10a0000e  beqz        $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x1DB1C4u;
    {
        const bool branch_taken_0x1db1c4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB1C4u;
        // 0x1db1c8: 0x623024  and         $a2, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db1c4) {
            ctx->pc = 0x1DB200u;
            goto label_1db200;
        }
    }
    ctx->pc = 0x1DB1CCu;
    // 0x1db1cc: 0x0  nop
    ctx->pc = 0x1db1ccu;
    // NOP
label_1db1d0:
    // 0x1db1d0: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x1db1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1db1d4: 0xc2082b  sltu        $at, $a2, $v0
    ctx->pc = 0x1db1d4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1db1d8: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DB1D8u;
    {
        const bool branch_taken_0x1db1d8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1db1d8) {
            ctx->pc = 0x1DB1F0u;
            goto label_1db1f0;
        }
    }
    ctx->pc = 0x1DB1E0u;
    // 0x1db1e0: 0xc076c3c  jal         func_1DB0F0
    ctx->pc = 0x1DB1E0u;
    SET_GPR_U32(ctx, 31, 0x1DB1E8u);
    ctx->pc = 0x1DB0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB0F0u, 0x1DB1E0u, 0x1DB1E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB1E8u;
label_1db1e8:
    // 0x1db1e8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1DB1E8u;
    {
        const bool branch_taken_0x1db1e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB1E8u;
        // 0x1db1ec: 0x24a20020  addiu       $v0, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db1e8) {
            ctx->pc = 0x1DB208u;
            goto label_1db208;
        }
    }
    ctx->pc = 0x1DB1F0u;
label_1db1f0:
    // 0x1db1f0: 0x8ca50010  lw          $a1, 0x10($a1)
    ctx->pc = 0x1db1f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1db1f4: 0x14a0fff6  bnez        $a1, . + 4 + (-0xA << 2)
    ctx->pc = 0x1DB1F4u;
    {
        const bool branch_taken_0x1db1f4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1db1f4) {
            ctx->pc = 0x1DB1D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1db1d0;
        }
    }
    ctx->pc = 0x1DB1FCu;
    // 0x1db1fc: 0x0  nop
    ctx->pc = 0x1db1fcu;
    // NOP
label_1db200:
    // 0x1db200: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1db200u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db204: 0x0  nop
    ctx->pc = 0x1db204u;
    // NOP
label_1db208:
    // 0x1db208: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1db208u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1db20c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DB20Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DB210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB20Cu;
        // 0x1db210: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DB20Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DB214u;
}
