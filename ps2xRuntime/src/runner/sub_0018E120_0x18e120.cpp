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

// Function: sub_0018E120
// Address: 0x18e120 - 0x18e3c8
void sub_0018E120_0x18e120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018E120_0x18e120");
#endif

    switch (ctx->pc) {
        case 0x18e130u: goto label_18e130;
        case 0x18e140u: goto label_18e140;
        case 0x18e1e8u: goto label_18e1e8;
        case 0x18e238u: goto label_18e238;
        case 0x18e278u: goto label_18e278;
        case 0x18e2d0u: goto label_18e2d0;
        case 0x18e2f0u: goto label_18e2f0;
        case 0x18e338u: goto label_18e338;
        case 0x18e3b8u: goto label_18e3b8;
        default: break;
    }

    ctx->pc = 0x18e120u;

    // 0x18e120: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x18e120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18e124: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18e124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18e128: 0xc063838  jal         func_18E0E0
    ctx->pc = 0x18E128u;
    SET_GPR_U32(ctx, 31, 0x18E130u);
    ctx->pc = 0x18E12Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E128u;
    // 0x18e12c: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18E0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18E0E0u, 0x18E128u, 0x18E130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E130u;
label_18e130:
    // 0x18e130: 0x10e0002d  beqz        $a3, . + 4 + (0x2D << 2)
    ctx->pc = 0x18E130u;
    {
        const bool branch_taken_0x18e130 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E130u;
        // 0x18e134: 0x3c030084  lui         $v1, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)132 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e130) {
            ctx->pc = 0x18E1E8u;
            goto label_18e1e8;
        }
    }
    ctx->pc = 0x18E138u;
    // 0x18e138: 0xaf808684  sw          $zero, -0x797C($gp)
    ctx->pc = 0x18e138u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936196), GPR_U32(ctx, 0));
    // 0x18e13c: 0x24631480  addiu       $v1, $v1, 0x1480
    ctx->pc = 0x18e13cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5248));
label_18e140:
    // 0x18e140: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x18e140u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x18e144: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x18e144u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x18e148: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x18e148u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x18e14c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x18e14cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x18e150: 0xa0600004  sb          $zero, 0x4($v1)
    ctx->pc = 0x18e150u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x18e154: 0xa0600005  sb          $zero, 0x5($v1)
    ctx->pc = 0x18e154u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x18e158: 0xa0600006  sb          $zero, 0x6($v1)
    ctx->pc = 0x18e158u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 6), (uint8_t)GPR_U32(ctx, 0));
    // 0x18e15c: 0xa0600007  sb          $zero, 0x7($v1)
    ctx->pc = 0x18e15cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 7), (uint8_t)GPR_U32(ctx, 0));
    // 0x18e160: 0x8f828684  lw          $v0, -0x797C($gp)
    ctx->pc = 0x18e160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936196)));
    // 0x18e164: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x18e164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x18e168: 0xaf828684  sw          $v0, -0x797C($gp)
    ctx->pc = 0x18e168u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936196), GPR_U32(ctx, 2));
    // 0x18e16c: 0x8f878684  lw          $a3, -0x797C($gp)
    ctx->pc = 0x18e16cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936196)));
    // 0x18e170: 0x28e20fe6  slti        $v0, $a3, 0xFE6
    ctx->pc = 0x18e170u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)4070) ? 1 : 0);
    // 0x18e174: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x18E174u;
    {
        const bool branch_taken_0x18e174 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18E178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E174u;
        // 0x18e178: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e174) {
            ctx->pc = 0x18E140u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18e140;
        }
    }
    ctx->pc = 0x18E17Cu;
    // 0x18e17c: 0x3c040084  lui         $a0, 0x84
    ctx->pc = 0x18e17cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)132 << 16));
    // 0x18e180: 0x24e20001  addiu       $v0, $a3, 0x1
    ctx->pc = 0x18e180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x18e184: 0x24841480  addiu       $a0, $a0, 0x1480
    ctx->pc = 0x18e184u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5248));
    // 0x18e188: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x18e188u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x18e18c: 0x871021  addu        $v0, $a0, $a3
    ctx->pc = 0x18e18cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x18e190: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x18e190u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x18e194: 0x24e20002  addiu       $v0, $a3, 0x2
    ctx->pc = 0x18e194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
    // 0x18e198: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x18e198u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x18e19c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x18e19cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x18e1a0: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x18e1a0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x18e1a4: 0x24e20003  addiu       $v0, $a3, 0x3
    ctx->pc = 0x18e1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 3));
    // 0x18e1a8: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x18e1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x18e1ac: 0x24e20004  addiu       $v0, $a3, 0x4
    ctx->pc = 0x18e1acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x18e1b0: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x18e1b0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x18e1b4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x18e1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x18e1b8: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x18e1b8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x18e1bc: 0x24e20005  addiu       $v0, $a3, 0x5
    ctx->pc = 0x18e1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 5));
    // 0x18e1c0: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x18e1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x18e1c4: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x18e1c4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x18e1c8: 0x24020fee  addiu       $v0, $zero, 0xFEE
    ctx->pc = 0x18e1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4078));
    // 0x18e1cc: 0xaf828690  sw          $v0, -0x7970($gp)
    ctx->pc = 0x18e1ccu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936208), GPR_U32(ctx, 2));
    // 0x18e1d0: 0x8f828684  lw          $v0, -0x797C($gp)
    ctx->pc = 0x18e1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936196)));
    // 0x18e1d4: 0xaf808698  sw          $zero, -0x7968($gp)
    ctx->pc = 0x18e1d4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936216), GPR_U32(ctx, 0));
    // 0x18e1d8: 0xaf80869c  sw          $zero, -0x7964($gp)
    ctx->pc = 0x18e1d8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936220), GPR_U32(ctx, 0));
    // 0x18e1dc: 0x24420006  addiu       $v0, $v0, 0x6
    ctx->pc = 0x18e1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6));
    // 0x18e1e0: 0xaf828684  sw          $v0, -0x797C($gp)
    ctx->pc = 0x18e1e0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936196), GPR_U32(ctx, 2));
    // 0x18e1e4: 0x0  nop
    ctx->pc = 0x18e1e4u;
    // NOP
