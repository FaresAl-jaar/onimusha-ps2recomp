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

// Function: sub_00203FA8
// Address: 0x203fa8 - 0x203fdc
void sub_00203FA8_0x203fa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00203FA8_0x203fa8");
#endif

    switch (ctx->pc) {
        case 0x203fa8u: goto label_203fa8;
        case 0x203facu: goto label_203fac;
        case 0x203fb0u: goto label_203fb0;
        case 0x203fb4u: goto label_203fb4;
        case 0x203fb8u: goto label_203fb8;
        case 0x203fbcu: goto label_203fbc;
        case 0x203fc0u: goto label_203fc0;
        case 0x203fc4u: goto label_203fc4;
        case 0x203fc8u: goto label_203fc8;
        case 0x203fccu: goto label_203fcc;
        case 0x203fd0u: goto label_203fd0;
        case 0x203fd4u: goto label_203fd4;
        case 0x203fd8u: goto label_203fd8;
        default: break;
    }

    ctx->pc = 0x203fa8u;

label_203fa8:
    // 0x203fa8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x203fa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_203fac:
    // 0x203fac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x203facu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_203fb0:
    // 0x203fb0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x203fb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_203fb4:
    // 0x203fb4: 0xc081544  jal         func_205510
label_203fb8:
    if (ctx->pc == 0x203FB8u) {
        ctx->pc = 0x203FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203FB4u;
        // 0x203fb8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203FBCu;
        goto label_203fbc;
    }
    ctx->pc = 0x203FB4u;
    SET_GPR_U32(ctx, 31, 0x203FBCu);
    ctx->pc = 0x203FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203FB4u;
    // 0x203fb8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205510u, 0x203FB4u, 0x203FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203FBCu;
label_203fbc:
    // 0x203fbc: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x203fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_203fc0:
    // 0x203fc0: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x203fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_203fc4:
    // 0x203fc4: 0x60f809  jalr        $v1
label_203fc8:
    if (ctx->pc == 0x203FC8u) {
        ctx->pc = 0x203FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203FC4u;
        // 0x203fc8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203FCCu;
        goto label_203fcc;
    }
    ctx->pc = 0x203FC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x203FCCu);
        ctx->pc = 0x203FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203FC4u;
        // 0x203fc8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x203FC4u, 0x203FCCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x203FCCu;
label_203fcc:
    // 0x203fcc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x203fccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_203fd0:
    // 0x203fd0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x203fd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_203fd4:
    // 0x203fd4: 0x3e00008  jr          $ra
label_203fd8:
    if (ctx->pc == 0x203FD8u) {
        ctx->pc = 0x203FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203FD4u;
        // 0x203fd8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203FDCu;
        goto label_fallthrough_0x203fd4;
    }
    ctx->pc = 0x203FD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x203FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203FD4u;
        // 0x203fd8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x203FD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x203fd4:
    ctx->pc = 0x203FDCu;
}
