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

// Function: sub_0015F230
// Address: 0x15f230 - 0x15f638
void sub_0015F230_0x15f230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015F230_0x15f230");
#endif

    ctx->pc = 0x15f230u;

    // 0x15f230: 0x8c830090  lw          $v1, 0x90($a0)
    ctx->pc = 0x15f230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 144)));
    // 0x15f234: 0x9066000d  lbu         $a2, 0xD($v1)
    ctx->pc = 0x15f234u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 13)));
    // 0x15f238: 0x10c00013  beqz        $a2, . + 4 + (0x13 << 2)
    ctx->pc = 0x15F238u;
    {
        const bool branch_taken_0x15f238 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F238u;
        // 0x15f23c: 0x9067000f  lbu         $a3, 0xF($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 15)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f238) {
            ctx->pc = 0x15F288u;
            goto label_15f288;
        }
    }
    ctx->pc = 0x15F240u;
    // 0x15f240: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15f240u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x15f244: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x15f244u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x15f248: 0x8c25cebc  lw          $a1, -0x3144($at)
    ctx->pc = 0x15f248u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x15f24c: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x15f24cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x15f250: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x15F250u;
    {
        const bool branch_taken_0x15f250 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F250u;
        // 0x15f254: 0x30c300ff  andi        $v1, $a2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f250) {
            ctx->pc = 0x15F270u;
            goto label_15f270;
        }
    }
    ctx->pc = 0x15F258u;
    // 0x15f258: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x15f258u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x15f25c: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x15F25Cu;
    {
        const bool branch_taken_0x15f25c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f25c) {
            ctx->pc = 0x15F288u;
            goto label_15f288;
        }
    }
    ctx->pc = 0x15F264u;
    // 0x15f264: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x15F264u;
    {
        const bool branch_taken_0x15f264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F264u;
        // 0x15f268: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f264) {
            ctx->pc = 0x15F2B8u;
            goto label_15f2b8;
        }
    }
    ctx->pc = 0x15F26Cu;
    // 0x15f26c: 0x0  nop
    ctx->pc = 0x15f26cu;
    // NOP
label_15f270:
    // 0x15f270: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x15f270u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x15f274: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x15f274u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x15f278: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x15F278u;
    {
        const bool branch_taken_0x15f278 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F278u;
        // 0x15f27c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f278) {
            ctx->pc = 0x15F288u;
            goto label_15f288;
        }
    }
    ctx->pc = 0x15F280u;
    // 0x15f280: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x15F280u;
    {
        const bool branch_taken_0x15f280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f280) {
            ctx->pc = 0x15F2B8u;
            goto label_15f2b8;
        }
    }
    ctx->pc = 0x15F288u;
label_15f288:
    // 0x15f288: 0x10e00009  beqz        $a3, . + 4 + (0x9 << 2)
    ctx->pc = 0x15F288u;
    {
        const bool branch_taken_0x15f288 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F288u;
        // 0x15f28c: 0x3c01007e  lui         $at, 0x7E (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f288) {
            ctx->pc = 0x15F2B0u;
            goto label_15f2b0;
        }
    }
    ctx->pc = 0x15F290u;
    // 0x15f290: 0x30e500ff  andi        $a1, $a3, 0xFF
    ctx->pc = 0x15f290u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x15f294: 0x902368a3  lbu         $v1, 0x68A3($at)
    ctx->pc = 0x15f294u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 26787)));
    // 0x15f298: 0xa31827  nor         $v1, $a1, $v1
    ctx->pc = 0x15f298u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 5) | GPR_U64(ctx, 3)));
    // 0x15f29c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x15f29cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x15f2a0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x15F2A0u;
    {
        const bool branch_taken_0x15f2a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15F2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F2A0u;
        // 0x15f2a4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f2a0) {
            ctx->pc = 0x15F2B0u;
            goto label_15f2b0;
        }
    }
    ctx->pc = 0x15F2A8u;
    // 0x15f2a8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x15F2A8u;
    {
        const bool branch_taken_0x15f2a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f2a8) {
            ctx->pc = 0x15F2B8u;
            goto label_15f2b8;
        }
    }
    ctx->pc = 0x15F2B0u;
