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

// Function: sub_00234970
// Address: 0x234970 - 0x2349f8
void sub_00234970_0x234970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00234970_0x234970");
#endif

    switch (ctx->pc) {
        case 0x23498cu: goto label_23498c;
        case 0x2349a0u: goto label_2349a0;
        case 0x2349a8u: goto label_2349a8;
        case 0x2349c4u: goto label_2349c4;
        default: break;
    }

    ctx->pc = 0x234970u;

    // 0x234970: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x234970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x234974: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x234974u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x234978: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x234978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23497c: 0x2450fcbc  addiu       $s0, $v0, -0x344
    ctx->pc = 0x23497cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966460));
    // 0x234980: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x234980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x234984: 0xc08ced2  jal         func_233B48
    ctx->pc = 0x234984u;
    SET_GPR_U32(ctx, 31, 0x23498Cu);
    ctx->pc = 0x234988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234984u;
    // 0x234988: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x233B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233B48u, 0x234984u, 0x23498Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23498Cu;
label_23498c:
    // 0x23498c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x23498cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x234990: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x234990u;
    {
        const bool branch_taken_0x234990 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x234990) {
            ctx->pc = 0x2349A0u;
            goto label_2349a0;
        }
    }
    ctx->pc = 0x234998u;
    // 0x234998: 0xc08ceb8  jal         func_233AE0
    ctx->pc = 0x234998u;
    SET_GPR_U32(ctx, 31, 0x2349A0u);
    ctx->pc = 0x23499Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234998u;
    // 0x23499c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x233AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233AE0u, 0x234998u, 0x2349A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2349A0u;
label_2349a0:
    // 0x2349a0: 0xc08cffa  jal         func_233FE8
    ctx->pc = 0x2349A0u;
    SET_GPR_U32(ctx, 31, 0x2349A8u);
    ctx->pc = 0x233FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233FE8u, 0x2349A0u, 0x2349A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2349A8u;
label_2349a8:
    // 0x2349a8: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x2349a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
    // 0x2349ac: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2349acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2349b0: 0x1444000d  bne         $v0, $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x2349B0u;
    {
        const bool branch_taken_0x2349b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x2349B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2349B0u;
        // 0x2349b4: 0x2470fcc0  addiu       $s0, $v1, -0x340 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966464));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2349b0) {
            ctx->pc = 0x2349E8u;
            goto label_2349e8;
        }
    }
    ctx->pc = 0x2349B8u;
    // 0x2349b8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2349b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2349bc: 0xc08ced2  jal         func_233B48
    ctx->pc = 0x2349BCu;
    SET_GPR_U32(ctx, 31, 0x2349C4u);
    ctx->pc = 0x233B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233B48u, 0x2349BCu, 0x2349C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2349C4u;
label_2349c4:
    // 0x2349c4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2349c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2349c8: 0x54430008  bnel        $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2349C8u;
    {
        const bool branch_taken_0x2349c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2349c8) {
            ctx->pc = 0x2349CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2349C8u;
            // 0x2349cc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2349ECu;
            goto label_2349ec;
        }
    }
    ctx->pc = 0x2349D0u;
    // 0x2349d0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2349d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2349d4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2349d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2349d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2349d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2349dc: 0x808ceb8  j           func_233AE0
    ctx->pc = 0x2349DCu;
    ctx->pc = 0x2349E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2349DCu;
    // 0x2349e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x233AE0u;
    sub_00233AE0_0x233ae0(rdram, ctx, runtime); return;
    ctx->pc = 0x2349E4u;
    // 0x2349e4: 0x0  nop
    ctx->pc = 0x2349e4u;
    // NOP
label_2349e8:
    // 0x2349e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2349e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2349ec:
    // 0x2349ec: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2349ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2349f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2349F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2349F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2349F0u;
        // 0x2349f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2349F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2349F8u;
}
