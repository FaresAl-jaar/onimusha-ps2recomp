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

// Function: sub_0035E2C0
// Address: 0x35e2c0 - 0x35e3c0
void sub_0035E2C0_0x35e2c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035E2C0_0x35e2c0");
#endif

    ctx->pc = 0x35e2c0u;

    // 0x35e2c0: 0x8c8306ac  lw          $v1, 0x6AC($a0)
    ctx->pc = 0x35e2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1708)));
    // 0x35e2c4: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x35e2c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x35e2c8: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x35e2c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x35e2cc: 0xac8306ac  sw          $v1, 0x6AC($a0)
    ctx->pc = 0x35e2ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1708), GPR_U32(ctx, 3));
    // 0x35e2d0: 0x8c8306b4  lw          $v1, 0x6B4($a0)
    ctx->pc = 0x35e2d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1716)));
    // 0x35e2d4: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x35e2d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x35e2d8: 0xac8306b4  sw          $v1, 0x6B4($a0)
    ctx->pc = 0x35e2d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1716), GPR_U32(ctx, 3));
    // 0x35e2dc: 0x90830821  lbu         $v1, 0x821($a0)
    ctx->pc = 0x35e2dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2081)));
    // 0x35e2e0: 0x10670031  beq         $v1, $a3, . + 4 + (0x31 << 2)
    ctx->pc = 0x35E2E0u;
    {
        const bool branch_taken_0x35e2e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        ctx->pc = 0x35E2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E2E0u;
        // 0x35e2e4: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35e2e0) {
            ctx->pc = 0x35E3A8u;
            goto label_35e3a8;
        }
    }
    ctx->pc = 0x35E2E8u;
    // 0x35e2e8: 0x10660021  beq         $v1, $a2, . + 4 + (0x21 << 2)
    ctx->pc = 0x35E2E8u;
    {
        const bool branch_taken_0x35e2e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        ctx->pc = 0x35E2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E2E8u;
        // 0x35e2ec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35e2e8) {
            ctx->pc = 0x35E370u;
            goto label_35e370;
        }
    }
    ctx->pc = 0x35E2F0u;
    // 0x35e2f0: 0x10650011  beq         $v1, $a1, . + 4 + (0x11 << 2)
    ctx->pc = 0x35E2F0u;
    {
        const bool branch_taken_0x35e2f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x35e2f0) {
            ctx->pc = 0x35E338u;
            goto label_35e338;
        }
    }
    ctx->pc = 0x35E2F8u;
    // 0x35e2f8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x35E2F8u;
    {
        const bool branch_taken_0x35e2f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x35e2f8) {
            ctx->pc = 0x35E308u;
            goto label_35e308;
        }
    }
    ctx->pc = 0x35E300u;
    // 0x35e300: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x35E300u;
    {
        const bool branch_taken_0x35e300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35e300) {
            ctx->pc = 0x35E3B8u;
            goto label_35e3b8;
        }
    }
    ctx->pc = 0x35E308u;
label_35e308:
    // 0x35e308: 0xa08007f6  sb          $zero, 0x7F6($a0)
    ctx->pc = 0x35e308u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x35e30c: 0xa08007f4  sb          $zero, 0x7F4($a0)
    ctx->pc = 0x35e30cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x35e310: 0x240300e0  addiu       $v1, $zero, 0xE0
    ctx->pc = 0x35e310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x35e314: 0xa48307f2  sh          $v1, 0x7F2($a0)
    ctx->pc = 0x35e314u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2034), (uint16_t)GPR_U32(ctx, 3));
    // 0x35e318: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x35e318u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x35e31c: 0xa08307f5  sb          $v1, 0x7F5($a0)
    ctx->pc = 0x35e31cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2037), (uint8_t)GPR_U32(ctx, 3));
    // 0x35e320: 0x3c038004  lui         $v1, 0x8004
    ctx->pc = 0x35e320u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32772 << 16));
    // 0x35e324: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x35e324u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x35e328: 0xac8307ec  sw          $v1, 0x7EC($a0)
    ctx->pc = 0x35e328u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2028), GPR_U32(ctx, 3));
    // 0x35e32c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x35E32Cu;
    {
        const bool branch_taken_0x35e32c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35E330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E32Cu;
        // 0x35e330: 0xa0850821  sb          $a1, 0x821($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 2081), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35e32c) {
            ctx->pc = 0x35E3B8u;
            goto label_35e3b8;
        }
    }
    ctx->pc = 0x35E334u;
    // 0x35e334: 0x0  nop
    ctx->pc = 0x35e334u;
    // NOP
