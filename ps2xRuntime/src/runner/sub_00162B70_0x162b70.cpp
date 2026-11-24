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

// Function: sub_00162B70
// Address: 0x162b70 - 0x163284
void sub_00162B70_0x162b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00162B70_0x162b70");
#endif

    switch (ctx->pc) {
        case 0x162e98u: goto label_162e98;
        case 0x162ed8u: goto label_162ed8;
        case 0x162ee8u: goto label_162ee8;
        default: break;
    }

    ctx->pc = 0x162b70u;

    // 0x162b70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x162b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x162b74: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x162b74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x162b78: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x162b78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x162b7c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x162b7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x162b80: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x162b80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162b84: 0x90840098  lbu         $a0, 0x98($a0)
    ctx->pc = 0x162b84u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 152)));
    // 0x162b88: 0x30830040  andi        $v1, $a0, 0x40
    ctx->pc = 0x162b88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)64);
    // 0x162b8c: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x162b8cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x162b90: 0x1060002f  beqz        $v1, . + 4 + (0x2F << 2)
    ctx->pc = 0x162B90u;
    {
        const bool branch_taken_0x162b90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x162B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162B90u;
        // 0x162b94: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162b90) {
            ctx->pc = 0x162C50u;
            goto label_162c50;
        }
    }
    ctx->pc = 0x162B98u;
    // 0x162b98: 0x30830080  andi        $v1, $a0, 0x80
    ctx->pc = 0x162b98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)128);
    // 0x162b9c: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x162b9cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x162ba0: 0x1060002b  beqz        $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x162BA0u;
    {
        const bool branch_taken_0x162ba0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x162ba0) {
            ctx->pc = 0x162C50u;
            goto label_162c50;
        }
    }
    ctx->pc = 0x162BA8u;
    // 0x162ba8: 0x8223009a  lb          $v1, 0x9A($s1)
    ctx->pc = 0x162ba8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 154)));
    // 0x162bac: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x162bacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x162bb0: 0xa223009a  sb          $v1, 0x9A($s1)
    ctx->pc = 0x162bb0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 154), (uint8_t)GPR_U32(ctx, 3));
    // 0x162bb4: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x162bb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x162bb8: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x162bb8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x162bbc: 0x1c600018  bgtz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x162BBCu;
    {
        const bool branch_taken_0x162bbc = (GPR_S64(ctx, 3) > 0);
        if (branch_taken_0x162bbc) {
            ctx->pc = 0x162C20u;
            goto label_162c20;
        }
    }
    ctx->pc = 0x162BC4u;
    // 0x162bc4: 0x9226009b  lbu         $a2, 0x9B($s1)
    ctx->pc = 0x162bc4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 155)));
    // 0x162bc8: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x162bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x162bcc: 0x92240099  lbu         $a0, 0x99($s1)
    ctx->pc = 0x162bccu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 153)));
    // 0x162bd0: 0x92250098  lbu         $a1, 0x98($s1)
    ctx->pc = 0x162bd0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 152)));
    // 0x162bd4: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x162bd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x162bd8: 0x30a40030  andi        $a0, $a1, 0x30
    ctx->pc = 0x162bd8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)48);
    // 0x162bdc: 0x42103  sra         $a0, $a0, 4
    ctx->pc = 0x162bdcu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 4));
    // 0x162be0: 0x832007  srav        $a0, $v1, $a0
    ctx->pc = 0x162be0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
    // 0x162be4: 0x86082b  sltu        $at, $a0, $a2
    ctx->pc = 0x162be4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x162be8: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x162BE8u;
    {
        const bool branch_taken_0x162be8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x162BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162BE8u;
        // 0x162bec: 0x30a30080  andi        $v1, $a1, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x162be8) {
            ctx->pc = 0x162C10u;
            goto label_162c10;
        }
    }
    ctx->pc = 0x162BF0u;
    // 0x162bf0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x162BF0u;
    {
        const bool branch_taken_0x162bf0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x162BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162BF0u;
        // 0x162bf4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162bf0) {
            ctx->pc = 0x162C00u;
            goto label_162c00;
        }
    }
    ctx->pc = 0x162BF8u;
    // 0x162bf8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x162BF8u;
    {
        const bool branch_taken_0x162bf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x162bf8) {
            ctx->pc = 0x162C10u;
            goto label_162c10;
        }
    }
    ctx->pc = 0x162C00u;
label_162c00:
    // 0x162c00: 0x30a300bf  andi        $v1, $a1, 0xBF
    ctx->pc = 0x162c00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)191);
    // 0x162c04: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x162c04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162c08: 0xa2230098  sb          $v1, 0x98($s1)
    ctx->pc = 0x162c08u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 152), (uint8_t)GPR_U32(ctx, 3));
    // 0x162c0c: 0x0  nop
    ctx->pc = 0x162c0cu;
    // NOP
label_162c10:
    // 0x162c10: 0xa226009b  sb          $a2, 0x9B($s1)
    ctx->pc = 0x162c10u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 155), (uint8_t)GPR_U32(ctx, 6));
    // 0x162c14: 0x92230098  lbu         $v1, 0x98($s1)
    ctx->pc = 0x162c14u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 152)));
    // 0x162c18: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x162c18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x162c1c: 0xa223009a  sb          $v1, 0x9A($s1)
    ctx->pc = 0x162c1cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 154), (uint8_t)GPR_U32(ctx, 3));
label_162c20:
    // 0x162c20: 0x9226009b  lbu         $a2, 0x9B($s1)
    ctx->pc = 0x162c20u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 155)));
    // 0x162c24: 0x8e25009c  lw          $a1, 0x9C($s1)
    ctx->pc = 0x162c24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
    // 0x162c28: 0x3c03ff00  lui         $v1, 0xFF00
    ctx->pc = 0x162c28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65280 << 16));
    // 0x162c2c: 0x8e240020  lw          $a0, 0x20($s1)
    ctx->pc = 0x162c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x162c30: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x162c30u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x162c34: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x162c34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x162c38: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x162c38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x162c3c: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x162c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x162c40: 0x4223c  dsll32      $a0, $a0, 8
    ctx->pc = 0x162c40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 8));
    // 0x162c44: 0x4223e  dsrl32      $a0, $a0, 8
    ctx->pc = 0x162c44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 8));
    // 0x162c48: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x162c48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x162c4c: 0xae230020  sw          $v1, 0x20($s1)
    ctx->pc = 0x162c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 3));
