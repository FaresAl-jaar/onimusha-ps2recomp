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

// Function: sub_00364250
// Address: 0x364250 - 0x3647a8
void sub_00364250_0x364250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00364250_0x364250");
#endif

    switch (ctx->pc) {
        case 0x364268u: goto label_364268;
        case 0x364330u: goto label_364330;
        case 0x364384u: goto label_364384;
        case 0x3643b4u: goto label_3643b4;
        case 0x364400u: goto label_364400;
        case 0x364470u: goto label_364470;
        case 0x36447cu: goto label_36447c;
        case 0x3644bcu: goto label_3644bc;
        case 0x364540u: goto label_364540;
        case 0x364570u: goto label_364570;
        case 0x364594u: goto label_364594;
        case 0x3645c8u: goto label_3645c8;
        case 0x3645f0u: goto label_3645f0;
        case 0x364624u: goto label_364624;
        case 0x364660u: goto label_364660;
        case 0x364674u: goto label_364674;
        case 0x364684u: goto label_364684;
        case 0x3646fcu: goto label_3646fc;
        case 0x364714u: goto label_364714;
        case 0x364724u: goto label_364724;
        case 0x364770u: goto label_364770;
        case 0x364784u: goto label_364784;
        case 0x364794u: goto label_364794;
        default: break;
    }

    ctx->pc = 0x364250u;

    // 0x364250: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x364250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x364254: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x364254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x364258: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x364258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x36425c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x36425cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364260: 0xc0957bc  jal         func_255EF0
    ctx->pc = 0x364260u;
    SET_GPR_U32(ctx, 31, 0x364268u);
    ctx->pc = 0x364264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364260u;
    // 0x364264: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255EF0u, 0x364260u, 0x364268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364268u;
