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

// Function: sub_0012C0A0
// Address: 0x12c0a0 - 0x12c0ec
void sub_0012C0A0_0x12c0a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012C0A0_0x12c0a0");
#endif

    switch (ctx->pc) {
        case 0x12c0d8u: goto label_12c0d8;
        default: break;
    }

    ctx->pc = 0x12c0a0u;

    // 0x12c0a0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x12c0a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x12c0a4: 0x3c0e7fff  lui         $t6, 0x7FFF
    ctx->pc = 0x12c0a4u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)32767 << 16));
    // 0x12c0a8: 0xa0682d  daddu       $t5, $a1, $zero
    ctx->pc = 0x12c0a8u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c0ac: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x12c0acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x12c0b0: 0x35ceffff  ori         $t6, $t6, 0xFFFF
    ctx->pc = 0x12c0b0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)65535);
    // 0x12c0b4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x12c0b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x12c0b8: 0x240f0208  addiu       $t7, $zero, 0x208
    ctx->pc = 0x12c0b8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 520));
    // 0x12c0bc: 0xafae0014  sw          $t6, 0x14($sp)
    ctx->pc = 0x12c0bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 14));
    // 0x12c0c0: 0xa7af000c  sh          $t7, 0xC($sp)
    ctx->pc = 0x12c0c0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 12), (uint16_t)GPR_U32(ctx, 15));
    // 0x12c0c4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x12c0c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c0c8: 0xafa40054  sw          $a0, 0x54($sp)
    ctx->pc = 0x12c0c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 4));
    // 0x12c0cc: 0xafad0000  sw          $t5, 0x0($sp)
    ctx->pc = 0x12c0ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 13));
    // 0x12c0d0: 0xc04a690  jal         func_129A40
    ctx->pc = 0x12C0D0u;
    SET_GPR_U32(ctx, 31, 0x12C0D8u);
    ctx->pc = 0x12C0D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C0D0u;
    // 0x12c0d4: 0xafae0008  sw          $t6, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129A40u, 0x12C0D0u, 0x12C0D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C0D8u;
label_12c0d8:
    // 0x12c0d8: 0x8faf0000  lw          $t7, 0x0($sp)
    ctx->pc = 0x12c0d8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12c0dc: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x12c0dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12c0e0: 0xa1e00000  sb          $zero, 0x0($t7)
    ctx->pc = 0x12c0e0u;
    WRITE8(ADD32(GPR_U32(ctx, 15), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x12c0e4: 0x3e00008  jr          $ra
    ctx->pc = 0x12C0E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12C0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C0E4u;
        // 0x12c0e8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12C0E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12C0ECu;
}
