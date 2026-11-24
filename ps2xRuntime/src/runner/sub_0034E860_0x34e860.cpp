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

// Function: sub_0034E860
// Address: 0x34e860 - 0x34e8cc
void sub_0034E860_0x34e860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034E860_0x34e860");
#endif

    switch (ctx->pc) {
        case 0x34e8a0u: goto label_34e8a0;
        case 0x34e8c0u: goto label_34e8c0;
        default: break;
    }

    ctx->pc = 0x34e860u;

    // 0x34e860: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x34e860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x34e864: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x34e864u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34e868: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x34e868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x34e86c: 0x9085002d  lbu         $a1, 0x2D($a0)
    ctx->pc = 0x34e86cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 45)));
    // 0x34e870: 0xa3858a54  sb          $a1, -0x75AC($gp)
    ctx->pc = 0x34e870u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937172), (uint8_t)GPR_U32(ctx, 5));
    // 0x34e874: 0x9085002e  lbu         $a1, 0x2E($a0)
    ctx->pc = 0x34e874u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 46)));
    // 0x34e878: 0xa3858a55  sb          $a1, -0x75AB($gp)
    ctx->pc = 0x34e878u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937173), (uint8_t)GPR_U32(ctx, 5));
    // 0x34e87c: 0x90850028  lbu         $a1, 0x28($a0)
    ctx->pc = 0x34e87cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x34e880: 0x14a30009  bne         $a1, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x34E880u;
    {
        const bool branch_taken_0x34e880 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x34e880) {
            ctx->pc = 0x34E8A8u;
            goto label_34e8a8;
        }
    }
    ctx->pc = 0x34E888u;
    // 0x34e888: 0x9083002a  lbu         $v1, 0x2A($a0)
    ctx->pc = 0x34e888u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 42)));
    // 0x34e88c: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x34e88cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x34e890: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x34E890u;
    {
        const bool branch_taken_0x34e890 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x34e890) {
            ctx->pc = 0x34E8A8u;
            goto label_34e8a8;
        }
    }
    ctx->pc = 0x34E898u;
    // 0x34e898: 0xc0d39ec  jal         func_34E7B0
    ctx->pc = 0x34E898u;
    SET_GPR_U32(ctx, 31, 0x34E8A0u);
    ctx->pc = 0x34E7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34E7B0u, 0x34E898u, 0x34E8A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E8A0u;
label_34e8a0:
    // 0x34e8a0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x34E8A0u;
    {
        const bool branch_taken_0x34e8a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34e8a0) {
            ctx->pc = 0x34E8C0u;
            goto label_34e8c0;
        }
    }
    ctx->pc = 0x34E8A8u;
label_34e8a8:
    // 0x34e8a8: 0x9083002a  lbu         $v1, 0x2A($a0)
    ctx->pc = 0x34e8a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 42)));
    // 0x34e8ac: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x34e8acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x34e8b0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x34E8B0u;
    {
        const bool branch_taken_0x34e8b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x34e8b0) {
            ctx->pc = 0x34E8C0u;
            goto label_34e8c0;
        }
    }
    ctx->pc = 0x34E8B8u;
    // 0x34e8b8: 0xc0d39d8  jal         func_34E760
    ctx->pc = 0x34E8B8u;
    SET_GPR_U32(ctx, 31, 0x34E8C0u);
    ctx->pc = 0x34E760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34E760u, 0x34E8B8u, 0x34E8C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E8C0u;
label_34e8c0:
    // 0x34e8c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x34e8c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34e8c4: 0x3e00008  jr          $ra
    ctx->pc = 0x34E8C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34E8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E8C4u;
        // 0x34e8c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34E8C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34E8CCu;
}
