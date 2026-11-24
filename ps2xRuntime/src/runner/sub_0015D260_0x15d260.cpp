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

// Function: sub_0015D260
// Address: 0x15d260 - 0x15e1f8
void sub_0015D260_0x15d260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015D260_0x15d260");
#endif

    switch (ctx->pc) {
        case 0x15d2a0u: goto label_15d2a0;
        case 0x15d700u: goto label_15d700;
        case 0x15d708u: goto label_15d708;
        case 0x15dab0u: goto label_15dab0;
        case 0x15dac0u: goto label_15dac0;
        case 0x15dc78u: goto label_15dc78;
        case 0x15e0c0u: goto label_15e0c0;
        case 0x15e18cu: goto label_15e18c;
        case 0x15e1a4u: goto label_15e1a4;
        case 0x15e1bcu: goto label_15e1bc;
        case 0x15e1d4u: goto label_15e1d4;
        default: break;
    }

    ctx->pc = 0x15d260u;

    // 0x15d260: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x15d260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x15d264: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x15d264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x15d268: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x15d268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x15d26c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x15d26cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x15d270: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x15d270u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d274: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15d274u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x15d278: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15d278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15d27c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15d27cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15d280: 0x90830030  lbu         $v1, 0x30($a0)
    ctx->pc = 0x15d280u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x15d284: 0x3c100041  lui         $s0, 0x41
    ctx->pc = 0x15d284u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65 << 16));
    // 0x15d288: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x15D288u;
    {
        const bool branch_taken_0x15d288 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15D28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D288u;
        // 0x15d28c: 0x2610aad0  addiu       $s0, $s0, -0x5530 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294945488));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d288) {
            ctx->pc = 0x15D2D0u;
            goto label_15d2d0;
        }
    }
    ctx->pc = 0x15D290u;
    // 0x15d290: 0x8e820090  lw          $v0, 0x90($s4)
    ctx->pc = 0x15d290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 144)));
    // 0x15d294: 0x90450038  lbu         $a1, 0x38($v0)
    ctx->pc = 0x15d294u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x15d298: 0xc05a388  jal         func_168E20
    ctx->pc = 0x15D298u;
    SET_GPR_U32(ctx, 31, 0x15D2A0u);
    ctx->pc = 0x15D29Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D298u;
    // 0x15d29c: 0x968600a0  lhu         $a2, 0xA0($s4) (Delay Slot)
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 160)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x168E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x168E20u, 0x15D298u, 0x15D2A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D2A0u;
label_15d2a0:
    // 0x15d2a0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x15D2A0u;
    {
        const bool branch_taken_0x15d2a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15d2a0) {
            ctx->pc = 0x15D2B8u;
            goto label_15d2b8;
        }
    }
    ctx->pc = 0x15D2A8u;
    // 0x15d2a8: 0x96830010  lhu         $v1, 0x10($s4)
    ctx->pc = 0x15d2a8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x15d2ac: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x15d2acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x15d2b0: 0x100003c9  b           . + 4 + (0x3C9 << 2)
    ctx->pc = 0x15D2B0u;
    {
        const bool branch_taken_0x15d2b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D2B0u;
        // 0x15d2b4: 0xa6830010  sh          $v1, 0x10($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 16), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d2b0) {
            ctx->pc = 0x15E1D8u;
            goto label_15e1d8;
        }
    }
    ctx->pc = 0x15D2B8u;
label_15d2b8:
    // 0x15d2b8: 0x96840010  lhu         $a0, 0x10($s4)
    ctx->pc = 0x15d2b8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x15d2bc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x15d2bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15d2c0: 0x34840001  ori         $a0, $a0, 0x1
    ctx->pc = 0x15d2c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1);
    // 0x15d2c4: 0xa6840010  sh          $a0, 0x10($s4)
    ctx->pc = 0x15d2c4u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 16), (uint16_t)GPR_U32(ctx, 4));
    // 0x15d2c8: 0xa2830030  sb          $v1, 0x30($s4)
    ctx->pc = 0x15d2c8u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 48), (uint8_t)GPR_U32(ctx, 3));
    // 0x15d2cc: 0x0  nop
    ctx->pc = 0x15d2ccu;
    // NOP
label_15d2d0:
    // 0x15d2d0: 0x8e830090  lw          $v1, 0x90($s4)
    ctx->pc = 0x15d2d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 144)));
    // 0x15d2d4: 0x9065000d  lbu         $a1, 0xD($v1)
    ctx->pc = 0x15d2d4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 13)));
    // 0x15d2d8: 0x9066000f  lbu         $a2, 0xF($v1)
    ctx->pc = 0x15d2d8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 15)));
    // 0x15d2dc: 0x10a00012  beqz        $a1, . + 4 + (0x12 << 2)
    ctx->pc = 0x15D2DCu;
    {
        const bool branch_taken_0x15d2dc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D2DCu;
        // 0x15d2e0: 0x8e930034  lw          $s3, 0x34($s4) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d2dc) {
            ctx->pc = 0x15D328u;
            goto label_15d328;
        }
    }
    ctx->pc = 0x15D2E4u;
    // 0x15d2e4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15d2e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x15d2e8: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x15d2e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x15d2ec: 0x8c24cebc  lw          $a0, -0x3144($at)
    ctx->pc = 0x15d2ecu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x15d2f0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x15d2f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x15d2f4: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x15D2F4u;
    {
        const bool branch_taken_0x15d2f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D2F4u;
        // 0x15d2f8: 0x30a300ff  andi        $v1, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d2f4) {
            ctx->pc = 0x15D310u;
            goto label_15d310;
        }
    }
    ctx->pc = 0x15D2FCu;
    // 0x15d2fc: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x15d2fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x15d300: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x15D300u;
    {
        const bool branch_taken_0x15d300 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15d300) {
            ctx->pc = 0x15D328u;
            goto label_15d328;
        }
    }
    ctx->pc = 0x15D308u;
    // 0x15d308: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x15D308u;
    {
        const bool branch_taken_0x15d308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D308u;
        // 0x15d30c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d308) {
            ctx->pc = 0x15D358u;
            goto label_15d358;
        }
    }
    ctx->pc = 0x15D310u;
label_15d310:
    // 0x15d310: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x15d310u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x15d314: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x15d314u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x15d318: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x15D318u;
    {
        const bool branch_taken_0x15d318 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D318u;
        // 0x15d31c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d318) {
            ctx->pc = 0x15D328u;
            goto label_15d328;
        }
    }
    ctx->pc = 0x15D320u;
    // 0x15d320: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x15D320u;
    {
        const bool branch_taken_0x15d320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15d320) {
            ctx->pc = 0x15D358u;
            goto label_15d358;
        }
    }
    ctx->pc = 0x15D328u;
label_15d328:
    // 0x15d328: 0x10c00009  beqz        $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x15D328u;
    {
        const bool branch_taken_0x15d328 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D328u;
        // 0x15d32c: 0x3c01007e  lui         $at, 0x7E (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d328) {
            ctx->pc = 0x15D350u;
            goto label_15d350;
        }
    }
    ctx->pc = 0x15D330u;
    // 0x15d330: 0x30c400ff  andi        $a0, $a2, 0xFF
    ctx->pc = 0x15d330u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x15d334: 0x902368a3  lbu         $v1, 0x68A3($at)
    ctx->pc = 0x15d334u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 26787)));
    // 0x15d338: 0x831827  nor         $v1, $a0, $v1
    ctx->pc = 0x15d338u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 4) | GPR_U64(ctx, 3)));
    // 0x15d33c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x15d33cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x15d340: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x15D340u;
    {
        const bool branch_taken_0x15d340 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15D344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D340u;
        // 0x15d344: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d340) {
            ctx->pc = 0x15D350u;
            goto label_15d350;
        }
    }
    ctx->pc = 0x15D348u;
    // 0x15d348: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x15D348u;
    {
        const bool branch_taken_0x15d348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15d348) {
            ctx->pc = 0x15D358u;
            goto label_15d358;
        }
    }
    ctx->pc = 0x15D350u;
label_15d350:
    // 0x15d350: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x15d350u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15d354: 0x0  nop
    ctx->pc = 0x15d354u;
    // NOP
label_15d358:
    // 0x15d358: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x15D358u;
    {
        const bool branch_taken_0x15d358 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15d358) {
            ctx->pc = 0x15D370u;
            goto label_15d370;
        }
    }
    ctx->pc = 0x15D360u;
    // 0x15d360: 0x96830010  lhu         $v1, 0x10($s4)
    ctx->pc = 0x15d360u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x15d364: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x15d364u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x15d368: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x15D368u;
    {
        const bool branch_taken_0x15d368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D368u;
        // 0x15d36c: 0xa6830010  sh          $v1, 0x10($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 16), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d368) {
            ctx->pc = 0x15D380u;
            goto label_15d380;
        }
    }
    ctx->pc = 0x15D370u;
label_15d370:
    // 0x15d370: 0x96830010  lhu         $v1, 0x10($s4)
    ctx->pc = 0x15d370u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x15d374: 0x3063fffe  andi        $v1, $v1, 0xFFFE
    ctx->pc = 0x15d374u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65534);
    // 0x15d378: 0xa6830010  sh          $v1, 0x10($s4)
    ctx->pc = 0x15d378u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 16), (uint16_t)GPR_U32(ctx, 3));
    // 0x15d37c: 0x0  nop
    ctx->pc = 0x15d37cu;
    // NOP
label_15d380:
    // 0x15d380: 0x92830098  lbu         $v1, 0x98($s4)
    ctx->pc = 0x15d380u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 152)));
    // 0x15d384: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x15d384u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x15d388: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x15D388u;
    {
        const bool branch_taken_0x15d388 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D388u;
        // 0x15d38c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d388) {
            ctx->pc = 0x15D398u;
            goto label_15d398;
        }
    }
    ctx->pc = 0x15D390u;
    // 0x15d390: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x15D390u;
    {
        const bool branch_taken_0x15d390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15d390) {
            ctx->pc = 0x15D3A0u;
            goto label_15d3a0;
        }
    }
    ctx->pc = 0x15D398u;
label_15d398:
    // 0x15d398: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x15d398u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d39c: 0x0  nop
    ctx->pc = 0x15d39cu;
    // NOP
label_15d3a0:
    // 0x15d3a0: 0x10600035  beqz        $v1, . + 4 + (0x35 << 2)
    ctx->pc = 0x15D3A0u;
    {
        const bool branch_taken_0x15d3a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15d3a0) {
            ctx->pc = 0x15D478u;
            goto label_15d478;
        }
    }
    ctx->pc = 0x15D3A8u;
    // 0x15d3a8: 0x92830098  lbu         $v1, 0x98($s4)
    ctx->pc = 0x15d3a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 152)));
    // 0x15d3ac: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x15d3acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x15d3b0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x15D3B0u;
    {
        const bool branch_taken_0x15d3b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D3B0u;
        // 0x15d3b4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d3b0) {
            ctx->pc = 0x15D3C0u;
            goto label_15d3c0;
        }
    }
    ctx->pc = 0x15D3B8u;
    // 0x15d3b8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x15D3B8u;
    {
        const bool branch_taken_0x15d3b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15d3b8) {
            ctx->pc = 0x15D3C8u;
            goto label_15d3c8;
        }
    }
    ctx->pc = 0x15D3C0u;
label_15d3c0:
    // 0x15d3c0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x15d3c0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d3c4: 0x0  nop
    ctx->pc = 0x15d3c4u;
    // NOP
label_15d3c8:
    // 0x15d3c8: 0x1060002b  beqz        $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x15D3C8u;
    {
        const bool branch_taken_0x15d3c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15d3c8) {
            ctx->pc = 0x15D478u;
            goto label_15d478;
        }
    }
    ctx->pc = 0x15D3D0u;
    // 0x15d3d0: 0x8283009a  lb          $v1, 0x9A($s4)
    ctx->pc = 0x15d3d0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 154)));
    // 0x15d3d4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x15d3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x15d3d8: 0xa283009a  sb          $v1, 0x9A($s4)
    ctx->pc = 0x15d3d8u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 154), (uint8_t)GPR_U32(ctx, 3));
    // 0x15d3dc: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x15d3dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x15d3e0: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x15d3e0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x15d3e4: 0x1c600018  bgtz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x15D3E4u;
    {
        const bool branch_taken_0x15d3e4 = (GPR_S64(ctx, 3) > 0);
        if (branch_taken_0x15d3e4) {
            ctx->pc = 0x15D448u;
            goto label_15d448;
        }
    }
    ctx->pc = 0x15D3ECu;
    // 0x15d3ec: 0x9286009b  lbu         $a2, 0x9B($s4)
    ctx->pc = 0x15d3ecu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 155)));
    // 0x15d3f0: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x15d3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x15d3f4: 0x92840099  lbu         $a0, 0x99($s4)
    ctx->pc = 0x15d3f4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 153)));
    // 0x15d3f8: 0x92850098  lbu         $a1, 0x98($s4)
    ctx->pc = 0x15d3f8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 152)));
    // 0x15d3fc: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x15d3fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x15d400: 0x30a40030  andi        $a0, $a1, 0x30
    ctx->pc = 0x15d400u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)48);
    // 0x15d404: 0x42103  sra         $a0, $a0, 4
    ctx->pc = 0x15d404u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 4));
    // 0x15d408: 0x832007  srav        $a0, $v1, $a0
    ctx->pc = 0x15d408u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
    // 0x15d40c: 0x86082b  sltu        $at, $a0, $a2
    ctx->pc = 0x15d40cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x15d410: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x15D410u;
    {
        const bool branch_taken_0x15d410 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D410u;
        // 0x15d414: 0x30a30080  andi        $v1, $a1, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d410) {
            ctx->pc = 0x15D438u;
            goto label_15d438;
        }
    }
    ctx->pc = 0x15D418u;
    // 0x15d418: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x15D418u;
    {
        const bool branch_taken_0x15d418 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D418u;
        // 0x15d41c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d418) {
            ctx->pc = 0x15D428u;
            goto label_15d428;
        }
    }
    ctx->pc = 0x15D420u;
    // 0x15d420: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x15D420u;
    {
        const bool branch_taken_0x15d420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15d420) {
            ctx->pc = 0x15D438u;
            goto label_15d438;
        }
    }
    ctx->pc = 0x15D428u;
