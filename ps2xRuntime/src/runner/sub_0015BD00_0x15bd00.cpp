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

// Function: sub_0015BD00
// Address: 0x15bd00 - 0x15c108
void sub_0015BD00_0x15bd00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015BD00_0x15bd00");
#endif

    ctx->pc = 0x15bd00u;

    // 0x15bd00: 0x8c830090  lw          $v1, 0x90($a0)
    ctx->pc = 0x15bd00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 144)));
    // 0x15bd04: 0x9066000d  lbu         $a2, 0xD($v1)
    ctx->pc = 0x15bd04u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 13)));
    // 0x15bd08: 0x10c00013  beqz        $a2, . + 4 + (0x13 << 2)
    ctx->pc = 0x15BD08u;
    {
        const bool branch_taken_0x15bd08 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BD08u;
        // 0x15bd0c: 0x9067000f  lbu         $a3, 0xF($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 15)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bd08) {
            ctx->pc = 0x15BD58u;
            goto label_15bd58;
        }
    }
    ctx->pc = 0x15BD10u;
    // 0x15bd10: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15bd10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x15bd14: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x15bd14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x15bd18: 0x8c25cebc  lw          $a1, -0x3144($at)
    ctx->pc = 0x15bd18u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x15bd1c: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x15bd1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x15bd20: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x15BD20u;
    {
        const bool branch_taken_0x15bd20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BD20u;
        // 0x15bd24: 0x30c300ff  andi        $v1, $a2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bd20) {
            ctx->pc = 0x15BD40u;
            goto label_15bd40;
        }
    }
    ctx->pc = 0x15BD28u;
    // 0x15bd28: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x15bd28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x15bd2c: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x15BD2Cu;
    {
        const bool branch_taken_0x15bd2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15bd2c) {
            ctx->pc = 0x15BD58u;
            goto label_15bd58;
        }
    }
    ctx->pc = 0x15BD34u;
    // 0x15bd34: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x15BD34u;
    {
        const bool branch_taken_0x15bd34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BD34u;
        // 0x15bd38: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bd34) {
            ctx->pc = 0x15BD88u;
            goto label_15bd88;
        }
    }
    ctx->pc = 0x15BD3Cu;
    // 0x15bd3c: 0x0  nop
    ctx->pc = 0x15bd3cu;
    // NOP
label_15bd40:
    // 0x15bd40: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x15bd40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x15bd44: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x15bd44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x15bd48: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x15BD48u;
    {
        const bool branch_taken_0x15bd48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BD48u;
        // 0x15bd4c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bd48) {
            ctx->pc = 0x15BD58u;
            goto label_15bd58;
        }
    }
    ctx->pc = 0x15BD50u;
    // 0x15bd50: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x15BD50u;
    {
        const bool branch_taken_0x15bd50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15bd50) {
            ctx->pc = 0x15BD88u;
            goto label_15bd88;
        }
    }
    ctx->pc = 0x15BD58u;
label_15bd58:
    // 0x15bd58: 0x10e00009  beqz        $a3, . + 4 + (0x9 << 2)
    ctx->pc = 0x15BD58u;
    {
        const bool branch_taken_0x15bd58 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BD58u;
        // 0x15bd5c: 0x3c01007e  lui         $at, 0x7E (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bd58) {
            ctx->pc = 0x15BD80u;
            goto label_15bd80;
        }
    }
    ctx->pc = 0x15BD60u;
    // 0x15bd60: 0x30e500ff  andi        $a1, $a3, 0xFF
    ctx->pc = 0x15bd60u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x15bd64: 0x902368a3  lbu         $v1, 0x68A3($at)
    ctx->pc = 0x15bd64u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 26787)));
    // 0x15bd68: 0xa31827  nor         $v1, $a1, $v1
    ctx->pc = 0x15bd68u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 5) | GPR_U64(ctx, 3)));
    // 0x15bd6c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x15bd6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x15bd70: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x15BD70u;
    {
        const bool branch_taken_0x15bd70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15BD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BD70u;
        // 0x15bd74: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bd70) {
            ctx->pc = 0x15BD80u;
            goto label_15bd80;
        }
    }
    ctx->pc = 0x15BD78u;
    // 0x15bd78: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x15BD78u;
    {
        const bool branch_taken_0x15bd78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15bd78) {
            ctx->pc = 0x15BD88u;
            goto label_15bd88;
        }
    }
    ctx->pc = 0x15BD80u;
