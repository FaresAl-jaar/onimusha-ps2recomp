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

// Function: sub_0036E310
// Address: 0x36e310 - 0x36ea50
void sub_0036E310_0x36e310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036E310_0x36e310");
#endif

    switch (ctx->pc) {
        case 0x36e3e4u: goto label_36e3e4;
        case 0x36e404u: goto label_36e404;
        case 0x36e5c0u: goto label_36e5c0;
        case 0x36e5c8u: goto label_36e5c8;
        case 0x36e718u: goto label_36e718;
        case 0x36e8d8u: goto label_36e8d8;
        case 0x36e910u: goto label_36e910;
        case 0x36e9b0u: goto label_36e9b0;
        case 0x36e9e8u: goto label_36e9e8;
        case 0x36ea10u: goto label_36ea10;
        default: break;
    }

    ctx->pc = 0x36e310u;

    // 0x36e310: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x36e310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x36e314: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x36e314u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x36e318: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x36e318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x36e31c: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x36e31cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x36e320: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x36e320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x36e324: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x36e324u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x36e328: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x36e328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x36e32c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x36e32cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x36e330: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x36e330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x36e334: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x36e334u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x36e338: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x36e338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x36e33c: 0x8c24cec0  lw          $a0, -0x3140($at)
    ctx->pc = 0x36e33cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x81CEC0u));
    // 0x36e340: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x36e340u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x36e344: 0x146001b8  bnez        $v1, . + 4 + (0x1B8 << 2)
    ctx->pc = 0x36E344u;
    {
        const bool branch_taken_0x36e344 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x36E348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E344u;
        // 0x36e348: 0x3c068000  lui         $a2, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36e344) {
            ctx->pc = 0x36EA28u;
            goto label_36ea28;
        }
    }
    ctx->pc = 0x36E34Cu;
    // 0x36e34c: 0x861824  and         $v1, $a0, $a2
    ctx->pc = 0x36e34cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
    // 0x36e350: 0x146001b5  bnez        $v1, . + 4 + (0x1B5 << 2)
    ctx->pc = 0x36E350u;
    {
        const bool branch_taken_0x36e350 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x36e350) {
            ctx->pc = 0x36EA28u;
            goto label_36ea28;
        }
    }
    ctx->pc = 0x36E358u;
    // 0x36e358: 0x8f888c00  lw          $t0, -0x7400($gp)
    ctx->pc = 0x36e358u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36e35c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36e35cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36e360: 0x91041c10  lbu         $a0, 0x1C10($t0)
    ctx->pc = 0x36e360u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 7184)));
    // 0x36e364: 0x108500f6  beq         $a0, $a1, . + 4 + (0xF6 << 2)
    ctx->pc = 0x36E364u;
    {
        const bool branch_taken_0x36e364 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x36E368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E364u;
        // 0x36e368: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36e364) {
            ctx->pc = 0x36E740u;
            goto label_36e740;
        }
    }
    ctx->pc = 0x36E36Cu;
    // 0x36e36c: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x36E36Cu;
    {
        const bool branch_taken_0x36e36c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x36e36c) {
            ctx->pc = 0x36E388u;
            goto label_36e388;
        }
    }
    ctx->pc = 0x36E374u;
    // 0x36e374: 0x108001ac  beqz        $a0, . + 4 + (0x1AC << 2)
    ctx->pc = 0x36E374u;
    {
        const bool branch_taken_0x36e374 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x36e374) {
            ctx->pc = 0x36EA28u;
            goto label_36ea28;
        }
    }
    ctx->pc = 0x36E37Cu;
    // 0x36e37c: 0x100001aa  b           . + 4 + (0x1AA << 2)
    ctx->pc = 0x36E37Cu;
    {
        const bool branch_taken_0x36e37c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36e37c) {
            ctx->pc = 0x36EA28u;
            goto label_36ea28;
        }
    }
    ctx->pc = 0x36E384u;
    // 0x36e384: 0x0  nop
    ctx->pc = 0x36e384u;
    // NOP
label_36e388:
    // 0x36e388: 0x91042398  lbu         $a0, 0x2398($t0)
    ctx->pc = 0x36e388u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 9112)));
    // 0x36e38c: 0x108300ac  beq         $a0, $v1, . + 4 + (0xAC << 2)
    ctx->pc = 0x36E38Cu;
    {
        const bool branch_taken_0x36e38c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x36e38c) {
            ctx->pc = 0x36E640u;
            goto label_36e640;
        }
    }
    ctx->pc = 0x36E394u;
    // 0x36e394: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x36e394u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36e398: 0x10830087  beq         $a0, $v1, . + 4 + (0x87 << 2)
    ctx->pc = 0x36E398u;
    {
        const bool branch_taken_0x36e398 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x36e398) {
            ctx->pc = 0x36E5B8u;
            goto label_36e5b8;
        }
    }
    ctx->pc = 0x36E3A0u;
    // 0x36e3a0: 0x1085002f  beq         $a0, $a1, . + 4 + (0x2F << 2)
    ctx->pc = 0x36E3A0u;
    {
        const bool branch_taken_0x36e3a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x36e3a0) {
            ctx->pc = 0x36E460u;
            goto label_36e460;
        }
    }
    ctx->pc = 0x36E3A8u;
    // 0x36e3a8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x36E3A8u;
    {
        const bool branch_taken_0x36e3a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x36e3a8) {
            ctx->pc = 0x36E3B8u;
            goto label_36e3b8;
        }
    }
    ctx->pc = 0x36E3B0u;
    // 0x36e3b0: 0x1000019d  b           . + 4 + (0x19D << 2)
    ctx->pc = 0x36E3B0u;
    {
        const bool branch_taken_0x36e3b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36e3b0) {
            ctx->pc = 0x36EA28u;
            goto label_36ea28;
        }
    }
    ctx->pc = 0x36E3B8u;
