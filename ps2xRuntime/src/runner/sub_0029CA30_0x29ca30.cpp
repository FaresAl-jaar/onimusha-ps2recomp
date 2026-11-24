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

// Function: sub_0029CA30
// Address: 0x29ca30 - 0x29ca98
void sub_0029CA30_0x29ca30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029CA30_0x29ca30");
#endif

    ctx->pc = 0x29ca30u;

    // 0x29ca30: 0x3c03008d  lui         $v1, 0x8D
    ctx->pc = 0x29ca30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)141 << 16));
    // 0x29ca34: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x29ca34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x29ca38: 0x24634fd0  addiu       $v1, $v1, 0x4FD0
    ctx->pc = 0x29ca38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20432));
    // 0x29ca3c: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x29ca3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x29ca40: 0xac830018  sw          $v1, 0x18($a0)
    ctx->pc = 0x29ca40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 3));
    // 0x29ca44: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x29ca44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29ca48: 0x8c274fec  lw          $a3, 0x4FEC($at)
    ctx->pc = 0x29ca48u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x8D4FECu));
    // 0x29ca4c: 0x3c03008d  lui         $v1, 0x8D
    ctx->pc = 0x29ca4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)141 << 16));
    // 0x29ca50: 0x24a56fd0  addiu       $a1, $a1, 0x6FD0
    ctx->pc = 0x29ca50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28624));
    // 0x29ca54: 0x24635060  addiu       $v1, $v1, 0x5060
    ctx->pc = 0x29ca54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20576));
    // 0x29ca58: 0xac87001c  sw          $a3, 0x1C($a0)
    ctx->pc = 0x29ca58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 7));
    // 0x29ca5c: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x29ca5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x29ca60: 0x8c274fec  lw          $a3, 0x4FEC($at)
    ctx->pc = 0x29ca60u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x8D4FECu));
    // 0x29ca64: 0xace40018  sw          $a0, 0x18($a3)
    ctx->pc = 0x29ca64u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 4));
    // 0x29ca68: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x29ca68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x29ca6c: 0xac244fec  sw          $a0, 0x4FEC($at)
    ctx->pc = 0x29ca6cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x8D4FECu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8D4FECu, _value); } while (0);
    // 0x29ca70: 0xa086000a  sb          $a2, 0xA($a0)
    ctx->pc = 0x29ca70u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 10), (uint8_t)GPR_U32(ctx, 6));
    // 0x29ca74: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x29ca74u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x29ca78: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x29ca78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x29ca7c: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x29ca7cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x29ca80: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x29ca80u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x29ca84: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x29ca84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x29ca88: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x29ca88u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x29ca8c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x29ca8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x29ca90: 0x3e00008  jr          $ra
    ctx->pc = 0x29CA90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29CA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CA90u;
        // 0x29ca94: 0xa4830000  sh          $v1, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29CA90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29CA98u;
}