label_15f2b0:
    // 0x15f2b0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x15f2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15f2b4: 0x0  nop
    ctx->pc = 0x15f2b4u;
    // NOP
label_15f2b8:
    // 0x15f2b8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x15F2B8u;
    {
        const bool branch_taken_0x15f2b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f2b8) {
            ctx->pc = 0x15F2D0u;
            goto label_15f2d0;
        }
    }
    ctx->pc = 0x15F2C0u;
    // 0x15f2c0: 0x94830010  lhu         $v1, 0x10($a0)
    ctx->pc = 0x15f2c0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x15f2c4: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x15f2c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x15f2c8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x15F2C8u;
    {
        const bool branch_taken_0x15f2c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F2C8u;
        // 0x15f2cc: 0xa4830010  sh          $v1, 0x10($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 16), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f2c8) {
            ctx->pc = 0x15F2E0u;
            goto label_15f2e0;
        }
    }
    ctx->pc = 0x15F2D0u;
label_15f2d0:
    // 0x15f2d0: 0x94830010  lhu         $v1, 0x10($a0)
    ctx->pc = 0x15f2d0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x15f2d4: 0x3063fffe  andi        $v1, $v1, 0xFFFE
    ctx->pc = 0x15f2d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65534);
    // 0x15f2d8: 0xa4830010  sh          $v1, 0x10($a0)
    ctx->pc = 0x15f2d8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 16), (uint16_t)GPR_U32(ctx, 3));
    // 0x15f2dc: 0x0  nop
    ctx->pc = 0x15f2dcu;
    // NOP
label_15f2e0:
    // 0x15f2e0: 0x90830098  lbu         $v1, 0x98($a0)
    ctx->pc = 0x15f2e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 152)));
    // 0x15f2e4: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x15f2e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x15f2e8: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x15f2e8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x15f2ec: 0x1060002c  beqz        $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x15F2ECu;
    {
        const bool branch_taken_0x15f2ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f2ec) {
            ctx->pc = 0x15F3A0u;
            goto label_15f3a0;
        }
    }
    ctx->pc = 0x15F2F4u;
    // 0x15f2f4: 0x8083009a  lb          $v1, 0x9A($a0)
    ctx->pc = 0x15f2f4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 154)));
    // 0x15f2f8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x15f2f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x15f2fc: 0xa083009a  sb          $v1, 0x9A($a0)
    ctx->pc = 0x15f2fcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 154), (uint8_t)GPR_U32(ctx, 3));
    // 0x15f300: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x15f300u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x15f304: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x15f304u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x15f308: 0x1c600019  bgtz        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x15F308u;
    {
        const bool branch_taken_0x15f308 = (GPR_S64(ctx, 3) > 0);
        if (branch_taken_0x15f308) {
            ctx->pc = 0x15F370u;
            goto label_15f370;
        }
    }
    ctx->pc = 0x15F310u;
    // 0x15f310: 0x9087009b  lbu         $a3, 0x9B($a0)
    ctx->pc = 0x15f310u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 155)));
    // 0x15f314: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x15f314u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x15f318: 0x90850099  lbu         $a1, 0x99($a0)
    ctx->pc = 0x15f318u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 153)));
    // 0x15f31c: 0x90860098  lbu         $a2, 0x98($a0)
    ctx->pc = 0x15f31cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 152)));
    // 0x15f320: 0xe53821  addu        $a3, $a3, $a1
    ctx->pc = 0x15f320u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x15f324: 0x30c50030  andi        $a1, $a2, 0x30
    ctx->pc = 0x15f324u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)48);
    // 0x15f328: 0x52903  sra         $a1, $a1, 4
    ctx->pc = 0x15f328u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 4));
    // 0x15f32c: 0xa32807  srav        $a1, $v1, $a1
    ctx->pc = 0x15f32cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 5) & 0x1F));
    // 0x15f330: 0xa7082b  sltu        $at, $a1, $a3
    ctx->pc = 0x15f330u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x15f334: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x15F334u;
    {
        const bool branch_taken_0x15f334 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F334u;
        // 0x15f338: 0x30c30080  andi        $v1, $a2, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f334) {
            ctx->pc = 0x15F360u;
            goto label_15f360;
        }
    }
    ctx->pc = 0x15F33Cu;
    // 0x15f33c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x15F33Cu;
    {
        const bool branch_taken_0x15f33c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F33Cu;
        // 0x15f340: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f33c) {
            ctx->pc = 0x15F350u;
            goto label_15f350;
        }
    }
    ctx->pc = 0x15F344u;
    // 0x15f344: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x15F344u;
    {
        const bool branch_taken_0x15f344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f344) {
            ctx->pc = 0x15F360u;
            goto label_15f360;
        }
    }
    ctx->pc = 0x15F34Cu;
    // 0x15f34c: 0x0  nop
    ctx->pc = 0x15f34cu;
    // NOP
