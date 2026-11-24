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

// Function: sub_002513E8
// Address: 0x2513e8 - 0x251434
void sub_002513E8_0x2513e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002513E8_0x2513e8");
#endif

    switch (ctx->pc) {
        case 0x251418u: goto label_251418;
        default: break;
    }

    ctx->pc = 0x2513e8u;

    // 0x2513e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2513e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2513ec: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x2513ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x2513f0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2513f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2513f4: 0x2450edb0  addiu       $s0, $v0, -0x1250
    ctx->pc = 0x2513f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962608));
    // 0x2513f8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2513f8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4DEDB0u));
    // 0x2513fc: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2513FCu;
    {
        const bool branch_taken_0x2513fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x251400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2513FCu;
        // 0x251400: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2513fc) {
            ctx->pc = 0x25141Cu;
            goto label_25141c;
        }
    }
    ctx->pc = 0x251404u;
    // 0x251404: 0x3c04004e  lui         $a0, 0x4E
    ctx->pc = 0x251404u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)78 << 16));
    // 0x251408: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x251408u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25140c: 0x2484edb8  addiu       $a0, $a0, -0x1248
    ctx->pc = 0x25140cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962616));
    // 0x251410: 0xc049590  jal         func_125640
    ctx->pc = 0x251410u;
    SET_GPR_U32(ctx, 31, 0x251418u);
    ctx->pc = 0x251414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251410u;
    // 0x251414: 0x24060c00  addiu       $a2, $zero, 0xC00 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3072));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x251410u, 0x251418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251418u;
label_251418:
    // 0x251418: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x251418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_25141c:
    // 0x25141c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x25141cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x251420: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x251420u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x251424: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x251424u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x251428: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x251428u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25142c: 0x3e00008  jr          $ra
    ctx->pc = 0x25142Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x251430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25142Cu;
        // 0x251430: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25142Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x251434u;
}
