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

// Function: sub_00233E80
// Address: 0x233e80 - 0x233f18
void sub_00233E80_0x233e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00233E80_0x233e80");
#endif

    switch (ctx->pc) {
        case 0x233ed4u: goto label_233ed4;
        case 0x233ee8u: goto label_233ee8;
        case 0x233ef8u: goto label_233ef8;
        case 0x233f04u: goto label_233f04;
        default: break;
    }

    ctx->pc = 0x233e80u;

    // 0x233e80: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x233e80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x233e84: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x233e84u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x233e88: 0x8c477548  lw          $a3, 0x7548($v0)
    ctx->pc = 0x233e88u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x4C7548u));
    // 0x233e8c: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x233e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x233e90: 0x3c050023  lui         $a1, 0x23
    ctx->pc = 0x233e90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)35 << 16));
    // 0x233e94: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x233e94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
    // 0x233e98: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x233e98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x233e9c: 0x3c10004c  lui         $s0, 0x4C
    ctx->pc = 0x233e9cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)76 << 16));
    // 0x233ea0: 0x24633540  addiu       $v1, $v1, 0x3540
    ctx->pc = 0x233ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13632));
    // 0x233ea4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x233ea4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233ea8: 0x24062000  addiu       $a2, $zero, 0x2000
    ctx->pc = 0x233ea8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x233eac: 0x24a53880  addiu       $a1, $a1, 0x3880
    ctx->pc = 0x233eacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14464));
    // 0x233eb0: 0x24423370  addiu       $v0, $v0, 0x3370
    ctx->pc = 0x233eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13168));
    // 0x233eb4: 0x2610fcbc  addiu       $s0, $s0, -0x344
    ctx->pc = 0x233eb4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294966460));
    // 0x233eb8: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x233eb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x233ebc: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x233ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x233ec0: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x233ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x233ec4: 0xafa6000c  sw          $a2, 0xC($sp)
    ctx->pc = 0x233ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 6));
    // 0x233ec8: 0xafa70014  sw          $a3, 0x14($sp)
    ctx->pc = 0x233ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 7));
    // 0x233ecc: 0xc043778  jal         func_10DDE0
    ctx->pc = 0x233ECCu;
    SET_GPR_U32(ctx, 31, 0x233ED4u);
    ctx->pc = 0x233ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233ECCu;
    // 0x233ed0: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DDE0u, 0x233ECCu, 0x233ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233ED4u;
label_233ed4:
    // 0x233ed4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x233ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x233ed8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x233ed8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233edc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x233edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x233ee0: 0xc043c48  jal         func_10F120
    ctx->pc = 0x233EE0u;
    SET_GPR_U32(ctx, 31, 0x233EE8u);
    ctx->pc = 0x233EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233EE0u;
    // 0x233ee4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F120u, 0x233EE0u, 0x233EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233EE8u;
label_233ee8:
    // 0x233ee8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x233ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x233eec: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x233eecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x233ef0: 0xc04379c  jal         func_10DE70
    ctx->pc = 0x233EF0u;
    SET_GPR_U32(ctx, 31, 0x233EF8u);
    ctx->pc = 0x233EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233EF0u;
    // 0x233ef4: 0x8c45fc38  lw          $a1, -0x3C8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294966328)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DE70u, 0x233EF0u, 0x233EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233EF8u;
label_233ef8:
    // 0x233ef8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x233ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x233efc: 0xc08ceec  jal         func_233BB0
    ctx->pc = 0x233EFCu;
    SET_GPR_U32(ctx, 31, 0x233F04u);
    ctx->pc = 0x233BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233BB0u, 0x233EFCu, 0x233F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233F04u;
label_233f04:
    // 0x233f04: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x233f04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x233f08: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x233f08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x233f0c: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x233f0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x233f10: 0x3e00008  jr          $ra
    ctx->pc = 0x233F10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x233F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233F10u;
        // 0x233f14: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x233F10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x233F18u;
}