label_162c50:
    // 0x162c50: 0x92240030  lbu         $a0, 0x30($s1)
    ctx->pc = 0x162c50u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x162c54: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x162c54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x162c58: 0x10830181  beq         $a0, $v1, . + 4 + (0x181 << 2)
    ctx->pc = 0x162C58u;
    {
        const bool branch_taken_0x162c58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x162C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162C58u;
        // 0x162c5c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162c58) {
            ctx->pc = 0x163260u;
            goto label_163260;
        }
    }
    ctx->pc = 0x162C60u;
    // 0x162c60: 0x1083013b  beq         $a0, $v1, . + 4 + (0x13B << 2)
    ctx->pc = 0x162C60u;
    {
        const bool branch_taken_0x162c60 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x162c60) {
            ctx->pc = 0x163150u;
            goto label_163150;
        }
    }
    ctx->pc = 0x162C68u;
    // 0x162c68: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x162c68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x162c6c: 0x10830068  beq         $a0, $v1, . + 4 + (0x68 << 2)
    ctx->pc = 0x162C6Cu;
    {
        const bool branch_taken_0x162c6c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x162c6c) {
            ctx->pc = 0x162E10u;
            goto label_162e10;
        }
    }
    ctx->pc = 0x162C74u;
    // 0x162c74: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x162C74u;
    {
        const bool branch_taken_0x162c74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x162c74) {
            ctx->pc = 0x162C88u;
            goto label_162c88;
        }
    }
    ctx->pc = 0x162C7Cu;
    // 0x162c7c: 0x1000017c  b           . + 4 + (0x17C << 2)
    ctx->pc = 0x162C7Cu;
    {
        const bool branch_taken_0x162c7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x162c7c) {
            ctx->pc = 0x163270u;
            goto label_163270;
        }
    }
    ctx->pc = 0x162C84u;
    // 0x162c84: 0x0  nop
    ctx->pc = 0x162c84u;
    // NOP
