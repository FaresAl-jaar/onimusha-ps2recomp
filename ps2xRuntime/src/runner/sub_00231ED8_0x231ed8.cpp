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

// Function: sub_00231ED8
// Address: 0x231ed8 - 0x231f94
void sub_00231ED8_0x231ed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00231ED8_0x231ed8");
#endif

    ctx->pc = 0x231ed8u;

    // 0x231ed8: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x231ed8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x231edc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x231edcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x231ee0: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x231ee0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x231ee4: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x231ee4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x231ee8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x231ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x231eec: 0xa0a30001  sb          $v1, 0x1($a1)
    ctx->pc = 0x231eecu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x231ef0: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x231ef0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x231ef4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x231ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x231ef8: 0xa0a20002  sb          $v0, 0x2($a1)
    ctx->pc = 0x231ef8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x231efc: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x231efcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x231f00: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x231f00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x231f04: 0xa0a30003  sb          $v1, 0x3($a1)
    ctx->pc = 0x231f04u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x231f08: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x231f08u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x231f0c: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x231f0cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x231f10: 0x90860001  lbu         $a2, 0x1($a0)
    ctx->pc = 0x231f10u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x231f14: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x231f14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x231f18: 0x90870003  lbu         $a3, 0x3($a0)
    ctx->pc = 0x231f18u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x231f1c: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x231f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x231f20: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x231f20u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x231f24: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x231f24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x231f28: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x231f28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x231f2c: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x231f2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x231f30: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x231f30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x231f34: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x231f34u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x231f38: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x231f38u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x231f3c: 0x90820002  lbu         $v0, 0x2($a0)
    ctx->pc = 0x231f3cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x231f40: 0x90860001  lbu         $a2, 0x1($a0)
    ctx->pc = 0x231f40u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x231f44: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x231f44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x231f48: 0x90870003  lbu         $a3, 0x3($a0)
    ctx->pc = 0x231f48u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x231f4c: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x231f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x231f50: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x231f50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x231f54: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x231f54u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x231f58: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x231f58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x231f5c: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x231f5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x231f60: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x231f60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x231f64: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x231f64u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x231f68: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x231f68u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x231f6c: 0x90830001  lbu         $v1, 0x1($a0)
    ctx->pc = 0x231f6cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x231f70: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x231f70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x231f74: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x231f74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x231f78: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x231f78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x231f7c: 0xa4a3000c  sh          $v1, 0xC($a1)
    ctx->pc = 0x231f7cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x231f80: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x231f80u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x231f84: 0xa0a2003c  sb          $v0, 0x3C($a1)
    ctx->pc = 0x231f84u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 60), (uint8_t)GPR_U32(ctx, 2));
    // 0x231f88: 0x90830001  lbu         $v1, 0x1($a0)
    ctx->pc = 0x231f88u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x231f8c: 0x3e00008  jr          $ra
    ctx->pc = 0x231F8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x231F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231F8Cu;
        // 0x231f90: 0xa0a3003d  sb          $v1, 0x3D($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 61), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x231F8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x231F94u;
}
