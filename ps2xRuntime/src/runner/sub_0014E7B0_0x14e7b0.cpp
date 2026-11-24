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

// Function: sub_0014E7B0
// Address: 0x14e7b0 - 0x14e808
void sub_0014E7B0_0x14e7b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014E7B0_0x14e7b0");
#endif

    switch (ctx->pc) {
        case 0x14e7c0u: goto label_14e7c0;
        default: break;
    }

    ctx->pc = 0x14e7b0u;

    // 0x14e7b0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x14e7b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e7b4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x14E7B4u;
    {
        const bool branch_taken_0x14e7b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E7B4u;
        // 0x14e7b8: 0x3c043f80  lui         $a0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e7b4) {
            ctx->pc = 0x14E7F0u;
            goto label_14e7f0;
        }
    }
    ctx->pc = 0x14E7BCu;
    // 0x14e7bc: 0x0  nop
    ctx->pc = 0x14e7bcu;
    // NOP
label_14e7c0:
    // 0x14e7c0: 0x71900  sll         $v1, $a3, 4
    ctx->pc = 0x14e7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x14e7c4: 0x673023  subu        $a2, $v1, $a3
    ctx->pc = 0x14e7c4u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x14e7c8: 0x8ca300ec  lw          $v1, 0xEC($a1)
    ctx->pc = 0x14e7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 236)));
    // 0x14e7cc: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x14e7ccu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x14e7d0: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x14e7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x14e7d4: 0xac6400ac  sw          $a0, 0xAC($v1)
    ctx->pc = 0x14e7d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 172), GPR_U32(ctx, 4));
    // 0x14e7d8: 0x246600b0  addiu       $a2, $v1, 0xB0
    ctx->pc = 0x14e7d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 176));
    // 0x14e7dc: 0x246300a0  addiu       $v1, $v1, 0xA0
    ctx->pc = 0x14e7dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
    // 0x14e7e0: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x14e7e0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14e7e4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x14e7e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x14e7e8: 0x7cc30000  sq          $v1, 0x0($a2)
    ctx->pc = 0x14e7e8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 3));
    // 0x14e7ec: 0x0  nop
    ctx->pc = 0x14e7ecu;
    // NOP
label_14e7f0:
    // 0x14e7f0: 0x90a300e4  lbu         $v1, 0xE4($a1)
    ctx->pc = 0x14e7f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 228)));
    // 0x14e7f4: 0xe3182b  sltu        $v1, $a3, $v1
    ctx->pc = 0x14e7f4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x14e7f8: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
    ctx->pc = 0x14E7F8u;
    {
        const bool branch_taken_0x14e7f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x14e7f8) {
            ctx->pc = 0x14E7C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14e7c0;
        }
    }
    ctx->pc = 0x14E800u;
    // 0x14e800: 0x3e00008  jr          $ra
    ctx->pc = 0x14E800u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14E800u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14E808u;
}
