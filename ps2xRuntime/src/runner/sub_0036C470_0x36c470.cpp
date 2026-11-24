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

// Function: sub_0036C470
// Address: 0x36c470 - 0x36c4e4
void sub_0036C470_0x36c470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036C470_0x36c470");
#endif

    switch (ctx->pc) {
        case 0x36c488u: goto label_36c488;
        case 0x36c4a4u: goto label_36c4a4;
        default: break;
    }

    ctx->pc = 0x36c470u;

    // 0x36c470: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x36c470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x36c474: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x36c474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x36c478: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x36c478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x36c47c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x36c47cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x36c480: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x36c480u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c484: 0x309000ff  andi        $s0, $a0, 0xFF
    ctx->pc = 0x36c484u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_36c488:
    // 0x36c488: 0x8f838c00  lw          $v1, -0x7400($gp)
    ctx->pc = 0x36c488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36c48c: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x36c48cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x36c490: 0x90631e28  lbu         $v1, 0x1E28($v1)
    ctx->pc = 0x36c490u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 7720)));
    // 0x36c494: 0x14700004  bne         $v1, $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x36C494u;
    {
        const bool branch_taken_0x36c494 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        ctx->pc = 0x36C498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C494u;
        // 0x36c498: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36c494) {
            ctx->pc = 0x36C4A8u;
            goto label_36c4a8;
        }
    }
    ctx->pc = 0x36C49Cu;
    // 0x36c49c: 0xc0db078  jal         func_36C1E0
    ctx->pc = 0x36C49Cu;
    SET_GPR_U32(ctx, 31, 0x36C4A4u);
    ctx->pc = 0x36C1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C1E0u, 0x36C49Cu, 0x36C4A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C4A4u;
label_36c4a4:
    // 0x36c4a4: 0x0  nop
    ctx->pc = 0x36c4a4u;
    // NOP
label_36c4a8:
    // 0x36c4a8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x36c4a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x36c4ac: 0x2a230042  slti        $v1, $s1, 0x42
    ctx->pc = 0x36c4acu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)66) ? 1 : 0);
    // 0x36c4b0: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x36C4B0u;
    {
        const bool branch_taken_0x36c4b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x36c4b0) {
            ctx->pc = 0x36C488u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36c488;
        }
    }
    ctx->pc = 0x36C4B8u;
    // 0x36c4b8: 0x8f838c00  lw          $v1, -0x7400($gp)
    ctx->pc = 0x36c4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36c4bc: 0x24641c11  addiu       $a0, $v1, 0x1C11
    ctx->pc = 0x36c4bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 7185));
    // 0x36c4c0: 0x90631c11  lbu         $v1, 0x1C11($v1)
    ctx->pc = 0x36c4c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 7185)));
    // 0x36c4c4: 0x14700002  bne         $v1, $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x36C4C4u;
    {
        const bool branch_taken_0x36c4c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        if (branch_taken_0x36c4c4) {
            ctx->pc = 0x36C4D0u;
            goto label_36c4d0;
        }
    }
    ctx->pc = 0x36C4CCu;
    // 0x36c4cc: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x36c4ccu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
label_36c4d0:
    // 0x36c4d0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x36c4d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36c4d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x36c4d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36c4d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x36c4d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36c4dc: 0x3e00008  jr          $ra
    ctx->pc = 0x36C4DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36C4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C4DCu;
        // 0x36c4e0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36C4DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36C4E4u;
}