label_364268:
    // 0x364268: 0x24030195  addiu       $v1, $zero, 0x195
    ctx->pc = 0x364268u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 405));
    // 0x36426c: 0x24070021  addiu       $a3, $zero, 0x21
    ctx->pc = 0x36426cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x364270: 0xa7a30032  sh          $v1, 0x32($sp)
    ctx->pc = 0x364270u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 50), (uint16_t)GPR_U32(ctx, 3));
    // 0x364274: 0x240400f1  addiu       $a0, $zero, 0xF1
    ctx->pc = 0x364274u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 241));
    // 0x364278: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x364278u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36427c: 0xa3a00034  sb          $zero, 0x34($sp)
    ctx->pc = 0x36427cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 52), (uint8_t)GPR_U32(ctx, 0));
    // 0x364280: 0xa3a70037  sb          $a3, 0x37($sp)
    ctx->pc = 0x364280u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 55), (uint8_t)GPR_U32(ctx, 7));
    // 0x364284: 0xa3a00039  sb          $zero, 0x39($sp)
    ctx->pc = 0x364284u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 57), (uint8_t)GPR_U32(ctx, 0));
    // 0x364288: 0xa3a3003a  sb          $v1, 0x3A($sp)
    ctx->pc = 0x364288u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 58), (uint8_t)GPR_U32(ctx, 3));
    // 0x36428c: 0x92060002  lbu         $a2, 0x2($s0)
    ctx->pc = 0x36428cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x364290: 0x10c40139  beq         $a2, $a0, . + 4 + (0x139 << 2)
    ctx->pc = 0x364290u;
    {
        const bool branch_taken_0x364290 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        ctx->pc = 0x364294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364290u;
        // 0x364294: 0x240500f0  addiu       $a1, $zero, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x364290) {
            ctx->pc = 0x364778u;
            goto label_364778;
        }
    }
    ctx->pc = 0x364298u;
    // 0x364298: 0x10c5012b  beq         $a2, $a1, . + 4 + (0x12B << 2)
    ctx->pc = 0x364298u;
    {
        const bool branch_taken_0x364298 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        ctx->pc = 0x36429Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364298u;
        // 0x36429c: 0x240400e1  addiu       $a0, $zero, 0xE1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 225));
        ctx->in_delay_slot = false;
        if (branch_taken_0x364298) {
            ctx->pc = 0x364748u;
            goto label_364748;
        }
    }
    ctx->pc = 0x3642A0u;
    // 0x3642a0: 0x10c40119  beq         $a2, $a0, . + 4 + (0x119 << 2)
    ctx->pc = 0x3642A0u;
    {
        const bool branch_taken_0x3642a0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        if (branch_taken_0x3642a0) {
            ctx->pc = 0x364708u;
            goto label_364708;
        }
    }
    ctx->pc = 0x3642A8u;
    // 0x3642a8: 0x240400e0  addiu       $a0, $zero, 0xE0
    ctx->pc = 0x3642a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x3642ac: 0x10c400fe  beq         $a2, $a0, . + 4 + (0xFE << 2)
    ctx->pc = 0x3642ACu;
    {
        const bool branch_taken_0x3642ac = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        if (branch_taken_0x3642ac) {
            ctx->pc = 0x3646A8u;
            goto label_3646a8;
        }
    }
    ctx->pc = 0x3642B4u;
    // 0x3642b4: 0x10c700ec  beq         $a2, $a3, . + 4 + (0xEC << 2)
    ctx->pc = 0x3642B4u;
    {
        const bool branch_taken_0x3642b4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 7));
        ctx->pc = 0x3642B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3642B4u;
        // 0x3642b8: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3642b4) {
            ctx->pc = 0x364668u;
            goto label_364668;
        }
    }
    ctx->pc = 0x3642BCu;
    // 0x3642bc: 0x10c400dc  beq         $a2, $a0, . + 4 + (0xDC << 2)
    ctx->pc = 0x3642BCu;
    {
        const bool branch_taken_0x3642bc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        if (branch_taken_0x3642bc) {
            ctx->pc = 0x364630u;
            goto label_364630;
        }
    }
    ctx->pc = 0x3642C4u;
    // 0x3642c4: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x3642c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x3642c8: 0x10c40083  beq         $a2, $a0, . + 4 + (0x83 << 2)
    ctx->pc = 0x3642C8u;
    {
        const bool branch_taken_0x3642c8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        ctx->pc = 0x3642CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3642C8u;
        // 0x3642cc: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3642c8) {
            ctx->pc = 0x3644D8u;
            goto label_3644d8;
        }
    }
    ctx->pc = 0x3642D0u;
    // 0x3642d0: 0x10c4007d  beq         $a2, $a0, . + 4 + (0x7D << 2)
    ctx->pc = 0x3642D0u;
    {
        const bool branch_taken_0x3642d0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        if (branch_taken_0x3642d0) {
            ctx->pc = 0x3644C8u;
            goto label_3644c8;
        }
    }
    ctx->pc = 0x3642D8u;
    // 0x3642d8: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x3642D8u;
    {
        const bool branch_taken_0x3642d8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x3642d8) {
            ctx->pc = 0x3642E8u;
            goto label_3642e8;
        }
    }
    ctx->pc = 0x3642E0u;
    // 0x3642e0: 0x1000012d  b           . + 4 + (0x12D << 2)
    ctx->pc = 0x3642E0u;
    {
        const bool branch_taken_0x3642e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3642e0) {
            ctx->pc = 0x364798u;
            goto label_364798;
        }
    }
    ctx->pc = 0x3642E8u;
label_3642e8:
    // 0x3642e8: 0xa2000004  sb          $zero, 0x4($s0)
    ctx->pc = 0x3642e8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x3642ec: 0x3c01008f  lui         $at, 0x8F
    ctx->pc = 0x3642ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)143 << 16));
    // 0x3642f0: 0x3c040005  lui         $a0, 0x5
    ctx->pc = 0x3642f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)5 << 16));
    // 0x3642f4: 0x8c25ea28  lw          $a1, -0x15D8($at)
    ctx->pc = 0x3642f4u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x8EEA28u));
    // 0x3642f8: 0x34840050  ori         $a0, $a0, 0x50
    ctx->pc = 0x3642f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)80);
    // 0x3642fc: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x3642fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x364300: 0x1080002d  beqz        $a0, . + 4 + (0x2D << 2)
    ctx->pc = 0x364300u;
    {
        const bool branch_taken_0x364300 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x364304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364300u;
        // 0x364304: 0x3c040001  lui         $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x364300) {
            ctx->pc = 0x3643B8u;
            goto label_3643b8;
        }
    }
    ctx->pc = 0x364308u;
    // 0x364308: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x364308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x36430c: 0x34840010  ori         $a0, $a0, 0x10
    ctx->pc = 0x36430cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16);
    // 0x364310: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x364310u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364314: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x364314u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x364318: 0x93858bd4  lbu         $a1, -0x742C($gp)
    ctx->pc = 0x364318u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937556)));
    // 0x36431c: 0x64100a  movz        $v0, $v1, $a0
    ctx->pc = 0x36431cu;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x364320: 0x2363c  dsll32      $a2, $v0, 24
    ctx->pc = 0x364320u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 24));
    // 0x364324: 0x6363f  dsra32      $a2, $a2, 24
    ctx->pc = 0x364324u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
    // 0x364328: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x364328u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x36432c: 0x0  nop
    ctx->pc = 0x36432cu;
    // NOP
