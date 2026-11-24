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

// Function: sub_002ABD90
// Address: 0x2abd90 - 0x2abdd8
void sub_002ABD90_0x2abd90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ABD90_0x2abd90");
#endif

    ctx->pc = 0x2abd90u;

    // 0x2abd90: 0x78a60000  lq          $a2, 0x0($a1)
    ctx->pc = 0x2abd90u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2abd94: 0x240300bd  addiu       $v1, $zero, 0xBD
    ctx->pc = 0x2abd94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 189));
    // 0x2abd98: 0x7c860890  sq          $a2, 0x890($a0)
    ctx->pc = 0x2abd98u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 2192), GPR_VEC(ctx, 6));
    // 0x2abd9c: 0x3c050008  lui         $a1, 0x8
    ctx->pc = 0x2abd9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
    // 0x2abda0: 0x8c860148  lw          $a2, 0x148($a0)
    ctx->pc = 0x2abda0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
    // 0x2abda4: 0x34c60004  ori         $a2, $a2, 0x4
    ctx->pc = 0x2abda4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)4);
    // 0x2abda8: 0xac860148  sw          $a2, 0x148($a0)
    ctx->pc = 0x2abda8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 6));
    // 0x2abdac: 0x8c860148  lw          $a2, 0x148($a0)
    ctx->pc = 0x2abdacu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
    // 0x2abdb0: 0xc52825  or          $a1, $a2, $a1
    ctx->pc = 0x2abdb0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x2abdb4: 0xac850148  sw          $a1, 0x148($a0)
    ctx->pc = 0x2abdb4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 5));
    // 0x2abdb8: 0x8c8506ac  lw          $a1, 0x6AC($a0)
    ctx->pc = 0x2abdb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1708)));
    // 0x2abdbc: 0x34a50040  ori         $a1, $a1, 0x40
    ctx->pc = 0x2abdbcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)64);
    // 0x2abdc0: 0xac8506ac  sw          $a1, 0x6AC($a0)
    ctx->pc = 0x2abdc0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1708), GPR_U32(ctx, 5));
    // 0x2abdc4: 0x8c8506b4  lw          $a1, 0x6B4($a0)
    ctx->pc = 0x2abdc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1716)));
    // 0x2abdc8: 0x34a50040  ori         $a1, $a1, 0x40
    ctx->pc = 0x2abdc8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)64);
    // 0x2abdcc: 0xac8506b4  sw          $a1, 0x6B4($a0)
    ctx->pc = 0x2abdccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1716), GPR_U32(ctx, 5));
    // 0x2abdd0: 0x3e00008  jr          $ra
    ctx->pc = 0x2ABDD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ABDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABDD0u;
        // 0x2abdd4: 0xa0830780  sb          $v1, 0x780($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 1920), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ABDD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ABDD8u;
}
