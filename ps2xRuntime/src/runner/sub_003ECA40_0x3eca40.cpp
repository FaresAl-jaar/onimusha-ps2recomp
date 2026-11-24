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

// Function: sub_003ECA40
// Address: 0x3eca40 - 0x3ecb18
void sub_003ECA40_0x3eca40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003ECA40_0x3eca40");
#endif

    ctx->pc = 0x3eca40u;

    // 0x3eca40: 0x90830821  lbu         $v1, 0x821($a0)
    ctx->pc = 0x3eca40u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2081)));
    // 0x3eca44: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x3eca44u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3eca48: 0x1069001f  beq         $v1, $t1, . + 4 + (0x1F << 2)
    ctx->pc = 0x3ECA48u;
    {
        const bool branch_taken_0x3eca48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 9));
        if (branch_taken_0x3eca48) {
            ctx->pc = 0x3ECAC8u;
            goto label_3ecac8;
        }
    }
    ctx->pc = 0x3ECA50u;
    // 0x3eca50: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3ECA50u;
    {
        const bool branch_taken_0x3eca50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3eca50) {
            ctx->pc = 0x3ECA60u;
            goto label_3eca60;
        }
    }
    ctx->pc = 0x3ECA58u;
    // 0x3eca58: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x3ECA58u;
    {
        const bool branch_taken_0x3eca58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3eca58) {
            ctx->pc = 0x3ECB10u;
            goto label_3ecb10;
        }
    }
    ctx->pc = 0x3ECA60u;
label_3eca60:
    // 0x3eca60: 0x8f8880e0  lw          $t0, -0x7F20($gp)
    ctx->pc = 0x3eca60u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x3eca64: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x3eca64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x3eca68: 0x3c050068  lui         $a1, 0x68
    ctx->pc = 0x3eca68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)104 << 16));
    // 0x3eca6c: 0x34670dcd  ori         $a3, $v1, 0xDCD
    ctx->pc = 0x3eca6cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3533);
    // 0x3eca70: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x3eca70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3eca74: 0x24a54ed8  addiu       $a1, $a1, 0x4ED8
    ctx->pc = 0x3eca74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20184));
    // 0x3eca78: 0x3c038004  lui         $v1, 0x8004
    ctx->pc = 0x3eca78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32772 << 16));
    // 0x3eca7c: 0x1073818  mult        $a3, $t0, $a3
    ctx->pc = 0x3eca7cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x3eca80: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x3eca80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x3eca84: 0xaf8780e0  sw          $a3, -0x7F20($gp)
    ctx->pc = 0x3eca84u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 7));
    // 0x3eca88: 0x8f8780e0  lw          $a3, -0x7F20($gp)
    ctx->pc = 0x3eca88u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x3eca8c: 0x73b02  srl         $a3, $a3, 12
    ctx->pc = 0x3eca8cu;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 7), 12));
    // 0x3eca90: 0xe6001b  divu        $zero, $a3, $a2
    ctx->pc = 0x3eca90u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,7); } }
    // 0x3eca94: 0x0  nop
    ctx->pc = 0x3eca94u;
    // NOP
    // 0x3eca98: 0x0  nop
    ctx->pc = 0x3eca98u;
    // NOP
    // 0x3eca9c: 0x3010  mfhi        $a2
    ctx->pc = 0x3eca9cu;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x3ecaa0: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x3ecaa0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x3ecaa4: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x3ecaa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x3ecaa8: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x3ecaa8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3ecaac: 0xa08007f6  sb          $zero, 0x7F6($a0)
    ctx->pc = 0x3ecaacu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x3ecab0: 0xa08007f4  sb          $zero, 0x7F4($a0)
    ctx->pc = 0x3ecab0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x3ecab4: 0xa48507f2  sh          $a1, 0x7F2($a0)
    ctx->pc = 0x3ecab4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2034), (uint16_t)GPR_U32(ctx, 5));
    // 0x3ecab8: 0xa08007f5  sb          $zero, 0x7F5($a0)
    ctx->pc = 0x3ecab8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2037), (uint8_t)GPR_U32(ctx, 0));
    // 0x3ecabc: 0xac8307ec  sw          $v1, 0x7EC($a0)
    ctx->pc = 0x3ecabcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2028), GPR_U32(ctx, 3));
    // 0x3ecac0: 0xa0890821  sb          $t1, 0x821($a0)
    ctx->pc = 0x3ecac0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2081), (uint8_t)GPR_U32(ctx, 9));
    // 0x3ecac4: 0x0  nop
    ctx->pc = 0x3ecac4u;
    // NOP
label_3ecac8:
    // 0x3ecac8: 0x84832b24  lh          $v1, 0x2B24($a0)
    ctx->pc = 0x3ecac8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 11044)));
    // 0x3ecacc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3ECACCu;
    {
        const bool branch_taken_0x3ecacc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ecacc) {
            ctx->pc = 0x3ECAE0u;
            goto label_3ecae0;
        }
    }
    ctx->pc = 0x3ECAD4u;
    // 0x3ecad4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3ecad4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3ecad8: 0xa4832b24  sh          $v1, 0x2B24($a0)
    ctx->pc = 0x3ecad8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 11044), (uint16_t)GPR_U32(ctx, 3));
    // 0x3ecadc: 0x0  nop
    ctx->pc = 0x3ecadcu;
    // NOP
label_3ecae0:
    // 0x3ecae0: 0x84832b24  lh          $v1, 0x2B24($a0)
    ctx->pc = 0x3ecae0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 11044)));
    // 0x3ecae4: 0x1c600004  bgtz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3ECAE4u;
    {
        const bool branch_taken_0x3ecae4 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x3ECAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECAE4u;
        // 0x3ecae8: 0x2403002c  addiu       $v1, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ecae4) {
            ctx->pc = 0x3ECAF8u;
            goto label_3ecaf8;
        }
    }
    ctx->pc = 0x3ECAECu;
    // 0x3ecaec: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3ECAECu;
    {
        const bool branch_taken_0x3ecaec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ECAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECAECu;
        // 0x3ecaf0: 0xa0830780  sb          $v1, 0x780($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 1920), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ecaec) {
            ctx->pc = 0x3ECB10u;
            goto label_3ecb10;
        }
    }
    ctx->pc = 0x3ECAF4u;
    // 0x3ecaf4: 0x0  nop
    ctx->pc = 0x3ecaf4u;
    // NOP
label_3ecaf8:
    // 0x3ecaf8: 0x908307f6  lbu         $v1, 0x7F6($a0)
    ctx->pc = 0x3ecaf8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2038)));
    // 0x3ecafc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3ECAFCu;
    {
        const bool branch_taken_0x3ecafc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ECB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECAFCu;
        // 0x3ecb00: 0x2403002c  addiu       $v1, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ecafc) {
            ctx->pc = 0x3ECB10u;
            goto label_3ecb10;
        }
    }
    ctx->pc = 0x3ECB04u;
    // 0x3ecb04: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3ECB04u;
    {
        const bool branch_taken_0x3ecb04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ECB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECB04u;
        // 0x3ecb08: 0xa0830780  sb          $v1, 0x780($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 1920), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ecb04) {
            ctx->pc = 0x3ECB10u;
            goto label_3ecb10;
        }
    }
    ctx->pc = 0x3ECB0Cu;
    // 0x3ecb0c: 0x0  nop
    ctx->pc = 0x3ecb0cu;
    // NOP
label_3ecb10:
    // 0x3ecb10: 0x3e00008  jr          $ra
    ctx->pc = 0x3ECB10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3ECB10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3ECB18u;
}