label_15f350:
    // 0x15f350: 0x30c300bf  andi        $v1, $a2, 0xBF
    ctx->pc = 0x15f350u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)191);
    // 0x15f354: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x15f354u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f358: 0xa0830098  sb          $v1, 0x98($a0)
    ctx->pc = 0x15f358u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 152), (uint8_t)GPR_U32(ctx, 3));
    // 0x15f35c: 0x0  nop
    ctx->pc = 0x15f35cu;
    // NOP
label_15f360:
    // 0x15f360: 0xa087009b  sb          $a3, 0x9B($a0)
    ctx->pc = 0x15f360u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 155), (uint8_t)GPR_U32(ctx, 7));
    // 0x15f364: 0x90830098  lbu         $v1, 0x98($a0)
    ctx->pc = 0x15f364u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 152)));
    // 0x15f368: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x15f368u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x15f36c: 0xa083009a  sb          $v1, 0x9A($a0)
    ctx->pc = 0x15f36cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 154), (uint8_t)GPR_U32(ctx, 3));
label_15f370:
    // 0x15f370: 0x9087009b  lbu         $a3, 0x9B($a0)
    ctx->pc = 0x15f370u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 155)));
    // 0x15f374: 0x8c86009c  lw          $a2, 0x9C($a0)
    ctx->pc = 0x15f374u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 156)));
    // 0x15f378: 0x3c03ff00  lui         $v1, 0xFF00
    ctx->pc = 0x15f378u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65280 << 16));
    // 0x15f37c: 0x8c850020  lw          $a1, 0x20($a0)
    ctx->pc = 0x15f37cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x15f380: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x15f380u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x15f384: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x15f384u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x15f388: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x15f388u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x15f38c: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x15f38cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x15f390: 0x52a3c  dsll32      $a1, $a1, 8
    ctx->pc = 0x15f390u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 8));
    // 0x15f394: 0x52a3e  dsrl32      $a1, $a1, 8
    ctx->pc = 0x15f394u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 8));
    // 0x15f398: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x15f398u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x15f39c: 0xac830020  sw          $v1, 0x20($a0)
    ctx->pc = 0x15f39cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 3));
