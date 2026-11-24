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

// Function: sub_001A43E0
// Address: 0x1a43e0 - 0x1a4454
void sub_001A43E0_0x1a43e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A43E0_0x1a43e0");
#endif

    switch (ctx->pc) {
        case 0x1a4410u: goto label_1a4410;
        case 0x1a4420u: goto label_1a4420;
        case 0x1a4428u: goto label_1a4428;
        default: break;
    }

    ctx->pc = 0x1a43e0u;

    // 0x1a43e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a43e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a43e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a43e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a43e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a43e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a43ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a43ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a43f0: 0x8f838798  lw          $v1, -0x7868($gp)
    ctx->pc = 0x1a43f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936472)));
    // 0x1a43f4: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1A43F4u;
    {
        const bool branch_taken_0x1a43f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a43f4) {
            ctx->pc = 0x1A4440u;
            goto label_1a4440;
        }
    }
    ctx->pc = 0x1A43FCu;
    // 0x1a43fc: 0x8f858794  lw          $a1, -0x786C($gp)
    ctx->pc = 0x1a43fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936468)));
    // 0x1a4400: 0x10a0000f  beqz        $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x1A4400u;
    {
        const bool branch_taken_0x1a4400 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4400u;
        // 0x1a4404: 0x3c04008d  lui         $a0, 0x8D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4400) {
            ctx->pc = 0x1A4440u;
            goto label_1a4440;
        }
    }
    ctx->pc = 0x1A4408u;
    // 0x1a4408: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x1A4408u;
    SET_GPR_U32(ctx, 31, 0x1A4410u);
    ctx->pc = 0x1A440Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4408u;
    // 0x1a440c: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x1A4408u, 0x1A4410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4410u;
label_1a4410:
    // 0x1a4410: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1A4410u;
    {
        const bool branch_taken_0x1a4410 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4410u;
        // 0x1a4414: 0x3c100084  lui         $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)132 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4410) {
            ctx->pc = 0x1A4440u;
            goto label_1a4440;
        }
    }
    ctx->pc = 0x1A4418u;
    // 0x1a4418: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1a4418u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a441c: 0x26103c50  addiu       $s0, $s0, 0x3C50
    ctx->pc = 0x1a441cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 15440));
label_1a4420:
    // 0x1a4420: 0xc068df8  jal         func_1A37E0
    ctx->pc = 0x1A4420u;
    SET_GPR_U32(ctx, 31, 0x1A4428u);
    ctx->pc = 0x1A4424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4420u;
    // 0x1a4424: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A37E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A37E0u, 0x1A4420u, 0x1A4428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4428u;
label_1a4428:
    // 0x1a4428: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1a4428u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1a442c: 0x261002d0  addiu       $s0, $s0, 0x2D0
    ctx->pc = 0x1a442cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 720));
    // 0x1a4430: 0x2e230040  sltiu       $v1, $s1, 0x40
    ctx->pc = 0x1a4430u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
    // 0x1a4434: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1A4434u;
    {
        const bool branch_taken_0x1a4434 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a4434) {
            ctx->pc = 0x1A4420u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a4420;
        }
    }
    ctx->pc = 0x1A443Cu;
    // 0x1a443c: 0x0  nop
    ctx->pc = 0x1a443cu;
    // NOP
label_1a4440:
    // 0x1a4440: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a4440u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a4444: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a4444u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a4448: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a4448u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a444c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A444Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A4450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A444Cu;
        // 0x1a4450: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A444Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4454u;
}
