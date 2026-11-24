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

// Function: sub_00233DF8
// Address: 0x233df8 - 0x233e80
void sub_00233DF8_0x233df8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00233DF8_0x233df8");
#endif

    switch (ctx->pc) {
        case 0x233e4cu: goto label_233e4c;
        case 0x233e60u: goto label_233e60;
        case 0x233e70u: goto label_233e70;
        default: break;
    }

    ctx->pc = 0x233df8u;

    // 0x233df8: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x233df8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x233dfc: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x233dfcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x233e00: 0x8c477548  lw          $a3, 0x7548($v0)
    ctx->pc = 0x233e00u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x4C7548u));
    // 0x233e04: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x233e04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x233e08: 0x3c050023  lui         $a1, 0x23
    ctx->pc = 0x233e08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)35 << 16));
    // 0x233e0c: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x233e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
    // 0x233e10: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x233e10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x233e14: 0x3c10004c  lui         $s0, 0x4C
    ctx->pc = 0x233e14u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)76 << 16));
    // 0x233e18: 0x24632540  addiu       $v1, $v1, 0x2540
    ctx->pc = 0x233e18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9536));
    // 0x233e1c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x233e1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233e20: 0x24061000  addiu       $a2, $zero, 0x1000
    ctx->pc = 0x233e20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x233e24: 0x24a53790  addiu       $a1, $a1, 0x3790
    ctx->pc = 0x233e24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14224));
    // 0x233e28: 0x24423370  addiu       $v0, $v0, 0x3370
    ctx->pc = 0x233e28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13168));
    // 0x233e2c: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x233e2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x233e30: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x233e30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x233e34: 0x2610fcb4  addiu       $s0, $s0, -0x34C
    ctx->pc = 0x233e34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294966452));
    // 0x233e38: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x233e38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x233e3c: 0xafa6000c  sw          $a2, 0xC($sp)
    ctx->pc = 0x233e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 6));
    // 0x233e40: 0xafa70014  sw          $a3, 0x14($sp)
    ctx->pc = 0x233e40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 7));
    // 0x233e44: 0xc043778  jal         func_10DDE0
    ctx->pc = 0x233E44u;
    SET_GPR_U32(ctx, 31, 0x233E4Cu);
    ctx->pc = 0x233E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233E44u;
    // 0x233e48: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DDE0u, 0x233E44u, 0x233E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233E4Cu;
label_233e4c:
    // 0x233e4c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x233e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x233e50: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x233e50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233e54: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x233e54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x233e58: 0xc043c48  jal         func_10F120
    ctx->pc = 0x233E58u;
    SET_GPR_U32(ctx, 31, 0x233E60u);
    ctx->pc = 0x233E5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233E58u;
    // 0x233e5c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F120u, 0x233E58u, 0x233E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233E60u;
label_233e60:
    // 0x233e60: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x233e60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x233e64: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x233e64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x233e68: 0xc04379c  jal         func_10DE70
    ctx->pc = 0x233E68u;
    SET_GPR_U32(ctx, 31, 0x233E70u);
    ctx->pc = 0x233E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233E68u;
    // 0x233e6c: 0x8c45fc30  lw          $a1, -0x3D0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294966320)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DE70u, 0x233E68u, 0x233E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233E70u;
label_233e70:
    // 0x233e70: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x233e70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x233e74: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x233e74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x233e78: 0x3e00008  jr          $ra
    ctx->pc = 0x233E78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x233E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233E78u;
        // 0x233e7c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x233E78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x233E80u;
}
