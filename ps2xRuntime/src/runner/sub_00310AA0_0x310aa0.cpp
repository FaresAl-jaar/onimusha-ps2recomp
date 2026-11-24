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

// Function: sub_00310AA0
// Address: 0x310aa0 - 0x310b40
void sub_00310AA0_0x310aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00310AA0_0x310aa0");
#endif

    switch (ctx->pc) {
        case 0x310ae8u: goto label_310ae8;
        default: break;
    }

    ctx->pc = 0x310aa0u;

    // 0x310aa0: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x310aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x310aa4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x310aa4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x310aa8: 0x3463ff0b  ori         $v1, $v1, 0xFF0B
    ctx->pc = 0x310aa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65291);
    // 0x310aac: 0x3c054310  lui         $a1, 0x4310
    ctx->pc = 0x310aacu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17168 << 16));
    // 0x310ab0: 0xac832004  sw          $v1, 0x2004($a0)
    ctx->pc = 0x310ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8196), GPR_U32(ctx, 3));
    // 0x310ab4: 0x3c01008f  lui         $at, 0x8F
    ctx->pc = 0x310ab4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)143 << 16));
    // 0x310ab8: 0xa0802008  sb          $zero, 0x2008($a0)
    ctx->pc = 0x310ab8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 8200), (uint8_t)GPR_U32(ctx, 0));
    // 0x310abc: 0x3c034200  lui         $v1, 0x4200
    ctx->pc = 0x310abcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16896 << 16));
    // 0x310ac0: 0xa0862009  sb          $a2, 0x2009($a0)
    ctx->pc = 0x310ac0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 8201), (uint8_t)GPR_U32(ctx, 6));
    // 0x310ac4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x310ac4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x310ac8: 0xac25db30  sw          $a1, -0x24D0($at)
    ctx->pc = 0x310ac8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x8EDB30u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8EDB30u, _value); } while (0);
    // 0x310acc: 0x3c06008f  lui         $a2, 0x8F
    ctx->pc = 0x310accu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)143 << 16));
    // 0x310ad0: 0x3c01008f  lui         $at, 0x8F
    ctx->pc = 0x310ad0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)143 << 16));
    // 0x310ad4: 0x24c6db30  addiu       $a2, $a2, -0x24D0
    ctx->pc = 0x310ad4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957872));
    // 0x310ad8: 0xac23db34  sw          $v1, -0x24CC($at)
    ctx->pc = 0x310ad8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x8EDB34u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8EDB34u, _value); } while (0);
    // 0x310adc: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x310adcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x310ae0: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x310ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x310ae4: 0x0  nop
    ctx->pc = 0x310ae4u;
    // NOP
label_310ae8:
    // 0x310ae8: 0xa0c50008  sb          $a1, 0x8($a2)
    ctx->pc = 0x310ae8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 8), (uint8_t)GPR_U32(ctx, 5));
    // 0x310aec: 0xa0c40048  sb          $a0, 0x48($a2)
    ctx->pc = 0x310aecu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 72), (uint8_t)GPR_U32(ctx, 4));
    // 0x310af0: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x310af0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x310af4: 0xa0c50009  sb          $a1, 0x9($a2)
    ctx->pc = 0x310af4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 9), (uint8_t)GPR_U32(ctx, 5));
    // 0x310af8: 0x2ce30040  sltiu       $v1, $a3, 0x40
    ctx->pc = 0x310af8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
    // 0x310afc: 0xa0c40049  sb          $a0, 0x49($a2)
    ctx->pc = 0x310afcu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 73), (uint8_t)GPR_U32(ctx, 4));
    // 0x310b00: 0xa0c5000a  sb          $a1, 0xA($a2)
    ctx->pc = 0x310b00u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 10), (uint8_t)GPR_U32(ctx, 5));
    // 0x310b04: 0xa0c4004a  sb          $a0, 0x4A($a2)
    ctx->pc = 0x310b04u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 74), (uint8_t)GPR_U32(ctx, 4));
    // 0x310b08: 0xa0c5000b  sb          $a1, 0xB($a2)
    ctx->pc = 0x310b08u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 11), (uint8_t)GPR_U32(ctx, 5));
    // 0x310b0c: 0xa0c4004b  sb          $a0, 0x4B($a2)
    ctx->pc = 0x310b0cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 75), (uint8_t)GPR_U32(ctx, 4));
    // 0x310b10: 0xa0c5000c  sb          $a1, 0xC($a2)
    ctx->pc = 0x310b10u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 12), (uint8_t)GPR_U32(ctx, 5));
    // 0x310b14: 0xa0c4004c  sb          $a0, 0x4C($a2)
    ctx->pc = 0x310b14u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 76), (uint8_t)GPR_U32(ctx, 4));
    // 0x310b18: 0xa0c5000d  sb          $a1, 0xD($a2)
    ctx->pc = 0x310b18u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 13), (uint8_t)GPR_U32(ctx, 5));
    // 0x310b1c: 0xa0c4004d  sb          $a0, 0x4D($a2)
    ctx->pc = 0x310b1cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 77), (uint8_t)GPR_U32(ctx, 4));
    // 0x310b20: 0xa0c5000e  sb          $a1, 0xE($a2)
    ctx->pc = 0x310b20u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 14), (uint8_t)GPR_U32(ctx, 5));
    // 0x310b24: 0xa0c4004e  sb          $a0, 0x4E($a2)
    ctx->pc = 0x310b24u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 78), (uint8_t)GPR_U32(ctx, 4));
    // 0x310b28: 0xa0c5000f  sb          $a1, 0xF($a2)
    ctx->pc = 0x310b28u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 15), (uint8_t)GPR_U32(ctx, 5));
    // 0x310b2c: 0xa0c4004f  sb          $a0, 0x4F($a2)
    ctx->pc = 0x310b2cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 79), (uint8_t)GPR_U32(ctx, 4));
    // 0x310b30: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x310B30u;
    {
        const bool branch_taken_0x310b30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x310B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310B30u;
        // 0x310b34: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310b30) {
            ctx->pc = 0x310AE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_310ae8;
        }
    }
    ctx->pc = 0x310B38u;
    // 0x310b38: 0x3e00008  jr          $ra
    ctx->pc = 0x310B38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x310B38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x310B40u;
}
