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

// Function: sub_002812D0
// Address: 0x2812d0 - 0x281640
void sub_002812D0_0x2812d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002812D0_0x2812d0");
#endif

    switch (ctx->pc) {
        case 0x281338u: goto label_281338;
        case 0x281410u: goto label_281410;
        case 0x281598u: goto label_281598;
        case 0x281630u: goto label_281630;
        default: break;
    }

    ctx->pc = 0x2812d0u;

    // 0x2812d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2812d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2812d4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2812d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2812d8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2812d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2812dc: 0x27a9004c  addiu       $t1, $sp, 0x4C
    ctx->pc = 0x2812dcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x2812e0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2812e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2812e4: 0x27a80048  addiu       $t0, $sp, 0x48
    ctx->pc = 0x2812e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x2812e8: 0x87828148  lh          $v0, -0x7EB8($gp)
    ctx->pc = 0x2812e8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294934856)));
    // 0x2812ec: 0x27a70044  addiu       $a3, $sp, 0x44
    ctx->pc = 0x2812ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x2812f0: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x2812f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2812f4: 0x27a5003c  addiu       $a1, $sp, 0x3C
    ctx->pc = 0x2812f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x2812f8: 0xa5220000  sh          $v0, 0x0($t1)
    ctx->pc = 0x2812f8u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x2812fc: 0x8782814c  lh          $v0, -0x7EB4($gp)
    ctx->pc = 0x2812fcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294934860)));
    // 0x281300: 0xa5020000  sh          $v0, 0x0($t0)
    ctx->pc = 0x281300u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x281304: 0x87828150  lh          $v0, -0x7EB0($gp)
    ctx->pc = 0x281304u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294934864)));
    // 0x281308: 0xa4e20000  sh          $v0, 0x0($a3)
    ctx->pc = 0x281308u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x28130c: 0x87828154  lh          $v0, -0x7EAC($gp)
    ctx->pc = 0x28130cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294934868)));
    // 0x281310: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x281310u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x281314: 0x87838158  lh          $v1, -0x7EA8($gp)
    ctx->pc = 0x281314u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294934872)));
    // 0x281318: 0x9382815a  lbu         $v0, -0x7EA6($gp)
    ctx->pc = 0x281318u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294934874)));
    // 0x28131c: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x28131cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x281320: 0xa0a20002  sb          $v0, 0x2($a1)
    ctx->pc = 0x281320u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x281324: 0x90820821  lbu         $v0, 0x821($a0)
    ctx->pc = 0x281324u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2081)));
    // 0x281328: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x281328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x28132c: 0x9045003c  lbu         $a1, 0x3C($v0)
    ctx->pc = 0x28132cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x281330: 0xc09ffb0  jal         func_27FEC0
    ctx->pc = 0x281330u;
    SET_GPR_U32(ctx, 31, 0x281338u);
    ctx->pc = 0x281334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281330u;
    // 0x281334: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27FEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27FEC0u, 0x281330u, 0x281338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281338u;
label_281338:
    // 0x281338: 0x92040821  lbu         $a0, 0x821($s0)
    ctx->pc = 0x281338u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2081)));
    // 0x28133c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x28133cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x281340: 0x108300a7  beq         $a0, $v1, . + 4 + (0xA7 << 2)
    ctx->pc = 0x281340u;
    {
        const bool branch_taken_0x281340 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x281344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281340u;
        // 0x281344: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281340) {
            ctx->pc = 0x2815E0u;
            goto label_2815e0;
        }
    }
    ctx->pc = 0x281348u;
    // 0x281348: 0x10850011  beq         $a0, $a1, . + 4 + (0x11 << 2)
    ctx->pc = 0x281348u;
    {
        const bool branch_taken_0x281348 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x281348) {
            ctx->pc = 0x281390u;
            goto label_281390;
        }
    }
    ctx->pc = 0x281350u;
    // 0x281350: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x281350u;
    {
        const bool branch_taken_0x281350 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x281350) {
            ctx->pc = 0x281360u;
            goto label_281360;
        }
    }
    ctx->pc = 0x281358u;
    // 0x281358: 0x100000ab  b           . + 4 + (0xAB << 2)
    ctx->pc = 0x281358u;
    {
        const bool branch_taken_0x281358 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x281358) {
            ctx->pc = 0x281608u;
            goto label_281608;
        }
    }
    ctx->pc = 0x281360u;
