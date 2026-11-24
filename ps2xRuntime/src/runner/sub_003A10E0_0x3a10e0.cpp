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

// Function: sub_003A10E0
// Address: 0x3a10e0 - 0x3a1140
void sub_003A10E0_0x3a10e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A10E0_0x3a10e0");
#endif

    switch (ctx->pc) {
        case 0x3a1110u: goto label_3a1110;
        case 0x3a1128u: goto label_3a1128;
        default: break;
    }

    ctx->pc = 0x3a10e0u;

    // 0x3a10e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3a10e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3a10e4: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3a10e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x3a10e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3a10e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3a10ec: 0x2442cfb0  addiu       $v0, $v0, -0x3050
    ctx->pc = 0x3a10ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954928));
    // 0x3a10f0: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x3a10f0u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x65CFB0u));
    // 0x3a10f4: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x3a10f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3a10f8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3a10f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a10fc: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x3a10fcu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x3a1100: 0x8f828c5c  lw          $v0, -0x73A4($gp)
    ctx->pc = 0x3a1100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937692)));
    // 0x3a1104: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3a1104u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3a1108: 0xc0d6b88  jal         func_35AE20
    ctx->pc = 0x3A1108u;
    SET_GPR_U32(ctx, 31, 0x3A1110u);
    ctx->pc = 0x3A110Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A1108u;
    // 0x3a110c: 0x244500f0  addiu       $a1, $v0, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AE20u, 0x3A1108u, 0x3A1110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A1110u;
label_3a1110:
    // 0x3a1110: 0x8f828c5c  lw          $v0, -0x73A4($gp)
    ctx->pc = 0x3a1110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937692)));
    // 0x3a1114: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x3a1114u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3a1118: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3a1118u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a111c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x3a111cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x3a1120: 0xc0d6b88  jal         func_35AE20
    ctx->pc = 0x3A1120u;
    SET_GPR_U32(ctx, 31, 0x3A1128u);
    ctx->pc = 0x3A1124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A1120u;
    // 0x3a1124: 0x244502b0  addiu       $a1, $v0, 0x2B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AE20u, 0x3A1120u, 0x3A1128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A1128u;
label_3a1128:
    // 0x3a1128: 0x8f838c5c  lw          $v1, -0x73A4($gp)
    ctx->pc = 0x3a1128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937692)));
    // 0x3a112c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3a112cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a1130: 0xa06403a2  sb          $a0, 0x3A2($v1)
    ctx->pc = 0x3a1130u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 930), (uint8_t)GPR_U32(ctx, 4));
    // 0x3a1134: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a1134u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a1138: 0x3e00008  jr          $ra
    ctx->pc = 0x3A1138u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A113Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1138u;
        // 0x3a113c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A1138u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A1140u;
}
