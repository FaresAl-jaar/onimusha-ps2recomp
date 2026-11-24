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

// Function: sub_002CB8D0
// Address: 0x2cb8d0 - 0x2cb930
void sub_002CB8D0_0x2cb8d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CB8D0_0x2cb8d0");
#endif

    ctx->pc = 0x2cb8d0u;

    // 0x2cb8d0: 0x93878a40  lbu         $a3, -0x75C0($gp)
    ctx->pc = 0x2cb8d0u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937152)));
    // 0x2cb8d4: 0x43080  sll         $a2, $a0, 2
    ctx->pc = 0x2cb8d4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2cb8d8: 0x27838a48  addiu       $v1, $gp, -0x75B8
    ctx->pc = 0x2cb8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937160));
    // 0x2cb8dc: 0x664821  addu        $t1, $v1, $a2
    ctx->pc = 0x2cb8dcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2cb8e0: 0x8d280000  lw          $t0, 0x0($t1)
    ctx->pc = 0x2cb8e0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x2cb8e4: 0x27838a38  addiu       $v1, $gp, -0x75C8
    ctx->pc = 0x2cb8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937144));
    // 0x2cb8e8: 0x3c06008d  lui         $a2, 0x8D
    ctx->pc = 0x2cb8e8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)141 << 16));
    // 0x2cb8ec: 0x24c66be0  addiu       $a2, $a2, 0x6BE0
    ctx->pc = 0x2cb8ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 27616));
    // 0x2cb8f0: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x2cb8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x2cb8f4: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x2cb8f4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x2cb8f8: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x2cb8f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x2cb8fc: 0xacc80000  sw          $t0, 0x0($a2)
    ctx->pc = 0x2cb8fcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 8));
    // 0x2cb900: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2cb900u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2cb904: 0x93838a40  lbu         $v1, -0x75C0($gp)
    ctx->pc = 0x2cb904u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937152)));
    // 0x2cb908: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2cb908u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2cb90c: 0xa3838a40  sb          $v1, -0x75C0($gp)
    ctx->pc = 0x2cb90cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937152), (uint8_t)GPR_U32(ctx, 3));
    // 0x2cb910: 0x93838a40  lbu         $v1, -0x75C0($gp)
    ctx->pc = 0x2cb910u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937152)));
    // 0x2cb914: 0x28630008  slti        $v1, $v1, 0x8
    ctx->pc = 0x2cb914u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2cb918: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CB918u;
    {
        const bool branch_taken_0x2cb918 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cb918) {
            ctx->pc = 0x2CB928u;
            goto label_2cb928;
        }
    }
    ctx->pc = 0x2CB920u;
    // 0x2cb920: 0xa3808a40  sb          $zero, -0x75C0($gp)
    ctx->pc = 0x2cb920u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937152), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cb924: 0x0  nop
    ctx->pc = 0x2cb924u;
    // NOP
label_2cb928:
    // 0x2cb928: 0x3e00008  jr          $ra
    ctx->pc = 0x2CB928u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CB92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB928u;
        // 0x2cb92c: 0xad250000  sw          $a1, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CB928u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CB930u;
}