label_36e3b8:
    // 0x36e3b8: 0xa500239a  sh          $zero, 0x239A($t0)
    ctx->pc = 0x36e3b8u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 9114), (uint16_t)GPR_U32(ctx, 0));
    // 0x36e3bc: 0x8f838c00  lw          $v1, -0x7400($gp)
    ctx->pc = 0x36e3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36e3c0: 0x90622398  lbu         $v0, 0x2398($v1)
    ctx->pc = 0x36e3c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 9112)));
    // 0x36e3c4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x36e3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x36e3c8: 0xa0622398  sb          $v0, 0x2398($v1)
    ctx->pc = 0x36e3c8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 9112), (uint8_t)GPR_U32(ctx, 2));
    // 0x36e3cc: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36e3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36e3d0: 0x8c45239c  lw          $a1, 0x239C($v0)
    ctx->pc = 0x36e3d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9116)));
    // 0x36e3d4: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x36E3D4u;
    {
        const bool branch_taken_0x36e3d4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x36E3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E3D4u;
        // 0x36e3d8: 0x3c040085  lui         $a0, 0x85 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)133 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36e3d4) {
            ctx->pc = 0x36E3F0u;
            goto label_36e3f0;
        }
    }
    ctx->pc = 0x36E3DCu;
    // 0x36e3dc: 0xc069324  jal         func_1A4C90
    ctx->pc = 0x36E3DCu;
    SET_GPR_U32(ctx, 31, 0x36E3E4u);
    ctx->pc = 0x36E3E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36E3DCu;
    // 0x36e3e0: 0x2484f280  addiu       $a0, $a0, -0xD80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4C90u, 0x36E3DCu, 0x36E3E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E3E4u;
label_36e3e4:
    // 0x36e3e4: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36e3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36e3e8: 0xac40239c  sw          $zero, 0x239C($v0)
    ctx->pc = 0x36e3e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 9116), GPR_U32(ctx, 0));
    // 0x36e3ec: 0x0  nop
    ctx->pc = 0x36e3ecu;
    // NOP
label_36e3f0:
    // 0x36e3f0: 0x3c040085  lui         $a0, 0x85
    ctx->pc = 0x36e3f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)133 << 16));
    // 0x36e3f4: 0x2484f280  addiu       $a0, $a0, -0xD80
    ctx->pc = 0x36e3f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963840));
    // 0x36e3f8: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x36e3f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x36e3fc: 0xc0692d8  jal         func_1A4B60
    ctx->pc = 0x36E3FCu;
    SET_GPR_U32(ctx, 31, 0x36E404u);
    ctx->pc = 0x36E400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36E3FCu;
    // 0x36e400: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4B60u, 0x36E3FCu, 0x36E404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E404u;
label_36e404:
    // 0x36e404: 0x8f838c00  lw          $v1, -0x7400($gp)
    ctx->pc = 0x36e404u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36e408: 0xac62239c  sw          $v0, 0x239C($v1)
    ctx->pc = 0x36e408u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 9116), GPR_U32(ctx, 2));
    // 0x36e40c: 0x8f838c00  lw          $v1, -0x7400($gp)
    ctx->pc = 0x36e40cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36e410: 0x8c66239c  lw          $a2, 0x239C($v1)
    ctx->pc = 0x36e410u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 9116)));
    // 0x36e414: 0x10c00184  beqz        $a2, . + 4 + (0x184 << 2)
    ctx->pc = 0x36E414u;
    {
        const bool branch_taken_0x36e414 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x36E418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E414u;
        // 0x36e418: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36e414) {
            ctx->pc = 0x36EA28u;
            goto label_36ea28;
        }
    }
    ctx->pc = 0x36E41Cu;
    // 0x36e41c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x36e41cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36e420: 0xacc30010  sw          $v1, 0x10($a2)
    ctx->pc = 0x36e420u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 3));
    // 0x36e424: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x36e424u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x36e428: 0xacc50064  sw          $a1, 0x64($a2)
    ctx->pc = 0x36e428u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 100), GPR_U32(ctx, 5));
    // 0x36e42c: 0x3c0300ff  lui         $v1, 0xFF
    ctx->pc = 0x36e42cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)255 << 16));
    // 0x36e430: 0xa0c00054  sb          $zero, 0x54($a2)
    ctx->pc = 0x36e430u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 84), (uint8_t)GPR_U32(ctx, 0));
    // 0x36e434: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x36e434u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x36e438: 0xa0c40055  sb          $a0, 0x55($a2)
    ctx->pc = 0x36e438u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 85), (uint8_t)GPR_U32(ctx, 4));
    // 0x36e43c: 0xacc30014  sw          $v1, 0x14($a2)
    ctx->pc = 0x36e43cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 3));
    // 0x36e440: 0xacc30018  sw          $v1, 0x18($a2)
    ctx->pc = 0x36e440u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 3));
    // 0x36e444: 0xacc50088  sw          $a1, 0x88($a2)
    ctx->pc = 0x36e444u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 136), GPR_U32(ctx, 5));
    // 0x36e448: 0xa0c00078  sb          $zero, 0x78($a2)
    ctx->pc = 0x36e448u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 120), (uint8_t)GPR_U32(ctx, 0));
    // 0x36e44c: 0xa0c40079  sb          $a0, 0x79($a2)
    ctx->pc = 0x36e44cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 121), (uint8_t)GPR_U32(ctx, 4));
    // 0x36e450: 0xa0c00068  sb          $zero, 0x68($a2)
    ctx->pc = 0x36e450u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 104), (uint8_t)GPR_U32(ctx, 0));
    // 0x36e454: 0x10000174  b           . + 4 + (0x174 << 2)
    ctx->pc = 0x36E454u;
    {
        const bool branch_taken_0x36e454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36E458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E454u;
        // 0x36e458: 0xa0c00069  sb          $zero, 0x69($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 105), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36e454) {
            ctx->pc = 0x36EA28u;
            goto label_36ea28;
        }
    }
    ctx->pc = 0x36E45Cu;
    // 0x36e45c: 0x0  nop
    ctx->pc = 0x36e45cu;
    // NOP
label_36e460:
    // 0x36e460: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x36e460u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
    // 0x36e464: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x36e464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36e468: 0x8d07239c  lw          $a3, 0x239C($t0)
    ctx->pc = 0x36e468u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 9116)));
    // 0x36e46c: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x36e46cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x36e470: 0x9505239a  lhu         $a1, 0x239A($t0)
    ctx->pc = 0x36e470u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 9114)));
    // 0x36e474: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x36e474u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x36e478: 0x34648889  ori         $a0, $v1, 0x8889
    ctx->pc = 0x36e478u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x36e47c: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x36e47cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x36e480: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x36e480u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x36e484: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x36e484u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x36e488: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x36e488u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36e48c: 0x0  nop
    ctx->pc = 0x36e48cu;
    // NOP
    // 0x36e490: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x36e490u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x36e494: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x36e494u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x36e498: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x36E498u;
    {
        const bool branch_taken_0x36e498 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x36E49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E498u;
        // 0x36e49c: 0x2509239a  addiu       $t1, $t0, 0x239A (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), 9114));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36e498) {
            ctx->pc = 0x36E4B0u;
            goto label_36e4b0;
        }
    }
    ctx->pc = 0x36E4A0u;
    // 0x36e4a0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x36e4a0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x36e4a4: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x36e4a4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x36e4a8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x36E4A8u;
    {
        const bool branch_taken_0x36e4a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36E4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E4A8u;
        // 0x36e4ac: 0xa3082b  sltu        $at, $a1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x36e4a8) {
            ctx->pc = 0x36E4C8u;
            goto label_36e4c8;
        }
    }
    ctx->pc = 0x36E4B0u;
