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

// Function: sub_001FB030
// Address: 0x1fb030 - 0x1fb13c
void sub_001FB030_0x1fb030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FB030_0x1fb030");
#endif

    switch (ctx->pc) {
        case 0x1fb040u: goto label_1fb040;
        case 0x1fb068u: goto label_1fb068;
        default: break;
    }

    ctx->pc = 0x1fb030u;

    // 0x1fb030: 0x30c3000f  andi        $v1, $a2, 0xF
    ctx->pc = 0x1fb030u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)15);
    // 0x1fb034: 0x5060000a  beql        $v1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1FB034u;
    {
        const bool branch_taken_0x1fb034 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fb034) {
            ctx->pc = 0x1FB038u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FB034u;
            // 0x1fb038: 0x63102  srl         $a2, $a2, 4 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FB060u;
            goto label_1fb060;
        }
    }
    ctx->pc = 0x1FB03Cu;
    // 0x1fb03c: 0x0  nop
    ctx->pc = 0x1fb03cu;
    // NOP
label_1fb040:
    // 0x1fb040: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1fb040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1fb044: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x1fb044u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x1fb048: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1fb048u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1fb04c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1fb04cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1fb050: 0x0  nop
    ctx->pc = 0x1fb050u;
    // NOP
    // 0x1fb054: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1FB054u;
    {
        const bool branch_taken_0x1fb054 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FB058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB054u;
        // 0x1fb058: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb054) {
            ctx->pc = 0x1FB040u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fb040;
        }
    }
    ctx->pc = 0x1FB05Cu;
    // 0x1fb05c: 0x63102  srl         $a2, $a2, 4
    ctx->pc = 0x1fb05cu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 4));
label_1fb060:
    // 0x1fb060: 0x10c00034  beqz        $a2, . + 4 + (0x34 << 2)
    ctx->pc = 0x1FB060u;
    {
        const bool branch_taken_0x1fb060 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fb060) {
            ctx->pc = 0x1FB134u;
            goto label_1fb134;
        }
    }
    ctx->pc = 0x1FB068u;
label_1fb068:
    // 0x1fb068: 0x8ca80000  lw          $t0, 0x0($a1)
    ctx->pc = 0x1fb068u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1fb06c: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x1fb06cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x1fb070: 0x8ca70000  lw          $a3, 0x0($a1)
    ctx->pc = 0x1fb070u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1fb074: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x1fb074u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x1fb078: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1fb078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1fb07c: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x1fb07cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x1fb080: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1fb080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1fb084: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x1fb084u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x1fb088: 0xac880000  sw          $t0, 0x0($a0)
    ctx->pc = 0x1fb088u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 8));
    // 0x1fb08c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1fb08cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1fb090: 0xac870004  sw          $a3, 0x4($a0)
    ctx->pc = 0x1fb090u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 7));
    // 0x1fb094: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x1fb094u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x1fb098: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x1fb098u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x1fb09c: 0x8ca80000  lw          $t0, 0x0($a1)
    ctx->pc = 0x1fb09cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1fb0a0: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x1fb0a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x1fb0a4: 0x8ca70000  lw          $a3, 0x0($a1)
    ctx->pc = 0x1fb0a4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1fb0a8: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x1fb0a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x1fb0ac: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1fb0acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1fb0b0: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x1fb0b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x1fb0b4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1fb0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1fb0b8: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x1fb0b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x1fb0bc: 0xac880010  sw          $t0, 0x10($a0)
    ctx->pc = 0x1fb0bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 8));
    // 0x1fb0c0: 0xac870014  sw          $a3, 0x14($a0)
    ctx->pc = 0x1fb0c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 7));
    // 0x1fb0c4: 0xac830018  sw          $v1, 0x18($a0)
    ctx->pc = 0x1fb0c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 3));
    // 0x1fb0c8: 0xac82001c  sw          $v0, 0x1C($a0)
    ctx->pc = 0x1fb0c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
    // 0x1fb0cc: 0x8ca80000  lw          $t0, 0x0($a1)
    ctx->pc = 0x1fb0ccu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1fb0d0: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x1fb0d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x1fb0d4: 0x8ca70000  lw          $a3, 0x0($a1)
    ctx->pc = 0x1fb0d4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1fb0d8: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x1fb0d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x1fb0dc: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1fb0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1fb0e0: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x1fb0e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x1fb0e4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1fb0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1fb0e8: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x1fb0e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x1fb0ec: 0xac880020  sw          $t0, 0x20($a0)
    ctx->pc = 0x1fb0ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 8));
    // 0x1fb0f0: 0xac870024  sw          $a3, 0x24($a0)
    ctx->pc = 0x1fb0f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 7));
    // 0x1fb0f4: 0xac830028  sw          $v1, 0x28($a0)
    ctx->pc = 0x1fb0f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 3));
    // 0x1fb0f8: 0xac82002c  sw          $v0, 0x2C($a0)
    ctx->pc = 0x1fb0f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
    // 0x1fb0fc: 0x8ca80000  lw          $t0, 0x0($a1)
    ctx->pc = 0x1fb0fcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1fb100: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x1fb100u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x1fb104: 0x8ca70000  lw          $a3, 0x0($a1)
    ctx->pc = 0x1fb104u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1fb108: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x1fb108u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x1fb10c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1fb10cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1fb110: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x1fb110u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x1fb114: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1fb114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1fb118: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x1fb118u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x1fb11c: 0xac880030  sw          $t0, 0x30($a0)
    ctx->pc = 0x1fb11cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 8));
    // 0x1fb120: 0xac870034  sw          $a3, 0x34($a0)
    ctx->pc = 0x1fb120u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 7));
    // 0x1fb124: 0xac830038  sw          $v1, 0x38($a0)
    ctx->pc = 0x1fb124u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 3));
    // 0x1fb128: 0xac82003c  sw          $v0, 0x3C($a0)
    ctx->pc = 0x1fb128u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 2));
    // 0x1fb12c: 0x14c0ffce  bnez        $a2, . + 4 + (-0x32 << 2)
    ctx->pc = 0x1FB12Cu;
    {
        const bool branch_taken_0x1fb12c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FB130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB12Cu;
        // 0x1fb130: 0x24840040  addiu       $a0, $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb12c) {
            ctx->pc = 0x1FB068u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fb068;
        }
    }
    ctx->pc = 0x1FB134u;
label_1fb134:
    // 0x1fb134: 0x3e00008  jr          $ra
    ctx->pc = 0x1FB134u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FB134u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FB13Cu;
}
