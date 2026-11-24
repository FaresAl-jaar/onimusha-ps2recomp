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

// Function: sub_002701D0
// Address: 0x2701d0 - 0x270228
void sub_002701D0_0x2701d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002701D0_0x2701d0");
#endif

    ctx->pc = 0x2701d0u;

    // 0x2701d0: 0x3c01008c  lui         $at, 0x8C
    ctx->pc = 0x2701d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)140 << 16));
    // 0x2701d4: 0x3c05008c  lui         $a1, 0x8C
    ctx->pc = 0x2701d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)140 << 16));
    // 0x2701d8: 0x902305e1  lbu         $v1, 0x5E1($at)
    ctx->pc = 0x2701d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x8C05E1u));
    // 0x2701dc: 0x286100c0  slti        $at, $v1, 0xC0
    ctx->pc = 0x2701dcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)192) ? 1 : 0);
    // 0x2701e0: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x2701E0u;
    {
        const bool branch_taken_0x2701e0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2701E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2701E0u;
        // 0x2701e4: 0x24a505e0  addiu       $a1, $a1, 0x5E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1504));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2701e0) {
            ctx->pc = 0x2701F8u;
            goto label_2701f8;
        }
    }
    ctx->pc = 0x2701E8u;
    // 0x2701e8: 0x90a30001  lbu         $v1, 0x1($a1)
    ctx->pc = 0x2701e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x2701ec: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x2701ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x2701f0: 0xa0a30001  sb          $v1, 0x1($a1)
    ctx->pc = 0x2701f0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x2701f4: 0x0  nop
    ctx->pc = 0x2701f4u;
    // NOP
label_2701f8:
    // 0x2701f8: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x2701f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2701fc: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2701FCu;
    {
        const bool branch_taken_0x2701fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2701fc) {
            ctx->pc = 0x270220u;
            goto label_270220;
        }
    }
    ctx->pc = 0x270204u;
    // 0x270204: 0x90a30001  lbu         $v1, 0x1($a1)
    ctx->pc = 0x270204u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x270208: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x270208u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x27020c: 0xa0830068  sb          $v1, 0x68($a0)
    ctx->pc = 0x27020cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 104), (uint8_t)GPR_U32(ctx, 3));
    // 0x270210: 0x90a40001  lbu         $a0, 0x1($a1)
    ctx->pc = 0x270210u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x270214: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x270214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x270218: 0x42083  sra         $a0, $a0, 2
    ctx->pc = 0x270218u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 2));
    // 0x27021c: 0xa0640069  sb          $a0, 0x69($v1)
    ctx->pc = 0x27021cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 105), (uint8_t)GPR_U32(ctx, 4));
label_270220:
    // 0x270220: 0x3e00008  jr          $ra
    ctx->pc = 0x270220u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x270220u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x270228u;
}