label_36e4b0:
    // 0x36e4b0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x36e4b0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x36e4b4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x36e4b4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x36e4b8: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x36e4b8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x36e4bc: 0x0  nop
    ctx->pc = 0x36e4bcu;
    // NOP
    // 0x36e4c0: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x36e4c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x36e4c4: 0xa3082b  sltu        $at, $a1, $v1
    ctx->pc = 0x36e4c4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_36e4c8:
    // 0x36e4c8: 0x1020002f  beqz        $at, . + 4 + (0x2F << 2)
    ctx->pc = 0x36E4C8u;
    {
        const bool branch_taken_0x36e4c8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x36e4c8) {
            ctx->pc = 0x36E588u;
            goto label_36e588;
        }
    }
    ctx->pc = 0x36E4D0u;
    // 0x36e4d0: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x36e4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
    // 0x36e4d4: 0x95250000  lhu         $a1, 0x0($t1)
    ctx->pc = 0x36e4d4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x36e4d8: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x36e4d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x36e4dc: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x36e4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x36e4e0: 0x34648889  ori         $a0, $v1, 0x8889
    ctx->pc = 0x36e4e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x36e4e4: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x36e4e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x36e4e8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x36e4e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36e4ec: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x36e4ecu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x36e4f0: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x36e4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x36e4f4: 0xa5230000  sh          $v1, 0x0($t1)
    ctx->pc = 0x36e4f4u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x36e4f8: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x36e4f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36e4fc: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x36e4fcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x36e500: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x36e500u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x36e504: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x36e504u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x36e508: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x36E508u;
    {
        const bool branch_taken_0x36e508 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x36e508) {
            ctx->pc = 0x36E520u;
            goto label_36e520;
        }
    }
    ctx->pc = 0x36E510u;
    // 0x36e510: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x36e510u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x36e514: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x36e514u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x36e518: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x36E518u;
    {
        const bool branch_taken_0x36e518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36E51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E518u;
        // 0x36e51c: 0x8f838c00  lw          $v1, -0x7400($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36e518) {
            ctx->pc = 0x36E53Cu;
            goto label_36e53c;
        }
    }
    ctx->pc = 0x36E520u;
label_36e520:
    // 0x36e520: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x36e520u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x36e524: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x36e524u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x36e528: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x36e528u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x36e52c: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x36e52cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x36e530: 0x0  nop
    ctx->pc = 0x36e530u;
    // NOP
    // 0x36e534: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x36e534u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x36e538: 0x8f838c00  lw          $v1, -0x7400($gp)
    ctx->pc = 0x36e538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
label_36e53c:
    // 0x36e53c: 0x9463239a  lhu         $v1, 0x239A($v1)
    ctx->pc = 0x36e53cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 9114)));
    // 0x36e540: 0x321c0  sll         $a0, $v1, 7
    ctx->pc = 0x36e540u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x36e544: 0x85001b  divu        $zero, $a0, $a1
    ctx->pc = 0x36e544u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x36e548: 0x31a40  sll         $v1, $v1, 9
    ctx->pc = 0x36e548u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 9));
    // 0x36e54c: 0x0  nop
    ctx->pc = 0x36e54cu;
    // NOP
    // 0x36e550: 0x2012  mflo        $a0
    ctx->pc = 0x36e550u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x36e554: 0x65001b  divu        $zero, $v1, $a1
    ctx->pc = 0x36e554u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x36e558: 0x2c810081  sltiu       $at, $a0, 0x81
    ctx->pc = 0x36e558u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)129) ? 1 : 0);
    // 0x36e55c: 0x0  nop
    ctx->pc = 0x36e55cu;
    // NOP
    // 0x36e560: 0x1812  mflo        $v1
    ctx->pc = 0x36e560u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x36e564: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x36E564u;
    {
        const bool branch_taken_0x36e564 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x36e564) {
            ctx->pc = 0x36E570u;
            goto label_36e570;
        }
    }
    ctx->pc = 0x36E56Cu;
    // 0x36e56c: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x36e56cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_36e570:
    // 0x36e570: 0x2c610081  sltiu       $at, $v1, 0x81
    ctx->pc = 0x36e570u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)129) ? 1 : 0);
    // 0x36e574: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x36E574u;
    {
        const bool branch_taken_0x36e574 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x36E578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E574u;
        // 0x36e578: 0xa0e40068  sb          $a0, 0x68($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 104), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36e574) {
            ctx->pc = 0x36E580u;
            goto label_36e580;
        }
    }
    ctx->pc = 0x36E57Cu;
    // 0x36e57c: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x36e57cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_36e580:
    // 0x36e580: 0x10000129  b           . + 4 + (0x129 << 2)
    ctx->pc = 0x36E580u;
    {
        const bool branch_taken_0x36e580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36E584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E580u;
        // 0x36e584: 0xa0e30069  sb          $v1, 0x69($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 105), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36e580) {
            ctx->pc = 0x36EA28u;
            goto label_36ea28;
        }
    }
    ctx->pc = 0x36E588u;
label_36e588:
    // 0x36e588: 0x10e00003  beqz        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x36E588u;
    {
        const bool branch_taken_0x36e588 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x36E58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E588u;
        // 0x36e58c: 0x240300ff  addiu       $v1, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36e588) {
            ctx->pc = 0x36E598u;
            goto label_36e598;
        }
    }
    ctx->pc = 0x36E590u;
    // 0x36e590: 0xa0e30068  sb          $v1, 0x68($a3)
    ctx->pc = 0x36e590u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 104), (uint8_t)GPR_U32(ctx, 3));
    // 0x36e594: 0xa0e30069  sb          $v1, 0x69($a3)
    ctx->pc = 0x36e594u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 105), (uint8_t)GPR_U32(ctx, 3));
label_36e598:
    // 0x36e598: 0x8f838c00  lw          $v1, -0x7400($gp)
    ctx->pc = 0x36e598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36e59c: 0xa460239a  sh          $zero, 0x239A($v1)
    ctx->pc = 0x36e59cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 9114), (uint16_t)GPR_U32(ctx, 0));
    // 0x36e5a0: 0x8f848c00  lw          $a0, -0x7400($gp)
    ctx->pc = 0x36e5a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36e5a4: 0x90832398  lbu         $v1, 0x2398($a0)
    ctx->pc = 0x36e5a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 9112)));
    // 0x36e5a8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x36e5a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x36e5ac: 0x1000011e  b           . + 4 + (0x11E << 2)
    ctx->pc = 0x36E5ACu;
    {
        const bool branch_taken_0x36e5ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36E5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E5ACu;
        // 0x36e5b0: 0xa0832398  sb          $v1, 0x2398($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 9112), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36e5ac) {
            ctx->pc = 0x36EA28u;
            goto label_36ea28;
        }
    }
    ctx->pc = 0x36E5B4u;
    // 0x36e5b4: 0x0  nop
    ctx->pc = 0x36e5b4u;
    // NOP
