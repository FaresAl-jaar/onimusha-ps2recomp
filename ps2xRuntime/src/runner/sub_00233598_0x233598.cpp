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

// Function: sub_00233598
// Address: 0x233598 - 0x2335f0
void sub_00233598_0x233598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00233598_0x233598");
#endif

    switch (ctx->pc) {
        case 0x2335c0u: goto label_2335c0;
        case 0x2335c8u: goto label_2335c8;
        default: break;
    }

    ctx->pc = 0x233598u;

    // 0x233598: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x233598u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23359c: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x23359cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x2335a0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2335a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2335a4: 0x2442fcc8  addiu       $v0, $v0, -0x338
    ctx->pc = 0x2335a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966472));
    // 0x2335a8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2335a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2335ac: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x2335acu;
    SET_GPR_U64(ctx, 3, FAST_READ64(0x4BFCC8u));
    // 0x2335b0: 0x54600008  bnel        $v1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2335B0u;
    {
        const bool branch_taken_0x2335b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2335b0) {
            ctx->pc = 0x2335B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2335B0u;
            // 0x2335b4: 0x3c02004c  lui         $v0, 0x4C (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2335D4u;
            goto label_2335d4;
        }
    }
    ctx->pc = 0x2335B8u;
    // 0x2335b8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2335b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2335bc: 0x0  nop
    ctx->pc = 0x2335bcu;
    // NOP
label_2335c0:
    // 0x2335c0: 0xc08cd60  jal         func_233580
    ctx->pc = 0x2335C0u;
    SET_GPR_U32(ctx, 31, 0x2335C8u);
    ctx->pc = 0x233580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233580u, 0x2335C0u, 0x2335C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2335C8u;
label_2335c8:
    // 0x2335c8: 0xde020000  ld          $v0, 0x0($s0)
    ctx->pc = 0x2335c8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2335cc: 0x1040fffc  beqz        $v0, . + 4 + (-0x4 << 2)
    ctx->pc = 0x2335CCu;
    {
        const bool branch_taken_0x2335cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2335D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2335CCu;
        // 0x2335d0: 0x3c02004c  lui         $v0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2335cc) {
            ctx->pc = 0x2335C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2335c0;
        }
    }
    ctx->pc = 0x2335D4u;
label_2335d4:
    // 0x2335d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2335d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2335d8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2335d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2335dc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2335dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2335e0: 0x2442fcd0  addiu       $v0, $v0, -0x330
    ctx->pc = 0x2335e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966480));
    // 0x2335e4: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x2335e4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x2335e8: 0x8043788  j           func_10DE20
    ctx->pc = 0x2335E8u;
    ctx->pc = 0x2335ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2335E8u;
    // 0x2335ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DE20u;
    sub_0010DE20_0x10de20(rdram, ctx, runtime); return;
    ctx->pc = 0x2335F0u;
}
