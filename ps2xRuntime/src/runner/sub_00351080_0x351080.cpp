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

// Function: sub_00351080
// Address: 0x351080 - 0x351120
void sub_00351080_0x351080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00351080_0x351080");
#endif

    switch (ctx->pc) {
        case 0x3510d8u: goto label_3510d8;
        default: break;
    }

    ctx->pc = 0x351080u;

    // 0x351080: 0x80830003  lb          $v1, 0x3($a0)
    ctx->pc = 0x351080u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x351084: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x351084u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x351088: 0xa0830003  sb          $v1, 0x3($a0)
    ctx->pc = 0x351088u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x35108c: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x35108cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x351090: 0x14e00003  bnez        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x351090u;
    {
        const bool branch_taken_0x351090 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x351090) {
            ctx->pc = 0x3510A0u;
            goto label_3510a0;
        }
    }
    ctx->pc = 0x351098u;
    // 0x351098: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x351098u;
    {
        const bool branch_taken_0x351098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35109Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351098u;
        // 0x35109c: 0xac850008  sw          $a1, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351098) {
            ctx->pc = 0x351118u;
            goto label_351118;
        }
    }
    ctx->pc = 0x3510A0u;
label_3510a0:
    // 0x3510a0: 0x90a60013  lbu         $a2, 0x13($a1)
    ctx->pc = 0x3510a0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 19)));
    // 0x3510a4: 0x90e30013  lbu         $v1, 0x13($a3)
    ctx->pc = 0x3510a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 19)));
    // 0x3510a8: 0x66082a  slt         $at, $v1, $a2
    ctx->pc = 0x3510a8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x3510ac: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x3510ACu;
    {
        const bool branch_taken_0x3510ac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3510ac) {
            ctx->pc = 0x3510C8u;
            goto label_3510c8;
        }
    }
    ctx->pc = 0x3510B4u;
    // 0x3510b4: 0xaca70000  sw          $a3, 0x0($a1)
    ctx->pc = 0x3510b4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 7));
    // 0x3510b8: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x3510b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3510bc: 0xac650004  sw          $a1, 0x4($v1)
    ctx->pc = 0x3510bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 5));
    // 0x3510c0: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x3510C0u;
    {
        const bool branch_taken_0x3510c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3510C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3510C0u;
        // 0x3510c4: 0xac850008  sw          $a1, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3510c0) {
            ctx->pc = 0x351118u;
            goto label_351118;
        }
    }
    ctx->pc = 0x3510C8u;
label_3510c8:
    // 0x3510c8: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x3510c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3510cc: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x3510CCu;
    {
        const bool branch_taken_0x3510cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3510cc) {
            ctx->pc = 0x3510F8u;
            goto label_3510f8;
        }
    }
    ctx->pc = 0x3510D4u;
    // 0x3510d4: 0x0  nop
    ctx->pc = 0x3510d4u;
    // NOP
label_3510d8:
    // 0x3510d8: 0x90830013  lbu         $v1, 0x13($a0)
    ctx->pc = 0x3510d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 19)));
    // 0x3510dc: 0x66082a  slt         $at, $v1, $a2
    ctx->pc = 0x3510dcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x3510e0: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x3510E0u;
    {
        const bool branch_taken_0x3510e0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x3510e0) {
            ctx->pc = 0x3510F8u;
            goto label_3510f8;
        }
    }
    ctx->pc = 0x3510E8u;
    // 0x3510e8: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x3510e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3510ec: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x3510ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3510f0: 0x1480fff9  bnez        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3510F0u;
    {
        const bool branch_taken_0x3510f0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x3510f0) {
            ctx->pc = 0x3510D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3510d8;
        }
    }
    ctx->pc = 0x3510F8u;
label_3510f8:
    // 0x3510f8: 0xaca70004  sw          $a3, 0x4($a1)
    ctx->pc = 0x3510f8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 7));
    // 0x3510fc: 0x10e00002  beqz        $a3, . + 4 + (0x2 << 2)
    ctx->pc = 0x3510FCu;
    {
        const bool branch_taken_0x3510fc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x351100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3510FCu;
        // 0x351100: 0xaca40000  sw          $a0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3510fc) {
            ctx->pc = 0x351108u;
            goto label_351108;
        }
    }
    ctx->pc = 0x351104u;
    // 0x351104: 0xace50000  sw          $a1, 0x0($a3)
    ctx->pc = 0x351104u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
label_351108:
    // 0x351108: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x351108u;
    {
        const bool branch_taken_0x351108 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x351108) {
            ctx->pc = 0x351118u;
            goto label_351118;
        }
    }
    ctx->pc = 0x351110u;
    // 0x351110: 0xac850004  sw          $a1, 0x4($a0)
    ctx->pc = 0x351110u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
    // 0x351114: 0x0  nop
    ctx->pc = 0x351114u;
    // NOP
label_351118:
    // 0x351118: 0x3e00008  jr          $ra
    ctx->pc = 0x351118u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x351118u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x351120u;
}