label_36e5b8:
    // 0x36e5b8: 0xc0db150  jal         func_36C540
    ctx->pc = 0x36E5B8u;
    SET_GPR_U32(ctx, 31, 0x36E5C0u);
    ctx->pc = 0x36E5BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36E5B8u;
    // 0x36e5bc: 0x91042399  lbu         $a0, 0x2399($t0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 9113)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C540u, 0x36E5B8u, 0x36E5C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E5C0u;
label_36e5c0:
    // 0x36e5c0: 0xc0db1f0  jal         func_36C7C0
    ctx->pc = 0x36E5C0u;
    SET_GPR_U32(ctx, 31, 0x36E5C8u);
    ctx->pc = 0x36C7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C7C0u, 0x36E5C0u, 0x36E5C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E5C8u;
label_36e5c8:
    // 0x36e5c8: 0x3c034320  lui         $v1, 0x4320
    ctx->pc = 0x36e5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17184 << 16));
    // 0x36e5cc: 0x8f858c00  lw          $a1, -0x7400($gp)
    ctx->pc = 0x36e5ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36e5d0: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x36e5d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x36e5d4: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x36e5d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x36e5d8: 0x34648889  ori         $a0, $v1, 0x8889
    ctx->pc = 0x36e5d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x36e5dc: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x36e5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x36e5e0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x36e5e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36e5e4: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x36e5e4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x36e5e8: 0x90a32398  lbu         $v1, 0x2398($a1)
    ctx->pc = 0x36e5e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 9112)));
    // 0x36e5ec: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x36e5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x36e5f0: 0xa0a32398  sb          $v1, 0x2398($a1)
    ctx->pc = 0x36e5f0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 9112), (uint8_t)GPR_U32(ctx, 3));
    // 0x36e5f4: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x36e5f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36e5f8: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x36e5f8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x36e5fc: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x36e5fcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x36e600: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x36e600u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x36e604: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x36E604u;
    {
        const bool branch_taken_0x36e604 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x36e604) {
            ctx->pc = 0x36E61Cu;
            goto label_36e61c;
        }
    }
    ctx->pc = 0x36E60Cu;
    // 0x36e60c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x36e60cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x36e610: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x36e610u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x36e614: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x36E614u;
    {
        const bool branch_taken_0x36e614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36E618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E614u;
        // 0x36e618: 0x8f838c00  lw          $v1, -0x7400($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36e614) {
            ctx->pc = 0x36E638u;
            goto label_36e638;
        }
    }
    ctx->pc = 0x36E61Cu;
label_36e61c:
    // 0x36e61c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x36e61cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x36e620: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x36e620u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x36e624: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x36e624u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x36e628: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x36e628u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x36e62c: 0x0  nop
    ctx->pc = 0x36e62cu;
    // NOP
    // 0x36e630: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x36e630u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x36e634: 0x8f838c00  lw          $v1, -0x7400($gp)
    ctx->pc = 0x36e634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
label_36e638:
    // 0x36e638: 0x100000fb  b           . + 4 + (0xFB << 2)
    ctx->pc = 0x36E638u;
    {
        const bool branch_taken_0x36e638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36E63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E638u;
        // 0x36e63c: 0xa464239a  sh          $a0, 0x239A($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 9114), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36e638) {
            ctx->pc = 0x36EA28u;
            goto label_36ea28;
        }
    }
    ctx->pc = 0x36E640u;
label_36e640:
    // 0x36e640: 0x9503239a  lhu         $v1, 0x239A($t0)
    ctx->pc = 0x36e640u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 9114)));
    // 0x36e644: 0x8d05239c  lw          $a1, 0x239C($t0)
    ctx->pc = 0x36e644u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 9116)));
    // 0x36e648: 0x1860002f  blez        $v1, . + 4 + (0x2F << 2)
    ctx->pc = 0x36E648u;
    {
        const bool branch_taken_0x36e648 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x36E64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E648u;
        // 0x36e64c: 0x2504239a  addiu       $a0, $t0, 0x239A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 9114));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36e648) {
            ctx->pc = 0x36E708u;
            goto label_36e708;
        }
    }
    ctx->pc = 0x36E650u;
    // 0x36e650: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x36e650u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x36e654: 0x10a000f4  beqz        $a1, . + 4 + (0xF4 << 2)
    ctx->pc = 0x36E654u;
    {
        const bool branch_taken_0x36e654 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x36E658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E654u;
        // 0x36e658: 0xa4830000  sh          $v1, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36e654) {
            ctx->pc = 0x36EA28u;
            goto label_36ea28;
        }
    }
    ctx->pc = 0x36E65Cu;
    // 0x36e65c: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x36e65cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36e660: 0x3c034320  lui         $v1, 0x4320
    ctx->pc = 0x36e660u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17184 << 16));
    // 0x36e664: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x36e664u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x36e668: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x36e668u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x36e66c: 0x34648889  ori         $a0, $v1, 0x8889
    ctx->pc = 0x36e66cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x36e670: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x36e670u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x36e674: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x36e674u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x36e678: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x36e678u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x36e67c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x36e67cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36e680: 0x0  nop
    ctx->pc = 0x36e680u;
    // NOP
    // 0x36e684: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x36e684u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x36e688: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x36e688u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x36e68c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x36E68Cu;
    {
        const bool branch_taken_0x36e68c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x36e68c) {
            ctx->pc = 0x36E6A4u;
            goto label_36e6a4;
        }
    }
    ctx->pc = 0x36E694u;
    // 0x36e694: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x36e694u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x36e698: 0x44070800  mfc1        $a3, $f1
    ctx->pc = 0x36e698u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x36e69c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x36E69Cu;
    {
        const bool branch_taken_0x36e69c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36E6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E69Cu;
        // 0x36e6a0: 0x8f838c00  lw          $v1, -0x7400($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36e69c) {
            ctx->pc = 0x36E6BCu;
            goto label_36e6bc;
        }
    }
    ctx->pc = 0x36E6A4u;
