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

// Function: sub_0031B0D0
// Address: 0x31b0d0 - 0x31b134
void sub_0031B0D0_0x31b0d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031B0D0_0x31b0d0");
#endif

    switch (ctx->pc) {
        case 0x31b0f4u: goto label_31b0f4;
        case 0x31b108u: goto label_31b108;
        case 0x31b128u: goto label_31b128;
        default: break;
    }

    ctx->pc = 0x31b0d0u;

    // 0x31b0d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x31b0d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x31b0d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31b0d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x31b0d8: 0xa0800001  sb          $zero, 0x1($a0)
    ctx->pc = 0x31b0d8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x31b0dc: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x31b0dcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x31b0e0: 0xa0800003  sb          $zero, 0x3($a0)
    ctx->pc = 0x31b0e0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x31b0e4: 0xa0800004  sb          $zero, 0x4($a0)
    ctx->pc = 0x31b0e4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x31b0e8: 0x90850000  lbu         $a1, 0x0($a0)
    ctx->pc = 0x31b0e8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x31b0ec: 0xc0c6df4  jal         func_31B7D0
    ctx->pc = 0x31B0ECu;
    SET_GPR_U32(ctx, 31, 0x31B0F4u);
    ctx->pc = 0x31B0F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B0ECu;
    // 0x31b0f0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31B7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31B7D0u, 0x31B0ECu, 0x31B0F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B0F4u;
label_31b0f4:
    // 0x31b0f4: 0x3c040093  lui         $a0, 0x93
    ctx->pc = 0x31b0f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)147 << 16));
    // 0x31b0f8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x31b0f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31b0fc: 0x2484fee0  addiu       $a0, $a0, -0x120
    ctx->pc = 0x31b0fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967008));
    // 0x31b100: 0xc0f0154  jal         func_3C0550
    ctx->pc = 0x31B100u;
    SET_GPR_U32(ctx, 31, 0x31B108u);
    ctx->pc = 0x31B104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B100u;
    // 0x31b104: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C0550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C0550u, 0x31B100u, 0x31B108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B108u;
label_31b108:
    // 0x31b108: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x31b108u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x31b10c: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x31b10cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x31b110: 0x2484cbe0  addiu       $a0, $a0, -0x3420
    ctx->pc = 0x31b110u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    // 0x31b114: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x31b114u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b118: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x31b118u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b11c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x31b11cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b120: 0xc063c70  jal         func_18F1C0
    ctx->pc = 0x31B120u;
    SET_GPR_U32(ctx, 31, 0x31B128u);
    ctx->pc = 0x31B124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B120u;
    // 0x31b124: 0x2409ffff  addiu       $t1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F1C0u, 0x31B120u, 0x31B128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B128u;
label_31b128:
    // 0x31b128: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31b128u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31b12c: 0x3e00008  jr          $ra
    ctx->pc = 0x31B12Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31B130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B12Cu;
        // 0x31b130: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31B12Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31B134u;
}