label_162c88:
    // 0x162c88: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x162c88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x162c8c: 0x8c24f008  lw          $a0, -0xFF8($at)
    ctx->pc = 0x162c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x81F008u));
    // 0x162c90: 0x3c03873c  lui         $v1, 0x873C
    ctx->pc = 0x162c90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34620 << 16));
    // 0x162c94: 0x3463a9e5  ori         $v1, $v1, 0xA9E5
    ctx->pc = 0x162c94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43493);
    // 0x162c98: 0x42840  sll         $a1, $a0, 1
    ctx->pc = 0x162c98u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x162c9c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x162c9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x162ca0: 0x427c2  srl         $a0, $a0, 31
    ctx->pc = 0x162ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x162ca4: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x162ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x162ca8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x162ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x162cac: 0x831826  xor         $v1, $a0, $v1
    ctx->pc = 0x162cacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 3));
    // 0x162cb0: 0xac23f008  sw          $v1, -0xFF8($at)
    ctx->pc = 0x162cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963208), GPR_U32(ctx, 3));
    // 0x162cb4: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x162cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x162cb8: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x162cb8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x162cbc: 0x8e230090  lw          $v1, 0x90($s1)
    ctx->pc = 0x162cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x162cc0: 0x9467003a  lhu         $a3, 0x3A($v1)
    ctx->pc = 0x162cc0u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 58)));
    // 0x162cc4: 0x30e3f000  andi        $v1, $a3, 0xF000
    ctx->pc = 0x162cc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)61440);
    // 0x162cc8: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x162CC8u;
    {
        const bool branch_taken_0x162cc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x162CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162CC8u;
        // 0x162ccc: 0x30e30fff  andi        $v1, $a3, 0xFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4095);
        ctx->in_delay_slot = false;
        if (branch_taken_0x162cc8) {
            ctx->pc = 0x162CF8u;
            goto label_162cf8;
        }
    }
    ctx->pc = 0x162CD0u;
    // 0x162cd0: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x162cd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x162cd4: 0x72b03  sra         $a1, $a3, 12
    ctx->pc = 0x162cd4u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 7), 12));
    // 0x162cd8: 0xc53023  subu        $a2, $a2, $a1
    ctx->pc = 0x162cd8u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x162cdc: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x162cdcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x162ce0: 0x24050fff  addiu       $a1, $zero, 0xFFF
    ctx->pc = 0x162ce0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4095));
    // 0x162ce4: 0x30e30fff  andi        $v1, $a3, 0xFFF
    ctx->pc = 0x162ce4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4095);
    // 0x162ce8: 0xc52807  srav        $a1, $a1, $a2
    ctx->pc = 0x162ce8u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), GPR_U32(ctx, 6) & 0x1F));
    // 0x162cec: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x162cecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x162cf0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x162cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x162cf4: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x162cf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_162cf8:
    // 0x162cf8: 0xa6230094  sh          $v1, 0x94($s1)
    ctx->pc = 0x162cf8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 148), (uint16_t)GPR_U32(ctx, 3));
    // 0x162cfc: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x162cfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x162d00: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x162d00u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x162d04: 0x1460003e  bnez        $v1, . + 4 + (0x3E << 2)
    ctx->pc = 0x162D04u;
    {
        const bool branch_taken_0x162d04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x162D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162D04u;
        // 0x162d08: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162d04) {
            ctx->pc = 0x162E00u;
            goto label_162e00;
        }
    }
    ctx->pc = 0x162D0Cu;
    // 0x162d0c: 0x3c03873c  lui         $v1, 0x873C
    ctx->pc = 0x162d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34620 << 16));
    // 0x162d10: 0x8c24f008  lw          $a0, -0xFF8($at)
    ctx->pc = 0x162d10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294963208)));
    // 0x162d14: 0x3463a9e5  ori         $v1, $v1, 0xA9E5
    ctx->pc = 0x162d14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43493);
    // 0x162d18: 0x42840  sll         $a1, $a0, 1
    ctx->pc = 0x162d18u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x162d1c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x162d1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x162d20: 0x427c2  srl         $a0, $a0, 31
    ctx->pc = 0x162d20u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x162d24: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x162d24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x162d28: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x162d28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x162d2c: 0x831826  xor         $v1, $a0, $v1
    ctx->pc = 0x162d2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 3));
    // 0x162d30: 0xac23f008  sw          $v1, -0xFF8($at)
    ctx->pc = 0x162d30u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963208), GPR_U32(ctx, 3));
    // 0x162d34: 0x31ac2  srl         $v1, $v1, 11
    ctx->pc = 0x162d34u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 11));
    // 0x162d38: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x162d38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x162d3c: 0x8e230090  lw          $v1, 0x90($s1)
    ctx->pc = 0x162d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x162d40: 0x94670038  lhu         $a3, 0x38($v1)
    ctx->pc = 0x162d40u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x162d44: 0x30e3f000  andi        $v1, $a3, 0xF000
    ctx->pc = 0x162d44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)61440);
    // 0x162d48: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x162D48u;
    {
        const bool branch_taken_0x162d48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x162D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162D48u;
        // 0x162d4c: 0x30e30fff  andi        $v1, $a3, 0xFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4095);
        ctx->in_delay_slot = false;
        if (branch_taken_0x162d48) {
            ctx->pc = 0x162D78u;
            goto label_162d78;
        }
    }
    ctx->pc = 0x162D50u;
    // 0x162d50: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x162d50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x162d54: 0x72b03  sra         $a1, $a3, 12
    ctx->pc = 0x162d54u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 7), 12));
    // 0x162d58: 0xc53023  subu        $a2, $a2, $a1
    ctx->pc = 0x162d58u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x162d5c: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x162d5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x162d60: 0x24050fff  addiu       $a1, $zero, 0xFFF
    ctx->pc = 0x162d60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4095));
    // 0x162d64: 0x30e30fff  andi        $v1, $a3, 0xFFF
    ctx->pc = 0x162d64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4095);
    // 0x162d68: 0xc52807  srav        $a1, $a1, $a2
    ctx->pc = 0x162d68u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), GPR_U32(ctx, 6) & 0x1F));
    // 0x162d6c: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x162d6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x162d70: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x162d70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x162d74: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x162d74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_162d78:
    // 0x162d78: 0xa6230094  sh          $v1, 0x94($s1)
    ctx->pc = 0x162d78u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 148), (uint16_t)GPR_U32(ctx, 3));
    // 0x162d7c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x162d7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x162d80: 0x8c24f008  lw          $a0, -0xFF8($at)
    ctx->pc = 0x162d80u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x81F008u));
    // 0x162d84: 0x3c03873c  lui         $v1, 0x873C
    ctx->pc = 0x162d84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34620 << 16));
    // 0x162d88: 0x3463a9e5  ori         $v1, $v1, 0xA9E5
    ctx->pc = 0x162d88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43493);
    // 0x162d8c: 0x42840  sll         $a1, $a0, 1
    ctx->pc = 0x162d8cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x162d90: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x162d90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x162d94: 0x427c2  srl         $a0, $a0, 31
    ctx->pc = 0x162d94u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x162d98: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x162d98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x162d9c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x162d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x162da0: 0x831826  xor         $v1, $a0, $v1
    ctx->pc = 0x162da0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 3));
    // 0x162da4: 0xac23f008  sw          $v1, -0xFF8($at)
    ctx->pc = 0x162da4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963208), GPR_U32(ctx, 3));
    // 0x162da8: 0x31b82  srl         $v1, $v1, 14
    ctx->pc = 0x162da8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 14));
    // 0x162dac: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x162dacu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x162db0: 0x8e230090  lw          $v1, 0x90($s1)
    ctx->pc = 0x162db0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x162db4: 0x9467003c  lhu         $a3, 0x3C($v1)
    ctx->pc = 0x162db4u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 60)));
    // 0x162db8: 0x30e3f000  andi        $v1, $a3, 0xF000
    ctx->pc = 0x162db8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)61440);
    // 0x162dbc: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x162DBCu;
    {
        const bool branch_taken_0x162dbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x162DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162DBCu;
        // 0x162dc0: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162dbc) {
            ctx->pc = 0x162DECu;
            goto label_162dec;
        }
    }
    ctx->pc = 0x162DC4u;
    // 0x162dc4: 0x72b03  sra         $a1, $a3, 12
    ctx->pc = 0x162dc4u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 7), 12));
    // 0x162dc8: 0xc53023  subu        $a2, $a2, $a1
    ctx->pc = 0x162dc8u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x162dcc: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x162dccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x162dd0: 0x24050fff  addiu       $a1, $zero, 0xFFF
    ctx->pc = 0x162dd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4095));
    // 0x162dd4: 0x30e30fff  andi        $v1, $a3, 0xFFF
    ctx->pc = 0x162dd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4095);
    // 0x162dd8: 0xc52807  srav        $a1, $a1, $a2
    ctx->pc = 0x162dd8u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), GPR_U32(ctx, 6) & 0x1F));
    // 0x162ddc: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x162ddcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x162de0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x162de0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x162de4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x162DE4u;
    {
        const bool branch_taken_0x162de4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162DE4u;
        // 0x162de8: 0x3063ffff  andi        $v1, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x162de4) {
            ctx->pc = 0x162DF0u;
            goto label_162df0;
        }
    }
    ctx->pc = 0x162DECu;
label_162dec:
    // 0x162dec: 0x30e30fff  andi        $v1, $a3, 0xFFF
    ctx->pc = 0x162decu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4095);
label_162df0:
    // 0x162df0: 0xa6230096  sh          $v1, 0x96($s1)
    ctx->pc = 0x162df0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 150), (uint16_t)GPR_U32(ctx, 3));
    // 0x162df4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x162df4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x162df8: 0x1000011d  b           . + 4 + (0x11D << 2)
    ctx->pc = 0x162DF8u;
    {
        const bool branch_taken_0x162df8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162DF8u;
        // 0x162dfc: 0xa2230030  sb          $v1, 0x30($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 48), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162df8) {
            ctx->pc = 0x163270u;
            goto label_163270;
        }
    }
    ctx->pc = 0x162E00u;