label_36e6a4:
    // 0x36e6a4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x36e6a4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x36e6a8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x36e6a8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x36e6ac: 0x44070800  mfc1        $a3, $f1
    ctx->pc = 0x36e6acu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x36e6b0: 0x0  nop
    ctx->pc = 0x36e6b0u;
    // NOP
    // 0x36e6b4: 0xe63825  or          $a3, $a3, $a2
    ctx->pc = 0x36e6b4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x36e6b8: 0x8f838c00  lw          $v1, -0x7400($gp)
    ctx->pc = 0x36e6b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
label_36e6bc:
    // 0x36e6bc: 0x9463239a  lhu         $v1, 0x239A($v1)
    ctx->pc = 0x36e6bcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 9114)));
    // 0x36e6c0: 0x321c0  sll         $a0, $v1, 7
    ctx->pc = 0x36e6c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x36e6c4: 0x87001b  divu        $zero, $a0, $a3
    ctx->pc = 0x36e6c4u;
    { uint32_t divisor = GPR_U32(ctx, 7); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x36e6c8: 0x31a40  sll         $v1, $v1, 9
    ctx->pc = 0x36e6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 9));
    // 0x36e6cc: 0x0  nop
    ctx->pc = 0x36e6ccu;
    // NOP
    // 0x36e6d0: 0x2012  mflo        $a0
    ctx->pc = 0x36e6d0u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x36e6d4: 0x67001b  divu        $zero, $v1, $a3
    ctx->pc = 0x36e6d4u;
    { uint32_t divisor = GPR_U32(ctx, 7); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x36e6d8: 0x2c810081  sltiu       $at, $a0, 0x81
    ctx->pc = 0x36e6d8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)129) ? 1 : 0);
    // 0x36e6dc: 0x0  nop
    ctx->pc = 0x36e6dcu;
    // NOP
    // 0x36e6e0: 0x1812  mflo        $v1
    ctx->pc = 0x36e6e0u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x36e6e4: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x36E6E4u;
    {
        const bool branch_taken_0x36e6e4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x36e6e4) {
            ctx->pc = 0x36E6F0u;
            goto label_36e6f0;
        }
    }
    ctx->pc = 0x36E6ECu;
    // 0x36e6ec: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x36e6ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_36e6f0:
    // 0x36e6f0: 0x2c610081  sltiu       $at, $v1, 0x81
    ctx->pc = 0x36e6f0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)129) ? 1 : 0);
    // 0x36e6f4: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x36E6F4u;
    {
        const bool branch_taken_0x36e6f4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x36E6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E6F4u;
        // 0x36e6f8: 0xa0a40068  sb          $a0, 0x68($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 104), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36e6f4) {
            ctx->pc = 0x36E700u;
            goto label_36e700;
        }
    }
    ctx->pc = 0x36E6FCu;
    // 0x36e6fc: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x36e6fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_36e700:
    // 0x36e700: 0x100000c9  b           . + 4 + (0xC9 << 2)
    ctx->pc = 0x36E700u;
    {
        const bool branch_taken_0x36e700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36E704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E700u;
        // 0x36e704: 0xa0a30069  sb          $v1, 0x69($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 105), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36e700) {
            ctx->pc = 0x36EA28u;
            goto label_36ea28;
        }
    }
    ctx->pc = 0x36E708u;
label_36e708:
    // 0x36e708: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x36E708u;
    {
        const bool branch_taken_0x36e708 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x36E70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E708u;
        // 0x36e70c: 0x3c040085  lui         $a0, 0x85 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)133 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36e708) {
            ctx->pc = 0x36E720u;
            goto label_36e720;
        }
    }
    ctx->pc = 0x36E710u;
    // 0x36e710: 0xc069324  jal         func_1A4C90
    ctx->pc = 0x36E710u;
    SET_GPR_U32(ctx, 31, 0x36E718u);
    ctx->pc = 0x36E714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36E710u;
    // 0x36e714: 0x2484f280  addiu       $a0, $a0, -0xD80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4C90u, 0x36E710u, 0x36E718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E718u;
label_36e718:
    // 0x36e718: 0x8f838c00  lw          $v1, -0x7400($gp)
    ctx->pc = 0x36e718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36e71c: 0xac60239c  sw          $zero, 0x239C($v1)
    ctx->pc = 0x36e71cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 9116), GPR_U32(ctx, 0));
label_36e720:
    // 0x36e720: 0x8f838c00  lw          $v1, -0x7400($gp)
    ctx->pc = 0x36e720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36e724: 0xa0601c10  sb          $zero, 0x1C10($v1)
    ctx->pc = 0x36e724u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 7184), (uint8_t)GPR_U32(ctx, 0));
    // 0x36e728: 0x8f838c00  lw          $v1, -0x7400($gp)
    ctx->pc = 0x36e728u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36e72c: 0xa0602398  sb          $zero, 0x2398($v1)
    ctx->pc = 0x36e72cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 9112), (uint8_t)GPR_U32(ctx, 0));
    // 0x36e730: 0x8f838c00  lw          $v1, -0x7400($gp)
    ctx->pc = 0x36e730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36e734: 0x100000bc  b           . + 4 + (0xBC << 2)
    ctx->pc = 0x36E734u;
    {
        const bool branch_taken_0x36e734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36E738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E734u;
        // 0x36e738: 0xa460239a  sh          $zero, 0x239A($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 9114), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36e734) {
            ctx->pc = 0x36EA28u;
            goto label_36ea28;
        }
    }
    ctx->pc = 0x36E73Cu;
    // 0x36e73c: 0x0  nop
    ctx->pc = 0x36e73cu;
    // NOP