label_15f3a0:
    // 0x15f3a0: 0x908300a0  lbu         $v1, 0xA0($a0)
    ctx->pc = 0x15f3a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 160)));
    // 0x15f3a4: 0x10600050  beqz        $v1, . + 4 + (0x50 << 2)
    ctx->pc = 0x15F3A4u;
    {
        const bool branch_taken_0x15f3a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f3a4) {
            ctx->pc = 0x15F4E8u;
            goto label_15f4e8;
        }
    }
    ctx->pc = 0x15F3ACu;
    // 0x15f3ac: 0x908300a1  lbu         $v1, 0xA1($a0)
    ctx->pc = 0x15f3acu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 161)));
    // 0x15f3b0: 0x1460002b  bnez        $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x15F3B0u;
    {
        const bool branch_taken_0x15f3b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15F3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F3B0u;
        // 0x15f3b4: 0x3c033f00  lui         $v1, 0x3F00 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f3b0) {
            ctx->pc = 0x15F460u;
            goto label_15f460;
        }
    }
    ctx->pc = 0x15F3B8u;
    // 0x15f3b8: 0x848700a2  lh          $a3, 0xA2($a0)
    ctx->pc = 0x15f3b8u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 162)));
    // 0x15f3bc: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x15f3bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x15f3c0: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x15f3c0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x15f3c4: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x15f3c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x15f3c8: 0x24c66540  addiu       $a2, $a2, 0x6540
    ctx->pc = 0x15f3c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 25920));
    // 0x15f3cc: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x15f3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x15f3d0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x15f3d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15f3d4: 0x44851800  mtc1        $a1, $f3
    ctx->pc = 0x15f3d4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x15f3d8: 0x30e30fff  andi        $v1, $a3, 0xFFF
    ctx->pc = 0x15f3d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4095);
    // 0x15f3dc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x15f3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x15f3e0: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x15f3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x15f3e4: 0xc4640000  lwc1        $f4, 0x0($v1)
    ctx->pc = 0x15f3e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x15f3e8: 0xc48100a4  lwc1        $f1, 0xA4($a0)
    ctx->pc = 0x15f3e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15f3ec: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x15f3ecu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x15f3f0: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x15f3f0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x15f3f4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x15f3f4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x15f3f8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x15f3f8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15f3fc: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x15F3FCu;
    {
        const bool branch_taken_0x15f3fc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x15f3fc) {
            ctx->pc = 0x15F414u;
            goto label_15f414;
        }
    }
    ctx->pc = 0x15F404u;
    // 0x15f404: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x15f404u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x15f408: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x15f408u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x15f40c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x15F40Cu;
    {
        const bool branch_taken_0x15f40c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F40Cu;
        // 0x15f410: 0x8c830090  lw          $v1, 0x90($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f40c) {
            ctx->pc = 0x15F430u;
            goto label_15f430;
        }
    }
    ctx->pc = 0x15F414u;
label_15f414:
    // 0x15f414: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x15f414u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x15f418: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x15f418u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x15f41c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x15f41cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x15f420: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x15f420u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x15f424: 0x0  nop
    ctx->pc = 0x15f424u;
    // NOP
    // 0x15f428: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x15f428u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x15f42c: 0x8c830090  lw          $v1, 0x90($a0)
    ctx->pc = 0x15f42cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 144)));
label_15f430:
    // 0x15f430: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x15f430u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x15f434: 0x9063000b  lbu         $v1, 0xB($v1)
    ctx->pc = 0x15f434u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 11)));
    // 0x15f438: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x15f438u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x15f43c: 0xa0830023  sb          $v1, 0x23($a0)
    ctx->pc = 0x15f43cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 35), (uint8_t)GPR_U32(ctx, 3));
    // 0x15f440: 0x8c850090  lw          $a1, 0x90($a0)
    ctx->pc = 0x15f440u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 144)));
    // 0x15f444: 0x948300a2  lhu         $v1, 0xA2($a0)
    ctx->pc = 0x15f444u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 162)));
    // 0x15f448: 0x94a50032  lhu         $a1, 0x32($a1)
    ctx->pc = 0x15f448u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 50)));
    // 0x15f44c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x15f44cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x15f450: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x15f450u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x15f454: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x15F454u;
    {
        const bool branch_taken_0x15f454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F454u;
        // 0x15f458: 0xa48300a2  sh          $v1, 0xA2($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 162), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f454) {
            ctx->pc = 0x15F4E8u;
            goto label_15f4e8;
        }
    }
    ctx->pc = 0x15F45Cu;
    // 0x15f45c: 0x0  nop
    ctx->pc = 0x15f45cu;
    // NOP