label_15bd80:
    // 0x15bd80: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x15bd80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15bd84: 0x0  nop
    ctx->pc = 0x15bd84u;
    // NOP
label_15bd88:
    // 0x15bd88: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x15BD88u;
    {
        const bool branch_taken_0x15bd88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15bd88) {
            ctx->pc = 0x15BDA0u;
            goto label_15bda0;
        }
    }
    ctx->pc = 0x15BD90u;
    // 0x15bd90: 0x94830010  lhu         $v1, 0x10($a0)
    ctx->pc = 0x15bd90u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x15bd94: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x15bd94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x15bd98: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x15BD98u;
    {
        const bool branch_taken_0x15bd98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BD98u;
        // 0x15bd9c: 0xa4830010  sh          $v1, 0x10($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 16), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bd98) {
            ctx->pc = 0x15BDB0u;
            goto label_15bdb0;
        }
    }
    ctx->pc = 0x15BDA0u;
label_15bda0:
    // 0x15bda0: 0x94830010  lhu         $v1, 0x10($a0)
    ctx->pc = 0x15bda0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x15bda4: 0x3063fffe  andi        $v1, $v1, 0xFFFE
    ctx->pc = 0x15bda4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65534);
    // 0x15bda8: 0xa4830010  sh          $v1, 0x10($a0)
    ctx->pc = 0x15bda8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 16), (uint16_t)GPR_U32(ctx, 3));
    // 0x15bdac: 0x0  nop
    ctx->pc = 0x15bdacu;
    // NOP
label_15bdb0:
    // 0x15bdb0: 0x90830098  lbu         $v1, 0x98($a0)
    ctx->pc = 0x15bdb0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 152)));
    // 0x15bdb4: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x15bdb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x15bdb8: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x15bdb8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x15bdbc: 0x1060002c  beqz        $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x15BDBCu;
    {
        const bool branch_taken_0x15bdbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15bdbc) {
            ctx->pc = 0x15BE70u;
            goto label_15be70;
        }
    }
    ctx->pc = 0x15BDC4u;
    // 0x15bdc4: 0x8083009a  lb          $v1, 0x9A($a0)
    ctx->pc = 0x15bdc4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 154)));
    // 0x15bdc8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x15bdc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x15bdcc: 0xa083009a  sb          $v1, 0x9A($a0)
    ctx->pc = 0x15bdccu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 154), (uint8_t)GPR_U32(ctx, 3));
    // 0x15bdd0: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x15bdd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x15bdd4: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x15bdd4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x15bdd8: 0x1c600019  bgtz        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x15BDD8u;
    {
        const bool branch_taken_0x15bdd8 = (GPR_S64(ctx, 3) > 0);
        if (branch_taken_0x15bdd8) {
            ctx->pc = 0x15BE40u;
            goto label_15be40;
        }
    }
    ctx->pc = 0x15BDE0u;
    // 0x15bde0: 0x9087009b  lbu         $a3, 0x9B($a0)
    ctx->pc = 0x15bde0u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 155)));
    // 0x15bde4: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x15bde4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x15bde8: 0x90850099  lbu         $a1, 0x99($a0)
    ctx->pc = 0x15bde8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 153)));
    // 0x15bdec: 0x90860098  lbu         $a2, 0x98($a0)
    ctx->pc = 0x15bdecu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 152)));
    // 0x15bdf0: 0xe53821  addu        $a3, $a3, $a1
    ctx->pc = 0x15bdf0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x15bdf4: 0x30c50030  andi        $a1, $a2, 0x30
    ctx->pc = 0x15bdf4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)48);
    // 0x15bdf8: 0x52903  sra         $a1, $a1, 4
    ctx->pc = 0x15bdf8u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 4));
    // 0x15bdfc: 0xa32807  srav        $a1, $v1, $a1
    ctx->pc = 0x15bdfcu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 5) & 0x1F));
    // 0x15be00: 0xa7082b  sltu        $at, $a1, $a3
    ctx->pc = 0x15be00u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x15be04: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x15BE04u;
    {
        const bool branch_taken_0x15be04 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BE04u;
        // 0x15be08: 0x30c30080  andi        $v1, $a2, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15be04) {
            ctx->pc = 0x15BE30u;
            goto label_15be30;
        }
    }
    ctx->pc = 0x15BE0Cu;
    // 0x15be0c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x15BE0Cu;
    {
        const bool branch_taken_0x15be0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BE0Cu;
        // 0x15be10: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15be0c) {
            ctx->pc = 0x15BE20u;
            goto label_15be20;
        }
    }
    ctx->pc = 0x15BE14u;
    // 0x15be14: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x15BE14u;
    {
        const bool branch_taken_0x15be14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15be14) {
            ctx->pc = 0x15BE30u;
            goto label_15be30;
        }
    }
    ctx->pc = 0x15BE1Cu;
    // 0x15be1c: 0x0  nop
    ctx->pc = 0x15be1cu;
    // NOP