label_364330:
    // 0x364330: 0x93828bd0  lbu         $v0, -0x7430($gp)
    ctx->pc = 0x364330u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937552)));
    // 0x364334: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x364334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x364338: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x364338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x36433c: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x36433cu;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x364340: 0x0  nop
    ctx->pc = 0x364340u;
    // NOP
    // 0x364344: 0x0  nop
    ctx->pc = 0x364344u;
    // NOP
    // 0x364348: 0x1010  mfhi        $v0
    ctx->pc = 0x364348u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x36434c: 0xa3828bd0  sb          $v0, -0x7430($gp)
    ctx->pc = 0x36434cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937552), (uint8_t)GPR_U32(ctx, 2));
    // 0x364350: 0x93828bd0  lbu         $v0, -0x7430($gp)
    ctx->pc = 0x364350u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937552)));
    // 0x364354: 0x431004  sllv        $v0, $v1, $v0
    ctx->pc = 0x364354u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x364358: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x364358u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x36435c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x36435Cu;
    {
        const bool branch_taken_0x36435c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x36435c) {
            ctx->pc = 0x364378u;
            goto label_364378;
        }
    }
    ctx->pc = 0x364364u;
    // 0x364364: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x364364u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x364368: 0x2ce20003  sltiu       $v0, $a3, 0x3
    ctx->pc = 0x364368u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x36436c: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x36436Cu;
    {
        const bool branch_taken_0x36436c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x36436c) {
            ctx->pc = 0x364330u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_364330;
        }
    }
    ctx->pc = 0x364374u;
    // 0x364374: 0x0  nop
    ctx->pc = 0x364374u;
    // NOP
label_364378:
    // 0x364378: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x364378u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x36437c: 0xc0b78d0  jal         func_2DE340
    ctx->pc = 0x36437Cu;
    SET_GPR_U32(ctx, 31, 0x364384u);
    ctx->pc = 0x364380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36437Cu;
    // 0x364380: 0x24847180  addiu       $a0, $a0, 0x7180 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE340u, 0x36437Cu, 0x364384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364384u;
label_364384:
    // 0x364384: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x364384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x364388: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x364388u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x36438c: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x36438cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x364390: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x364390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x364394: 0x2405030f  addiu       $a1, $zero, 0x30F
    ctx->pc = 0x364394u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 783));
    // 0x364398: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x364398u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36439c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x36439cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3643a0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3643a0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3643a4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3643a4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3643a8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3643a8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3643ac: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3643ACu;
    SET_GPR_U32(ctx, 31, 0x3643B4u);
    ctx->pc = 0x3643B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3643ACu;
    // 0x3643b0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3643ACu, 0x3643B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3643B4u;
label_3643b4:
    // 0x3643b4: 0x0  nop
    ctx->pc = 0x3643b4u;
    // NOP
label_3643b8:
    // 0x3643b8: 0x3c01008f  lui         $at, 0x8F
    ctx->pc = 0x3643b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)143 << 16));
    // 0x3643bc: 0x8c24ea24  lw          $a0, -0x15DC($at)
    ctx->pc = 0x3643bcu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x8EEA24u));
    // 0x3643c0: 0x30834000  andi        $v1, $a0, 0x4000
    ctx->pc = 0x3643c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16384);
    // 0x3643c4: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x3643C4u;
    {
        const bool branch_taken_0x3643c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3643c4) {
            ctx->pc = 0x364410u;
            goto label_364410;
        }
    }
    ctx->pc = 0x3643CCu;
    // 0x3643cc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3643ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3643d0: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3643d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3643d4: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x3643d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x3643d8: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3643d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3643dc: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x3643dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x3643e0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3643e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3643e4: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x3643e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x3643e8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3643e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3643ec: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3643ecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3643f0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3643f0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3643f4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3643f4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3643f8: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3643F8u;
    SET_GPR_U32(ctx, 31, 0x364400u);
    ctx->pc = 0x3643FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3643F8u;
    // 0x3643fc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3643F8u, 0x364400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364400u;