label_18e1e8:
    // 0x18e1e8: 0x10c00071  beqz        $a2, . + 4 + (0x71 << 2)
    ctx->pc = 0x18E1E8u;
    {
        const bool branch_taken_0x18e1e8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e1e8) {
            ctx->pc = 0x18E3B0u;
            goto label_18e3b0;
        }
    }
    ctx->pc = 0x18E1F0u;
    // 0x18e1f0: 0x8f83869c  lw          $v1, -0x7964($gp)
    ctx->pc = 0x18e1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936220)));
    // 0x18e1f4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x18e1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18e1f8: 0x1062003b  beq         $v1, $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x18E1F8u;
    {
        const bool branch_taken_0x18e1f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x18E1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E1F8u;
        // 0x18e1fc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e1f8) {
            ctx->pc = 0x18E2E8u;
            goto label_18e2e8;
        }
    }
    ctx->pc = 0x18E200u;
    // 0x18e200: 0x10620017  beq         $v1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x18E200u;
    {
        const bool branch_taken_0x18e200 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x18e200) {
            ctx->pc = 0x18E260u;
            goto label_18e260;
        }
    }
    ctx->pc = 0x18E208u;
    // 0x18e208: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18E208u;
    {
        const bool branch_taken_0x18e208 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e208) {
            ctx->pc = 0x18E218u;
            goto label_18e218;
        }
    }
    ctx->pc = 0x18E210u;
    // 0x18e210: 0x1000fff5  b           . + 4 + (-0xB << 2)
    ctx->pc = 0x18E210u;
    {
        const bool branch_taken_0x18e210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e210) {
            ctx->pc = 0x18E1E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18e1e8;
        }
    }
    ctx->pc = 0x18E218u;