label_15d428:
    // 0x15d428: 0x30a300bf  andi        $v1, $a1, 0xBF
    ctx->pc = 0x15d428u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)191);
    // 0x15d42c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x15d42cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d430: 0xa2830098  sb          $v1, 0x98($s4)
    ctx->pc = 0x15d430u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 152), (uint8_t)GPR_U32(ctx, 3));
    // 0x15d434: 0x0  nop
    ctx->pc = 0x15d434u;
    // NOP
label_15d438:
    // 0x15d438: 0xa286009b  sb          $a2, 0x9B($s4)
    ctx->pc = 0x15d438u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 155), (uint8_t)GPR_U32(ctx, 6));
    // 0x15d43c: 0x92830098  lbu         $v1, 0x98($s4)
    ctx->pc = 0x15d43cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 152)));
    // 0x15d440: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x15d440u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x15d444: 0xa283009a  sb          $v1, 0x9A($s4)
    ctx->pc = 0x15d444u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 154), (uint8_t)GPR_U32(ctx, 3));
label_15d448:
    // 0x15d448: 0x9286009b  lbu         $a2, 0x9B($s4)
    ctx->pc = 0x15d448u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 155)));
    // 0x15d44c: 0x8e85009c  lw          $a1, 0x9C($s4)
    ctx->pc = 0x15d44cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 156)));
    // 0x15d450: 0x3c03ff00  lui         $v1, 0xFF00
    ctx->pc = 0x15d450u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65280 << 16));
    // 0x15d454: 0x8e840020  lw          $a0, 0x20($s4)
    ctx->pc = 0x15d454u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x15d458: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x15d458u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x15d45c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x15d45cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x15d460: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x15d460u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x15d464: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x15d464u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x15d468: 0x4223c  dsll32      $a0, $a0, 8
    ctx->pc = 0x15d468u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 8));
    // 0x15d46c: 0x4223e  dsrl32      $a0, $a0, 8
    ctx->pc = 0x15d46cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 8));
    // 0x15d470: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x15d470u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x15d474: 0xae830020  sw          $v1, 0x20($s4)
    ctx->pc = 0x15d474u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 32), GPR_U32(ctx, 3));
label_15d478:
    // 0x15d478: 0x92840031  lbu         $a0, 0x31($s4)
    ctx->pc = 0x15d478u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 49)));
    // 0x15d47c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x15d47cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x15d480: 0x108302ef  beq         $a0, $v1, . + 4 + (0x2EF << 2)
    ctx->pc = 0x15D480u;
    {
        const bool branch_taken_0x15d480 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x15d480) {
            ctx->pc = 0x15E040u;
            goto label_15e040;
        }
    }
    ctx->pc = 0x15D488u;
    // 0x15d488: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x15d488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15d48c: 0x108202a4  beq         $a0, $v0, . + 4 + (0x2A4 << 2)
    ctx->pc = 0x15D48Cu;
    {
        const bool branch_taken_0x15d48c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x15D490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D48Cu;
        // 0x15d490: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d48c) {
            ctx->pc = 0x15DF20u;
            goto label_15df20;
        }
    }
    ctx->pc = 0x15D494u;
    // 0x15d494: 0x1082006e  beq         $a0, $v0, . + 4 + (0x6E << 2)
    ctx->pc = 0x15D494u;
    {
        const bool branch_taken_0x15d494 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x15d494) {
            ctx->pc = 0x15D650u;
            goto label_15d650;
        }
    }
    ctx->pc = 0x15D49Cu;
    // 0x15d49c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x15D49Cu;
    {
        const bool branch_taken_0x15d49c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x15d49c) {
            ctx->pc = 0x15D4B0u;
            goto label_15d4b0;
        }
    }
    ctx->pc = 0x15D4A4u;
    // 0x15d4a4: 0x100002ee  b           . + 4 + (0x2EE << 2)
    ctx->pc = 0x15D4A4u;
    {
        const bool branch_taken_0x15d4a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15d4a4) {
            ctx->pc = 0x15E060u;
            goto label_15e060;
        }
    }
    ctx->pc = 0x15D4ACu;
    // 0x15d4ac: 0x0  nop
    ctx->pc = 0x15d4acu;
    // NOP
label_15d4b0:
    // 0x15d4b0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15d4b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x15d4b4: 0x8c23f004  lw          $v1, -0xFFC($at)
    ctx->pc = 0x15d4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81F004u));
    // 0x15d4b8: 0x3c02873c  lui         $v0, 0x873C
    ctx->pc = 0x15d4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34620 << 16));
    // 0x15d4bc: 0x3442a9e5  ori         $v0, $v0, 0xA9E5
    ctx->pc = 0x15d4bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43493);
    // 0x15d4c0: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x15d4c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x15d4c4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15d4c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x15d4c8: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x15d4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x15d4cc: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x15d4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x15d4d0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x15d4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x15d4d4: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x15d4d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x15d4d8: 0xac22f004  sw          $v0, -0xFFC($at)
    ctx->pc = 0x15d4d8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963204), GPR_U32(ctx, 2));
    // 0x15d4dc: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x15d4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x15d4e0: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x15d4e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x15d4e4: 0x8e820090  lw          $v0, 0x90($s4)
    ctx->pc = 0x15d4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 144)));
    // 0x15d4e8: 0x9444003e  lhu         $a0, 0x3E($v0)
    ctx->pc = 0x15d4e8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 62)));
    // 0x15d4ec: 0x3082f000  andi        $v0, $a0, 0xF000
    ctx->pc = 0x15d4ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)61440);
    // 0x15d4f0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15D4F0u;
    {
        const bool branch_taken_0x15d4f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15D4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D4F0u;
        // 0x15d4f4: 0x30820fff  andi        $v0, $a0, 0xFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d4f0) {
            ctx->pc = 0x15D500u;
            goto label_15d500;
        }
    }
    ctx->pc = 0x15D4F8u;
    // 0x15d4f8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x15D4F8u;
    {
        const bool branch_taken_0x15d4f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15d4f8) {
            ctx->pc = 0x15D528u;
            goto label_15d528;
        }
    }
    ctx->pc = 0x15D500u;
label_15d500:
    // 0x15d500: 0x43303  sra         $a2, $a0, 12
    ctx->pc = 0x15d500u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 4), 12));
    // 0x15d504: 0x30820fff  andi        $v0, $a0, 0xFFF
    ctx->pc = 0x15d504u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
    // 0x15d508: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x15d508u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x15d50c: 0x24040fff  addiu       $a0, $zero, 0xFFF
    ctx->pc = 0x15d50cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4095));
    // 0x15d510: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x15d510u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x15d514: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x15d514u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x15d518: 0xa42007  srav        $a0, $a0, $a1
    ctx->pc = 0x15d518u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 5) & 0x1F));
    // 0x15d51c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x15d51cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x15d520: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15d520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15d524: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x15d524u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_15d528:
    // 0x15d528: 0xa6820094  sh          $v0, 0x94($s4)
    ctx->pc = 0x15d528u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 148), (uint16_t)GPR_U32(ctx, 2));
    // 0x15d52c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x15d52cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x15d530: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x15d530u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x15d534: 0x14400042  bnez        $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x15D534u;
    {
        const bool branch_taken_0x15d534 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15D538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D534u;
        // 0x15d538: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d534) {
            ctx->pc = 0x15D640u;
            goto label_15d640;
        }
    }
    ctx->pc = 0x15D53Cu;
    // 0x15d53c: 0x3c02873c  lui         $v0, 0x873C
    ctx->pc = 0x15d53cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34620 << 16));
    // 0x15d540: 0x8c23f004  lw          $v1, -0xFFC($at)
    ctx->pc = 0x15d540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294963204)));
    // 0x15d544: 0x3442a9e5  ori         $v0, $v0, 0xA9E5
    ctx->pc = 0x15d544u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43493);
    // 0x15d548: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x15d548u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x15d54c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15d54cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x15d550: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x15d550u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x15d554: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x15d554u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x15d558: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x15d558u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x15d55c: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x15d55cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x15d560: 0xac22f004  sw          $v0, -0xFFC($at)
    ctx->pc = 0x15d560u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963204), GPR_U32(ctx, 2));
    // 0x15d564: 0x212c2  srl         $v0, $v0, 11
    ctx->pc = 0x15d564u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 11));
    // 0x15d568: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x15d568u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x15d56c: 0x8e820090  lw          $v0, 0x90($s4)
    ctx->pc = 0x15d56cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 144)));
    // 0x15d570: 0x9444003c  lhu         $a0, 0x3C($v0)
    ctx->pc = 0x15d570u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x15d574: 0x3082f000  andi        $v0, $a0, 0xF000
    ctx->pc = 0x15d574u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)61440);
    // 0x15d578: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15D578u;
    {
        const bool branch_taken_0x15d578 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15D57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D578u;
        // 0x15d57c: 0x30820fff  andi        $v0, $a0, 0xFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d578) {
            ctx->pc = 0x15D588u;
            goto label_15d588;
        }
    }
    ctx->pc = 0x15D580u;
    // 0x15d580: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x15D580u;
    {
        const bool branch_taken_0x15d580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15d580) {
            ctx->pc = 0x15D5B0u;
            goto label_15d5b0;
        }
    }
    ctx->pc = 0x15D588u;
label_15d588:
    // 0x15d588: 0x43303  sra         $a2, $a0, 12
    ctx->pc = 0x15d588u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 4), 12));
    // 0x15d58c: 0x30820fff  andi        $v0, $a0, 0xFFF
    ctx->pc = 0x15d58cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
    // 0x15d590: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x15d590u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x15d594: 0x24040fff  addiu       $a0, $zero, 0xFFF
    ctx->pc = 0x15d594u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4095));
    // 0x15d598: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x15d598u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x15d59c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x15d59cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x15d5a0: 0xa42007  srav        $a0, $a0, $a1
    ctx->pc = 0x15d5a0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 5) & 0x1F));
    // 0x15d5a4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x15d5a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x15d5a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15d5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15d5ac: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x15d5acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_15d5b0:
    // 0x15d5b0: 0xa6820094  sh          $v0, 0x94($s4)
    ctx->pc = 0x15d5b0u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 148), (uint16_t)GPR_U32(ctx, 2));
    // 0x15d5b4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15d5b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x15d5b8: 0x3c02873c  lui         $v0, 0x873C
    ctx->pc = 0x15d5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34620 << 16));
    // 0x15d5bc: 0x8c23f004  lw          $v1, -0xFFC($at)
    ctx->pc = 0x15d5bcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81F004u));
    // 0x15d5c0: 0x3442a9e5  ori         $v0, $v0, 0xA9E5
    ctx->pc = 0x15d5c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43493);
    // 0x15d5c4: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x15d5c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x15d5c8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15d5c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x15d5cc: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x15d5ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x15d5d0: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x15d5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x15d5d4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x15d5d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x15d5d8: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x15d5d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x15d5dc: 0xac22f004  sw          $v0, -0xFFC($at)
    ctx->pc = 0x15d5dcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963204), GPR_U32(ctx, 2));
    // 0x15d5e0: 0x21382  srl         $v0, $v0, 14
    ctx->pc = 0x15d5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 14));
    // 0x15d5e4: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x15d5e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x15d5e8: 0x8e820090  lw          $v0, 0x90($s4)
    ctx->pc = 0x15d5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 144)));
    // 0x15d5ec: 0x94440040  lhu         $a0, 0x40($v0)
    ctx->pc = 0x15d5ecu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x15d5f0: 0x3082f000  andi        $v0, $a0, 0xF000
    ctx->pc = 0x15d5f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)61440);
    // 0x15d5f4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x15D5F4u;
    {
        const bool branch_taken_0x15d5f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15d5f4) {
            ctx->pc = 0x15D608u;
            goto label_15d608;
        }
    }
    ctx->pc = 0x15D5FCu;
    // 0x15d5fc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x15D5FCu;
    {
        const bool branch_taken_0x15d5fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D5FCu;
        // 0x15d600: 0x30820fff  andi        $v0, $a0, 0xFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d5fc) {
            ctx->pc = 0x15D630u;
            goto label_15d630;
        }
    }
    ctx->pc = 0x15D604u;
    // 0x15d604: 0x0  nop
    ctx->pc = 0x15d604u;
    // NOP