label_15f460:
    // 0x15f460: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15f460u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x15f464: 0x8c25f00c  lw          $a1, -0xFF4($at)
    ctx->pc = 0x15f464u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x81F00Cu));
    // 0x15f468: 0x3c03873c  lui         $v1, 0x873C
    ctx->pc = 0x15f468u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34620 << 16));
    // 0x15f46c: 0x90870023  lbu         $a3, 0x23($a0)
    ctx->pc = 0x15f46cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 35)));
    // 0x15f470: 0x3463a9e5  ori         $v1, $v1, 0xA9E5
    ctx->pc = 0x15f470u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43493);
    // 0x15f474: 0x53040  sll         $a2, $a1, 1
    ctx->pc = 0x15f474u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x15f478: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15f478u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x15f47c: 0x52fc2  srl         $a1, $a1, 31
    ctx->pc = 0x15f47cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x15f480: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x15f480u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x15f484: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x15f484u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x15f488: 0xa31826  xor         $v1, $a1, $v1
    ctx->pc = 0x15f488u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 3));
    // 0x15f48c: 0xac23f00c  sw          $v1, -0xFF4($at)
    ctx->pc = 0x15f48cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963212), GPR_U32(ctx, 3));
    // 0x15f490: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x15f490u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x15f494: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x15f494u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x15f498: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x15F498u;
    {
        const bool branch_taken_0x15f498 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f498) {
            ctx->pc = 0x15F4C0u;
            goto label_15f4c0;
        }
    }
    ctx->pc = 0x15F4A0u;
    // 0x15f4a0: 0x908300a4  lbu         $v1, 0xA4($a0)
    ctx->pc = 0x15f4a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 164)));
    // 0x15f4a4: 0x908500a3  lbu         $a1, 0xA3($a0)
    ctx->pc = 0x15f4a4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 163)));
    // 0x15f4a8: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x15f4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x15f4ac: 0xa3082a  slt         $at, $a1, $v1
    ctx->pc = 0x15f4acu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x15f4b0: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x15F4B0u;
    {
        const bool branch_taken_0x15f4b0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f4b0) {
            ctx->pc = 0x15F4E0u;
            goto label_15f4e0;
        }
    }
    ctx->pc = 0x15F4B8u;
    // 0x15f4b8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x15F4B8u;
    {
        const bool branch_taken_0x15f4b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F4B8u;
        // 0x15f4bc: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f4b8) {
            ctx->pc = 0x15F4E0u;
            goto label_15f4e0;
        }
    }
    ctx->pc = 0x15F4C0u;
label_15f4c0:
    // 0x15f4c0: 0x908300a4  lbu         $v1, 0xA4($a0)
    ctx->pc = 0x15f4c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 164)));
    // 0x15f4c4: 0x908500a2  lbu         $a1, 0xA2($a0)
    ctx->pc = 0x15f4c4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 162)));
    // 0x15f4c8: 0xe31823  subu        $v1, $a3, $v1
    ctx->pc = 0x15f4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x15f4cc: 0x65082a  slt         $at, $v1, $a1
    ctx->pc = 0x15f4ccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x15f4d0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x15F4D0u;
    {
        const bool branch_taken_0x15f4d0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f4d0) {
            ctx->pc = 0x15F4E0u;
            goto label_15f4e0;
        }
    }
    ctx->pc = 0x15F4D8u;
    // 0x15f4d8: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x15f4d8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f4dc: 0x0  nop
    ctx->pc = 0x15f4dcu;
    // NOP
label_15f4e0:
    // 0x15f4e0: 0xa0830023  sb          $v1, 0x23($a0)
    ctx->pc = 0x15f4e0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 35), (uint8_t)GPR_U32(ctx, 3));
    // 0x15f4e4: 0x0  nop
    ctx->pc = 0x15f4e4u;
    // NOP
