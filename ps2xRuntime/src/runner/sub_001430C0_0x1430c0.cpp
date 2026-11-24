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

// Function: sub_001430C0
// Address: 0x1430c0 - 0x143124
void sub_001430C0_0x1430c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001430C0_0x1430c0");
#endif

    ctx->pc = 0x1430c0u;

    // 0x1430c0: 0x8c870004  lw          $a3, 0x4($a0)
    ctx->pc = 0x1430c0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1430c4: 0x3c027400  lui         $v0, 0x7400
    ctx->pc = 0x1430c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29696 << 16));
    // 0x1430c8: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x1430c8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1430cc: 0x34038001  ori         $v1, $zero, 0x8001
    ctx->pc = 0x1430ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x1430d0: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1430d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1430d4: 0x3c020444  lui         $v0, 0x444
    ctx->pc = 0x1430d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1092 << 16));
    // 0x1430d8: 0x34464410  ori         $a2, $v0, 0x4410
    ctx->pc = 0x1430d8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17424);
    // 0x1430dc: 0x24a20050  addiu       $v0, $a1, 0x50
    ctx->pc = 0x1430dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 80));
    // 0x1430e0: 0xfca30000  sd          $v1, 0x0($a1)
    ctx->pc = 0x1430e0u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 3));
    // 0x1430e4: 0xaca60008  sw          $a2, 0x8($a1)
    ctx->pc = 0x1430e4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 6));
    // 0x1430e8: 0x30e307ff  andi        $v1, $a3, 0x7FF
    ctx->pc = 0x1430e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)2047);
    // 0x1430ec: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x1430ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1430f0: 0xdc880010  ld          $t0, 0x10($a0)
    ctx->pc = 0x1430f0u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1430f4: 0xdc870018  ld          $a3, 0x18($a0)
    ctx->pc = 0x1430f4u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1430f8: 0xfca30010  sd          $v1, 0x10($a1)
    ctx->pc = 0x1430f8u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 3));
    // 0x1430fc: 0xaca60018  sw          $a2, 0x18($a1)
    ctx->pc = 0x1430fcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 6));
    // 0x143100: 0xfca80020  sd          $t0, 0x20($a1)
    ctx->pc = 0x143100u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 32), GPR_U64(ctx, 8));
    // 0x143104: 0xfca70028  sd          $a3, 0x28($a1)
    ctx->pc = 0x143104u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 40), GPR_U64(ctx, 7));
    // 0x143108: 0xdc870028  ld          $a3, 0x28($a0)
    ctx->pc = 0x143108u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x14310c: 0xdc860030  ld          $a2, 0x30($a0)
    ctx->pc = 0x14310cu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x143110: 0xdc830020  ld          $v1, 0x20($a0)
    ctx->pc = 0x143110u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x143114: 0xfca30030  sd          $v1, 0x30($a1)
    ctx->pc = 0x143114u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 48), GPR_U64(ctx, 3));
    // 0x143118: 0xfca70038  sd          $a3, 0x38($a1)
    ctx->pc = 0x143118u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 56), GPR_U64(ctx, 7));
    // 0x14311c: 0x3e00008  jr          $ra
    ctx->pc = 0x14311Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x143120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14311Cu;
        // 0x143120: 0xfca60040  sd          $a2, 0x40($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 64), GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14311Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x143124u;
}