label_15be20:
    // 0x15be20: 0x30c300bf  andi        $v1, $a2, 0xBF
    ctx->pc = 0x15be20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)191);
    // 0x15be24: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x15be24u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15be28: 0xa0830098  sb          $v1, 0x98($a0)
    ctx->pc = 0x15be28u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 152), (uint8_t)GPR_U32(ctx, 3));
    // 0x15be2c: 0x0  nop
    ctx->pc = 0x15be2cu;
    // NOP
label_15be30:
    // 0x15be30: 0xa087009b  sb          $a3, 0x9B($a0)
    ctx->pc = 0x15be30u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 155), (uint8_t)GPR_U32(ctx, 7));
    // 0x15be34: 0x90830098  lbu         $v1, 0x98($a0)
    ctx->pc = 0x15be34u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 152)));
    // 0x15be38: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x15be38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x15be3c: 0xa083009a  sb          $v1, 0x9A($a0)
    ctx->pc = 0x15be3cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 154), (uint8_t)GPR_U32(ctx, 3));
label_15be40:
    // 0x15be40: 0x9087009b  lbu         $a3, 0x9B($a0)
    ctx->pc = 0x15be40u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 155)));
    // 0x15be44: 0x8c86009c  lw          $a2, 0x9C($a0)
    ctx->pc = 0x15be44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 156)));
    // 0x15be48: 0x3c03ff00  lui         $v1, 0xFF00
    ctx->pc = 0x15be48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65280 << 16));
    // 0x15be4c: 0x8c850020  lw          $a1, 0x20($a0)
    ctx->pc = 0x15be4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x15be50: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x15be50u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x15be54: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x15be54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x15be58: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x15be58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x15be5c: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x15be5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x15be60: 0x52a3c  dsll32      $a1, $a1, 8
    ctx->pc = 0x15be60u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 8));
    // 0x15be64: 0x52a3e  dsrl32      $a1, $a1, 8
    ctx->pc = 0x15be64u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 8));
    // 0x15be68: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x15be68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x15be6c: 0xac830020  sw          $v1, 0x20($a0)
    ctx->pc = 0x15be6cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 3));