label_162e00:
    // 0x162e00: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x162e00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x162e04: 0x1000011a  b           . + 4 + (0x11A << 2)
    ctx->pc = 0x162E04u;
    {
        const bool branch_taken_0x162e04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162E04u;
        // 0x162e08: 0xa2230030  sb          $v1, 0x30($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 48), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162e04) {
            ctx->pc = 0x163270u;
            goto label_163270;
        }
    }
    ctx->pc = 0x162E0Cu;
    // 0x162e0c: 0x0  nop
    ctx->pc = 0x162e0cu;
    // NOP
label_162e10:
    // 0x162e10: 0x86230096  lh          $v1, 0x96($s1)
    ctx->pc = 0x162e10u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 150)));
    // 0x162e14: 0x14600056  bnez        $v1, . + 4 + (0x56 << 2)
    ctx->pc = 0x162E14u;
    {
        const bool branch_taken_0x162e14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x162E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162E14u;
        // 0x162e18: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162e14) {
            ctx->pc = 0x162F70u;
            goto label_162f70;
        }
    }
    ctx->pc = 0x162E1Cu;
    // 0x162e1c: 0x3c02873c  lui         $v0, 0x873C
    ctx->pc = 0x162e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34620 << 16));
    // 0x162e20: 0x8c23f008  lw          $v1, -0xFF8($at)
    ctx->pc = 0x162e20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294963208)));
    // 0x162e24: 0x3442a9e5  ori         $v0, $v0, 0xA9E5
    ctx->pc = 0x162e24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43493);
    // 0x162e28: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x162e28u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x162e2c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x162e2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x162e30: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x162e30u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x162e34: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x162e34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x162e38: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x162e38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x162e3c: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x162e3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x162e40: 0xac22f008  sw          $v0, -0xFF8($at)
    ctx->pc = 0x162e40u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963208), GPR_U32(ctx, 2));
    // 0x162e44: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x162e44u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x162e48: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x162e48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x162e4c: 0x8e220090  lw          $v0, 0x90($s1)
    ctx->pc = 0x162e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x162e50: 0x9446002e  lhu         $a2, 0x2E($v0)
    ctx->pc = 0x162e50u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 46)));
    // 0x162e54: 0x30c2f000  andi        $v0, $a2, 0xF000
    ctx->pc = 0x162e54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)61440);
    // 0x162e58: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x162E58u;
    {
        const bool branch_taken_0x162e58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x162E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162E58u;
        // 0x162e5c: 0x30c20fff  andi        $v0, $a2, 0xFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)4095);
        ctx->in_delay_slot = false;
        if (branch_taken_0x162e58) {
            ctx->pc = 0x162E88u;
            goto label_162e88;
        }
    }
    ctx->pc = 0x162E60u;
    // 0x162e60: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x162e60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x162e64: 0x62303  sra         $a0, $a2, 12
    ctx->pc = 0x162e64u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 6), 12));
    // 0x162e68: 0xa42823  subu        $a1, $a1, $a0
    ctx->pc = 0x162e68u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x162e6c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x162e6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x162e70: 0x24040fff  addiu       $a0, $zero, 0xFFF
    ctx->pc = 0x162e70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4095));
    // 0x162e74: 0x30c20fff  andi        $v0, $a2, 0xFFF
    ctx->pc = 0x162e74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)4095);
    // 0x162e78: 0xa42007  srav        $a0, $a0, $a1
    ctx->pc = 0x162e78u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 5) & 0x1F));
    // 0x162e7c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x162e7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x162e80: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x162e80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x162e84: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x162e84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_162e88:
    // 0x162e88: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x162e88u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x162e8c: 0x16000002  bnez        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x162E8Cu;
    {
        const bool branch_taken_0x162e8c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x162e8c) {
            ctx->pc = 0x162E98u;
            goto label_162e98;
        }
    }
    ctx->pc = 0x162E94u;
    // 0x162e94: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x162e94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_162e98:
    // 0x162e98: 0x92270001  lbu         $a3, 0x1($s1)
    ctx->pc = 0x162e98u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x162e9c: 0x92260000  lbu         $a2, 0x0($s1)
    ctx->pc = 0x162e9cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x162ea0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x162ea0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x162ea4: 0x9e230004  lwu         $v1, 0x4($s1)
    ctx->pc = 0x162ea4u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x162ea8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x162ea8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x162eac: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x162eacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x162eb0: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x162eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
    // 0x162eb4: 0x3c053003  lui         $a1, 0x3003
    ctx->pc = 0x162eb4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)12291 << 16));
    // 0x162eb8: 0x24846690  addiu       $a0, $a0, 0x6690
    ctx->pc = 0x162eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26256));
    // 0x162ebc: 0x73a38  dsll        $a3, $a3, 8
    ctx->pc = 0x162ebcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 8);
    // 0x162ec0: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x162ec0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x162ec4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x162ec4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x162ec8: 0xc52825  or          $a1, $a2, $a1
    ctx->pc = 0x162ec8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x162ecc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x162eccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x162ed0: 0xc05db84  jal         func_176E10
    ctx->pc = 0x162ED0u;
    SET_GPR_U32(ctx, 31, 0x162ED8u);
    ctx->pc = 0x162ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162ED0u;
    // 0x162ed4: 0x452825  or          $a1, $v0, $a1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x176E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176E10u, 0x162ED0u, 0x162ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162ED8u;
label_162ed8:
    // 0x162ed8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x162ED8u;
    {
        const bool branch_taken_0x162ed8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x162EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162ED8u;
        // 0x162edc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162ed8) {
            ctx->pc = 0x162EE8u;
            goto label_162ee8;
        }
    }
    ctx->pc = 0x162EE0u;
    // 0x162ee0: 0xc059318  jal         func_164C60
    ctx->pc = 0x162EE0u;
    SET_GPR_U32(ctx, 31, 0x162EE8u);
    ctx->pc = 0x162EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162EE0u;
    // 0x162ee4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164C60u, 0x162EE0u, 0x162EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162EE8u;