label_15d608:
    // 0x15d608: 0x43303  sra         $a2, $a0, 12
    ctx->pc = 0x15d608u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 4), 12));
    // 0x15d60c: 0x30820fff  andi        $v0, $a0, 0xFFF
    ctx->pc = 0x15d60cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
    // 0x15d610: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x15d610u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x15d614: 0x24040fff  addiu       $a0, $zero, 0xFFF
    ctx->pc = 0x15d614u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4095));
    // 0x15d618: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x15d618u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x15d61c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x15d61cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x15d620: 0xa42007  srav        $a0, $a0, $a1
    ctx->pc = 0x15d620u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 5) & 0x1F));
    // 0x15d624: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x15d624u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x15d628: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15d628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15d62c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x15d62cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_15d630:
    // 0x15d630: 0xa6820096  sh          $v0, 0x96($s4)
    ctx->pc = 0x15d630u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 150), (uint16_t)GPR_U32(ctx, 2));
    // 0x15d634: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15d634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15d638: 0x10000289  b           . + 4 + (0x289 << 2)
    ctx->pc = 0x15D638u;
    {
        const bool branch_taken_0x15d638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D638u;
        // 0x15d63c: 0xa2820031  sb          $v0, 0x31($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 49), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d638) {
            ctx->pc = 0x15E060u;
            goto label_15e060;
        }
    }
    ctx->pc = 0x15D640u;
label_15d640:
    // 0x15d640: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x15d640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15d644: 0x10000286  b           . + 4 + (0x286 << 2)
    ctx->pc = 0x15D644u;
    {
        const bool branch_taken_0x15d644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D644u;
        // 0x15d648: 0xa2820031  sb          $v0, 0x31($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 49), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d644) {
            ctx->pc = 0x15E060u;
            goto label_15e060;
        }
    }
    ctx->pc = 0x15D64Cu;
    // 0x15d64c: 0x0  nop
    ctx->pc = 0x15d64cu;
    // NOP
label_15d650:
    // 0x15d650: 0x86820096  lh          $v0, 0x96($s4)
    ctx->pc = 0x15d650u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 150)));
    // 0x15d654: 0x144001b4  bnez        $v0, . + 4 + (0x1B4 << 2)
    ctx->pc = 0x15D654u;
    {
        const bool branch_taken_0x15d654 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15D658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D654u;
        // 0x15d658: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d654) {
            ctx->pc = 0x15DD28u;
            goto label_15dd28;
        }
    }
    ctx->pc = 0x15D65Cu;
    // 0x15d65c: 0x3c02873c  lui         $v0, 0x873C
    ctx->pc = 0x15d65cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34620 << 16));
    // 0x15d660: 0xac20000c  sw          $zero, 0xC($at)
    ctx->pc = 0x15d660u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 12), GPR_U32(ctx, 0)); // MMIO: 0x7000000c
    // 0x15d664: 0x3442a9e5  ori         $v0, $v0, 0xA9E5
    ctx->pc = 0x15d664u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43493);
    // 0x15d668: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x15d668u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x15d66c: 0xac200004  sw          $zero, 0x4($at)
    ctx->pc = 0x15d66cu;
    runtime->Store32(rdram, ctx, 0x70000004u, GPR_U32(ctx, 0)); // MMIO: 0x70000004
    // 0x15d670: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x15d670u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x15d674: 0xac200000  sw          $zero, 0x0($at)
    ctx->pc = 0x15d674u;
    runtime->Store32(rdram, ctx, 0x70000000u, GPR_U32(ctx, 0)); // MMIO: 0x70000000
    // 0x15d678: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x15d678u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x15d67c: 0xa4200284  sh          $zero, 0x284($at)
    ctx->pc = 0x15d67cu;
    runtime->Store16(rdram, ctx, 0x70000284u, (uint16_t)GPR_U32(ctx, 0));
    // 0x15d680: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15d680u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x15d684: 0x8c23f004  lw          $v1, -0xFFC($at)
    ctx->pc = 0x15d684u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81F004u));
    // 0x15d688: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x15d688u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x15d68c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15d68cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x15d690: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x15d690u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x15d694: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x15d694u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x15d698: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x15d698u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x15d69c: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x15d69cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x15d6a0: 0xac22f004  sw          $v0, -0xFFC($at)
    ctx->pc = 0x15d6a0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963204), GPR_U32(ctx, 2));
    // 0x15d6a4: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x15d6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x15d6a8: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x15d6a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x15d6ac: 0x8e820090  lw          $v0, 0x90($s4)
    ctx->pc = 0x15d6acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 144)));
    // 0x15d6b0: 0x9444003a  lhu         $a0, 0x3A($v0)
    ctx->pc = 0x15d6b0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 58)));
    // 0x15d6b4: 0x3082f000  andi        $v0, $a0, 0xF000
    ctx->pc = 0x15d6b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)61440);
    // 0x15d6b8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15D6B8u;
    {
        const bool branch_taken_0x15d6b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15D6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D6B8u;
        // 0x15d6bc: 0x30820fff  andi        $v0, $a0, 0xFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d6b8) {
            ctx->pc = 0x15D6C8u;
            goto label_15d6c8;
        }
    }
    ctx->pc = 0x15D6C0u;
    // 0x15d6c0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x15D6C0u;
    {
        const bool branch_taken_0x15d6c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15d6c0) {
            ctx->pc = 0x15D6F0u;
            goto label_15d6f0;
        }
    }
    ctx->pc = 0x15D6C8u;
label_15d6c8:
    // 0x15d6c8: 0x43303  sra         $a2, $a0, 12
    ctx->pc = 0x15d6c8u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 4), 12));
    // 0x15d6cc: 0x30820fff  andi        $v0, $a0, 0xFFF
    ctx->pc = 0x15d6ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
    // 0x15d6d0: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x15d6d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x15d6d4: 0x24040fff  addiu       $a0, $zero, 0xFFF
    ctx->pc = 0x15d6d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4095));
    // 0x15d6d8: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x15d6d8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x15d6dc: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x15d6dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x15d6e0: 0xa42007  srav        $a0, $a0, $a1
    ctx->pc = 0x15d6e0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 5) & 0x1F));
    // 0x15d6e4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x15d6e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x15d6e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15d6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15d6ec: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x15d6ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_15d6f0:
    // 0x15d6f0: 0x3051ffff  andi        $s1, $v0, 0xFFFF
    ctx->pc = 0x15d6f0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x15d6f4: 0x16200002  bnez        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x15D6F4u;
    {
        const bool branch_taken_0x15d6f4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x15d6f4) {
            ctx->pc = 0x15D700u;
            goto label_15d700;
        }
    }
    ctx->pc = 0x15D6FCu;
    // 0x15d6fc: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x15d6fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15d700:
    // 0x15d700: 0xc05d368  jal         func_174DA0
    ctx->pc = 0x15D700u;
    SET_GPR_U32(ctx, 31, 0x15D708u);
    ctx->pc = 0x15D704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D700u;
    // 0x15d704: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174DA0u, 0x15D700u, 0x15D708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D708u;
label_15d708:
    // 0x15d708: 0x10400165  beqz        $v0, . + 4 + (0x165 << 2)
    ctx->pc = 0x15D708u;
    {
        const bool branch_taken_0x15d708 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D708u;
        // 0x15d70c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d708) {
            ctx->pc = 0x15DCA0u;
            goto label_15dca0;
        }
    }
    ctx->pc = 0x15D710u;
    // 0x15d710: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15d710u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x15d714: 0x3c02873c  lui         $v0, 0x873C
    ctx->pc = 0x15d714u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34620 << 16));
    // 0x15d718: 0x8c23f004  lw          $v1, -0xFFC($at)
    ctx->pc = 0x15d718u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81F004u));
    // 0x15d71c: 0x3442a9e5  ori         $v0, $v0, 0xA9E5
    ctx->pc = 0x15d71cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43493);
    // 0x15d720: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x15d720u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x15d724: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15d724u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x15d728: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x15d728u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x15d72c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x15d72cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x15d730: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x15d730u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x15d734: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x15d734u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x15d738: 0xac22f004  sw          $v0, -0xFFC($at)
    ctx->pc = 0x15d738u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963204), GPR_U32(ctx, 2));
    // 0x15d73c: 0x21382  srl         $v0, $v0, 14
    ctx->pc = 0x15d73cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 14));
    // 0x15d740: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x15d740u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x15d744: 0x8e820090  lw          $v0, 0x90($s4)
    ctx->pc = 0x15d744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 144)));
    // 0x15d748: 0x94440046  lhu         $a0, 0x46($v0)
    ctx->pc = 0x15d748u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 70)));
    // 0x15d74c: 0x3082f000  andi        $v0, $a0, 0xF000
    ctx->pc = 0x15d74cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)61440);
    // 0x15d750: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15D750u;
    {
        const bool branch_taken_0x15d750 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15D754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D750u;
        // 0x15d754: 0x30820fff  andi        $v0, $a0, 0xFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d750) {
            ctx->pc = 0x15D760u;
            goto label_15d760;
        }
    }
    ctx->pc = 0x15D758u;
    // 0x15d758: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x15D758u;
    {
        const bool branch_taken_0x15d758 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15d758) {
            ctx->pc = 0x15D788u;
            goto label_15d788;
        }
    }
    ctx->pc = 0x15D760u;
label_15d760:
    // 0x15d760: 0x43303  sra         $a2, $a0, 12
    ctx->pc = 0x15d760u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 4), 12));
    // 0x15d764: 0x30820fff  andi        $v0, $a0, 0xFFF
    ctx->pc = 0x15d764u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
    // 0x15d768: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x15d768u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x15d76c: 0x24040fff  addiu       $a0, $zero, 0xFFF
    ctx->pc = 0x15d76cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4095));
    // 0x15d770: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x15d770u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x15d774: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x15d774u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x15d778: 0xa42007  srav        $a0, $a0, $a1
    ctx->pc = 0x15d778u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 5) & 0x1F));
    // 0x15d77c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x15d77cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x15d780: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15d780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15d784: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x15d784u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_15d788:
    // 0x15d788: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15d788u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x15d78c: 0x8c24f004  lw          $a0, -0xFFC($at)
    ctx->pc = 0x15d78cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x81F004u));
    // 0x15d790: 0x3c03873c  lui         $v1, 0x873C
    ctx->pc = 0x15d790u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34620 << 16));
    // 0x15d794: 0x3463a9e5  ori         $v1, $v1, 0xA9E5
    ctx->pc = 0x15d794u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43493);
    // 0x15d798: 0x42840  sll         $a1, $a0, 1
    ctx->pc = 0x15d798u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x15d79c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15d79cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x15d7a0: 0x427c2  srl         $a0, $a0, 31
    ctx->pc = 0x15d7a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x15d7a4: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x15d7a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x15d7a8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x15d7a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x15d7ac: 0x831826  xor         $v1, $a0, $v1
    ctx->pc = 0x15d7acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 3));
    // 0x15d7b0: 0xac23f004  sw          $v1, -0xFFC($at)
    ctx->pc = 0x15d7b0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963204), GPR_U32(ctx, 3));
    // 0x15d7b4: 0x31ac2  srl         $v1, $v1, 11
    ctx->pc = 0x15d7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 11));
    // 0x15d7b8: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x15d7b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x15d7bc: 0x8e830090  lw          $v1, 0x90($s4)
    ctx->pc = 0x15d7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 144)));
    // 0x15d7c0: 0x94650044  lhu         $a1, 0x44($v1)
    ctx->pc = 0x15d7c0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x15d7c4: 0x30a3f000  andi        $v1, $a1, 0xF000
    ctx->pc = 0x15d7c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)61440);
    // 0x15d7c8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x15D7C8u;
    {
        const bool branch_taken_0x15d7c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15D7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D7C8u;
        // 0x15d7cc: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d7c8) {
            ctx->pc = 0x15D7D8u;
            goto label_15d7d8;
        }
    }
    ctx->pc = 0x15D7D0u;
    // 0x15d7d0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x15D7D0u;
    {
        const bool branch_taken_0x15d7d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D7D0u;
        // 0x15d7d4: 0x30a30fff  andi        $v1, $a1, 0xFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4095);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d7d0) {
            ctx->pc = 0x15D800u;
            goto label_15d800;
        }
    }
    ctx->pc = 0x15D7D8u;