label_15be70:
    // 0x15be70: 0x908300a0  lbu         $v1, 0xA0($a0)
    ctx->pc = 0x15be70u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 160)));
    // 0x15be74: 0x10600050  beqz        $v1, . + 4 + (0x50 << 2)
    ctx->pc = 0x15BE74u;
    {
        const bool branch_taken_0x15be74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15be74) {
            ctx->pc = 0x15BFB8u;
            goto label_15bfb8;
        }
    }
    ctx->pc = 0x15BE7Cu;
    // 0x15be7c: 0x908300a1  lbu         $v1, 0xA1($a0)
    ctx->pc = 0x15be7cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 161)));
    // 0x15be80: 0x1460002b  bnez        $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x15BE80u;
    {
        const bool branch_taken_0x15be80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15BE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BE80u;
        // 0x15be84: 0x3c033f00  lui         $v1, 0x3F00 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15be80) {
            ctx->pc = 0x15BF30u;
            goto label_15bf30;
        }
    }
    ctx->pc = 0x15BE88u;
    // 0x15be88: 0x848700a2  lh          $a3, 0xA2($a0)
    ctx->pc = 0x15be88u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 162)));
    // 0x15be8c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x15be8cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x15be90: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x15be90u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x15be94: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x15be94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x15be98: 0x24c66540  addiu       $a2, $a2, 0x6540
    ctx->pc = 0x15be98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 25920));
    // 0x15be9c: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x15be9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x15bea0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x15bea0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15bea4: 0x44851800  mtc1        $a1, $f3
    ctx->pc = 0x15bea4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x15bea8: 0x30e30fff  andi        $v1, $a3, 0xFFF
    ctx->pc = 0x15bea8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4095);
    // 0x15beac: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x15beacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x15beb0: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x15beb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x15beb4: 0xc4640000  lwc1        $f4, 0x0($v1)
    ctx->pc = 0x15beb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x15beb8: 0xc48100a4  lwc1        $f1, 0xA4($a0)
    ctx->pc = 0x15beb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15bebc: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x15bebcu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x15bec0: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x15bec0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x15bec4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x15bec4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x15bec8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x15bec8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15becc: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x15BECCu;
    {
        const bool branch_taken_0x15becc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x15becc) {
            ctx->pc = 0x15BEE4u;
            goto label_15bee4;
        }
    }
    ctx->pc = 0x15BED4u;
    // 0x15bed4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x15bed4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x15bed8: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x15bed8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x15bedc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x15BEDCu;
    {
        const bool branch_taken_0x15bedc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BEDCu;
        // 0x15bee0: 0x8c830090  lw          $v1, 0x90($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bedc) {
            ctx->pc = 0x15BF00u;
            goto label_15bf00;
        }
    }
    ctx->pc = 0x15BEE4u;
label_15bee4:
    // 0x15bee4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x15bee4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x15bee8: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x15bee8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x15beec: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x15beecu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x15bef0: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x15bef0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x15bef4: 0x0  nop
    ctx->pc = 0x15bef4u;
    // NOP
    // 0x15bef8: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x15bef8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x15befc: 0x8c830090  lw          $v1, 0x90($a0)
    ctx->pc = 0x15befcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 144)));
label_15bf00:
    // 0x15bf00: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x15bf00u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x15bf04: 0x9063000b  lbu         $v1, 0xB($v1)
    ctx->pc = 0x15bf04u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 11)));
    // 0x15bf08: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x15bf08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x15bf0c: 0xa0830023  sb          $v1, 0x23($a0)
    ctx->pc = 0x15bf0cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 35), (uint8_t)GPR_U32(ctx, 3));
    // 0x15bf10: 0x8c850090  lw          $a1, 0x90($a0)
    ctx->pc = 0x15bf10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 144)));
    // 0x15bf14: 0x948300a2  lhu         $v1, 0xA2($a0)
    ctx->pc = 0x15bf14u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 162)));
    // 0x15bf18: 0x94a50032  lhu         $a1, 0x32($a1)
    ctx->pc = 0x15bf18u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 50)));
    // 0x15bf1c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x15bf1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x15bf20: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x15bf20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x15bf24: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x15BF24u;
    {
        const bool branch_taken_0x15bf24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BF24u;
        // 0x15bf28: 0xa48300a2  sh          $v1, 0xA2($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 162), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bf24) {
            ctx->pc = 0x15BFB8u;
            goto label_15bfb8;
        }
    }
    ctx->pc = 0x15BF2Cu;
    // 0x15bf2c: 0x0  nop
    ctx->pc = 0x15bf2cu;
    // NOP