label_281360:
    // 0x281360: 0xa600082a  sh          $zero, 0x82A($s0)
    ctx->pc = 0x281360u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2090), (uint16_t)GPR_U32(ctx, 0));
    // 0x281364: 0x92040839  lbu         $a0, 0x839($s0)
    ctx->pc = 0x281364u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2105)));
    // 0x281368: 0x3c038004  lui         $v1, 0x8004
    ctx->pc = 0x281368u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32772 << 16));
    // 0x28136c: 0x9d2021  addu        $a0, $a0, $sp
    ctx->pc = 0x28136cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
    // 0x281370: 0x9084004c  lbu         $a0, 0x4C($a0)
    ctx->pc = 0x281370u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x281374: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x281374u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x281378: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x281378u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x28137c: 0xa60407f2  sh          $a0, 0x7F2($s0)
    ctx->pc = 0x28137cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 4));
    // 0x281380: 0xa20007f5  sb          $zero, 0x7F5($s0)
    ctx->pc = 0x281380u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 0));
    // 0x281384: 0xae0307ec  sw          $v1, 0x7EC($s0)
    ctx->pc = 0x281384u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 3));
    // 0x281388: 0xa2050821  sb          $a1, 0x821($s0)
    ctx->pc = 0x281388u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 5));
    // 0x28138c: 0x0  nop
    ctx->pc = 0x28138cu;
    // NOP
label_281390:
    // 0x281390: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x281390u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x281394: 0x1020009c  beqz        $at, . + 4 + (0x9C << 2)
    ctx->pc = 0x281394u;
    {
        const bool branch_taken_0x281394 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x281394) {
            ctx->pc = 0x281608u;
            goto label_281608;
        }
    }
    ctx->pc = 0x28139Cu;
    // 0x28139c: 0x92030783  lbu         $v1, 0x783($s0)
    ctx->pc = 0x28139cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1923)));
    // 0x2813a0: 0x10600063  beqz        $v1, . + 4 + (0x63 << 2)
    ctx->pc = 0x2813A0u;
    {
        const bool branch_taken_0x2813a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2813a0) {
            ctx->pc = 0x281530u;
            goto label_281530;
        }
    }
    ctx->pc = 0x2813A8u;
    // 0x2813a8: 0x8e0329c0  lw          $v1, 0x29C0($s0)
    ctx->pc = 0x2813a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10688)));
    // 0x2813ac: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x2813acu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2813b0: 0x1060005f  beqz        $v1, . + 4 + (0x5F << 2)
    ctx->pc = 0x2813B0u;
    {
        const bool branch_taken_0x2813b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2813b0) {
            ctx->pc = 0x281530u;
            goto label_281530;
        }
    }
    ctx->pc = 0x2813B8u;
    // 0x2813b8: 0x92040000  lbu         $a0, 0x0($s0)
    ctx->pc = 0x2813b8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2813bc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2813bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2813c0: 0x14830013  bne         $a0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x2813C0u;
    {
        const bool branch_taken_0x2813c0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2813c0) {
            ctx->pc = 0x281410u;
            goto label_281410;
        }
    }
    ctx->pc = 0x2813C8u;
    // 0x2813c8: 0x920508e8  lbu         $a1, 0x8E8($s0)
    ctx->pc = 0x2813c8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2280)));
    // 0x2813cc: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x2813ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x2813d0: 0x24636430  addiu       $v1, $v1, 0x6430
    ctx->pc = 0x2813d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25648));
    // 0x2813d4: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x2813d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x2813d8: 0x3c020300  lui         $v0, 0x300
    ctx->pc = 0x2813d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)768 << 16));
    // 0x2813dc: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x2813dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x2813e0: 0x26070020  addiu       $a3, $s0, 0x20
    ctx->pc = 0x2813e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x2813e4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2813e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2813e8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2813e8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2813ec: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2813ecu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2813f0: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2813f0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2813f4: 0xffa50000  sd          $a1, 0x0($sp)
    ctx->pc = 0x2813f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 5));
    // 0x2813f8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2813f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2813fc: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x2813fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x281400: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x281400u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x281404: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x281404u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x281408: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x281408u;
    SET_GPR_U32(ctx, 31, 0x281410u);
    ctx->pc = 0x28140Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281408u;
    // 0x28140c: 0x622825  or          $a1, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x281408u, 0x281410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281410u;
