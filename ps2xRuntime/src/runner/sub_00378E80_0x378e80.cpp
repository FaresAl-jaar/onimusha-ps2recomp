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

// Function: sub_00378E80
// Address: 0x378e80 - 0x378f40
void sub_00378E80_0x378e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00378E80_0x378e80");
#endif

    ctx->pc = 0x378e80u;

    // 0x378e80: 0x90830821  lbu         $v1, 0x821($a0)
    ctx->pc = 0x378e80u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2081)));
    // 0x378e84: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x378e84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x378e88: 0x10660011  beq         $v1, $a2, . + 4 + (0x11 << 2)
    ctx->pc = 0x378E88u;
    {
        const bool branch_taken_0x378e88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        if (branch_taken_0x378e88) {
            ctx->pc = 0x378ED0u;
            goto label_378ed0;
        }
    }
    ctx->pc = 0x378E90u;
    // 0x378e90: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x378E90u;
    {
        const bool branch_taken_0x378e90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x378e90) {
            ctx->pc = 0x378EA0u;
            goto label_378ea0;
        }
    }
    ctx->pc = 0x378E98u;
    // 0x378e98: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x378E98u;
    {
        const bool branch_taken_0x378e98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x378e98) {
            ctx->pc = 0x378F38u;
            goto label_378f38;
        }
    }
    ctx->pc = 0x378EA0u;
label_378ea0:
    // 0x378ea0: 0xa0852b8c  sb          $a1, 0x2B8C($a0)
    ctx->pc = 0x378ea0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 11148), (uint8_t)GPR_U32(ctx, 5));
    // 0x378ea4: 0xa08007f6  sb          $zero, 0x7F6($a0)
    ctx->pc = 0x378ea4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x378ea8: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x378ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x378eac: 0xa08007f4  sb          $zero, 0x7F4($a0)
    ctx->pc = 0x378eacu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x378eb0: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x378eb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x378eb4: 0xa48307f2  sh          $v1, 0x7F2($a0)
    ctx->pc = 0x378eb4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2034), (uint16_t)GPR_U32(ctx, 3));
    // 0x378eb8: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x378eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x378ebc: 0xa08507f5  sb          $a1, 0x7F5($a0)
    ctx->pc = 0x378ebcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2037), (uint8_t)GPR_U32(ctx, 5));
    // 0x378ec0: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x378ec0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x378ec4: 0xac8307ec  sw          $v1, 0x7EC($a0)
    ctx->pc = 0x378ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2028), GPR_U32(ctx, 3));
    // 0x378ec8: 0xa0860821  sb          $a2, 0x821($a0)
    ctx->pc = 0x378ec8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2081), (uint8_t)GPR_U32(ctx, 6));
    // 0x378ecc: 0x0  nop
    ctx->pc = 0x378eccu;
    // NOP
label_378ed0:
    // 0x378ed0: 0x908307f6  lbu         $v1, 0x7F6($a0)
    ctx->pc = 0x378ed0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2038)));
    // 0x378ed4: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x378ED4u;
    {
        const bool branch_taken_0x378ed4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x378ed4) {
            ctx->pc = 0x378F38u;
            goto label_378f38;
        }
    }
    ctx->pc = 0x378EDCu;
    // 0x378edc: 0x80832b8c  lb          $v1, 0x2B8C($a0)
    ctx->pc = 0x378edcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 11148)));
    // 0x378ee0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x378ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x378ee4: 0xa0832b8c  sb          $v1, 0x2B8C($a0)
    ctx->pc = 0x378ee4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 11148), (uint8_t)GPR_U32(ctx, 3));
    // 0x378ee8: 0x80832b8c  lb          $v1, 0x2B8C($a0)
    ctx->pc = 0x378ee8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 11148)));
    // 0x378eec: 0x1c600004  bgtz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x378EECu;
    {
        const bool branch_taken_0x378eec = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x378EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378EECu;
        // 0x378ef0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x378eec) {
            ctx->pc = 0x378F00u;
            goto label_378f00;
        }
    }
    ctx->pc = 0x378EF4u;
    // 0x378ef4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x378EF4u;
    {
        const bool branch_taken_0x378ef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x378EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378EF4u;
        // 0x378ef8: 0xa0830780  sb          $v1, 0x780($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 1920), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x378ef4) {
            ctx->pc = 0x378F28u;
            goto label_378f28;
        }
    }
    ctx->pc = 0x378EFCu;
    // 0x378efc: 0x0  nop
    ctx->pc = 0x378efcu;
    // NOP
label_378f00:
    // 0x378f00: 0xa08007f6  sb          $zero, 0x7F6($a0)
    ctx->pc = 0x378f00u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x378f04: 0xa08007f4  sb          $zero, 0x7F4($a0)
    ctx->pc = 0x378f04u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x378f08: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x378f08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x378f0c: 0xa48307f2  sh          $v1, 0x7F2($a0)
    ctx->pc = 0x378f0cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2034), (uint16_t)GPR_U32(ctx, 3));
    // 0x378f10: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x378f10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x378f14: 0xa08307f5  sb          $v1, 0x7F5($a0)
    ctx->pc = 0x378f14u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2037), (uint8_t)GPR_U32(ctx, 3));
    // 0x378f18: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x378f18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x378f1c: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x378f1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x378f20: 0xac8307ec  sw          $v1, 0x7EC($a0)
    ctx->pc = 0x378f20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2028), GPR_U32(ctx, 3));
    // 0x378f24: 0x0  nop
    ctx->pc = 0x378f24u;
    // NOP
label_378f28:
    // 0x378f28: 0x3c03469c  lui         $v1, 0x469C
    ctx->pc = 0x378f28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18076 << 16));
    // 0x378f2c: 0x34633e00  ori         $v1, $v1, 0x3E00
    ctx->pc = 0x378f2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)15872);
    // 0x378f30: 0xac830020  sw          $v1, 0x20($a0)
    ctx->pc = 0x378f30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 3));
    // 0x378f34: 0x0  nop
    ctx->pc = 0x378f34u;
    // NOP
label_378f38:
    // 0x378f38: 0x3e00008  jr          $ra
    ctx->pc = 0x378F38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x378F38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x378F40u;
}