label_15bf30:
    // 0x15bf30: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15bf30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x15bf34: 0x8c25f004  lw          $a1, -0xFFC($at)
    ctx->pc = 0x15bf34u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x81F004u));
    // 0x15bf38: 0x3c03873c  lui         $v1, 0x873C
    ctx->pc = 0x15bf38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34620 << 16));
    // 0x15bf3c: 0x90870023  lbu         $a3, 0x23($a0)
    ctx->pc = 0x15bf3cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 35)));
    // 0x15bf40: 0x3463a9e5  ori         $v1, $v1, 0xA9E5
    ctx->pc = 0x15bf40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43493);
    // 0x15bf44: 0x53040  sll         $a2, $a1, 1
    ctx->pc = 0x15bf44u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x15bf48: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15bf48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x15bf4c: 0x52fc2  srl         $a1, $a1, 31
    ctx->pc = 0x15bf4cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x15bf50: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x15bf50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x15bf54: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x15bf54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x15bf58: 0xa31826  xor         $v1, $a1, $v1
    ctx->pc = 0x15bf58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 3));
    // 0x15bf5c: 0xac23f004  sw          $v1, -0xFFC($at)
    ctx->pc = 0x15bf5cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963204), GPR_U32(ctx, 3));
    // 0x15bf60: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x15bf60u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x15bf64: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x15bf64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x15bf68: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x15BF68u;
    {
        const bool branch_taken_0x15bf68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15bf68) {
            ctx->pc = 0x15BF90u;
            goto label_15bf90;
        }
    }
    ctx->pc = 0x15BF70u;
    // 0x15bf70: 0x908300a4  lbu         $v1, 0xA4($a0)
    ctx->pc = 0x15bf70u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 164)));
    // 0x15bf74: 0x908500a3  lbu         $a1, 0xA3($a0)
    ctx->pc = 0x15bf74u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 163)));
    // 0x15bf78: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x15bf78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x15bf7c: 0xa3082a  slt         $at, $a1, $v1
    ctx->pc = 0x15bf7cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x15bf80: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x15BF80u;
    {
        const bool branch_taken_0x15bf80 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x15bf80) {
            ctx->pc = 0x15BFB0u;
            goto label_15bfb0;
        }
    }
    ctx->pc = 0x15BF88u;
    // 0x15bf88: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x15BF88u;
    {
        const bool branch_taken_0x15bf88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BF88u;
        // 0x15bf8c: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bf88) {
            ctx->pc = 0x15BFB0u;
            goto label_15bfb0;
        }
    }
    ctx->pc = 0x15BF90u;
label_15bf90:
    // 0x15bf90: 0x908300a4  lbu         $v1, 0xA4($a0)
    ctx->pc = 0x15bf90u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 164)));
    // 0x15bf94: 0x908500a2  lbu         $a1, 0xA2($a0)
    ctx->pc = 0x15bf94u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 162)));
    // 0x15bf98: 0xe31823  subu        $v1, $a3, $v1
    ctx->pc = 0x15bf98u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x15bf9c: 0x65082a  slt         $at, $v1, $a1
    ctx->pc = 0x15bf9cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x15bfa0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x15BFA0u;
    {
        const bool branch_taken_0x15bfa0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x15bfa0) {
            ctx->pc = 0x15BFB0u;
            goto label_15bfb0;
        }
    }
    ctx->pc = 0x15BFA8u;
    // 0x15bfa8: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x15bfa8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15bfac: 0x0  nop
    ctx->pc = 0x15bfacu;
    // NOP
label_15bfb0:
    // 0x15bfb0: 0xa0830023  sb          $v1, 0x23($a0)
    ctx->pc = 0x15bfb0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 35), (uint8_t)GPR_U32(ctx, 3));
    // 0x15bfb4: 0x0  nop
    ctx->pc = 0x15bfb4u;
    // NOP