label_364400:
    // 0x364400: 0x240300e0  addiu       $v1, $zero, 0xE0
    ctx->pc = 0x364400u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x364404: 0x100000e4  b           . + 4 + (0xE4 << 2)
    ctx->pc = 0x364404u;
    {
        const bool branch_taken_0x364404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x364408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364404u;
        // 0x364408: 0xa2030002  sb          $v1, 0x2($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x364404) {
            ctx->pc = 0x364798u;
            goto label_364798;
        }
    }
    ctx->pc = 0x36440Cu;
    // 0x36440c: 0x0  nop
    ctx->pc = 0x36440cu;
    // NOP
label_364410:
    // 0x364410: 0x30832008  andi        $v1, $a0, 0x2008
    ctx->pc = 0x364410u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8200);
    // 0x364414: 0x106000e0  beqz        $v1, . + 4 + (0xE0 << 2)
    ctx->pc = 0x364414u;
    {
        const bool branch_taken_0x364414 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x364414) {
            ctx->pc = 0x364798u;
            goto label_364798;
        }
    }
    ctx->pc = 0x36441Cu;
    // 0x36441c: 0x93838bd0  lbu         $v1, -0x7430($gp)
    ctx->pc = 0x36441cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937552)));
    // 0x364420: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x364420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x364424: 0x93848bd4  lbu         $a0, -0x742C($gp)
    ctx->pc = 0x364424u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937556)));
    // 0x364428: 0x621004  sllv        $v0, $v0, $v1
    ctx->pc = 0x364428u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x36442c: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x36442cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x364430: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x364430u;
    {
        const bool branch_taken_0x364430 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x364434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364430u;
        // 0x364434: 0x24030010  addiu       $v1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x364430) {
            ctx->pc = 0x364488u;
            goto label_364488;
        }
    }
    ctx->pc = 0x364438u;
    // 0x364438: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x364438u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x36443c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x36443cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x364440: 0xa2030002  sb          $v1, 0x2($s0)
    ctx->pc = 0x364440u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x364444: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x364444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x364448: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x364448u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x36444c: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x36444cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
    // 0x364450: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x364450u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364454: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x364454u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x364458: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x364458u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36445c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x36445cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364460: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x364460u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364464: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x364464u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364468: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x364468u;
    SET_GPR_U32(ctx, 31, 0x364470u);
    ctx->pc = 0x36446Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364468u;
    // 0x36446c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x364468u, 0x364470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364470u;
label_364470:
    // 0x364470: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x364470u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x364474: 0xc0b78d0  jal         func_2DE340
    ctx->pc = 0x364474u;
    SET_GPR_U32(ctx, 31, 0x36447Cu);
    ctx->pc = 0x364478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364474u;
    // 0x364478: 0x24847180  addiu       $a0, $a0, 0x7180 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE340u, 0x364474u, 0x36447Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36447Cu;
label_36447c:
    // 0x36447c: 0x100000c6  b           . + 4 + (0xC6 << 2)
    ctx->pc = 0x36447Cu;
    {
        const bool branch_taken_0x36447c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36447c) {
            ctx->pc = 0x364798u;
            goto label_364798;
        }
    }
    ctx->pc = 0x364484u;
    // 0x364484: 0x0  nop
    ctx->pc = 0x364484u;
    // NOP
label_364488:
    // 0x364488: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x364488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36448c: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x36448cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x364490: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x364490u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x364494: 0x3c020300  lui         $v0, 0x300
    ctx->pc = 0x364494u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)768 << 16));
    // 0x364498: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x364498u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x36449c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x36449cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3644a0: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x3644a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x3644a4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3644a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3644a8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3644a8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3644ac: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3644acu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3644b0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3644b0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3644b4: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3644B4u;
    SET_GPR_U32(ctx, 31, 0x3644BCu);
    ctx->pc = 0x3644B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3644B4u;
    // 0x3644b8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3644B4u, 0x3644BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3644BCu;
label_3644bc:
    // 0x3644bc: 0x100000b6  b           . + 4 + (0xB6 << 2)
    ctx->pc = 0x3644BCu;
    {
        const bool branch_taken_0x3644bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3644bc) {
            ctx->pc = 0x364798u;
            goto label_364798;
        }
    }
    ctx->pc = 0x3644C4u;
    // 0x3644c4: 0x0  nop
    ctx->pc = 0x3644c4u;
    // NOP
label_3644c8:
    // 0x3644c8: 0x24c40001  addiu       $a0, $a2, 0x1
    ctx->pc = 0x3644c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x3644cc: 0xa2040002  sb          $a0, 0x2($s0)
    ctx->pc = 0x3644ccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x3644d0: 0x100000b1  b           . + 4 + (0xB1 << 2)
    ctx->pc = 0x3644D0u;
    {
        const bool branch_taken_0x3644d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3644D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3644D0u;
        // 0x3644d4: 0xa2030004  sb          $v1, 0x4($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3644d0) {
            ctx->pc = 0x364798u;
            goto label_364798;
        }
    }
    ctx->pc = 0x3644D8u;
