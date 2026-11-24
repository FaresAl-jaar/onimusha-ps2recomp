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

// Function: sub_001852A0
// Address: 0x1852a0 - 0x185300
void sub_001852A0_0x1852a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001852A0_0x1852a0");
#endif

    switch (ctx->pc) {
        case 0x1852c0u: goto label_1852c0;
        default: break;
    }

    ctx->pc = 0x1852a0u;

    // 0x1852a0: 0x908301f9  lbu         $v1, 0x1F9($a0)
    ctx->pc = 0x1852a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 505)));
    // 0x1852a4: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x1852a4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1852a8: 0x10200011  beqz        $at, . + 4 + (0x11 << 2)
    ctx->pc = 0x1852A8u;
    {
        const bool branch_taken_0x1852a8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1852ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1852A8u;
        // 0x1852ac: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1852a8) {
            ctx->pc = 0x1852F0u;
            goto label_1852f0;
        }
    }
    ctx->pc = 0x1852B0u;
    // 0x1852b0: 0x8c8701e4  lw          $a3, 0x1E4($a0)
    ctx->pc = 0x1852b0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 484)));
    // 0x1852b4: 0x6263c  dsll32      $a0, $a2, 24
    ctx->pc = 0x1852b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) << (32 + 24));
    // 0x1852b8: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x1852b8u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x1852bc: 0x0  nop
    ctx->pc = 0x1852bcu;
    // NOP
label_1852c0:
    // 0x1852c0: 0x8ce20068  lw          $v0, 0x68($a3)
    ctx->pc = 0x1852c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 104)));
    // 0x1852c4: 0x14820006  bne         $a0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1852C4u;
    {
        const bool branch_taken_0x1852c4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1852c4) {
            ctx->pc = 0x1852E0u;
            goto label_1852e0;
        }
    }
    ctx->pc = 0x1852CCu;
    // 0x1852cc: 0x8ca211c0  lw          $v0, 0x11C0($a1)
    ctx->pc = 0x1852ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4544)));
    // 0x1852d0: 0x81a00  sll         $v1, $t0, 8
    ctx->pc = 0x1852d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1852d4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1852D4u;
    {
        const bool branch_taken_0x1852d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1852D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1852D4u;
        // 0x1852d8: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1852d4) {
            ctx->pc = 0x1852F8u;
            goto label_1852f8;
        }
    }
    ctx->pc = 0x1852DCu;
    // 0x1852dc: 0x0  nop
    ctx->pc = 0x1852dcu;
    // NOP
label_1852e0:
    // 0x1852e0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1852e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1852e4: 0x103102a  slt         $v0, $t0, $v1
    ctx->pc = 0x1852e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1852e8: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x1852E8u;
    {
        const bool branch_taken_0x1852e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1852ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1852E8u;
        // 0x1852ec: 0x24e70090  addiu       $a3, $a3, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1852e8) {
            ctx->pc = 0x1852C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1852c0;
        }
    }
    ctx->pc = 0x1852F0u;
label_1852f0:
    // 0x1852f0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1852f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1852f4: 0x0  nop
    ctx->pc = 0x1852f4u;
    // NOP
label_1852f8:
    // 0x1852f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1852F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1852F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x185300u;
}
