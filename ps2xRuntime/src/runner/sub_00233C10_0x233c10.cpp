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

// Function: sub_00233C10
// Address: 0x233c10 - 0x233cb4
void sub_00233C10_0x233c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00233C10_0x233c10");
#endif

    switch (ctx->pc) {
        case 0x233c5cu: goto label_233c5c;
        case 0x233c78u: goto label_233c78;
        case 0x233c90u: goto label_233c90;
        case 0x233ca4u: goto label_233ca4;
        default: break;
    }

    ctx->pc = 0x233c10u;

    // 0x233c10: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x233c10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x233c14: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x233c14u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x233c18: 0x8c477548  lw          $a3, 0x7548($v0)
    ctx->pc = 0x233c18u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x4C7548u));
    // 0x233c1c: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x233c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x233c20: 0x3c050023  lui         $a1, 0x23
    ctx->pc = 0x233c20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)35 << 16));
    // 0x233c24: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x233c24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
    // 0x233c28: 0x24a53598  addiu       $a1, $a1, 0x3598
    ctx->pc = 0x233c28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13720));
    // 0x233c2c: 0x2463fd40  addiu       $v1, $v1, -0x2C0
    ctx->pc = 0x233c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966592));
    // 0x233c30: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x233c30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233c34: 0x24060800  addiu       $a2, $zero, 0x800
    ctx->pc = 0x233c34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x233c38: 0x24423370  addiu       $v0, $v0, 0x3370
    ctx->pc = 0x233c38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13168));
    // 0x233c3c: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x233c3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x233c40: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x233c40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x233c44: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x233c44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x233c48: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x233c48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x233c4c: 0xafa6000c  sw          $a2, 0xC($sp)
    ctx->pc = 0x233c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 6));
    // 0x233c50: 0xafa70014  sw          $a3, 0x14($sp)
    ctx->pc = 0x233c50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 7));
    // 0x233c54: 0xc043778  jal         func_10DDE0
    ctx->pc = 0x233C54u;
    SET_GPR_U32(ctx, 31, 0x233C5Cu);
    ctx->pc = 0x233C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233C54u;
    // 0x233c58: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DDE0u, 0x233C54u, 0x233C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233C5Cu;
label_233c5c:
    // 0x233c5c: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x233c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
    // 0x233c60: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x233c60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233c64: 0x2470fca8  addiu       $s0, $v1, -0x358
    ctx->pc = 0x233c64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966440));
    // 0x233c68: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x233c68u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x4BFCA8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4BFCA8u, _value); } while (0);
    // 0x233c6c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x233c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4BFCA8u));
    // 0x233c70: 0xc043c48  jal         func_10F120
    ctx->pc = 0x233C70u;
    SET_GPR_U32(ctx, 31, 0x233C78u);
    ctx->pc = 0x233C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233C70u;
    // 0x233c74: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F120u, 0x233C70u, 0x233C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233C78u;
label_233c78:
    // 0x233c78: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x233c78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x233c7c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x233C7Cu;
    {
        const bool branch_taken_0x233c7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x233C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233C7Cu;
        // 0x233c80: 0x3c02004c  lui         $v0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233c7c) {
            ctx->pc = 0x233C98u;
            goto label_233c98;
        }
    }
    ctx->pc = 0x233C84u;
    // 0x233c84: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x233c84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x233c88: 0xc08ceec  jal         func_233BB0
    ctx->pc = 0x233C88u;
    SET_GPR_U32(ctx, 31, 0x233C90u);
    ctx->pc = 0x233BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233BB0u, 0x233C88u, 0x233C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233C90u;
label_233c90:
    // 0x233c90: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x233c90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x233c94: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x233c94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
label_233c98:
    // 0x233c98: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x233c98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x233c9c: 0xc04379c  jal         func_10DE70
    ctx->pc = 0x233C9Cu;
    SET_GPR_U32(ctx, 31, 0x233CA4u);
    ctx->pc = 0x233CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233C9Cu;
    // 0x233ca0: 0x8c45fc24  lw          $a1, -0x3DC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294966308)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DE70u, 0x233C9Cu, 0x233CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233CA4u;
label_233ca4:
    // 0x233ca4: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x233ca4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x233ca8: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x233ca8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x233cac: 0x3e00008  jr          $ra
    ctx->pc = 0x233CACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x233CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233CACu;
        // 0x233cb0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x233CACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x233CB4u;
}
