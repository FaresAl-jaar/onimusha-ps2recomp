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

// Function: sub_00364060
// Address: 0x364060 - 0x3640c4
void sub_00364060_0x364060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00364060_0x364060");
#endif

    switch (ctx->pc) {
        case 0x364078u: goto label_364078;
        default: break;
    }

    ctx->pc = 0x364060u;

    // 0x364060: 0x8f828ba8  lw          $v0, -0x7458($gp)
    ctx->pc = 0x364060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937512)));
    // 0x364064: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x364064u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364068: 0x64060001  daddiu      $a2, $zero, 0x1
    ctx->pc = 0x364068u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x36406c: 0x24450064  addiu       $a1, $v0, 0x64
    ctx->pc = 0x36406cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
    // 0x364070: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x364070u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x364074: 0x3c042000  lui         $a0, 0x2000
    ctx->pc = 0x364074u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
label_364078:
    // 0x364078: 0x8ca20024  lw          $v0, 0x24($a1)
    ctx->pc = 0x364078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x36407c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x36407cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x364080: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x364080u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x364084: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x364084u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x364088: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x364088u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x36408c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x36408cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x364090: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x364090u;
    {
        const bool branch_taken_0x364090 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x364094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364090u;
        // 0x364094: 0x30c2ffff  andi        $v0, $a2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x364090) {
            ctx->pc = 0x3640A8u;
            goto label_3640a8;
        }
    }
    ctx->pc = 0x364098u;
    // 0x364098: 0x431004  sllv        $v0, $v1, $v0
    ctx->pc = 0x364098u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x36409c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x36409cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3640a0: 0xe21025  or          $v0, $a3, $v0
    ctx->pc = 0x3640a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x3640a4: 0x3047ffff  andi        $a3, $v0, 0xFFFF
    ctx->pc = 0x3640a4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_3640a8:
    // 0x3640a8: 0x24c20001  addiu       $v0, $a2, 0x1
    ctx->pc = 0x3640a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x3640ac: 0x3046ffff  andi        $a2, $v0, 0xFFFF
    ctx->pc = 0x3640acu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3640b0: 0x28c20005  slti        $v0, $a2, 0x5
    ctx->pc = 0x3640b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x3640b4: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x3640B4u;
    {
        const bool branch_taken_0x3640b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3640B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3640B4u;
        // 0x3640b8: 0x24a50064  addiu       $a1, $a1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3640b4) {
            ctx->pc = 0x364078u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_364078;
        }
    }
    ctx->pc = 0x3640BCu;
    // 0x3640bc: 0x3e00008  jr          $ra
    ctx->pc = 0x3640BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3640C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3640BCu;
        // 0x3640c0: 0x30e200ff  andi        $v0, $a3, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3640BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3640C4u;
}