label_281410:
    // 0x281410: 0x92030839  lbu         $v1, 0x839($s0)
    ctx->pc = 0x281410u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2105)));
    // 0x281414: 0x10600022  beqz        $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x281414u;
    {
        const bool branch_taken_0x281414 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x281414) {
            ctx->pc = 0x2814A0u;
            goto label_2814a0;
        }
    }
    ctx->pc = 0x28141Cu;
    // 0x28141c: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x28141cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x281420: 0x3c034100  lui         $v1, 0x4100
    ctx->pc = 0x281420u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
    // 0x281424: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x281424u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x281428: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x281428u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x28142c: 0x34648889  ori         $a0, $v1, 0x8889
    ctx->pc = 0x28142cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x281430: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x281430u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x281434: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x281434u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x281438: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x281438u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28143c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28143cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x281440: 0x0  nop
    ctx->pc = 0x281440u;
    // NOP
    // 0x281444: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x281444u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x281448: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x281448u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28144c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x28144Cu;
    {
        const bool branch_taken_0x28144c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x28144c) {
            ctx->pc = 0x281464u;
            goto label_281464;
        }
    }
    ctx->pc = 0x281454u;
    // 0x281454: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x281454u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x281458: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x281458u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x28145c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x28145Cu;
    {
        const bool branch_taken_0x28145c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x281460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28145Cu;
        // 0x281460: 0xa20007f6  sb          $zero, 0x7F6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28145c) {
            ctx->pc = 0x281480u;
            goto label_281480;
        }
    }
    ctx->pc = 0x281464u;
label_281464:
    // 0x281464: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x281464u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x281468: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x281468u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x28146c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x28146cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x281470: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x281470u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x281474: 0x0  nop
    ctx->pc = 0x281474u;
    // NOP
    // 0x281478: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x281478u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x28147c: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x28147cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
label_281480:
    // 0x281480: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x281480u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x281484: 0x240400c8  addiu       $a0, $zero, 0xC8
    ctx->pc = 0x281484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x281488: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x281488u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x28148c: 0xa60407f2  sh          $a0, 0x7F2($s0)
    ctx->pc = 0x28148cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 4));
    // 0x281490: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x281490u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x281494: 0xa20507f5  sb          $a1, 0x7F5($s0)
    ctx->pc = 0x281494u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 5));
    // 0x281498: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x281498u;
    {
        const bool branch_taken_0x281498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28149Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281498u;
        // 0x28149c: 0xae0307ec  sw          $v1, 0x7EC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281498) {
            ctx->pc = 0x281520u;
            goto label_281520;
        }
    }
    ctx->pc = 0x2814A0u;
label_2814a0:
    // 0x2814a0: 0x3c034100  lui         $v1, 0x4100
    ctx->pc = 0x2814a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
    // 0x2814a4: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x2814a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2814a8: 0x3c043c88  lui         $a0, 0x3C88
    ctx->pc = 0x2814a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15496 << 16));
    // 0x2814ac: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x2814acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2814b0: 0x34848889  ori         $a0, $a0, 0x8889
    ctx->pc = 0x2814b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)34953);
    // 0x2814b4: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2814b4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2814b8: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x2814b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x2814bc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2814bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2814c0: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x2814c0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2814c4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2814c4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2814c8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2814c8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2814cc: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2814CCu;
    {
        const bool branch_taken_0x2814cc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2814cc) {
            ctx->pc = 0x2814E4u;
            goto label_2814e4;
        }
    }
    ctx->pc = 0x2814D4u;
    // 0x2814d4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2814d4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2814d8: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x2814d8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x2814dc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2814DCu;
    {
        const bool branch_taken_0x2814dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2814E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2814DCu;
        // 0x2814e0: 0xa20007f6  sb          $zero, 0x7F6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2814dc) {
            ctx->pc = 0x281500u;
            goto label_281500;
        }
    }
    ctx->pc = 0x2814E4u;
