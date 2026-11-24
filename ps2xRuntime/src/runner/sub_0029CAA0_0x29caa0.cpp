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

// Function: sub_0029CAA0
// Address: 0x29caa0 - 0x29cb08
void sub_0029CAA0_0x29caa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029CAA0_0x29caa0");
#endif

    ctx->pc = 0x29caa0u;

    // 0x29caa0: 0x3c03008d  lui         $v1, 0x8D
    ctx->pc = 0x29caa0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)141 << 16));
    // 0x29caa4: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x29caa4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x29caa8: 0x24635030  addiu       $v1, $v1, 0x5030
    ctx->pc = 0x29caa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20528));
    // 0x29caac: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x29caacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x29cab0: 0xac830018  sw          $v1, 0x18($a0)
    ctx->pc = 0x29cab0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 3));
    // 0x29cab4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x29cab4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29cab8: 0x8c27504c  lw          $a3, 0x504C($at)
    ctx->pc = 0x29cab8u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x8D504Cu));
    // 0x29cabc: 0x3c03008d  lui         $v1, 0x8D
    ctx->pc = 0x29cabcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)141 << 16));
    // 0x29cac0: 0x24a56fd0  addiu       $a1, $a1, 0x6FD0
    ctx->pc = 0x29cac0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28624));
    // 0x29cac4: 0x24635070  addiu       $v1, $v1, 0x5070
    ctx->pc = 0x29cac4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20592));
    // 0x29cac8: 0xac87001c  sw          $a3, 0x1C($a0)
    ctx->pc = 0x29cac8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 7));
    // 0x29cacc: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x29caccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x29cad0: 0x8c27504c  lw          $a3, 0x504C($at)
    ctx->pc = 0x29cad0u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x8D504Cu));
    // 0x29cad4: 0xace40018  sw          $a0, 0x18($a3)
    ctx->pc = 0x29cad4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 4));
    // 0x29cad8: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x29cad8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x29cadc: 0xac24504c  sw          $a0, 0x504C($at)
    ctx->pc = 0x29cadcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x8D504Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8D504Cu, _value); } while (0);
    // 0x29cae0: 0xa086000a  sb          $a2, 0xA($a0)
    ctx->pc = 0x29cae0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 10), (uint8_t)GPR_U32(ctx, 6));
    // 0x29cae4: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x29cae4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x29cae8: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x29cae8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x29caec: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x29caecu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x29caf0: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x29caf0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x29caf4: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x29caf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x29caf8: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x29caf8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x29cafc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x29cafcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x29cb00: 0x3e00008  jr          $ra
    ctx->pc = 0x29CB00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29CB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CB00u;
        // 0x29cb04: 0xa4830000  sh          $v1, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29CB00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29CB08u;
}