label_36e740:
    // 0x36e740: 0x91031c11  lbu         $v1, 0x1C11($t0)
    ctx->pc = 0x36e740u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 7185)));
    // 0x36e744: 0x1060005e  beqz        $v1, . + 4 + (0x5E << 2)
    ctx->pc = 0x36E744u;
    {
        const bool branch_taken_0x36e744 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x36E748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E744u;
        // 0x36e748: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36e744) {
            ctx->pc = 0x36E8C0u;
            goto label_36e8c0;
        }
    }
    ctx->pc = 0x36E74Cu;
    // 0x36e74c: 0x85031c14  lh          $v1, 0x1C14($t0)
    ctx->pc = 0x36e74cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 7188)));
    // 0x36e750: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x36e750u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x36e754: 0xa5031c14  sh          $v1, 0x1C14($t0)
    ctx->pc = 0x36e754u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 7188), (uint16_t)GPR_U32(ctx, 3));
    // 0x36e758: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x36e758u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x36e75c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x36e75cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x36e760: 0x14600057  bnez        $v1, . + 4 + (0x57 << 2)
    ctx->pc = 0x36E760u;
    {
        const bool branch_taken_0x36e760 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x36e760) {
            ctx->pc = 0x36E8C0u;
            goto label_36e8c0;
        }
    }
    ctx->pc = 0x36E768u;
    // 0x36e768: 0x8f848c00  lw          $a0, -0x7400($gp)
    ctx->pc = 0x36e768u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36e76c: 0x84831c12  lh          $v1, 0x1C12($a0)
    ctx->pc = 0x36e76cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 7186)));
    // 0x36e770: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x36e770u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x36e774: 0xa4831c12  sh          $v1, 0x1C12($a0)
    ctx->pc = 0x36e774u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 7186), (uint16_t)GPR_U32(ctx, 3));
    // 0x36e778: 0x8f878c00  lw          $a3, -0x7400($gp)
    ctx->pc = 0x36e778u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36e77c: 0x90e31c11  lbu         $v1, 0x1C11($a3)
    ctx->pc = 0x36e77cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 7185)));
    // 0x36e780: 0x14650015  bne         $v1, $a1, . + 4 + (0x15 << 2)
    ctx->pc = 0x36E780u;
    {
        const bool branch_taken_0x36e780 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x36E784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E780u;
        // 0x36e784: 0x30b600ff  andi        $s6, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 22, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x36e780) {
            ctx->pc = 0x36E7D8u;
            goto label_36e7d8;
        }
    }
    ctx->pc = 0x36E788u;
    // 0x36e788: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x36e788u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x36e78c: 0x3c03873c  lui         $v1, 0x873C
    ctx->pc = 0x36e78cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34620 << 16));
    // 0x36e790: 0x8c25f004  lw          $a1, -0xFFC($at)
    ctx->pc = 0x36e790u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x81F004u));
    // 0x36e794: 0x3464a9e5  ori         $a0, $v1, 0xA9E5
    ctx->pc = 0x36e794u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43493);
    // 0x36e798: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x36e798u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x36e79c: 0x53040  sll         $a2, $a1, 1
    ctx->pc = 0x36e79cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x36e7a0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x36e7a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x36e7a4: 0x52fc2  srl         $a1, $a1, 31
    ctx->pc = 0x36e7a4u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x36e7a8: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x36e7a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x36e7ac: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x36e7acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x36e7b0: 0xa42026  xor         $a0, $a1, $a0
    ctx->pc = 0x36e7b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 4));
    // 0x36e7b4: 0xac24f004  sw          $a0, -0xFFC($at)
    ctx->pc = 0x36e7b4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963204), GPR_U32(ctx, 4));
    // 0x36e7b8: 0x42202  srl         $a0, $a0, 8
    ctx->pc = 0x36e7b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
    // 0x36e7bc: 0x83001b  divu        $zero, $a0, $v1
    ctx->pc = 0x36e7bcu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x36e7c0: 0x0  nop
    ctx->pc = 0x36e7c0u;
    // NOP
    // 0x36e7c4: 0x0  nop
    ctx->pc = 0x36e7c4u;
    // NOP
    // 0x36e7c8: 0x1810  mfhi        $v1
    ctx->pc = 0x36e7c8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x36e7cc: 0x2463001e  addiu       $v1, $v1, 0x1E
    ctx->pc = 0x36e7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30));
    // 0x36e7d0: 0xa4e31c14  sh          $v1, 0x1C14($a3)
    ctx->pc = 0x36e7d0u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 7188), (uint16_t)GPR_U32(ctx, 3));
    // 0x36e7d4: 0x0  nop
    ctx->pc = 0x36e7d4u;
    // NOP
label_36e7d8:
    // 0x36e7d8: 0x8f878c00  lw          $a3, -0x7400($gp)
    ctx->pc = 0x36e7d8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36e7dc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x36e7dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36e7e0: 0x90e41c11  lbu         $a0, 0x1C11($a3)
    ctx->pc = 0x36e7e0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 7185)));
    // 0x36e7e4: 0x14830014  bne         $a0, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x36E7E4u;
    {
        const bool branch_taken_0x36e7e4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x36E7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E7E4u;
        // 0x36e7e8: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36e7e4) {
            ctx->pc = 0x36E838u;
            goto label_36e838;
        }
    }
    ctx->pc = 0x36E7ECu;
    // 0x36e7ec: 0x3c03873c  lui         $v1, 0x873C
    ctx->pc = 0x36e7ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34620 << 16));
    // 0x36e7f0: 0x8c25f004  lw          $a1, -0xFFC($at)
    ctx->pc = 0x36e7f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294963204)));
    // 0x36e7f4: 0x3464a9e5  ori         $a0, $v1, 0xA9E5
    ctx->pc = 0x36e7f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43493);
    // 0x36e7f8: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x36e7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x36e7fc: 0x53040  sll         $a2, $a1, 1
    ctx->pc = 0x36e7fcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x36e800: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x36e800u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x36e804: 0x52fc2  srl         $a1, $a1, 31
    ctx->pc = 0x36e804u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x36e808: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x36e808u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x36e80c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x36e80cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x36e810: 0xa42026  xor         $a0, $a1, $a0
    ctx->pc = 0x36e810u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 4));
    // 0x36e814: 0xac24f004  sw          $a0, -0xFFC($at)
    ctx->pc = 0x36e814u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963204), GPR_U32(ctx, 4));
    // 0x36e818: 0x42202  srl         $a0, $a0, 8
    ctx->pc = 0x36e818u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
    // 0x36e81c: 0x83001b  divu        $zero, $a0, $v1
    ctx->pc = 0x36e81cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x36e820: 0x0  nop
    ctx->pc = 0x36e820u;
    // NOP
    // 0x36e824: 0x0  nop
    ctx->pc = 0x36e824u;
    // NOP
    // 0x36e828: 0x1810  mfhi        $v1
    ctx->pc = 0x36e828u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x36e82c: 0x24630019  addiu       $v1, $v1, 0x19
    ctx->pc = 0x36e82cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25));
    // 0x36e830: 0xa4e31c14  sh          $v1, 0x1C14($a3)
    ctx->pc = 0x36e830u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 7188), (uint16_t)GPR_U32(ctx, 3));
    // 0x36e834: 0x0  nop
    ctx->pc = 0x36e834u;
    // NOP