label_15d7d8:
    // 0x15d7d8: 0x53b03  sra         $a3, $a1, 12
    ctx->pc = 0x15d7d8u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 5), 12));
    // 0x15d7dc: 0x30a30fff  andi        $v1, $a1, 0xFFF
    ctx->pc = 0x15d7dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4095);
    // 0x15d7e0: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x15d7e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x15d7e4: 0x24050fff  addiu       $a1, $zero, 0xFFF
    ctx->pc = 0x15d7e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4095));
    // 0x15d7e8: 0xc73023  subu        $a2, $a2, $a3
    ctx->pc = 0x15d7e8u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x15d7ec: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x15d7ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x15d7f0: 0xc52807  srav        $a1, $a1, $a2
    ctx->pc = 0x15d7f0u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), GPR_U32(ctx, 6) & 0x1F));
    // 0x15d7f4: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x15d7f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x15d7f8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15d7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x15d7fc: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x15d7fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_15d800:
    // 0x15d800: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15d800u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x15d804: 0x8c25f004  lw          $a1, -0xFFC($at)
    ctx->pc = 0x15d804u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x81F004u));
    // 0x15d808: 0x3c04873c  lui         $a0, 0x873C
    ctx->pc = 0x15d808u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34620 << 16));
    // 0x15d80c: 0x3484a9e5  ori         $a0, $a0, 0xA9E5
    ctx->pc = 0x15d80cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)43493);
    // 0x15d810: 0x53040  sll         $a2, $a1, 1
    ctx->pc = 0x15d810u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x15d814: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15d814u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x15d818: 0x52fc2  srl         $a1, $a1, 31
    ctx->pc = 0x15d818u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x15d81c: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x15d81cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x15d820: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x15d820u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x15d824: 0xa42026  xor         $a0, $a1, $a0
    ctx->pc = 0x15d824u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 4));
    // 0x15d828: 0xac24f004  sw          $a0, -0xFFC($at)
    ctx->pc = 0x15d828u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963204), GPR_U32(ctx, 4));
    // 0x15d82c: 0x42202  srl         $a0, $a0, 8
    ctx->pc = 0x15d82cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
    // 0x15d830: 0x3085ffff  andi        $a1, $a0, 0xFFFF
    ctx->pc = 0x15d830u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x15d834: 0x8e840090  lw          $a0, 0x90($s4)
    ctx->pc = 0x15d834u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 144)));
    // 0x15d838: 0x94860042  lhu         $a2, 0x42($a0)
    ctx->pc = 0x15d838u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 66)));
    // 0x15d83c: 0x30c4f000  andi        $a0, $a2, 0xF000
    ctx->pc = 0x15d83cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)61440);
    // 0x15d840: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15D840u;
    {
        const bool branch_taken_0x15d840 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x15D844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D840u;
        // 0x15d844: 0x3063ffff  andi        $v1, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d840) {
            ctx->pc = 0x15D850u;
            goto label_15d850;
        }
    }
    ctx->pc = 0x15D848u;
    // 0x15d848: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x15D848u;
    {
        const bool branch_taken_0x15d848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D848u;
        // 0x15d84c: 0x30c40fff  andi        $a0, $a2, 0xFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)4095);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d848) {
            ctx->pc = 0x15D878u;
            goto label_15d878;
        }
    }
    ctx->pc = 0x15D850u;
label_15d850:
    // 0x15d850: 0x64303  sra         $t0, $a2, 12
    ctx->pc = 0x15d850u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 6), 12));
    // 0x15d854: 0x30c40fff  andi        $a0, $a2, 0xFFF
    ctx->pc = 0x15d854u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)4095);
    // 0x15d858: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x15d858u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x15d85c: 0x24060fff  addiu       $a2, $zero, 0xFFF
    ctx->pc = 0x15d85cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4095));
    // 0x15d860: 0xe83823  subu        $a3, $a3, $t0
    ctx->pc = 0x15d860u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x15d864: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x15d864u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x15d868: 0xe63007  srav        $a2, $a2, $a3
    ctx->pc = 0x15d868u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), GPR_U32(ctx, 7) & 0x1F));
    // 0x15d86c: 0xa62824  and         $a1, $a1, $a2
    ctx->pc = 0x15d86cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
    // 0x15d870: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x15d870u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x15d874: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x15d874u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
label_15d878:
    // 0x15d878: 0x92880023  lbu         $t0, 0x23($s4)
    ctx->pc = 0x15d878u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 35)));
    // 0x15d87c: 0x3087ffff  andi        $a3, $a0, 0xFFFF
    ctx->pc = 0x15d87cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x15d880: 0x10e00015  beqz        $a3, . + 4 + (0x15 << 2)
    ctx->pc = 0x15D880u;
    {
        const bool branch_taken_0x15d880 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D880u;
        // 0x15d884: 0x26460008  addiu       $a2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d880) {
            ctx->pc = 0x15D8D8u;
            goto label_15d8d8;
        }
    }
    ctx->pc = 0x15D888u;
    // 0x15d888: 0x30e4ffff  andi        $a0, $a3, 0xFFFF
    ctx->pc = 0x15d888u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x15d88c: 0x310500ff  andi        $a1, $t0, 0xFF
    ctx->pc = 0x15d88cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x15d890: 0xa2400006  sb          $zero, 0x6($s2)
    ctx->pc = 0x15d890u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 6), (uint8_t)GPR_U32(ctx, 0));
    // 0x15d894: 0xa4082a  slt         $at, $a1, $a0
    ctx->pc = 0x15d894u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x15d898: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x15D898u;
    {
        const bool branch_taken_0x15d898 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D898u;
        // 0x15d89c: 0xa0c80002  sb          $t0, 0x2($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d898) {
            ctx->pc = 0x15D8B0u;
            goto label_15d8b0;
        }
    }
    ctx->pc = 0x15D8A0u;
    // 0x15d8a0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x15d8a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15d8a4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x15D8A4u;
    {
        const bool branch_taken_0x15d8a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D8A4u;
        // 0x15d8a8: 0xa0c40003  sb          $a0, 0x3($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d8a4) {
            ctx->pc = 0x15D8C8u;
            goto label_15d8c8;
        }
    }
    ctx->pc = 0x15D8ACu;
    // 0x15d8ac: 0x0  nop
    ctx->pc = 0x15d8acu;
    // NOP
label_15d8b0:
    // 0x15d8b0: 0x30e400ff  andi        $a0, $a3, 0xFF
    ctx->pc = 0x15d8b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x15d8b4: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x15d8b4u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x15d8b8: 0x0  nop
    ctx->pc = 0x15d8b8u;
    // NOP
    // 0x15d8bc: 0x0  nop
    ctx->pc = 0x15d8bcu;
    // NOP
    // 0x15d8c0: 0x2012  mflo        $a0
    ctx->pc = 0x15d8c0u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x15d8c4: 0xa0c40003  sb          $a0, 0x3($a2)
    ctx->pc = 0x15d8c4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 4));
label_15d8c8:
    // 0x15d8c8: 0xa4c30004  sh          $v1, 0x4($a2)
    ctx->pc = 0x15d8c8u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x15d8cc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x15D8CCu;
    {
        const bool branch_taken_0x15d8cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D8CCu;
        // 0x15d8d0: 0xa0c00000  sb          $zero, 0x0($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d8cc) {
            ctx->pc = 0x15D8F8u;
            goto label_15d8f8;
        }
    }
    ctx->pc = 0x15D8D4u;
    // 0x15d8d4: 0x0  nop
    ctx->pc = 0x15d8d4u;
    // NOP
label_15d8d8:
    // 0x15d8d8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x15D8D8u;
    {
        const bool branch_taken_0x15d8d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D8D8u;
        // 0x15d8dc: 0xa2480006  sb          $t0, 0x6($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 6), (uint8_t)GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d8d8) {
            ctx->pc = 0x15D8F0u;
            goto label_15d8f0;
        }
    }
    ctx->pc = 0x15D8E0u;
    // 0x15d8e0: 0xa4c30004  sh          $v1, 0x4($a2)
    ctx->pc = 0x15d8e0u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x15d8e4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x15d8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15d8e8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x15D8E8u;
    {
        const bool branch_taken_0x15d8e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D8E8u;
        // 0x15d8ec: 0xa0c30000  sb          $v1, 0x0($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d8e8) {
            ctx->pc = 0x15D8F8u;
            goto label_15d8f8;
        }
    }
    ctx->pc = 0x15D8F0u;
label_15d8f0:
    // 0x15d8f0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x15d8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15d8f4: 0xa0c30000  sb          $v1, 0x0($a2)
    ctx->pc = 0x15d8f4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
label_15d8f8:
    // 0x15d8f8: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x15D8F8u;
    {
        const bool branch_taken_0x15d8f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D8F8u;
        // 0x15d8fc: 0x310300ff  andi        $v1, $t0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d8f8) {
            ctx->pc = 0x15D940u;
            goto label_15d940;
        }
    }
    ctx->pc = 0x15D900u;
    // 0x15d900: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x15d900u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x15d904: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x15d904u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x15d908: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x15D908u;
    {
        const bool branch_taken_0x15d908 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x15d908) {
            ctx->pc = 0x15D920u;
            goto label_15d920;
        }
    }
    ctx->pc = 0x15D910u;
    // 0x15d910: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15d910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15d914: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x15D914u;
    {
        const bool branch_taken_0x15d914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D914u;
        // 0x15d918: 0xa2420007  sb          $v0, 0x7($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 7), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d914) {
            ctx->pc = 0x15D948u;
            goto label_15d948;
        }
    }
    ctx->pc = 0x15D91Cu;
    // 0x15d91c: 0x0  nop
    ctx->pc = 0x15d91cu;
    // NOP
label_15d920:
    // 0x15d920: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x15d920u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x15d924: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x15d924u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x15d928: 0x0  nop
    ctx->pc = 0x15d928u;
    // NOP
    // 0x15d92c: 0x0  nop
    ctx->pc = 0x15d92cu;
    // NOP
    // 0x15d930: 0x1012  mflo        $v0
    ctx->pc = 0x15d930u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x15d934: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x15D934u;
    {
        const bool branch_taken_0x15d934 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D934u;
        // 0x15d938: 0xa2420007  sb          $v0, 0x7($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 7), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d934) {
            ctx->pc = 0x15D948u;
            goto label_15d948;
        }
    }
    ctx->pc = 0x15D93Cu;
    // 0x15d93c: 0x0  nop
    ctx->pc = 0x15d93cu;
    // NOP
label_15d940:
    // 0x15d940: 0xa2480007  sb          $t0, 0x7($s2)
    ctx->pc = 0x15d940u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 7), (uint8_t)GPR_U32(ctx, 8));
    // 0x15d944: 0x0  nop
    ctx->pc = 0x15d944u;
    // NOP
label_15d948:
    // 0x15d948: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15d948u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x15d94c: 0x8c25f004  lw          $a1, -0xFFC($at)
    ctx->pc = 0x15d94cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x81F004u));
    // 0x15d950: 0x3c02873c  lui         $v0, 0x873C
    ctx->pc = 0x15d950u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34620 << 16));
    // 0x15d954: 0x3444a9e5  ori         $a0, $v0, 0xA9E5
    ctx->pc = 0x15d954u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43493);
    // 0x15d958: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x15d958u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x15d95c: 0x517c2  srl         $v0, $a1, 31
    ctx->pc = 0x15d95cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x15d960: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x15d960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x15d964: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15d964u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x15d968: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x15d968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x15d96c: 0x441026  xor         $v0, $v0, $a0
    ctx->pc = 0x15d96cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 4));
    // 0x15d970: 0xac22f004  sw          $v0, -0xFFC($at)
    ctx->pc = 0x15d970u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963204), GPR_U32(ctx, 2));
    // 0x15d974: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x15d974u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x15d978: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x15d978u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x15d97c: 0x3043003f  andi        $v1, $v0, 0x3F
    ctx->pc = 0x15d97cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x15d980: 0x8e820090  lw          $v0, 0x90($s4)
    ctx->pc = 0x15d980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 144)));
    // 0x15d984: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x15d984u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x15d988: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x15d988u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x15d98c: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x15d98cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15d990: 0xc442005c  lwc1        $f2, 0x5C($v0)
    ctx->pc = 0x15d990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15d994: 0xc4400058  lwc1        $f0, 0x58($v0)
    ctx->pc = 0x15d994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15d998: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x15d998u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x15d99c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x15d99cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x15d9a0: 0xe4200008  swc1        $f0, 0x8($at)
    ctx->pc = 0x15d9a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 8), bits); }
    // 0x15d9a4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15d9a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x15d9a8: 0x8c22f004  lw          $v0, -0xFFC($at)
    ctx->pc = 0x15d9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x81F004u));
    // 0x15d9ac: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x15d9acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x15d9b0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15d9b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x15d9b4: 0x217c2  srl         $v0, $v0, 31
    ctx->pc = 0x15d9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x15d9b8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x15d9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x15d9bc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x15d9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x15d9c0: 0x441026  xor         $v0, $v0, $a0
    ctx->pc = 0x15d9c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 4));
    // 0x15d9c4: 0xac22f004  sw          $v0, -0xFFC($at)
    ctx->pc = 0x15d9c4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963204), GPR_U32(ctx, 2));
    // 0x15d9c8: 0x212c2  srl         $v0, $v0, 11
    ctx->pc = 0x15d9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 11));
    // 0x15d9cc: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x15d9ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x15d9d0: 0x8e820090  lw          $v0, 0x90($s4)
    ctx->pc = 0x15d9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 144)));
    // 0x15d9d4: 0x94440054  lhu         $a0, 0x54($v0)
    ctx->pc = 0x15d9d4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x15d9d8: 0x3082f000  andi        $v0, $a0, 0xF000
    ctx->pc = 0x15d9d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)61440);
    // 0x15d9dc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x15D9DCu;
    {
        const bool branch_taken_0x15d9dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15D9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D9DCu;
        // 0x15d9e0: 0x30820fff  andi        $v0, $a0, 0xFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d9dc) {
            ctx->pc = 0x15D9F0u;
            goto label_15d9f0;
        }
    }
    ctx->pc = 0x15D9E4u;
    // 0x15d9e4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x15D9E4u;
    {
        const bool branch_taken_0x15d9e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15d9e4) {
            ctx->pc = 0x15DA18u;
            goto label_15da18;
        }
    }
    ctx->pc = 0x15D9ECu;
    // 0x15d9ec: 0x0  nop
    ctx->pc = 0x15d9ecu;
    // NOP
