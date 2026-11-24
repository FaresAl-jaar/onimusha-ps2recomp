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

// Function: sub_0034E800
// Address: 0x34e800 - 0x34e854
void sub_0034E800_0x34e800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034E800_0x34e800");
#endif

    switch (ctx->pc) {
        case 0x34e830u: goto label_34e830;
        case 0x34e844u: goto label_34e844;
        default: break;
    }

    ctx->pc = 0x34e800u;

    // 0x34e800: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x34e800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x34e804: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x34e804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x34e808: 0x9082002d  lbu         $v0, 0x2D($a0)
    ctx->pc = 0x34e808u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 45)));
    // 0x34e80c: 0xa3828a54  sb          $v0, -0x75AC($gp)
    ctx->pc = 0x34e80cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937172), (uint8_t)GPR_U32(ctx, 2));
    // 0x34e810: 0x9082002e  lbu         $v0, 0x2E($a0)
    ctx->pc = 0x34e810u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 46)));
    // 0x34e814: 0xa3828a55  sb          $v0, -0x75AB($gp)
    ctx->pc = 0x34e814u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937173), (uint8_t)GPR_U32(ctx, 2));
    // 0x34e818: 0x9082002a  lbu         $v0, 0x2A($a0)
    ctx->pc = 0x34e818u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 42)));
    // 0x34e81c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x34e81cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x34e820: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x34E820u;
    {
        const bool branch_taken_0x34e820 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34E824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E820u;
        // 0x34e824: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34e820) {
            ctx->pc = 0x34E838u;
            goto label_34e838;
        }
    }
    ctx->pc = 0x34E828u;
    // 0x34e828: 0xc0d39d8  jal         func_34E760
    ctx->pc = 0x34E828u;
    SET_GPR_U32(ctx, 31, 0x34E830u);
    ctx->pc = 0x34E760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34E760u, 0x34E828u, 0x34E830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E830u;
label_34e830:
    // 0x34e830: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x34E830u;
    {
        const bool branch_taken_0x34e830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34e830) {
            ctx->pc = 0x34E848u;
            goto label_34e848;
        }
    }
    ctx->pc = 0x34E838u;
label_34e838:
    // 0x34e838: 0x9065002f  lbu         $a1, 0x2F($v1)
    ctx->pc = 0x34e838u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 47)));
    // 0x34e83c: 0xc054048  jal         func_150120
    ctx->pc = 0x34E83Cu;
    SET_GPR_U32(ctx, 31, 0x34E844u);
    ctx->pc = 0x34E840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34E83Cu;
    // 0x34e840: 0x94640030  lhu         $a0, 0x30($v1) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150120u, 0x34E83Cu, 0x34E844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E844u;
label_34e844:
    // 0x34e844: 0x0  nop
    ctx->pc = 0x34e844u;
    // NOP
label_34e848:
    // 0x34e848: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x34e848u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34e84c: 0x3e00008  jr          $ra
    ctx->pc = 0x34E84Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34E850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E84Cu;
        // 0x34e850: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34E84Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34E854u;
}