label_15f4e8:
    // 0x15f4e8: 0x908300a8  lbu         $v1, 0xA8($a0)
    ctx->pc = 0x15f4e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 168)));
    // 0x15f4ec: 0x10600050  beqz        $v1, . + 4 + (0x50 << 2)
    ctx->pc = 0x15F4ECu;
    {
        const bool branch_taken_0x15f4ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f4ec) {
            ctx->pc = 0x15F630u;
            goto label_15f630;
        }
    }
    ctx->pc = 0x15F4F4u;
    // 0x15f4f4: 0x908300a9  lbu         $v1, 0xA9($a0)
    ctx->pc = 0x15f4f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 169)));
    // 0x15f4f8: 0x1460002b  bnez        $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x15F4F8u;
    {
        const bool branch_taken_0x15f4f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15F4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F4F8u;
        // 0x15f4fc: 0x3c033f00  lui         $v1, 0x3F00 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f4f8) {
            ctx->pc = 0x15F5A8u;
            goto label_15f5a8;
        }
    }
    ctx->pc = 0x15F500u;
    // 0x15f500: 0x848700aa  lh          $a3, 0xAA($a0)
    ctx->pc = 0x15f500u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 170)));
    // 0x15f504: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x15f504u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x15f508: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x15f508u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x15f50c: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x15f50cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x15f510: 0x24c66540  addiu       $a2, $a2, 0x6540
    ctx->pc = 0x15f510u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 25920));
    // 0x15f514: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x15f514u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x15f518: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x15f518u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15f51c: 0x44851800  mtc1        $a1, $f3
    ctx->pc = 0x15f51cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x15f520: 0x30e30fff  andi        $v1, $a3, 0xFFF
    ctx->pc = 0x15f520u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4095);
    // 0x15f524: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x15f524u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x15f528: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x15f528u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x15f52c: 0xc4640000  lwc1        $f4, 0x0($v1)
    ctx->pc = 0x15f52cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x15f530: 0xc48100ac  lwc1        $f1, 0xAC($a0)
    ctx->pc = 0x15f530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15f534: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x15f534u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x15f538: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x15f538u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x15f53c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x15f53cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x15f540: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x15f540u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15f544: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x15F544u;
    {
        const bool branch_taken_0x15f544 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x15f544) {
            ctx->pc = 0x15F55Cu;
            goto label_15f55c;
        }
    }
    ctx->pc = 0x15F54Cu;
    // 0x15f54c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x15f54cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x15f550: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x15f550u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x15f554: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x15F554u;
    {
        const bool branch_taken_0x15f554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F554u;
        // 0x15f558: 0x8c830090  lw          $v1, 0x90($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f554) {
            ctx->pc = 0x15F578u;
            goto label_15f578;
        }
    }
    ctx->pc = 0x15F55Cu;
label_15f55c:
    // 0x15f55c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x15f55cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x15f560: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x15f560u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x15f564: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x15f564u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x15f568: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x15f568u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x15f56c: 0x0  nop
    ctx->pc = 0x15f56cu;
    // NOP
    // 0x15f570: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x15f570u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x15f574: 0x8c830090  lw          $v1, 0x90($a0)
    ctx->pc = 0x15f574u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 144)));
label_15f578:
    // 0x15f578: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x15f578u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x15f57c: 0x94630024  lhu         $v1, 0x24($v1)
    ctx->pc = 0x15f57cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x15f580: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x15f580u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x15f584: 0xa4830028  sh          $v1, 0x28($a0)
    ctx->pc = 0x15f584u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 40), (uint16_t)GPR_U32(ctx, 3));
    // 0x15f588: 0x8c850090  lw          $a1, 0x90($a0)
    ctx->pc = 0x15f588u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 144)));
    // 0x15f58c: 0x948300aa  lhu         $v1, 0xAA($a0)
    ctx->pc = 0x15f58cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 170)));
    // 0x15f590: 0x94a50036  lhu         $a1, 0x36($a1)
    ctx->pc = 0x15f590u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 54)));
    // 0x15f594: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x15f594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x15f598: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x15f598u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x15f59c: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x15F59Cu;
    {
        const bool branch_taken_0x15f59c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F59Cu;
        // 0x15f5a0: 0xa48300aa  sh          $v1, 0xAA($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 170), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f59c) {
            ctx->pc = 0x15F630u;
            goto label_15f630;
        }
    }
    ctx->pc = 0x15F5A4u;
    // 0x15f5a4: 0x0  nop
    ctx->pc = 0x15f5a4u;
    // NOP