label_15d9f0:
    // 0x15d9f0: 0x43303  sra         $a2, $a0, 12
    ctx->pc = 0x15d9f0u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 4), 12));
    // 0x15d9f4: 0x30820fff  andi        $v0, $a0, 0xFFF
    ctx->pc = 0x15d9f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
    // 0x15d9f8: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x15d9f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x15d9fc: 0x24040fff  addiu       $a0, $zero, 0xFFF
    ctx->pc = 0x15d9fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4095));
    // 0x15da00: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x15da00u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x15da04: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x15da04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x15da08: 0xa42007  srav        $a0, $a0, $a1
    ctx->pc = 0x15da08u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 5) & 0x1F));
    // 0x15da0c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x15da0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x15da10: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15da10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15da14: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x15da14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_15da18:
    // 0x15da18: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x15da18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x15da1c: 0xa4220280  sh          $v0, 0x280($at)
    ctx->pc = 0x15da1cu;
    runtime->Store16(rdram, ctx, 0x70000280u, (uint16_t)GPR_U32(ctx, 2));
    // 0x15da20: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15da20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x15da24: 0x3c02873c  lui         $v0, 0x873C
    ctx->pc = 0x15da24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34620 << 16));
    // 0x15da28: 0x8c23f004  lw          $v1, -0xFFC($at)
    ctx->pc = 0x15da28u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81F004u));
    // 0x15da2c: 0x3442a9e5  ori         $v0, $v0, 0xA9E5
    ctx->pc = 0x15da2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43493);
    // 0x15da30: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x15da30u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x15da34: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15da34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x15da38: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x15da38u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x15da3c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x15da3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x15da40: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x15da40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x15da44: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x15da44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x15da48: 0xac22f004  sw          $v0, -0xFFC($at)
    ctx->pc = 0x15da48u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963204), GPR_U32(ctx, 2));
    // 0x15da4c: 0x21382  srl         $v0, $v0, 14
    ctx->pc = 0x15da4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 14));
    // 0x15da50: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x15da50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x15da54: 0x8e820090  lw          $v0, 0x90($s4)
    ctx->pc = 0x15da54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 144)));
    // 0x15da58: 0x94440056  lhu         $a0, 0x56($v0)
    ctx->pc = 0x15da58u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 86)));
    // 0x15da5c: 0x3082f000  andi        $v0, $a0, 0xF000
    ctx->pc = 0x15da5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)61440);
    // 0x15da60: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15DA60u;
    {
        const bool branch_taken_0x15da60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15da60) {
            ctx->pc = 0x15DA70u;
            goto label_15da70;
        }
    }
    ctx->pc = 0x15DA68u;
    // 0x15da68: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x15DA68u;
    {
        const bool branch_taken_0x15da68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15DA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DA68u;
        // 0x15da6c: 0x30820fff  andi        $v0, $a0, 0xFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15da68) {
            ctx->pc = 0x15DA98u;
            goto label_15da98;
        }
    }
    ctx->pc = 0x15DA70u;
label_15da70:
    // 0x15da70: 0x43303  sra         $a2, $a0, 12
    ctx->pc = 0x15da70u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 4), 12));
    // 0x15da74: 0x30820fff  andi        $v0, $a0, 0xFFF
    ctx->pc = 0x15da74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
    // 0x15da78: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x15da78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x15da7c: 0x24040fff  addiu       $a0, $zero, 0xFFF
    ctx->pc = 0x15da7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4095));
    // 0x15da80: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x15da80u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x15da84: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x15da84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x15da88: 0xa42007  srav        $a0, $a0, $a1
    ctx->pc = 0x15da88u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 5) & 0x1F));
    // 0x15da8c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x15da8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x15da90: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15da90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15da94: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x15da94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_15da98:
    // 0x15da98: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x15da98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x15da9c: 0xa4220282  sh          $v0, 0x282($at)
    ctx->pc = 0x15da9cu;
    runtime->Store16(rdram, ctx, 0x70000282u, (uint16_t)GPR_U32(ctx, 2));
    // 0x15daa0: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x15daa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x15daa4: 0x34440200  ori         $a0, $v0, 0x200
    ctx->pc = 0x15daa4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
    // 0x15daa8: 0xc04d52c  jal         func_1354B0
    ctx->pc = 0x15DAA8u;
    SET_GPR_U32(ctx, 31, 0x15DAB0u);
    ctx->pc = 0x15DAACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DAA8u;
    // 0x15daac: 0x34450280  ori         $a1, $v0, 0x280 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)640);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1354B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1354B0u, 0x15DAA8u, 0x15DAB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DAB0u;
label_15dab0:
    // 0x15dab0: 0x3c067000  lui         $a2, 0x7000
    ctx->pc = 0x15dab0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
    // 0x15dab4: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x15dab4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x15dab8: 0xc041442  jal         func_105108
    ctx->pc = 0x15DAB8u;
    SET_GPR_U32(ctx, 31, 0x15DAC0u);
    ctx->pc = 0x15DABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DAB8u;
    // 0x15dabc: 0x34c50200  ori         $a1, $a2, 0x200 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)512);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x15DAB8u, 0x15DAC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DAC0u;
label_15dac0:
    // 0x15dac0: 0x8e820090  lw          $v0, 0x90($s4)
    ctx->pc = 0x15dac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 144)));
    // 0x15dac4: 0x90420021  lbu         $v0, 0x21($v0)
    ctx->pc = 0x15dac4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 33)));
    // 0x15dac8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x15DAC8u;
    {
        const bool branch_taken_0x15dac8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15DACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DAC8u;
        // 0x15dacc: 0x3c02007e  lui         $v0, 0x7E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)126 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15dac8) {
            ctx->pc = 0x15DAE8u;
            goto label_15dae8;
        }
    }
    ctx->pc = 0x15DAD0u;
    // 0x15dad0: 0x26430010  addiu       $v1, $s2, 0x10
    ctx->pc = 0x15dad0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x15dad4: 0x244268d0  addiu       $v0, $v0, 0x68D0
    ctx->pc = 0x15dad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26832));
    // 0x15dad8: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x15dad8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x15dadc: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x15dadcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15dae0: 0x4be208e8  vadd.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x15dae0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x15dae4: 0xf8630000  sqc2        $vf3, 0x0($v1)
    ctx->pc = 0x15dae4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[3]));
label_15dae8:
    // 0x15dae8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x15dae8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15daec: 0x26820050  addiu       $v0, $s4, 0x50
    ctx->pc = 0x15daecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 80));
    // 0x15daf0: 0x26430020  addiu       $v1, $s2, 0x20
    ctx->pc = 0x15daf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x15daf4: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x15daf4u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15daf8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15daf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x15dafc: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x15dafcu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x15db00: 0x3c02873c  lui         $v0, 0x873C
    ctx->pc = 0x15db00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34620 << 16));
    // 0x15db04: 0x8c28f004  lw          $t0, -0xFFC($at)
    ctx->pc = 0x15db04u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x81F004u));
    // 0x15db08: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x15db08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x15db0c: 0x3446a9e5  ori         $a2, $v0, 0xA9E5
    ctx->pc = 0x15db0cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43493);
    // 0x15db10: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x15db10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x15db14: 0x44824000  mtc1        $v0, $f8
    ctx->pc = 0x15db14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x15db18: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x15db18u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x15db1c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x15db1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x15db20: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15db20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x15db24: 0x84040  sll         $t0, $t0, 1
    ctx->pc = 0x15db24u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x15db28: 0x8c27f004  lw          $a3, -0xFFC($at)
    ctx->pc = 0x15db28u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294963204)));
    // 0x15db2c: 0x44822800  mtc1        $v0, $f5
    ctx->pc = 0x15db2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x15db30: 0x3c02873c  lui         $v0, 0x873C
    ctx->pc = 0x15db30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34620 << 16));
    // 0x15db34: 0x3445a9e5  ori         $a1, $v0, 0xA9E5
    ctx->pc = 0x15db34u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43493);
    // 0x15db38: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x15db38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x15db3c: 0x44823000  mtc1        $v0, $f6
    ctx->pc = 0x15db3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x15db40: 0x71fc2  srl         $v1, $a3, 31
    ctx->pc = 0x15db40u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 7), 31));
    // 0x15db44: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15db44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x15db48: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x15db48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x15db4c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x15db4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x15db50: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x15db50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x15db54: 0x661826  xor         $v1, $v1, $a2
    ctx->pc = 0x15db54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 6));
    // 0x15db58: 0xac23f004  sw          $v1, -0xFFC($at)
    ctx->pc = 0x15db58u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963204), GPR_U32(ctx, 3));
    // 0x15db5c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x15db5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x15db60: 0x31ac2  srl         $v1, $v1, 11
    ctx->pc = 0x15db60u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 11));
    // 0x15db64: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15db64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x15db68: 0x3066003f  andi        $a2, $v1, 0x3F
    ctx->pc = 0x15db68u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x15db6c: 0x3c02873c  lui         $v0, 0x873C
    ctx->pc = 0x15db6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34620 << 16));
    // 0x15db70: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x15db70u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x15db74: 0x8e830090  lw          $v1, 0x90($s4)
    ctx->pc = 0x15db74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 144)));
    // 0x15db78: 0x2063021  addu        $a2, $s0, $a2
    ctx->pc = 0x15db78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x15db7c: 0x3444a9e5  ori         $a0, $v0, 0xA9E5
    ctx->pc = 0x15db7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43493);
    // 0x15db80: 0xc4c70000  lwc1        $f7, 0x0($a2)
    ctx->pc = 0x15db80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x15db84: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x15db84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x15db88: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x15db88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x15db8c: 0xc6400020  lwc1        $f0, 0x20($s2)
    ctx->pc = 0x15db8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15db90: 0x26420020  addiu       $v0, $s2, 0x20
    ctx->pc = 0x15db90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x15db94: 0xc4610048  lwc1        $f1, 0x48($v1)
    ctx->pc = 0x15db94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15db98: 0x460741c2  mul.s       $f7, $f8, $f7
    ctx->pc = 0x15db98u;
    ctx->f[7] = FPU_MUL_S(ctx->f[8], ctx->f[7]);
    // 0x15db9c: 0x46053941  sub.s       $f5, $f7, $f5
    ctx->pc = 0x15db9cu;
    ctx->f[5] = FPU_SUB_S(ctx->f[7], ctx->f[5]);
    // 0x15dba0: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x15dba0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x15dba4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x15dba4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x15dba8: 0xe6400020  swc1        $f0, 0x20($s2)
    ctx->pc = 0x15dba8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 32), bits); }
    // 0x15dbac: 0x8c26f004  lw          $a2, -0xFFC($at)
    ctx->pc = 0x15dbacu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294963204)));
    // 0x15dbb0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15dbb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x15dbb4: 0x63040  sll         $a2, $a2, 1
    ctx->pc = 0x15dbb4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x15dbb8: 0x8c23f004  lw          $v1, -0xFFC($at)
    ctx->pc = 0x15dbb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294963204)));
    // 0x15dbbc: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x15dbbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x15dbc0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15dbc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x15dbc4: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x15dbc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x15dbc8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x15dbc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x15dbcc: 0x651826  xor         $v1, $v1, $a1
    ctx->pc = 0x15dbccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 5));
    // 0x15dbd0: 0xac23f004  sw          $v1, -0xFFC($at)
    ctx->pc = 0x15dbd0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963204), GPR_U32(ctx, 3));
    // 0x15dbd4: 0x31b82  srl         $v1, $v1, 14
    ctx->pc = 0x15dbd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 14));
    // 0x15dbd8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15dbd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x15dbdc: 0x3065003f  andi        $a1, $v1, 0x3F
    ctx->pc = 0x15dbdcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x15dbe0: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x15dbe0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x15dbe4: 0x8e830090  lw          $v1, 0x90($s4)
    ctx->pc = 0x15dbe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 144)));
    // 0x15dbe8: 0x2052821  addu        $a1, $s0, $a1
    ctx->pc = 0x15dbe8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x15dbec: 0xc4a50000  lwc1        $f5, 0x0($a1)
    ctx->pc = 0x15dbecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x15dbf0: 0xc6400024  lwc1        $f0, 0x24($s2)
    ctx->pc = 0x15dbf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15dbf4: 0xc461004c  lwc1        $f1, 0x4C($v1)
    ctx->pc = 0x15dbf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15dbf8: 0x46053142  mul.s       $f5, $f6, $f5
    ctx->pc = 0x15dbf8u;
    ctx->f[5] = FPU_MUL_S(ctx->f[6], ctx->f[5]);
    // 0x15dbfc: 0x460328c1  sub.s       $f3, $f5, $f3
    ctx->pc = 0x15dbfcu;
    ctx->f[3] = FPU_SUB_S(ctx->f[5], ctx->f[3]);
    // 0x15dc00: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x15dc00u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x15dc04: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x15dc04u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x15dc08: 0xe6400024  swc1        $f0, 0x24($s2)
    ctx->pc = 0x15dc08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 36), bits); }
    // 0x15dc0c: 0x8c25f004  lw          $a1, -0xFFC($at)
    ctx->pc = 0x15dc0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294963204)));
    // 0x15dc10: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15dc10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x15dc14: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x15dc14u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x15dc18: 0x8c23f004  lw          $v1, -0xFFC($at)
    ctx->pc = 0x15dc18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294963204)));
    // 0x15dc1c: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x15dc1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x15dc20: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15dc20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x15dc24: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x15dc24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x15dc28: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x15dc28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x15dc2c: 0x641826  xor         $v1, $v1, $a0
    ctx->pc = 0x15dc2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 4));
    // 0x15dc30: 0xac23f004  sw          $v1, -0xFFC($at)
    ctx->pc = 0x15dc30u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963204), GPR_U32(ctx, 3));
    // 0x15dc34: 0x31c42  srl         $v1, $v1, 17
    ctx->pc = 0x15dc34u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 17));
    // 0x15dc38: 0x3064003f  andi        $a0, $v1, 0x3F
    ctx->pc = 0x15dc38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x15dc3c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x15dc3cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x15dc40: 0x8e830090  lw          $v1, 0x90($s4)
    ctx->pc = 0x15dc40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 144)));
    // 0x15dc44: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x15dc44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x15dc48: 0xc4830000  lwc1        $f3, 0x0($a0)
    ctx->pc = 0x15dc48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x15dc4c: 0xc6400028  lwc1        $f0, 0x28($s2)
    ctx->pc = 0x15dc4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15dc50: 0xc4610050  lwc1        $f1, 0x50($v1)
    ctx->pc = 0x15dc50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15dc54: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x15dc54u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x15dc58: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x15dc58u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x15dc5c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x15dc5cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x15dc60: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x15dc60u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x15dc64: 0xe6400028  swc1        $f0, 0x28($s2)
    ctx->pc = 0x15dc64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 40), bits); }
    // 0x15dc68: 0x92630001  lbu         $v1, 0x1($s3)
    ctx->pc = 0x15dc68u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
    // 0x15dc6c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x15dc6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x15dc70: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x15DC70u;
    {
        const bool branch_taken_0x15dc70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15DC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DC70u;
        // 0x15dc74: 0x2465ffff  addiu       $a1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15dc70) {
            ctx->pc = 0x15DC98u;
            goto label_15dc98;
        }
    }
    ctx->pc = 0x15DC78u;
