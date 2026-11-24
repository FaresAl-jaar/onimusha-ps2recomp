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

// Function: sub_0027DC80
// Address: 0x27dc80 - 0x27dccc
void sub_0027DC80_0x27dc80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027DC80_0x27dc80");
#endif

    switch (ctx->pc) {
        case 0x27dc9cu: goto label_27dc9c;
        case 0x27dca4u: goto label_27dca4;
        case 0x27dcbcu: goto label_27dcbc;
        default: break;
    }

    ctx->pc = 0x27dc80u;

    // 0x27dc80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x27dc80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x27dc84: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x27dc84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x27dc88: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x27dc88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x27dc8c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x27dc8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x27dc90: 0x84e500c2  lh          $a1, 0xC2($a3)
    ctx->pc = 0x27dc90u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 194)));
    // 0x27dc94: 0xc096e34  jal         func_25B8D0
    ctx->pc = 0x27DC94u;
    SET_GPR_U32(ctx, 31, 0x27DC9Cu);
    ctx->pc = 0x27DC98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27DC94u;
    // 0x27dc98: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B8D0u, 0x27DC94u, 0x27DC9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DC9Cu;
label_27dc9c:
    // 0x27dc9c: 0xc096fb8  jal         func_25BEE0
    ctx->pc = 0x27DC9Cu;
    SET_GPR_U32(ctx, 31, 0x27DCA4u);
    ctx->pc = 0x27DCA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27DC9Cu;
    // 0x27dca0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25BEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BEE0u, 0x27DC9Cu, 0x27DCA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DCA4u;
label_27dca4:
    // 0x27dca4: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x27dca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x27dca8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x27dca8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27dcac: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x27dcacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27dcb0: 0x8c620094  lw          $v0, 0x94($v1)
    ctx->pc = 0x27dcb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
    // 0x27dcb4: 0xc0a9048  jal         func_2A4120
    ctx->pc = 0x27DCB4u;
    SET_GPR_U32(ctx, 31, 0x27DCBCu);
    ctx->pc = 0x27DCB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27DCB4u;
    // 0x27dcb8: 0x24460030  addiu       $a2, $v0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A4120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A4120u, 0x27DCB4u, 0x27DCBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DCBCu;
label_27dcbc:
    // 0x27dcbc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x27dcbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27dcc0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27dcc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27dcc4: 0x3e00008  jr          $ra
    ctx->pc = 0x27DCC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27DCC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DCC4u;
        // 0x27dcc8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27DCC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27DCCCu;
}