label_3644d8:
    // 0x3644d8: 0x3c01008f  lui         $at, 0x8F
    ctx->pc = 0x3644d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)143 << 16));
    // 0x3644dc: 0x8c27ea28  lw          $a3, -0x15D8($at)
    ctx->pc = 0x3644dcu;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x8EEA28u));
    // 0x3644e0: 0x3c04000a  lui         $a0, 0xA
    ctx->pc = 0x3644e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)10 << 16));
    // 0x3644e4: 0x348400a0  ori         $a0, $a0, 0xA0
    ctx->pc = 0x3644e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)160);
    // 0x3644e8: 0xe42024  and         $a0, $a3, $a0
    ctx->pc = 0x3644e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & GPR_U64(ctx, 4));
    // 0x3644ec: 0x10800020  beqz        $a0, . + 4 + (0x20 << 2)
    ctx->pc = 0x3644ECu;
    {
        const bool branch_taken_0x3644ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3644ec) {
            ctx->pc = 0x364570u;
            goto label_364570;
        }
    }
    ctx->pc = 0x3644F4u;
    // 0x3644f4: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x3644f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x3644f8: 0x83858bdc  lb          $a1, -0x7424($gp)
    ctx->pc = 0x3644f8u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937564)));
    // 0x3644fc: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x3644fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x364500: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x364500u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x364504: 0xe22024  and         $a0, $a3, $v0
    ctx->pc = 0x364504u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x364508: 0x64300a  movz        $a2, $v1, $a0
    ctx->pc = 0x364508u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
    // 0x36450c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x36450cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x364510: 0x61e3c  dsll32      $v1, $a2, 24
    ctx->pc = 0x364510u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 24));
    // 0x364514: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x364514u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x364518: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x364518u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x36451c: 0x24847180  addiu       $a0, $a0, 0x7180
    ctx->pc = 0x36451cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29056));
    // 0x364520: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x364520u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x364524: 0x24630003  addiu       $v1, $v1, 0x3
    ctx->pc = 0x364524u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x364528: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x364528u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x36452c: 0x0  nop
    ctx->pc = 0x36452cu;
    // NOP
    // 0x364530: 0x0  nop
    ctx->pc = 0x364530u;
    // NOP
    // 0x364534: 0x1010  mfhi        $v0
    ctx->pc = 0x364534u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x364538: 0xc0b78d0  jal         func_2DE340
    ctx->pc = 0x364538u;
    SET_GPR_U32(ctx, 31, 0x364540u);
    ctx->pc = 0x36453Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364538u;
    // 0x36453c: 0xa3828bdc  sb          $v0, -0x7424($gp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937564), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE340u, 0x364538u, 0x364540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364540u;
label_364540:
    // 0x364540: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x364540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x364544: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x364544u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x364548: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x364548u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x36454c: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x36454cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x364550: 0x2405030f  addiu       $a1, $zero, 0x30F
    ctx->pc = 0x364550u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 783));
    // 0x364554: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x364554u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364558: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x364558u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36455c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x36455cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364560: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x364560u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364564: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x364564u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364568: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x364568u;
    SET_GPR_U32(ctx, 31, 0x364570u);
    ctx->pc = 0x36456Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364568u;
    // 0x36456c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x364568u, 0x364570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364570u;
label_364570:
    // 0x364570: 0x3c01008f  lui         $at, 0x8F
    ctx->pc = 0x364570u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)143 << 16));
    // 0x364574: 0x8c24ea24  lw          $a0, -0x15DC($at)
    ctx->pc = 0x364574u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x8EEA24u));
    // 0x364578: 0x30834000  andi        $v1, $a0, 0x4000
    ctx->pc = 0x364578u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16384);
    // 0x36457c: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x36457Cu;
    {
        const bool branch_taken_0x36457c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x36457c) {
            ctx->pc = 0x3645D0u;
            goto label_3645d0;
        }
    }
    ctx->pc = 0x364584u;
    // 0x364584: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x364584u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x364588: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x364588u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x36458c: 0xc0b78d0  jal         func_2DE340
    ctx->pc = 0x36458Cu;
    SET_GPR_U32(ctx, 31, 0x364594u);
    ctx->pc = 0x364590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36458Cu;
    // 0x364590: 0x24847180  addiu       $a0, $a0, 0x7180 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE340u, 0x36458Cu, 0x364594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364594u;