label_162ee8:
    // 0x162ee8: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x162ee8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x162eec: 0x1600ffea  bnez        $s0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x162EECu;
    {
        const bool branch_taken_0x162eec = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x162EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162EECu;
        // 0x162ef0: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162eec) {
            ctx->pc = 0x162E98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_162e98;
        }
    }
    ctx->pc = 0x162EF4u;
    // 0x162ef4: 0x3c02873c  lui         $v0, 0x873C
    ctx->pc = 0x162ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34620 << 16));
    // 0x162ef8: 0x8c23f008  lw          $v1, -0xFF8($at)
    ctx->pc = 0x162ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294963208)));
    // 0x162efc: 0x3442a9e5  ori         $v0, $v0, 0xA9E5
    ctx->pc = 0x162efcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43493);
    // 0x162f00: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x162f00u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x162f04: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x162f04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x162f08: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x162f08u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x162f0c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x162f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x162f10: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x162f10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x162f14: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x162f14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x162f18: 0xac22f008  sw          $v0, -0xFF8($at)
    ctx->pc = 0x162f18u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963208), GPR_U32(ctx, 2));
    // 0x162f1c: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x162f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x162f20: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x162f20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x162f24: 0x8e220090  lw          $v0, 0x90($s1)
    ctx->pc = 0x162f24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x162f28: 0x9446003c  lhu         $a2, 0x3C($v0)
    ctx->pc = 0x162f28u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x162f2c: 0x30c2f000  andi        $v0, $a2, 0xF000
    ctx->pc = 0x162f2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)61440);
    // 0x162f30: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x162F30u;
    {
        const bool branch_taken_0x162f30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x162F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162F30u;
        // 0x162f34: 0x30c20fff  andi        $v0, $a2, 0xFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)4095);
        ctx->in_delay_slot = false;
        if (branch_taken_0x162f30) {
            ctx->pc = 0x162F60u;
            goto label_162f60;
        }
    }
    ctx->pc = 0x162F38u;
    // 0x162f38: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x162f38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x162f3c: 0x62303  sra         $a0, $a2, 12
    ctx->pc = 0x162f3cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 6), 12));
    // 0x162f40: 0xa42823  subu        $a1, $a1, $a0
    ctx->pc = 0x162f40u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x162f44: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x162f44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x162f48: 0x24040fff  addiu       $a0, $zero, 0xFFF
    ctx->pc = 0x162f48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4095));
    // 0x162f4c: 0x30c20fff  andi        $v0, $a2, 0xFFF
    ctx->pc = 0x162f4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)4095);
    // 0x162f50: 0xa42007  srav        $a0, $a0, $a1
    ctx->pc = 0x162f50u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 5) & 0x1F));
    // 0x162f54: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x162f54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x162f58: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x162f58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x162f5c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x162f5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_162f60:
    // 0x162f60: 0xa6220096  sh          $v0, 0x96($s1)
    ctx->pc = 0x162f60u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 150), (uint16_t)GPR_U32(ctx, 2));
    // 0x162f64: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x162F64u;
    {
        const bool branch_taken_0x162f64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162F64u;
        // 0x162f68: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162f64) {
            ctx->pc = 0x162F78u;
            goto label_162f78;
        }
    }
    ctx->pc = 0x162F6Cu;
    // 0x162f6c: 0x0  nop
    ctx->pc = 0x162f6cu;
    // NOP
label_162f70:
    // 0x162f70: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x162f70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x162f74: 0xa6230096  sh          $v1, 0x96($s1)
    ctx->pc = 0x162f74u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 150), (uint16_t)GPR_U32(ctx, 3));
label_162f78:
    // 0x162f78: 0x8e230090  lw          $v1, 0x90($s1)
    ctx->pc = 0x162f78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x162f7c: 0x94630030  lhu         $v1, 0x30($v1)
    ctx->pc = 0x162f7cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x162f80: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x162F80u;
    {
        const bool branch_taken_0x162f80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x162f80) {
            ctx->pc = 0x162FB0u;
            goto label_162fb0;
        }
    }
    ctx->pc = 0x162F88u;
    // 0x162f88: 0x962400a0  lhu         $a0, 0xA0($s1)
    ctx->pc = 0x162f88u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 160)));
    // 0x162f8c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x162f8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x162f90: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x162f90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x162f94: 0xa62400a0  sh          $a0, 0xA0($s1)
    ctx->pc = 0x162f94u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 160), (uint16_t)GPR_U32(ctx, 4));
    // 0x162f98: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x162f98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x162f9c: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x162F9Cu;
    {
        const bool branch_taken_0x162f9c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x162f9c) {
            ctx->pc = 0x162FB0u;
            goto label_162fb0;
        }
    }
    ctx->pc = 0x162FA4u;
    // 0x162fa4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x162fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x162fa8: 0x100000b1  b           . + 4 + (0xB1 << 2)
    ctx->pc = 0x162FA8u;
    {
        const bool branch_taken_0x162fa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162FA8u;
        // 0x162fac: 0xa2230030  sb          $v1, 0x30($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 48), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162fa8) {
            ctx->pc = 0x163270u;
            goto label_163270;
        }
    }
    ctx->pc = 0x162FB0u;
