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

// Function: sub_001FB140
// Address: 0x1fb140 - 0x1fb210
void sub_001FB140_0x1fb140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FB140_0x1fb140");
#endif

    switch (ctx->pc) {
        case 0x1fb158u: goto label_1fb158;
        case 0x1fb180u: goto label_1fb180;
        default: break;
    }

    ctx->pc = 0x1fb140u;

    // 0x1fb140: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x1fb140u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x1fb144: 0x30c2000f  andi        $v0, $a2, 0xF
    ctx->pc = 0x1fb144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)15);
    // 0x1fb148: 0x52e03  sra         $a1, $a1, 24
    ctx->pc = 0x1fb148u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 24));
    // 0x1fb14c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1FB14Cu;
    {
        const bool branch_taken_0x1fb14c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB14Cu;
        // 0x1fb150: 0x862021  addu        $a0, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb14c) {
            ctx->pc = 0x1FB174u;
            goto label_1fb174;
        }
    }
    ctx->pc = 0x1FB154u;
    // 0x1fb154: 0x0  nop
    ctx->pc = 0x1fb154u;
    // NOP
label_1fb158:
    // 0x1fb158: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1fb158u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1fb15c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1fb15cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1fb160: 0x0  nop
    ctx->pc = 0x1fb160u;
    // NOP
    // 0x1fb164: 0x0  nop
    ctx->pc = 0x1fb164u;
    // NOP
    // 0x1fb168: 0x0  nop
    ctx->pc = 0x1fb168u;
    // NOP
    // 0x1fb16c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1FB16Cu;
    {
        const bool branch_taken_0x1fb16c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FB170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB16Cu;
        // 0x1fb170: 0xa0850000  sb          $a1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb16c) {
            ctx->pc = 0x1FB158u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fb158;
        }
    }
    ctx->pc = 0x1FB174u;
label_1fb174:
    // 0x1fb174: 0x63102  srl         $a2, $a2, 4
    ctx->pc = 0x1fb174u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 4));
    // 0x1fb178: 0x10c00023  beqz        $a2, . + 4 + (0x23 << 2)
    ctx->pc = 0x1FB178u;
    {
        const bool branch_taken_0x1fb178 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fb178) {
            ctx->pc = 0x1FB208u;
            goto label_1fb208;
        }
    }
    ctx->pc = 0x1FB180u;
label_1fb180:
    // 0x1fb180: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1fb180u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1fb184: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1fb184u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1fb188: 0xa0850000  sb          $a1, 0x0($a0)
    ctx->pc = 0x1fb188u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x1fb18c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1fb18cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1fb190: 0xa0850000  sb          $a1, 0x0($a0)
    ctx->pc = 0x1fb190u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x1fb194: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1fb194u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1fb198: 0xa0850000  sb          $a1, 0x0($a0)
    ctx->pc = 0x1fb198u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x1fb19c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1fb19cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1fb1a0: 0xa0850000  sb          $a1, 0x0($a0)
    ctx->pc = 0x1fb1a0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x1fb1a4: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1fb1a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1fb1a8: 0xa0850000  sb          $a1, 0x0($a0)
    ctx->pc = 0x1fb1a8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x1fb1ac: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1fb1acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1fb1b0: 0xa0850000  sb          $a1, 0x0($a0)
    ctx->pc = 0x1fb1b0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x1fb1b4: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1fb1b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1fb1b8: 0xa0850000  sb          $a1, 0x0($a0)
    ctx->pc = 0x1fb1b8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x1fb1bc: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1fb1bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1fb1c0: 0xa0850000  sb          $a1, 0x0($a0)
    ctx->pc = 0x1fb1c0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x1fb1c4: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1fb1c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1fb1c8: 0xa0850000  sb          $a1, 0x0($a0)
    ctx->pc = 0x1fb1c8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x1fb1cc: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1fb1ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1fb1d0: 0xa0850000  sb          $a1, 0x0($a0)
    ctx->pc = 0x1fb1d0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x1fb1d4: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1fb1d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1fb1d8: 0xa0850000  sb          $a1, 0x0($a0)
    ctx->pc = 0x1fb1d8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x1fb1dc: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1fb1dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1fb1e0: 0xa0850000  sb          $a1, 0x0($a0)
    ctx->pc = 0x1fb1e0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x1fb1e4: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1fb1e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1fb1e8: 0xa0850000  sb          $a1, 0x0($a0)
    ctx->pc = 0x1fb1e8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x1fb1ec: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1fb1ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1fb1f0: 0xa0850000  sb          $a1, 0x0($a0)
    ctx->pc = 0x1fb1f0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x1fb1f4: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1fb1f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1fb1f8: 0xa0850000  sb          $a1, 0x0($a0)
    ctx->pc = 0x1fb1f8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x1fb1fc: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1fb1fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1fb200: 0x14c0ffdf  bnez        $a2, . + 4 + (-0x21 << 2)
    ctx->pc = 0x1FB200u;
    {
        const bool branch_taken_0x1fb200 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FB204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB200u;
        // 0x1fb204: 0xa0850000  sb          $a1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb200) {
            ctx->pc = 0x1FB180u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fb180;
        }
    }
    ctx->pc = 0x1FB208u;
label_1fb208:
    // 0x1fb208: 0x3e00008  jr          $ra
    ctx->pc = 0x1FB208u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FB208u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FB210u;
}