label_364594:
    // 0x364594: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x364594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x364598: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x364598u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x36459c: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x36459cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x3645a0: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3645a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3645a4: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x3645a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x3645a8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3645a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3645ac: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x3645acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x3645b0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3645b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3645b4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3645b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3645b8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3645b8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3645bc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3645bcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3645c0: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3645C0u;
    SET_GPR_U32(ctx, 31, 0x3645C8u);
    ctx->pc = 0x3645C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3645C0u;
    // 0x3645c4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3645C0u, 0x3645C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3645C8u;
label_3645c8:
    // 0x3645c8: 0x10000073  b           . + 4 + (0x73 << 2)
    ctx->pc = 0x3645C8u;
    {
        const bool branch_taken_0x3645c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3645c8) {
            ctx->pc = 0x364798u;
            goto label_364798;
        }
    }
    ctx->pc = 0x3645D0u;
label_3645d0:
    // 0x3645d0: 0x30832008  andi        $v1, $a0, 0x2008
    ctx->pc = 0x3645d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8200);
    // 0x3645d4: 0x10600070  beqz        $v1, . + 4 + (0x70 << 2)
    ctx->pc = 0x3645D4u;
    {
        const bool branch_taken_0x3645d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3645d4) {
            ctx->pc = 0x364798u;
            goto label_364798;
        }
    }
    ctx->pc = 0x3645DCu;
    // 0x3645dc: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x3645dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x3645e0: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x3645e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x3645e4: 0x24847180  addiu       $a0, $a0, 0x7180
    ctx->pc = 0x3645e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29056));
    // 0x3645e8: 0xc0b78d0  jal         func_2DE340
    ctx->pc = 0x3645E8u;
    SET_GPR_U32(ctx, 31, 0x3645F0u);
    ctx->pc = 0x3645ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3645E8u;
    // 0x3645ec: 0xa2020002  sb          $v0, 0x2($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE340u, 0x3645E8u, 0x3645F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3645F0u;
label_3645f0:
    // 0x3645f0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3645f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3645f4: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3645f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3645f8: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x3645f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x3645fc: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3645fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x364600: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x364600u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
    // 0x364604: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x364604u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364608: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x364608u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x36460c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x36460cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364610: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x364610u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364614: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x364614u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364618: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x364618u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36461c: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x36461Cu;
    SET_GPR_U32(ctx, 31, 0x364624u);
    ctx->pc = 0x364620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36461Cu;
    // 0x364620: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x36461Cu, 0x364624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364624u;
label_364624:
    // 0x364624: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x364624u;
    {
        const bool branch_taken_0x364624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x364624) {
            ctx->pc = 0x364798u;
            goto label_364798;
        }
    }
    ctx->pc = 0x36462Cu;
    // 0x36462c: 0x0  nop
    ctx->pc = 0x36462cu;
    // NOP
label_364630:
    // 0x364630: 0x24c20001  addiu       $v0, $a2, 0x1
    ctx->pc = 0x364630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x364634: 0xa2020002  sb          $v0, 0x2($s0)
    ctx->pc = 0x364634u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x364638: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x364638u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x36463c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x36463cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x364640: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x364640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x364644: 0xa2020004  sb          $v0, 0x4($s0)
    ctx->pc = 0x364644u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 2));
    // 0x364648: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x364648u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x36464c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x36464cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x364650: 0x24070400  addiu       $a3, $zero, 0x400
    ctx->pc = 0x364650u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x364654: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x364654u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364658: 0xc09565c  jal         func_255970
    ctx->pc = 0x364658u;
    SET_GPR_U32(ctx, 31, 0x364660u);
    ctx->pc = 0x36465Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364658u;
    // 0x36465c: 0x27a90030  addiu       $t1, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255970u, 0x364658u, 0x364660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364660u;
label_364660:
    // 0x364660: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x364660u;
    {
        const bool branch_taken_0x364660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x364660) {
            ctx->pc = 0x364798u;
            goto label_364798;
        }
    }
    ctx->pc = 0x364668u;
label_364668:
    // 0x364668: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x364668u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x36466c: 0xc095150  jal         func_254540
    ctx->pc = 0x36466Cu;
    SET_GPR_U32(ctx, 31, 0x364674u);
    ctx->pc = 0x364670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36466Cu;
    // 0x364670: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254540u, 0x36466Cu, 0x364674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364674u;