label_162fb0:
    // 0x162fb0: 0x86230094  lh          $v1, 0x94($s1)
    ctx->pc = 0x162fb0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 148)));
    // 0x162fb4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x162fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x162fb8: 0xa6230094  sh          $v1, 0x94($s1)
    ctx->pc = 0x162fb8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 148), (uint16_t)GPR_U32(ctx, 3));
    // 0x162fbc: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x162fbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x162fc0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x162fc0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x162fc4: 0x1c6000aa  bgtz        $v1, . + 4 + (0xAA << 2)
    ctx->pc = 0x162FC4u;
    {
        const bool branch_taken_0x162fc4 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x162FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162FC4u;
        // 0x162fc8: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162fc4) {
            ctx->pc = 0x163270u;
            goto label_163270;
        }
    }
    ctx->pc = 0x162FCCu;
    // 0x162fcc: 0x3c03873c  lui         $v1, 0x873C
    ctx->pc = 0x162fccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34620 << 16));
    // 0x162fd0: 0x8c24f008  lw          $a0, -0xFF8($at)
    ctx->pc = 0x162fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294963208)));
    // 0x162fd4: 0x3463a9e5  ori         $v1, $v1, 0xA9E5
    ctx->pc = 0x162fd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43493);
    // 0x162fd8: 0x42840  sll         $a1, $a0, 1
    ctx->pc = 0x162fd8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x162fdc: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x162fdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x162fe0: 0x427c2  srl         $a0, $a0, 31
    ctx->pc = 0x162fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x162fe4: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x162fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x162fe8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x162fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x162fec: 0x831826  xor         $v1, $a0, $v1
    ctx->pc = 0x162fecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 3));
    // 0x162ff0: 0xac23f008  sw          $v1, -0xFF8($at)
    ctx->pc = 0x162ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963208), GPR_U32(ctx, 3));
    // 0x162ff4: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x162ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x162ff8: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x162ff8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x162ffc: 0x8e230090  lw          $v1, 0x90($s1)
    ctx->pc = 0x162ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x163000: 0x9467003a  lhu         $a3, 0x3A($v1)
    ctx->pc = 0x163000u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 58)));
    // 0x163004: 0x30e3f000  andi        $v1, $a3, 0xF000
    ctx->pc = 0x163004u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)61440);
    // 0x163008: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x163008u;
    {
        const bool branch_taken_0x163008 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16300Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163008u;
        // 0x16300c: 0x30e30fff  andi        $v1, $a3, 0xFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4095);
        ctx->in_delay_slot = false;
        if (branch_taken_0x163008) {
            ctx->pc = 0x163038u;
            goto label_163038;
        }
    }
    ctx->pc = 0x163010u;
    // 0x163010: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x163010u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x163014: 0x72b03  sra         $a1, $a3, 12
    ctx->pc = 0x163014u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 7), 12));
    // 0x163018: 0xc53023  subu        $a2, $a2, $a1
    ctx->pc = 0x163018u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x16301c: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x16301cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x163020: 0x24050fff  addiu       $a1, $zero, 0xFFF
    ctx->pc = 0x163020u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4095));
    // 0x163024: 0x30e30fff  andi        $v1, $a3, 0xFFF
    ctx->pc = 0x163024u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4095);
    // 0x163028: 0xc52807  srav        $a1, $a1, $a2
    ctx->pc = 0x163028u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), GPR_U32(ctx, 6) & 0x1F));
    // 0x16302c: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x16302cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x163030: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x163030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x163034: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x163034u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_163038:
    // 0x163038: 0xa6230094  sh          $v1, 0x94($s1)
    ctx->pc = 0x163038u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 148), (uint16_t)GPR_U32(ctx, 3));
    // 0x16303c: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x16303cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x163040: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x163040u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x163044: 0x1460003e  bnez        $v1, . + 4 + (0x3E << 2)
    ctx->pc = 0x163044u;
    {
        const bool branch_taken_0x163044 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x163048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163044u;
        // 0x163048: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163044) {
            ctx->pc = 0x163140u;
            goto label_163140;
        }
    }
    ctx->pc = 0x16304Cu;
    // 0x16304c: 0x3c03873c  lui         $v1, 0x873C
    ctx->pc = 0x16304cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34620 << 16));
    // 0x163050: 0x8c24f008  lw          $a0, -0xFF8($at)
    ctx->pc = 0x163050u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294963208)));
    // 0x163054: 0x3463a9e5  ori         $v1, $v1, 0xA9E5
    ctx->pc = 0x163054u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43493);
    // 0x163058: 0x42840  sll         $a1, $a0, 1
    ctx->pc = 0x163058u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x16305c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x16305cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x163060: 0x427c2  srl         $a0, $a0, 31
    ctx->pc = 0x163060u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x163064: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x163064u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x163068: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x163068u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x16306c: 0x831826  xor         $v1, $a0, $v1
    ctx->pc = 0x16306cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 3));
    // 0x163070: 0xac23f008  sw          $v1, -0xFF8($at)
    ctx->pc = 0x163070u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963208), GPR_U32(ctx, 3));
    // 0x163074: 0x31ac2  srl         $v1, $v1, 11
    ctx->pc = 0x163074u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 11));
    // 0x163078: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x163078u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x16307c: 0x8e230090  lw          $v1, 0x90($s1)
    ctx->pc = 0x16307cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x163080: 0x94670038  lhu         $a3, 0x38($v1)
    ctx->pc = 0x163080u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x163084: 0x30e3f000  andi        $v1, $a3, 0xF000
    ctx->pc = 0x163084u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)61440);
    // 0x163088: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x163088u;
    {
        const bool branch_taken_0x163088 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16308Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163088u;
        // 0x16308c: 0x30e30fff  andi        $v1, $a3, 0xFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4095);
        ctx->in_delay_slot = false;
        if (branch_taken_0x163088) {
            ctx->pc = 0x1630B8u;
            goto label_1630b8;
        }
    }
    ctx->pc = 0x163090u;
    // 0x163090: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x163090u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x163094: 0x72b03  sra         $a1, $a3, 12
    ctx->pc = 0x163094u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 7), 12));
    // 0x163098: 0xc53023  subu        $a2, $a2, $a1
    ctx->pc = 0x163098u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x16309c: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x16309cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x1630a0: 0x24050fff  addiu       $a1, $zero, 0xFFF
    ctx->pc = 0x1630a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4095));
    // 0x1630a4: 0x30e30fff  andi        $v1, $a3, 0xFFF
    ctx->pc = 0x1630a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4095);
    // 0x1630a8: 0xc52807  srav        $a1, $a1, $a2
    ctx->pc = 0x1630a8u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), GPR_U32(ctx, 6) & 0x1F));
    // 0x1630ac: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x1630acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x1630b0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1630b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1630b4: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1630b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_1630b8:
    // 0x1630b8: 0xa6230094  sh          $v1, 0x94($s1)
    ctx->pc = 0x1630b8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 148), (uint16_t)GPR_U32(ctx, 3));
    // 0x1630bc: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1630bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1630c0: 0x8c24f008  lw          $a0, -0xFF8($at)
    ctx->pc = 0x1630c0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x81F008u));
    // 0x1630c4: 0x3c03873c  lui         $v1, 0x873C
    ctx->pc = 0x1630c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34620 << 16));
    // 0x1630c8: 0x3463a9e5  ori         $v1, $v1, 0xA9E5
    ctx->pc = 0x1630c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43493);
    // 0x1630cc: 0x42840  sll         $a1, $a0, 1
    ctx->pc = 0x1630ccu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1630d0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1630d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1630d4: 0x427c2  srl         $a0, $a0, 31
    ctx->pc = 0x1630d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x1630d8: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x1630d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1630dc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1630dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1630e0: 0x831826  xor         $v1, $a0, $v1
    ctx->pc = 0x1630e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 3));
    // 0x1630e4: 0xac23f008  sw          $v1, -0xFF8($at)
    ctx->pc = 0x1630e4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963208), GPR_U32(ctx, 3));
    // 0x1630e8: 0x31b82  srl         $v1, $v1, 14
    ctx->pc = 0x1630e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 14));
    // 0x1630ec: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x1630ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1630f0: 0x8e230090  lw          $v1, 0x90($s1)
    ctx->pc = 0x1630f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x1630f4: 0x9467003c  lhu         $a3, 0x3C($v1)
    ctx->pc = 0x1630f4u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 60)));
    // 0x1630f8: 0x30e3f000  andi        $v1, $a3, 0xF000
    ctx->pc = 0x1630f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)61440);
    // 0x1630fc: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1630FCu;
    {
        const bool branch_taken_0x1630fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x163100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1630FCu;
        // 0x163100: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1630fc) {
            ctx->pc = 0x16312Cu;
            goto label_16312c;
        }
    }
    ctx->pc = 0x163104u;
    // 0x163104: 0x72b03  sra         $a1, $a3, 12
    ctx->pc = 0x163104u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 7), 12));
    // 0x163108: 0xc53023  subu        $a2, $a2, $a1
    ctx->pc = 0x163108u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x16310c: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x16310cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x163110: 0x24050fff  addiu       $a1, $zero, 0xFFF
    ctx->pc = 0x163110u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4095));
    // 0x163114: 0x30e30fff  andi        $v1, $a3, 0xFFF
    ctx->pc = 0x163114u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4095);
    // 0x163118: 0xc52807  srav        $a1, $a1, $a2
    ctx->pc = 0x163118u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), GPR_U32(ctx, 6) & 0x1F));
    // 0x16311c: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x16311cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x163120: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x163120u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x163124: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x163124u;
    {
        const bool branch_taken_0x163124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163124u;
        // 0x163128: 0x3063ffff  andi        $v1, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x163124) {
            ctx->pc = 0x163130u;
            goto label_163130;
        }
    }
    ctx->pc = 0x16312Cu;