label_15dc78:
    // 0x15dc78: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x15dc78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15dc7c: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x15dc7cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15dc80: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x15dc80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x15dc84: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x15dc84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x15dc88: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x15dc88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x15dc8c: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x15dc8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x15dc90: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x15dc90u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x15dc94: 0x0  nop
    ctx->pc = 0x15dc94u;
    // NOP
label_15dc98:
    // 0x15dc98: 0x14a0fff7  bnez        $a1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x15DC98u;
    {
        const bool branch_taken_0x15dc98 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x15dc98) {
            ctx->pc = 0x15DC78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15dc78;
        }
    }
    ctx->pc = 0x15DCA0u;
label_15dca0:
    // 0x15dca0: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x15dca0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x15dca4: 0x1620fe96  bnez        $s1, . + 4 + (-0x16A << 2)
    ctx->pc = 0x15DCA4u;
    {
        const bool branch_taken_0x15dca4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x15DCA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DCA4u;
        // 0x15dca8: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15dca4) {
            ctx->pc = 0x15D700u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15d700;
        }
    }
    ctx->pc = 0x15DCACu;
    // 0x15dcac: 0x3c02873c  lui         $v0, 0x873C
    ctx->pc = 0x15dcacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34620 << 16));
    // 0x15dcb0: 0x8c23f004  lw          $v1, -0xFFC($at)
    ctx->pc = 0x15dcb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294963204)));
    // 0x15dcb4: 0x3442a9e5  ori         $v0, $v0, 0xA9E5
    ctx->pc = 0x15dcb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43493);
    // 0x15dcb8: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x15dcb8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x15dcbc: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15dcbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x15dcc0: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x15dcc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x15dcc4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x15dcc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x15dcc8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x15dcc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x15dccc: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x15dcccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x15dcd0: 0xac22f004  sw          $v0, -0xFFC($at)
    ctx->pc = 0x15dcd0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963204), GPR_U32(ctx, 2));
    // 0x15dcd4: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x15dcd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x15dcd8: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x15dcd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x15dcdc: 0x8e820090  lw          $v0, 0x90($s4)
    ctx->pc = 0x15dcdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 144)));
    // 0x15dce0: 0x94440040  lhu         $a0, 0x40($v0)
    ctx->pc = 0x15dce0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x15dce4: 0x3082f000  andi        $v0, $a0, 0xF000
    ctx->pc = 0x15dce4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)61440);
    // 0x15dce8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15DCE8u;
    {
        const bool branch_taken_0x15dce8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15DCECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DCE8u;
        // 0x15dcec: 0x30820fff  andi        $v0, $a0, 0xFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15dce8) {
            ctx->pc = 0x15DCF8u;
            goto label_15dcf8;
        }
    }
    ctx->pc = 0x15DCF0u;
    // 0x15dcf0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x15DCF0u;
    {
        const bool branch_taken_0x15dcf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15dcf0) {
            ctx->pc = 0x15DD20u;
            goto label_15dd20;
        }
    }
    ctx->pc = 0x15DCF8u;
label_15dcf8:
    // 0x15dcf8: 0x43303  sra         $a2, $a0, 12
    ctx->pc = 0x15dcf8u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 4), 12));
    // 0x15dcfc: 0x30820fff  andi        $v0, $a0, 0xFFF
    ctx->pc = 0x15dcfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
    // 0x15dd00: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x15dd00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x15dd04: 0x24040fff  addiu       $a0, $zero, 0xFFF
    ctx->pc = 0x15dd04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4095));
    // 0x15dd08: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x15dd08u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x15dd0c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x15dd0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x15dd10: 0xa42007  srav        $a0, $a0, $a1
    ctx->pc = 0x15dd10u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 5) & 0x1F));
    // 0x15dd14: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x15dd14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x15dd18: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15dd18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15dd1c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x15dd1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_15dd20:
    // 0x15dd20: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x15DD20u;
    {
        const bool branch_taken_0x15dd20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15DD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DD20u;
        // 0x15dd24: 0xa6820096  sh          $v0, 0x96($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 150), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15dd20) {
            ctx->pc = 0x15DD30u;
            goto label_15dd30;
        }
    }
    ctx->pc = 0x15DD28u;
label_15dd28:
    // 0x15dd28: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x15dd28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x15dd2c: 0xa6820096  sh          $v0, 0x96($s4)
    ctx->pc = 0x15dd2cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 150), (uint16_t)GPR_U32(ctx, 2));
label_15dd30:
    // 0x15dd30: 0x8e820090  lw          $v0, 0x90($s4)
    ctx->pc = 0x15dd30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 144)));
    // 0x15dd34: 0x94420024  lhu         $v0, 0x24($v0)
    ctx->pc = 0x15dd34u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x15dd38: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x15DD38u;
    {
        const bool branch_taken_0x15dd38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15dd38) {
            ctx->pc = 0x15DD68u;
            goto label_15dd68;
        }
    }
    ctx->pc = 0x15DD40u;
    // 0x15dd40: 0x968200a2  lhu         $v0, 0xA2($s4)
    ctx->pc = 0x15dd40u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 162)));
    // 0x15dd44: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x15dd44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x15dd48: 0xa68200a2  sh          $v0, 0xA2($s4)
    ctx->pc = 0x15dd48u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 162), (uint16_t)GPR_U32(ctx, 2));
    // 0x15dd4c: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x15dd4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x15dd50: 0x8e820090  lw          $v0, 0x90($s4)
    ctx->pc = 0x15dd50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 144)));
    // 0x15dd54: 0x94420024  lhu         $v0, 0x24($v0)
    ctx->pc = 0x15dd54u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x15dd58: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15DD58u;
    {
        const bool branch_taken_0x15dd58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x15DD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DD58u;
        // 0x15dd5c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15dd58) {
            ctx->pc = 0x15DD68u;
            goto label_15dd68;
        }
    }
    ctx->pc = 0x15DD60u;
    // 0x15dd60: 0x100000bf  b           . + 4 + (0xBF << 2)
    ctx->pc = 0x15DD60u;
    {
        const bool branch_taken_0x15dd60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15DD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DD60u;
        // 0x15dd64: 0xa2820031  sb          $v0, 0x31($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 49), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15dd60) {
            ctx->pc = 0x15E060u;
            goto label_15e060;
        }
    }
    ctx->pc = 0x15DD68u;
label_15dd68:
    // 0x15dd68: 0x86820094  lh          $v0, 0x94($s4)
    ctx->pc = 0x15dd68u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 148)));
    // 0x15dd6c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x15dd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x15dd70: 0xa6820094  sh          $v0, 0x94($s4)
    ctx->pc = 0x15dd70u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 148), (uint16_t)GPR_U32(ctx, 2));
    // 0x15dd74: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x15dd74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x15dd78: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x15dd78u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x15dd7c: 0x1c4000b8  bgtz        $v0, . + 4 + (0xB8 << 2)
    ctx->pc = 0x15DD7Cu;
    {
        const bool branch_taken_0x15dd7c = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x15DD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DD7Cu;
        // 0x15dd80: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15dd7c) {
            ctx->pc = 0x15E060u;
            goto label_15e060;
        }
    }
    ctx->pc = 0x15DD84u;
    // 0x15dd84: 0x3c02873c  lui         $v0, 0x873C
    ctx->pc = 0x15dd84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34620 << 16));
    // 0x15dd88: 0x8c23f004  lw          $v1, -0xFFC($at)
    ctx->pc = 0x15dd88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294963204)));
    // 0x15dd8c: 0x3442a9e5  ori         $v0, $v0, 0xA9E5
    ctx->pc = 0x15dd8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43493);
    // 0x15dd90: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x15dd90u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x15dd94: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15dd94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x15dd98: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x15dd98u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x15dd9c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x15dd9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x15dda0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x15dda0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x15dda4: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x15dda4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x15dda8: 0xac22f004  sw          $v0, -0xFFC($at)
    ctx->pc = 0x15dda8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963204), GPR_U32(ctx, 2));
    // 0x15ddac: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x15ddacu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x15ddb0: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x15ddb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x15ddb4: 0x8e820090  lw          $v0, 0x90($s4)
    ctx->pc = 0x15ddb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 144)));
    // 0x15ddb8: 0x9444003e  lhu         $a0, 0x3E($v0)
    ctx->pc = 0x15ddb8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 62)));
    // 0x15ddbc: 0x3082f000  andi        $v0, $a0, 0xF000
    ctx->pc = 0x15ddbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)61440);
    // 0x15ddc0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15DDC0u;
    {
        const bool branch_taken_0x15ddc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15DDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DDC0u;
        // 0x15ddc4: 0x30820fff  andi        $v0, $a0, 0xFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ddc0) {
            ctx->pc = 0x15DDD0u;
            goto label_15ddd0;
        }
    }
    ctx->pc = 0x15DDC8u;
    // 0x15ddc8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x15DDC8u;
    {
        const bool branch_taken_0x15ddc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15ddc8) {
            ctx->pc = 0x15DDF8u;
            goto label_15ddf8;
        }
    }
    ctx->pc = 0x15DDD0u;