label_36e838:
    // 0x36e838: 0x8f878c00  lw          $a3, -0x7400($gp)
    ctx->pc = 0x36e838u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36e83c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x36e83cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x36e840: 0x90e41c11  lbu         $a0, 0x1C11($a3)
    ctx->pc = 0x36e840u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 7185)));
    // 0x36e844: 0x14830014  bne         $a0, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x36E844u;
    {
        const bool branch_taken_0x36e844 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x36E848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E844u;
        // 0x36e848: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36e844) {
            ctx->pc = 0x36E898u;
            goto label_36e898;
        }
    }
    ctx->pc = 0x36E84Cu;
    // 0x36e84c: 0x3c03873c  lui         $v1, 0x873C
    ctx->pc = 0x36e84cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34620 << 16));
    // 0x36e850: 0x8c25f004  lw          $a1, -0xFFC($at)
    ctx->pc = 0x36e850u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294963204)));
    // 0x36e854: 0x3464a9e5  ori         $a0, $v1, 0xA9E5
    ctx->pc = 0x36e854u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43493);
    // 0x36e858: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x36e858u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x36e85c: 0x53040  sll         $a2, $a1, 1
    ctx->pc = 0x36e85cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x36e860: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x36e860u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x36e864: 0x52fc2  srl         $a1, $a1, 31
    ctx->pc = 0x36e864u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x36e868: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x36e868u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x36e86c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x36e86cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x36e870: 0xa42026  xor         $a0, $a1, $a0
    ctx->pc = 0x36e870u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 4));
    // 0x36e874: 0xac24f004  sw          $a0, -0xFFC($at)
    ctx->pc = 0x36e874u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963204), GPR_U32(ctx, 4));
    // 0x36e878: 0x42202  srl         $a0, $a0, 8
    ctx->pc = 0x36e878u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
    // 0x36e87c: 0x83001b  divu        $zero, $a0, $v1
    ctx->pc = 0x36e87cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x36e880: 0x0  nop
    ctx->pc = 0x36e880u;
    // NOP
    // 0x36e884: 0x0  nop
    ctx->pc = 0x36e884u;
    // NOP
    // 0x36e888: 0x1810  mfhi        $v1
    ctx->pc = 0x36e888u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x36e88c: 0x2463000f  addiu       $v1, $v1, 0xF
    ctx->pc = 0x36e88cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x36e890: 0xa4e31c14  sh          $v1, 0x1C14($a3)
    ctx->pc = 0x36e890u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 7188), (uint16_t)GPR_U32(ctx, 3));
    // 0x36e894: 0x0  nop
    ctx->pc = 0x36e894u;
    // NOP
label_36e898:
    // 0x36e898: 0x8f858c00  lw          $a1, -0x7400($gp)
    ctx->pc = 0x36e898u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36e89c: 0x90a31c11  lbu         $v1, 0x1C11($a1)
    ctx->pc = 0x36e89cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 7185)));
    // 0x36e8a0: 0x84a41c12  lh          $a0, 0x1C12($a1)
    ctx->pc = 0x36e8a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 7186)));
    // 0x36e8a4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x36e8a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x36e8a8: 0x90631f72  lbu         $v1, 0x1F72($v1)
    ctx->pc = 0x36e8a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 8050)));
    // 0x36e8ac: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x36e8acu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x36e8b0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x36E8B0u;
    {
        const bool branch_taken_0x36e8b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x36E8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E8B0u;
        // 0x36e8b4: 0x24a61c11  addiu       $a2, $a1, 0x1C11 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 7185));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36e8b0) {
            ctx->pc = 0x36E8C0u;
            goto label_36e8c0;
        }
    }
    ctx->pc = 0x36E8B8u;
    // 0x36e8b8: 0xa0c00000  sb          $zero, 0x0($a2)
    ctx->pc = 0x36e8b8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x36e8bc: 0x0  nop
    ctx->pc = 0x36e8bcu;
    // NOP
label_36e8c0:
    // 0x36e8c0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x36e8c0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e8c4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x36e8c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e8c8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x36e8c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e8cc: 0x27b10084  addiu       $s1, $sp, 0x84
    ctx->pc = 0x36e8ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
    // 0x36e8d0: 0x27b00088  addiu       $s0, $sp, 0x88
    ctx->pc = 0x36e8d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x36e8d4: 0x27b5008c  addiu       $s5, $sp, 0x8C
    ctx->pc = 0x36e8d4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
label_36e8d8:
    // 0x36e8d8: 0x12c0000d  beqz        $s6, . + 4 + (0xD << 2)
    ctx->pc = 0x36E8D8u;
    {
        const bool branch_taken_0x36e8d8 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x36e8d8) {
            ctx->pc = 0x36E910u;
            goto label_36e910;
        }
    }
    ctx->pc = 0x36E8E0u;
    // 0x36e8e0: 0x8f858c00  lw          $a1, -0x7400($gp)
    ctx->pc = 0x36e8e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36e8e4: 0xb43021  addu        $a2, $a1, $s4
    ctx->pc = 0x36e8e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 20)));
    // 0x36e8e8: 0x90a31c11  lbu         $v1, 0x1C11($a1)
    ctx->pc = 0x36e8e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 7185)));
    // 0x36e8ec: 0x90c41e28  lbu         $a0, 0x1E28($a2)
    ctx->pc = 0x36e8ecu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 7720)));
    // 0x36e8f0: 0x14830007  bne         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x36E8F0u;
    {
        const bool branch_taken_0x36e8f0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x36e8f0) {
            ctx->pc = 0x36E910u;
            goto label_36e910;
        }
    }
    ctx->pc = 0x36E8F8u;
    // 0x36e8f8: 0x90c41e6a  lbu         $a0, 0x1E6A($a2)
    ctx->pc = 0x36e8f8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 7786)));
    // 0x36e8fc: 0x84a31c12  lh          $v1, 0x1C12($a1)
    ctx->pc = 0x36e8fcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 7186)));
    // 0x36e900: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x36E900u;
    {
        const bool branch_taken_0x36e900 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x36E904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E900u;
        // 0x36e904: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36e900) {
            ctx->pc = 0x36E910u;
            goto label_36e910;
        }
    }
    ctx->pc = 0x36E908u;
    // 0x36e908: 0xc0db0c0  jal         func_36C300
    ctx->pc = 0x36E908u;
    SET_GPR_U32(ctx, 31, 0x36E910u);
    ctx->pc = 0x36C300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C300u, 0x36E908u, 0x36E910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E910u;