label_16312c:
    // 0x16312c: 0x30e30fff  andi        $v1, $a3, 0xFFF
    ctx->pc = 0x16312cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4095);
label_163130:
    // 0x163130: 0xa6230096  sh          $v1, 0x96($s1)
    ctx->pc = 0x163130u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 150), (uint16_t)GPR_U32(ctx, 3));
    // 0x163134: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x163134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x163138: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x163138u;
    {
        const bool branch_taken_0x163138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16313Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163138u;
        // 0x16313c: 0xa2230030  sb          $v1, 0x30($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 48), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163138) {
            ctx->pc = 0x163270u;
            goto label_163270;
        }
    }
    ctx->pc = 0x163140u;
label_163140:
    // 0x163140: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x163140u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x163144: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x163144u;
    {
        const bool branch_taken_0x163144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163144u;
        // 0x163148: 0xa2230030  sb          $v1, 0x30($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 48), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163144) {
            ctx->pc = 0x163270u;
            goto label_163270;
        }
    }
    ctx->pc = 0x16314Cu;
    // 0x16314c: 0x0  nop
    ctx->pc = 0x16314cu;
    // NOP
label_163150:
    // 0x163150: 0x86230094  lh          $v1, 0x94($s1)
    ctx->pc = 0x163150u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 148)));
    // 0x163154: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x163154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x163158: 0xa6230094  sh          $v1, 0x94($s1)
    ctx->pc = 0x163158u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 148), (uint16_t)GPR_U32(ctx, 3));
    // 0x16315c: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x16315cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x163160: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x163160u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x163164: 0x1c600042  bgtz        $v1, . + 4 + (0x42 << 2)
    ctx->pc = 0x163164u;
    {
        const bool branch_taken_0x163164 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x163168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163164u;
        // 0x163168: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163164) {
            ctx->pc = 0x163270u;
            goto label_163270;
        }
    }
    ctx->pc = 0x16316Cu;
    // 0x16316c: 0x3c03873c  lui         $v1, 0x873C
    ctx->pc = 0x16316cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34620 << 16));
    // 0x163170: 0x8c24f008  lw          $a0, -0xFF8($at)
    ctx->pc = 0x163170u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294963208)));
    // 0x163174: 0x3463a9e5  ori         $v1, $v1, 0xA9E5
    ctx->pc = 0x163174u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43493);
    // 0x163178: 0x42840  sll         $a1, $a0, 1
    ctx->pc = 0x163178u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x16317c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x16317cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x163180: 0x427c2  srl         $a0, $a0, 31
    ctx->pc = 0x163180u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x163184: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x163184u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x163188: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x163188u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x16318c: 0x831826  xor         $v1, $a0, $v1
    ctx->pc = 0x16318cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 3));
    // 0x163190: 0xac23f008  sw          $v1, -0xFF8($at)
    ctx->pc = 0x163190u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963208), GPR_U32(ctx, 3));
    // 0x163194: 0x31ac2  srl         $v1, $v1, 11
    ctx->pc = 0x163194u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 11));
    // 0x163198: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x163198u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x16319c: 0x8e230090  lw          $v1, 0x90($s1)
    ctx->pc = 0x16319cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x1631a0: 0x94670038  lhu         $a3, 0x38($v1)
    ctx->pc = 0x1631a0u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x1631a4: 0x30e3f000  andi        $v1, $a3, 0xF000
    ctx->pc = 0x1631a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)61440);
    // 0x1631a8: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1631A8u;
    {
        const bool branch_taken_0x1631a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1631ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1631A8u;
        // 0x1631ac: 0x30e30fff  andi        $v1, $a3, 0xFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4095);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1631a8) {
            ctx->pc = 0x1631D8u;
            goto label_1631d8;
        }
    }
    ctx->pc = 0x1631B0u;
    // 0x1631b0: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x1631b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1631b4: 0x72b03  sra         $a1, $a3, 12
    ctx->pc = 0x1631b4u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 7), 12));
    // 0x1631b8: 0xc53023  subu        $a2, $a2, $a1
    ctx->pc = 0x1631b8u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1631bc: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x1631bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x1631c0: 0x24050fff  addiu       $a1, $zero, 0xFFF
    ctx->pc = 0x1631c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4095));
    // 0x1631c4: 0x30e30fff  andi        $v1, $a3, 0xFFF
    ctx->pc = 0x1631c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4095);
    // 0x1631c8: 0xc52807  srav        $a1, $a1, $a2
    ctx->pc = 0x1631c8u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), GPR_U32(ctx, 6) & 0x1F));
    // 0x1631cc: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x1631ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x1631d0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1631d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1631d4: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1631d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_1631d8:
    // 0x1631d8: 0xa6230094  sh          $v1, 0x94($s1)
    ctx->pc = 0x1631d8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 148), (uint16_t)GPR_U32(ctx, 3));
    // 0x1631dc: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1631dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1631e0: 0x8c24f008  lw          $a0, -0xFF8($at)
    ctx->pc = 0x1631e0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x81F008u));
    // 0x1631e4: 0x3c03873c  lui         $v1, 0x873C
    ctx->pc = 0x1631e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34620 << 16));
    // 0x1631e8: 0x3463a9e5  ori         $v1, $v1, 0xA9E5
    ctx->pc = 0x1631e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43493);
    // 0x1631ec: 0x42840  sll         $a1, $a0, 1
    ctx->pc = 0x1631ecu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1631f0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1631f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1631f4: 0x427c2  srl         $a0, $a0, 31
    ctx->pc = 0x1631f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x1631f8: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x1631f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1631fc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1631fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x163200: 0x831826  xor         $v1, $a0, $v1
    ctx->pc = 0x163200u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 3));
    // 0x163204: 0xac23f008  sw          $v1, -0xFF8($at)
    ctx->pc = 0x163204u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963208), GPR_U32(ctx, 3));
    // 0x163208: 0x31b82  srl         $v1, $v1, 14
    ctx->pc = 0x163208u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 14));
    // 0x16320c: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x16320cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x163210: 0x8e230090  lw          $v1, 0x90($s1)
    ctx->pc = 0x163210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x163214: 0x9467003c  lhu         $a3, 0x3C($v1)
    ctx->pc = 0x163214u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 60)));
    // 0x163218: 0x30e3f000  andi        $v1, $a3, 0xF000
    ctx->pc = 0x163218u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)61440);
    // 0x16321c: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x16321Cu;
    {
        const bool branch_taken_0x16321c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x163220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16321Cu;
        // 0x163220: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16321c) {
            ctx->pc = 0x16324Cu;
            goto label_16324c;
        }
    }
    ctx->pc = 0x163224u;
    // 0x163224: 0x72b03  sra         $a1, $a3, 12
    ctx->pc = 0x163224u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 7), 12));
    // 0x163228: 0xc53023  subu        $a2, $a2, $a1
    ctx->pc = 0x163228u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x16322c: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x16322cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x163230: 0x24050fff  addiu       $a1, $zero, 0xFFF
    ctx->pc = 0x163230u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4095));
    // 0x163234: 0x30e30fff  andi        $v1, $a3, 0xFFF
    ctx->pc = 0x163234u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4095);
    // 0x163238: 0xc52807  srav        $a1, $a1, $a2
    ctx->pc = 0x163238u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), GPR_U32(ctx, 6) & 0x1F));
    // 0x16323c: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x16323cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x163240: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x163240u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x163244: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x163244u;
    {
        const bool branch_taken_0x163244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163244u;
        // 0x163248: 0x3063ffff  andi        $v1, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x163244) {
            ctx->pc = 0x163250u;
            goto label_163250;
        }
    }
    ctx->pc = 0x16324Cu;