label_15bfb8:
    // 0x15bfb8: 0x908300a8  lbu         $v1, 0xA8($a0)
    ctx->pc = 0x15bfb8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 168)));
    // 0x15bfbc: 0x10600050  beqz        $v1, . + 4 + (0x50 << 2)
    ctx->pc = 0x15BFBCu;
    {
        const bool branch_taken_0x15bfbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15bfbc) {
            ctx->pc = 0x15C100u;
            goto label_15c100;
        }
    }
    ctx->pc = 0x15BFC4u;
    // 0x15bfc4: 0x908300a9  lbu         $v1, 0xA9($a0)
    ctx->pc = 0x15bfc4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 169)));
    // 0x15bfc8: 0x1460002b  bnez        $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x15BFC8u;
    {
        const bool branch_taken_0x15bfc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15BFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BFC8u;
        // 0x15bfcc: 0x3c033f00  lui         $v1, 0x3F00 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bfc8) {
            ctx->pc = 0x15C078u;
            goto label_15c078;
        }
    }
    ctx->pc = 0x15BFD0u;
    // 0x15bfd0: 0x848700aa  lh          $a3, 0xAA($a0)
    ctx->pc = 0x15bfd0u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 170)));
    // 0x15bfd4: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x15bfd4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x15bfd8: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x15bfd8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x15bfdc: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x15bfdcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x15bfe0: 0x24c66540  addiu       $a2, $a2, 0x6540
    ctx->pc = 0x15bfe0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 25920));
    // 0x15bfe4: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x15bfe4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x15bfe8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x15bfe8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15bfec: 0x44851800  mtc1        $a1, $f3
    ctx->pc = 0x15bfecu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x15bff0: 0x30e30fff  andi        $v1, $a3, 0xFFF
    ctx->pc = 0x15bff0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4095);
    // 0x15bff4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x15bff4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x15bff8: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x15bff8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x15bffc: 0xc4640000  lwc1        $f4, 0x0($v1)
    ctx->pc = 0x15bffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x15c000: 0xc48100ac  lwc1        $f1, 0xAC($a0)
    ctx->pc = 0x15c000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15c004: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x15c004u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x15c008: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x15c008u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x15c00c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x15c00cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x15c010: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x15c010u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15c014: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x15C014u;
    {
        const bool branch_taken_0x15c014 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x15c014) {
            ctx->pc = 0x15C02Cu;
            goto label_15c02c;
        }
    }
    ctx->pc = 0x15C01Cu;
    // 0x15c01c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x15c01cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x15c020: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x15c020u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x15c024: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x15C024u;
    {
        const bool branch_taken_0x15c024 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C024u;
        // 0x15c028: 0x8c830090  lw          $v1, 0x90($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c024) {
            ctx->pc = 0x15C048u;
            goto label_15c048;
        }
    }
    ctx->pc = 0x15C02Cu;
label_15c02c:
    // 0x15c02c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x15c02cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x15c030: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x15c030u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x15c034: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x15c034u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x15c038: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x15c038u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x15c03c: 0x0  nop
    ctx->pc = 0x15c03cu;
    // NOP
    // 0x15c040: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x15c040u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x15c044: 0x8c830090  lw          $v1, 0x90($a0)
    ctx->pc = 0x15c044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 144)));
label_15c048:
    // 0x15c048: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x15c048u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x15c04c: 0x94630024  lhu         $v1, 0x24($v1)
    ctx->pc = 0x15c04cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x15c050: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x15c050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x15c054: 0xa4830028  sh          $v1, 0x28($a0)
    ctx->pc = 0x15c054u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 40), (uint16_t)GPR_U32(ctx, 3));
    // 0x15c058: 0x8c850090  lw          $a1, 0x90($a0)
    ctx->pc = 0x15c058u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 144)));
    // 0x15c05c: 0x948300aa  lhu         $v1, 0xAA($a0)
    ctx->pc = 0x15c05cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 170)));
    // 0x15c060: 0x94a50036  lhu         $a1, 0x36($a1)
    ctx->pc = 0x15c060u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 54)));
    // 0x15c064: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x15c064u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x15c068: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x15c068u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x15c06c: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x15C06Cu;
    {
        const bool branch_taken_0x15c06c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C06Cu;
        // 0x15c070: 0xa48300aa  sh          $v1, 0xAA($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 170), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c06c) {
            ctx->pc = 0x15C100u;
            goto label_15c100;
        }
    }
    ctx->pc = 0x15C074u;
    // 0x15c074: 0x0  nop
    ctx->pc = 0x15c074u;
    // NOP