label_2814e4:
    // 0x2814e4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2814e4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2814e8: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2814e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x2814ec: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2814ecu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2814f0: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x2814f0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x2814f4: 0x0  nop
    ctx->pc = 0x2814f4u;
    // NOP
    // 0x2814f8: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x2814f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x2814fc: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x2814fcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
label_281500:
    // 0x281500: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x281500u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x281504: 0x240400c9  addiu       $a0, $zero, 0xC9
    ctx->pc = 0x281504u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 201));
    // 0x281508: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x281508u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x28150c: 0xa60407f2  sh          $a0, 0x7F2($s0)
    ctx->pc = 0x28150cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 4));
    // 0x281510: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x281510u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x281514: 0xa20507f5  sb          $a1, 0x7F5($s0)
    ctx->pc = 0x281514u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 5));
    // 0x281518: 0xae0307ec  sw          $v1, 0x7EC($s0)
    ctx->pc = 0x281518u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 3));
    // 0x28151c: 0x0  nop
    ctx->pc = 0x28151cu;
    // NOP
label_281520:
    // 0x281520: 0x2403009d  addiu       $v1, $zero, 0x9D
    ctx->pc = 0x281520u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 157));
    // 0x281524: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x281524u;
    {
        const bool branch_taken_0x281524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x281528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281524u;
        // 0x281528: 0xa2030780  sb          $v1, 0x780($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281524) {
            ctx->pc = 0x281608u;
            goto label_281608;
        }
    }
    ctx->pc = 0x28152Cu;
    // 0x28152c: 0x0  nop
    ctx->pc = 0x28152cu;
    // NOP
label_281530:
    // 0x281530: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x281530u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x281534: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x281534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x281538: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x281538u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x28153c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x28153cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x281540: 0x34638889  ori         $v1, $v1, 0x8889
    ctx->pc = 0x281540u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x281544: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x281544u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x281548: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x281548u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x28154c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28154cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x281550: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x281550u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x281554: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x281554u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x281558: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x281558u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28155c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x28155Cu;
    {
        const bool branch_taken_0x28155c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x28155c) {
            ctx->pc = 0x281574u;
            goto label_281574;
        }
    }
    ctx->pc = 0x281564u;
    // 0x281564: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x281564u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x281568: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x281568u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x28156c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x28156Cu;
    {
        const bool branch_taken_0x28156c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x281570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28156Cu;
        // 0x281570: 0x3065ffff  andi        $a1, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28156c) {
            ctx->pc = 0x281590u;
            goto label_281590;
        }
    }
    ctx->pc = 0x281574u;
label_281574:
    // 0x281574: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x281574u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x281578: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x281578u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x28157c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x28157cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x281580: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x281580u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x281584: 0x0  nop
    ctx->pc = 0x281584u;
    // NOP
    // 0x281588: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x281588u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x28158c: 0x3065ffff  andi        $a1, $v1, 0xFFFF
    ctx->pc = 0x28158cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_281590:
    // 0x281590: 0xc0a6b14  jal         func_29AC50
    ctx->pc = 0x281590u;
    SET_GPR_U32(ctx, 31, 0x281598u);
    ctx->pc = 0x281594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281590u;
    // 0x281594: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29AC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29AC50u, 0x281590u, 0x281598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281598u;