label_16324c:
    // 0x16324c: 0x30e30fff  andi        $v1, $a3, 0xFFF
    ctx->pc = 0x16324cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4095);
label_163250:
    // 0x163250: 0xa6230096  sh          $v1, 0x96($s1)
    ctx->pc = 0x163250u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 150), (uint16_t)GPR_U32(ctx, 3));
    // 0x163254: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x163254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x163258: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x163258u;
    {
        const bool branch_taken_0x163258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16325Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163258u;
        // 0x16325c: 0xa2230030  sb          $v1, 0x30($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 48), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163258) {
            ctx->pc = 0x163270u;
            goto label_163270;
        }
    }
    ctx->pc = 0x163260u;
label_163260:
    // 0x163260: 0x96230010  lhu         $v1, 0x10($s1)
    ctx->pc = 0x163260u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x163264: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x163264u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x163268: 0xa6230010  sh          $v1, 0x10($s1)
    ctx->pc = 0x163268u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 16), (uint16_t)GPR_U32(ctx, 3));
    // 0x16326c: 0x0  nop
    ctx->pc = 0x16326cu;
    // NOP
label_163270:
    // 0x163270: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x163270u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x163274: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x163274u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x163278: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x163278u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16327c: 0x3e00008  jr          $ra
    ctx->pc = 0x16327Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x163280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16327Cu;
        // 0x163280: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16327Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x163284u;
}
