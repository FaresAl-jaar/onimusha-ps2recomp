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

// Function: sub_003E9980
// Address: 0x3e9980 - 0x3e9a28
void sub_003E9980_0x3e9980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E9980_0x3e9980");
#endif

    ctx->pc = 0x3e9980u;

    // 0x3e9980: 0x90830821  lbu         $v1, 0x821($a0)
    ctx->pc = 0x3e9980u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2081)));
    // 0x3e9984: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3e9984u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3e9988: 0x1066000f  beq         $v1, $a2, . + 4 + (0xF << 2)
    ctx->pc = 0x3E9988u;
    {
        const bool branch_taken_0x3e9988 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        if (branch_taken_0x3e9988) {
            ctx->pc = 0x3E99C8u;
            goto label_3e99c8;
        }
    }
    ctx->pc = 0x3E9990u;
    // 0x3e9990: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3E9990u;
    {
        const bool branch_taken_0x3e9990 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e9990) {
            ctx->pc = 0x3E99A0u;
            goto label_3e99a0;
        }
    }
    ctx->pc = 0x3E9998u;
    // 0x3e9998: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x3E9998u;
    {
        const bool branch_taken_0x3e9998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e9998) {
            ctx->pc = 0x3E9A20u;
            goto label_3e9a20;
        }
    }
    ctx->pc = 0x3E99A0u;
label_3e99a0:
    // 0x3e99a0: 0xa08007f6  sb          $zero, 0x7F6($a0)
    ctx->pc = 0x3e99a0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x3e99a4: 0xa08007f4  sb          $zero, 0x7F4($a0)
    ctx->pc = 0x3e99a4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x3e99a8: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x3e99a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3e99ac: 0xa48507f2  sh          $a1, 0x7F2($a0)
    ctx->pc = 0x3e99acu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2034), (uint16_t)GPR_U32(ctx, 5));
    // 0x3e99b0: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3e99b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3e99b4: 0xa08507f5  sb          $a1, 0x7F5($a0)
    ctx->pc = 0x3e99b4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2037), (uint8_t)GPR_U32(ctx, 5));
    // 0x3e99b8: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x3e99b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x3e99bc: 0xac8307ec  sw          $v1, 0x7EC($a0)
    ctx->pc = 0x3e99bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2028), GPR_U32(ctx, 3));
    // 0x3e99c0: 0xa0860821  sb          $a2, 0x821($a0)
    ctx->pc = 0x3e99c0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2081), (uint8_t)GPR_U32(ctx, 6));
    // 0x3e99c4: 0x0  nop
    ctx->pc = 0x3e99c4u;
    // NOP
label_3e99c8:
    // 0x3e99c8: 0x908307f6  lbu         $v1, 0x7F6($a0)
    ctx->pc = 0x3e99c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2038)));
    // 0x3e99cc: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x3E99CCu;
    {
        const bool branch_taken_0x3e99cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e99cc) {
            ctx->pc = 0x3E99F8u;
            goto label_3e99f8;
        }
    }
    ctx->pc = 0x3E99D4u;
    // 0x3e99d4: 0xa08007f6  sb          $zero, 0x7F6($a0)
    ctx->pc = 0x3e99d4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x3e99d8: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3e99d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3e99dc: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x3e99dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3e99e0: 0xa08007f4  sb          $zero, 0x7F4($a0)
    ctx->pc = 0x3e99e0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x3e99e4: 0xa48507f2  sh          $a1, 0x7F2($a0)
    ctx->pc = 0x3e99e4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2034), (uint16_t)GPR_U32(ctx, 5));
    // 0x3e99e8: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x3e99e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x3e99ec: 0xa08507f5  sb          $a1, 0x7F5($a0)
    ctx->pc = 0x3e99ecu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2037), (uint8_t)GPR_U32(ctx, 5));
    // 0x3e99f0: 0xac8307ec  sw          $v1, 0x7EC($a0)
    ctx->pc = 0x3e99f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2028), GPR_U32(ctx, 3));
    // 0x3e99f4: 0x0  nop
    ctx->pc = 0x3e99f4u;
    // NOP
label_3e99f8:
    // 0x3e99f8: 0x84832b24  lh          $v1, 0x2B24($a0)
    ctx->pc = 0x3e99f8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 11044)));
    // 0x3e99fc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E99FCu;
    {
        const bool branch_taken_0x3e99fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e99fc) {
            ctx->pc = 0x3E9A10u;
            goto label_3e9a10;
        }
    }
    ctx->pc = 0x3E9A04u;
    // 0x3e9a04: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3e9a04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3e9a08: 0xa4832b24  sh          $v1, 0x2B24($a0)
    ctx->pc = 0x3e9a08u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 11044), (uint16_t)GPR_U32(ctx, 3));
    // 0x3e9a0c: 0x0  nop
    ctx->pc = 0x3e9a0cu;
    // NOP
label_3e9a10:
    // 0x3e9a10: 0x84832b24  lh          $v1, 0x2B24($a0)
    ctx->pc = 0x3e9a10u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 11044)));
    // 0x3e9a14: 0x1c600002  bgtz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x3E9A14u;
    {
        const bool branch_taken_0x3e9a14 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x3E9A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9A14u;
        // 0x3e9a18: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9a14) {
            ctx->pc = 0x3E9A20u;
            goto label_3e9a20;
        }
    }
    ctx->pc = 0x3E9A1Cu;
    // 0x3e9a1c: 0xa0830780  sb          $v1, 0x780($a0)
    ctx->pc = 0x3e9a1cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1920), (uint8_t)GPR_U32(ctx, 3));
label_3e9a20:
    // 0x3e9a20: 0x3e00008  jr          $ra
    ctx->pc = 0x3E9A20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E9A20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E9A28u;
}
