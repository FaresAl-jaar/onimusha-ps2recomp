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

// Function: sub_003A1170
// Address: 0x3a1170 - 0x3a11cc
void sub_003A1170_0x3a1170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A1170_0x3a1170");
#endif

    switch (ctx->pc) {
        case 0x3a11a0u: goto label_3a11a0;
        case 0x3a11b8u: goto label_3a11b8;
        default: break;
    }

    ctx->pc = 0x3a1170u;

    // 0x3a1170: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3a1170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3a1174: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3a1174u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x3a1178: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3a1178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3a117c: 0x2442cfc0  addiu       $v0, $v0, -0x3040
    ctx->pc = 0x3a117cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954944));
    // 0x3a1180: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x3a1180u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x65CFC0u));
    // 0x3a1184: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x3a1184u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3a1188: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3a1188u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a118c: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x3a118cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x3a1190: 0x8f828c5c  lw          $v0, -0x73A4($gp)
    ctx->pc = 0x3a1190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937692)));
    // 0x3a1194: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3a1194u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3a1198: 0xc0d6b88  jal         func_35AE20
    ctx->pc = 0x3A1198u;
    SET_GPR_U32(ctx, 31, 0x3A11A0u);
    ctx->pc = 0x3A119Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A1198u;
    // 0x3a119c: 0x244500f0  addiu       $a1, $v0, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AE20u, 0x3A1198u, 0x3A11A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A11A0u;
label_3a11a0:
    // 0x3a11a0: 0x8f828c5c  lw          $v0, -0x73A4($gp)
    ctx->pc = 0x3a11a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937692)));
    // 0x3a11a4: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x3a11a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3a11a8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3a11a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a11ac: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x3a11acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x3a11b0: 0xc0d6b88  jal         func_35AE20
    ctx->pc = 0x3A11B0u;
    SET_GPR_U32(ctx, 31, 0x3A11B8u);
    ctx->pc = 0x3A11B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A11B0u;
    // 0x3a11b4: 0x244502b0  addiu       $a1, $v0, 0x2B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AE20u, 0x3A11B0u, 0x3A11B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A11B8u;
label_3a11b8:
    // 0x3a11b8: 0x8f838c5c  lw          $v1, -0x73A4($gp)
    ctx->pc = 0x3a11b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937692)));
    // 0x3a11bc: 0xa06003a2  sb          $zero, 0x3A2($v1)
    ctx->pc = 0x3a11bcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 930), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a11c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a11c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a11c4: 0x3e00008  jr          $ra
    ctx->pc = 0x3A11C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A11C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A11C4u;
        // 0x3a11c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A11C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A11CCu;
}
