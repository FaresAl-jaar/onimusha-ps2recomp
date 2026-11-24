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

// Function: sub_00339AD0
// Address: 0x339ad0 - 0x339b0c
void sub_00339AD0_0x339ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00339AD0_0x339ad0");
#endif

    switch (ctx->pc) {
        case 0x339af4u: goto label_339af4;
        default: break;
    }

    ctx->pc = 0x339ad0u;

    // 0x339ad0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x339ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x339ad4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x339ad4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x339ad8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x339ad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x339adc: 0x2406fffb  addiu       $a2, $zero, -0x5
    ctx->pc = 0x339adcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x339ae0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x339ae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x339ae4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x339ae4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x339ae8: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x339ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x339aec: 0xc0ce438  jal         func_3390E0
    ctx->pc = 0x339AECu;
    SET_GPR_U32(ctx, 31, 0x339AF4u);
    ctx->pc = 0x339AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x339AECu;
    // 0x339af0: 0x24843fb0  addiu       $a0, $a0, 0x3FB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3390E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3390E0u, 0x339AECu, 0x339AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x339AF4u;
label_339af4:
    // 0x339af4: 0xa2000040  sb          $zero, 0x40($s0)
    ctx->pc = 0x339af4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 64), (uint8_t)GPR_U32(ctx, 0));
    // 0x339af8: 0xa2000041  sb          $zero, 0x41($s0)
    ctx->pc = 0x339af8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 65), (uint8_t)GPR_U32(ctx, 0));
    // 0x339afc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x339afcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x339b00: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x339b00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x339b04: 0x3e00008  jr          $ra
    ctx->pc = 0x339B04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x339B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339B04u;
        // 0x339b08: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x339B04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x339B0Cu;
}