label_35e338:
    // 0x35e338: 0x908307f6  lbu         $v1, 0x7F6($a0)
    ctx->pc = 0x35e338u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2038)));
    // 0x35e33c: 0x1060001e  beqz        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x35E33Cu;
    {
        const bool branch_taken_0x35e33c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x35e33c) {
            ctx->pc = 0x35E3B8u;
            goto label_35e3b8;
        }
    }
    ctx->pc = 0x35E344u;
    // 0x35e344: 0xa08007f6  sb          $zero, 0x7F6($a0)
    ctx->pc = 0x35e344u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x35e348: 0x3c038004  lui         $v1, 0x8004
    ctx->pc = 0x35e348u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32772 << 16));
    // 0x35e34c: 0x240500e1  addiu       $a1, $zero, 0xE1
    ctx->pc = 0x35e34cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 225));
    // 0x35e350: 0xa08007f4  sb          $zero, 0x7F4($a0)
    ctx->pc = 0x35e350u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x35e354: 0xa48507f2  sh          $a1, 0x7F2($a0)
    ctx->pc = 0x35e354u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2034), (uint16_t)GPR_U32(ctx, 5));
    // 0x35e358: 0x34630840  ori         $v1, $v1, 0x840
    ctx->pc = 0x35e358u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2112);
    // 0x35e35c: 0xa08007f5  sb          $zero, 0x7F5($a0)
    ctx->pc = 0x35e35cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2037), (uint8_t)GPR_U32(ctx, 0));
    // 0x35e360: 0xac8307ec  sw          $v1, 0x7EC($a0)
    ctx->pc = 0x35e360u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2028), GPR_U32(ctx, 3));
    // 0x35e364: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x35E364u;
    {
        const bool branch_taken_0x35e364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35E368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E364u;
        // 0x35e368: 0xa0860821  sb          $a2, 0x821($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 2081), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35e364) {
            ctx->pc = 0x35E3B8u;
            goto label_35e3b8;
        }
    }
    ctx->pc = 0x35E36Cu;
    // 0x35e36c: 0x0  nop
    ctx->pc = 0x35e36cu;
    // NOP
label_35e370:
    // 0x35e370: 0x908307f6  lbu         $v1, 0x7F6($a0)
    ctx->pc = 0x35e370u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2038)));
    // 0x35e374: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x35E374u;
    {
        const bool branch_taken_0x35e374 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x35e374) {
            ctx->pc = 0x35E3B8u;
            goto label_35e3b8;
        }
    }
    ctx->pc = 0x35E37Cu;
    // 0x35e37c: 0xa08007f6  sb          $zero, 0x7F6($a0)
    ctx->pc = 0x35e37cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x35e380: 0x3c038004  lui         $v1, 0x8004
    ctx->pc = 0x35e380u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32772 << 16));
    // 0x35e384: 0x240500e2  addiu       $a1, $zero, 0xE2
    ctx->pc = 0x35e384u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 226));
    // 0x35e388: 0xa08007f4  sb          $zero, 0x7F4($a0)
    ctx->pc = 0x35e388u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x35e38c: 0xa48507f2  sh          $a1, 0x7F2($a0)
    ctx->pc = 0x35e38cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2034), (uint16_t)GPR_U32(ctx, 5));
    // 0x35e390: 0x34630840  ori         $v1, $v1, 0x840
    ctx->pc = 0x35e390u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2112);
    // 0x35e394: 0xa08007f5  sb          $zero, 0x7F5($a0)
    ctx->pc = 0x35e394u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2037), (uint8_t)GPR_U32(ctx, 0));
    // 0x35e398: 0xac8307ec  sw          $v1, 0x7EC($a0)
    ctx->pc = 0x35e398u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2028), GPR_U32(ctx, 3));
    // 0x35e39c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x35E39Cu;
    {
        const bool branch_taken_0x35e39c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35E3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E39Cu;
        // 0x35e3a0: 0xa0870821  sb          $a3, 0x821($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 2081), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35e39c) {
            ctx->pc = 0x35E3B8u;
            goto label_35e3b8;
        }
    }
    ctx->pc = 0x35E3A4u;
    // 0x35e3a4: 0x0  nop
    ctx->pc = 0x35e3a4u;
    // NOP
label_35e3a8:
    // 0x35e3a8: 0x908307f6  lbu         $v1, 0x7F6($a0)
    ctx->pc = 0x35e3a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2038)));
    // 0x35e3ac: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x35E3ACu;
    {
        const bool branch_taken_0x35e3ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x35E3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E3ACu;
        // 0x35e3b0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35e3ac) {
            ctx->pc = 0x35E3B8u;
            goto label_35e3b8;
        }
    }
    ctx->pc = 0x35E3B4u;
    // 0x35e3b4: 0xa0830780  sb          $v1, 0x780($a0)
    ctx->pc = 0x35e3b4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1920), (uint8_t)GPR_U32(ctx, 3));
label_35e3b8:
    // 0x35e3b8: 0x3e00008  jr          $ra
    ctx->pc = 0x35E3B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35E3B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35E3C0u;
}