label_15c078:
    // 0x15c078: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15c078u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x15c07c: 0x8c25f004  lw          $a1, -0xFFC($at)
    ctx->pc = 0x15c07cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x81F004u));
    // 0x15c080: 0x3c03873c  lui         $v1, 0x873C
    ctx->pc = 0x15c080u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34620 << 16));
    // 0x15c084: 0x94870028  lhu         $a3, 0x28($a0)
    ctx->pc = 0x15c084u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x15c088: 0x3463a9e5  ori         $v1, $v1, 0xA9E5
    ctx->pc = 0x15c088u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43493);
    // 0x15c08c: 0x53040  sll         $a2, $a1, 1
    ctx->pc = 0x15c08cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x15c090: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x15c090u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x15c094: 0x52fc2  srl         $a1, $a1, 31
    ctx->pc = 0x15c094u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x15c098: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x15c098u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x15c09c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x15c09cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x15c0a0: 0xa31826  xor         $v1, $a1, $v1
    ctx->pc = 0x15c0a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 3));
    // 0x15c0a4: 0xac23f004  sw          $v1, -0xFFC($at)
    ctx->pc = 0x15c0a4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963204), GPR_U32(ctx, 3));
    // 0x15c0a8: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x15c0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x15c0ac: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x15c0acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x15c0b0: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x15C0B0u;
    {
        const bool branch_taken_0x15c0b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15c0b0) {
            ctx->pc = 0x15C0D8u;
            goto label_15c0d8;
        }
    }
    ctx->pc = 0x15C0B8u;
    // 0x15c0b8: 0x948300ae  lhu         $v1, 0xAE($a0)
    ctx->pc = 0x15c0b8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 174)));
    // 0x15c0bc: 0x948500ac  lhu         $a1, 0xAC($a0)
    ctx->pc = 0x15c0bcu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 172)));
    // 0x15c0c0: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x15c0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x15c0c4: 0xa3082a  slt         $at, $a1, $v1
    ctx->pc = 0x15c0c4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x15c0c8: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x15C0C8u;
    {
        const bool branch_taken_0x15c0c8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x15c0c8) {
            ctx->pc = 0x15C0F8u;
            goto label_15c0f8;
        }
    }
    ctx->pc = 0x15C0D0u;
    // 0x15c0d0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x15C0D0u;
    {
        const bool branch_taken_0x15c0d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C0D0u;
        // 0x15c0d4: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c0d0) {
            ctx->pc = 0x15C0F8u;
            goto label_15c0f8;
        }
    }
    ctx->pc = 0x15C0D8u;
label_15c0d8:
    // 0x15c0d8: 0x948300ae  lhu         $v1, 0xAE($a0)
    ctx->pc = 0x15c0d8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 174)));
    // 0x15c0dc: 0x948500aa  lhu         $a1, 0xAA($a0)
    ctx->pc = 0x15c0dcu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 170)));
    // 0x15c0e0: 0xe31823  subu        $v1, $a3, $v1
    ctx->pc = 0x15c0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x15c0e4: 0x65082a  slt         $at, $v1, $a1
    ctx->pc = 0x15c0e4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x15c0e8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x15C0E8u;
    {
        const bool branch_taken_0x15c0e8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x15c0e8) {
            ctx->pc = 0x15C0F8u;
            goto label_15c0f8;
        }
    }
    ctx->pc = 0x15C0F0u;
    // 0x15c0f0: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x15c0f0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c0f4: 0x0  nop
    ctx->pc = 0x15c0f4u;
    // NOP
label_15c0f8:
    // 0x15c0f8: 0xa4830028  sh          $v1, 0x28($a0)
    ctx->pc = 0x15c0f8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 40), (uint16_t)GPR_U32(ctx, 3));
    // 0x15c0fc: 0x0  nop
    ctx->pc = 0x15c0fcu;
    // NOP
label_15c100:
    // 0x15c100: 0x3e00008  jr          $ra
    ctx->pc = 0x15C100u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15C100u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15C108u;
}