label_364674:
    // 0x364674: 0x14400048  bnez        $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x364674u;
    {
        const bool branch_taken_0x364674 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x364678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364674u;
        // 0x364678: 0x3c040089  lui         $a0, 0x89 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x364674) {
            ctx->pc = 0x364798u;
            goto label_364798;
        }
    }
    ctx->pc = 0x36467Cu;
    // 0x36467c: 0xc095154  jal         func_254550
    ctx->pc = 0x36467Cu;
    SET_GPR_U32(ctx, 31, 0x364684u);
    ctx->pc = 0x364680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36467Cu;
    // 0x364680: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254550u, 0x36467Cu, 0x364684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364684u;
label_364684:
    // 0x364684: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x364684u;
    {
        const bool branch_taken_0x364684 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x364688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364684u;
        // 0x364688: 0x240300f0  addiu       $v1, $zero, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x364684) {
            ctx->pc = 0x364698u;
            goto label_364698;
        }
    }
    ctx->pc = 0x36468Cu;
    // 0x36468c: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x36468Cu;
    {
        const bool branch_taken_0x36468c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x364690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36468Cu;
        // 0x364690: 0xa2030002  sb          $v1, 0x2($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36468c) {
            ctx->pc = 0x364798u;
            goto label_364798;
        }
    }
    ctx->pc = 0x364694u;
    // 0x364694: 0x0  nop
    ctx->pc = 0x364694u;
    // NOP
label_364698:
    // 0x364698: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x364698u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x36469c: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x36469Cu;
    {
        const bool branch_taken_0x36469c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3646A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36469Cu;
        // 0x3646a0: 0xa2030002  sb          $v1, 0x2($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36469c) {
            ctx->pc = 0x364798u;
            goto label_364798;
        }
    }
    ctx->pc = 0x3646A4u;
    // 0x3646a4: 0x0  nop
    ctx->pc = 0x3646a4u;
    // NOP
label_3646a8:
    // 0x3646a8: 0x93848bd4  lbu         $a0, -0x742C($gp)
    ctx->pc = 0x3646a8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937556)));
    // 0x3646ac: 0x93838bd8  lbu         $v1, -0x7428($gp)
    ctx->pc = 0x3646acu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937560)));
    // 0x3646b0: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3646B0u;
    {
        const bool branch_taken_0x3646b0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3646b0) {
            ctx->pc = 0x3646C8u;
            goto label_3646c8;
        }
    }
    ctx->pc = 0x3646B8u;
    // 0x3646b8: 0xa2050002  sb          $a1, 0x2($s0)
    ctx->pc = 0x3646b8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 5));
    // 0x3646bc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3646bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3646c0: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x3646C0u;
    {
        const bool branch_taken_0x3646c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3646C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3646C0u;
        // 0x3646c4: 0xa2030000  sb          $v1, 0x0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3646c0) {
            ctx->pc = 0x364798u;
            goto label_364798;
        }
    }
    ctx->pc = 0x3646C8u;
label_3646c8:
    // 0x3646c8: 0x24c20001  addiu       $v0, $a2, 0x1
    ctx->pc = 0x3646c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x3646cc: 0xa2020002  sb          $v0, 0x2($s0)
    ctx->pc = 0x3646ccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x3646d0: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x3646d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x3646d4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3646d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3646d8: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x3646d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x3646dc: 0xa2020004  sb          $v0, 0x4($s0)
    ctx->pc = 0x3646dcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 2));
    // 0x3646e0: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x3646e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3646e4: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x3646e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x3646e8: 0x24070400  addiu       $a3, $zero, 0x400
    ctx->pc = 0x3646e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x3646ec: 0x34450001  ori         $a1, $v0, 0x1
    ctx->pc = 0x3646ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x3646f0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3646f0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3646f4: 0xc09565c  jal         func_255970
    ctx->pc = 0x3646F4u;
    SET_GPR_U32(ctx, 31, 0x3646FCu);
    ctx->pc = 0x3646F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3646F4u;
    // 0x3646f8: 0x27a90030  addiu       $t1, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255970u, 0x3646F4u, 0x3646FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3646FCu;
label_3646fc:
    // 0x3646fc: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x3646FCu;
    {
        const bool branch_taken_0x3646fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3646fc) {
            ctx->pc = 0x364798u;
            goto label_364798;
        }
    }
    ctx->pc = 0x364704u;
    // 0x364704: 0x0  nop
    ctx->pc = 0x364704u;
    // NOP