label_18e218:
    // 0x18e218: 0x8f828698  lw          $v0, -0x7968($gp)
    ctx->pc = 0x18e218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936216)));
    // 0x18e21c: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x18e21cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x18e220: 0xaf828698  sw          $v0, -0x7968($gp)
    ctx->pc = 0x18e220u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936216), GPR_U32(ctx, 2));
    // 0x18e224: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x18e224u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x18e228: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x18E228u;
    {
        const bool branch_taken_0x18e228 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18e228) {
            ctx->pc = 0x18E250u;
            goto label_18e250;
        }
    }
    ctx->pc = 0x18E230u;
    // 0x18e230: 0xc06383c  jal         func_18E0F0
    ctx->pc = 0x18E230u;
    SET_GPR_U32(ctx, 31, 0x18E238u);
    ctx->pc = 0x18E0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18E0F0u, 0x18E230u, 0x18E238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E238u;
label_18e238:
    // 0x18e238: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18e238u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18e23c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x18e23cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x18e240: 0xaf828694  sw          $v0, -0x796C($gp)
    ctx->pc = 0x18e240u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936212), GPR_U32(ctx, 2));
    // 0x18e244: 0x8f828694  lw          $v0, -0x796C($gp)
    ctx->pc = 0x18e244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936212)));
    // 0x18e248: 0x3442ff00  ori         $v0, $v0, 0xFF00
    ctx->pc = 0x18e248u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65280);
    // 0x18e24c: 0xaf828698  sw          $v0, -0x7968($gp)
    ctx->pc = 0x18e24cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936216), GPR_U32(ctx, 2));
label_18e250:
    // 0x18e250: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18e250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18e254: 0x1000ffe4  b           . + 4 + (-0x1C << 2)
    ctx->pc = 0x18E254u;
    {
        const bool branch_taken_0x18e254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E254u;
        // 0x18e258: 0xaf82869c  sw          $v0, -0x7964($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936220), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e254) {
            ctx->pc = 0x18E1E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18e1e8;
        }
    }
    ctx->pc = 0x18E25Cu;
    // 0x18e25c: 0x0  nop
    ctx->pc = 0x18e25cu;
    // NOP
label_18e260:
    // 0x18e260: 0x8f828698  lw          $v0, -0x7968($gp)
    ctx->pc = 0x18e260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936216)));
    // 0x18e264: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x18e264u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x18e268: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x18E268u;
    {
        const bool branch_taken_0x18e268 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e268) {
            ctx->pc = 0x18E2C8u;
            goto label_18e2c8;
        }
    }
    ctx->pc = 0x18E270u;
    // 0x18e270: 0xc06383c  jal         func_18E0F0
    ctx->pc = 0x18E270u;
    SET_GPR_U32(ctx, 31, 0x18E278u);
    ctx->pc = 0x18E0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18E0F0u, 0x18E270u, 0x18E278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E278u;
label_18e278:
    // 0x18e278: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18e278u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18e27c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x18e27cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x18e280: 0xaf828694  sw          $v0, -0x796C($gp)
    ctx->pc = 0x18e280u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936212), GPR_U32(ctx, 2));
    // 0x18e284: 0x8f838694  lw          $v1, -0x796C($gp)
    ctx->pc = 0x18e284u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936212)));
    // 0x18e288: 0x3c020084  lui         $v0, 0x84
    ctx->pc = 0x18e288u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)132 << 16));
    // 0x18e28c: 0x24421480  addiu       $v0, $v0, 0x1480
    ctx->pc = 0x18e28cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5248));
    // 0x18e290: 0xa1030000  sb          $v1, 0x0($t0)
    ctx->pc = 0x18e290u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x18e294: 0x8f838690  lw          $v1, -0x7970($gp)
    ctx->pc = 0x18e294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936208)));
    // 0x18e298: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x18e298u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x18e29c: 0x8f848694  lw          $a0, -0x796C($gp)
    ctx->pc = 0x18e29cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936212)));
    // 0x18e2a0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18e2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18e2a4: 0xa0440000  sb          $a0, 0x0($v0)
    ctx->pc = 0x18e2a4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x18e2a8: 0x8f828690  lw          $v0, -0x7970($gp)
    ctx->pc = 0x18e2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936208)));
    // 0x18e2ac: 0xaf80869c  sw          $zero, -0x7964($gp)
    ctx->pc = 0x18e2acu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936220), GPR_U32(ctx, 0));
    // 0x18e2b0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x18e2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x18e2b4: 0xaf828690  sw          $v0, -0x7970($gp)
    ctx->pc = 0x18e2b4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936208), GPR_U32(ctx, 2));
    // 0x18e2b8: 0x8f828690  lw          $v0, -0x7970($gp)
    ctx->pc = 0x18e2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936208)));
    // 0x18e2bc: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x18e2bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x18e2c0: 0x1000ffc9  b           . + 4 + (-0x37 << 2)
    ctx->pc = 0x18E2C0u;
    {
        const bool branch_taken_0x18e2c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E2C0u;
        // 0x18e2c4: 0xaf828690  sw          $v0, -0x7970($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936208), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e2c0) {
            ctx->pc = 0x18E1E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18e1e8;
        }
    }
    ctx->pc = 0x18E2C8u;