label_281598:
    // 0x281598: 0x92060839  lbu         $a2, 0x839($s0)
    ctx->pc = 0x281598u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2105)));
    // 0x28159c: 0x3c048004  lui         $a0, 0x8004
    ctx->pc = 0x28159cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32772 << 16));
    // 0x2815a0: 0x9205083b  lbu         $a1, 0x83B($s0)
    ctx->pc = 0x2815a0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2107)));
    // 0x2815a4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2815a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2815a8: 0xdd3021  addu        $a2, $a2, $sp
    ctx->pc = 0x2815a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 29)));
    // 0x2815ac: 0x90c60040  lbu         $a2, 0x40($a2)
    ctx->pc = 0x2815acu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 64)));
    // 0x2815b0: 0xa205083c  sb          $a1, 0x83C($s0)
    ctx->pc = 0x2815b0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2108), (uint8_t)GPR_U32(ctx, 5));
    // 0x2815b4: 0xa206083b  sb          $a2, 0x83B($s0)
    ctx->pc = 0x2815b4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2107), (uint8_t)GPR_U32(ctx, 6));
    // 0x2815b8: 0x92050839  lbu         $a1, 0x839($s0)
    ctx->pc = 0x2815b8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2105)));
    // 0x2815bc: 0xbd2821  addu        $a1, $a1, $sp
    ctx->pc = 0x2815bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 29)));
    // 0x2815c0: 0x90a50048  lbu         $a1, 0x48($a1)
    ctx->pc = 0x2815c0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 72)));
    // 0x2815c4: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x2815c4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x2815c8: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x2815c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x2815cc: 0xa60507f2  sh          $a1, 0x7F2($s0)
    ctx->pc = 0x2815ccu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 5));
    // 0x2815d0: 0xa20007f5  sb          $zero, 0x7F5($s0)
    ctx->pc = 0x2815d0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 0));
    // 0x2815d4: 0xae0407ec  sw          $a0, 0x7EC($s0)
    ctx->pc = 0x2815d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 4));
    // 0x2815d8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2815D8u;
    {
        const bool branch_taken_0x2815d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2815DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2815D8u;
        // 0x2815dc: 0xa2030821  sb          $v1, 0x821($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2815d8) {
            ctx->pc = 0x281608u;
            goto label_281608;
        }
    }
    ctx->pc = 0x2815E0u;
label_2815e0:
    // 0x2815e0: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2815E0u;
    {
        const bool branch_taken_0x2815e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2815e0) {
            ctx->pc = 0x281608u;
            goto label_281608;
        }
    }
    ctx->pc = 0x2815E8u;
    // 0x2815e8: 0x920307f6  lbu         $v1, 0x7F6($s0)
    ctx->pc = 0x2815e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2038)));
    // 0x2815ec: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2815ECu;
    {
        const bool branch_taken_0x2815ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2815ec) {
            ctx->pc = 0x281608u;
            goto label_281608;
        }
    }
    ctx->pc = 0x2815F4u;
    // 0x2815f4: 0x92030839  lbu         $v1, 0x839($s0)
    ctx->pc = 0x2815f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2105)));
    // 0x2815f8: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x2815f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x2815fc: 0x90630044  lbu         $v1, 0x44($v1)
    ctx->pc = 0x2815fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x281600: 0xa2030780  sb          $v1, 0x780($s0)
    ctx->pc = 0x281600u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
    // 0x281604: 0x0  nop
    ctx->pc = 0x281604u;
    // NOP
label_281608:
    // 0x281608: 0x8e0306bc  lw          $v1, 0x6BC($s0)
    ctx->pc = 0x281608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1724)));
    // 0x28160c: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x28160cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x281610: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x281610u;
    {
        const bool branch_taken_0x281610 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x281610) {
            ctx->pc = 0x281630u;
            goto label_281630;
        }
    }
    ctx->pc = 0x281618u;
    // 0x281618: 0x92030821  lbu         $v1, 0x821($s0)
    ctx->pc = 0x281618u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2081)));
    // 0x28161c: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x28161cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x281620: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x281620u;
    {
        const bool branch_taken_0x281620 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x281624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281620u;
        // 0x281624: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281620) {
            ctx->pc = 0x281630u;
            goto label_281630;
        }
    }
    ctx->pc = 0x281628u;
    // 0x281628: 0xc0a0644  jal         func_281910
    ctx->pc = 0x281628u;
    SET_GPR_U32(ctx, 31, 0x281630u);
    ctx->pc = 0x28162Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281628u;
    // 0x28162c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x281910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281910u, 0x281628u, 0x281630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281630u;
label_281630:
    // 0x281630: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x281630u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x281634: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x281634u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x281638: 0x3e00008  jr          $ra
    ctx->pc = 0x281638u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28163Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281638u;
        // 0x28163c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x281638u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x281640u;
}