label_15ddd0:
    // 0x15ddd0: 0x43303  sra         $a2, $a0, 12
    ctx->pc = 0x15ddd0u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 4), 12));
    // 0x15ddd4: 0x30820fff  andi        $v0, $a0, 0xFFF
    ctx->pc = 0x15ddd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
    // 0x15ddd8: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x15ddd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x15dddc: 0x24040fff  addiu       $a0, $zero, 0xFFF
    ctx->pc = 0x15dddcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4095));
    // 0x15dde0: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x15dde0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x15dde4: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x15dde4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x15dde8: 0xa42007  srav        $a0, $a0, $a1
    ctx->pc = 0x15dde8u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 5) & 0x1F));
    // 0x15ddec: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x15ddecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x15ddf0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15ddf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15ddf4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x15ddf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_15ddf8:
    // 0x15ddf8: 0xa6820094  sh          $v0, 0x94($s4)
    ctx->pc = 0x15ddf8u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 148), (uint16_t)GPR_U32(ctx, 2));
    // 0x15ddfc: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x15ddfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x15de00: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x15de00u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x15de04: 0x14400042  bnez        $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x15DE04u;
    {
        const bool branch_taken_0x15de04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15DE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DE04u;
        // 0x15de08: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15de04) {
            ctx->pc = 0x15DF10u;
            goto label_15df10;
        }
    }
    ctx->pc = 0x15DE0Cu;
    // 0x15de0c: 0x3c02873c  lui         $v0, 0x873C
    ctx->pc = 0x15de0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34620 << 16));
    // 0x15de10: 0x8c23f004  lw          $v1, -0xFFC($at)
    ctx->pc = 0x15de10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294963204)));
    // 0x15de14: 0x3442a9e5  ori         $v0, $v0, 0xA9E5
    ctx->pc = 0x15de14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43493);
    // 0x15de18: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x15de18u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x15de1c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15de1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x15de20: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x15de20u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x15de24: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x15de24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x15de28: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x15de28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x15de2c: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x15de2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x15de30: 0xac22f004  sw          $v0, -0xFFC($at)
    ctx->pc = 0x15de30u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963204), GPR_U32(ctx, 2));
    // 0x15de34: 0x212c2  srl         $v0, $v0, 11
    ctx->pc = 0x15de34u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 11));
    // 0x15de38: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x15de38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x15de3c: 0x8e820090  lw          $v0, 0x90($s4)
    ctx->pc = 0x15de3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 144)));
    // 0x15de40: 0x9444003c  lhu         $a0, 0x3C($v0)
    ctx->pc = 0x15de40u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x15de44: 0x3082f000  andi        $v0, $a0, 0xF000
    ctx->pc = 0x15de44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)61440);
    // 0x15de48: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15DE48u;
    {
        const bool branch_taken_0x15de48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15DE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DE48u;
        // 0x15de4c: 0x30820fff  andi        $v0, $a0, 0xFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15de48) {
            ctx->pc = 0x15DE58u;
            goto label_15de58;
        }
    }
    ctx->pc = 0x15DE50u;
    // 0x15de50: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x15DE50u;
    {
        const bool branch_taken_0x15de50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15de50) {
            ctx->pc = 0x15DE80u;
            goto label_15de80;
        }
    }
    ctx->pc = 0x15DE58u;
label_15de58:
    // 0x15de58: 0x43303  sra         $a2, $a0, 12
    ctx->pc = 0x15de58u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 4), 12));
    // 0x15de5c: 0x30820fff  andi        $v0, $a0, 0xFFF
    ctx->pc = 0x15de5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
    // 0x15de60: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x15de60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x15de64: 0x24040fff  addiu       $a0, $zero, 0xFFF
    ctx->pc = 0x15de64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4095));
    // 0x15de68: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x15de68u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x15de6c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x15de6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x15de70: 0xa42007  srav        $a0, $a0, $a1
    ctx->pc = 0x15de70u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 5) & 0x1F));
    // 0x15de74: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x15de74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x15de78: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15de78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15de7c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x15de7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_15de80:
    // 0x15de80: 0xa6820094  sh          $v0, 0x94($s4)
    ctx->pc = 0x15de80u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 148), (uint16_t)GPR_U32(ctx, 2));
    // 0x15de84: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15de84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x15de88: 0x3c02873c  lui         $v0, 0x873C
    ctx->pc = 0x15de88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34620 << 16));
    // 0x15de8c: 0x8c23f004  lw          $v1, -0xFFC($at)
    ctx->pc = 0x15de8cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81F004u));
    // 0x15de90: 0x3442a9e5  ori         $v0, $v0, 0xA9E5
    ctx->pc = 0x15de90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43493);
    // 0x15de94: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x15de94u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x15de98: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15de98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x15de9c: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x15de9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x15dea0: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x15dea0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x15dea4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x15dea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x15dea8: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x15dea8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x15deac: 0xac22f004  sw          $v0, -0xFFC($at)
    ctx->pc = 0x15deacu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963204), GPR_U32(ctx, 2));
    // 0x15deb0: 0x21382  srl         $v0, $v0, 14
    ctx->pc = 0x15deb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 14));
    // 0x15deb4: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x15deb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x15deb8: 0x8e820090  lw          $v0, 0x90($s4)
    ctx->pc = 0x15deb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 144)));
    // 0x15debc: 0x94440040  lhu         $a0, 0x40($v0)
    ctx->pc = 0x15debcu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x15dec0: 0x3082f000  andi        $v0, $a0, 0xF000
    ctx->pc = 0x15dec0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)61440);
    // 0x15dec4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x15DEC4u;
    {
        const bool branch_taken_0x15dec4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15dec4) {
            ctx->pc = 0x15DED8u;
            goto label_15ded8;
        }
    }
    ctx->pc = 0x15DECCu;
    // 0x15decc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x15DECCu;
    {
        const bool branch_taken_0x15decc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15DED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DECCu;
        // 0x15ded0: 0x30820fff  andi        $v0, $a0, 0xFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15decc) {
            ctx->pc = 0x15DF00u;
            goto label_15df00;
        }
    }
    ctx->pc = 0x15DED4u;
    // 0x15ded4: 0x0  nop
    ctx->pc = 0x15ded4u;
    // NOP
label_15ded8:
    // 0x15ded8: 0x43303  sra         $a2, $a0, 12
    ctx->pc = 0x15ded8u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 4), 12));
    // 0x15dedc: 0x30820fff  andi        $v0, $a0, 0xFFF
    ctx->pc = 0x15dedcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
    // 0x15dee0: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x15dee0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x15dee4: 0x24040fff  addiu       $a0, $zero, 0xFFF
    ctx->pc = 0x15dee4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4095));
    // 0x15dee8: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x15dee8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x15deec: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x15deecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x15def0: 0xa42007  srav        $a0, $a0, $a1
    ctx->pc = 0x15def0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 5) & 0x1F));
    // 0x15def4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x15def4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x15def8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15def8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15defc: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x15defcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_15df00:
    // 0x15df00: 0xa6820096  sh          $v0, 0x96($s4)
    ctx->pc = 0x15df00u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 150), (uint16_t)GPR_U32(ctx, 2));
    // 0x15df04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15df04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15df08: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x15DF08u;
    {
        const bool branch_taken_0x15df08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15DF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DF08u;
        // 0x15df0c: 0xa2820031  sb          $v0, 0x31($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 49), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15df08) {
            ctx->pc = 0x15E060u;
            goto label_15e060;
        }
    }
    ctx->pc = 0x15DF10u;
label_15df10:
    // 0x15df10: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x15df10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15df14: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x15DF14u;
    {
        const bool branch_taken_0x15df14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15DF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DF14u;
        // 0x15df18: 0xa2820031  sb          $v0, 0x31($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 49), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15df14) {
            ctx->pc = 0x15E060u;
            goto label_15e060;
        }
    }
    ctx->pc = 0x15DF1Cu;
    // 0x15df1c: 0x0  nop
    ctx->pc = 0x15df1cu;
    // NOP
label_15df20:
    // 0x15df20: 0x86820094  lh          $v0, 0x94($s4)
    ctx->pc = 0x15df20u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 148)));
    // 0x15df24: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x15df24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x15df28: 0xa6820094  sh          $v0, 0x94($s4)
    ctx->pc = 0x15df28u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 148), (uint16_t)GPR_U32(ctx, 2));
    // 0x15df2c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x15df2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x15df30: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x15df30u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x15df34: 0x1c40004a  bgtz        $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x15DF34u;
    {
        const bool branch_taken_0x15df34 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x15DF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DF34u;
        // 0x15df38: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15df34) {
            ctx->pc = 0x15E060u;
            goto label_15e060;
        }
    }
    ctx->pc = 0x15DF3Cu;
    // 0x15df3c: 0x3c02873c  lui         $v0, 0x873C
    ctx->pc = 0x15df3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34620 << 16));
    // 0x15df40: 0x8c23f004  lw          $v1, -0xFFC($at)
    ctx->pc = 0x15df40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294963204)));
    // 0x15df44: 0x3442a9e5  ori         $v0, $v0, 0xA9E5
    ctx->pc = 0x15df44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43493);
    // 0x15df48: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x15df48u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x15df4c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15df4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x15df50: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x15df50u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x15df54: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x15df54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x15df58: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x15df58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x15df5c: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x15df5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x15df60: 0xac22f004  sw          $v0, -0xFFC($at)
    ctx->pc = 0x15df60u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963204), GPR_U32(ctx, 2));
    // 0x15df64: 0x212c2  srl         $v0, $v0, 11
    ctx->pc = 0x15df64u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 11));
    // 0x15df68: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x15df68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x15df6c: 0x8e820090  lw          $v0, 0x90($s4)
    ctx->pc = 0x15df6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 144)));
    // 0x15df70: 0x9444003c  lhu         $a0, 0x3C($v0)
    ctx->pc = 0x15df70u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x15df74: 0x3082f000  andi        $v0, $a0, 0xF000
    ctx->pc = 0x15df74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)61440);
    // 0x15df78: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15DF78u;
    {
        const bool branch_taken_0x15df78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15DF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DF78u;
        // 0x15df7c: 0x30820fff  andi        $v0, $a0, 0xFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15df78) {
            ctx->pc = 0x15DF88u;
            goto label_15df88;
        }
    }
    ctx->pc = 0x15DF80u;
    // 0x15df80: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x15DF80u;
    {
        const bool branch_taken_0x15df80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15df80) {
            ctx->pc = 0x15DFB0u;
            goto label_15dfb0;
        }
    }
    ctx->pc = 0x15DF88u;
label_15df88:
    // 0x15df88: 0x43303  sra         $a2, $a0, 12
    ctx->pc = 0x15df88u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 4), 12));
    // 0x15df8c: 0x30820fff  andi        $v0, $a0, 0xFFF
    ctx->pc = 0x15df8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
    // 0x15df90: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x15df90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x15df94: 0x24040fff  addiu       $a0, $zero, 0xFFF
    ctx->pc = 0x15df94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4095));
    // 0x15df98: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x15df98u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x15df9c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x15df9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x15dfa0: 0xa42007  srav        $a0, $a0, $a1
    ctx->pc = 0x15dfa0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 5) & 0x1F));
    // 0x15dfa4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x15dfa4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x15dfa8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15dfa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15dfac: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x15dfacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_15dfb0:
    // 0x15dfb0: 0xa6820094  sh          $v0, 0x94($s4)
    ctx->pc = 0x15dfb0u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 148), (uint16_t)GPR_U32(ctx, 2));
    // 0x15dfb4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15dfb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x15dfb8: 0x3c02873c  lui         $v0, 0x873C
    ctx->pc = 0x15dfb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34620 << 16));
    // 0x15dfbc: 0x8c23f004  lw          $v1, -0xFFC($at)
    ctx->pc = 0x15dfbcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81F004u));
    // 0x15dfc0: 0x3442a9e5  ori         $v0, $v0, 0xA9E5
    ctx->pc = 0x15dfc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43493);
    // 0x15dfc4: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x15dfc4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x15dfc8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15dfc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x15dfcc: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x15dfccu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x15dfd0: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x15dfd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x15dfd4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x15dfd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x15dfd8: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x15dfd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x15dfdc: 0xac22f004  sw          $v0, -0xFFC($at)
    ctx->pc = 0x15dfdcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963204), GPR_U32(ctx, 2));
    // 0x15dfe0: 0x21382  srl         $v0, $v0, 14
    ctx->pc = 0x15dfe0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 14));
    // 0x15dfe4: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x15dfe4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x15dfe8: 0x8e820090  lw          $v0, 0x90($s4)
    ctx->pc = 0x15dfe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 144)));
    // 0x15dfec: 0x94440040  lhu         $a0, 0x40($v0)
    ctx->pc = 0x15dfecu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x15dff0: 0x3082f000  andi        $v0, $a0, 0xF000
    ctx->pc = 0x15dff0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)61440);
    // 0x15dff4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x15DFF4u;
    {
        const bool branch_taken_0x15dff4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15dff4) {
            ctx->pc = 0x15E008u;
            goto label_15e008;
        }
    }
    ctx->pc = 0x15DFFCu;
    // 0x15dffc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x15DFFCu;
    {
        const bool branch_taken_0x15dffc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DFFCu;
        // 0x15e000: 0x30820fff  andi        $v0, $a0, 0xFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15dffc) {
            ctx->pc = 0x15E030u;
            goto label_15e030;
        }
    }
    ctx->pc = 0x15E004u;
    // 0x15e004: 0x0  nop
    ctx->pc = 0x15e004u;
    // NOP