label_36e910:
    // 0x36e910: 0x8f848c00  lw          $a0, -0x7400($gp)
    ctx->pc = 0x36e910u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36e914: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x36e914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x36e918: 0x932821  addu        $a1, $a0, $s3
    ctx->pc = 0x36e918u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x36e91c: 0x8ca41d20  lw          $a0, 0x1D20($a1)
    ctx->pc = 0x36e91cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 7456)));
    // 0x36e920: 0x1083003b  beq         $a0, $v1, . + 4 + (0x3B << 2)
    ctx->pc = 0x36E920u;
    {
        const bool branch_taken_0x36e920 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x36E924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E920u;
        // 0x36e924: 0x841818  mult        $v1, $a0, $a0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x36e920) {
            ctx->pc = 0x36EA10u;
            goto label_36ea10;
        }
    }
    ctx->pc = 0x36E928u;
    // 0x36e928: 0x3c023851  lui         $v0, 0x3851
    ctx->pc = 0x36e928u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14417 << 16));
    // 0x36e92c: 0x3442b717  ori         $v0, $v0, 0xB717
    ctx->pc = 0x36e92cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46871);
    // 0x36e930: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x36e930u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x36e934: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x36e934u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x36e938: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x36e938u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e93c: 0xc4a01c18  lwc1        $f0, 0x1C18($a1)
    ctx->pc = 0x36e93cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 7192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36e940: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x36e940u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x36e944: 0x0  nop
    ctx->pc = 0x36e944u;
    // NOP
    // 0x36e948: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x36e948u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x36e94c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x36e94cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x36e950: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x36e950u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x36e954: 0xe4a01c18  swc1        $f0, 0x1C18($a1)
    ctx->pc = 0x36e954u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 7192), bits); }
    // 0x36e958: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36e958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36e95c: 0x531821  addu        $v1, $v0, $s3
    ctx->pc = 0x36e95cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x36e960: 0x8c621d20  lw          $v0, 0x1D20($v1)
    ctx->pc = 0x36e960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7456)));
    // 0x36e964: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x36e964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x36e968: 0xac621d20  sw          $v0, 0x1D20($v1)
    ctx->pc = 0x36e968u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7456), GPR_U32(ctx, 2));
    // 0x36e96c: 0x8f828c00  lw          $v0, -0x7400($gp)
    ctx->pc = 0x36e96cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36e970: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x36e970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x36e974: 0xc4401c18  lwc1        $f0, 0x1C18($v0)
    ctx->pc = 0x36e974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 7192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36e978: 0xafa00080  sw          $zero, 0x80($sp)
    ctx->pc = 0x36e978u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 0));
    // 0x36e97c: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x36e97cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x36e980: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x36e980u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x36e984: 0xaea00000  sw          $zero, 0x0($s5)
    ctx->pc = 0x36e984u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 0));
    // 0x36e988: 0x8f858c00  lw          $a1, -0x7400($gp)
    ctx->pc = 0x36e988u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36e98c: 0xb21021  addu        $v0, $a1, $s2
    ctx->pc = 0x36e98cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    // 0x36e990: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x36e990u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x36e994: 0x84431eee  lh          $v1, 0x1EEE($v0)
    ctx->pc = 0x36e994u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 7918)));
    // 0x36e998: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x36e998u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x36e99c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x36e99cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x36e9a0: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x36e9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x36e9a4: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x36e9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x36e9a8: 0xc0d6b88  jal         func_35AE20
    ctx->pc = 0x36E9A8u;
    SET_GPR_U32(ctx, 31, 0x36E9B0u);
    ctx->pc = 0x36E9ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36E9A8u;
    // 0x36e9ac: 0x24450010  addiu       $a1, $v0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AE20u, 0x36E9A8u, 0x36E9B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E9B0u;
label_36e9b0:
    // 0x36e9b0: 0x8f858c00  lw          $a1, -0x7400($gp)
    ctx->pc = 0x36e9b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36e9b4: 0x3c023bc9  lui         $v0, 0x3BC9
    ctx->pc = 0x36e9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15305 << 16));
    // 0x36e9b8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x36e9b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x36e9bc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x36e9bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36e9c0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x36e9c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x36e9c4: 0xb21021  addu        $v0, $a1, $s2
    ctx->pc = 0x36e9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    // 0x36e9c8: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x36e9c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x36e9cc: 0x84431eee  lh          $v1, 0x1EEE($v0)
    ctx->pc = 0x36e9ccu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 7918)));
    // 0x36e9d0: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x36e9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x36e9d4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x36e9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x36e9d8: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x36e9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x36e9dc: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x36e9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x36e9e0: 0xc0d6bb4  jal         func_35AED0
    ctx->pc = 0x36E9E0u;
    SET_GPR_U32(ctx, 31, 0x36E9E8u);
    ctx->pc = 0x36E9E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36E9E0u;
    // 0x36e9e4: 0x24450010  addiu       $a1, $v0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AED0u, 0x36E9E0u, 0x36E9E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E9E8u;
label_36e9e8:
    // 0x36e9e8: 0x8f848c00  lw          $a0, -0x7400($gp)
    ctx->pc = 0x36e9e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937600)));
    // 0x36e9ec: 0x3c034448  lui         $v1, 0x4448
    ctx->pc = 0x36e9ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17480 << 16));
    // 0x36e9f0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x36e9f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36e9f4: 0x931821  addu        $v1, $a0, $s3
    ctx->pc = 0x36e9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x36e9f8: 0xc4611c18  lwc1        $f1, 0x1C18($v1)
    ctx->pc = 0x36e9f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 7192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36e9fc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x36e9fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x36ea00: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x36EA00u;
    {
        const bool branch_taken_0x36ea00 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x36EA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36EA00u;
        // 0x36ea04: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36ea00) {
            ctx->pc = 0x36EA10u;
            goto label_36ea10;
        }
    }
    ctx->pc = 0x36EA08u;
    // 0x36ea08: 0xc0db09c  jal         func_36C270
    ctx->pc = 0x36EA08u;
    SET_GPR_U32(ctx, 31, 0x36EA10u);
    ctx->pc = 0x36C270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C270u, 0x36EA08u, 0x36EA10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36EA10u;
label_36ea10:
    // 0x36ea10: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x36ea10u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x36ea14: 0x2a830042  slti        $v1, $s4, 0x42
    ctx->pc = 0x36ea14u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)66) ? 1 : 0);
    // 0x36ea18: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x36ea18u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x36ea1c: 0x1460ffae  bnez        $v1, . + 4 + (-0x52 << 2)
    ctx->pc = 0x36EA1Cu;
    {
        const bool branch_taken_0x36ea1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x36EA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36EA1Cu;
        // 0x36ea20: 0x26520002  addiu       $s2, $s2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36ea1c) {
            ctx->pc = 0x36E8D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36e8d8;
        }
    }
    ctx->pc = 0x36EA24u;
    // 0x36ea24: 0x0  nop
    ctx->pc = 0x36ea24u;
    // NOP
label_36ea28:
    // 0x36ea28: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x36ea28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x36ea2c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x36ea2cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x36ea30: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x36ea30u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x36ea34: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x36ea34u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x36ea38: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x36ea38u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x36ea3c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x36ea3cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36ea40: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x36ea40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36ea44: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x36ea44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36ea48: 0x3e00008  jr          $ra
    ctx->pc = 0x36EA48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36EA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36EA48u;
        // 0x36ea4c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36EA48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36EA50u;
}
