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

// Function: sub_002333D8
// Address: 0x2333d8 - 0x233448
void sub_002333D8_0x2333d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002333D8_0x2333d8");
#endif

    switch (ctx->pc) {
        case 0x233410u: goto label_233410;
        case 0x233418u: goto label_233418;
        case 0x233428u: goto label_233428;
        default: break;
    }

    ctx->pc = 0x2333d8u;

    // 0x2333d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2333d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2333dc: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x2333dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
    // 0x2333e0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2333e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2333e4: 0x2471fc50  addiu       $s1, $v1, -0x3B0
    ctx->pc = 0x2333e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966352));
    // 0x2333e8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2333e8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4BFC50u));
    // 0x2333ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2333ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2333f0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2333f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2333f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2333f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2333f8: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2333F8u;
    {
        const bool branch_taken_0x2333f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2333FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2333F8u;
        // 0x2333fc: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2333f8) {
            ctx->pc = 0x233428u;
            goto label_233428;
        }
    }
    ctx->pc = 0x233400u;
    // 0x233400: 0x3c10004c  lui         $s0, 0x4C
    ctx->pc = 0x233400u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)76 << 16));
    // 0x233404: 0x2610fca8  addiu       $s0, $s0, -0x358
    ctx->pc = 0x233404u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294966440));
    // 0x233408: 0xc08ceec  jal         func_233BB0
    ctx->pc = 0x233408u;
    SET_GPR_U32(ctx, 31, 0x233410u);
    ctx->pc = 0x23340Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233408u;
    // 0x23340c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x233BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233BB0u, 0x233408u, 0x233410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233410u;
label_233410:
    // 0x233410: 0xc0437b4  jal         func_10DED0
    ctx->pc = 0x233410u;
    SET_GPR_U32(ctx, 31, 0x233418u);
    ctx->pc = 0x233414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233410u;
    // 0x233414: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DED0u, 0x233410u, 0x233418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233418u;
label_233418:
    // 0x233418: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x233418u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
    // 0x23341c: 0x8c657540  lw          $a1, 0x7540($v1)
    ctx->pc = 0x23341cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x4C7540u));
    // 0x233420: 0xc04379c  jal         func_10DE70
    ctx->pc = 0x233420u;
    SET_GPR_U32(ctx, 31, 0x233428u);
    ctx->pc = 0x233424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233420u;
    // 0x233424: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DE70u, 0x233420u, 0x233428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233428u;
label_233428:
    // 0x233428: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x233428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x23342c: 0x4420001  bltzl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x23342Cu;
    {
        const bool branch_taken_0x23342c = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x23342c) {
            ctx->pc = 0x233430u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23342Cu;
            // 0x233430: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x233434u;
            goto label_233434;
        }
    }
    ctx->pc = 0x233434u;
label_233434:
    // 0x233434: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x233434u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x233438: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x233438u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23343c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x23343cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x233440: 0x3e00008  jr          $ra
    ctx->pc = 0x233440u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x233444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233440u;
        // 0x233444: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x233440u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x233448u;
}
