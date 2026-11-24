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

// Function: sub_002442C0
// Address: 0x2442c0 - 0x244318
void sub_002442C0_0x2442c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002442C0_0x2442c0");
#endif

    switch (ctx->pc) {
        case 0x2442c0u: goto label_2442c0;
        case 0x2442c4u: goto label_2442c4;
        case 0x2442c8u: goto label_2442c8;
        case 0x2442ccu: goto label_2442cc;
        case 0x2442d0u: goto label_2442d0;
        case 0x2442d4u: goto label_2442d4;
        case 0x2442d8u: goto label_2442d8;
        case 0x2442dcu: goto label_2442dc;
        case 0x2442e0u: goto label_2442e0;
        case 0x2442e4u: goto label_2442e4;
        case 0x2442e8u: goto label_2442e8;
        case 0x2442ecu: goto label_2442ec;
        case 0x2442f0u: goto label_2442f0;
        case 0x2442f4u: goto label_2442f4;
        case 0x2442f8u: goto label_2442f8;
        case 0x2442fcu: goto label_2442fc;
        case 0x244300u: goto label_244300;
        case 0x244304u: goto label_244304;
        case 0x244308u: goto label_244308;
        case 0x24430cu: goto label_24430c;
        case 0x244310u: goto label_244310;
        case 0x244314u: goto label_244314;
        default: break;
    }

    ctx->pc = 0x2442c0u;

label_2442c0:
    // 0x2442c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2442c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2442c4:
    // 0x2442c4: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
label_2442c8:
    if (ctx->pc == 0x2442C8u) {
        ctx->pc = 0x2442C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2442C4u;
        // 0x2442c8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2442CCu;
        goto label_2442cc;
    }
    ctx->pc = 0x2442C4u;
    {
        const bool branch_taken_0x2442c4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2442C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2442C4u;
        // 0x2442c8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2442c4) {
            ctx->pc = 0x2442E0u;
            goto label_2442e0;
        }
    }
    ctx->pc = 0x2442CCu;
label_2442cc:
    // 0x2442cc: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x2442ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
label_2442d0:
    // 0x2442d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2442d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2442d4:
    // 0x2442d4: 0x2484be28  addiu       $a0, $a0, -0x41D8
    ctx->pc = 0x2442d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950440));
label_2442d8:
    // 0x2442d8: 0x8090d8a  j           func_243628
label_2442dc:
    if (ctx->pc == 0x2442DCu) {
        ctx->pc = 0x2442DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2442D8u;
        // 0x2442dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2442E0u;
        goto label_2442e0;
    }
    ctx->pc = 0x2442D8u;
    ctx->pc = 0x2442DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2442D8u;
    // 0x2442dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x243628u;
    sub_00243628_0x243628(rdram, ctx, runtime); return;
    ctx->pc = 0x2442E0u;
label_2442e0:
    // 0x2442e0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2442e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2442e4:
    // 0x2442e4: 0x8c420028  lw          $v0, 0x28($v0)
    ctx->pc = 0x2442e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_2442e8:
    // 0x2442e8: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_2442ec:
    if (ctx->pc == 0x2442ECu) {
        ctx->pc = 0x2442ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2442E8u;
        // 0x2442ec: 0x3c040067  lui         $a0, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2442F0u;
        goto label_2442f0;
    }
    ctx->pc = 0x2442E8u;
    {
        const bool branch_taken_0x2442e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2442e8) {
            ctx->pc = 0x2442ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2442E8u;
            // 0x2442ec: 0x3c040067  lui         $a0, 0x67 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x244308u;
            goto label_244308;
        }
    }
    ctx->pc = 0x2442F0u;
label_2442f0:
    // 0x2442f0: 0x40f809  jalr        $v0
label_2442f4:
    if (ctx->pc == 0x2442F4u) {
        ctx->pc = 0x2442F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2442F0u;
        // 0x2442f4: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2442F8u;
        goto label_2442f8;
    }
    ctx->pc = 0x2442F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2442F8u);
        ctx->pc = 0x2442F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2442F0u;
        // 0x2442f4: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2442F0u, 0x2442F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2442F8u;
label_2442f8:
    // 0x2442f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2442f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2442fc:
    // 0x2442fc: 0x3e00008  jr          $ra
label_244300:
    if (ctx->pc == 0x244300u) {
        ctx->pc = 0x244300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2442FCu;
        // 0x244300: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244304u;
        goto label_244304;
    }
    ctx->pc = 0x2442FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x244300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2442FCu;
        // 0x244300: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2442FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x244304u;
label_244304:
    // 0x244304: 0x0  nop
    ctx->pc = 0x244304u;
    // NOP
label_244308:
    // 0x244308: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x244308u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_24430c:
    // 0x24430c: 0x2484be48  addiu       $a0, $a0, -0x41B8
    ctx->pc = 0x24430cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950472));
label_244310:
    // 0x244310: 0x8090d8a  j           func_243628
label_244314:
    if (ctx->pc == 0x244314u) {
        ctx->pc = 0x244314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244310u;
        // 0x244314: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244318u;
        goto label_fallthrough_0x244310;
    }
    ctx->pc = 0x244310u;
    ctx->pc = 0x244314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244310u;
    // 0x244314: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x243628u;
    sub_00243628_0x243628(rdram, ctx, runtime); return;
label_fallthrough_0x244310:
    ctx->pc = 0x244318u;
}
