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

// Function: sub_002276C0
// Address: 0x2276c0 - 0x22770c
void sub_002276C0_0x2276c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002276C0_0x2276c0");
#endif

    switch (ctx->pc) {
        case 0x2276e4u: goto label_2276e4;
        default: break;
    }

    ctx->pc = 0x2276c0u;

    // 0x2276c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2276c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2276c4: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x2276c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x2276c8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2276c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2276cc: 0x2450aab0  addiu       $s0, $v0, -0x5550
    ctx->pc = 0x2276ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945456));
    // 0x2276d0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2276d0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4BAAB0u));
    // 0x2276d4: 0x1c600009  bgtz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2276D4u;
    {
        const bool branch_taken_0x2276d4 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x2276D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2276D4u;
        // 0x2276d8: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2276d4) {
            ctx->pc = 0x2276FCu;
            goto label_2276fc;
        }
    }
    ctx->pc = 0x2276DCu;
    // 0x2276dc: 0xc089dc4  jal         func_227710
    ctx->pc = 0x2276DCu;
    SET_GPR_U32(ctx, 31, 0x2276E4u);
    ctx->pc = 0x227710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227710u, 0x2276DCu, 0x2276E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2276E4u;
label_2276e4:
    // 0x2276e4: 0x3c030088  lui         $v1, 0x88
    ctx->pc = 0x2276e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)136 << 16));
    // 0x2276e8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2276e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2276ec: 0x24635a70  addiu       $v1, $v1, 0x5A70
    ctx->pc = 0x2276ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23152));
    // 0x2276f0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2276f0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x885A70u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x885A70u, _value); } while (0);
    // 0x2276f4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2276f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2276f8: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x2276f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_2276fc:
    // 0x2276fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2276fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x227700: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x227700u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x227704: 0x3e00008  jr          $ra
    ctx->pc = 0x227704u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x227708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227704u;
        // 0x227708: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x227704u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22770Cu;
}
