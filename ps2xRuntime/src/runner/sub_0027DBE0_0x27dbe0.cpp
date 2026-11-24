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

// Function: sub_0027DBE0
// Address: 0x27dbe0 - 0x27dc30
void sub_0027DBE0_0x27dbe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027DBE0_0x27dbe0");
#endif

    switch (ctx->pc) {
        case 0x27dbfcu: goto label_27dbfc;
        case 0x27dc04u: goto label_27dc04;
        case 0x27dc20u: goto label_27dc20;
        default: break;
    }

    ctx->pc = 0x27dbe0u;

    // 0x27dbe0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x27dbe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x27dbe4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x27dbe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x27dbe8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x27dbe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x27dbec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x27dbecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x27dbf0: 0x84e500c2  lh          $a1, 0xC2($a3)
    ctx->pc = 0x27dbf0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 194)));
    // 0x27dbf4: 0xc096e34  jal         func_25B8D0
    ctx->pc = 0x27DBF4u;
    SET_GPR_U32(ctx, 31, 0x27DBFCu);
    ctx->pc = 0x27DBF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27DBF4u;
    // 0x27dbf8: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B8D0u, 0x27DBF4u, 0x27DBFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DBFCu;
label_27dbfc:
    // 0x27dbfc: 0xc096fb8  jal         func_25BEE0
    ctx->pc = 0x27DBFCu;
    SET_GPR_U32(ctx, 31, 0x27DC04u);
    ctx->pc = 0x27DC00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27DBFCu;
    // 0x27dc00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25BEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BEE0u, 0x27DBFCu, 0x27DC04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DC04u;
label_27dc04:
    // 0x27dc04: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x27dc04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x27dc08: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x27dc08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27dc0c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x27dc0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27dc10: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x27dc10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x27dc14: 0x8c620094  lw          $v0, 0x94($v1)
    ctx->pc = 0x27dc14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
    // 0x27dc18: 0xc0a8ff8  jal         func_2A3FE0
    ctx->pc = 0x27DC18u;
    SET_GPR_U32(ctx, 31, 0x27DC20u);
    ctx->pc = 0x27DC1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27DC18u;
    // 0x27dc1c: 0x24460030  addiu       $a2, $v0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3FE0u, 0x27DC18u, 0x27DC20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DC20u;
label_27dc20:
    // 0x27dc20: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x27dc20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27dc24: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27dc24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27dc28: 0x3e00008  jr          $ra
    ctx->pc = 0x27DC28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27DC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DC28u;
        // 0x27dc2c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27DC28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27DC30u;
}
