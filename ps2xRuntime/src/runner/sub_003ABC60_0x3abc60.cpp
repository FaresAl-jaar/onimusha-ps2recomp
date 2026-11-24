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

// Function: sub_003ABC60
// Address: 0x3abc60 - 0x3abcfc
void sub_003ABC60_0x3abc60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003ABC60_0x3abc60");
#endif

    switch (ctx->pc) {
        case 0x3abc90u: goto label_3abc90;
        case 0x3abcc0u: goto label_3abcc0;
        default: break;
    }

    ctx->pc = 0x3abc60u;

    // 0x3abc60: 0x80860007  lb          $a2, 0x7($a0)
    ctx->pc = 0x3abc60u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 7)));
    // 0x3abc64: 0x3c070093  lui         $a3, 0x93
    ctx->pc = 0x3abc64u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)147 << 16));
    // 0x3abc68: 0x24e79a70  addiu       $a3, $a3, -0x6590
    ctx->pc = 0x3abc68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294941296));
    // 0x3abc6c: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x3abc6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x3abc70: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x3abc70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x3abc74: 0x663021  addu        $a2, $v1, $a2
    ctx->pc = 0x3abc74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x3abc78: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x3abc78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x3abc7c: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x3abc7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x3abc80: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x3abc80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x3abc84: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x3abc84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3abc88: 0x24680190  addiu       $t0, $v1, 0x190
    ctx->pc = 0x3abc88u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 400));
    // 0x3abc8c: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x3abc8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_3abc90:
    // 0x3abc90: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x3abc90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3abc94: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x3abc94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x3abc98: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x3abc98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x3abc9c: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x3abc9cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x3abca0: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x3abca0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x3abca4: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x3abca4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
    // 0x3abca8: 0x1ca0fff9  bgtz        $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3ABCA8u;
    {
        const bool branch_taken_0x3abca8 = (GPR_S64(ctx, 5) > 0);
        ctx->pc = 0x3ABCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABCA8u;
        // 0x3abcac: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3abca8) {
            ctx->pc = 0x3ABC90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3abc90;
        }
    }
    ctx->pc = 0x3ABCB0u;
    // 0x3abcb0: 0x3c070093  lui         $a3, 0x93
    ctx->pc = 0x3abcb0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)147 << 16));
    // 0x3abcb4: 0x25060320  addiu       $a2, $t0, 0x320
    ctx->pc = 0x3abcb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 800));
    // 0x3abcb8: 0x24e79d90  addiu       $a3, $a3, -0x6270
    ctx->pc = 0x3abcb8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294942096));
    // 0x3abcbc: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x3abcbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3abcc0:
    // 0x3abcc0: 0x80e40000  lb          $a0, 0x0($a3)
    ctx->pc = 0x3abcc0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3abcc4: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x3abcc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x3abcc8: 0x80e30001  lb          $v1, 0x1($a3)
    ctx->pc = 0x3abcc8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
    // 0x3abccc: 0xa0c40000  sb          $a0, 0x0($a2)
    ctx->pc = 0x3abcccu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x3abcd0: 0x24e70002  addiu       $a3, $a3, 0x2
    ctx->pc = 0x3abcd0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
    // 0x3abcd4: 0xa0c30001  sb          $v1, 0x1($a2)
    ctx->pc = 0x3abcd4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x3abcd8: 0x1ca0fff9  bgtz        $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3ABCD8u;
    {
        const bool branch_taken_0x3abcd8 = (GPR_S64(ctx, 5) > 0);
        ctx->pc = 0x3ABCDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABCD8u;
        // 0x3abcdc: 0x24c60002  addiu       $a2, $a2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3abcd8) {
            ctx->pc = 0x3ABCC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3abcc0;
        }
    }
    ctx->pc = 0x3ABCE0u;
    // 0x3abce0: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x3abce0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x3abce4: 0x8c239d98  lw          $v1, -0x6268($at)
    ctx->pc = 0x3abce4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x929D98u));
    // 0x3abce8: 0xad030328  sw          $v1, 0x328($t0)
    ctx->pc = 0x3abce8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 808), GPR_U32(ctx, 3));
    // 0x3abcec: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x3abcecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x3abcf0: 0x8c239d9c  lw          $v1, -0x6264($at)
    ctx->pc = 0x3abcf0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x929D9Cu));
    // 0x3abcf4: 0x3e00008  jr          $ra
    ctx->pc = 0x3ABCF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3ABCF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABCF4u;
        // 0x3abcf8: 0xad03032c  sw          $v1, 0x32C($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 812), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3ABCF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3ABCFCu;
}