label_364708:
    // 0x364708: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x364708u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x36470c: 0xc095150  jal         func_254540
    ctx->pc = 0x36470Cu;
    SET_GPR_U32(ctx, 31, 0x364714u);
    ctx->pc = 0x364710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36470Cu;
    // 0x364710: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254540u, 0x36470Cu, 0x364714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364714u;
label_364714:
    // 0x364714: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x364714u;
    {
        const bool branch_taken_0x364714 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x364718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364714u;
        // 0x364718: 0x3c040089  lui         $a0, 0x89 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x364714) {
            ctx->pc = 0x364798u;
            goto label_364798;
        }
    }
    ctx->pc = 0x36471Cu;
    // 0x36471c: 0xc095154  jal         func_254550
    ctx->pc = 0x36471Cu;
    SET_GPR_U32(ctx, 31, 0x364724u);
    ctx->pc = 0x364720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36471Cu;
    // 0x364720: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254550u, 0x36471Cu, 0x364724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364724u;
label_364724:
    // 0x364724: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x364724u;
    {
        const bool branch_taken_0x364724 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x364728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364724u;
        // 0x364728: 0x240400f0  addiu       $a0, $zero, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x364724) {
            ctx->pc = 0x364740u;
            goto label_364740;
        }
    }
    ctx->pc = 0x36472Cu;
    // 0x36472c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x36472cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x364730: 0xa2040002  sb          $a0, 0x2($s0)
    ctx->pc = 0x364730u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x364734: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x364734u;
    {
        const bool branch_taken_0x364734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x364738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364734u;
        // 0x364738: 0xa2030000  sb          $v1, 0x0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x364734) {
            ctx->pc = 0x364798u;
            goto label_364798;
        }
    }
    ctx->pc = 0x36473Cu;
    // 0x36473c: 0x0  nop
    ctx->pc = 0x36473cu;
    // NOP
label_364740:
    // 0x364740: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x364740u;
    {
        const bool branch_taken_0x364740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x364744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364740u;
        // 0x364744: 0xa2000002  sb          $zero, 0x2($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x364740) {
            ctx->pc = 0x364798u;
            goto label_364798;
        }
    }
    ctx->pc = 0x364748u;
label_364748:
    // 0x364748: 0x24c20001  addiu       $v0, $a2, 0x1
    ctx->pc = 0x364748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x36474c: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x36474cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x364750: 0xa2020002  sb          $v0, 0x2($s0)
    ctx->pc = 0x364750u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x364754: 0x2484cbe0  addiu       $a0, $a0, -0x3420
    ctx->pc = 0x364754u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    // 0x364758: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x364758u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x36475c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x36475cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364760: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x364760u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364764: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x364764u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364768: 0xc063cd0  jal         func_18F340
    ctx->pc = 0x364768u;
    SET_GPR_U32(ctx, 31, 0x364770u);
    ctx->pc = 0x36476Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364768u;
    // 0x36476c: 0x2409ffff  addiu       $t1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F340u, 0x364768u, 0x364770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364770u;
label_364770:
    // 0x364770: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x364770u;
    {
        const bool branch_taken_0x364770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x364770) {
            ctx->pc = 0x364798u;
            goto label_364798;
        }
    }
    ctx->pc = 0x364778u;
label_364778:
    // 0x364778: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x364778u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x36477c: 0xc063d48  jal         func_18F520
    ctx->pc = 0x36477Cu;
    SET_GPR_U32(ctx, 31, 0x364784u);
    ctx->pc = 0x364780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36477Cu;
    // 0x364780: 0x2484cbe0  addiu       $a0, $a0, -0x3420 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F520u, 0x36477Cu, 0x364784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364784u;
label_364784:
    // 0x364784: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x364784u;
    {
        const bool branch_taken_0x364784 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x364788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364784u;
        // 0x364788: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x364784) {
            ctx->pc = 0x364798u;
            goto label_364798;
        }
    }
    ctx->pc = 0x36478Cu;
    // 0x36478c: 0xc0d9470  jal         func_3651C0
    ctx->pc = 0x36478Cu;
    SET_GPR_U32(ctx, 31, 0x364794u);
    ctx->pc = 0x3651C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3651C0u, 0x36478Cu, 0x364794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364794u;
label_364794:
    // 0x364794: 0x0  nop
    ctx->pc = 0x364794u;
    // NOP
label_364798:
    // 0x364798: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x364798u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36479c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x36479cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3647a0: 0x3e00008  jr          $ra
    ctx->pc = 0x3647A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3647A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3647A0u;
        // 0x3647a4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3647A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3647A8u;
}