label_15f5a8:
    // 0x15f5a8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15f5a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x15f5ac: 0x8c25f00c  lw          $a1, -0xFF4($at)
    ctx->pc = 0x15f5acu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x81F00Cu));
    // 0x15f5b0: 0x3c03873c  lui         $v1, 0x873C
    ctx->pc = 0x15f5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34620 << 16));
    // 0x15f5b4: 0x94870028  lhu         $a3, 0x28($a0)
    ctx->pc = 0x15f5b4u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x15f5b8: 0x3463a9e5  ori         $v1, $v1, 0xA9E5
    ctx->pc = 0x15f5b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43493);
    // 0x15f5bc: 0x53040  sll         $a2, $a1, 1
    ctx->pc = 0x15f5bcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x15f5c0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15f5c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x15f5c4: 0x52fc2  srl         $a1, $a1, 31
    ctx->pc = 0x15f5c4u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x15f5c8: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x15f5c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x15f5cc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x15f5ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x15f5d0: 0xa31826  xor         $v1, $a1, $v1
    ctx->pc = 0x15f5d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 3));
    // 0x15f5d4: 0xac23f00c  sw          $v1, -0xFF4($at)
    ctx->pc = 0x15f5d4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963212), GPR_U32(ctx, 3));
    // 0x15f5d8: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x15f5d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x15f5dc: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x15f5dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x15f5e0: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x15F5E0u;
    {
        const bool branch_taken_0x15f5e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f5e0) {
            ctx->pc = 0x15F608u;
            goto label_15f608;
        }
    }
    ctx->pc = 0x15F5E8u;
    // 0x15f5e8: 0x948300ae  lhu         $v1, 0xAE($a0)
    ctx->pc = 0x15f5e8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 174)));
    // 0x15f5ec: 0x948500ac  lhu         $a1, 0xAC($a0)
    ctx->pc = 0x15f5ecu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 172)));
    // 0x15f5f0: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x15f5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x15f5f4: 0xa3082a  slt         $at, $a1, $v1
    ctx->pc = 0x15f5f4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x15f5f8: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x15F5F8u;
    {
        const bool branch_taken_0x15f5f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f5f8) {
            ctx->pc = 0x15F628u;
            goto label_15f628;
        }
    }
    ctx->pc = 0x15F600u;
    // 0x15f600: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x15F600u;
    {
        const bool branch_taken_0x15f600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F600u;
        // 0x15f604: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f600) {
            ctx->pc = 0x15F628u;
            goto label_15f628;
        }
    }
    ctx->pc = 0x15F608u;
label_15f608:
    // 0x15f608: 0x948300ae  lhu         $v1, 0xAE($a0)
    ctx->pc = 0x15f608u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 174)));
    // 0x15f60c: 0x948500aa  lhu         $a1, 0xAA($a0)
    ctx->pc = 0x15f60cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 170)));
    // 0x15f610: 0xe31823  subu        $v1, $a3, $v1
    ctx->pc = 0x15f610u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x15f614: 0x65082a  slt         $at, $v1, $a1
    ctx->pc = 0x15f614u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x15f618: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x15F618u;
    {
        const bool branch_taken_0x15f618 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f618) {
            ctx->pc = 0x15F628u;
            goto label_15f628;
        }
    }
    ctx->pc = 0x15F620u;
    // 0x15f620: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x15f620u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f624: 0x0  nop
    ctx->pc = 0x15f624u;
    // NOP
label_15f628:
    // 0x15f628: 0xa4830028  sh          $v1, 0x28($a0)
    ctx->pc = 0x15f628u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 40), (uint16_t)GPR_U32(ctx, 3));
    // 0x15f62c: 0x0  nop
    ctx->pc = 0x15f62cu;
    // NOP
label_15f630:
    // 0x15f630: 0x3e00008  jr          $ra
    ctx->pc = 0x15F630u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15F630u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15F638u;
}
