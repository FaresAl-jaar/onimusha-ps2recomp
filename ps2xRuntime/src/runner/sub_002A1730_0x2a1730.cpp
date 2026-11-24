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

// Function: sub_002A1730
// Address: 0x2a1730 - 0x2a17a4
void sub_002A1730_0x2a1730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A1730_0x2a1730");
#endif

    switch (ctx->pc) {
        case 0x2a1780u: goto label_2a1780;
        default: break;
    }

    ctx->pc = 0x2a1730u;

    // 0x2a1730: 0x8c84007c  lw          $a0, 0x7C($a0)
    ctx->pc = 0x2a1730u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
    // 0x2a1734: 0x53940  sll         $a3, $a1, 5
    ctx->pc = 0x2a1734u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x2a1738: 0xe52823  subu        $a1, $a3, $a1
    ctx->pc = 0x2a1738u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x2a173c: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x2a173cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2a1740: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x2a1740u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x2a1744: 0x854021  addu        $t0, $a0, $a1
    ctx->pc = 0x2a1744u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2a1748: 0x8d040004  lw          $a0, 0x4($t0)
    ctx->pc = 0x2a1748u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x2a174c: 0x8d050008  lw          $a1, 0x8($t0)
    ctx->pc = 0x2a174cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x2a1750: 0x34840001  ori         $a0, $a0, 0x1
    ctx->pc = 0x2a1750u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1);
    // 0x2a1754: 0xad040004  sw          $a0, 0x4($t0)
    ctx->pc = 0x2a1754u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 4));
    // 0x2a1758: 0xad030150  sw          $v1, 0x150($t0)
    ctx->pc = 0x2a1758u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 336), GPR_U32(ctx, 3));
    // 0x2a175c: 0x8ca30040  lw          $v1, 0x40($a1)
    ctx->pc = 0x2a175cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x2a1760: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x2a1760u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x2a1764: 0xaca30040  sw          $v1, 0x40($a1)
    ctx->pc = 0x2a1764u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 64), GPR_U32(ctx, 3));
    // 0x2a1768: 0xfca60020  sd          $a2, 0x20($a1)
    ctx->pc = 0x2a1768u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 32), GPR_U64(ctx, 6));
    // 0x2a176c: 0x8d07000c  lw          $a3, 0xC($t0)
    ctx->pc = 0x2a176cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x2a1770: 0x91050001  lbu         $a1, 0x1($t0)
    ctx->pc = 0x2a1770u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 1)));
    // 0x2a1774: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2a1774u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2a1778: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x2a1778u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2a177c: 0x0  nop
    ctx->pc = 0x2a177cu;
    // NOP
label_2a1780:
    // 0x2a1780: 0x8ce60000  lw          $a2, 0x0($a3)
    ctx->pc = 0x2a1780u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2a1784: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x2a1784u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x2a1788: 0xdcc30010  ld          $v1, 0x10($a2)
    ctx->pc = 0x2a1788u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x2a178c: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x2a178cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x2a1790: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2a1790u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2a1794: 0x1ca0fffa  bgtz        $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2A1794u;
    {
        const bool branch_taken_0x2a1794 = (GPR_S64(ctx, 5) > 0);
        ctx->pc = 0x2A1798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1794u;
        // 0x2a1798: 0xfcc30010  sd          $v1, 0x10($a2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1794) {
            ctx->pc = 0x2A1780u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a1780;
        }
    }
    ctx->pc = 0x2A179Cu;
    // 0x2a179c: 0x3e00008  jr          $ra
    ctx->pc = 0x2A179Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A179Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A17A4u;
}