label_18e2c8:
    // 0x18e2c8: 0xc06383c  jal         func_18E0F0
    ctx->pc = 0x18E2C8u;
    SET_GPR_U32(ctx, 31, 0x18E2D0u);
    ctx->pc = 0x18E0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18E0F0u, 0x18E2C8u, 0x18E2D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E2D0u;
label_18e2d0:
    // 0x18e2d0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18e2d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18e2d4: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x18e2d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x18e2d8: 0xaf828684  sw          $v0, -0x797C($gp)
    ctx->pc = 0x18e2d8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936196), GPR_U32(ctx, 2));
    // 0x18e2dc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x18e2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18e2e0: 0x1000ffc1  b           . + 4 + (-0x3F << 2)
    ctx->pc = 0x18E2E0u;
    {
        const bool branch_taken_0x18e2e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E2E0u;
        // 0x18e2e4: 0xaf82869c  sw          $v0, -0x7964($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936220), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e2e0) {
            ctx->pc = 0x18E1E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18e1e8;
        }
    }
    ctx->pc = 0x18E2E8u;
label_18e2e8:
    // 0x18e2e8: 0xc06383c  jal         func_18E0F0
    ctx->pc = 0x18E2E8u;
    SET_GPR_U32(ctx, 31, 0x18E2F0u);
    ctx->pc = 0x18E0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18E0F0u, 0x18E2E8u, 0x18E2F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E2F0u;
label_18e2f0:
    // 0x18e2f0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18e2f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18e2f4: 0x8f838684  lw          $v1, -0x797C($gp)
    ctx->pc = 0x18e2f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936196)));
    // 0x18e2f8: 0xaf828688  sw          $v0, -0x7978($gp)
    ctx->pc = 0x18e2f8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936200), GPR_U32(ctx, 2));
    // 0x18e2fc: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x18e2fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x18e300: 0x8f828688  lw          $v0, -0x7978($gp)
    ctx->pc = 0x18e300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936200)));
    // 0x18e304: 0xaf80868c  sw          $zero, -0x7974($gp)
    ctx->pc = 0x18e304u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936204), GPR_U32(ctx, 0));
    // 0x18e308: 0x304400f0  andi        $a0, $v0, 0xF0
    ctx->pc = 0x18e308u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)240);
    // 0x18e30c: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x18e30cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x18e310: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x18e310u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x18e314: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x18e314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x18e318: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x18e318u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x18e31c: 0xaf828688  sw          $v0, -0x7978($gp)
    ctx->pc = 0x18e31cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936200), GPR_U32(ctx, 2));
    // 0x18e320: 0x8f828688  lw          $v0, -0x7978($gp)
    ctx->pc = 0x18e320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936200)));
    // 0x18e324: 0x40082a  slt         $at, $v0, $zero
    ctx->pc = 0x18e324u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x18e328: 0x1420001f  bnez        $at, . + 4 + (0x1F << 2)
    ctx->pc = 0x18E328u;
    {
        const bool branch_taken_0x18e328 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x18E32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E328u;
        // 0x18e32c: 0xaf838684  sw          $v1, -0x797C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936196), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e328) {
            ctx->pc = 0x18E3A8u;
            goto label_18e3a8;
        }
    }
    ctx->pc = 0x18E330u;
    // 0x18e330: 0x3c070084  lui         $a3, 0x84
    ctx->pc = 0x18e330u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)132 << 16));
    // 0x18e334: 0x24e71480  addiu       $a3, $a3, 0x1480
    ctx->pc = 0x18e334u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 5248));
