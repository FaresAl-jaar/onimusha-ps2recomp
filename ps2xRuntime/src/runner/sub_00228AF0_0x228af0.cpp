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

// Function: sub_00228AF0
// Address: 0x228af0 - 0x228b40
void sub_00228AF0_0x228af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00228AF0_0x228af0");
#endif

    ctx->pc = 0x228af0u;

    // 0x228af0: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x228af0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x228af4: 0x2402fff8  addiu       $v0, $zero, -0x8
    ctx->pc = 0x228af4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
    // 0x228af8: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x228af8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x228afc: 0x24080072  addiu       $t0, $zero, 0x72
    ctx->pc = 0x228afcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
    // 0x228b00: 0x2406004e  addiu       $a2, $zero, 0x4E
    ctx->pc = 0x228b00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x228b04: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x228b04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x228b08: 0xa0a80000  sb          $t0, 0x0($a1)
    ctx->pc = 0x228b08u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 8));
    // 0x228b0c: 0xa0a20001  sb          $v0, 0x1($a1)
    ctx->pc = 0x228b0cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x228b10: 0xa0a30002  sb          $v1, 0x2($a1)
    ctx->pc = 0x228b10u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x228b14: 0xa0a60003  sb          $a2, 0x3($a1)
    ctx->pc = 0x228b14u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 6));
    // 0x228b18: 0xa0a70004  sb          $a3, 0x4($a1)
    ctx->pc = 0x228b18u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4), (uint8_t)GPR_U32(ctx, 7));
    // 0x228b1c: 0x90830038  lbu         $v1, 0x38($a0)
    ctx->pc = 0x228b1cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x228b20: 0xa0a30005  sb          $v1, 0x5($a1)
    ctx->pc = 0x228b20u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 5), (uint8_t)GPR_U32(ctx, 3));
    // 0x228b24: 0x8c820034  lw          $v0, 0x34($a0)
    ctx->pc = 0x228b24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x228b28: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x228b28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x228b2c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x228b2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x228b30: 0x21a02  srl         $v1, $v0, 8
    ctx->pc = 0x228b30u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x228b34: 0xa0a20006  sb          $v0, 0x6($a1)
    ctx->pc = 0x228b34u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 6), (uint8_t)GPR_U32(ctx, 2));
    // 0x228b38: 0x3e00008  jr          $ra
    ctx->pc = 0x228B38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x228B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228B38u;
        // 0x228b3c: 0xa0a30007  sb          $v1, 0x7($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 7), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x228B38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x228B40u;
}
