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

// Function: sub_002516E8
// Address: 0x2516e8 - 0x25173c
void sub_002516E8_0x2516e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002516E8_0x2516e8");
#endif

    switch (ctx->pc) {
        case 0x25172cu: goto label_25172c;
        default: break;
    }

    ctx->pc = 0x2516e8u;

    // 0x2516e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2516e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2516ec: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2516ECu;
    {
        const bool branch_taken_0x2516ec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2516F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2516ECu;
        // 0x2516f0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2516ec) {
            ctx->pc = 0x251708u;
            goto label_251708;
        }
    }
    ctx->pc = 0x2516F4u;
    // 0x2516f4: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x2516f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x2516f8: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x2516f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x2516fc: 0x2484ecd0  addiu       $a0, $a0, -0x1330
    ctx->pc = 0x2516fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962384));
    // 0x251700: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x251700u;
    {
        const bool branch_taken_0x251700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251700u;
        // 0x251704: 0x24a5ec80  addiu       $a1, $a1, -0x1380 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962304));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251700) {
            ctx->pc = 0x251724u;
            goto label_251724;
        }
    }
    ctx->pc = 0x251708u;
label_251708:
    // 0x251708: 0x80820004  lb          $v0, 0x4($a0)
    ctx->pc = 0x251708u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x25170c: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x25170Cu;
    {
        const bool branch_taken_0x25170c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25170c) {
            ctx->pc = 0x251710u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25170Cu;
            // 0x251710: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x251730u;
            goto label_251730;
        }
    }
    ctx->pc = 0x251714u;
    // 0x251714: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x251714u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x251718: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x251718u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x25171c: 0x2484ece0  addiu       $a0, $a0, -0x1320
    ctx->pc = 0x25171cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962400));
    // 0x251720: 0x24a5ecb0  addiu       $a1, $a1, -0x1350
    ctx->pc = 0x251720u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962352));
label_251724:
    // 0x251724: 0xc0944dc  jal         func_251370
    ctx->pc = 0x251724u;
    SET_GPR_U32(ctx, 31, 0x25172Cu);
    ctx->pc = 0x251370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x251370u, 0x251724u, 0x25172Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25172Cu;
label_25172c:
    // 0x25172c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x25172cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_251730:
    // 0x251730: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x251730u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x251734: 0x3e00008  jr          $ra
    ctx->pc = 0x251734u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x251738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251734u;
        // 0x251738: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x251734u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25173Cu;
}