label_18e338:
    // 0x18e338: 0x8f838684  lw          $v1, -0x797C($gp)
    ctx->pc = 0x18e338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936196)));
    // 0x18e33c: 0x8f82868c  lw          $v0, -0x7974($gp)
    ctx->pc = 0x18e33cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936204)));
    // 0x18e340: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x18e340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x18e344: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x18e344u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x18e348: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x18e348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x18e34c: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x18e34cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18e350: 0xaf828694  sw          $v0, -0x796C($gp)
    ctx->pc = 0x18e350u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936212), GPR_U32(ctx, 2));
    // 0x18e354: 0x8f828694  lw          $v0, -0x796C($gp)
    ctx->pc = 0x18e354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936212)));
    // 0x18e358: 0xa1020000  sb          $v0, 0x0($t0)
    ctx->pc = 0x18e358u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x18e35c: 0x8f828690  lw          $v0, -0x7970($gp)
    ctx->pc = 0x18e35cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936208)));
    // 0x18e360: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x18e360u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x18e364: 0x8f838694  lw          $v1, -0x796C($gp)
    ctx->pc = 0x18e364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936212)));
    // 0x18e368: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x18e368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x18e36c: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x18e36cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x18e370: 0x8f848690  lw          $a0, -0x7970($gp)
    ctx->pc = 0x18e370u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936208)));
    // 0x18e374: 0x8f83868c  lw          $v1, -0x7974($gp)
    ctx->pc = 0x18e374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936204)));
    // 0x18e378: 0x8f828688  lw          $v0, -0x7978($gp)
    ctx->pc = 0x18e378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936200)));
    // 0x18e37c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x18e37cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x18e380: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x18e380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x18e384: 0xaf848690  sw          $a0, -0x7970($gp)
    ctx->pc = 0x18e384u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936208), GPR_U32(ctx, 4));
    // 0x18e388: 0xaf83868c  sw          $v1, -0x7974($gp)
    ctx->pc = 0x18e388u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936204), GPR_U32(ctx, 3));
    // 0x18e38c: 0x8f848690  lw          $a0, -0x7970($gp)
    ctx->pc = 0x18e38cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936208)));
    // 0x18e390: 0x8f83868c  lw          $v1, -0x7974($gp)
    ctx->pc = 0x18e390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936204)));
    // 0x18e394: 0x30840fff  andi        $a0, $a0, 0xFFF
    ctx->pc = 0x18e394u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
    // 0x18e398: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x18e398u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x18e39c: 0x1020ffe6  beqz        $at, . + 4 + (-0x1A << 2)
    ctx->pc = 0x18E39Cu;
    {
        const bool branch_taken_0x18e39c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E39Cu;
        // 0x18e3a0: 0xaf848690  sw          $a0, -0x7970($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936208), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e39c) {
            ctx->pc = 0x18E338u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18e338;
        }
    }
    ctx->pc = 0x18E3A4u;
    // 0x18e3a4: 0x0  nop
    ctx->pc = 0x18e3a4u;
    // NOP
label_18e3a8:
    // 0x18e3a8: 0x1000ff8f  b           . + 4 + (-0x71 << 2)
    ctx->pc = 0x18E3A8u;
    {
        const bool branch_taken_0x18e3a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E3A8u;
        // 0x18e3ac: 0xaf80869c  sw          $zero, -0x7964($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936220), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e3a8) {
            ctx->pc = 0x18E1E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18e1e8;
        }
    }
    ctx->pc = 0x18E3B0u;
label_18e3b0:
    // 0x18e3b0: 0xc063844  jal         func_18E110
    ctx->pc = 0x18E3B0u;
    SET_GPR_U32(ctx, 31, 0x18E3B8u);
    ctx->pc = 0x18E110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18E110u, 0x18E3B0u, 0x18E3B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E3B8u;
label_18e3b8:
    // 0x18e3b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18e3b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18e3bc: 0x1051023  subu        $v0, $t0, $a1
    ctx->pc = 0x18e3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x18e3c0: 0x3e00008  jr          $ra
    ctx->pc = 0x18E3C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18E3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E3C0u;
        // 0x18e3c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18E3C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18E3C8u;
}
