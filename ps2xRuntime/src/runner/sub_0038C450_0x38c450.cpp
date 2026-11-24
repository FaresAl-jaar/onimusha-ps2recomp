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

// Function: sub_0038C450
// Address: 0x38c450 - 0x38c4b4
void sub_0038C450_0x38c450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038C450_0x38c450");
#endif

    switch (ctx->pc) {
        case 0x38c478u: goto label_38c478;
        case 0x38c484u: goto label_38c484;
        case 0x38c4a4u: goto label_38c4a4;
        default: break;
    }

    ctx->pc = 0x38c450u;

    // 0x38c450: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x38c450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x38c454: 0x3c050039  lui         $a1, 0x39
    ctx->pc = 0x38c454u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)57 << 16));
    // 0x38c458: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x38c458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x38c45c: 0x24a5c4c0  addiu       $a1, $a1, -0x3B40
    ctx->pc = 0x38c45cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952128));
    // 0x38c460: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x38c460u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x38c464: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x38c464u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38c468: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x38c468u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x38c46c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x38c46cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38c470: 0xc0d0ac4  jal         func_342B10
    ctx->pc = 0x38C470u;
    SET_GPR_U32(ctx, 31, 0x38C478u);
    ctx->pc = 0x38C474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38C470u;
    // 0x38c474: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342B10u, 0x38C470u, 0x38C478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38C478u;
label_38c478:
    // 0x38c478: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38c478u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38c47c: 0xc0d0548  jal         func_341520
    ctx->pc = 0x38C47Cu;
    SET_GPR_U32(ctx, 31, 0x38C484u);
    ctx->pc = 0x38C480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38C47Cu;
    // 0x38c480: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341520u, 0x38C47Cu, 0x38C484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38C484u;
label_38c484:
    // 0x38c484: 0x8e020144  lw          $v0, 0x144($s0)
    ctx->pc = 0x38c484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 324)));
    // 0x38c488: 0x3c04008f  lui         $a0, 0x8F
    ctx->pc = 0x38c488u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)143 << 16));
    // 0x38c48c: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x38c48cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x38c490: 0x2484ea40  addiu       $a0, $a0, -0x15C0
    ctx->pc = 0x38c490u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961728));
    // 0x38c494: 0x240600d0  addiu       $a2, $zero, 0xD0
    ctx->pc = 0x38c494u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
    // 0x38c498: 0x27a80020  addiu       $t0, $sp, 0x20
    ctx->pc = 0x38c498u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x38c49c: 0xc0c8624  jal         func_321890
    ctx->pc = 0x38C49Cu;
    SET_GPR_U32(ctx, 31, 0x38C4A4u);
    ctx->pc = 0x38C4A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38C49Cu;
    // 0x38c4a0: 0x24470110  addiu       $a3, $v0, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321890u, 0x38C49Cu, 0x38C4A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38C4A4u;
label_38c4a4:
    // 0x38c4a4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x38c4a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38c4a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x38c4a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38c4ac: 0x3e00008  jr          $ra
    ctx->pc = 0x38C4ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38C4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C4ACu;
        // 0x38c4b0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38C4ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38C4B4u;
}