label_15e008:
    // 0x15e008: 0x43303  sra         $a2, $a0, 12
    ctx->pc = 0x15e008u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 4), 12));
    // 0x15e00c: 0x30820fff  andi        $v0, $a0, 0xFFF
    ctx->pc = 0x15e00cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
    // 0x15e010: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x15e010u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x15e014: 0x24040fff  addiu       $a0, $zero, 0xFFF
    ctx->pc = 0x15e014u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4095));
    // 0x15e018: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x15e018u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x15e01c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x15e01cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x15e020: 0xa42007  srav        $a0, $a0, $a1
    ctx->pc = 0x15e020u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 5) & 0x1F));
    // 0x15e024: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x15e024u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x15e028: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15e028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15e02c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x15e02cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_15e030:
    // 0x15e030: 0xa6820096  sh          $v0, 0x96($s4)
    ctx->pc = 0x15e030u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 150), (uint16_t)GPR_U32(ctx, 2));
    // 0x15e034: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15e034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15e038: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x15E038u;
    {
        const bool branch_taken_0x15e038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E038u;
        // 0x15e03c: 0xa2820031  sb          $v0, 0x31($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 49), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e038) {
            ctx->pc = 0x15E060u;
            goto label_15e060;
        }
    }
    ctx->pc = 0x15E040u;
label_15e040:
    // 0x15e040: 0x968300aa  lhu         $v1, 0xAA($s4)
    ctx->pc = 0x15e040u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 170)));
    // 0x15e044: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x15E044u;
    {
        const bool branch_taken_0x15e044 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15e044) {
            ctx->pc = 0x15E060u;
            goto label_15e060;
        }
    }
    ctx->pc = 0x15E04Cu;
    // 0x15e04c: 0x96830010  lhu         $v1, 0x10($s4)
    ctx->pc = 0x15e04cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x15e050: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x15e050u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x15e054: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x15E054u;
    {
        const bool branch_taken_0x15e054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E054u;
        // 0x15e058: 0xa6830010  sh          $v1, 0x10($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 16), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e054) {
            ctx->pc = 0x15E1D8u;
            goto label_15e1d8;
        }
    }
    ctx->pc = 0x15E05Cu;
    // 0x15e05c: 0x0  nop
    ctx->pc = 0x15e05cu;
    // NOP
label_15e060:
    // 0x15e060: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15e060u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x15e064: 0x8c23f004  lw          $v1, -0xFFC($at)
    ctx->pc = 0x15e064u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81F004u));
    // 0x15e068: 0x3c02873c  lui         $v0, 0x873C
    ctx->pc = 0x15e068u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34620 << 16));
    // 0x15e06c: 0x3442a9e5  ori         $v0, $v0, 0xA9E5
    ctx->pc = 0x15e06cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43493);
    // 0x15e070: 0x26840080  addiu       $a0, $s4, 0x80
    ctx->pc = 0x15e070u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 128));
    // 0x15e074: 0x26850070  addiu       $a1, $s4, 0x70
    ctx->pc = 0x15e074u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 112));
    // 0x15e078: 0x33040  sll         $a2, $v1, 1
    ctx->pc = 0x15e078u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x15e07c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15e07cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x15e080: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x15e080u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x15e084: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x15e084u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x15e088: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x15e088u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x15e08c: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x15e08cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x15e090: 0xac22f004  sw          $v0, -0xFFC($at)
    ctx->pc = 0x15e090u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963204), GPR_U32(ctx, 2));
    // 0x15e094: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x15e094u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x15e098: 0x3043003f  andi        $v1, $v0, 0x3F
    ctx->pc = 0x15e098u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x15e09c: 0x8e820090  lw          $v0, 0x90($s4)
    ctx->pc = 0x15e09cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 144)));
    // 0x15e0a0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x15e0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x15e0a4: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x15e0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x15e0a8: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x15e0a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15e0ac: 0xc4420064  lwc1        $f2, 0x64($v0)
    ctx->pc = 0x15e0acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15e0b0: 0xc4400060  lwc1        $f0, 0x60($v0)
    ctx->pc = 0x15e0b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15e0b4: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x15e0b4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x15e0b8: 0xc0414dc  jal         func_105370
    ctx->pc = 0x15E0B8u;
    SET_GPR_U32(ctx, 31, 0x15E0C0u);
    ctx->pc = 0x15E0BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E0B8u;
    // 0x15e0bc: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x15E0B8u, 0x15E0C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E0C0u;
label_15e0c0:
    // 0x15e0c0: 0x8e820090  lw          $v0, 0x90($s4)
    ctx->pc = 0x15e0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 144)));
    // 0x15e0c4: 0x90420021  lbu         $v0, 0x21($v0)
    ctx->pc = 0x15e0c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 33)));
    // 0x15e0c8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x15E0C8u;
    {
        const bool branch_taken_0x15e0c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E0C8u;
        // 0x15e0cc: 0x3c02007e  lui         $v0, 0x7E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)126 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e0c8) {
            ctx->pc = 0x15E0F0u;
            goto label_15e0f0;
        }
    }
    ctx->pc = 0x15E0D0u;
    // 0x15e0d0: 0x26830080  addiu       $v1, $s4, 0x80
    ctx->pc = 0x15e0d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 128));
    // 0x15e0d4: 0x244268e0  addiu       $v0, $v0, 0x68E0
    ctx->pc = 0x15e0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26848));
    // 0x15e0d8: 0x26840080  addiu       $a0, $s4, 0x80
    ctx->pc = 0x15e0d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 128));
    // 0x15e0dc: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x15e0dcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x15e0e0: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x15e0e0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15e0e4: 0x4be208e8  vadd.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x15e0e4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x15e0e8: 0xf8830000  sqc2        $vf3, 0x0($a0)
    ctx->pc = 0x15e0e8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x15e0ec: 0x0  nop
    ctx->pc = 0x15e0ecu;
    // NOP
label_15e0f0:
    // 0x15e0f0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15e0f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x15e0f4: 0x8c24f004  lw          $a0, -0xFFC($at)
    ctx->pc = 0x15e0f4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x81F004u));
    // 0x15e0f8: 0x3c03873c  lui         $v1, 0x873C
    ctx->pc = 0x15e0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34620 << 16));
    // 0x15e0fc: 0x3463a9e5  ori         $v1, $v1, 0xA9E5
    ctx->pc = 0x15e0fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43493);
    // 0x15e100: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x15e100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15e104: 0x42840  sll         $a1, $a0, 1
    ctx->pc = 0x15e104u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x15e108: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15e108u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x15e10c: 0x427c2  srl         $a0, $a0, 31
    ctx->pc = 0x15e10cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x15e110: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x15e110u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x15e114: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x15e114u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x15e118: 0x831826  xor         $v1, $a0, $v1
    ctx->pc = 0x15e118u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 3));
    // 0x15e11c: 0xac23f004  sw          $v1, -0xFFC($at)
    ctx->pc = 0x15e11cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963204), GPR_U32(ctx, 3));
    // 0x15e120: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x15e120u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x15e124: 0x3064003f  andi        $a0, $v1, 0x3F
    ctx->pc = 0x15e124u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x15e128: 0x8e830090  lw          $v1, 0x90($s4)
    ctx->pc = 0x15e128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 144)));
    // 0x15e12c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x15e12cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x15e130: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x15e130u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x15e134: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x15e134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15e138: 0xc6800084  lwc1        $f0, 0x84($s4)
    ctx->pc = 0x15e138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15e13c: 0xc463006c  lwc1        $f3, 0x6C($v1)
    ctx->pc = 0x15e13cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x15e140: 0xc4610068  lwc1        $f1, 0x68($v1)
    ctx->pc = 0x15e140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15e144: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x15e144u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x15e148: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x15e148u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x15e14c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x15e14cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x15e150: 0xe6800084  swc1        $f0, 0x84($s4)
    ctx->pc = 0x15e150u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 132), bits); }
    // 0x15e154: 0x8e830090  lw          $v1, 0x90($s4)
    ctx->pc = 0x15e154u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 144)));
    // 0x15e158: 0x90630038  lbu         $v1, 0x38($v1)
    ctx->pc = 0x15e158u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x15e15c: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x15E15Cu;
    {
        const bool branch_taken_0x15e15c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x15E160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E15Cu;
        // 0x15e160: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e15c) {
            ctx->pc = 0x15E1B0u;
            goto label_15e1b0;
        }
    }
    ctx->pc = 0x15E164u;
    // 0x15e164: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x15E164u;
    {
        const bool branch_taken_0x15e164 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x15e164) {
            ctx->pc = 0x15E198u;
            goto label_15e198;
        }
    }
    ctx->pc = 0x15E16Cu;
    // 0x15e16c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x15E16Cu;
    {
        const bool branch_taken_0x15e16c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e16c) {
            ctx->pc = 0x15E180u;
            goto label_15e180;
        }
    }
    ctx->pc = 0x15E174u;
    // 0x15e174: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x15E174u;
    {
        const bool branch_taken_0x15e174 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e174) {
            ctx->pc = 0x15E1C8u;
            goto label_15e1c8;
        }
    }
    ctx->pc = 0x15E17Cu;
    // 0x15e17c: 0x0  nop
    ctx->pc = 0x15e17cu;
    // NOP
label_15e180:
    // 0x15e180: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x15e180u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e184: 0xc05d188  jal         func_174620
    ctx->pc = 0x15E184u;
    SET_GPR_U32(ctx, 31, 0x15E18Cu);
    ctx->pc = 0x15E188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E184u;
    // 0x15e188: 0x26850080  addiu       $a1, $s4, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174620u, 0x15E184u, 0x15E18Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E18Cu;
label_15e18c:
    // 0x15e18c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x15E18Cu;
    {
        const bool branch_taken_0x15e18c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E18Cu;
        // 0x15e190: 0xa68200aa  sh          $v0, 0xAA($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 170), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e18c) {
            ctx->pc = 0x15E1D8u;
            goto label_15e1d8;
        }
    }
    ctx->pc = 0x15E194u;
    // 0x15e194: 0x0  nop
    ctx->pc = 0x15e194u;
    // NOP
label_15e198:
    // 0x15e198: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x15e198u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e19c: 0xc05d1f8  jal         func_1747E0
    ctx->pc = 0x15E19Cu;
    SET_GPR_U32(ctx, 31, 0x15E1A4u);
    ctx->pc = 0x15E1A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E19Cu;
    // 0x15e1a0: 0x26850080  addiu       $a1, $s4, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1747E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1747E0u, 0x15E19Cu, 0x15E1A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E1A4u;
label_15e1a4:
    // 0x15e1a4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x15E1A4u;
    {
        const bool branch_taken_0x15e1a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E1A4u;
        // 0x15e1a8: 0xa68200aa  sh          $v0, 0xAA($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 170), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e1a4) {
            ctx->pc = 0x15E1D8u;
            goto label_15e1d8;
        }
    }
    ctx->pc = 0x15E1ACu;
    // 0x15e1ac: 0x0  nop
    ctx->pc = 0x15e1acu;
    // NOP
label_15e1b0:
    // 0x15e1b0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x15e1b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e1b4: 0xc05d26c  jal         func_1749B0
    ctx->pc = 0x15E1B4u;
    SET_GPR_U32(ctx, 31, 0x15E1BCu);
    ctx->pc = 0x15E1B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E1B4u;
    // 0x15e1b8: 0x26850080  addiu       $a1, $s4, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1749B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1749B0u, 0x15E1B4u, 0x15E1BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E1BCu;
label_15e1bc:
    // 0x15e1bc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x15E1BCu;
    {
        const bool branch_taken_0x15e1bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E1BCu;
        // 0x15e1c0: 0xa68200aa  sh          $v0, 0xAA($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 170), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e1bc) {
            ctx->pc = 0x15E1D8u;
            goto label_15e1d8;
        }
    }
    ctx->pc = 0x15E1C4u;
    // 0x15e1c4: 0x0  nop
    ctx->pc = 0x15e1c4u;
    // NOP
label_15e1c8:
    // 0x15e1c8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x15e1c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e1cc: 0xc05d2e8  jal         func_174BA0
    ctx->pc = 0x15E1CCu;
    SET_GPR_U32(ctx, 31, 0x15E1D4u);
    ctx->pc = 0x15E1D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E1CCu;
    // 0x15e1d0: 0x26850080  addiu       $a1, $s4, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174BA0u, 0x15E1CCu, 0x15E1D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E1D4u;
label_15e1d4:
    // 0x15e1d4: 0xa68200aa  sh          $v0, 0xAA($s4)
    ctx->pc = 0x15e1d4u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 170), (uint16_t)GPR_U32(ctx, 2));
label_15e1d8:
    // 0x15e1d8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x15e1d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x15e1dc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x15e1dcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15e1e0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x15e1e0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15e1e4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15e1e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15e1e8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15e1e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15e1ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15e1ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15e1f0: 0x3e00008  jr          $ra
    ctx->pc = 0x15E1F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15E1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E1F0u;
        // 0x15e1f4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15E1F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15E1F8u;
}
