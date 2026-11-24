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

// Function: sub_0017D720
// Address: 0x17d720 - 0x17d768
void sub_0017D720_0x17d720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017D720_0x17d720");
#endif

    ctx->pc = 0x17d720u;

    // 0x17d720: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x17d720u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x17d724: 0x2406007f  addiu       $a2, $zero, 0x7F
    ctx->pc = 0x17d724u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x17d728: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x17d728u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x17d72c: 0x34038004  ori         $v1, $zero, 0x8004
    ctx->pc = 0x17d72cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32772);
    // 0x17d730: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x17d730u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x17d734: 0xfca30000  sd          $v1, 0x0($a1)
    ctx->pc = 0x17d734u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 3));
    // 0x17d738: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x17d738u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x17d73c: 0xfca40008  sd          $a0, 0x8($a1)
    ctx->pc = 0x17d73cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 4));
    // 0x17d740: 0x3c030005  lui         $v1, 0x5
    ctx->pc = 0x17d740u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)5 << 16));
    // 0x17d744: 0xfca30010  sd          $v1, 0x10($a1)
    ctx->pc = 0x17d744u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 3));
    // 0x17d748: 0x24040044  addiu       $a0, $zero, 0x44
    ctx->pc = 0x17d748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x17d74c: 0xfca60018  sd          $a2, 0x18($a1)
    ctx->pc = 0x17d74cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 24), GPR_U64(ctx, 6));
    // 0x17d750: 0x2403005c  addiu       $v1, $zero, 0x5C
    ctx->pc = 0x17d750u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x17d754: 0xfca40020  sd          $a0, 0x20($a1)
    ctx->pc = 0x17d754u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 32), GPR_U64(ctx, 4));
    // 0x17d758: 0xfca60028  sd          $a2, 0x28($a1)
    ctx->pc = 0x17d758u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 40), GPR_U64(ctx, 6));
    // 0x17d75c: 0xfca30040  sd          $v1, 0x40($a1)
    ctx->pc = 0x17d75cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 64), GPR_U64(ctx, 3));
    // 0x17d760: 0x3e00008  jr          $ra
    ctx->pc = 0x17D760u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D760u;
        // 0x17d764: 0xfca00048  sd          $zero, 0x48($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 72), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17D760u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17D768u;
}
