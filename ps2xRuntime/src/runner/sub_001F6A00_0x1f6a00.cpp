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

// Function: sub_001F6A00
// Address: 0x1f6a00 - 0x1f99e0
void sub_001F6A00_0x1f6a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F6A00_0x1f6a00");
#endif

    switch (ctx->pc) {
        case 0x1f7260u: goto label_1f7260;
        case 0x1f7748u: goto label_1f7748;
        case 0x1f7840u: goto label_1f7840;
        case 0x1f7938u: goto label_1f7938;
        case 0x1f79f0u: goto label_1f79f0;
        case 0x1f7a1cu: goto label_1f7a1c;
        case 0x1f85f8u: goto label_1f85f8;
        case 0x1f8618u: goto label_1f8618;
        case 0x1f9358u: goto label_1f9358;
        case 0x1f9360u: goto label_1f9360;
        default: break;
    }

    ctx->pc = 0x1f6a00u;

    // 0x1f6a00: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1f6a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1f6a04: 0x2403fffc  addiu       $v1, $zero, -0x4
    ctx->pc = 0x1f6a04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x1f6a08: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1f6a08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1f6a0c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1f6a0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1f6a10: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1f6a10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1f6a14: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1f6a14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1f6a18: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1f6a18u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6a1c: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x1f6a1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x1f6a20: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x1f6a20u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6a24: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f6a24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f6a28: 0x26b40160  addiu       $s4, $s5, 0x160
    ctx->pc = 0x1f6a28u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 21), 352));
    // 0x1f6a2c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1f6a2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1f6a30: 0x2c38824  and         $s1, $s6, $v1
    ctx->pc = 0x1f6a30u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 22) & GPR_U64(ctx, 3));
    // 0x1f6a34: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x1f6a34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x1f6a38: 0x2d12023  subu        $a0, $s6, $s1
    ctx->pc = 0x1f6a38u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 17)));
    // 0x1f6a3c: 0x498c0  sll         $s3, $a0, 3
    ctx->pc = 0x1f6a3cu;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1f6a40: 0x8e820438  lw          $v0, 0x438($s4)
    ctx->pc = 0x1f6a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1080)));
    // 0x1f6a44: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f6a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f6a48: 0xae820438  sw          $v0, 0x438($s4)
    ctx->pc = 0x1f6a48u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1080), GPR_U32(ctx, 2));
    // 0x1f6a4c: 0x82320000  lb          $s2, 0x0($s1)
    ctx->pc = 0x1f6a4cu;
    SET_GPR_S32(ctx, 18, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f6a50: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f6a50u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f6a54: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1f6a54u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f6a58: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f6a58u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f6a5c: 0x92240000  lbu         $a0, 0x0($s1)
    ctx->pc = 0x1f6a5cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f6a60: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f6a60u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f6a64: 0x92250000  lbu         $a1, 0x0($s1)
    ctx->pc = 0x1f6a64u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f6a68: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f6a68u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f6a6c: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x1f6a6cu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f6a70: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f6a70u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f6a74: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1f6a74u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f6a78: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f6a78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f6a7c: 0x129200  sll         $s2, $s2, 8
    ctx->pc = 0x1f6a7cu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 8));
    // 0x1f6a80: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f6a80u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f6a84: 0x2439025  or          $s2, $s2, $v1
    ctx->pc = 0x1f6a84u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 3));
    // 0x1f6a88: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1f6a88u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f6a8c: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1f6a8cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1f6a90: 0x129200  sll         $s2, $s2, 8
    ctx->pc = 0x1f6a90u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 8));
    // 0x1f6a94: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f6a94u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f6a98: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f6a98u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f6a9c: 0x2449025  or          $s2, $s2, $a0
    ctx->pc = 0x1f6a9cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 4));
    // 0x1f6aa0: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1f6aa0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f6aa4: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x1f6aa4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1f6aa8: 0x129200  sll         $s2, $s2, 8
    ctx->pc = 0x1f6aa8u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 8));
    // 0x1f6aac: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f6aacu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f6ab0: 0x2459025  or          $s2, $s2, $a1
    ctx->pc = 0x1f6ab0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 5));
    // 0x1f6ab4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f6ab4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f6ab8: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1f6ab8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1f6abc: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F6ABCu;
    {
        const bool branch_taken_0x1f6abc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6ABCu;
        // 0x1f6ac0: 0x2729004  sllv        $s2, $s2, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), GPR_U32(ctx, 19) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6abc) {
            ctx->pc = 0x1F6AE0u;
            goto label_1f6ae0;
        }
    }
    ctx->pc = 0x1F6AC4u;
    // 0x1f6ac4: 0x131023  negu        $v0, $s3
    ctx->pc = 0x1f6ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 19)));
    // 0x1f6ac8: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x1f6ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x1f6acc: 0x2421025  or          $v0, $s2, $v0
    ctx->pc = 0x1f6accu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1f6ad0: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x1f6ad0u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x1f6ad4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F6AD4u;
    {
        const bool branch_taken_0x1f6ad4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6AD4u;
        // 0x1f6ad8: 0xae820034  sw          $v0, 0x34($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6ad4) {
            ctx->pc = 0x1F6AE8u;
            goto label_1f6ae8;
        }
    }
    ctx->pc = 0x1F6ADCu;
    // 0x1f6adc: 0x0  nop
    ctx->pc = 0x1f6adcu;
    // NOP
label_1f6ae0:
    // 0x1f6ae0: 0xae920034  sw          $s2, 0x34($s4)
    ctx->pc = 0x1f6ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 52), GPR_U32(ctx, 18));
    // 0x1f6ae4: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1f6ae4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f6ae8:
    // 0x1f6ae8: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x1f6ae8u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f6aec: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f6aecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f6af0: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1f6af0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f6af4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f6af4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f6af8: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f6af8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f6afc: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1f6afcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f6b00: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1f6b00u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1f6b04: 0x2a62001c  slti        $v0, $s3, 0x1C
    ctx->pc = 0x1f6b04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)28) ? 1 : 0);
    // 0x1f6b08: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f6b08u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f6b0c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f6b0cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f6b10: 0x92240000  lbu         $a0, 0x0($s1)
    ctx->pc = 0x1f6b10u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f6b14: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f6b14u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f6b18: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x1f6b18u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1f6b1c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f6b1cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f6b20: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1F6B20u;
    {
        const bool branch_taken_0x1f6b20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F6B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6B20u;
        // 0x1f6b24: 0x2048025  or          $s0, $s0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6b20) {
            ctx->pc = 0x1F6B98u;
            goto label_1f6b98;
        }
    }
    ctx->pc = 0x1F6B28u;
    // 0x1f6b28: 0x2673ffe4  addiu       $s3, $s3, -0x1C
    ctx->pc = 0x1f6b28u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967268));
    // 0x1f6b2c: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F6B2Cu;
    {
        const bool branch_taken_0x1f6b2c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6B2Cu;
        // 0x1f6b30: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6b2c) {
            ctx->pc = 0x1F6B50u;
            goto label_1f6b50;
        }
    }
    ctx->pc = 0x1F6B34u;
    // 0x1f6b34: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x1f6b34u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1f6b38: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x1f6b38u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x1f6b3c: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x1f6b3cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1f6b40: 0x121f02  srl         $v1, $s2, 28
    ctx->pc = 0x1f6b40u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 28));
    // 0x1f6b44: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x1f6b44u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x1f6b48: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F6B48u;
    {
        const bool branch_taken_0x1f6b48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6B48u;
        // 0x1f6b4c: 0xae830040  sw          $v1, 0x40($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 64), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6b48) {
            ctx->pc = 0x1F6B5Cu;
            goto label_1f6b5c;
        }
    }
    ctx->pc = 0x1F6B50u;
label_1f6b50:
    // 0x1f6b50: 0x121702  srl         $v0, $s2, 28
    ctx->pc = 0x1f6b50u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 28));
    // 0x1f6b54: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1f6b54u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6b58: 0xae820040  sw          $v0, 0x40($s4)
    ctx->pc = 0x1f6b58u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 64), GPR_U32(ctx, 2));
label_1f6b5c:
    // 0x1f6b5c: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x1f6b5cu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f6b60: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f6b60u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f6b64: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1f6b64u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f6b68: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f6b68u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f6b6c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f6b6cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f6b70: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1f6b70u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f6b74: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1f6b74u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1f6b78: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f6b78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f6b7c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f6b7cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f6b80: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1f6b80u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f6b84: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x1f6b84u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1f6b88: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f6b88u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f6b8c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f6b8cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f6b90: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1F6B90u;
    {
        const bool branch_taken_0x1f6b90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6B90u;
        // 0x1f6b94: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6b90) {
            ctx->pc = 0x1F6BA8u;
            goto label_1f6ba8;
        }
    }
    ctx->pc = 0x1F6B98u;
label_1f6b98:
    // 0x1f6b98: 0x121702  srl         $v0, $s2, 28
    ctx->pc = 0x1f6b98u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 28));
    // 0x1f6b9c: 0x129100  sll         $s2, $s2, 4
    ctx->pc = 0x1f6b9cu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x1f6ba0: 0xae820040  sw          $v0, 0x40($s4)
    ctx->pc = 0x1f6ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 64), GPR_U32(ctx, 2));
    // 0x1f6ba4: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x1f6ba4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_1f6ba8:
    // 0x1f6ba8: 0x8e830308  lw          $v1, 0x308($s4)
    ctx->pc = 0x1f6ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 776)));
    // 0x1f6bac: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F6BACu;
    {
        const bool branch_taken_0x1f6bac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6BACu;
        // 0x1f6bb0: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6bac) {
            ctx->pc = 0x1F6BBCu;
            goto label_1f6bbc;
        }
    }
    ctx->pc = 0x1F6BB4u;
    // 0x1f6bb4: 0x54620008  bnel        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F6BB4u;
    {
        const bool branch_taken_0x1f6bb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f6bb4) {
            ctx->pc = 0x1F6BB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F6BB4u;
            // 0x1f6bb8: 0x8e830040  lw          $v1, 0x40($s4) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F6BD8u;
            goto label_1f6bd8;
        }
    }
    ctx->pc = 0x1F6BBCu;
label_1f6bbc:
    // 0x1f6bbc: 0x8e82030c  lw          $v0, 0x30C($s4)
    ctx->pc = 0x1f6bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 780)));
    // 0x1f6bc0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F6BC0u;
    {
        const bool branch_taken_0x1f6bc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6BC0u;
        // 0x1f6bc4: 0x8e830040  lw          $v1, 0x40($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6bc0) {
            ctx->pc = 0x1F6BE4u;
            goto label_1f6be4;
        }
    }
    ctx->pc = 0x1F6BC8u;
    // 0x1f6bc8: 0x50430007  beql        $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F6BC8u;
    {
        const bool branch_taken_0x1f6bc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1f6bc8) {
            ctx->pc = 0x1F6BCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F6BC8u;
            // 0x1f6bcc: 0x8e840420  lw          $a0, 0x420($s4) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1056)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F6BE8u;
            goto label_1f6be8;
        }
    }
    ctx->pc = 0x1F6BD0u;
    // 0x1f6bd0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1F6BD0u;
    {
        const bool branch_taken_0x1f6bd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6BD0u;
        // 0x1f6bd4: 0x8e820494  lw          $v0, 0x494($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1172)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6bd0) {
            ctx->pc = 0x1F6BDCu;
            goto label_1f6bdc;
        }
    }
    ctx->pc = 0x1F6BD8u;
label_1f6bd8:
    // 0x1f6bd8: 0x8e820494  lw          $v0, 0x494($s4)
    ctx->pc = 0x1f6bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1172)));
label_1f6bdc:
    // 0x1f6bdc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f6bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f6be0: 0xae820494  sw          $v0, 0x494($s4)
    ctx->pc = 0x1f6be0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1172), GPR_U32(ctx, 2));
label_1f6be4:
    // 0x1f6be4: 0x8e840420  lw          $a0, 0x420($s4)
    ctx->pc = 0x1f6be4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1056)));
label_1f6be8:
    // 0x1f6be8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f6be8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f6bec: 0x10820007  beq         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F6BECu;
    {
        const bool branch_taken_0x1f6bec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F6BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6BECu;
        // 0x1f6bf0: 0x2462ffff  addiu       $v0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6bec) {
            ctx->pc = 0x1F6C0Cu;
            goto label_1f6c0c;
        }
    }
    ctx->pc = 0x1F6BF4u;
    // 0x1f6bf4: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1f6bf4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1f6bf8: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x1F6BF8u;
    {
        const bool branch_taken_0x1f6bf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f6bf8) {
            ctx->pc = 0x1F6BFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F6BF8u;
            // 0x1f6bfc: 0x8e820494  lw          $v0, 0x494($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1172)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F6C4Cu;
            goto label_1f6c4c;
        }
    }
    ctx->pc = 0x1F6C00u;
    // 0x1f6c00: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1f6c00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1f6c04: 0x50620011  beql        $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1F6C04u;
    {
        const bool branch_taken_0x1f6c04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1f6c04) {
            ctx->pc = 0x1F6C08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F6C04u;
            // 0x1f6c08: 0x8e820494  lw          $v0, 0x494($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1172)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F6C4Cu;
            goto label_1f6c4c;
        }
    }
    ctx->pc = 0x1F6C0Cu;
label_1f6c0c:
    // 0x1f6c0c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1f6c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1f6c10: 0x50820011  beql        $a0, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1F6C10u;
    {
        const bool branch_taken_0x1f6c10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x1f6c10) {
            ctx->pc = 0x1F6C14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F6C10u;
            // 0x1f6c14: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F6C58u;
            goto label_1f6c58;
        }
    }
    ctx->pc = 0x1F6C18u;
    // 0x1f6c18: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1F6C18u;
    {
        const bool branch_taken_0x1f6c18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F6C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6C18u;
        // 0x1f6c1c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6c18) {
            ctx->pc = 0x1F6C48u;
            goto label_1f6c48;
        }
    }
    ctx->pc = 0x1F6C20u;
    // 0x1f6c20: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F6C20u;
    {
        const bool branch_taken_0x1f6c20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F6C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6C20u;
        // 0x1f6c24: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6c20) {
            ctx->pc = 0x1F6C48u;
            goto label_1f6c48;
        }
    }
    ctx->pc = 0x1F6C28u;
    // 0x1f6c28: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F6C28u;
    {
        const bool branch_taken_0x1f6c28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F6C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6C28u;
        // 0x1f6c2c: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6c28) {
            ctx->pc = 0x1F6C48u;
            goto label_1f6c48;
        }
    }
    ctx->pc = 0x1F6C30u;
    // 0x1f6c30: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F6C30u;
    {
        const bool branch_taken_0x1f6c30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F6C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6C30u;
        // 0x1f6c34: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6c30) {
            ctx->pc = 0x1F6C48u;
            goto label_1f6c48;
        }
    }
    ctx->pc = 0x1F6C38u;
    // 0x1f6c38: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F6C38u;
    {
        const bool branch_taken_0x1f6c38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F6C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6C38u;
        // 0x1f6c3c: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6c38) {
            ctx->pc = 0x1F6C48u;
            goto label_1f6c48;
        }
    }
    ctx->pc = 0x1F6C40u;
    // 0x1f6c40: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F6C40u;
    {
        const bool branch_taken_0x1f6c40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f6c40) {
            ctx->pc = 0x1F6C44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F6C40u;
            // 0x1f6c44: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F6C58u;
            goto label_1f6c58;
        }
    }
    ctx->pc = 0x1F6C48u;
label_1f6c48:
    // 0x1f6c48: 0x8e820494  lw          $v0, 0x494($s4)
    ctx->pc = 0x1f6c48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1172)));
label_1f6c4c:
    // 0x1f6c4c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f6c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f6c50: 0xae820494  sw          $v0, 0x494($s4)
    ctx->pc = 0x1f6c50u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1172), GPR_U32(ctx, 2));
    // 0x1f6c54: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1f6c54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1f6c58:
    // 0x1f6c58: 0x2c62000a  sltiu       $v0, $v1, 0xA
    ctx->pc = 0x1f6c58u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x1f6c5c: 0x50400b49  beql        $v0, $zero, . + 4 + (0xB49 << 2)
    ctx->pc = 0x1F6C5Cu;
    {
        const bool branch_taken_0x1f6c5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f6c5c) {
            ctx->pc = 0x1F6C60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F6C5Cu;
            // 0x1f6c60: 0x8e820494  lw          $v0, 0x494($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1172)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F9984u;
            goto label_1f9984;
        }
    }
    ctx->pc = 0x1F6C64u;
    // 0x1f6c64: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1f6c64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1f6c68: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x1f6c68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x1f6c6c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1f6c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1f6c70: 0x8c6361d0  lw          $v1, 0x61D0($v1)
    ctx->pc = 0x1f6c70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 25040)));
    // 0x1f6c74: 0x600008  jr          $v1
    ctx->pc = 0x1F6C74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F6C80u: goto label_1f6c80;
            case 0x1F7290u: goto label_1f7290;
            case 0x1F76A8u: goto label_1f76a8;
            case 0x1F7A28u: goto label_1f7a28;
            case 0x1F7F48u: goto label_1f7f48;
            case 0x1F85F0u: goto label_1f85f0;
            case 0x1F8858u: goto label_1f8858;
            case 0x1F9378u: goto label_1f9378;
            case 0x1F9790u: goto label_1f9790;
            case 0x1F9980u: goto label_1f9980;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F6C74u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1F6C7Cu;
    // 0x1f6c7c: 0x0  nop
    ctx->pc = 0x1f6c7cu;
    // NOP
label_1f6c80:
    // 0x1f6c80: 0x2a620018  slti        $v0, $s3, 0x18
    ctx->pc = 0x1f6c80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x1f6c84: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1F6C84u;
    {
        const bool branch_taken_0x1f6c84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F6C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6C84u;
        // 0x1f6c88: 0x121602  srl         $v0, $s2, 24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6c84) {
            ctx->pc = 0x1F6D00u;
            goto label_1f6d00;
        }
    }
    ctx->pc = 0x1F6C8Cu;
    // 0x1f6c8c: 0x2673ffe8  addiu       $s3, $s3, -0x18
    ctx->pc = 0x1f6c8cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967272));
    // 0x1f6c90: 0x12600009  beqz        $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F6C90u;
    {
        const bool branch_taken_0x1f6c90 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6C90u;
        // 0x1f6c94: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6c90) {
            ctx->pc = 0x1F6CB8u;
            goto label_1f6cb8;
        }
    }
    ctx->pc = 0x1F6C98u;
    // 0x1f6c98: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x1f6c98u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1f6c9c: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x1f6c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x1f6ca0: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x1f6ca0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1f6ca4: 0x121e02  srl         $v1, $s2, 24
    ctx->pc = 0x1f6ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 24));
    // 0x1f6ca8: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x1f6ca8u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x1f6cac: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1F6CACu;
    {
        const bool branch_taken_0x1f6cac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6CACu;
        // 0x1f6cb0: 0xae830044  sw          $v1, 0x44($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 68), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6cac) {
            ctx->pc = 0x1F6CC4u;
            goto label_1f6cc4;
        }
    }
    ctx->pc = 0x1F6CB4u;
    // 0x1f6cb4: 0x0  nop
    ctx->pc = 0x1f6cb4u;
    // NOP
label_1f6cb8:
    // 0x1f6cb8: 0x121602  srl         $v0, $s2, 24
    ctx->pc = 0x1f6cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 24));
    // 0x1f6cbc: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1f6cbcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6cc0: 0xae820044  sw          $v0, 0x44($s4)
    ctx->pc = 0x1f6cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 68), GPR_U32(ctx, 2));
label_1f6cc4:
    // 0x1f6cc4: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x1f6cc4u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f6cc8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f6cc8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f6ccc: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1f6cccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f6cd0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f6cd0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f6cd4: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f6cd4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f6cd8: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1f6cd8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f6cdc: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1f6cdcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1f6ce0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f6ce0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f6ce4: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f6ce4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f6ce8: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1f6ce8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f6cec: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x1f6cecu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1f6cf0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f6cf0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f6cf4: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f6cf4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f6cf8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F6CF8u;
    {
        const bool branch_taken_0x1f6cf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6CF8u;
        // 0x1f6cfc: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6cf8) {
            ctx->pc = 0x1F6D0Cu;
            goto label_1f6d0c;
        }
    }
    ctx->pc = 0x1F6D00u;
label_1f6d00:
    // 0x1f6d00: 0x129200  sll         $s2, $s2, 8
    ctx->pc = 0x1f6d00u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 8));
    // 0x1f6d04: 0xae820044  sw          $v0, 0x44($s4)
    ctx->pc = 0x1f6d04u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 68), GPR_U32(ctx, 2));
    // 0x1f6d08: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x1f6d08u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_1f6d0c:
    // 0x1f6d0c: 0x2a62001f  slti        $v0, $s3, 0x1F
    ctx->pc = 0x1f6d0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x1f6d10: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1F6D10u;
    {
        const bool branch_taken_0x1f6d10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F6D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6D10u;
        // 0x1f6d14: 0x1217c2  srl         $v0, $s2, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6d10) {
            ctx->pc = 0x1F6D88u;
            goto label_1f6d88;
        }
    }
    ctx->pc = 0x1F6D18u;
    // 0x1f6d18: 0x2673ffe1  addiu       $s3, $s3, -0x1F
    ctx->pc = 0x1f6d18u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967265));
    // 0x1f6d1c: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F6D1Cu;
    {
        const bool branch_taken_0x1f6d1c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6D1Cu;
        // 0x1f6d20: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6d1c) {
            ctx->pc = 0x1F6D40u;
            goto label_1f6d40;
        }
    }
    ctx->pc = 0x1F6D24u;
    // 0x1f6d24: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x1f6d24u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1f6d28: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x1f6d28u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x1f6d2c: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x1f6d2cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1f6d30: 0x121fc2  srl         $v1, $s2, 31
    ctx->pc = 0x1f6d30u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x1f6d34: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x1f6d34u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x1f6d38: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F6D38u;
    {
        const bool branch_taken_0x1f6d38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6D38u;
        // 0x1f6d3c: 0xae830048  sw          $v1, 0x48($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 72), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6d38) {
            ctx->pc = 0x1F6D4Cu;
            goto label_1f6d4c;
        }
    }
    ctx->pc = 0x1F6D40u;
label_1f6d40:
    // 0x1f6d40: 0x1217c2  srl         $v0, $s2, 31
    ctx->pc = 0x1f6d40u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x1f6d44: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1f6d44u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6d48: 0xae820048  sw          $v0, 0x48($s4)
    ctx->pc = 0x1f6d48u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 72), GPR_U32(ctx, 2));
label_1f6d4c:
    // 0x1f6d4c: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x1f6d4cu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f6d50: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f6d50u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f6d54: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1f6d54u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f6d58: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f6d58u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f6d5c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f6d5cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f6d60: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1f6d60u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f6d64: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1f6d64u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1f6d68: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f6d68u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f6d6c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f6d6cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f6d70: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1f6d70u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f6d74: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x1f6d74u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1f6d78: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f6d78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f6d7c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f6d7cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f6d80: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F6D80u;
    {
        const bool branch_taken_0x1f6d80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6D80u;
        // 0x1f6d84: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6d80) {
            ctx->pc = 0x1F6D94u;
            goto label_1f6d94;
        }
    }
    ctx->pc = 0x1F6D88u;
label_1f6d88:
    // 0x1f6d88: 0x129040  sll         $s2, $s2, 1
    ctx->pc = 0x1f6d88u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x1f6d8c: 0xae820048  sw          $v0, 0x48($s4)
    ctx->pc = 0x1f6d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 72), GPR_U32(ctx, 2));
    // 0x1f6d90: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1f6d90u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1f6d94:
    // 0x1f6d94: 0x2a62001e  slti        $v0, $s3, 0x1E
    ctx->pc = 0x1f6d94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)30) ? 1 : 0);
    // 0x1f6d98: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1F6D98u;
    {
        const bool branch_taken_0x1f6d98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F6D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6D98u;
        // 0x1f6d9c: 0x121782  srl         $v0, $s2, 30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6d98) {
            ctx->pc = 0x1F6E10u;
            goto label_1f6e10;
        }
    }
    ctx->pc = 0x1F6DA0u;
    // 0x1f6da0: 0x2673ffe2  addiu       $s3, $s3, -0x1E
    ctx->pc = 0x1f6da0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967266));
    // 0x1f6da4: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F6DA4u;
    {
        const bool branch_taken_0x1f6da4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6DA4u;
        // 0x1f6da8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6da4) {
            ctx->pc = 0x1F6DC8u;
            goto label_1f6dc8;
        }
    }
    ctx->pc = 0x1F6DACu;
    // 0x1f6dac: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x1f6dacu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1f6db0: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x1f6db0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x1f6db4: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x1f6db4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1f6db8: 0x121f82  srl         $v1, $s2, 30
    ctx->pc = 0x1f6db8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 30));
    // 0x1f6dbc: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x1f6dbcu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x1f6dc0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F6DC0u;
    {
        const bool branch_taken_0x1f6dc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6DC0u;
        // 0x1f6dc4: 0xae83004c  sw          $v1, 0x4C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 76), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6dc0) {
            ctx->pc = 0x1F6DD4u;
            goto label_1f6dd4;
        }
    }
    ctx->pc = 0x1F6DC8u;
label_1f6dc8:
    // 0x1f6dc8: 0x121782  srl         $v0, $s2, 30
    ctx->pc = 0x1f6dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 30));
    // 0x1f6dcc: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1f6dccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6dd0: 0xae82004c  sw          $v0, 0x4C($s4)
    ctx->pc = 0x1f6dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 76), GPR_U32(ctx, 2));
label_1f6dd4:
    // 0x1f6dd4: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x1f6dd4u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f6dd8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f6dd8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f6ddc: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1f6ddcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f6de0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f6de0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f6de4: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f6de4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f6de8: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1f6de8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f6dec: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1f6decu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1f6df0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f6df0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f6df4: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f6df4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f6df8: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1f6df8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f6dfc: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x1f6dfcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1f6e00: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f6e00u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f6e04: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f6e04u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f6e08: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F6E08u;
    {
        const bool branch_taken_0x1f6e08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6E08u;
        // 0x1f6e0c: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6e08) {
            ctx->pc = 0x1F6E1Cu;
            goto label_1f6e1c;
        }
    }
    ctx->pc = 0x1F6E10u;
label_1f6e10:
    // 0x1f6e10: 0x129080  sll         $s2, $s2, 2
    ctx->pc = 0x1f6e10u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1f6e14: 0xae82004c  sw          $v0, 0x4C($s4)
    ctx->pc = 0x1f6e14u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 76), GPR_U32(ctx, 2));
    // 0x1f6e18: 0x26730002  addiu       $s3, $s3, 0x2
    ctx->pc = 0x1f6e18u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
label_1f6e1c:
    // 0x1f6e1c: 0x2a62001e  slti        $v0, $s3, 0x1E
    ctx->pc = 0x1f6e1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)30) ? 1 : 0);
    // 0x1f6e20: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1F6E20u;
    {
        const bool branch_taken_0x1f6e20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F6E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6E20u;
        // 0x1f6e24: 0x121782  srl         $v0, $s2, 30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6e20) {
            ctx->pc = 0x1F6E98u;
            goto label_1f6e98;
        }
    }
    ctx->pc = 0x1F6E28u;
    // 0x1f6e28: 0x2673ffe2  addiu       $s3, $s3, -0x1E
    ctx->pc = 0x1f6e28u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967266));
    // 0x1f6e2c: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F6E2Cu;
    {
        const bool branch_taken_0x1f6e2c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6E2Cu;
        // 0x1f6e30: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6e2c) {
            ctx->pc = 0x1F6E50u;
            goto label_1f6e50;
        }
    }
    ctx->pc = 0x1F6E34u;
    // 0x1f6e34: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x1f6e34u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1f6e38: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x1f6e38u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x1f6e3c: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x1f6e3cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1f6e40: 0x121f82  srl         $v1, $s2, 30
    ctx->pc = 0x1f6e40u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 30));
    // 0x1f6e44: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x1f6e44u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x1f6e48: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F6E48u;
    {
        const bool branch_taken_0x1f6e48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6E48u;
        // 0x1f6e4c: 0xae830050  sw          $v1, 0x50($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 80), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6e48) {
            ctx->pc = 0x1F6E5Cu;
            goto label_1f6e5c;
        }
    }
    ctx->pc = 0x1F6E50u;
label_1f6e50:
    // 0x1f6e50: 0x121782  srl         $v0, $s2, 30
    ctx->pc = 0x1f6e50u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 30));
    // 0x1f6e54: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1f6e54u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6e58: 0xae820050  sw          $v0, 0x50($s4)
    ctx->pc = 0x1f6e58u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 80), GPR_U32(ctx, 2));
label_1f6e5c:
    // 0x1f6e5c: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x1f6e5cu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f6e60: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f6e60u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f6e64: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1f6e64u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f6e68: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f6e68u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f6e6c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f6e6cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f6e70: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1f6e70u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f6e74: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1f6e74u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1f6e78: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f6e78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f6e7c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f6e7cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f6e80: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1f6e80u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f6e84: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x1f6e84u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1f6e88: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f6e88u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f6e8c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f6e8cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f6e90: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F6E90u;
    {
        const bool branch_taken_0x1f6e90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6E90u;
        // 0x1f6e94: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6e90) {
            ctx->pc = 0x1F6EA4u;
            goto label_1f6ea4;
        }
    }
    ctx->pc = 0x1F6E98u;
label_1f6e98:
    // 0x1f6e98: 0x129080  sll         $s2, $s2, 2
    ctx->pc = 0x1f6e98u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1f6e9c: 0xae820050  sw          $v0, 0x50($s4)
    ctx->pc = 0x1f6e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 80), GPR_U32(ctx, 2));
    // 0x1f6ea0: 0x26730002  addiu       $s3, $s3, 0x2
    ctx->pc = 0x1f6ea0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
label_1f6ea4:
    // 0x1f6ea4: 0x2a62001e  slti        $v0, $s3, 0x1E
    ctx->pc = 0x1f6ea4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)30) ? 1 : 0);
    // 0x1f6ea8: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1F6EA8u;
    {
        const bool branch_taken_0x1f6ea8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F6EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6EA8u;
        // 0x1f6eac: 0x121782  srl         $v0, $s2, 30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6ea8) {
            ctx->pc = 0x1F6F20u;
            goto label_1f6f20;
        }
    }
    ctx->pc = 0x1F6EB0u;
    // 0x1f6eb0: 0x2673ffe2  addiu       $s3, $s3, -0x1E
    ctx->pc = 0x1f6eb0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967266));
    // 0x1f6eb4: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F6EB4u;
    {
        const bool branch_taken_0x1f6eb4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6EB4u;
        // 0x1f6eb8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6eb4) {
            ctx->pc = 0x1F6ED8u;
            goto label_1f6ed8;
        }
    }
    ctx->pc = 0x1F6EBCu;
    // 0x1f6ebc: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x1f6ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1f6ec0: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x1f6ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x1f6ec4: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x1f6ec4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1f6ec8: 0x121f82  srl         $v1, $s2, 30
    ctx->pc = 0x1f6ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 30));
    // 0x1f6ecc: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x1f6eccu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x1f6ed0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F6ED0u;
    {
        const bool branch_taken_0x1f6ed0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6ED0u;
        // 0x1f6ed4: 0xae830054  sw          $v1, 0x54($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6ed0) {
            ctx->pc = 0x1F6EE4u;
            goto label_1f6ee4;
        }
    }
    ctx->pc = 0x1F6ED8u;
label_1f6ed8:
    // 0x1f6ed8: 0x121782  srl         $v0, $s2, 30
    ctx->pc = 0x1f6ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 30));
    // 0x1f6edc: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1f6edcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6ee0: 0xae820054  sw          $v0, 0x54($s4)
    ctx->pc = 0x1f6ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 84), GPR_U32(ctx, 2));
label_1f6ee4:
    // 0x1f6ee4: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x1f6ee4u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f6ee8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f6ee8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f6eec: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1f6eecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f6ef0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f6ef0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f6ef4: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f6ef4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f6ef8: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1f6ef8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f6efc: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1f6efcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1f6f00: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f6f00u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f6f04: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f6f04u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f6f08: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1f6f08u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f6f0c: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x1f6f0cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1f6f10: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f6f10u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f6f14: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f6f14u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f6f18: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F6F18u;
    {
        const bool branch_taken_0x1f6f18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6F18u;
        // 0x1f6f1c: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6f18) {
            ctx->pc = 0x1F6F2Cu;
            goto label_1f6f2c;
        }
    }
    ctx->pc = 0x1F6F20u;
label_1f6f20:
    // 0x1f6f20: 0x129080  sll         $s2, $s2, 2
    ctx->pc = 0x1f6f20u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1f6f24: 0xae820054  sw          $v0, 0x54($s4)
    ctx->pc = 0x1f6f24u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 84), GPR_U32(ctx, 2));
    // 0x1f6f28: 0x26730002  addiu       $s3, $s3, 0x2
    ctx->pc = 0x1f6f28u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
label_1f6f2c:
    // 0x1f6f2c: 0x2a620014  slti        $v0, $s3, 0x14
    ctx->pc = 0x1f6f2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x1f6f30: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1F6F30u;
    {
        const bool branch_taken_0x1f6f30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F6F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6F30u;
        // 0x1f6f34: 0x121502  srl         $v0, $s2, 20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6f30) {
            ctx->pc = 0x1F6FA8u;
            goto label_1f6fa8;
        }
    }
    ctx->pc = 0x1F6F38u;
    // 0x1f6f38: 0x2673ffec  addiu       $s3, $s3, -0x14
    ctx->pc = 0x1f6f38u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967276));
    // 0x1f6f3c: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F6F3Cu;
    {
        const bool branch_taken_0x1f6f3c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6F3Cu;
        // 0x1f6f40: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6f3c) {
            ctx->pc = 0x1F6F60u;
            goto label_1f6f60;
        }
    }
    ctx->pc = 0x1F6F44u;
    // 0x1f6f44: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x1f6f44u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1f6f48: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x1f6f48u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x1f6f4c: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x1f6f4cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1f6f50: 0x121d02  srl         $v1, $s2, 20
    ctx->pc = 0x1f6f50u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 20));
    // 0x1f6f54: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x1f6f54u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x1f6f58: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F6F58u;
    {
        const bool branch_taken_0x1f6f58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6F58u;
        // 0x1f6f5c: 0xae830058  sw          $v1, 0x58($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 88), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6f58) {
            ctx->pc = 0x1F6F6Cu;
            goto label_1f6f6c;
        }
    }
    ctx->pc = 0x1F6F60u;
label_1f6f60:
    // 0x1f6f60: 0x121502  srl         $v0, $s2, 20
    ctx->pc = 0x1f6f60u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 20));
    // 0x1f6f64: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1f6f64u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6f68: 0xae820058  sw          $v0, 0x58($s4)
    ctx->pc = 0x1f6f68u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 88), GPR_U32(ctx, 2));
label_1f6f6c:
    // 0x1f6f6c: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x1f6f6cu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f6f70: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f6f70u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f6f74: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1f6f74u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f6f78: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f6f78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f6f7c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f6f7cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f6f80: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1f6f80u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f6f84: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1f6f84u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1f6f88: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f6f88u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f6f8c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f6f8cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f6f90: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1f6f90u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f6f94: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x1f6f94u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1f6f98: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f6f98u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f6f9c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f6f9cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f6fa0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F6FA0u;
    {
        const bool branch_taken_0x1f6fa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6FA0u;
        // 0x1f6fa4: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6fa0) {
            ctx->pc = 0x1F6FB4u;
            goto label_1f6fb4;
        }
    }
    ctx->pc = 0x1F6FA8u;
label_1f6fa8:
    // 0x1f6fa8: 0x129300  sll         $s2, $s2, 12
    ctx->pc = 0x1f6fa8u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 12));
    // 0x1f6fac: 0xae820058  sw          $v0, 0x58($s4)
    ctx->pc = 0x1f6facu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 88), GPR_U32(ctx, 2));
    // 0x1f6fb0: 0x2673000c  addiu       $s3, $s3, 0xC
    ctx->pc = 0x1f6fb0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
label_1f6fb4:
    // 0x1f6fb4: 0x2a62001f  slti        $v0, $s3, 0x1F
    ctx->pc = 0x1f6fb4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x1f6fb8: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1F6FB8u;
    {
        const bool branch_taken_0x1f6fb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F6FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6FB8u;
        // 0x1f6fbc: 0x1217c2  srl         $v0, $s2, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6fb8) {
            ctx->pc = 0x1F7030u;
            goto label_1f7030;
        }
    }
    ctx->pc = 0x1F6FC0u;
    // 0x1f6fc0: 0x2673ffe1  addiu       $s3, $s3, -0x1F
    ctx->pc = 0x1f6fc0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967265));
    // 0x1f6fc4: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F6FC4u;
    {
        const bool branch_taken_0x1f6fc4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6FC4u;
        // 0x1f6fc8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6fc4) {
            ctx->pc = 0x1F6FE8u;
            goto label_1f6fe8;
        }
    }
    ctx->pc = 0x1F6FCCu;
    // 0x1f6fcc: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x1f6fccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1f6fd0: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x1f6fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x1f6fd4: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x1f6fd4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1f6fd8: 0x121fc2  srl         $v1, $s2, 31
    ctx->pc = 0x1f6fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x1f6fdc: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x1f6fdcu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x1f6fe0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F6FE0u;
    {
        const bool branch_taken_0x1f6fe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6FE0u;
        // 0x1f6fe4: 0xae830018  sw          $v1, 0x18($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6fe0) {
            ctx->pc = 0x1F6FF4u;
            goto label_1f6ff4;
        }
    }
    ctx->pc = 0x1F6FE8u;
label_1f6fe8:
    // 0x1f6fe8: 0x1217c2  srl         $v0, $s2, 31
    ctx->pc = 0x1f6fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x1f6fec: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1f6fecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6ff0: 0xae820018  sw          $v0, 0x18($s4)
    ctx->pc = 0x1f6ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 2));
label_1f6ff4:
    // 0x1f6ff4: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x1f6ff4u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f6ff8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f6ff8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f6ffc: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1f6ffcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f7000: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f7000u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f7004: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f7004u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f7008: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1f7008u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f700c: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1f700cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1f7010: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f7010u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f7014: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f7014u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f7018: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1f7018u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f701c: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x1f701cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1f7020: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f7020u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f7024: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f7024u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f7028: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F7028u;
    {
        const bool branch_taken_0x1f7028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F702Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7028u;
        // 0x1f702c: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7028) {
            ctx->pc = 0x1F703Cu;
            goto label_1f703c;
        }
    }
    ctx->pc = 0x1F7030u;
label_1f7030:
    // 0x1f7030: 0x129040  sll         $s2, $s2, 1
    ctx->pc = 0x1f7030u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x1f7034: 0xae820018  sw          $v0, 0x18($s4)
    ctx->pc = 0x1f7034u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 2));
    // 0x1f7038: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1f7038u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1f703c:
    // 0x1f703c: 0x2a620018  slti        $v0, $s3, 0x18
    ctx->pc = 0x1f703cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x1f7040: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1F7040u;
    {
        const bool branch_taken_0x1f7040 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F7044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7040u;
        // 0x1f7044: 0x121602  srl         $v0, $s2, 24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7040) {
            ctx->pc = 0x1F70B8u;
            goto label_1f70b8;
        }
    }
    ctx->pc = 0x1F7048u;
    // 0x1f7048: 0x2673ffe8  addiu       $s3, $s3, -0x18
    ctx->pc = 0x1f7048u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967272));
    // 0x1f704c: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F704Cu;
    {
        const bool branch_taken_0x1f704c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F704Cu;
        // 0x1f7050: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f704c) {
            ctx->pc = 0x1F7070u;
            goto label_1f7070;
        }
    }
    ctx->pc = 0x1F7054u;
    // 0x1f7054: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x1f7054u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1f7058: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x1f7058u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x1f705c: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x1f705cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1f7060: 0x121e02  srl         $v1, $s2, 24
    ctx->pc = 0x1f7060u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 24));
    // 0x1f7064: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x1f7064u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x1f7068: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F7068u;
    {
        const bool branch_taken_0x1f7068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F706Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7068u;
        // 0x1f706c: 0xae83005c  sw          $v1, 0x5C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 92), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7068) {
            ctx->pc = 0x1F707Cu;
            goto label_1f707c;
        }
    }
    ctx->pc = 0x1F7070u;
label_1f7070:
    // 0x1f7070: 0x121602  srl         $v0, $s2, 24
    ctx->pc = 0x1f7070u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 24));
    // 0x1f7074: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1f7074u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7078: 0xae82005c  sw          $v0, 0x5C($s4)
    ctx->pc = 0x1f7078u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 92), GPR_U32(ctx, 2));
label_1f707c:
    // 0x1f707c: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x1f707cu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f7080: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f7080u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f7084: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1f7084u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f7088: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f7088u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f708c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f708cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f7090: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1f7090u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f7094: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1f7094u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1f7098: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f7098u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f709c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f709cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f70a0: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1f70a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f70a4: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x1f70a4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1f70a8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f70a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f70ac: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f70acu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f70b0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F70B0u;
    {
        const bool branch_taken_0x1f70b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F70B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F70B0u;
        // 0x1f70b4: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f70b0) {
            ctx->pc = 0x1F70C4u;
            goto label_1f70c4;
        }
    }
    ctx->pc = 0x1F70B8u;
label_1f70b8:
    // 0x1f70b8: 0x129200  sll         $s2, $s2, 8
    ctx->pc = 0x1f70b8u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 8));
    // 0x1f70bc: 0xae82005c  sw          $v0, 0x5C($s4)
    ctx->pc = 0x1f70bcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 92), GPR_U32(ctx, 2));
    // 0x1f70c0: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x1f70c0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_1f70c4:
    // 0x1f70c4: 0x2a62001f  slti        $v0, $s3, 0x1F
    ctx->pc = 0x1f70c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x1f70c8: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1F70C8u;
    {
        const bool branch_taken_0x1f70c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F70CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F70C8u;
        // 0x1f70cc: 0x1217c2  srl         $v0, $s2, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f70c8) {
            ctx->pc = 0x1F7140u;
            goto label_1f7140;
        }
    }
    ctx->pc = 0x1F70D0u;
    // 0x1f70d0: 0x2673ffe1  addiu       $s3, $s3, -0x1F
    ctx->pc = 0x1f70d0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967265));
    // 0x1f70d4: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F70D4u;
    {
        const bool branch_taken_0x1f70d4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F70D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F70D4u;
        // 0x1f70d8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f70d4) {
            ctx->pc = 0x1F70F8u;
            goto label_1f70f8;
        }
    }
    ctx->pc = 0x1F70DCu;
    // 0x1f70dc: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x1f70dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1f70e0: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x1f70e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x1f70e4: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x1f70e4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1f70e8: 0x121fc2  srl         $v1, $s2, 31
    ctx->pc = 0x1f70e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x1f70ec: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x1f70ecu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x1f70f0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F70F0u;
    {
        const bool branch_taken_0x1f70f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F70F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F70F0u;
        // 0x1f70f4: 0xae830060  sw          $v1, 0x60($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 96), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f70f0) {
            ctx->pc = 0x1F7104u;
            goto label_1f7104;
        }
    }
    ctx->pc = 0x1F70F8u;
label_1f70f8:
    // 0x1f70f8: 0x1217c2  srl         $v0, $s2, 31
    ctx->pc = 0x1f70f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x1f70fc: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1f70fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7100: 0xae820060  sw          $v0, 0x60($s4)
    ctx->pc = 0x1f7100u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 96), GPR_U32(ctx, 2));
label_1f7104:
    // 0x1f7104: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x1f7104u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f7108: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f7108u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f710c: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1f710cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f7110: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f7110u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f7114: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f7114u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f7118: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1f7118u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f711c: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1f711cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1f7120: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f7120u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f7124: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f7124u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f7128: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1f7128u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f712c: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x1f712cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1f7130: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f7130u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f7134: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f7134u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f7138: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F7138u;
    {
        const bool branch_taken_0x1f7138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F713Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7138u;
        // 0x1f713c: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7138) {
            ctx->pc = 0x1F714Cu;
            goto label_1f714c;
        }
    }
    ctx->pc = 0x1F7140u;
label_1f7140:
    // 0x1f7140: 0x129040  sll         $s2, $s2, 1
    ctx->pc = 0x1f7140u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x1f7144: 0xae820060  sw          $v0, 0x60($s4)
    ctx->pc = 0x1f7144u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 96), GPR_U32(ctx, 2));
    // 0x1f7148: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1f7148u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1f714c:
    // 0x1f714c: 0x2a62001e  slti        $v0, $s3, 0x1E
    ctx->pc = 0x1f714cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)30) ? 1 : 0);
    // 0x1f7150: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1F7150u;
    {
        const bool branch_taken_0x1f7150 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F7154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7150u;
        // 0x1f7154: 0x121782  srl         $v0, $s2, 30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7150) {
            ctx->pc = 0x1F71C8u;
            goto label_1f71c8;
        }
    }
    ctx->pc = 0x1F7158u;
    // 0x1f7158: 0x2673ffe2  addiu       $s3, $s3, -0x1E
    ctx->pc = 0x1f7158u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967266));
    // 0x1f715c: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F715Cu;
    {
        const bool branch_taken_0x1f715c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F715Cu;
        // 0x1f7160: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f715c) {
            ctx->pc = 0x1F7180u;
            goto label_1f7180;
        }
    }
    ctx->pc = 0x1F7164u;
    // 0x1f7164: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x1f7164u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1f7168: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x1f7168u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x1f716c: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x1f716cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1f7170: 0x121f82  srl         $v1, $s2, 30
    ctx->pc = 0x1f7170u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 30));
    // 0x1f7174: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x1f7174u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x1f7178: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F7178u;
    {
        const bool branch_taken_0x1f7178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F717Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7178u;
        // 0x1f717c: 0xae830064  sw          $v1, 0x64($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 100), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7178) {
            ctx->pc = 0x1F718Cu;
            goto label_1f718c;
        }
    }
    ctx->pc = 0x1F7180u;
label_1f7180:
    // 0x1f7180: 0x121782  srl         $v0, $s2, 30
    ctx->pc = 0x1f7180u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 30));
    // 0x1f7184: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1f7184u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7188: 0xae820064  sw          $v0, 0x64($s4)
    ctx->pc = 0x1f7188u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 100), GPR_U32(ctx, 2));
label_1f718c:
    // 0x1f718c: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x1f718cu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f7190: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f7190u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f7194: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1f7194u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f7198: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f7198u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f719c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f719cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f71a0: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1f71a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f71a4: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1f71a4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1f71a8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f71a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f71ac: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f71acu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f71b0: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1f71b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f71b4: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x1f71b4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1f71b8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f71b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f71bc: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f71bcu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f71c0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F71C0u;
    {
        const bool branch_taken_0x1f71c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F71C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F71C0u;
        // 0x1f71c4: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f71c0) {
            ctx->pc = 0x1F71D4u;
            goto label_1f71d4;
        }
    }
    ctx->pc = 0x1F71C8u;
label_1f71c8:
    // 0x1f71c8: 0x129080  sll         $s2, $s2, 2
    ctx->pc = 0x1f71c8u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1f71cc: 0xae820064  sw          $v0, 0x64($s4)
    ctx->pc = 0x1f71ccu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 100), GPR_U32(ctx, 2));
    // 0x1f71d0: 0x26730002  addiu       $s3, $s3, 0x2
    ctx->pc = 0x1f71d0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
label_1f71d4:
    // 0x1f71d4: 0x2a62001b  slti        $v0, $s3, 0x1B
    ctx->pc = 0x1f71d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)27) ? 1 : 0);
    // 0x1f71d8: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1F71D8u;
    {
        const bool branch_taken_0x1f71d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F71DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F71D8u;
        // 0x1f71dc: 0x1216c2  srl         $v0, $s2, 27 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 27));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f71d8) {
            ctx->pc = 0x1F7218u;
            goto label_1f7218;
        }
    }
    ctx->pc = 0x1F71E0u;
    // 0x1f71e0: 0x2673ffe5  addiu       $s3, $s3, -0x1B
    ctx->pc = 0x1f71e0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967269));
    // 0x1f71e4: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F71E4u;
    {
        const bool branch_taken_0x1f71e4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F71E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F71E4u;
        // 0x1f71e8: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f71e4) {
            ctx->pc = 0x1F7208u;
            goto label_1f7208;
        }
    }
    ctx->pc = 0x1F71ECu;
    // 0x1f71ec: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x1f71ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1f71f0: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x1f71f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x1f71f4: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x1f71f4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1f71f8: 0x121ec2  srl         $v1, $s2, 27
    ctx->pc = 0x1f71f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 27));
    // 0x1f71fc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F71FCu;
    {
        const bool branch_taken_0x1f71fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F71FCu;
        // 0x1f7200: 0xae830068  sw          $v1, 0x68($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 104), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f71fc) {
            ctx->pc = 0x1F7210u;
            goto label_1f7210;
        }
    }
    ctx->pc = 0x1F7204u;
    // 0x1f7204: 0x0  nop
    ctx->pc = 0x1f7204u;
    // NOP
label_1f7208:
    // 0x1f7208: 0x1216c2  srl         $v0, $s2, 27
    ctx->pc = 0x1f7208u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 27));
    // 0x1f720c: 0xae820068  sw          $v0, 0x68($s4)
    ctx->pc = 0x1f720cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 104), GPR_U32(ctx, 2));
label_1f7210:
    // 0x1f7210: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1F7210u;
    {
        const bool branch_taken_0x1f7210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7210u;
        // 0x1f7214: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7210) {
            ctx->pc = 0x1F7220u;
            goto label_1f7220;
        }
    }
    ctx->pc = 0x1F7218u;
label_1f7218:
    // 0x1f7218: 0x26730005  addiu       $s3, $s3, 0x5
    ctx->pc = 0x1f7218u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 5));
    // 0x1f721c: 0xae820068  sw          $v0, 0x68($s4)
    ctx->pc = 0x1f721cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 104), GPR_U32(ctx, 2));
label_1f7220:
    // 0x1f7220: 0x8e83004c  lw          $v1, 0x4C($s4)
    ctx->pc = 0x1f7220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 76)));
    // 0x1f7224: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1f7224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f7228: 0x10640007  beq         $v1, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F7228u;
    {
        const bool branch_taken_0x1f7228 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x1F722Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7228u;
        // 0x1f722c: 0x31880  sll         $v1, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7228) {
            ctx->pc = 0x1F7248u;
            goto label_1f7248;
        }
    }
    ctx->pc = 0x1F7230u;
    // 0x1f7230: 0x8e820494  lw          $v0, 0x494($s4)
    ctx->pc = 0x1f7230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1172)));
    // 0x1f7234: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f7234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f7238: 0xae84004c  sw          $a0, 0x4C($s4)
    ctx->pc = 0x1f7238u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 76), GPR_U32(ctx, 4));
    // 0x1f723c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f723cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f7240: 0xae820494  sw          $v0, 0x494($s4)
    ctx->pc = 0x1f7240u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1172), GPR_U32(ctx, 2));
    // 0x1f7244: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1f7244u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1f7248:
    // 0x1f7248: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1f7248u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f724c: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x1f724cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x1f7250: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f7250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f7254: 0x8c426190  lw          $v0, 0x6190($v0)
    ctx->pc = 0x1f7254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24976)));
    // 0x1f7258: 0xc07d6f0  jal         func_1F5BC0
    ctx->pc = 0x1F7258u;
    SET_GPR_U32(ctx, 31, 0x1F7260u);
    ctx->pc = 0x1F725Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7258u;
    // 0x1f725c: 0xae820318  sw          $v0, 0x318($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 792), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F5BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F5BC0u, 0x1F7258u, 0x1F7260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7260u;
label_1f7260:
    // 0x1f7260: 0x8e820058  lw          $v0, 0x58($s4)
    ctx->pc = 0x1f7260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 88)));
    // 0x1f7264: 0x8e83005c  lw          $v1, 0x5C($s4)
    ctx->pc = 0x1f7264u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 92)));
    // 0x1f7268: 0x8e850014  lw          $a1, 0x14($s4)
    ctx->pc = 0x1f7268u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x1f726c: 0x21480  sll         $v0, $v0, 18
    ctx->pc = 0x1f726cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 18));
    // 0x1f7270: 0x8e84001c  lw          $a0, 0x1C($s4)
    ctx->pc = 0x1f7270u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
    // 0x1f7274: 0x31a80  sll         $v1, $v1, 10
    ctx->pc = 0x1f7274u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 10));
    // 0x1f7278: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x1f7278u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x1f727c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1f727cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1f7280: 0xae8202d4  sw          $v0, 0x2D4($s4)
    ctx->pc = 0x1f7280u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 724), GPR_U32(ctx, 2));
    // 0x1f7284: 0x100009c1  b           . + 4 + (0x9C1 << 2)
    ctx->pc = 0x1F7284u;
    {
        const bool branch_taken_0x1f7284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7284u;
        // 0x1f7288: 0xae8302d8  sw          $v1, 0x2D8($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 728), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7284) {
            ctx->pc = 0x1F998Cu;
            goto label_1f998c;
        }
    }
    ctx->pc = 0x1F728Cu;
    // 0x1f728c: 0x0  nop
    ctx->pc = 0x1f728cu;
    // NOP
label_1f7290:
    // 0x1f7290: 0x2a62001d  slti        $v0, $s3, 0x1D
    ctx->pc = 0x1f7290u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)29) ? 1 : 0);
    // 0x1f7294: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1F7294u;
    {
        const bool branch_taken_0x1f7294 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F7298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7294u;
        // 0x1f7298: 0x121742  srl         $v0, $s2, 29 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7294) {
            ctx->pc = 0x1F7310u;
            goto label_1f7310;
        }
    }
    ctx->pc = 0x1F729Cu;
    // 0x1f729c: 0x2673ffe3  addiu       $s3, $s3, -0x1D
    ctx->pc = 0x1f729cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967267));
    // 0x1f72a0: 0x12600009  beqz        $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F72A0u;
    {
        const bool branch_taken_0x1f72a0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F72A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F72A0u;
        // 0x1f72a4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f72a0) {
            ctx->pc = 0x1F72C8u;
            goto label_1f72c8;
        }
    }
    ctx->pc = 0x1F72A8u;
    // 0x1f72a8: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x1f72a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1f72ac: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x1f72acu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x1f72b0: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x1f72b0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1f72b4: 0x121f42  srl         $v1, $s2, 29
    ctx->pc = 0x1f72b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 29));
    // 0x1f72b8: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x1f72b8u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x1f72bc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1F72BCu;
    {
        const bool branch_taken_0x1f72bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F72C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F72BCu;
        // 0x1f72c0: 0xae83006c  sw          $v1, 0x6C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 108), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f72bc) {
            ctx->pc = 0x1F72D4u;
            goto label_1f72d4;
        }
    }
    ctx->pc = 0x1F72C4u;
    // 0x1f72c4: 0x0  nop
    ctx->pc = 0x1f72c4u;
    // NOP
label_1f72c8:
    // 0x1f72c8: 0x121742  srl         $v0, $s2, 29
    ctx->pc = 0x1f72c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 29));
    // 0x1f72cc: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1f72ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f72d0: 0xae82006c  sw          $v0, 0x6C($s4)
    ctx->pc = 0x1f72d0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 108), GPR_U32(ctx, 2));
label_1f72d4:
    // 0x1f72d4: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x1f72d4u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f72d8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f72d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f72dc: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1f72dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f72e0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f72e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f72e4: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f72e4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f72e8: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1f72e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f72ec: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1f72ecu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1f72f0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f72f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f72f4: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f72f4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f72f8: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1f72f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f72fc: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x1f72fcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1f7300: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f7300u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f7304: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f7304u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f7308: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F7308u;
    {
        const bool branch_taken_0x1f7308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F730Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7308u;
        // 0x1f730c: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7308) {
            ctx->pc = 0x1F731Cu;
            goto label_1f731c;
        }
    }
    ctx->pc = 0x1F7310u;
label_1f7310:
    // 0x1f7310: 0x1290c0  sll         $s2, $s2, 3
    ctx->pc = 0x1f7310u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x1f7314: 0xae82006c  sw          $v0, 0x6C($s4)
    ctx->pc = 0x1f7314u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 108), GPR_U32(ctx, 2));
    // 0x1f7318: 0x26730003  addiu       $s3, $s3, 0x3
    ctx->pc = 0x1f7318u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 3));
label_1f731c:
    // 0x1f731c: 0x2a62001f  slti        $v0, $s3, 0x1F
    ctx->pc = 0x1f731cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x1f7320: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1F7320u;
    {
        const bool branch_taken_0x1f7320 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F7324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7320u;
        // 0x1f7324: 0x1217c2  srl         $v0, $s2, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7320) {
            ctx->pc = 0x1F7398u;
            goto label_1f7398;
        }
    }
    ctx->pc = 0x1F7328u;
    // 0x1f7328: 0x2673ffe1  addiu       $s3, $s3, -0x1F
    ctx->pc = 0x1f7328u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967265));
    // 0x1f732c: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F732Cu;
    {
        const bool branch_taken_0x1f732c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F732Cu;
        // 0x1f7330: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f732c) {
            ctx->pc = 0x1F7350u;
            goto label_1f7350;
        }
    }
    ctx->pc = 0x1F7334u;
    // 0x1f7334: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x1f7334u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1f7338: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x1f7338u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x1f733c: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x1f733cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1f7340: 0x121fc2  srl         $v1, $s2, 31
    ctx->pc = 0x1f7340u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x1f7344: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x1f7344u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x1f7348: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F7348u;
    {
        const bool branch_taken_0x1f7348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F734Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7348u;
        // 0x1f734c: 0xae830070  sw          $v1, 0x70($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 112), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7348) {
            ctx->pc = 0x1F735Cu;
            goto label_1f735c;
        }
    }
    ctx->pc = 0x1F7350u;
label_1f7350:
    // 0x1f7350: 0x1217c2  srl         $v0, $s2, 31
    ctx->pc = 0x1f7350u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x1f7354: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1f7354u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7358: 0xae820070  sw          $v0, 0x70($s4)
    ctx->pc = 0x1f7358u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 112), GPR_U32(ctx, 2));
label_1f735c:
    // 0x1f735c: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x1f735cu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f7360: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f7360u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f7364: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1f7364u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f7368: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f7368u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f736c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f736cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f7370: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1f7370u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f7374: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1f7374u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1f7378: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f7378u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f737c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f737cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f7380: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1f7380u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f7384: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x1f7384u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1f7388: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f7388u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f738c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f738cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f7390: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F7390u;
    {
        const bool branch_taken_0x1f7390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7390u;
        // 0x1f7394: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7390) {
            ctx->pc = 0x1F73A4u;
            goto label_1f73a4;
        }
    }
    ctx->pc = 0x1F7398u;
label_1f7398:
    // 0x1f7398: 0x129040  sll         $s2, $s2, 1
    ctx->pc = 0x1f7398u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x1f739c: 0xae820070  sw          $v0, 0x70($s4)
    ctx->pc = 0x1f739cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 112), GPR_U32(ctx, 2));
    // 0x1f73a0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1f73a0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1f73a4:
    // 0x1f73a4: 0x8e820070  lw          $v0, 0x70($s4)
    ctx->pc = 0x1f73a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 112)));
    // 0x1f73a8: 0x10400066  beqz        $v0, . + 4 + (0x66 << 2)
    ctx->pc = 0x1F73A8u;
    {
        const bool branch_taken_0x1f73a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F73ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F73A8u;
        // 0x1f73ac: 0x2a620018  slti        $v0, $s3, 0x18 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)24) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f73a8) {
            ctx->pc = 0x1F7544u;
            goto label_1f7544;
        }
    }
    ctx->pc = 0x1F73B0u;
    // 0x1f73b0: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1F73B0u;
    {
        const bool branch_taken_0x1f73b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F73B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F73B0u;
        // 0x1f73b4: 0x121602  srl         $v0, $s2, 24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f73b0) {
            ctx->pc = 0x1F7428u;
            goto label_1f7428;
        }
    }
    ctx->pc = 0x1F73B8u;
    // 0x1f73b8: 0x2673ffe8  addiu       $s3, $s3, -0x18
    ctx->pc = 0x1f73b8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967272));
    // 0x1f73bc: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F73BCu;
    {
        const bool branch_taken_0x1f73bc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F73C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F73BCu;
        // 0x1f73c0: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f73bc) {
            ctx->pc = 0x1F73E0u;
            goto label_1f73e0;
        }
    }
    ctx->pc = 0x1F73C4u;
    // 0x1f73c4: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x1f73c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1f73c8: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x1f73c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x1f73cc: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x1f73ccu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1f73d0: 0x121e02  srl         $v1, $s2, 24
    ctx->pc = 0x1f73d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 24));
    // 0x1f73d4: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x1f73d4u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x1f73d8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F73D8u;
    {
        const bool branch_taken_0x1f73d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F73DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F73D8u;
        // 0x1f73dc: 0xae830074  sw          $v1, 0x74($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 116), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f73d8) {
            ctx->pc = 0x1F73ECu;
            goto label_1f73ec;
        }
    }
    ctx->pc = 0x1F73E0u;
label_1f73e0:
    // 0x1f73e0: 0x121602  srl         $v0, $s2, 24
    ctx->pc = 0x1f73e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 24));
    // 0x1f73e4: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1f73e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f73e8: 0xae820074  sw          $v0, 0x74($s4)
    ctx->pc = 0x1f73e8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 116), GPR_U32(ctx, 2));
label_1f73ec:
    // 0x1f73ec: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x1f73ecu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f73f0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f73f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f73f4: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1f73f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f73f8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f73f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f73fc: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f73fcu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f7400: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1f7400u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f7404: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1f7404u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1f7408: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f7408u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f740c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f740cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f7410: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1f7410u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f7414: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x1f7414u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1f7418: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f7418u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f741c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f741cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f7420: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F7420u;
    {
        const bool branch_taken_0x1f7420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7420u;
        // 0x1f7424: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7420) {
            ctx->pc = 0x1F7434u;
            goto label_1f7434;
        }
    }
    ctx->pc = 0x1F7428u;
label_1f7428:
    // 0x1f7428: 0x129200  sll         $s2, $s2, 8
    ctx->pc = 0x1f7428u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 8));
    // 0x1f742c: 0xae820074  sw          $v0, 0x74($s4)
    ctx->pc = 0x1f742cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 116), GPR_U32(ctx, 2));
    // 0x1f7430: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x1f7430u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_1f7434:
    // 0x1f7434: 0x2a620018  slti        $v0, $s3, 0x18
    ctx->pc = 0x1f7434u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x1f7438: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1F7438u;
    {
        const bool branch_taken_0x1f7438 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F743Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7438u;
        // 0x1f743c: 0x121602  srl         $v0, $s2, 24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7438) {
            ctx->pc = 0x1F74B0u;
            goto label_1f74b0;
        }
    }
    ctx->pc = 0x1F7440u;
    // 0x1f7440: 0x2673ffe8  addiu       $s3, $s3, -0x18
    ctx->pc = 0x1f7440u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967272));
    // 0x1f7444: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F7444u;
    {
        const bool branch_taken_0x1f7444 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7444u;
        // 0x1f7448: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7444) {
            ctx->pc = 0x1F7468u;
            goto label_1f7468;
        }
    }
    ctx->pc = 0x1F744Cu;
    // 0x1f744c: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x1f744cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1f7450: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x1f7450u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x1f7454: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x1f7454u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1f7458: 0x121e02  srl         $v1, $s2, 24
    ctx->pc = 0x1f7458u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 24));
    // 0x1f745c: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x1f745cu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x1f7460: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F7460u;
    {
        const bool branch_taken_0x1f7460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7460u;
        // 0x1f7464: 0xae830078  sw          $v1, 0x78($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 120), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7460) {
            ctx->pc = 0x1F7474u;
            goto label_1f7474;
        }
    }
    ctx->pc = 0x1F7468u;
label_1f7468:
    // 0x1f7468: 0x121602  srl         $v0, $s2, 24
    ctx->pc = 0x1f7468u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 24));
    // 0x1f746c: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1f746cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7470: 0xae820078  sw          $v0, 0x78($s4)
    ctx->pc = 0x1f7470u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 120), GPR_U32(ctx, 2));
label_1f7474:
    // 0x1f7474: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x1f7474u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f7478: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f7478u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f747c: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1f747cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f7480: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f7480u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f7484: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f7484u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f7488: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1f7488u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f748c: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1f748cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1f7490: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f7490u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f7494: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f7494u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f7498: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1f7498u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f749c: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x1f749cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1f74a0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f74a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f74a4: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f74a4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f74a8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F74A8u;
    {
        const bool branch_taken_0x1f74a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F74ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F74A8u;
        // 0x1f74ac: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f74a8) {
            ctx->pc = 0x1F74BCu;
            goto label_1f74bc;
        }
    }
    ctx->pc = 0x1F74B0u;
label_1f74b0:
    // 0x1f74b0: 0x129200  sll         $s2, $s2, 8
    ctx->pc = 0x1f74b0u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 8));
    // 0x1f74b4: 0xae820078  sw          $v0, 0x78($s4)
    ctx->pc = 0x1f74b4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 120), GPR_U32(ctx, 2));
    // 0x1f74b8: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x1f74b8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_1f74bc:
    // 0x1f74bc: 0x2a620018  slti        $v0, $s3, 0x18
    ctx->pc = 0x1f74bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x1f74c0: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1F74C0u;
    {
        const bool branch_taken_0x1f74c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F74C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F74C0u;
        // 0x1f74c4: 0x121602  srl         $v0, $s2, 24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f74c0) {
            ctx->pc = 0x1F7538u;
            goto label_1f7538;
        }
    }
    ctx->pc = 0x1F74C8u;
    // 0x1f74c8: 0x2673ffe8  addiu       $s3, $s3, -0x18
    ctx->pc = 0x1f74c8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967272));
    // 0x1f74cc: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F74CCu;
    {
        const bool branch_taken_0x1f74cc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F74D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F74CCu;
        // 0x1f74d0: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f74cc) {
            ctx->pc = 0x1F74F0u;
            goto label_1f74f0;
        }
    }
    ctx->pc = 0x1F74D4u;
    // 0x1f74d4: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x1f74d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1f74d8: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x1f74d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x1f74dc: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x1f74dcu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1f74e0: 0x121e02  srl         $v1, $s2, 24
    ctx->pc = 0x1f74e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 24));
    // 0x1f74e4: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x1f74e4u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x1f74e8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F74E8u;
    {
        const bool branch_taken_0x1f74e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F74ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F74E8u;
        // 0x1f74ec: 0xae83007c  sw          $v1, 0x7C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 124), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f74e8) {
            ctx->pc = 0x1F74FCu;
            goto label_1f74fc;
        }
    }
    ctx->pc = 0x1F74F0u;
label_1f74f0:
    // 0x1f74f0: 0x121602  srl         $v0, $s2, 24
    ctx->pc = 0x1f74f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 24));
    // 0x1f74f4: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1f74f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f74f8: 0xae82007c  sw          $v0, 0x7C($s4)
    ctx->pc = 0x1f74f8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 124), GPR_U32(ctx, 2));
label_1f74fc:
    // 0x1f74fc: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x1f74fcu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f7500: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f7500u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f7504: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1f7504u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f7508: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f7508u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f750c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f750cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f7510: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1f7510u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f7514: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1f7514u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1f7518: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f7518u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f751c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f751cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f7520: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1f7520u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f7524: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x1f7524u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1f7528: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f7528u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f752c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f752cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f7530: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F7530u;
    {
        const bool branch_taken_0x1f7530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7530u;
        // 0x1f7534: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7530) {
            ctx->pc = 0x1F7544u;
            goto label_1f7544;
        }
    }
    ctx->pc = 0x1F7538u;
label_1f7538:
    // 0x1f7538: 0x129200  sll         $s2, $s2, 8
    ctx->pc = 0x1f7538u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 8));
    // 0x1f753c: 0xae82007c  sw          $v0, 0x7C($s4)
    ctx->pc = 0x1f753cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 124), GPR_U32(ctx, 2));
    // 0x1f7540: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x1f7540u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_1f7544:
    // 0x1f7544: 0x2a620012  slti        $v0, $s3, 0x12
    ctx->pc = 0x1f7544u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)18) ? 1 : 0);
    // 0x1f7548: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1F7548u;
    {
        const bool branch_taken_0x1f7548 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F754Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7548u;
        // 0x1f754c: 0x121482  srl         $v0, $s2, 18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7548) {
            ctx->pc = 0x1F75C0u;
            goto label_1f75c0;
        }
    }
    ctx->pc = 0x1F7550u;
    // 0x1f7550: 0x2673ffee  addiu       $s3, $s3, -0x12
    ctx->pc = 0x1f7550u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967278));
    // 0x1f7554: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F7554u;
    {
        const bool branch_taken_0x1f7554 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7554u;
        // 0x1f7558: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7554) {
            ctx->pc = 0x1F7578u;
            goto label_1f7578;
        }
    }
    ctx->pc = 0x1F755Cu;
    // 0x1f755c: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x1f755cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1f7560: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x1f7560u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x1f7564: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x1f7564u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1f7568: 0x121c82  srl         $v1, $s2, 18
    ctx->pc = 0x1f7568u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 18));
    // 0x1f756c: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x1f756cu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x1f7570: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F7570u;
    {
        const bool branch_taken_0x1f7570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7570u;
        // 0x1f7574: 0xae830080  sw          $v1, 0x80($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 128), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7570) {
            ctx->pc = 0x1F7584u;
            goto label_1f7584;
        }
    }
    ctx->pc = 0x1F7578u;
label_1f7578:
    // 0x1f7578: 0x121482  srl         $v0, $s2, 18
    ctx->pc = 0x1f7578u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 18));
    // 0x1f757c: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1f757cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7580: 0xae820080  sw          $v0, 0x80($s4)
    ctx->pc = 0x1f7580u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 128), GPR_U32(ctx, 2));
label_1f7584:
    // 0x1f7584: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x1f7584u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f7588: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f7588u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f758c: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1f758cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f7590: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f7590u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f7594: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f7594u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f7598: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1f7598u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f759c: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1f759cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1f75a0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f75a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f75a4: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f75a4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f75a8: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1f75a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f75ac: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x1f75acu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1f75b0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f75b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f75b4: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f75b4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f75b8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F75B8u;
    {
        const bool branch_taken_0x1f75b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F75BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F75B8u;
        // 0x1f75bc: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f75b8) {
            ctx->pc = 0x1F75CCu;
            goto label_1f75cc;
        }
    }
    ctx->pc = 0x1F75C0u;
label_1f75c0:
    // 0x1f75c0: 0x129380  sll         $s2, $s2, 14
    ctx->pc = 0x1f75c0u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 14));
    // 0x1f75c4: 0xae820080  sw          $v0, 0x80($s4)
    ctx->pc = 0x1f75c4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 128), GPR_U32(ctx, 2));
    // 0x1f75c8: 0x2673000e  addiu       $s3, $s3, 0xE
    ctx->pc = 0x1f75c8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 14));
label_1f75cc:
    // 0x1f75cc: 0x2a62001f  slti        $v0, $s3, 0x1F
    ctx->pc = 0x1f75ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x1f75d0: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1F75D0u;
    {
        const bool branch_taken_0x1f75d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F75D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F75D0u;
        // 0x1f75d4: 0x1217c2  srl         $v0, $s2, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f75d0) {
            ctx->pc = 0x1F7648u;
            goto label_1f7648;
        }
    }
    ctx->pc = 0x1F75D8u;
    // 0x1f75d8: 0x2673ffe1  addiu       $s3, $s3, -0x1F
    ctx->pc = 0x1f75d8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967265));
    // 0x1f75dc: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F75DCu;
    {
        const bool branch_taken_0x1f75dc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F75E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F75DCu;
        // 0x1f75e0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f75dc) {
            ctx->pc = 0x1F7600u;
            goto label_1f7600;
        }
    }
    ctx->pc = 0x1F75E4u;
    // 0x1f75e4: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x1f75e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1f75e8: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x1f75e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x1f75ec: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x1f75ecu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1f75f0: 0x121fc2  srl         $v1, $s2, 31
    ctx->pc = 0x1f75f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x1f75f4: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x1f75f4u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x1f75f8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F75F8u;
    {
        const bool branch_taken_0x1f75f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F75FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F75F8u;
        // 0x1f75fc: 0xae830018  sw          $v1, 0x18($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f75f8) {
            ctx->pc = 0x1F760Cu;
            goto label_1f760c;
        }
    }
    ctx->pc = 0x1F7600u;
label_1f7600:
    // 0x1f7600: 0x1217c2  srl         $v0, $s2, 31
    ctx->pc = 0x1f7600u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x1f7604: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1f7604u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7608: 0xae820018  sw          $v0, 0x18($s4)
    ctx->pc = 0x1f7608u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 2));
label_1f760c:
    // 0x1f760c: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x1f760cu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f7610: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f7610u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f7614: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1f7614u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f7618: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f7618u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f761c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f761cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f7620: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1f7620u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f7624: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1f7624u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1f7628: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f7628u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f762c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f762cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f7630: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1f7630u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f7634: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x1f7634u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1f7638: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f7638u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f763c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f763cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f7640: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F7640u;
    {
        const bool branch_taken_0x1f7640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7640u;
        // 0x1f7644: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7640) {
            ctx->pc = 0x1F7654u;
            goto label_1f7654;
        }
    }
    ctx->pc = 0x1F7648u;
label_1f7648:
    // 0x1f7648: 0x129040  sll         $s2, $s2, 1
    ctx->pc = 0x1f7648u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x1f764c: 0xae820018  sw          $v0, 0x18($s4)
    ctx->pc = 0x1f764cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 2));
    // 0x1f7650: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1f7650u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1f7654:
    // 0x1f7654: 0x2a620012  slti        $v0, $s3, 0x12
    ctx->pc = 0x1f7654u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)18) ? 1 : 0);
    // 0x1f7658: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1F7658u;
    {
        const bool branch_taken_0x1f7658 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F765Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7658u;
        // 0x1f765c: 0x121482  srl         $v0, $s2, 18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7658) {
            ctx->pc = 0x1F7698u;
            goto label_1f7698;
        }
    }
    ctx->pc = 0x1F7660u;
    // 0x1f7660: 0x2673ffee  addiu       $s3, $s3, -0x12
    ctx->pc = 0x1f7660u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967278));
    // 0x1f7664: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F7664u;
    {
        const bool branch_taken_0x1f7664 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7664u;
        // 0x1f7668: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7664) {
            ctx->pc = 0x1F7688u;
            goto label_1f7688;
        }
    }
    ctx->pc = 0x1F766Cu;
    // 0x1f766c: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x1f766cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1f7670: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x1f7670u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x1f7674: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x1f7674u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1f7678: 0x121c82  srl         $v1, $s2, 18
    ctx->pc = 0x1f7678u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 18));
    // 0x1f767c: 0x100008ba  b           . + 4 + (0x8BA << 2)
    ctx->pc = 0x1F767Cu;
    {
        const bool branch_taken_0x1f767c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F767Cu;
        // 0x1f7680: 0xae830084  sw          $v1, 0x84($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 132), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f767c) {
            ctx->pc = 0x1F9968u;
            goto label_1f9968;
        }
    }
    ctx->pc = 0x1F7684u;
    // 0x1f7684: 0x0  nop
    ctx->pc = 0x1f7684u;
    // NOP
label_1f7688:
    // 0x1f7688: 0x121482  srl         $v0, $s2, 18
    ctx->pc = 0x1f7688u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 18));
    // 0x1f768c: 0x100008b6  b           . + 4 + (0x8B6 << 2)
    ctx->pc = 0x1F768Cu;
    {
        const bool branch_taken_0x1f768c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F768Cu;
        // 0x1f7690: 0xae820084  sw          $v0, 0x84($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 132), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f768c) {
            ctx->pc = 0x1F9968u;
            goto label_1f9968;
        }
    }
    ctx->pc = 0x1F7694u;
    // 0x1f7694: 0x0  nop
    ctx->pc = 0x1f7694u;
    // NOP
label_1f7698:
    // 0x1f7698: 0x2673000e  addiu       $s3, $s3, 0xE
    ctx->pc = 0x1f7698u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 14));
    // 0x1f769c: 0x100008bb  b           . + 4 + (0x8BB << 2)
    ctx->pc = 0x1F769Cu;
    {
        const bool branch_taken_0x1f769c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F76A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F769Cu;
        // 0x1f76a0: 0xae820084  sw          $v0, 0x84($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 132), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f769c) {
            ctx->pc = 0x1F998Cu;
            goto label_1f998c;
        }
    }
    ctx->pc = 0x1F76A4u;
    // 0x1f76a4: 0x0  nop
    ctx->pc = 0x1f76a4u;
    // NOP
label_1f76a8:
    // 0x1f76a8: 0x2a62001f  slti        $v0, $s3, 0x1F
    ctx->pc = 0x1f76a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x1f76ac: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1F76ACu;
    {
        const bool branch_taken_0x1f76ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F76B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F76ACu;
        // 0x1f76b0: 0x1217c2  srl         $v0, $s2, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f76ac) {
            ctx->pc = 0x1F7728u;
            goto label_1f7728;
        }
    }
    ctx->pc = 0x1F76B4u;
    // 0x1f76b4: 0x2673ffe1  addiu       $s3, $s3, -0x1F
    ctx->pc = 0x1f76b4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967265));
    // 0x1f76b8: 0x12600009  beqz        $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F76B8u;
    {
        const bool branch_taken_0x1f76b8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F76BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F76B8u;
        // 0x1f76bc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f76b8) {
            ctx->pc = 0x1F76E0u;
            goto label_1f76e0;
        }
    }
    ctx->pc = 0x1F76C0u;
    // 0x1f76c0: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x1f76c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1f76c4: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x1f76c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x1f76c8: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x1f76c8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1f76cc: 0x121fc2  srl         $v1, $s2, 31
    ctx->pc = 0x1f76ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x1f76d0: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x1f76d0u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x1f76d4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1F76D4u;
    {
        const bool branch_taken_0x1f76d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F76D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F76D4u;
        // 0x1f76d8: 0xae830024  sw          $v1, 0x24($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 36), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f76d4) {
            ctx->pc = 0x1F76ECu;
            goto label_1f76ec;
        }
    }
    ctx->pc = 0x1F76DCu;
    // 0x1f76dc: 0x0  nop
    ctx->pc = 0x1f76dcu;
    // NOP
label_1f76e0:
    // 0x1f76e0: 0x1217c2  srl         $v0, $s2, 31
    ctx->pc = 0x1f76e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x1f76e4: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1f76e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f76e8: 0xae820024  sw          $v0, 0x24($s4)
    ctx->pc = 0x1f76e8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 36), GPR_U32(ctx, 2));
label_1f76ec:
    // 0x1f76ec: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x1f76ecu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f76f0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f76f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f76f4: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1f76f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f76f8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f76f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f76fc: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f76fcu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f7700: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1f7700u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f7704: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1f7704u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1f7708: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f7708u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f770c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f770cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f7710: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1f7710u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f7714: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x1f7714u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1f7718: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f7718u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f771c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f771cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f7720: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F7720u;
    {
        const bool branch_taken_0x1f7720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7720u;
        // 0x1f7724: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7720) {
            ctx->pc = 0x1F7734u;
            goto label_1f7734;
        }
    }
    ctx->pc = 0x1F7728u;
label_1f7728:
    // 0x1f7728: 0x129040  sll         $s2, $s2, 1
    ctx->pc = 0x1f7728u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x1f772c: 0xae820024  sw          $v0, 0x24($s4)
    ctx->pc = 0x1f772cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 36), GPR_U32(ctx, 2));
    // 0x1f7730: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1f7730u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1f7734:
    // 0x1f7734: 0x8e820024  lw          $v0, 0x24($s4)
    ctx->pc = 0x1f7734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
    // 0x1f7738: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1F7738u;
    {
        const bool branch_taken_0x1f7738 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F773Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7738u;
        // 0x1f773c: 0x2a62001f  slti        $v0, $s3, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)31) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7738) {
            ctx->pc = 0x1F77A4u;
            goto label_1f77a4;
        }
    }
    ctx->pc = 0x1F7740u;
    // 0x1f7740: 0x2404003f  addiu       $a0, $zero, 0x3F
    ctx->pc = 0x1f7740u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1f7744: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x1f7744u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_1f7748:
    // 0x1f7748: 0x2a620020  slti        $v0, $s3, 0x20
    ctx->pc = 0x1f7748u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1f774c: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x1F774Cu;
    {
        const bool branch_taken_0x1f774c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f774c) {
            ctx->pc = 0x1F7750u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F774Cu;
            // 0x1f7750: 0x129200  sll         $s2, $s2, 8 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F7794u;
            goto label_1f7794;
        }
    }
    ctx->pc = 0x1F7754u;
    // 0x1f7754: 0x2673ffe0  addiu       $s3, $s3, -0x20
    ctx->pc = 0x1f7754u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967264));
    // 0x1f7758: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x1f7758u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x1f775c: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x1f775cu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f7760: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f7760u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f7764: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1f7764u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f7768: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f7768u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f776c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f776cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f7770: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1f7770u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f7774: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1f7774u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1f7778: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f7778u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f777c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f777cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f7780: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1f7780u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f7784: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x1f7784u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1f7788: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f7788u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f778c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f778cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f7790: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1f7790u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
label_1f7794:
    // 0x1f7794: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1f7794u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1f7798: 0x483ffeb  bgezl       $a0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x1F7798u;
    {
        const bool branch_taken_0x1f7798 = (GPR_S64(ctx, 4) >= 0);
        if (branch_taken_0x1f7798) {
            ctx->pc = 0x1F779Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F7798u;
            // 0x1f779c: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F7748u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f7748;
        }
    }
    ctx->pc = 0x1F77A0u;
    // 0x1f77a0: 0x2a62001f  slti        $v0, $s3, 0x1F
    ctx->pc = 0x1f77a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)31) ? 1 : 0);
label_1f77a4:
    // 0x1f77a4: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1F77A4u;
    {
        const bool branch_taken_0x1f77a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F77A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F77A4u;
        // 0x1f77a8: 0x1217c2  srl         $v0, $s2, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f77a4) {
            ctx->pc = 0x1F7820u;
            goto label_1f7820;
        }
    }
    ctx->pc = 0x1F77ACu;
    // 0x1f77ac: 0x2673ffe1  addiu       $s3, $s3, -0x1F
    ctx->pc = 0x1f77acu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967265));
    // 0x1f77b0: 0x12600009  beqz        $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F77B0u;
    {
        const bool branch_taken_0x1f77b0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F77B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F77B0u;
        // 0x1f77b4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f77b0) {
            ctx->pc = 0x1F77D8u;
            goto label_1f77d8;
        }
    }
    ctx->pc = 0x1F77B8u;
    // 0x1f77b8: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x1f77b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1f77bc: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x1f77bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x1f77c0: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x1f77c0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1f77c4: 0x121fc2  srl         $v1, $s2, 31
    ctx->pc = 0x1f77c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x1f77c8: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x1f77c8u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x1f77cc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1F77CCu;
    {
        const bool branch_taken_0x1f77cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F77D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F77CCu;
        // 0x1f77d0: 0xae830028  sw          $v1, 0x28($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 40), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f77cc) {
            ctx->pc = 0x1F77E4u;
            goto label_1f77e4;
        }
    }
    ctx->pc = 0x1F77D4u;
    // 0x1f77d4: 0x0  nop
    ctx->pc = 0x1f77d4u;
    // NOP
label_1f77d8:
    // 0x1f77d8: 0x1217c2  srl         $v0, $s2, 31
    ctx->pc = 0x1f77d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x1f77dc: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1f77dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f77e0: 0xae820028  sw          $v0, 0x28($s4)
    ctx->pc = 0x1f77e0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 40), GPR_U32(ctx, 2));
label_1f77e4:
    // 0x1f77e4: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x1f77e4u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f77e8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f77e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f77ec: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1f77ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f77f0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f77f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f77f4: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f77f4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f77f8: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1f77f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f77fc: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1f77fcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1f7800: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f7800u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f7804: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f7804u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f7808: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1f7808u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f780c: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x1f780cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1f7810: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f7810u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f7814: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f7814u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f7818: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F7818u;
    {
        const bool branch_taken_0x1f7818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F781Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7818u;
        // 0x1f781c: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7818) {
            ctx->pc = 0x1F782Cu;
            goto label_1f782c;
        }
    }
    ctx->pc = 0x1F7820u;
label_1f7820:
    // 0x1f7820: 0x129040  sll         $s2, $s2, 1
    ctx->pc = 0x1f7820u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x1f7824: 0xae820028  sw          $v0, 0x28($s4)
    ctx->pc = 0x1f7824u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 40), GPR_U32(ctx, 2));
    // 0x1f7828: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1f7828u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1f782c:
    // 0x1f782c: 0x8e820028  lw          $v0, 0x28($s4)
    ctx->pc = 0x1f782cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 40)));
    // 0x1f7830: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1F7830u;
    {
        const bool branch_taken_0x1f7830 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7830u;
        // 0x1f7834: 0x2a62001f  slti        $v0, $s3, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)31) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7830) {
            ctx->pc = 0x1F789Cu;
            goto label_1f789c;
        }
    }
    ctx->pc = 0x1F7838u;
    // 0x1f7838: 0x2404003f  addiu       $a0, $zero, 0x3F
    ctx->pc = 0x1f7838u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1f783c: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x1f783cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_1f7840:
    // 0x1f7840: 0x2a620020  slti        $v0, $s3, 0x20
    ctx->pc = 0x1f7840u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1f7844: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x1F7844u;
    {
        const bool branch_taken_0x1f7844 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f7844) {
            ctx->pc = 0x1F7848u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F7844u;
            // 0x1f7848: 0x129200  sll         $s2, $s2, 8 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F788Cu;
            goto label_1f788c;
        }
    }
    ctx->pc = 0x1F784Cu;
    // 0x1f784c: 0x2673ffe0  addiu       $s3, $s3, -0x20
    ctx->pc = 0x1f784cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967264));
    // 0x1f7850: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x1f7850u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x1f7854: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x1f7854u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f7858: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f7858u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f785c: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1f785cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f7860: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f7860u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f7864: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f7864u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f7868: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1f7868u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f786c: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1f786cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1f7870: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f7870u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f7874: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f7874u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f7878: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1f7878u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f787c: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x1f787cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1f7880: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f7880u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f7884: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f7884u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f7888: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1f7888u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
label_1f788c:
    // 0x1f788c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1f788cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1f7890: 0x483ffeb  bgezl       $a0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x1F7890u;
    {
        const bool branch_taken_0x1f7890 = (GPR_S64(ctx, 4) >= 0);
        if (branch_taken_0x1f7890) {
            ctx->pc = 0x1F7894u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F7890u;
            // 0x1f7894: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F7840u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f7840;
        }
    }
    ctx->pc = 0x1F7898u;
    // 0x1f7898: 0x2a62001f  slti        $v0, $s3, 0x1F
    ctx->pc = 0x1f7898u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)31) ? 1 : 0);
label_1f789c:
    // 0x1f789c: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1F789Cu;
    {
        const bool branch_taken_0x1f789c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F78A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F789Cu;
        // 0x1f78a0: 0x1217c2  srl         $v0, $s2, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f789c) {
            ctx->pc = 0x1F7918u;
            goto label_1f7918;
        }
    }
    ctx->pc = 0x1F78A4u;
    // 0x1f78a4: 0x2673ffe1  addiu       $s3, $s3, -0x1F
    ctx->pc = 0x1f78a4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967265));
    // 0x1f78a8: 0x12600009  beqz        $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F78A8u;
    {
        const bool branch_taken_0x1f78a8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F78ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F78A8u;
        // 0x1f78ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f78a8) {
            ctx->pc = 0x1F78D0u;
            goto label_1f78d0;
        }
    }
    ctx->pc = 0x1F78B0u;
    // 0x1f78b0: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x1f78b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1f78b4: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x1f78b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x1f78b8: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x1f78b8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1f78bc: 0x121fc2  srl         $v1, $s2, 31
    ctx->pc = 0x1f78bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x1f78c0: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x1f78c0u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x1f78c4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1F78C4u;
    {
        const bool branch_taken_0x1f78c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F78C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F78C4u;
        // 0x1f78c8: 0xae830158  sw          $v1, 0x158($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 344), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f78c4) {
            ctx->pc = 0x1F78DCu;
            goto label_1f78dc;
        }
    }
    ctx->pc = 0x1F78CCu;
    // 0x1f78cc: 0x0  nop
    ctx->pc = 0x1f78ccu;
    // NOP
label_1f78d0:
    // 0x1f78d0: 0x1217c2  srl         $v0, $s2, 31
    ctx->pc = 0x1f78d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x1f78d4: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1f78d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f78d8: 0xae820158  sw          $v0, 0x158($s4)
    ctx->pc = 0x1f78d8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 344), GPR_U32(ctx, 2));
label_1f78dc:
    // 0x1f78dc: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x1f78dcu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f78e0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f78e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f78e4: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1f78e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f78e8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f78e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f78ec: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f78ecu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f78f0: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1f78f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f78f4: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1f78f4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1f78f8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f78f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f78fc: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f78fcu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f7900: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1f7900u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f7904: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x1f7904u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1f7908: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f7908u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f790c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f790cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f7910: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F7910u;
    {
        const bool branch_taken_0x1f7910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7910u;
        // 0x1f7914: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7910) {
            ctx->pc = 0x1F7924u;
            goto label_1f7924;
        }
    }
    ctx->pc = 0x1F7918u;
label_1f7918:
    // 0x1f7918: 0x129040  sll         $s2, $s2, 1
    ctx->pc = 0x1f7918u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x1f791c: 0xae820158  sw          $v0, 0x158($s4)
    ctx->pc = 0x1f791cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 344), GPR_U32(ctx, 2));
    // 0x1f7920: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1f7920u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1f7924:
    // 0x1f7924: 0x8e820158  lw          $v0, 0x158($s4)
    ctx->pc = 0x1f7924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 344)));
    // 0x1f7928: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1F7928u;
    {
        const bool branch_taken_0x1f7928 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F792Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7928u;
        // 0x1f792c: 0x2a62001f  slti        $v0, $s3, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)31) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7928) {
            ctx->pc = 0x1F7994u;
            goto label_1f7994;
        }
    }
    ctx->pc = 0x1F7930u;
    // 0x1f7930: 0x2404003f  addiu       $a0, $zero, 0x3F
    ctx->pc = 0x1f7930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1f7934: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x1f7934u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_1f7938:
    // 0x1f7938: 0x2a620020  slti        $v0, $s3, 0x20
    ctx->pc = 0x1f7938u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1f793c: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x1F793Cu;
    {
        const bool branch_taken_0x1f793c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f793c) {
            ctx->pc = 0x1F7940u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F793Cu;
            // 0x1f7940: 0x129200  sll         $s2, $s2, 8 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F7984u;
            goto label_1f7984;
        }
    }
    ctx->pc = 0x1F7944u;
    // 0x1f7944: 0x2673ffe0  addiu       $s3, $s3, -0x20
    ctx->pc = 0x1f7944u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967264));
    // 0x1f7948: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x1f7948u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x1f794c: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x1f794cu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f7950: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f7950u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f7954: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1f7954u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f7958: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f7958u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f795c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f795cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f7960: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1f7960u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f7964: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1f7964u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1f7968: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f7968u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f796c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f796cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f7970: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1f7970u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f7974: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x1f7974u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1f7978: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f7978u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f797c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f797cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f7980: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1f7980u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
label_1f7984:
    // 0x1f7984: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1f7984u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1f7988: 0x483ffeb  bgezl       $a0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x1F7988u;
    {
        const bool branch_taken_0x1f7988 = (GPR_S64(ctx, 4) >= 0);
        if (branch_taken_0x1f7988) {
            ctx->pc = 0x1F798Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F7988u;
            // 0x1f798c: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F7938u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f7938;
        }
    }
    ctx->pc = 0x1F7990u;
    // 0x1f7990: 0x2a62001f  slti        $v0, $s3, 0x1F
    ctx->pc = 0x1f7990u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)31) ? 1 : 0);
label_1f7994:
    // 0x1f7994: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1F7994u;
    {
        const bool branch_taken_0x1f7994 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F7998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7994u;
        // 0x1f7998: 0x1217c2  srl         $v0, $s2, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7994) {
            ctx->pc = 0x1F79D0u;
            goto label_1f79d0;
        }
    }
    ctx->pc = 0x1F799Cu;
    // 0x1f799c: 0x2673ffe1  addiu       $s3, $s3, -0x1F
    ctx->pc = 0x1f799cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967265));
    // 0x1f79a0: 0x12600007  beqz        $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F79A0u;
    {
        const bool branch_taken_0x1f79a0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F79A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F79A0u;
        // 0x1f79a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f79a0) {
            ctx->pc = 0x1F79C0u;
            goto label_1f79c0;
        }
    }
    ctx->pc = 0x1F79A8u;
    // 0x1f79a8: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x1f79a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1f79ac: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x1f79acu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x1f79b0: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x1f79b0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1f79b4: 0x121fc2  srl         $v1, $s2, 31
    ctx->pc = 0x1f79b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x1f79b8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1F79B8u;
    {
        const bool branch_taken_0x1f79b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F79BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F79B8u;
        // 0x1f79bc: 0xae83015c  sw          $v1, 0x15C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 348), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f79b8) {
            ctx->pc = 0x1F79C8u;
            goto label_1f79c8;
        }
    }
    ctx->pc = 0x1F79C0u;
label_1f79c0:
    // 0x1f79c0: 0x1217c2  srl         $v0, $s2, 31
    ctx->pc = 0x1f79c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x1f79c4: 0xae82015c  sw          $v0, 0x15C($s4)
    ctx->pc = 0x1f79c4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 348), GPR_U32(ctx, 2));
label_1f79c8:
    // 0x1f79c8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1F79C8u;
    {
        const bool branch_taken_0x1f79c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F79CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F79C8u;
        // 0x1f79cc: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f79c8) {
            ctx->pc = 0x1F79D8u;
            goto label_1f79d8;
        }
    }
    ctx->pc = 0x1F79D0u;
label_1f79d0:
    // 0x1f79d0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1f79d0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1f79d4: 0xae82015c  sw          $v0, 0x15C($s4)
    ctx->pc = 0x1f79d4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 348), GPR_U32(ctx, 2));
label_1f79d8:
    // 0x1f79d8: 0x8e82015c  lw          $v0, 0x15C($s4)
    ctx->pc = 0x1f79d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 348)));
    // 0x1f79dc: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1F79DCu;
    {
        const bool branch_taken_0x1f79dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f79dc) {
            ctx->pc = 0x1F7A14u;
            goto label_1f7a14;
        }
    }
    ctx->pc = 0x1F79E4u;
    // 0x1f79e4: 0x2403003f  addiu       $v1, $zero, 0x3F
    ctx->pc = 0x1f79e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1f79e8: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x1f79e8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x1f79ec: 0x0  nop
    ctx->pc = 0x1f79ecu;
    // NOP
label_1f79f0:
    // 0x1f79f0: 0x2a620020  slti        $v0, $s3, 0x20
    ctx->pc = 0x1f79f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1f79f4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F79F4u;
    {
        const bool branch_taken_0x1f79f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F79F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F79F4u;
        // 0x1f79f8: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f79f4) {
            ctx->pc = 0x1F7A04u;
            goto label_1f7a04;
        }
    }
    ctx->pc = 0x1F79FCu;
    // 0x1f79fc: 0x2673ffe0  addiu       $s3, $s3, -0x20
    ctx->pc = 0x1f79fcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967264));
    // 0x1f7a00: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x1f7a00u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_1f7a04:
    // 0x1f7a04: 0x0  nop
    ctx->pc = 0x1f7a04u;
    // NOP
    // 0x1f7a08: 0x0  nop
    ctx->pc = 0x1f7a08u;
    // NOP
    // 0x1f7a0c: 0x463fff8  bgezl       $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1F7A0Cu;
    {
        const bool branch_taken_0x1f7a0c = (GPR_S64(ctx, 3) >= 0);
        if (branch_taken_0x1f7a0c) {
            ctx->pc = 0x1F7A10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F7A0Cu;
            // 0x1f7a10: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F79F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f79f0;
        }
    }
    ctx->pc = 0x1F7A14u;
label_1f7a14:
    // 0x1f7a14: 0xc07d74c  jal         func_1F5D30
    ctx->pc = 0x1F7A14u;
    SET_GPR_U32(ctx, 31, 0x1F7A1Cu);
    ctx->pc = 0x1F7A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7A14u;
    // 0x1f7a18: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F5D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F5D30u, 0x1F7A14u, 0x1F7A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7A1Cu;
label_1f7a1c:
    // 0x1f7a1c: 0x100007dc  b           . + 4 + (0x7DC << 2)
    ctx->pc = 0x1F7A1Cu;
    {
        const bool branch_taken_0x1f7a1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7A1Cu;
        // 0x1f7a20: 0x2361823  subu        $v1, $s1, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7a1c) {
            ctx->pc = 0x1F9990u;
            goto label_1f9990;
        }
    }
    ctx->pc = 0x1F7A24u;
    // 0x1f7a24: 0x0  nop
    ctx->pc = 0x1f7a24u;
    // NOP
label_1f7a28:
    // 0x1f7a28: 0x2a62001f  slti        $v0, $s3, 0x1F
    ctx->pc = 0x1f7a28u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x1f7a2c: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1F7A2Cu;
    {
        const bool branch_taken_0x1f7a2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F7A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7A2Cu;
        // 0x1f7a30: 0x1217c2  srl         $v0, $s2, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7a2c) {
            ctx->pc = 0x1F7AA8u;
            goto label_1f7aa8;
        }
    }
    ctx->pc = 0x1F7A34u;
    // 0x1f7a34: 0x2673ffe1  addiu       $s3, $s3, -0x1F
    ctx->pc = 0x1f7a34u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967265));
    // 0x1f7a38: 0x12600009  beqz        $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F7A38u;
    {
        const bool branch_taken_0x1f7a38 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7A38u;
        // 0x1f7a3c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7a38) {
            ctx->pc = 0x1F7A60u;
            goto label_1f7a60;
        }
    }
    ctx->pc = 0x1F7A40u;
    // 0x1f7a40: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x1f7a40u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1f7a44: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x1f7a44u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x1f7a48: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x1f7a48u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1f7a4c: 0x121fc2  srl         $v1, $s2, 31
    ctx->pc = 0x1f7a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x1f7a50: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x1f7a50u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x1f7a54: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1F7A54u;
    {
        const bool branch_taken_0x1f7a54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7A54u;
        // 0x1f7a58: 0xae83019c  sw          $v1, 0x19C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 412), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7a54) {
            ctx->pc = 0x1F7A6Cu;
            goto label_1f7a6c;
        }
    }
    ctx->pc = 0x1F7A5Cu;
    // 0x1f7a5c: 0x0  nop
    ctx->pc = 0x1f7a5cu;
    // NOP
label_1f7a60:
    // 0x1f7a60: 0x1217c2  srl         $v0, $s2, 31
    ctx->pc = 0x1f7a60u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x1f7a64: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1f7a64u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7a68: 0xae82019c  sw          $v0, 0x19C($s4)
    ctx->pc = 0x1f7a68u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 412), GPR_U32(ctx, 2));
label_1f7a6c:
    // 0x1f7a6c: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x1f7a6cu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f7a70: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f7a70u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f7a74: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1f7a74u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f7a78: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f7a78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f7a7c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f7a7cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f7a80: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1f7a80u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f7a84: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1f7a84u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1f7a88: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f7a88u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f7a8c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f7a8cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f7a90: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1f7a90u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f7a94: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x1f7a94u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1f7a98: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f7a98u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f7a9c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f7a9cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f7aa0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F7AA0u;
    {
        const bool branch_taken_0x1f7aa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7AA0u;
        // 0x1f7aa4: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7aa0) {
            ctx->pc = 0x1F7AB4u;
            goto label_1f7ab4;
        }
    }
    ctx->pc = 0x1F7AA8u;
label_1f7aa8:
    // 0x1f7aa8: 0x129040  sll         $s2, $s2, 1
    ctx->pc = 0x1f7aa8u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x1f7aac: 0xae82019c  sw          $v0, 0x19C($s4)
    ctx->pc = 0x1f7aacu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 412), GPR_U32(ctx, 2));
    // 0x1f7ab0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1f7ab0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1f7ab4:
    // 0x1f7ab4: 0x2a620018  slti        $v0, $s3, 0x18
    ctx->pc = 0x1f7ab4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x1f7ab8: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1F7AB8u;
    {
        const bool branch_taken_0x1f7ab8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F7ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7AB8u;
        // 0x1f7abc: 0x121602  srl         $v0, $s2, 24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7ab8) {
            ctx->pc = 0x1F7B30u;
            goto label_1f7b30;
        }
    }
    ctx->pc = 0x1F7AC0u;
    // 0x1f7ac0: 0x2673ffe8  addiu       $s3, $s3, -0x18
    ctx->pc = 0x1f7ac0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967272));
    // 0x1f7ac4: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F7AC4u;
    {
        const bool branch_taken_0x1f7ac4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7AC4u;
        // 0x1f7ac8: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7ac4) {
            ctx->pc = 0x1F7AE8u;
            goto label_1f7ae8;
        }
    }
    ctx->pc = 0x1F7ACCu;
    // 0x1f7acc: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x1f7accu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1f7ad0: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x1f7ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x1f7ad4: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x1f7ad4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1f7ad8: 0x121e02  srl         $v1, $s2, 24
    ctx->pc = 0x1f7ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 24));
    // 0x1f7adc: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x1f7adcu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x1f7ae0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F7AE0u;
    {
        const bool branch_taken_0x1f7ae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7AE0u;
        // 0x1f7ae4: 0xae8301a0  sw          $v1, 0x1A0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 416), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7ae0) {
            ctx->pc = 0x1F7AF4u;
            goto label_1f7af4;
        }
    }
    ctx->pc = 0x1F7AE8u;
label_1f7ae8:
    // 0x1f7ae8: 0x121602  srl         $v0, $s2, 24
    ctx->pc = 0x1f7ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 24));
    // 0x1f7aec: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1f7aecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7af0: 0xae8201a0  sw          $v0, 0x1A0($s4)
    ctx->pc = 0x1f7af0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 416), GPR_U32(ctx, 2));
label_1f7af4:
    // 0x1f7af4: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x1f7af4u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f7af8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f7af8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f7afc: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1f7afcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f7b00: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f7b00u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f7b04: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f7b04u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f7b08: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1f7b08u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f7b0c: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1f7b0cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1f7b10: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f7b10u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f7b14: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f7b14u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f7b18: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1f7b18u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f7b1c: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x1f7b1cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1f7b20: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f7b20u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f7b24: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f7b24u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f7b28: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F7B28u;
    {
        const bool branch_taken_0x1f7b28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7B28u;
        // 0x1f7b2c: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7b28) {
            ctx->pc = 0x1F7B3Cu;
            goto label_1f7b3c;
        }
    }
    ctx->pc = 0x1F7B30u;
label_1f7b30:
    // 0x1f7b30: 0x129200  sll         $s2, $s2, 8
    ctx->pc = 0x1f7b30u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 8));
    // 0x1f7b34: 0xae8201a0  sw          $v0, 0x1A0($s4)
    ctx->pc = 0x1f7b34u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 416), GPR_U32(ctx, 2));
    // 0x1f7b38: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x1f7b38u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_1f7b3c:
    // 0x1f7b3c: 0x2a62001f  slti        $v0, $s3, 0x1F
    ctx->pc = 0x1f7b3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x1f7b40: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1F7B40u;
    {
        const bool branch_taken_0x1f7b40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F7B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7B40u;
        // 0x1f7b44: 0x1217c2  srl         $v0, $s2, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7b40) {
            ctx->pc = 0x1F7BB8u;
            goto label_1f7bb8;
        }
    }
    ctx->pc = 0x1F7B48u;
    // 0x1f7b48: 0x2673ffe1  addiu       $s3, $s3, -0x1F
    ctx->pc = 0x1f7b48u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967265));
    // 0x1f7b4c: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F7B4Cu;
    {
        const bool branch_taken_0x1f7b4c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7B4Cu;
        // 0x1f7b50: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7b4c) {
            ctx->pc = 0x1F7B70u;
            goto label_1f7b70;
        }
    }
    ctx->pc = 0x1F7B54u;
    // 0x1f7b54: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x1f7b54u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1f7b58: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x1f7b58u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x1f7b5c: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x1f7b5cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1f7b60: 0x121fc2  srl         $v1, $s2, 31
    ctx->pc = 0x1f7b60u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x1f7b64: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x1f7b64u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x1f7b68: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F7B68u;
    {
        const bool branch_taken_0x1f7b68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7B68u;
        // 0x1f7b6c: 0xae8301a4  sw          $v1, 0x1A4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 420), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7b68) {
            ctx->pc = 0x1F7B7Cu;
            goto label_1f7b7c;
        }
    }
    ctx->pc = 0x1F7B70u;
label_1f7b70:
    // 0x1f7b70: 0x1217c2  srl         $v0, $s2, 31
    ctx->pc = 0x1f7b70u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x1f7b74: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1f7b74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7b78: 0xae8201a4  sw          $v0, 0x1A4($s4)
    ctx->pc = 0x1f7b78u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 420), GPR_U32(ctx, 2));
label_1f7b7c:
    // 0x1f7b7c: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x1f7b7cu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f7b80: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f7b80u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f7b84: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1f7b84u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f7b88: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f7b88u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f7b8c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f7b8cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f7b90: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1f7b90u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f7b94: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1f7b94u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1f7b98: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f7b98u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f7b9c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f7b9cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f7ba0: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1f7ba0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f7ba4: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x1f7ba4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1f7ba8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f7ba8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f7bac: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f7bacu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f7bb0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F7BB0u;
    {
        const bool branch_taken_0x1f7bb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7BB0u;
        // 0x1f7bb4: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7bb0) {
            ctx->pc = 0x1F7BC4u;
            goto label_1f7bc4;
        }
    }
    ctx->pc = 0x1F7BB8u;
label_1f7bb8:
    // 0x1f7bb8: 0x129040  sll         $s2, $s2, 1
    ctx->pc = 0x1f7bb8u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x1f7bbc: 0xae8201a4  sw          $v0, 0x1A4($s4)
    ctx->pc = 0x1f7bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 420), GPR_U32(ctx, 2));
    // 0x1f7bc0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1f7bc0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1f7bc4:
    // 0x1f7bc4: 0x2a620019  slti        $v0, $s3, 0x19
    ctx->pc = 0x1f7bc4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)25) ? 1 : 0);
    // 0x1f7bc8: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1F7BC8u;
    {
        const bool branch_taken_0x1f7bc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F7BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7BC8u;
        // 0x1f7bcc: 0x121642  srl         $v0, $s2, 25 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 25));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7bc8) {
            ctx->pc = 0x1F7C40u;
            goto label_1f7c40;
        }
    }
    ctx->pc = 0x1F7BD0u;
    // 0x1f7bd0: 0x2673ffe7  addiu       $s3, $s3, -0x19
    ctx->pc = 0x1f7bd0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967271));
    // 0x1f7bd4: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F7BD4u;
    {
        const bool branch_taken_0x1f7bd4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7BD4u;
        // 0x1f7bd8: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7bd4) {
            ctx->pc = 0x1F7BF8u;
            goto label_1f7bf8;
        }
    }
    ctx->pc = 0x1F7BDCu;
    // 0x1f7bdc: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x1f7bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1f7be0: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x1f7be0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x1f7be4: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x1f7be4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1f7be8: 0x121e42  srl         $v1, $s2, 25
    ctx->pc = 0x1f7be8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 25));
    // 0x1f7bec: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x1f7becu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x1f7bf0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F7BF0u;
    {
        const bool branch_taken_0x1f7bf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7BF0u;
        // 0x1f7bf4: 0xae8301a8  sw          $v1, 0x1A8($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 424), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7bf0) {
            ctx->pc = 0x1F7C04u;
            goto label_1f7c04;
        }
    }
    ctx->pc = 0x1F7BF8u;
label_1f7bf8:
    // 0x1f7bf8: 0x121642  srl         $v0, $s2, 25
    ctx->pc = 0x1f7bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 25));
    // 0x1f7bfc: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1f7bfcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7c00: 0xae8201a8  sw          $v0, 0x1A8($s4)
    ctx->pc = 0x1f7c00u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 424), GPR_U32(ctx, 2));
label_1f7c04:
    // 0x1f7c04: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x1f7c04u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f7c08: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f7c08u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f7c0c: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1f7c0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f7c10: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f7c10u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f7c14: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f7c14u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f7c18: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1f7c18u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f7c1c: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1f7c1cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1f7c20: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f7c20u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f7c24: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f7c24u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f7c28: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1f7c28u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f7c2c: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x1f7c2cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1f7c30: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f7c30u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f7c34: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f7c34u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f7c38: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F7C38u;
    {
        const bool branch_taken_0x1f7c38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7C38u;
        // 0x1f7c3c: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7c38) {
            ctx->pc = 0x1F7C4Cu;
            goto label_1f7c4c;
        }
    }
    ctx->pc = 0x1F7C40u;
label_1f7c40:
    // 0x1f7c40: 0x1291c0  sll         $s2, $s2, 7
    ctx->pc = 0x1f7c40u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 7));
    // 0x1f7c44: 0xae8201a8  sw          $v0, 0x1A8($s4)
    ctx->pc = 0x1f7c44u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 424), GPR_U32(ctx, 2));
    // 0x1f7c48: 0x26730007  addiu       $s3, $s3, 0x7
    ctx->pc = 0x1f7c48u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 7));
label_1f7c4c:
    // 0x1f7c4c: 0x2a62001f  slti        $v0, $s3, 0x1F
    ctx->pc = 0x1f7c4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x1f7c50: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1F7C50u;
    {
        const bool branch_taken_0x1f7c50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F7C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7C50u;
        // 0x1f7c54: 0x1217c2  srl         $v0, $s2, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7c50) {
            ctx->pc = 0x1F7CC8u;
            goto label_1f7cc8;
        }
    }
    ctx->pc = 0x1F7C58u;
    // 0x1f7c58: 0x2673ffe1  addiu       $s3, $s3, -0x1F
    ctx->pc = 0x1f7c58u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967265));
    // 0x1f7c5c: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F7C5Cu;
    {
        const bool branch_taken_0x1f7c5c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7C5Cu;
        // 0x1f7c60: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7c5c) {
            ctx->pc = 0x1F7C80u;
            goto label_1f7c80;
        }
    }
    ctx->pc = 0x1F7C64u;
    // 0x1f7c64: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x1f7c64u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1f7c68: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x1f7c68u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x1f7c6c: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x1f7c6cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1f7c70: 0x121fc2  srl         $v1, $s2, 31
    ctx->pc = 0x1f7c70u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x1f7c74: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x1f7c74u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x1f7c78: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F7C78u;
    {
        const bool branch_taken_0x1f7c78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7C78u;
        // 0x1f7c7c: 0xae830018  sw          $v1, 0x18($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7c78) {
            ctx->pc = 0x1F7C8Cu;
            goto label_1f7c8c;
        }
    }
    ctx->pc = 0x1F7C80u;
label_1f7c80:
    // 0x1f7c80: 0x1217c2  srl         $v0, $s2, 31
    ctx->pc = 0x1f7c80u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x1f7c84: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1f7c84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7c88: 0xae820018  sw          $v0, 0x18($s4)
    ctx->pc = 0x1f7c88u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 2));
label_1f7c8c:
    // 0x1f7c8c: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x1f7c8cu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f7c90: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f7c90u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f7c94: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1f7c94u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f7c98: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f7c98u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f7c9c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f7c9cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f7ca0: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1f7ca0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f7ca4: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1f7ca4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1f7ca8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f7ca8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f7cac: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f7cacu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f7cb0: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1f7cb0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f7cb4: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x1f7cb4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1f7cb8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f7cb8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f7cbc: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f7cbcu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f7cc0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F7CC0u;
    {
        const bool branch_taken_0x1f7cc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7CC0u;
        // 0x1f7cc4: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7cc0) {
            ctx->pc = 0x1F7CD4u;
            goto label_1f7cd4;
        }
    }
    ctx->pc = 0x1F7CC8u;
label_1f7cc8:
    // 0x1f7cc8: 0x129040  sll         $s2, $s2, 1
    ctx->pc = 0x1f7cc8u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x1f7ccc: 0xae820018  sw          $v0, 0x18($s4)
    ctx->pc = 0x1f7cccu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 2));
    // 0x1f7cd0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1f7cd0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1f7cd4:
    // 0x1f7cd4: 0x2a62000c  slti        $v0, $s3, 0xC
    ctx->pc = 0x1f7cd4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x1f7cd8: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1F7CD8u;
    {
        const bool branch_taken_0x1f7cd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F7CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7CD8u;
        // 0x1f7cdc: 0x121302  srl         $v0, $s2, 12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7cd8) {
            ctx->pc = 0x1F7D50u;
            goto label_1f7d50;
        }
    }
    ctx->pc = 0x1F7CE0u;
    // 0x1f7ce0: 0x2673fff4  addiu       $s3, $s3, -0xC
    ctx->pc = 0x1f7ce0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967284));
    // 0x1f7ce4: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F7CE4u;
    {
        const bool branch_taken_0x1f7ce4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7CE4u;
        // 0x1f7ce8: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7ce4) {
            ctx->pc = 0x1F7D08u;
            goto label_1f7d08;
        }
    }
    ctx->pc = 0x1F7CECu;
    // 0x1f7cec: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x1f7cecu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1f7cf0: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x1f7cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x1f7cf4: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x1f7cf4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1f7cf8: 0x121b02  srl         $v1, $s2, 12
    ctx->pc = 0x1f7cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 12));
    // 0x1f7cfc: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x1f7cfcu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x1f7d00: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F7D00u;
    {
        const bool branch_taken_0x1f7d00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7D00u;
        // 0x1f7d04: 0xae8301ac  sw          $v1, 0x1AC($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 428), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7d00) {
            ctx->pc = 0x1F7D14u;
            goto label_1f7d14;
        }
    }
    ctx->pc = 0x1F7D08u;
label_1f7d08:
    // 0x1f7d08: 0x121302  srl         $v0, $s2, 12
    ctx->pc = 0x1f7d08u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 12));
    // 0x1f7d0c: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1f7d0cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7d10: 0xae8201ac  sw          $v0, 0x1AC($s4)
    ctx->pc = 0x1f7d10u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 428), GPR_U32(ctx, 2));
label_1f7d14:
    // 0x1f7d14: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x1f7d14u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f7d18: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f7d18u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f7d1c: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1f7d1cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f7d20: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f7d20u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f7d24: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f7d24u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f7d28: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1f7d28u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f7d2c: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1f7d2cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1f7d30: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f7d30u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f7d34: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f7d34u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f7d38: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1f7d38u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f7d3c: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x1f7d3cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1f7d40: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f7d40u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f7d44: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f7d44u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f7d48: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F7D48u;
    {
        const bool branch_taken_0x1f7d48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7D48u;
        // 0x1f7d4c: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7d48) {
            ctx->pc = 0x1F7D5Cu;
            goto label_1f7d5c;
        }
    }
    ctx->pc = 0x1F7D50u;
label_1f7d50:
    // 0x1f7d50: 0x129500  sll         $s2, $s2, 20
    ctx->pc = 0x1f7d50u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 20));
    // 0x1f7d54: 0xae8201ac  sw          $v0, 0x1AC($s4)
    ctx->pc = 0x1f7d54u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 428), GPR_U32(ctx, 2));
    // 0x1f7d58: 0x26730014  addiu       $s3, $s3, 0x14
    ctx->pc = 0x1f7d58u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
label_1f7d5c:
    // 0x1f7d5c: 0x2a62001f  slti        $v0, $s3, 0x1F
    ctx->pc = 0x1f7d5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x1f7d60: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1F7D60u;
    {
        const bool branch_taken_0x1f7d60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F7D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7D60u;
        // 0x1f7d64: 0x1217c2  srl         $v0, $s2, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7d60) {
            ctx->pc = 0x1F7DD8u;
            goto label_1f7dd8;
        }
    }
    ctx->pc = 0x1F7D68u;
    // 0x1f7d68: 0x2673ffe1  addiu       $s3, $s3, -0x1F
    ctx->pc = 0x1f7d68u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967265));
    // 0x1f7d6c: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F7D6Cu;
    {
        const bool branch_taken_0x1f7d6c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7D6Cu;
        // 0x1f7d70: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7d6c) {
            ctx->pc = 0x1F7D90u;
            goto label_1f7d90;
        }
    }
    ctx->pc = 0x1F7D74u;
    // 0x1f7d74: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x1f7d74u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1f7d78: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x1f7d78u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x1f7d7c: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x1f7d7cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1f7d80: 0x121fc2  srl         $v1, $s2, 31
    ctx->pc = 0x1f7d80u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x1f7d84: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x1f7d84u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x1f7d88: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F7D88u;
    {
        const bool branch_taken_0x1f7d88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7D88u;
        // 0x1f7d8c: 0xae830018  sw          $v1, 0x18($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7d88) {
            ctx->pc = 0x1F7D9Cu;
            goto label_1f7d9c;
        }
    }
    ctx->pc = 0x1F7D90u;
label_1f7d90:
    // 0x1f7d90: 0x1217c2  srl         $v0, $s2, 31
    ctx->pc = 0x1f7d90u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x1f7d94: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1f7d94u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7d98: 0xae820018  sw          $v0, 0x18($s4)
    ctx->pc = 0x1f7d98u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 2));
label_1f7d9c:
    // 0x1f7d9c: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x1f7d9cu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f7da0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f7da0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f7da4: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1f7da4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f7da8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f7da8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f7dac: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f7dacu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f7db0: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1f7db0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f7db4: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1f7db4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1f7db8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f7db8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f7dbc: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f7dbcu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f7dc0: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1f7dc0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f7dc4: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x1f7dc4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1f7dc8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f7dc8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f7dcc: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f7dccu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f7dd0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F7DD0u;
    {
        const bool branch_taken_0x1f7dd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7DD0u;
        // 0x1f7dd4: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7dd0) {
            ctx->pc = 0x1F7DE4u;
            goto label_1f7de4;
        }
    }
    ctx->pc = 0x1F7DD8u;
label_1f7dd8:
    // 0x1f7dd8: 0x129040  sll         $s2, $s2, 1
    ctx->pc = 0x1f7dd8u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x1f7ddc: 0xae820018  sw          $v0, 0x18($s4)
    ctx->pc = 0x1f7ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 2));
    // 0x1f7de0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1f7de0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1f7de4:
    // 0x1f7de4: 0x2a62000a  slti        $v0, $s3, 0xA
    ctx->pc = 0x1f7de4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x1f7de8: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1F7DE8u;
    {
        const bool branch_taken_0x1f7de8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F7DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7DE8u;
        // 0x1f7dec: 0x121282  srl         $v0, $s2, 10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7de8) {
            ctx->pc = 0x1F7E60u;
            goto label_1f7e60;
        }
    }
    ctx->pc = 0x1F7DF0u;
    // 0x1f7df0: 0x2673fff6  addiu       $s3, $s3, -0xA
    ctx->pc = 0x1f7df0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967286));
    // 0x1f7df4: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F7DF4u;
    {
        const bool branch_taken_0x1f7df4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7DF4u;
        // 0x1f7df8: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7df4) {
            ctx->pc = 0x1F7E18u;
            goto label_1f7e18;
        }
    }
    ctx->pc = 0x1F7DFCu;
    // 0x1f7dfc: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x1f7dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1f7e00: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x1f7e00u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x1f7e04: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x1f7e04u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1f7e08: 0x121a82  srl         $v1, $s2, 10
    ctx->pc = 0x1f7e08u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 10));
    // 0x1f7e0c: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x1f7e0cu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x1f7e10: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F7E10u;
    {
        const bool branch_taken_0x1f7e10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7E10u;
        // 0x1f7e14: 0xae8301b0  sw          $v1, 0x1B0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 432), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7e10) {
            ctx->pc = 0x1F7E24u;
            goto label_1f7e24;
        }
    }
    ctx->pc = 0x1F7E18u;
label_1f7e18:
    // 0x1f7e18: 0x121282  srl         $v0, $s2, 10
    ctx->pc = 0x1f7e18u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 10));
    // 0x1f7e1c: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1f7e1cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7e20: 0xae8201b0  sw          $v0, 0x1B0($s4)
    ctx->pc = 0x1f7e20u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 432), GPR_U32(ctx, 2));
label_1f7e24:
    // 0x1f7e24: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x1f7e24u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f7e28: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f7e28u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f7e2c: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1f7e2cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f7e30: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f7e30u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f7e34: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f7e34u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f7e38: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1f7e38u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f7e3c: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1f7e3cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1f7e40: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f7e40u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f7e44: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f7e44u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f7e48: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1f7e48u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f7e4c: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x1f7e4cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1f7e50: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f7e50u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f7e54: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f7e54u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f7e58: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F7E58u;
    {
        const bool branch_taken_0x1f7e58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7E58u;
        // 0x1f7e5c: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7e58) {
            ctx->pc = 0x1F7E6Cu;
            goto label_1f7e6c;
        }
    }
    ctx->pc = 0x1F7E60u;
label_1f7e60:
    // 0x1f7e60: 0x129580  sll         $s2, $s2, 22
    ctx->pc = 0x1f7e60u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 22));
    // 0x1f7e64: 0xae8201b0  sw          $v0, 0x1B0($s4)
    ctx->pc = 0x1f7e64u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 432), GPR_U32(ctx, 2));
    // 0x1f7e68: 0x26730016  addiu       $s3, $s3, 0x16
    ctx->pc = 0x1f7e68u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 22));
label_1f7e6c:
    // 0x1f7e6c: 0x2a62001f  slti        $v0, $s3, 0x1F
    ctx->pc = 0x1f7e6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x1f7e70: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1F7E70u;
    {
        const bool branch_taken_0x1f7e70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F7E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7E70u;
        // 0x1f7e74: 0x1217c2  srl         $v0, $s2, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7e70) {
            ctx->pc = 0x1F7EE8u;
            goto label_1f7ee8;
        }
    }
    ctx->pc = 0x1F7E78u;
    // 0x1f7e78: 0x2673ffe1  addiu       $s3, $s3, -0x1F
    ctx->pc = 0x1f7e78u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967265));
    // 0x1f7e7c: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F7E7Cu;
    {
        const bool branch_taken_0x1f7e7c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7E7Cu;
        // 0x1f7e80: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7e7c) {
            ctx->pc = 0x1F7EA0u;
            goto label_1f7ea0;
        }
    }
    ctx->pc = 0x1F7E84u;
    // 0x1f7e84: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x1f7e84u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1f7e88: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x1f7e88u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x1f7e8c: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x1f7e8cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1f7e90: 0x121fc2  srl         $v1, $s2, 31
    ctx->pc = 0x1f7e90u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x1f7e94: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x1f7e94u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x1f7e98: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F7E98u;
    {
        const bool branch_taken_0x1f7e98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7E98u;
        // 0x1f7e9c: 0xae830018  sw          $v1, 0x18($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7e98) {
            ctx->pc = 0x1F7EACu;
            goto label_1f7eac;
        }
    }
    ctx->pc = 0x1F7EA0u;
label_1f7ea0:
    // 0x1f7ea0: 0x1217c2  srl         $v0, $s2, 31
    ctx->pc = 0x1f7ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x1f7ea4: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1f7ea4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7ea8: 0xae820018  sw          $v0, 0x18($s4)
    ctx->pc = 0x1f7ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 2));
label_1f7eac:
    // 0x1f7eac: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x1f7eacu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f7eb0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f7eb0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f7eb4: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1f7eb4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f7eb8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f7eb8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f7ebc: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f7ebcu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f7ec0: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1f7ec0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f7ec4: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1f7ec4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1f7ec8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f7ec8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f7ecc: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f7eccu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f7ed0: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1f7ed0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f7ed4: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x1f7ed4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1f7ed8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f7ed8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f7edc: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f7edcu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f7ee0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F7EE0u;
    {
        const bool branch_taken_0x1f7ee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7EE0u;
        // 0x1f7ee4: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7ee0) {
            ctx->pc = 0x1F7EF4u;
            goto label_1f7ef4;
        }
    }
    ctx->pc = 0x1F7EE8u;
label_1f7ee8:
    // 0x1f7ee8: 0x129040  sll         $s2, $s2, 1
    ctx->pc = 0x1f7ee8u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x1f7eec: 0xae820018  sw          $v0, 0x18($s4)
    ctx->pc = 0x1f7eecu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 2));
    // 0x1f7ef0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1f7ef0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1f7ef4:
    // 0x1f7ef4: 0x2a62000a  slti        $v0, $s3, 0xA
    ctx->pc = 0x1f7ef4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x1f7ef8: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1F7EF8u;
    {
        const bool branch_taken_0x1f7ef8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F7EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7EF8u;
        // 0x1f7efc: 0x121282  srl         $v0, $s2, 10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7ef8) {
            ctx->pc = 0x1F7F38u;
            goto label_1f7f38;
        }
    }
    ctx->pc = 0x1F7F00u;
    // 0x1f7f00: 0x2673fff6  addiu       $s3, $s3, -0xA
    ctx->pc = 0x1f7f00u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967286));
    // 0x1f7f04: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F7F04u;
    {
        const bool branch_taken_0x1f7f04 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7F04u;
        // 0x1f7f08: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7f04) {
            ctx->pc = 0x1F7F28u;
            goto label_1f7f28;
        }
    }
    ctx->pc = 0x1F7F0Cu;
    // 0x1f7f0c: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x1f7f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1f7f10: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x1f7f10u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x1f7f14: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x1f7f14u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1f7f18: 0x121a82  srl         $v1, $s2, 10
    ctx->pc = 0x1f7f18u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 10));
    // 0x1f7f1c: 0x10000692  b           . + 4 + (0x692 << 2)
    ctx->pc = 0x1F7F1Cu;
    {
        const bool branch_taken_0x1f7f1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7F1Cu;
        // 0x1f7f20: 0xae8301b4  sw          $v1, 0x1B4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 436), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7f1c) {
            ctx->pc = 0x1F9968u;
            goto label_1f9968;
        }
    }
    ctx->pc = 0x1F7F24u;
    // 0x1f7f24: 0x0  nop
    ctx->pc = 0x1f7f24u;
    // NOP
label_1f7f28:
    // 0x1f7f28: 0x121282  srl         $v0, $s2, 10
    ctx->pc = 0x1f7f28u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 10));
    // 0x1f7f2c: 0x1000068e  b           . + 4 + (0x68E << 2)
    ctx->pc = 0x1F7F2Cu;
    {
        const bool branch_taken_0x1f7f2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7F2Cu;
        // 0x1f7f30: 0xae8201b4  sw          $v0, 0x1B4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 436), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7f2c) {
            ctx->pc = 0x1F9968u;
            goto label_1f9968;
        }
    }
    ctx->pc = 0x1F7F34u;
    // 0x1f7f34: 0x0  nop
    ctx->pc = 0x1f7f34u;
    // NOP
label_1f7f38:
    // 0x1f7f38: 0x26730016  addiu       $s3, $s3, 0x16
    ctx->pc = 0x1f7f38u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 22));
    // 0x1f7f3c: 0x10000693  b           . + 4 + (0x693 << 2)
    ctx->pc = 0x1F7F3Cu;
    {
        const bool branch_taken_0x1f7f3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7F3Cu;
        // 0x1f7f40: 0xae8201b4  sw          $v0, 0x1B4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 436), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7f3c) {
            ctx->pc = 0x1F998Cu;
            goto label_1f998c;
        }
    }
    ctx->pc = 0x1F7F44u;
    // 0x1f7f44: 0x0  nop
    ctx->pc = 0x1f7f44u;
    // NOP
label_1f7f48:
    // 0x1f7f48: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f7f48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f7f4c: 0x2a63001e  slti        $v1, $s3, 0x1E
    ctx->pc = 0x1f7f4cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)30) ? 1 : 0);
    // 0x1f7f50: 0x1460001d  bnez        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x1F7F50u;
    {
        const bool branch_taken_0x1f7f50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F7F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7F50u;
        // 0x1f7f54: 0xae820310  sw          $v0, 0x310($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 784), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7f50) {
            ctx->pc = 0x1F7FC8u;
            goto label_1f7fc8;
        }
    }
    ctx->pc = 0x1F7F58u;
    // 0x1f7f58: 0x2673ffe2  addiu       $s3, $s3, -0x1E
    ctx->pc = 0x1f7f58u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967266));
    // 0x1f7f5c: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F7F5Cu;
    {
        const bool branch_taken_0x1f7f5c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7F5Cu;
        // 0x1f7f60: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7f5c) {
            ctx->pc = 0x1F7F80u;
            goto label_1f7f80;
        }
    }
    ctx->pc = 0x1F7F64u;
    // 0x1f7f64: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x1f7f64u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1f7f68: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x1f7f68u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x1f7f6c: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x1f7f6cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1f7f70: 0x121f82  srl         $v1, $s2, 30
    ctx->pc = 0x1f7f70u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 30));
    // 0x1f7f74: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x1f7f74u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x1f7f78: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F7F78u;
    {
        const bool branch_taken_0x1f7f78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7F78u;
        // 0x1f7f7c: 0xae830088  sw          $v1, 0x88($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 136), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7f78) {
            ctx->pc = 0x1F7F8Cu;
            goto label_1f7f8c;
        }
    }
    ctx->pc = 0x1F7F80u;
label_1f7f80:
    // 0x1f7f80: 0x121782  srl         $v0, $s2, 30
    ctx->pc = 0x1f7f80u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 30));
    // 0x1f7f84: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1f7f84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7f88: 0xae820088  sw          $v0, 0x88($s4)
    ctx->pc = 0x1f7f88u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 136), GPR_U32(ctx, 2));
label_1f7f8c:
    // 0x1f7f8c: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x1f7f8cu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f7f90: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f7f90u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f7f94: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1f7f94u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f7f98: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f7f98u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f7f9c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f7f9cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f7fa0: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1f7fa0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f7fa4: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1f7fa4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1f7fa8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f7fa8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f7fac: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f7facu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f7fb0: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1f7fb0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f7fb4: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x1f7fb4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1f7fb8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f7fb8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f7fbc: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f7fbcu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f7fc0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1F7FC0u;
    {
        const bool branch_taken_0x1f7fc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7FC0u;
        // 0x1f7fc4: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7fc0) {
            ctx->pc = 0x1F7FD8u;
            goto label_1f7fd8;
        }
    }
    ctx->pc = 0x1F7FC8u;
label_1f7fc8:
    // 0x1f7fc8: 0x121782  srl         $v0, $s2, 30
    ctx->pc = 0x1f7fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 30));
    // 0x1f7fcc: 0x129080  sll         $s2, $s2, 2
    ctx->pc = 0x1f7fccu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1f7fd0: 0xae820088  sw          $v0, 0x88($s4)
    ctx->pc = 0x1f7fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 136), GPR_U32(ctx, 2));
    // 0x1f7fd4: 0x26730002  addiu       $s3, $s3, 0x2
    ctx->pc = 0x1f7fd4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
label_1f7fd8:
    // 0x1f7fd8: 0x2a62001c  slti        $v0, $s3, 0x1C
    ctx->pc = 0x1f7fd8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)28) ? 1 : 0);
    // 0x1f7fdc: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1F7FDCu;
    {
        const bool branch_taken_0x1f7fdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F7FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7FDCu;
        // 0x1f7fe0: 0x121702  srl         $v0, $s2, 28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7fdc) {
            ctx->pc = 0x1F8058u;
            goto label_1f8058;
        }
    }
    ctx->pc = 0x1F7FE4u;
    // 0x1f7fe4: 0x2673ffe4  addiu       $s3, $s3, -0x1C
    ctx->pc = 0x1f7fe4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967268));
    // 0x1f7fe8: 0x12600009  beqz        $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F7FE8u;
    {
        const bool branch_taken_0x1f7fe8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7FE8u;
        // 0x1f7fec: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7fe8) {
            ctx->pc = 0x1F8010u;
            goto label_1f8010;
        }
    }
    ctx->pc = 0x1F7FF0u;
    // 0x1f7ff0: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x1f7ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1f7ff4: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x1f7ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x1f7ff8: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x1f7ff8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1f7ffc: 0x121f02  srl         $v1, $s2, 28
    ctx->pc = 0x1f7ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 28));
    // 0x1f8000: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x1f8000u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x1f8004: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1F8004u;
    {
        const bool branch_taken_0x1f8004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8004u;
        // 0x1f8008: 0xae83008c  sw          $v1, 0x8C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 140), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8004) {
            ctx->pc = 0x1F801Cu;
            goto label_1f801c;
        }
    }
    ctx->pc = 0x1F800Cu;
    // 0x1f800c: 0x0  nop
    ctx->pc = 0x1f800cu;
    // NOP
label_1f8010:
    // 0x1f8010: 0x121702  srl         $v0, $s2, 28
    ctx->pc = 0x1f8010u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 28));
    // 0x1f8014: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1f8014u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8018: 0xae82008c  sw          $v0, 0x8C($s4)
    ctx->pc = 0x1f8018u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 140), GPR_U32(ctx, 2));
label_1f801c:
    // 0x1f801c: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x1f801cu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f8020: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f8020u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f8024: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1f8024u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f8028: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f8028u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f802c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f802cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f8030: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1f8030u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f8034: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1f8034u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1f8038: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f8038u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f803c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f803cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f8040: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1f8040u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f8044: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x1f8044u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1f8048: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f8048u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f804c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f804cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f8050: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F8050u;
    {
        const bool branch_taken_0x1f8050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8050u;
        // 0x1f8054: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8050) {
            ctx->pc = 0x1F8064u;
            goto label_1f8064;
        }
    }
    ctx->pc = 0x1F8058u;
label_1f8058:
    // 0x1f8058: 0x129100  sll         $s2, $s2, 4
    ctx->pc = 0x1f8058u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x1f805c: 0xae82008c  sw          $v0, 0x8C($s4)
    ctx->pc = 0x1f805cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 140), GPR_U32(ctx, 2));
    // 0x1f8060: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x1f8060u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_1f8064:
    // 0x1f8064: 0x8e830088  lw          $v1, 0x88($s4)
    ctx->pc = 0x1f8064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 136)));
    // 0x1f8068: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1f8068u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f806c: 0x146400e2  bne         $v1, $a0, . + 4 + (0xE2 << 2)
    ctx->pc = 0x1F806Cu;
    {
        const bool branch_taken_0x1f806c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x1F8070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F806Cu;
        // 0x1f8070: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f806c) {
            ctx->pc = 0x1F83F8u;
            goto label_1f83f8;
        }
    }
    ctx->pc = 0x1F8074u;
    // 0x1f8074: 0x2a620012  slti        $v0, $s3, 0x12
    ctx->pc = 0x1f8074u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)18) ? 1 : 0);
    // 0x1f8078: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1F8078u;
    {
        const bool branch_taken_0x1f8078 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F807Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8078u;
        // 0x1f807c: 0x121482  srl         $v0, $s2, 18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8078) {
            ctx->pc = 0x1F80F0u;
            goto label_1f80f0;
        }
    }
    ctx->pc = 0x1F8080u;
    // 0x1f8080: 0x2673ffee  addiu       $s3, $s3, -0x12
    ctx->pc = 0x1f8080u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967278));
    // 0x1f8084: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F8084u;
    {
        const bool branch_taken_0x1f8084 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8084u;
        // 0x1f8088: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8084) {
            ctx->pc = 0x1F80A8u;
            goto label_1f80a8;
        }
    }
    ctx->pc = 0x1F808Cu;
    // 0x1f808c: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x1f808cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1f8090: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x1f8090u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x1f8094: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x1f8094u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1f8098: 0x121c82  srl         $v1, $s2, 18
    ctx->pc = 0x1f8098u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 18));
    // 0x1f809c: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x1f809cu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x1f80a0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F80A0u;
    {
        const bool branch_taken_0x1f80a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F80A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F80A0u;
        // 0x1f80a4: 0xae830090  sw          $v1, 0x90($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 144), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f80a0) {
            ctx->pc = 0x1F80B4u;
            goto label_1f80b4;
        }
    }
    ctx->pc = 0x1F80A8u;
label_1f80a8:
    // 0x1f80a8: 0x121482  srl         $v0, $s2, 18
    ctx->pc = 0x1f80a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 18));
    // 0x1f80ac: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1f80acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f80b0: 0xae820090  sw          $v0, 0x90($s4)
    ctx->pc = 0x1f80b0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 144), GPR_U32(ctx, 2));
label_1f80b4:
    // 0x1f80b4: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x1f80b4u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f80b8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f80b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f80bc: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1f80bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f80c0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f80c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f80c4: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f80c4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f80c8: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1f80c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f80cc: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1f80ccu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1f80d0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f80d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f80d4: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f80d4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f80d8: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1f80d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f80dc: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x1f80dcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1f80e0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f80e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f80e4: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f80e4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f80e8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F80E8u;
    {
        const bool branch_taken_0x1f80e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F80ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F80E8u;
        // 0x1f80ec: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f80e8) {
            ctx->pc = 0x1F80FCu;
            goto label_1f80fc;
        }
    }
    ctx->pc = 0x1F80F0u;
label_1f80f0:
    // 0x1f80f0: 0x129380  sll         $s2, $s2, 14
    ctx->pc = 0x1f80f0u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 14));
    // 0x1f80f4: 0xae820090  sw          $v0, 0x90($s4)
    ctx->pc = 0x1f80f4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 144), GPR_U32(ctx, 2));
    // 0x1f80f8: 0x2673000e  addiu       $s3, $s3, 0xE
    ctx->pc = 0x1f80f8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 14));
label_1f80fc:
    // 0x1f80fc: 0x2a62001f  slti        $v0, $s3, 0x1F
    ctx->pc = 0x1f80fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x1f8100: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1F8100u;
    {
        const bool branch_taken_0x1f8100 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F8104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8100u;
        // 0x1f8104: 0x1217c2  srl         $v0, $s2, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8100) {
            ctx->pc = 0x1F8178u;
            goto label_1f8178;
        }
    }
    ctx->pc = 0x1F8108u;
    // 0x1f8108: 0x2673ffe1  addiu       $s3, $s3, -0x1F
    ctx->pc = 0x1f8108u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967265));
    // 0x1f810c: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F810Cu;
    {
        const bool branch_taken_0x1f810c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F810Cu;
        // 0x1f8110: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f810c) {
            ctx->pc = 0x1F8130u;
            goto label_1f8130;
        }
    }
    ctx->pc = 0x1F8114u;
    // 0x1f8114: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x1f8114u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1f8118: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x1f8118u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x1f811c: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x1f811cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1f8120: 0x121fc2  srl         $v1, $s2, 31
    ctx->pc = 0x1f8120u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x1f8124: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x1f8124u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x1f8128: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F8128u;
    {
        const bool branch_taken_0x1f8128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F812Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8128u;
        // 0x1f812c: 0xae830018  sw          $v1, 0x18($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8128) {
            ctx->pc = 0x1F813Cu;
            goto label_1f813c;
        }
    }
    ctx->pc = 0x1F8130u;
label_1f8130:
    // 0x1f8130: 0x1217c2  srl         $v0, $s2, 31
    ctx->pc = 0x1f8130u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x1f8134: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1f8134u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8138: 0xae820018  sw          $v0, 0x18($s4)
    ctx->pc = 0x1f8138u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 2));
label_1f813c:
    // 0x1f813c: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x1f813cu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f8140: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f8140u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f8144: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1f8144u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f8148: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f8148u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f814c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f814cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f8150: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1f8150u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f8154: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1f8154u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1f8158: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f8158u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f815c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f815cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f8160: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1f8160u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f8164: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x1f8164u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1f8168: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f8168u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f816c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f816cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f8170: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F8170u;
    {
        const bool branch_taken_0x1f8170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8170u;
        // 0x1f8174: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8170) {
            ctx->pc = 0x1F8184u;
            goto label_1f8184;
        }
    }
    ctx->pc = 0x1F8178u;
label_1f8178:
    // 0x1f8178: 0x129040  sll         $s2, $s2, 1
    ctx->pc = 0x1f8178u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x1f817c: 0xae820018  sw          $v0, 0x18($s4)
    ctx->pc = 0x1f817cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 2));
    // 0x1f8180: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1f8180u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1f8184:
    // 0x1f8184: 0x2a620012  slti        $v0, $s3, 0x12
    ctx->pc = 0x1f8184u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)18) ? 1 : 0);
    // 0x1f8188: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1F8188u;
    {
        const bool branch_taken_0x1f8188 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F818Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8188u;
        // 0x1f818c: 0x121482  srl         $v0, $s2, 18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8188) {
            ctx->pc = 0x1F8200u;
            goto label_1f8200;
        }
    }
    ctx->pc = 0x1F8190u;
    // 0x1f8190: 0x2673ffee  addiu       $s3, $s3, -0x12
    ctx->pc = 0x1f8190u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967278));
    // 0x1f8194: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F8194u;
    {
        const bool branch_taken_0x1f8194 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8194u;
        // 0x1f8198: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8194) {
            ctx->pc = 0x1F81B8u;
            goto label_1f81b8;
        }
    }
    ctx->pc = 0x1F819Cu;
    // 0x1f819c: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x1f819cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1f81a0: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x1f81a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x1f81a4: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x1f81a4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1f81a8: 0x121c82  srl         $v1, $s2, 18
    ctx->pc = 0x1f81a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 18));
    // 0x1f81ac: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x1f81acu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x1f81b0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F81B0u;
    {
        const bool branch_taken_0x1f81b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F81B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F81B0u;
        // 0x1f81b4: 0xae830094  sw          $v1, 0x94($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 148), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f81b0) {
            ctx->pc = 0x1F81C4u;
            goto label_1f81c4;
        }
    }
    ctx->pc = 0x1F81B8u;
label_1f81b8:
    // 0x1f81b8: 0x121482  srl         $v0, $s2, 18
    ctx->pc = 0x1f81b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 18));
    // 0x1f81bc: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1f81bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f81c0: 0xae820094  sw          $v0, 0x94($s4)
    ctx->pc = 0x1f81c0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 148), GPR_U32(ctx, 2));
label_1f81c4:
    // 0x1f81c4: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x1f81c4u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f81c8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f81c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f81cc: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1f81ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f81d0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f81d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f81d4: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f81d4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f81d8: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1f81d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f81dc: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1f81dcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1f81e0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f81e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f81e4: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f81e4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f81e8: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1f81e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f81ec: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x1f81ecu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1f81f0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f81f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f81f4: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f81f4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f81f8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F81F8u;
    {
        const bool branch_taken_0x1f81f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F81FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F81F8u;
        // 0x1f81fc: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f81f8) {
            ctx->pc = 0x1F820Cu;
            goto label_1f820c;
        }
    }
    ctx->pc = 0x1F8200u;
label_1f8200:
    // 0x1f8200: 0x129380  sll         $s2, $s2, 14
    ctx->pc = 0x1f8200u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 14));
    // 0x1f8204: 0xae820094  sw          $v0, 0x94($s4)
    ctx->pc = 0x1f8204u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 148), GPR_U32(ctx, 2));
    // 0x1f8208: 0x2673000e  addiu       $s3, $s3, 0xE
    ctx->pc = 0x1f8208u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 14));
label_1f820c:
    // 0x1f820c: 0x2a62001b  slti        $v0, $s3, 0x1B
    ctx->pc = 0x1f820cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)27) ? 1 : 0);
    // 0x1f8210: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1F8210u;
    {
        const bool branch_taken_0x1f8210 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F8214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8210u;
        // 0x1f8214: 0x1216c2  srl         $v0, $s2, 27 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 27));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8210) {
            ctx->pc = 0x1F8288u;
            goto label_1f8288;
        }
    }
    ctx->pc = 0x1F8218u;
    // 0x1f8218: 0x2673ffe5  addiu       $s3, $s3, -0x1B
    ctx->pc = 0x1f8218u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967269));
    // 0x1f821c: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F821Cu;
    {
        const bool branch_taken_0x1f821c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F821Cu;
        // 0x1f8220: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f821c) {
            ctx->pc = 0x1F8240u;
            goto label_1f8240;
        }
    }
    ctx->pc = 0x1F8224u;
    // 0x1f8224: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x1f8224u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1f8228: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x1f8228u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x1f822c: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x1f822cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1f8230: 0x121ec2  srl         $v1, $s2, 27
    ctx->pc = 0x1f8230u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 27));
    // 0x1f8234: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x1f8234u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x1f8238: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F8238u;
    {
        const bool branch_taken_0x1f8238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F823Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8238u;
        // 0x1f823c: 0xae830098  sw          $v1, 0x98($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 152), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8238) {
            ctx->pc = 0x1F824Cu;
            goto label_1f824c;
        }
    }
    ctx->pc = 0x1F8240u;
label_1f8240:
    // 0x1f8240: 0x1216c2  srl         $v0, $s2, 27
    ctx->pc = 0x1f8240u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 27));
    // 0x1f8244: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1f8244u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8248: 0xae820098  sw          $v0, 0x98($s4)
    ctx->pc = 0x1f8248u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 152), GPR_U32(ctx, 2));
label_1f824c:
    // 0x1f824c: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x1f824cu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f8250: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f8250u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f8254: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1f8254u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f8258: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f8258u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f825c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f825cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f8260: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1f8260u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f8264: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1f8264u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1f8268: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f8268u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f826c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f826cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f8270: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1f8270u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f8274: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x1f8274u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1f8278: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f8278u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f827c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f827cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f8280: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F8280u;
    {
        const bool branch_taken_0x1f8280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8280u;
        // 0x1f8284: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8280) {
            ctx->pc = 0x1F8294u;
            goto label_1f8294;
        }
    }
    ctx->pc = 0x1F8288u;
label_1f8288:
    // 0x1f8288: 0x129140  sll         $s2, $s2, 5
    ctx->pc = 0x1f8288u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
    // 0x1f828c: 0xae820098  sw          $v0, 0x98($s4)
    ctx->pc = 0x1f828cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 152), GPR_U32(ctx, 2));
    // 0x1f8290: 0x26730005  addiu       $s3, $s3, 0x5
    ctx->pc = 0x1f8290u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 5));
label_1f8294:
    // 0x1f8294: 0x2a62001b  slti        $v0, $s3, 0x1B
    ctx->pc = 0x1f8294u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)27) ? 1 : 0);
    // 0x1f8298: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1F8298u;
    {
        const bool branch_taken_0x1f8298 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F829Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8298u;
        // 0x1f829c: 0x1216c2  srl         $v0, $s2, 27 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 27));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8298) {
            ctx->pc = 0x1F8310u;
            goto label_1f8310;
        }
    }
    ctx->pc = 0x1F82A0u;
    // 0x1f82a0: 0x2673ffe5  addiu       $s3, $s3, -0x1B
    ctx->pc = 0x1f82a0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967269));
    // 0x1f82a4: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F82A4u;
    {
        const bool branch_taken_0x1f82a4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F82A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F82A4u;
        // 0x1f82a8: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f82a4) {
            ctx->pc = 0x1F82C8u;
            goto label_1f82c8;
        }
    }
    ctx->pc = 0x1F82ACu;
    // 0x1f82ac: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x1f82acu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1f82b0: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x1f82b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x1f82b4: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x1f82b4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1f82b8: 0x121ec2  srl         $v1, $s2, 27
    ctx->pc = 0x1f82b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 27));
    // 0x1f82bc: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x1f82bcu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x1f82c0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F82C0u;
    {
        const bool branch_taken_0x1f82c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F82C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F82C0u;
        // 0x1f82c4: 0xae83009c  sw          $v1, 0x9C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 156), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f82c0) {
            ctx->pc = 0x1F82D4u;
            goto label_1f82d4;
        }
    }
    ctx->pc = 0x1F82C8u;
label_1f82c8:
    // 0x1f82c8: 0x1216c2  srl         $v0, $s2, 27
    ctx->pc = 0x1f82c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 27));
    // 0x1f82cc: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1f82ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f82d0: 0xae82009c  sw          $v0, 0x9C($s4)
    ctx->pc = 0x1f82d0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 156), GPR_U32(ctx, 2));
label_1f82d4:
    // 0x1f82d4: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x1f82d4u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f82d8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f82d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f82dc: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1f82dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f82e0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f82e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f82e4: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f82e4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f82e8: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1f82e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f82ec: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1f82ecu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1f82f0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f82f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f82f4: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f82f4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f82f8: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1f82f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f82fc: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x1f82fcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1f8300: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f8300u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f8304: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f8304u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f8308: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F8308u;
    {
        const bool branch_taken_0x1f8308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F830Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8308u;
        // 0x1f830c: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8308) {
            ctx->pc = 0x1F831Cu;
            goto label_1f831c;
        }
    }
    ctx->pc = 0x1F8310u;
label_1f8310:
    // 0x1f8310: 0x129140  sll         $s2, $s2, 5
    ctx->pc = 0x1f8310u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
    // 0x1f8314: 0xae82009c  sw          $v0, 0x9C($s4)
    ctx->pc = 0x1f8314u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 156), GPR_U32(ctx, 2));
    // 0x1f8318: 0x26730005  addiu       $s3, $s3, 0x5
    ctx->pc = 0x1f8318u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 5));
label_1f831c:
    // 0x1f831c: 0x2a62001b  slti        $v0, $s3, 0x1B
    ctx->pc = 0x1f831cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)27) ? 1 : 0);
    // 0x1f8320: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1F8320u;
    {
        const bool branch_taken_0x1f8320 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F8324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8320u;
        // 0x1f8324: 0x1216c2  srl         $v0, $s2, 27 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 27));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8320) {
            ctx->pc = 0x1F8398u;
            goto label_1f8398;
        }
    }
    ctx->pc = 0x1F8328u;
    // 0x1f8328: 0x2673ffe5  addiu       $s3, $s3, -0x1B
    ctx->pc = 0x1f8328u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967269));
    // 0x1f832c: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F832Cu;
    {
        const bool branch_taken_0x1f832c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F832Cu;
        // 0x1f8330: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f832c) {
            ctx->pc = 0x1F8350u;
            goto label_1f8350;
        }
    }
    ctx->pc = 0x1F8334u;
    // 0x1f8334: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x1f8334u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1f8338: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x1f8338u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x1f833c: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x1f833cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1f8340: 0x121ec2  srl         $v1, $s2, 27
    ctx->pc = 0x1f8340u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 27));
    // 0x1f8344: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x1f8344u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x1f8348: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F8348u;
    {
        const bool branch_taken_0x1f8348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F834Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8348u;
        // 0x1f834c: 0xae8300a0  sw          $v1, 0xA0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 160), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8348) {
            ctx->pc = 0x1F835Cu;
            goto label_1f835c;
        }
    }
    ctx->pc = 0x1F8350u;
label_1f8350:
    // 0x1f8350: 0x1216c2  srl         $v0, $s2, 27
    ctx->pc = 0x1f8350u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 27));
    // 0x1f8354: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1f8354u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8358: 0xae8200a0  sw          $v0, 0xA0($s4)
    ctx->pc = 0x1f8358u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 160), GPR_U32(ctx, 2));
label_1f835c:
    // 0x1f835c: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x1f835cu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f8360: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f8360u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f8364: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1f8364u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f8368: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f8368u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f836c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f836cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f8370: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1f8370u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f8374: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1f8374u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1f8378: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f8378u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f837c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f837cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f8380: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1f8380u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f8384: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x1f8384u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1f8388: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f8388u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f838c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f838cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f8390: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F8390u;
    {
        const bool branch_taken_0x1f8390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8390u;
        // 0x1f8394: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8390) {
            ctx->pc = 0x1F83A4u;
            goto label_1f83a4;
        }
    }
    ctx->pc = 0x1F8398u;
label_1f8398:
    // 0x1f8398: 0x129140  sll         $s2, $s2, 5
    ctx->pc = 0x1f8398u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
    // 0x1f839c: 0xae8200a0  sw          $v0, 0xA0($s4)
    ctx->pc = 0x1f839cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 160), GPR_U32(ctx, 2));
    // 0x1f83a0: 0x26730005  addiu       $s3, $s3, 0x5
    ctx->pc = 0x1f83a0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 5));
label_1f83a4:
    // 0x1f83a4: 0x2a62001b  slti        $v0, $s3, 0x1B
    ctx->pc = 0x1f83a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)27) ? 1 : 0);
    // 0x1f83a8: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1F83A8u;
    {
        const bool branch_taken_0x1f83a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F83ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F83A8u;
        // 0x1f83ac: 0x1216c2  srl         $v0, $s2, 27 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 27));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f83a8) {
            ctx->pc = 0x1F83E8u;
            goto label_1f83e8;
        }
    }
    ctx->pc = 0x1F83B0u;
    // 0x1f83b0: 0x2673ffe5  addiu       $s3, $s3, -0x1B
    ctx->pc = 0x1f83b0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967269));
    // 0x1f83b4: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F83B4u;
    {
        const bool branch_taken_0x1f83b4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F83B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F83B4u;
        // 0x1f83b8: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f83b4) {
            ctx->pc = 0x1F83D8u;
            goto label_1f83d8;
        }
    }
    ctx->pc = 0x1F83BCu;
    // 0x1f83bc: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x1f83bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1f83c0: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x1f83c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x1f83c4: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x1f83c4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1f83c8: 0x121ec2  srl         $v1, $s2, 27
    ctx->pc = 0x1f83c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 27));
    // 0x1f83cc: 0x10000566  b           . + 4 + (0x566 << 2)
    ctx->pc = 0x1F83CCu;
    {
        const bool branch_taken_0x1f83cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F83D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F83CCu;
        // 0x1f83d0: 0xae8300a4  sw          $v1, 0xA4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 164), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f83cc) {
            ctx->pc = 0x1F9968u;
            goto label_1f9968;
        }
    }
    ctx->pc = 0x1F83D4u;
    // 0x1f83d4: 0x0  nop
    ctx->pc = 0x1f83d4u;
    // NOP
label_1f83d8:
    // 0x1f83d8: 0x1216c2  srl         $v0, $s2, 27
    ctx->pc = 0x1f83d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 27));
    // 0x1f83dc: 0x10000562  b           . + 4 + (0x562 << 2)
    ctx->pc = 0x1F83DCu;
    {
        const bool branch_taken_0x1f83dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F83E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F83DCu;
        // 0x1f83e0: 0xae8200a4  sw          $v0, 0xA4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 164), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f83dc) {
            ctx->pc = 0x1F9968u;
            goto label_1f9968;
        }
    }
    ctx->pc = 0x1F83E4u;
    // 0x1f83e4: 0x0  nop
    ctx->pc = 0x1f83e4u;
    // NOP
label_1f83e8:
    // 0x1f83e8: 0x26730005  addiu       $s3, $s3, 0x5
    ctx->pc = 0x1f83e8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 5));
    // 0x1f83ec: 0x10000567  b           . + 4 + (0x567 << 2)
    ctx->pc = 0x1F83ECu;
    {
        const bool branch_taken_0x1f83ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F83F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F83ECu;
        // 0x1f83f0: 0xae8200a4  sw          $v0, 0xA4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 164), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f83ec) {
            ctx->pc = 0x1F998Cu;
            goto label_1f998c;
        }
    }
    ctx->pc = 0x1F83F4u;
    // 0x1f83f4: 0x0  nop
    ctx->pc = 0x1f83f4u;
    // NOP
label_1f83f8:
    // 0x1f83f8: 0x54620565  bnel        $v1, $v0, . + 4 + (0x565 << 2)
    ctx->pc = 0x1F83F8u;
    {
        const bool branch_taken_0x1f83f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f83f8) {
            ctx->pc = 0x1F83FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F83F8u;
            // 0x1f83fc: 0x2361823  subu        $v1, $s1, $s6 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 22)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F9990u;
            goto label_1f9990;
        }
    }
    ctx->pc = 0x1F8400u;
    // 0x1f8400: 0x2a62001f  slti        $v0, $s3, 0x1F
    ctx->pc = 0x1f8400u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x1f8404: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1F8404u;
    {
        const bool branch_taken_0x1f8404 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F8408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8404u;
        // 0x1f8408: 0x1217c2  srl         $v0, $s2, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8404) {
            ctx->pc = 0x1F8478u;
            goto label_1f8478;
        }
    }
    ctx->pc = 0x1F840Cu;
    // 0x1f840c: 0x2673ffe1  addiu       $s3, $s3, -0x1F
    ctx->pc = 0x1f840cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967265));
    // 0x1f8410: 0x12600007  beqz        $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F8410u;
    {
        const bool branch_taken_0x1f8410 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8410u;
        // 0x1f8414: 0x931023  subu        $v0, $a0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8410) {
            ctx->pc = 0x1F8430u;
            goto label_1f8430;
        }
    }
    ctx->pc = 0x1F8418u;
    // 0x1f8418: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x1f8418u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x1f841c: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x1f841cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1f8420: 0x121fc2  srl         $v1, $s2, 31
    ctx->pc = 0x1f8420u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x1f8424: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x1f8424u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x1f8428: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F8428u;
    {
        const bool branch_taken_0x1f8428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F842Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8428u;
        // 0x1f842c: 0xae8300a8  sw          $v1, 0xA8($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 168), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8428) {
            ctx->pc = 0x1F843Cu;
            goto label_1f843c;
        }
    }
    ctx->pc = 0x1F8430u;
label_1f8430:
    // 0x1f8430: 0x1217c2  srl         $v0, $s2, 31
    ctx->pc = 0x1f8430u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x1f8434: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1f8434u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8438: 0xae8200a8  sw          $v0, 0xA8($s4)
    ctx->pc = 0x1f8438u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 168), GPR_U32(ctx, 2));
label_1f843c:
    // 0x1f843c: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x1f843cu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f8440: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f8440u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f8444: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1f8444u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f8448: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f8448u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f844c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f844cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f8450: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1f8450u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f8454: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1f8454u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1f8458: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f8458u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f845c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f845cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f8460: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1f8460u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f8464: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x1f8464u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1f8468: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f8468u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f846c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f846cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f8470: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F8470u;
    {
        const bool branch_taken_0x1f8470 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8470u;
        // 0x1f8474: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8470) {
            ctx->pc = 0x1F8484u;
            goto label_1f8484;
        }
    }
    ctx->pc = 0x1F8478u;
label_1f8478:
    // 0x1f8478: 0x129040  sll         $s2, $s2, 1
    ctx->pc = 0x1f8478u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x1f847c: 0xae8200a8  sw          $v0, 0xA8($s4)
    ctx->pc = 0x1f847cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 168), GPR_U32(ctx, 2));
    // 0x1f8480: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1f8480u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1f8484:
    // 0x1f8484: 0x8e8200a8  lw          $v0, 0xA8($s4)
    ctx->pc = 0x1f8484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 168)));
    // 0x1f8488: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x1F8488u;
    {
        const bool branch_taken_0x1f8488 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F848Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8488u;
        // 0x1f848c: 0x2a62001f  slti        $v0, $s3, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)31) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8488) {
            ctx->pc = 0x1F8514u;
            goto label_1f8514;
        }
    }
    ctx->pc = 0x1F8490u;
    // 0x1f8490: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1F8490u;
    {
        const bool branch_taken_0x1f8490 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F8494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8490u;
        // 0x1f8494: 0x1217c2  srl         $v0, $s2, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8490) {
            ctx->pc = 0x1F8508u;
            goto label_1f8508;
        }
    }
    ctx->pc = 0x1F8498u;
    // 0x1f8498: 0x2673ffe1  addiu       $s3, $s3, -0x1F
    ctx->pc = 0x1f8498u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967265));
    // 0x1f849c: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F849Cu;
    {
        const bool branch_taken_0x1f849c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F84A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F849Cu;
        // 0x1f84a0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f849c) {
            ctx->pc = 0x1F84C0u;
            goto label_1f84c0;
        }
    }
    ctx->pc = 0x1F84A4u;
    // 0x1f84a4: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x1f84a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1f84a8: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x1f84a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x1f84ac: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x1f84acu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1f84b0: 0x121fc2  srl         $v1, $s2, 31
    ctx->pc = 0x1f84b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x1f84b4: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x1f84b4u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x1f84b8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F84B8u;
    {
        const bool branch_taken_0x1f84b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F84BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F84B8u;
        // 0x1f84bc: 0xae8300ac  sw          $v1, 0xAC($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 172), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f84b8) {
            ctx->pc = 0x1F84CCu;
            goto label_1f84cc;
        }
    }
    ctx->pc = 0x1F84C0u;
label_1f84c0:
    // 0x1f84c0: 0x1217c2  srl         $v0, $s2, 31
    ctx->pc = 0x1f84c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x1f84c4: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1f84c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f84c8: 0xae8200ac  sw          $v0, 0xAC($s4)
    ctx->pc = 0x1f84c8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 172), GPR_U32(ctx, 2));
label_1f84cc:
    // 0x1f84cc: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x1f84ccu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f84d0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f84d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f84d4: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1f84d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f84d8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f84d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f84dc: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f84dcu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f84e0: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1f84e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f84e4: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1f84e4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1f84e8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f84e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f84ec: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f84ecu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f84f0: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1f84f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f84f4: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x1f84f4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1f84f8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f84f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f84fc: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f84fcu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f8500: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F8500u;
    {
        const bool branch_taken_0x1f8500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8500u;
        // 0x1f8504: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8500) {
            ctx->pc = 0x1F8514u;
            goto label_1f8514;
        }
    }
    ctx->pc = 0x1F8508u;
label_1f8508:
    // 0x1f8508: 0x129040  sll         $s2, $s2, 1
    ctx->pc = 0x1f8508u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x1f850c: 0xae8200ac  sw          $v0, 0xAC($s4)
    ctx->pc = 0x1f850cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 172), GPR_U32(ctx, 2));
    // 0x1f8510: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1f8510u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1f8514:
    // 0x1f8514: 0x2a62001d  slti        $v0, $s3, 0x1D
    ctx->pc = 0x1f8514u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)29) ? 1 : 0);
    // 0x1f8518: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1F8518u;
    {
        const bool branch_taken_0x1f8518 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F851Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8518u;
        // 0x1f851c: 0x121742  srl         $v0, $s2, 29 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8518) {
            ctx->pc = 0x1F8590u;
            goto label_1f8590;
        }
    }
    ctx->pc = 0x1F8520u;
    // 0x1f8520: 0x2673ffe3  addiu       $s3, $s3, -0x1D
    ctx->pc = 0x1f8520u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967267));
    // 0x1f8524: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F8524u;
    {
        const bool branch_taken_0x1f8524 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8524u;
        // 0x1f8528: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8524) {
            ctx->pc = 0x1F8548u;
            goto label_1f8548;
        }
    }
    ctx->pc = 0x1F852Cu;
    // 0x1f852c: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x1f852cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1f8530: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x1f8530u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x1f8534: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x1f8534u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1f8538: 0x121f42  srl         $v1, $s2, 29
    ctx->pc = 0x1f8538u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 29));
    // 0x1f853c: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x1f853cu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x1f8540: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F8540u;
    {
        const bool branch_taken_0x1f8540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8540u;
        // 0x1f8544: 0xae8300b0  sw          $v1, 0xB0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 176), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8540) {
            ctx->pc = 0x1F8554u;
            goto label_1f8554;
        }
    }
    ctx->pc = 0x1F8548u;
label_1f8548:
    // 0x1f8548: 0x121742  srl         $v0, $s2, 29
    ctx->pc = 0x1f8548u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 29));
    // 0x1f854c: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1f854cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8550: 0xae8200b0  sw          $v0, 0xB0($s4)
    ctx->pc = 0x1f8550u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 176), GPR_U32(ctx, 2));
label_1f8554:
    // 0x1f8554: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x1f8554u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f8558: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f8558u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f855c: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1f855cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f8560: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f8560u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f8564: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f8564u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f8568: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1f8568u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f856c: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1f856cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1f8570: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f8570u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f8574: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f8574u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f8578: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1f8578u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f857c: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x1f857cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1f8580: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f8580u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f8584: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f8584u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f8588: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F8588u;
    {
        const bool branch_taken_0x1f8588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F858Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8588u;
        // 0x1f858c: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8588) {
            ctx->pc = 0x1F859Cu;
            goto label_1f859c;
        }
    }
    ctx->pc = 0x1F8590u;
label_1f8590:
    // 0x1f8590: 0x1290c0  sll         $s2, $s2, 3
    ctx->pc = 0x1f8590u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x1f8594: 0xae8200b0  sw          $v0, 0xB0($s4)
    ctx->pc = 0x1f8594u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 176), GPR_U32(ctx, 2));
    // 0x1f8598: 0x26730003  addiu       $s3, $s3, 0x3
    ctx->pc = 0x1f8598u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 3));
label_1f859c:
    // 0x1f859c: 0x2a62001d  slti        $v0, $s3, 0x1D
    ctx->pc = 0x1f859cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)29) ? 1 : 0);
    // 0x1f85a0: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1F85A0u;
    {
        const bool branch_taken_0x1f85a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F85A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F85A0u;
        // 0x1f85a4: 0x121742  srl         $v0, $s2, 29 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f85a0) {
            ctx->pc = 0x1F85E0u;
            goto label_1f85e0;
        }
    }
    ctx->pc = 0x1F85A8u;
    // 0x1f85a8: 0x2673ffe3  addiu       $s3, $s3, -0x1D
    ctx->pc = 0x1f85a8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967267));
    // 0x1f85ac: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F85ACu;
    {
        const bool branch_taken_0x1f85ac = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F85B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F85ACu;
        // 0x1f85b0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f85ac) {
            ctx->pc = 0x1F85D0u;
            goto label_1f85d0;
        }
    }
    ctx->pc = 0x1F85B4u;
    // 0x1f85b4: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x1f85b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1f85b8: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x1f85b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x1f85bc: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x1f85bcu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1f85c0: 0x121f42  srl         $v1, $s2, 29
    ctx->pc = 0x1f85c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 29));
    // 0x1f85c4: 0x100004e8  b           . + 4 + (0x4E8 << 2)
    ctx->pc = 0x1F85C4u;
    {
        const bool branch_taken_0x1f85c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F85C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F85C4u;
        // 0x1f85c8: 0xae8300b4  sw          $v1, 0xB4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 180), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f85c4) {
            ctx->pc = 0x1F9968u;
            goto label_1f9968;
        }
    }
    ctx->pc = 0x1F85CCu;
    // 0x1f85cc: 0x0  nop
    ctx->pc = 0x1f85ccu;
    // NOP
label_1f85d0:
    // 0x1f85d0: 0x121742  srl         $v0, $s2, 29
    ctx->pc = 0x1f85d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 29));
    // 0x1f85d4: 0x100004e4  b           . + 4 + (0x4E4 << 2)
    ctx->pc = 0x1F85D4u;
    {
        const bool branch_taken_0x1f85d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F85D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F85D4u;
        // 0x1f85d8: 0xae8200b4  sw          $v0, 0xB4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 180), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f85d4) {
            ctx->pc = 0x1F9968u;
            goto label_1f9968;
        }
    }
    ctx->pc = 0x1F85DCu;
    // 0x1f85dc: 0x0  nop
    ctx->pc = 0x1f85dcu;
    // NOP
label_1f85e0:
    // 0x1f85e0: 0x26730003  addiu       $s3, $s3, 0x3
    ctx->pc = 0x1f85e0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 3));
    // 0x1f85e4: 0x100004e9  b           . + 4 + (0x4E9 << 2)
    ctx->pc = 0x1F85E4u;
    {
        const bool branch_taken_0x1f85e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F85E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F85E4u;
        // 0x1f85e8: 0xae8200b4  sw          $v0, 0xB4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 180), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f85e4) {
            ctx->pc = 0x1F998Cu;
            goto label_1f998c;
        }
    }
    ctx->pc = 0x1F85ECu;
    // 0x1f85ec: 0x0  nop
    ctx->pc = 0x1f85ecu;
    // NOP
label_1f85f0:
    // 0x1f85f0: 0xc07d71c  jal         func_1F5C70
    ctx->pc = 0x1F85F0u;
    SET_GPR_U32(ctx, 31, 0x1F85F8u);
    ctx->pc = 0x1F85F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F85F0u;
    // 0x1f85f4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F5C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F5C70u, 0x1F85F0u, 0x1F85F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F85F8u;
label_1f85f8:
    // 0x1f85f8: 0x8e820038  lw          $v0, 0x38($s4)
    ctx->pc = 0x1f85f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 56)));
    // 0x1f85fc: 0x184004e3  blez        $v0, . + 4 + (0x4E3 << 2)
    ctx->pc = 0x1F85FCu;
    {
        const bool branch_taken_0x1f85fc = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x1F8600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F85FCu;
        // 0x1f8600: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f85fc) {
            ctx->pc = 0x1F998Cu;
            goto label_1f998c;
        }
    }
    ctx->pc = 0x1F8604u;
    // 0x1f8604: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x1f8604u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1f8608: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1f8608u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f860c: 0x2685016c  addiu       $a1, $s4, 0x16C
    ctx->pc = 0x1f860cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 364));
    // 0x1f8610: 0x26840160  addiu       $a0, $s4, 0x160
    ctx->pc = 0x1f8610u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 352));
    // 0x1f8614: 0x0  nop
    ctx->pc = 0x1f8614u;
    // NOP
label_1f8618:
    // 0x1f8618: 0x2a620010  slti        $v0, $s3, 0x10
    ctx->pc = 0x1f8618u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1f861c: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1F861Cu;
    {
        const bool branch_taken_0x1f861c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F8620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F861Cu;
        // 0x1f8620: 0x121402  srl         $v0, $s2, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f861c) {
            ctx->pc = 0x1F8690u;
            goto label_1f8690;
        }
    }
    ctx->pc = 0x1F8624u;
    // 0x1f8624: 0x2673fff0  addiu       $s3, $s3, -0x10
    ctx->pc = 0x1f8624u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967280));
    // 0x1f8628: 0x12600007  beqz        $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F8628u;
    {
        const bool branch_taken_0x1f8628 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F862Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8628u;
        // 0x1f862c: 0x1131023  subu        $v0, $t0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8628) {
            ctx->pc = 0x1F8648u;
            goto label_1f8648;
        }
    }
    ctx->pc = 0x1F8630u;
    // 0x1f8630: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x1f8630u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x1f8634: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x1f8634u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1f8638: 0x121c02  srl         $v1, $s2, 16
    ctx->pc = 0x1f8638u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 16));
    // 0x1f863c: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x1f863cu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x1f8640: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F8640u;
    {
        const bool branch_taken_0x1f8640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8640u;
        // 0x1f8644: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8640) {
            ctx->pc = 0x1F8654u;
            goto label_1f8654;
        }
    }
    ctx->pc = 0x1F8648u;
label_1f8648:
    // 0x1f8648: 0x121402  srl         $v0, $s2, 16
    ctx->pc = 0x1f8648u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 16));
    // 0x1f864c: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1f864cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8650: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1f8650u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_1f8654:
    // 0x1f8654: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x1f8654u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f8658: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f8658u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f865c: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1f865cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f8660: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f8660u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f8664: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f8664u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f8668: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1f8668u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f866c: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1f866cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1f8670: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f8670u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f8674: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f8674u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f8678: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1f8678u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f867c: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x1f867cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1f8680: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f8680u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f8684: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f8684u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f8688: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F8688u;
    {
        const bool branch_taken_0x1f8688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F868Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8688u;
        // 0x1f868c: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8688) {
            ctx->pc = 0x1F869Cu;
            goto label_1f869c;
        }
    }
    ctx->pc = 0x1F8690u;
label_1f8690:
    // 0x1f8690: 0x129400  sll         $s2, $s2, 16
    ctx->pc = 0x1f8690u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 16));
    // 0x1f8694: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1f8694u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1f8698: 0x26730010  addiu       $s3, $s3, 0x10
    ctx->pc = 0x1f8698u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_1f869c:
    // 0x1f869c: 0x2a62001f  slti        $v0, $s3, 0x1F
    ctx->pc = 0x1f869cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x1f86a0: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1F86A0u;
    {
        const bool branch_taken_0x1f86a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F86A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F86A0u;
        // 0x1f86a4: 0x1217c2  srl         $v0, $s2, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f86a0) {
            ctx->pc = 0x1F8718u;
            goto label_1f8718;
        }
    }
    ctx->pc = 0x1F86A8u;
    // 0x1f86a8: 0x2673ffe1  addiu       $s3, $s3, -0x1F
    ctx->pc = 0x1f86a8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967265));
    // 0x1f86ac: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F86ACu;
    {
        const bool branch_taken_0x1f86ac = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F86B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F86ACu;
        // 0x1f86b0: 0xf31023  subu        $v0, $a3, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f86ac) {
            ctx->pc = 0x1F86D0u;
            goto label_1f86d0;
        }
    }
    ctx->pc = 0x1F86B4u;
    // 0x1f86b4: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x1f86b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x1f86b8: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x1f86b8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1f86bc: 0x121fc2  srl         $v1, $s2, 31
    ctx->pc = 0x1f86bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x1f86c0: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x1f86c0u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x1f86c4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1F86C4u;
    {
        const bool branch_taken_0x1f86c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F86C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F86C4u;
        // 0x1f86c8: 0xae830018  sw          $v1, 0x18($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f86c4) {
            ctx->pc = 0x1F86DCu;
            goto label_1f86dc;
        }
    }
    ctx->pc = 0x1F86CCu;
    // 0x1f86cc: 0x0  nop
    ctx->pc = 0x1f86ccu;
    // NOP
label_1f86d0:
    // 0x1f86d0: 0x1217c2  srl         $v0, $s2, 31
    ctx->pc = 0x1f86d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x1f86d4: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1f86d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f86d8: 0xae820018  sw          $v0, 0x18($s4)
    ctx->pc = 0x1f86d8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 2));
label_1f86dc:
    // 0x1f86dc: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x1f86dcu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f86e0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f86e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f86e4: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1f86e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f86e8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f86e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f86ec: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f86ecu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f86f0: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1f86f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f86f4: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1f86f4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1f86f8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f86f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f86fc: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f86fcu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f8700: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1f8700u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f8704: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x1f8704u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1f8708: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f8708u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f870c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f870cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f8710: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F8710u;
    {
        const bool branch_taken_0x1f8710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8710u;
        // 0x1f8714: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8710) {
            ctx->pc = 0x1F8724u;
            goto label_1f8724;
        }
    }
    ctx->pc = 0x1F8718u;
label_1f8718:
    // 0x1f8718: 0x129040  sll         $s2, $s2, 1
    ctx->pc = 0x1f8718u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x1f871c: 0xae820018  sw          $v0, 0x18($s4)
    ctx->pc = 0x1f871cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 2));
    // 0x1f8720: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1f8720u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1f8724:
    // 0x1f8724: 0x2a620010  slti        $v0, $s3, 0x10
    ctx->pc = 0x1f8724u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1f8728: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1F8728u;
    {
        const bool branch_taken_0x1f8728 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F872Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8728u;
        // 0x1f872c: 0x121402  srl         $v0, $s2, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8728) {
            ctx->pc = 0x1F87A0u;
            goto label_1f87a0;
        }
    }
    ctx->pc = 0x1F8730u;
    // 0x1f8730: 0x2673fff0  addiu       $s3, $s3, -0x10
    ctx->pc = 0x1f8730u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967280));
    // 0x1f8734: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F8734u;
    {
        const bool branch_taken_0x1f8734 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8734u;
        // 0x1f8738: 0x1131023  subu        $v0, $t0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8734) {
            ctx->pc = 0x1F8758u;
            goto label_1f8758;
        }
    }
    ctx->pc = 0x1F873Cu;
    // 0x1f873c: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x1f873cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x1f8740: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x1f8740u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1f8744: 0x121c02  srl         $v1, $s2, 16
    ctx->pc = 0x1f8744u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 16));
    // 0x1f8748: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x1f8748u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x1f874c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1F874Cu;
    {
        const bool branch_taken_0x1f874c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F874Cu;
        // 0x1f8750: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f874c) {
            ctx->pc = 0x1F8764u;
            goto label_1f8764;
        }
    }
    ctx->pc = 0x1F8754u;
    // 0x1f8754: 0x0  nop
    ctx->pc = 0x1f8754u;
    // NOP
label_1f8758:
    // 0x1f8758: 0x121402  srl         $v0, $s2, 16
    ctx->pc = 0x1f8758u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 16));
    // 0x1f875c: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1f875cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8760: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1f8760u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_1f8764:
    // 0x1f8764: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x1f8764u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f8768: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f8768u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f876c: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1f876cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f8770: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f8770u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f8774: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f8774u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f8778: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1f8778u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f877c: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1f877cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1f8780: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f8780u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f8784: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f8784u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f8788: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1f8788u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f878c: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x1f878cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1f8790: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f8790u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f8794: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f8794u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f8798: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F8798u;
    {
        const bool branch_taken_0x1f8798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F879Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8798u;
        // 0x1f879c: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8798) {
            ctx->pc = 0x1F87ACu;
            goto label_1f87ac;
        }
    }
    ctx->pc = 0x1F87A0u;
label_1f87a0:
    // 0x1f87a0: 0x129400  sll         $s2, $s2, 16
    ctx->pc = 0x1f87a0u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 16));
    // 0x1f87a4: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1f87a4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x1f87a8: 0x26730010  addiu       $s3, $s3, 0x10
    ctx->pc = 0x1f87a8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_1f87ac:
    // 0x1f87ac: 0x2a62001f  slti        $v0, $s3, 0x1F
    ctx->pc = 0x1f87acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x1f87b0: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1F87B0u;
    {
        const bool branch_taken_0x1f87b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F87B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F87B0u;
        // 0x1f87b4: 0x1217c2  srl         $v0, $s2, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f87b0) {
            ctx->pc = 0x1F8828u;
            goto label_1f8828;
        }
    }
    ctx->pc = 0x1F87B8u;
    // 0x1f87b8: 0x2673ffe1  addiu       $s3, $s3, -0x1F
    ctx->pc = 0x1f87b8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967265));
    // 0x1f87bc: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F87BCu;
    {
        const bool branch_taken_0x1f87bc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F87C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F87BCu;
        // 0x1f87c0: 0xf31023  subu        $v0, $a3, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f87bc) {
            ctx->pc = 0x1F87E0u;
            goto label_1f87e0;
        }
    }
    ctx->pc = 0x1F87C4u;
    // 0x1f87c4: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x1f87c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x1f87c8: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x1f87c8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1f87cc: 0x121fc2  srl         $v1, $s2, 31
    ctx->pc = 0x1f87ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x1f87d0: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x1f87d0u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x1f87d4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1F87D4u;
    {
        const bool branch_taken_0x1f87d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F87D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F87D4u;
        // 0x1f87d8: 0xae830018  sw          $v1, 0x18($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f87d4) {
            ctx->pc = 0x1F87ECu;
            goto label_1f87ec;
        }
    }
    ctx->pc = 0x1F87DCu;
    // 0x1f87dc: 0x0  nop
    ctx->pc = 0x1f87dcu;
    // NOP
label_1f87e0:
    // 0x1f87e0: 0x1217c2  srl         $v0, $s2, 31
    ctx->pc = 0x1f87e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x1f87e4: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1f87e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f87e8: 0xae820018  sw          $v0, 0x18($s4)
    ctx->pc = 0x1f87e8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 2));
label_1f87ec:
    // 0x1f87ec: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x1f87ecu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f87f0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f87f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f87f4: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1f87f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f87f8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f87f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f87fc: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f87fcu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f8800: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1f8800u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f8804: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1f8804u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1f8808: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f8808u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f880c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f880cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f8810: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1f8810u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f8814: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x1f8814u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1f8818: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f8818u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f881c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f881cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f8820: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F8820u;
    {
        const bool branch_taken_0x1f8820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8820u;
        // 0x1f8824: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8820) {
            ctx->pc = 0x1F8834u;
            goto label_1f8834;
        }
    }
    ctx->pc = 0x1F8828u;
label_1f8828:
    // 0x1f8828: 0x129040  sll         $s2, $s2, 1
    ctx->pc = 0x1f8828u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x1f882c: 0xae820018  sw          $v0, 0x18($s4)
    ctx->pc = 0x1f882cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 2));
    // 0x1f8830: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1f8830u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1f8834:
    // 0x1f8834: 0x8e820038  lw          $v0, 0x38($s4)
    ctx->pc = 0x1f8834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 56)));
    // 0x1f8838: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1f8838u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1f883c: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x1f883cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x1f8840: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x1f8840u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1f8844: 0x1440ff74  bnez        $v0, . + 4 + (-0x8C << 2)
    ctx->pc = 0x1F8844u;
    {
        const bool branch_taken_0x1f8844 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F8848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8844u;
        // 0x1f8848: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8844) {
            ctx->pc = 0x1F8618u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f8618;
        }
    }
    ctx->pc = 0x1F884Cu;
    // 0x1f884c: 0x10000450  b           . + 4 + (0x450 << 2)
    ctx->pc = 0x1F884Cu;
    {
        const bool branch_taken_0x1f884c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F884Cu;
        // 0x1f8850: 0x2361823  subu        $v1, $s1, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f884c) {
            ctx->pc = 0x1F9990u;
            goto label_1f9990;
        }
    }
    ctx->pc = 0x1F8854u;
    // 0x1f8854: 0x0  nop
    ctx->pc = 0x1f8854u;
    // NOP
label_1f8858:
    // 0x1f8858: 0x2a62001c  slti        $v0, $s3, 0x1C
    ctx->pc = 0x1f8858u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)28) ? 1 : 0);
    // 0x1f885c: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1F885Cu;
    {
        const bool branch_taken_0x1f885c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F8860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F885Cu;
        // 0x1f8860: 0x121702  srl         $v0, $s2, 28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f885c) {
            ctx->pc = 0x1F88D8u;
            goto label_1f88d8;
        }
    }
    ctx->pc = 0x1F8864u;
    // 0x1f8864: 0x2673ffe4  addiu       $s3, $s3, -0x1C
    ctx->pc = 0x1f8864u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967268));
    // 0x1f8868: 0x12600009  beqz        $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F8868u;
    {
        const bool branch_taken_0x1f8868 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F886Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8868u;
        // 0x1f886c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8868) {
            ctx->pc = 0x1F8890u;
            goto label_1f8890;
        }
    }
    ctx->pc = 0x1F8870u;
    // 0x1f8870: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x1f8870u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1f8874: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x1f8874u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x1f8878: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x1f8878u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1f887c: 0x121f02  srl         $v1, $s2, 28
    ctx->pc = 0x1f887cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 28));
    // 0x1f8880: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x1f8880u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x1f8884: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1F8884u;
    {
        const bool branch_taken_0x1f8884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8884u;
        // 0x1f8888: 0xae830104  sw          $v1, 0x104($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 260), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8884) {
            ctx->pc = 0x1F889Cu;
            goto label_1f889c;
        }
    }
    ctx->pc = 0x1F888Cu;
    // 0x1f888c: 0x0  nop
    ctx->pc = 0x1f888cu;
    // NOP
label_1f8890:
    // 0x1f8890: 0x121702  srl         $v0, $s2, 28
    ctx->pc = 0x1f8890u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 28));
    // 0x1f8894: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1f8894u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8898: 0xae820104  sw          $v0, 0x104($s4)
    ctx->pc = 0x1f8898u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 260), GPR_U32(ctx, 2));
label_1f889c:
    // 0x1f889c: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x1f889cu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f88a0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f88a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f88a4: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1f88a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f88a8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f88a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f88ac: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f88acu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f88b0: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1f88b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f88b4: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1f88b4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1f88b8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f88b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f88bc: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f88bcu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f88c0: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1f88c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f88c4: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x1f88c4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1f88c8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f88c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f88cc: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f88ccu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f88d0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F88D0u;
    {
        const bool branch_taken_0x1f88d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F88D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F88D0u;
        // 0x1f88d4: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f88d0) {
            ctx->pc = 0x1F88E4u;
            goto label_1f88e4;
        }
    }
    ctx->pc = 0x1F88D8u;
label_1f88d8:
    // 0x1f88d8: 0x129100  sll         $s2, $s2, 4
    ctx->pc = 0x1f88d8u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x1f88dc: 0xae820104  sw          $v0, 0x104($s4)
    ctx->pc = 0x1f88dcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 260), GPR_U32(ctx, 2));
    // 0x1f88e0: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x1f88e0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_1f88e4:
    // 0x1f88e4: 0x2a62001c  slti        $v0, $s3, 0x1C
    ctx->pc = 0x1f88e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)28) ? 1 : 0);
    // 0x1f88e8: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1F88E8u;
    {
        const bool branch_taken_0x1f88e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F88ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F88E8u;
        // 0x1f88ec: 0x121702  srl         $v0, $s2, 28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f88e8) {
            ctx->pc = 0x1F8960u;
            goto label_1f8960;
        }
    }
    ctx->pc = 0x1F88F0u;
    // 0x1f88f0: 0x2673ffe4  addiu       $s3, $s3, -0x1C
    ctx->pc = 0x1f88f0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967268));
    // 0x1f88f4: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F88F4u;
    {
        const bool branch_taken_0x1f88f4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F88F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F88F4u;
        // 0x1f88f8: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f88f4) {
            ctx->pc = 0x1F8918u;
            goto label_1f8918;
        }
    }
    ctx->pc = 0x1F88FCu;
    // 0x1f88fc: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x1f88fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1f8900: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x1f8900u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x1f8904: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x1f8904u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1f8908: 0x121f02  srl         $v1, $s2, 28
    ctx->pc = 0x1f8908u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 28));
    // 0x1f890c: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x1f890cu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x1f8910: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F8910u;
    {
        const bool branch_taken_0x1f8910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8910u;
        // 0x1f8914: 0xae830108  sw          $v1, 0x108($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 264), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8910) {
            ctx->pc = 0x1F8924u;
            goto label_1f8924;
        }
    }
    ctx->pc = 0x1F8918u;
label_1f8918:
    // 0x1f8918: 0x121702  srl         $v0, $s2, 28
    ctx->pc = 0x1f8918u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 28));
    // 0x1f891c: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1f891cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8920: 0xae820108  sw          $v0, 0x108($s4)
    ctx->pc = 0x1f8920u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 264), GPR_U32(ctx, 2));
label_1f8924:
    // 0x1f8924: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x1f8924u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f8928: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f8928u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f892c: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1f892cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f8930: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f8930u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f8934: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f8934u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f8938: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1f8938u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f893c: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1f893cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1f8940: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f8940u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f8944: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f8944u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f8948: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1f8948u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f894c: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x1f894cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1f8950: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f8950u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f8954: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f8954u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f8958: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F8958u;
    {
        const bool branch_taken_0x1f8958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F895Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8958u;
        // 0x1f895c: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8958) {
            ctx->pc = 0x1F896Cu;
            goto label_1f896c;
        }
    }
    ctx->pc = 0x1F8960u;
label_1f8960:
    // 0x1f8960: 0x129100  sll         $s2, $s2, 4
    ctx->pc = 0x1f8960u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x1f8964: 0xae820108  sw          $v0, 0x108($s4)
    ctx->pc = 0x1f8964u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 264), GPR_U32(ctx, 2));
    // 0x1f8968: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x1f8968u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_1f896c:
    // 0x1f896c: 0x2a62001c  slti        $v0, $s3, 0x1C
    ctx->pc = 0x1f896cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)28) ? 1 : 0);
    // 0x1f8970: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1F8970u;
    {
        const bool branch_taken_0x1f8970 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F8974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8970u;
        // 0x1f8974: 0x121702  srl         $v0, $s2, 28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8970) {
            ctx->pc = 0x1F89E8u;
            goto label_1f89e8;
        }
    }
    ctx->pc = 0x1F8978u;
    // 0x1f8978: 0x2673ffe4  addiu       $s3, $s3, -0x1C
    ctx->pc = 0x1f8978u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967268));
    // 0x1f897c: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F897Cu;
    {
        const bool branch_taken_0x1f897c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F897Cu;
        // 0x1f8980: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f897c) {
            ctx->pc = 0x1F89A0u;
            goto label_1f89a0;
        }
    }
    ctx->pc = 0x1F8984u;
    // 0x1f8984: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x1f8984u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1f8988: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x1f8988u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x1f898c: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x1f898cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1f8990: 0x121f02  srl         $v1, $s2, 28
    ctx->pc = 0x1f8990u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 28));
    // 0x1f8994: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x1f8994u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x1f8998: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F8998u;
    {
        const bool branch_taken_0x1f8998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F899Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8998u;
        // 0x1f899c: 0xae83010c  sw          $v1, 0x10C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 268), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8998) {
            ctx->pc = 0x1F89ACu;
            goto label_1f89ac;
        }
    }
    ctx->pc = 0x1F89A0u;
label_1f89a0:
    // 0x1f89a0: 0x121702  srl         $v0, $s2, 28
    ctx->pc = 0x1f89a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 28));
    // 0x1f89a4: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1f89a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f89a8: 0xae82010c  sw          $v0, 0x10C($s4)
    ctx->pc = 0x1f89a8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 268), GPR_U32(ctx, 2));
label_1f89ac:
    // 0x1f89ac: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x1f89acu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f89b0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f89b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f89b4: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1f89b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f89b8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f89b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f89bc: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f89bcu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f89c0: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1f89c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f89c4: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1f89c4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1f89c8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f89c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f89cc: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f89ccu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f89d0: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1f89d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f89d4: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x1f89d4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1f89d8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f89d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f89dc: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f89dcu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f89e0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F89E0u;
    {
        const bool branch_taken_0x1f89e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F89E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F89E0u;
        // 0x1f89e4: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f89e0) {
            ctx->pc = 0x1F89F4u;
            goto label_1f89f4;
        }
    }
    ctx->pc = 0x1F89E8u;
label_1f89e8:
    // 0x1f89e8: 0x129100  sll         $s2, $s2, 4
    ctx->pc = 0x1f89e8u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x1f89ec: 0xae82010c  sw          $v0, 0x10C($s4)
    ctx->pc = 0x1f89ecu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 268), GPR_U32(ctx, 2));
    // 0x1f89f0: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x1f89f0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_1f89f4:
    // 0x1f89f4: 0x2a62001c  slti        $v0, $s3, 0x1C
    ctx->pc = 0x1f89f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)28) ? 1 : 0);
    // 0x1f89f8: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1F89F8u;
    {
        const bool branch_taken_0x1f89f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F89FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F89F8u;
        // 0x1f89fc: 0x121702  srl         $v0, $s2, 28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f89f8) {
            ctx->pc = 0x1F8A70u;
            goto label_1f8a70;
        }
    }
    ctx->pc = 0x1F8A00u;
    // 0x1f8a00: 0x2673ffe4  addiu       $s3, $s3, -0x1C
    ctx->pc = 0x1f8a00u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967268));
    // 0x1f8a04: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F8A04u;
    {
        const bool branch_taken_0x1f8a04 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8A04u;
        // 0x1f8a08: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8a04) {
            ctx->pc = 0x1F8A28u;
            goto label_1f8a28;
        }
    }
    ctx->pc = 0x1F8A0Cu;
    // 0x1f8a0c: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x1f8a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1f8a10: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x1f8a10u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x1f8a14: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x1f8a14u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1f8a18: 0x121f02  srl         $v1, $s2, 28
    ctx->pc = 0x1f8a18u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 28));
    // 0x1f8a1c: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x1f8a1cu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x1f8a20: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F8A20u;
    {
        const bool branch_taken_0x1f8a20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8A20u;
        // 0x1f8a24: 0xae830110  sw          $v1, 0x110($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 272), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8a20) {
            ctx->pc = 0x1F8A34u;
            goto label_1f8a34;
        }
    }
    ctx->pc = 0x1F8A28u;
label_1f8a28:
    // 0x1f8a28: 0x121702  srl         $v0, $s2, 28
    ctx->pc = 0x1f8a28u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 28));
    // 0x1f8a2c: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1f8a2cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8a30: 0xae820110  sw          $v0, 0x110($s4)
    ctx->pc = 0x1f8a30u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 272), GPR_U32(ctx, 2));
label_1f8a34:
    // 0x1f8a34: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x1f8a34u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f8a38: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f8a38u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f8a3c: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1f8a3cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f8a40: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f8a40u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f8a44: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f8a44u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f8a48: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1f8a48u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f8a4c: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1f8a4cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1f8a50: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f8a50u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f8a54: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f8a54u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f8a58: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1f8a58u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f8a5c: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x1f8a5cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1f8a60: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f8a60u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f8a64: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f8a64u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f8a68: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F8A68u;
    {
        const bool branch_taken_0x1f8a68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8A68u;
        // 0x1f8a6c: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8a68) {
            ctx->pc = 0x1F8A7Cu;
            goto label_1f8a7c;
        }
    }
    ctx->pc = 0x1F8A70u;
label_1f8a70:
    // 0x1f8a70: 0x129100  sll         $s2, $s2, 4
    ctx->pc = 0x1f8a70u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x1f8a74: 0xae820110  sw          $v0, 0x110($s4)
    ctx->pc = 0x1f8a74u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 272), GPR_U32(ctx, 2));
    // 0x1f8a78: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x1f8a78u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_1f8a7c:
    // 0x1f8a7c: 0x2a62001e  slti        $v0, $s3, 0x1E
    ctx->pc = 0x1f8a7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)30) ? 1 : 0);
    // 0x1f8a80: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1F8A80u;
    {
        const bool branch_taken_0x1f8a80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F8A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8A80u;
        // 0x1f8a84: 0x121782  srl         $v0, $s2, 30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8a80) {
            ctx->pc = 0x1F8AF8u;
            goto label_1f8af8;
        }
    }
    ctx->pc = 0x1F8A88u;
    // 0x1f8a88: 0x2673ffe2  addiu       $s3, $s3, -0x1E
    ctx->pc = 0x1f8a88u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967266));
    // 0x1f8a8c: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F8A8Cu;
    {
        const bool branch_taken_0x1f8a8c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8A8Cu;
        // 0x1f8a90: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8a8c) {
            ctx->pc = 0x1F8AB0u;
            goto label_1f8ab0;
        }
    }
    ctx->pc = 0x1F8A94u;
    // 0x1f8a94: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x1f8a94u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1f8a98: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x1f8a98u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x1f8a9c: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x1f8a9cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1f8aa0: 0x121f82  srl         $v1, $s2, 30
    ctx->pc = 0x1f8aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 30));
    // 0x1f8aa4: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x1f8aa4u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x1f8aa8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F8AA8u;
    {
        const bool branch_taken_0x1f8aa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8AA8u;
        // 0x1f8aac: 0xae830114  sw          $v1, 0x114($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 276), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8aa8) {
            ctx->pc = 0x1F8ABCu;
            goto label_1f8abc;
        }
    }
    ctx->pc = 0x1F8AB0u;
label_1f8ab0:
    // 0x1f8ab0: 0x121782  srl         $v0, $s2, 30
    ctx->pc = 0x1f8ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 30));
    // 0x1f8ab4: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1f8ab4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8ab8: 0xae820114  sw          $v0, 0x114($s4)
    ctx->pc = 0x1f8ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 276), GPR_U32(ctx, 2));
label_1f8abc:
    // 0x1f8abc: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x1f8abcu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f8ac0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f8ac0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f8ac4: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1f8ac4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f8ac8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f8ac8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f8acc: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f8accu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f8ad0: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1f8ad0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f8ad4: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1f8ad4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1f8ad8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f8ad8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f8adc: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f8adcu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f8ae0: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1f8ae0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f8ae4: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x1f8ae4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1f8ae8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f8ae8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f8aec: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f8aecu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f8af0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F8AF0u;
    {
        const bool branch_taken_0x1f8af0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8AF0u;
        // 0x1f8af4: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8af0) {
            ctx->pc = 0x1F8B04u;
            goto label_1f8b04;
        }
    }
    ctx->pc = 0x1F8AF8u;
label_1f8af8:
    // 0x1f8af8: 0x129080  sll         $s2, $s2, 2
    ctx->pc = 0x1f8af8u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1f8afc: 0xae820114  sw          $v0, 0x114($s4)
    ctx->pc = 0x1f8afcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 276), GPR_U32(ctx, 2));
    // 0x1f8b00: 0x26730002  addiu       $s3, $s3, 0x2
    ctx->pc = 0x1f8b00u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
label_1f8b04:
    // 0x1f8b04: 0x2a62001e  slti        $v0, $s3, 0x1E
    ctx->pc = 0x1f8b04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)30) ? 1 : 0);
    // 0x1f8b08: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1F8B08u;
    {
        const bool branch_taken_0x1f8b08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F8B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8B08u;
        // 0x1f8b0c: 0x121782  srl         $v0, $s2, 30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8b08) {
            ctx->pc = 0x1F8B80u;
            goto label_1f8b80;
        }
    }
    ctx->pc = 0x1F8B10u;
    // 0x1f8b10: 0x2673ffe2  addiu       $s3, $s3, -0x1E
    ctx->pc = 0x1f8b10u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967266));
    // 0x1f8b14: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F8B14u;
    {
        const bool branch_taken_0x1f8b14 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8B14u;
        // 0x1f8b18: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8b14) {
            ctx->pc = 0x1F8B38u;
            goto label_1f8b38;
        }
    }
    ctx->pc = 0x1F8B1Cu;
    // 0x1f8b1c: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x1f8b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1f8b20: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x1f8b20u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x1f8b24: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x1f8b24u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1f8b28: 0x121f82  srl         $v1, $s2, 30
    ctx->pc = 0x1f8b28u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 30));
    // 0x1f8b2c: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x1f8b2cu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x1f8b30: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F8B30u;
    {
        const bool branch_taken_0x1f8b30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8B30u;
        // 0x1f8b34: 0xae830118  sw          $v1, 0x118($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 280), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8b30) {
            ctx->pc = 0x1F8B44u;
            goto label_1f8b44;
        }
    }
    ctx->pc = 0x1F8B38u;
label_1f8b38:
    // 0x1f8b38: 0x121782  srl         $v0, $s2, 30
    ctx->pc = 0x1f8b38u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 30));
    // 0x1f8b3c: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1f8b3cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8b40: 0xae820118  sw          $v0, 0x118($s4)
    ctx->pc = 0x1f8b40u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 280), GPR_U32(ctx, 2));
label_1f8b44:
    // 0x1f8b44: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x1f8b44u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f8b48: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f8b48u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f8b4c: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1f8b4cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f8b50: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f8b50u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f8b54: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f8b54u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f8b58: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1f8b58u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f8b5c: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1f8b5cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1f8b60: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f8b60u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f8b64: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f8b64u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f8b68: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1f8b68u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f8b6c: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x1f8b6cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1f8b70: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f8b70u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f8b74: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f8b74u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f8b78: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F8B78u;
    {
        const bool branch_taken_0x1f8b78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8B78u;
        // 0x1f8b7c: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8b78) {
            ctx->pc = 0x1F8B8Cu;
            goto label_1f8b8c;
        }
    }
    ctx->pc = 0x1F8B80u;
label_1f8b80:
    // 0x1f8b80: 0x129080  sll         $s2, $s2, 2
    ctx->pc = 0x1f8b80u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1f8b84: 0xae820118  sw          $v0, 0x118($s4)
    ctx->pc = 0x1f8b84u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 280), GPR_U32(ctx, 2));
    // 0x1f8b88: 0x26730002  addiu       $s3, $s3, 0x2
    ctx->pc = 0x1f8b88u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
label_1f8b8c:
    // 0x1f8b8c: 0x2a62001f  slti        $v0, $s3, 0x1F
    ctx->pc = 0x1f8b8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x1f8b90: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1F8B90u;
    {
        const bool branch_taken_0x1f8b90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F8B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8B90u;
        // 0x1f8b94: 0x1217c2  srl         $v0, $s2, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8b90) {
            ctx->pc = 0x1F8C08u;
            goto label_1f8c08;
        }
    }
    ctx->pc = 0x1F8B98u;
    // 0x1f8b98: 0x2673ffe1  addiu       $s3, $s3, -0x1F
    ctx->pc = 0x1f8b98u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967265));
    // 0x1f8b9c: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F8B9Cu;
    {
        const bool branch_taken_0x1f8b9c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8B9Cu;
        // 0x1f8ba0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8b9c) {
            ctx->pc = 0x1F8BC0u;
            goto label_1f8bc0;
        }
    }
    ctx->pc = 0x1F8BA4u;
    // 0x1f8ba4: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x1f8ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1f8ba8: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x1f8ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x1f8bac: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x1f8bacu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1f8bb0: 0x121fc2  srl         $v1, $s2, 31
    ctx->pc = 0x1f8bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x1f8bb4: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x1f8bb4u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x1f8bb8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F8BB8u;
    {
        const bool branch_taken_0x1f8bb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8BB8u;
        // 0x1f8bbc: 0xae83011c  sw          $v1, 0x11C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 284), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8bb8) {
            ctx->pc = 0x1F8BCCu;
            goto label_1f8bcc;
        }
    }
    ctx->pc = 0x1F8BC0u;
label_1f8bc0:
    // 0x1f8bc0: 0x1217c2  srl         $v0, $s2, 31
    ctx->pc = 0x1f8bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x1f8bc4: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1f8bc4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8bc8: 0xae82011c  sw          $v0, 0x11C($s4)
    ctx->pc = 0x1f8bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 284), GPR_U32(ctx, 2));
label_1f8bcc:
    // 0x1f8bcc: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x1f8bccu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f8bd0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f8bd0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f8bd4: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1f8bd4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f8bd8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f8bd8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f8bdc: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f8bdcu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f8be0: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1f8be0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f8be4: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1f8be4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1f8be8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f8be8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f8bec: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f8becu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f8bf0: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1f8bf0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f8bf4: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x1f8bf4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1f8bf8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f8bf8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f8bfc: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f8bfcu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f8c00: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F8C00u;
    {
        const bool branch_taken_0x1f8c00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8C00u;
        // 0x1f8c04: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8c00) {
            ctx->pc = 0x1F8C14u;
            goto label_1f8c14;
        }
    }
    ctx->pc = 0x1F8C08u;
label_1f8c08:
    // 0x1f8c08: 0x129040  sll         $s2, $s2, 1
    ctx->pc = 0x1f8c08u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x1f8c0c: 0xae82011c  sw          $v0, 0x11C($s4)
    ctx->pc = 0x1f8c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 284), GPR_U32(ctx, 2));
    // 0x1f8c10: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1f8c10u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1f8c14:
    // 0x1f8c14: 0x2a62001f  slti        $v0, $s3, 0x1F
    ctx->pc = 0x1f8c14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x1f8c18: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1F8C18u;
    {
        const bool branch_taken_0x1f8c18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F8C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8C18u;
        // 0x1f8c1c: 0x1217c2  srl         $v0, $s2, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8c18) {
            ctx->pc = 0x1F8C90u;
            goto label_1f8c90;
        }
    }
    ctx->pc = 0x1F8C20u;
    // 0x1f8c20: 0x2673ffe1  addiu       $s3, $s3, -0x1F
    ctx->pc = 0x1f8c20u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967265));
    // 0x1f8c24: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F8C24u;
    {
        const bool branch_taken_0x1f8c24 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8C24u;
        // 0x1f8c28: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8c24) {
            ctx->pc = 0x1F8C48u;
            goto label_1f8c48;
        }
    }
    ctx->pc = 0x1F8C2Cu;
    // 0x1f8c2c: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x1f8c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1f8c30: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x1f8c30u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x1f8c34: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x1f8c34u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1f8c38: 0x121fc2  srl         $v1, $s2, 31
    ctx->pc = 0x1f8c38u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x1f8c3c: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x1f8c3cu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x1f8c40: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F8C40u;
    {
        const bool branch_taken_0x1f8c40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8C40u;
        // 0x1f8c44: 0xae830120  sw          $v1, 0x120($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 288), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8c40) {
            ctx->pc = 0x1F8C54u;
            goto label_1f8c54;
        }
    }
    ctx->pc = 0x1F8C48u;
label_1f8c48:
    // 0x1f8c48: 0x1217c2  srl         $v0, $s2, 31
    ctx->pc = 0x1f8c48u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x1f8c4c: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1f8c4cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8c50: 0xae820120  sw          $v0, 0x120($s4)
    ctx->pc = 0x1f8c50u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 288), GPR_U32(ctx, 2));
label_1f8c54:
    // 0x1f8c54: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x1f8c54u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f8c58: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f8c58u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f8c5c: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1f8c5cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f8c60: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f8c60u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f8c64: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f8c64u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f8c68: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1f8c68u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f8c6c: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1f8c6cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1f8c70: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f8c70u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f8c74: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f8c74u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f8c78: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1f8c78u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f8c7c: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x1f8c7cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1f8c80: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f8c80u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f8c84: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f8c84u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f8c88: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F8C88u;
    {
        const bool branch_taken_0x1f8c88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8C88u;
        // 0x1f8c8c: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8c88) {
            ctx->pc = 0x1F8C9Cu;
            goto label_1f8c9c;
        }
    }
    ctx->pc = 0x1F8C90u;
label_1f8c90:
    // 0x1f8c90: 0x129040  sll         $s2, $s2, 1
    ctx->pc = 0x1f8c90u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x1f8c94: 0xae820120  sw          $v0, 0x120($s4)
    ctx->pc = 0x1f8c94u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 288), GPR_U32(ctx, 2));
    // 0x1f8c98: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1f8c98u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1f8c9c:
    // 0x1f8c9c: 0x2a62001f  slti        $v0, $s3, 0x1F
    ctx->pc = 0x1f8c9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x1f8ca0: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1F8CA0u;
    {
        const bool branch_taken_0x1f8ca0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F8CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8CA0u;
        // 0x1f8ca4: 0x1217c2  srl         $v0, $s2, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8ca0) {
            ctx->pc = 0x1F8D18u;
            goto label_1f8d18;
        }
    }
    ctx->pc = 0x1F8CA8u;
    // 0x1f8ca8: 0x2673ffe1  addiu       $s3, $s3, -0x1F
    ctx->pc = 0x1f8ca8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967265));
    // 0x1f8cac: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F8CACu;
    {
        const bool branch_taken_0x1f8cac = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8CACu;
        // 0x1f8cb0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8cac) {
            ctx->pc = 0x1F8CD0u;
            goto label_1f8cd0;
        }
    }
    ctx->pc = 0x1F8CB4u;
    // 0x1f8cb4: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x1f8cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1f8cb8: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x1f8cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x1f8cbc: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x1f8cbcu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1f8cc0: 0x121fc2  srl         $v1, $s2, 31
    ctx->pc = 0x1f8cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x1f8cc4: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x1f8cc4u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x1f8cc8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F8CC8u;
    {
        const bool branch_taken_0x1f8cc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8CC8u;
        // 0x1f8ccc: 0xae830124  sw          $v1, 0x124($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 292), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8cc8) {
            ctx->pc = 0x1F8CDCu;
            goto label_1f8cdc;
        }
    }
    ctx->pc = 0x1F8CD0u;
label_1f8cd0:
    // 0x1f8cd0: 0x1217c2  srl         $v0, $s2, 31
    ctx->pc = 0x1f8cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x1f8cd4: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1f8cd4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8cd8: 0xae820124  sw          $v0, 0x124($s4)
    ctx->pc = 0x1f8cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 292), GPR_U32(ctx, 2));
label_1f8cdc:
    // 0x1f8cdc: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x1f8cdcu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f8ce0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f8ce0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f8ce4: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1f8ce4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f8ce8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f8ce8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f8cec: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f8cecu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f8cf0: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1f8cf0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f8cf4: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1f8cf4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1f8cf8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f8cf8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f8cfc: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f8cfcu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f8d00: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1f8d00u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f8d04: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x1f8d04u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1f8d08: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f8d08u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f8d0c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f8d0cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f8d10: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F8D10u;
    {
        const bool branch_taken_0x1f8d10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8D10u;
        // 0x1f8d14: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8d10) {
            ctx->pc = 0x1F8D24u;
            goto label_1f8d24;
        }
    }
    ctx->pc = 0x1F8D18u;
label_1f8d18:
    // 0x1f8d18: 0x129040  sll         $s2, $s2, 1
    ctx->pc = 0x1f8d18u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x1f8d1c: 0xae820124  sw          $v0, 0x124($s4)
    ctx->pc = 0x1f8d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 292), GPR_U32(ctx, 2));
    // 0x1f8d20: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1f8d20u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1f8d24:
    // 0x1f8d24: 0x2a62001f  slti        $v0, $s3, 0x1F
    ctx->pc = 0x1f8d24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x1f8d28: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1F8D28u;
    {
        const bool branch_taken_0x1f8d28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F8D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8D28u;
        // 0x1f8d2c: 0x1217c2  srl         $v0, $s2, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8d28) {
            ctx->pc = 0x1F8DA0u;
            goto label_1f8da0;
        }
    }
    ctx->pc = 0x1F8D30u;
    // 0x1f8d30: 0x2673ffe1  addiu       $s3, $s3, -0x1F
    ctx->pc = 0x1f8d30u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967265));
    // 0x1f8d34: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F8D34u;
    {
        const bool branch_taken_0x1f8d34 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8D34u;
        // 0x1f8d38: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8d34) {
            ctx->pc = 0x1F8D58u;
            goto label_1f8d58;
        }
    }
    ctx->pc = 0x1F8D3Cu;
    // 0x1f8d3c: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x1f8d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1f8d40: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x1f8d40u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x1f8d44: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x1f8d44u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1f8d48: 0x121fc2  srl         $v1, $s2, 31
    ctx->pc = 0x1f8d48u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x1f8d4c: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x1f8d4cu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x1f8d50: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F8D50u;
    {
        const bool branch_taken_0x1f8d50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8D50u;
        // 0x1f8d54: 0xae830128  sw          $v1, 0x128($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 296), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8d50) {
            ctx->pc = 0x1F8D64u;
            goto label_1f8d64;
        }
    }
    ctx->pc = 0x1F8D58u;
label_1f8d58:
    // 0x1f8d58: 0x1217c2  srl         $v0, $s2, 31
    ctx->pc = 0x1f8d58u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x1f8d5c: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1f8d5cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8d60: 0xae820128  sw          $v0, 0x128($s4)
    ctx->pc = 0x1f8d60u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 296), GPR_U32(ctx, 2));
label_1f8d64:
    // 0x1f8d64: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x1f8d64u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f8d68: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f8d68u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f8d6c: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1f8d6cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f8d70: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f8d70u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f8d74: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f8d74u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f8d78: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1f8d78u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f8d7c: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1f8d7cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1f8d80: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f8d80u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f8d84: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f8d84u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f8d88: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1f8d88u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f8d8c: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x1f8d8cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1f8d90: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f8d90u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f8d94: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f8d94u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f8d98: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F8D98u;
    {
        const bool branch_taken_0x1f8d98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8D98u;
        // 0x1f8d9c: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8d98) {
            ctx->pc = 0x1F8DACu;
            goto label_1f8dac;
        }
    }
    ctx->pc = 0x1F8DA0u;
label_1f8da0:
    // 0x1f8da0: 0x129040  sll         $s2, $s2, 1
    ctx->pc = 0x1f8da0u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x1f8da4: 0xae820128  sw          $v0, 0x128($s4)
    ctx->pc = 0x1f8da4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 296), GPR_U32(ctx, 2));
    // 0x1f8da8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1f8da8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1f8dac:
    // 0x1f8dac: 0x2a62001f  slti        $v0, $s3, 0x1F
    ctx->pc = 0x1f8dacu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x1f8db0: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1F8DB0u;
    {
        const bool branch_taken_0x1f8db0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F8DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8DB0u;
        // 0x1f8db4: 0x1217c2  srl         $v0, $s2, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8db0) {
            ctx->pc = 0x1F8E28u;
            goto label_1f8e28;
        }
    }
    ctx->pc = 0x1F8DB8u;
    // 0x1f8db8: 0x2673ffe1  addiu       $s3, $s3, -0x1F
    ctx->pc = 0x1f8db8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967265));
    // 0x1f8dbc: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F8DBCu;
    {
        const bool branch_taken_0x1f8dbc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8DBCu;
        // 0x1f8dc0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8dbc) {
            ctx->pc = 0x1F8DE0u;
            goto label_1f8de0;
        }
    }
    ctx->pc = 0x1F8DC4u;
    // 0x1f8dc4: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x1f8dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1f8dc8: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x1f8dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x1f8dcc: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x1f8dccu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1f8dd0: 0x121fc2  srl         $v1, $s2, 31
    ctx->pc = 0x1f8dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x1f8dd4: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x1f8dd4u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x1f8dd8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F8DD8u;
    {
        const bool branch_taken_0x1f8dd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8DD8u;
        // 0x1f8ddc: 0xae83012c  sw          $v1, 0x12C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 300), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8dd8) {
            ctx->pc = 0x1F8DECu;
            goto label_1f8dec;
        }
    }
    ctx->pc = 0x1F8DE0u;
label_1f8de0:
    // 0x1f8de0: 0x1217c2  srl         $v0, $s2, 31
    ctx->pc = 0x1f8de0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x1f8de4: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1f8de4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8de8: 0xae82012c  sw          $v0, 0x12C($s4)
    ctx->pc = 0x1f8de8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 300), GPR_U32(ctx, 2));
label_1f8dec:
    // 0x1f8dec: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x1f8decu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f8df0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f8df0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f8df4: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1f8df4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f8df8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f8df8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f8dfc: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f8dfcu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f8e00: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1f8e00u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f8e04: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1f8e04u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1f8e08: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f8e08u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f8e0c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f8e0cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f8e10: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1f8e10u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f8e14: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x1f8e14u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1f8e18: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f8e18u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f8e1c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f8e1cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f8e20: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F8E20u;
    {
        const bool branch_taken_0x1f8e20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8E20u;
        // 0x1f8e24: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8e20) {
            ctx->pc = 0x1F8E34u;
            goto label_1f8e34;
        }
    }
    ctx->pc = 0x1F8E28u;
label_1f8e28:
    // 0x1f8e28: 0x129040  sll         $s2, $s2, 1
    ctx->pc = 0x1f8e28u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x1f8e2c: 0xae82012c  sw          $v0, 0x12C($s4)
    ctx->pc = 0x1f8e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 300), GPR_U32(ctx, 2));
    // 0x1f8e30: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1f8e30u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1f8e34:
    // 0x1f8e34: 0x2a62001f  slti        $v0, $s3, 0x1F
    ctx->pc = 0x1f8e34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x1f8e38: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1F8E38u;
    {
        const bool branch_taken_0x1f8e38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F8E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8E38u;
        // 0x1f8e3c: 0x1217c2  srl         $v0, $s2, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8e38) {
            ctx->pc = 0x1F8EB0u;
            goto label_1f8eb0;
        }
    }
    ctx->pc = 0x1F8E40u;
    // 0x1f8e40: 0x2673ffe1  addiu       $s3, $s3, -0x1F
    ctx->pc = 0x1f8e40u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967265));
    // 0x1f8e44: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F8E44u;
    {
        const bool branch_taken_0x1f8e44 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8E44u;
        // 0x1f8e48: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8e44) {
            ctx->pc = 0x1F8E68u;
            goto label_1f8e68;
        }
    }
    ctx->pc = 0x1F8E4Cu;
    // 0x1f8e4c: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x1f8e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1f8e50: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x1f8e50u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x1f8e54: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x1f8e54u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1f8e58: 0x121fc2  srl         $v1, $s2, 31
    ctx->pc = 0x1f8e58u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x1f8e5c: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x1f8e5cu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x1f8e60: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F8E60u;
    {
        const bool branch_taken_0x1f8e60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8E60u;
        // 0x1f8e64: 0xae830130  sw          $v1, 0x130($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 304), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8e60) {
            ctx->pc = 0x1F8E74u;
            goto label_1f8e74;
        }
    }
    ctx->pc = 0x1F8E68u;
label_1f8e68:
    // 0x1f8e68: 0x1217c2  srl         $v0, $s2, 31
    ctx->pc = 0x1f8e68u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x1f8e6c: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1f8e6cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8e70: 0xae820130  sw          $v0, 0x130($s4)
    ctx->pc = 0x1f8e70u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 304), GPR_U32(ctx, 2));
label_1f8e74:
    // 0x1f8e74: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x1f8e74u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f8e78: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f8e78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f8e7c: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1f8e7cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f8e80: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f8e80u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f8e84: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f8e84u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f8e88: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1f8e88u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f8e8c: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1f8e8cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1f8e90: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f8e90u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f8e94: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f8e94u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f8e98: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1f8e98u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f8e9c: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x1f8e9cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1f8ea0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f8ea0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f8ea4: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f8ea4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f8ea8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F8EA8u;
    {
        const bool branch_taken_0x1f8ea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8EA8u;
        // 0x1f8eac: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8ea8) {
            ctx->pc = 0x1F8EBCu;
            goto label_1f8ebc;
        }
    }
    ctx->pc = 0x1F8EB0u;
label_1f8eb0:
    // 0x1f8eb0: 0x129040  sll         $s2, $s2, 1
    ctx->pc = 0x1f8eb0u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x1f8eb4: 0xae820130  sw          $v0, 0x130($s4)
    ctx->pc = 0x1f8eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 304), GPR_U32(ctx, 2));
    // 0x1f8eb8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1f8eb8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1f8ebc:
    // 0x1f8ebc: 0x2a62001f  slti        $v0, $s3, 0x1F
    ctx->pc = 0x1f8ebcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x1f8ec0: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1F8EC0u;
    {
        const bool branch_taken_0x1f8ec0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F8EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8EC0u;
        // 0x1f8ec4: 0x1217c2  srl         $v0, $s2, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8ec0) {
            ctx->pc = 0x1F8F38u;
            goto label_1f8f38;
        }
    }
    ctx->pc = 0x1F8EC8u;
    // 0x1f8ec8: 0x2673ffe1  addiu       $s3, $s3, -0x1F
    ctx->pc = 0x1f8ec8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967265));
    // 0x1f8ecc: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F8ECCu;
    {
        const bool branch_taken_0x1f8ecc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8ECCu;
        // 0x1f8ed0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8ecc) {
            ctx->pc = 0x1F8EF0u;
            goto label_1f8ef0;
        }
    }
    ctx->pc = 0x1F8ED4u;
    // 0x1f8ed4: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x1f8ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1f8ed8: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x1f8ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x1f8edc: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x1f8edcu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1f8ee0: 0x121fc2  srl         $v1, $s2, 31
    ctx->pc = 0x1f8ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x1f8ee4: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x1f8ee4u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x1f8ee8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F8EE8u;
    {
        const bool branch_taken_0x1f8ee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8EE8u;
        // 0x1f8eec: 0xae830134  sw          $v1, 0x134($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 308), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8ee8) {
            ctx->pc = 0x1F8EFCu;
            goto label_1f8efc;
        }
    }
    ctx->pc = 0x1F8EF0u;
label_1f8ef0:
    // 0x1f8ef0: 0x1217c2  srl         $v0, $s2, 31
    ctx->pc = 0x1f8ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x1f8ef4: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1f8ef4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8ef8: 0xae820134  sw          $v0, 0x134($s4)
    ctx->pc = 0x1f8ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 308), GPR_U32(ctx, 2));
label_1f8efc:
    // 0x1f8efc: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x1f8efcu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f8f00: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f8f00u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f8f04: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1f8f04u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f8f08: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f8f08u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f8f0c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f8f0cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f8f10: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1f8f10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f8f14: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1f8f14u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1f8f18: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f8f18u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f8f1c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f8f1cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f8f20: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1f8f20u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f8f24: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x1f8f24u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1f8f28: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f8f28u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f8f2c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f8f2cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f8f30: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F8F30u;
    {
        const bool branch_taken_0x1f8f30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8F30u;
        // 0x1f8f34: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8f30) {
            ctx->pc = 0x1F8F44u;
            goto label_1f8f44;
        }
    }
    ctx->pc = 0x1F8F38u;
label_1f8f38:
    // 0x1f8f38: 0x129040  sll         $s2, $s2, 1
    ctx->pc = 0x1f8f38u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x1f8f3c: 0xae820134  sw          $v0, 0x134($s4)
    ctx->pc = 0x1f8f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 308), GPR_U32(ctx, 2));
    // 0x1f8f40: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1f8f40u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1f8f44:
    // 0x1f8f44: 0x2a62001f  slti        $v0, $s3, 0x1F
    ctx->pc = 0x1f8f44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x1f8f48: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1F8F48u;
    {
        const bool branch_taken_0x1f8f48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F8F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8F48u;
        // 0x1f8f4c: 0x1217c2  srl         $v0, $s2, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8f48) {
            ctx->pc = 0x1F8FC0u;
            goto label_1f8fc0;
        }
    }
    ctx->pc = 0x1F8F50u;
    // 0x1f8f50: 0x2673ffe1  addiu       $s3, $s3, -0x1F
    ctx->pc = 0x1f8f50u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967265));
    // 0x1f8f54: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F8F54u;
    {
        const bool branch_taken_0x1f8f54 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8F54u;
        // 0x1f8f58: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8f54) {
            ctx->pc = 0x1F8F78u;
            goto label_1f8f78;
        }
    }
    ctx->pc = 0x1F8F5Cu;
    // 0x1f8f5c: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x1f8f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1f8f60: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x1f8f60u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x1f8f64: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x1f8f64u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1f8f68: 0x121fc2  srl         $v1, $s2, 31
    ctx->pc = 0x1f8f68u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x1f8f6c: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x1f8f6cu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x1f8f70: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F8F70u;
    {
        const bool branch_taken_0x1f8f70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8F70u;
        // 0x1f8f74: 0xae830138  sw          $v1, 0x138($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 312), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8f70) {
            ctx->pc = 0x1F8F84u;
            goto label_1f8f84;
        }
    }
    ctx->pc = 0x1F8F78u;
label_1f8f78:
    // 0x1f8f78: 0x1217c2  srl         $v0, $s2, 31
    ctx->pc = 0x1f8f78u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x1f8f7c: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1f8f7cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8f80: 0xae820138  sw          $v0, 0x138($s4)
    ctx->pc = 0x1f8f80u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 312), GPR_U32(ctx, 2));
label_1f8f84:
    // 0x1f8f84: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x1f8f84u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f8f88: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f8f88u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f8f8c: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1f8f8cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f8f90: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f8f90u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f8f94: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f8f94u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f8f98: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1f8f98u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f8f9c: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1f8f9cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1f8fa0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f8fa0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f8fa4: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f8fa4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f8fa8: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1f8fa8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f8fac: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x1f8facu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1f8fb0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f8fb0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f8fb4: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f8fb4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f8fb8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F8FB8u;
    {
        const bool branch_taken_0x1f8fb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8FB8u;
        // 0x1f8fbc: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8fb8) {
            ctx->pc = 0x1F8FCCu;
            goto label_1f8fcc;
        }
    }
    ctx->pc = 0x1F8FC0u;
label_1f8fc0:
    // 0x1f8fc0: 0x129040  sll         $s2, $s2, 1
    ctx->pc = 0x1f8fc0u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x1f8fc4: 0xae820138  sw          $v0, 0x138($s4)
    ctx->pc = 0x1f8fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 312), GPR_U32(ctx, 2));
    // 0x1f8fc8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1f8fc8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1f8fcc:
    // 0x1f8fcc: 0x2a62001f  slti        $v0, $s3, 0x1F
    ctx->pc = 0x1f8fccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x1f8fd0: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1F8FD0u;
    {
        const bool branch_taken_0x1f8fd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F8FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8FD0u;
        // 0x1f8fd4: 0x1217c2  srl         $v0, $s2, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8fd0) {
            ctx->pc = 0x1F9048u;
            goto label_1f9048;
        }
    }
    ctx->pc = 0x1F8FD8u;
    // 0x1f8fd8: 0x2673ffe1  addiu       $s3, $s3, -0x1F
    ctx->pc = 0x1f8fd8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967265));
    // 0x1f8fdc: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F8FDCu;
    {
        const bool branch_taken_0x1f8fdc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8FDCu;
        // 0x1f8fe0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8fdc) {
            ctx->pc = 0x1F9000u;
            goto label_1f9000;
        }
    }
    ctx->pc = 0x1F8FE4u;
    // 0x1f8fe4: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x1f8fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1f8fe8: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x1f8fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x1f8fec: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x1f8fecu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1f8ff0: 0x121fc2  srl         $v1, $s2, 31
    ctx->pc = 0x1f8ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x1f8ff4: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x1f8ff4u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x1f8ff8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F8FF8u;
    {
        const bool branch_taken_0x1f8ff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8FF8u;
        // 0x1f8ffc: 0xae83013c  sw          $v1, 0x13C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 316), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8ff8) {
            ctx->pc = 0x1F900Cu;
            goto label_1f900c;
        }
    }
    ctx->pc = 0x1F9000u;
label_1f9000:
    // 0x1f9000: 0x1217c2  srl         $v0, $s2, 31
    ctx->pc = 0x1f9000u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x1f9004: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1f9004u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9008: 0xae82013c  sw          $v0, 0x13C($s4)
    ctx->pc = 0x1f9008u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 316), GPR_U32(ctx, 2));
label_1f900c:
    // 0x1f900c: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x1f900cu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f9010: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f9010u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f9014: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1f9014u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f9018: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f9018u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f901c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f901cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f9020: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1f9020u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f9024: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1f9024u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1f9028: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f9028u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f902c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f902cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f9030: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1f9030u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f9034: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x1f9034u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1f9038: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f9038u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f903c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f903cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f9040: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F9040u;
    {
        const bool branch_taken_0x1f9040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9040u;
        // 0x1f9044: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9040) {
            ctx->pc = 0x1F9054u;
            goto label_1f9054;
        }
    }
    ctx->pc = 0x1F9048u;
label_1f9048:
    // 0x1f9048: 0x129040  sll         $s2, $s2, 1
    ctx->pc = 0x1f9048u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x1f904c: 0xae82013c  sw          $v0, 0x13C($s4)
    ctx->pc = 0x1f904cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 316), GPR_U32(ctx, 2));
    // 0x1f9050: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1f9050u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1f9054:
    // 0x1f9054: 0x2a62001f  slti        $v0, $s3, 0x1F
    ctx->pc = 0x1f9054u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x1f9058: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1F9058u;
    {
        const bool branch_taken_0x1f9058 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F905Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9058u;
        // 0x1f905c: 0x1217c2  srl         $v0, $s2, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9058) {
            ctx->pc = 0x1F90D0u;
            goto label_1f90d0;
        }
    }
    ctx->pc = 0x1F9060u;
    // 0x1f9060: 0x2673ffe1  addiu       $s3, $s3, -0x1F
    ctx->pc = 0x1f9060u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967265));
    // 0x1f9064: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F9064u;
    {
        const bool branch_taken_0x1f9064 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9064u;
        // 0x1f9068: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9064) {
            ctx->pc = 0x1F9088u;
            goto label_1f9088;
        }
    }
    ctx->pc = 0x1F906Cu;
    // 0x1f906c: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x1f906cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1f9070: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x1f9070u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x1f9074: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x1f9074u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1f9078: 0x121fc2  srl         $v1, $s2, 31
    ctx->pc = 0x1f9078u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x1f907c: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x1f907cu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x1f9080: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F9080u;
    {
        const bool branch_taken_0x1f9080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9080u;
        // 0x1f9084: 0xae830140  sw          $v1, 0x140($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 320), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9080) {
            ctx->pc = 0x1F9094u;
            goto label_1f9094;
        }
    }
    ctx->pc = 0x1F9088u;
label_1f9088:
    // 0x1f9088: 0x1217c2  srl         $v0, $s2, 31
    ctx->pc = 0x1f9088u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x1f908c: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1f908cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9090: 0xae820140  sw          $v0, 0x140($s4)
    ctx->pc = 0x1f9090u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 320), GPR_U32(ctx, 2));
label_1f9094:
    // 0x1f9094: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x1f9094u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f9098: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f9098u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f909c: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1f909cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f90a0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f90a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f90a4: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f90a4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f90a8: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1f90a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f90ac: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1f90acu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1f90b0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f90b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f90b4: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f90b4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f90b8: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1f90b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f90bc: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x1f90bcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1f90c0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f90c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f90c4: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f90c4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f90c8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F90C8u;
    {
        const bool branch_taken_0x1f90c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F90CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F90C8u;
        // 0x1f90cc: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f90c8) {
            ctx->pc = 0x1F90DCu;
            goto label_1f90dc;
        }
    }
    ctx->pc = 0x1F90D0u;
label_1f90d0:
    // 0x1f90d0: 0x129040  sll         $s2, $s2, 1
    ctx->pc = 0x1f90d0u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x1f90d4: 0xae820140  sw          $v0, 0x140($s4)
    ctx->pc = 0x1f90d4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 320), GPR_U32(ctx, 2));
    // 0x1f90d8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1f90d8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1f90dc:
    // 0x1f90dc: 0x8e820140  lw          $v0, 0x140($s4)
    ctx->pc = 0x1f90dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 320)));
    // 0x1f90e0: 0x1040009b  beqz        $v0, . + 4 + (0x9B << 2)
    ctx->pc = 0x1F90E0u;
    {
        const bool branch_taken_0x1f90e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F90E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F90E0u;
        // 0x1f90e4: 0x2a62001f  slti        $v0, $s3, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)31) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f90e0) {
            ctx->pc = 0x1F9350u;
            goto label_1f9350;
        }
    }
    ctx->pc = 0x1F90E8u;
    // 0x1f90e8: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1F90E8u;
    {
        const bool branch_taken_0x1f90e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F90ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F90E8u;
        // 0x1f90ec: 0x1217c2  srl         $v0, $s2, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f90e8) {
            ctx->pc = 0x1F9160u;
            goto label_1f9160;
        }
    }
    ctx->pc = 0x1F90F0u;
    // 0x1f90f0: 0x2673ffe1  addiu       $s3, $s3, -0x1F
    ctx->pc = 0x1f90f0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967265));
    // 0x1f90f4: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F90F4u;
    {
        const bool branch_taken_0x1f90f4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F90F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F90F4u;
        // 0x1f90f8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f90f4) {
            ctx->pc = 0x1F9118u;
            goto label_1f9118;
        }
    }
    ctx->pc = 0x1F90FCu;
    // 0x1f90fc: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x1f90fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1f9100: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x1f9100u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x1f9104: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x1f9104u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1f9108: 0x121fc2  srl         $v1, $s2, 31
    ctx->pc = 0x1f9108u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x1f910c: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x1f910cu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x1f9110: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F9110u;
    {
        const bool branch_taken_0x1f9110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9110u;
        // 0x1f9114: 0xae830144  sw          $v1, 0x144($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 324), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9110) {
            ctx->pc = 0x1F9124u;
            goto label_1f9124;
        }
    }
    ctx->pc = 0x1F9118u;
label_1f9118:
    // 0x1f9118: 0x1217c2  srl         $v0, $s2, 31
    ctx->pc = 0x1f9118u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x1f911c: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1f911cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9120: 0xae820144  sw          $v0, 0x144($s4)
    ctx->pc = 0x1f9120u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 324), GPR_U32(ctx, 2));
label_1f9124:
    // 0x1f9124: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x1f9124u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f9128: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f9128u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f912c: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1f912cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f9130: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f9130u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f9134: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f9134u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f9138: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1f9138u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f913c: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1f913cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1f9140: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f9140u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f9144: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f9144u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f9148: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1f9148u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f914c: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x1f914cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1f9150: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f9150u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f9154: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f9154u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f9158: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F9158u;
    {
        const bool branch_taken_0x1f9158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F915Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9158u;
        // 0x1f915c: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9158) {
            ctx->pc = 0x1F916Cu;
            goto label_1f916c;
        }
    }
    ctx->pc = 0x1F9160u;
label_1f9160:
    // 0x1f9160: 0x129040  sll         $s2, $s2, 1
    ctx->pc = 0x1f9160u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x1f9164: 0xae820144  sw          $v0, 0x144($s4)
    ctx->pc = 0x1f9164u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 324), GPR_U32(ctx, 2));
    // 0x1f9168: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1f9168u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1f916c:
    // 0x1f916c: 0x2a62001d  slti        $v0, $s3, 0x1D
    ctx->pc = 0x1f916cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)29) ? 1 : 0);
    // 0x1f9170: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1F9170u;
    {
        const bool branch_taken_0x1f9170 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F9174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9170u;
        // 0x1f9174: 0x121742  srl         $v0, $s2, 29 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9170) {
            ctx->pc = 0x1F91E8u;
            goto label_1f91e8;
        }
    }
    ctx->pc = 0x1F9178u;
    // 0x1f9178: 0x2673ffe3  addiu       $s3, $s3, -0x1D
    ctx->pc = 0x1f9178u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967267));
    // 0x1f917c: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F917Cu;
    {
        const bool branch_taken_0x1f917c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F917Cu;
        // 0x1f9180: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f917c) {
            ctx->pc = 0x1F91A0u;
            goto label_1f91a0;
        }
    }
    ctx->pc = 0x1F9184u;
    // 0x1f9184: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x1f9184u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1f9188: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x1f9188u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x1f918c: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x1f918cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1f9190: 0x121f42  srl         $v1, $s2, 29
    ctx->pc = 0x1f9190u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 29));
    // 0x1f9194: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x1f9194u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x1f9198: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F9198u;
    {
        const bool branch_taken_0x1f9198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F919Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9198u;
        // 0x1f919c: 0xae830148  sw          $v1, 0x148($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 328), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9198) {
            ctx->pc = 0x1F91ACu;
            goto label_1f91ac;
        }
    }
    ctx->pc = 0x1F91A0u;
label_1f91a0:
    // 0x1f91a0: 0x121742  srl         $v0, $s2, 29
    ctx->pc = 0x1f91a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 29));
    // 0x1f91a4: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1f91a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f91a8: 0xae820148  sw          $v0, 0x148($s4)
    ctx->pc = 0x1f91a8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 328), GPR_U32(ctx, 2));
label_1f91ac:
    // 0x1f91ac: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x1f91acu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f91b0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f91b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f91b4: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1f91b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f91b8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f91b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f91bc: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f91bcu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f91c0: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1f91c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f91c4: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1f91c4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1f91c8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f91c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f91cc: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f91ccu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f91d0: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1f91d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f91d4: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x1f91d4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1f91d8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f91d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f91dc: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f91dcu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f91e0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F91E0u;
    {
        const bool branch_taken_0x1f91e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F91E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F91E0u;
        // 0x1f91e4: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f91e0) {
            ctx->pc = 0x1F91F4u;
            goto label_1f91f4;
        }
    }
    ctx->pc = 0x1F91E8u;
label_1f91e8:
    // 0x1f91e8: 0x1290c0  sll         $s2, $s2, 3
    ctx->pc = 0x1f91e8u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x1f91ec: 0xae820148  sw          $v0, 0x148($s4)
    ctx->pc = 0x1f91ecu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 328), GPR_U32(ctx, 2));
    // 0x1f91f0: 0x26730003  addiu       $s3, $s3, 0x3
    ctx->pc = 0x1f91f0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 3));
label_1f91f4:
    // 0x1f91f4: 0x2a62001f  slti        $v0, $s3, 0x1F
    ctx->pc = 0x1f91f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x1f91f8: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1F91F8u;
    {
        const bool branch_taken_0x1f91f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F91FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F91F8u;
        // 0x1f91fc: 0x1217c2  srl         $v0, $s2, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f91f8) {
            ctx->pc = 0x1F9270u;
            goto label_1f9270;
        }
    }
    ctx->pc = 0x1F9200u;
    // 0x1f9200: 0x2673ffe1  addiu       $s3, $s3, -0x1F
    ctx->pc = 0x1f9200u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967265));
    // 0x1f9204: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F9204u;
    {
        const bool branch_taken_0x1f9204 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9204u;
        // 0x1f9208: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9204) {
            ctx->pc = 0x1F9228u;
            goto label_1f9228;
        }
    }
    ctx->pc = 0x1F920Cu;
    // 0x1f920c: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x1f920cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1f9210: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x1f9210u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x1f9214: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x1f9214u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1f9218: 0x121fc2  srl         $v1, $s2, 31
    ctx->pc = 0x1f9218u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x1f921c: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x1f921cu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x1f9220: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F9220u;
    {
        const bool branch_taken_0x1f9220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9220u;
        // 0x1f9224: 0xae83014c  sw          $v1, 0x14C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 332), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9220) {
            ctx->pc = 0x1F9234u;
            goto label_1f9234;
        }
    }
    ctx->pc = 0x1F9228u;
label_1f9228:
    // 0x1f9228: 0x1217c2  srl         $v0, $s2, 31
    ctx->pc = 0x1f9228u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x1f922c: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1f922cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9230: 0xae82014c  sw          $v0, 0x14C($s4)
    ctx->pc = 0x1f9230u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 332), GPR_U32(ctx, 2));
label_1f9234:
    // 0x1f9234: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x1f9234u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f9238: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f9238u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f923c: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1f923cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f9240: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f9240u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f9244: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f9244u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f9248: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1f9248u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f924c: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1f924cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1f9250: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f9250u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f9254: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f9254u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f9258: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1f9258u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f925c: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x1f925cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1f9260: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f9260u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f9264: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f9264u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f9268: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F9268u;
    {
        const bool branch_taken_0x1f9268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F926Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9268u;
        // 0x1f926c: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9268) {
            ctx->pc = 0x1F927Cu;
            goto label_1f927c;
        }
    }
    ctx->pc = 0x1F9270u;
label_1f9270:
    // 0x1f9270: 0x129040  sll         $s2, $s2, 1
    ctx->pc = 0x1f9270u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x1f9274: 0xae82014c  sw          $v0, 0x14C($s4)
    ctx->pc = 0x1f9274u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 332), GPR_U32(ctx, 2));
    // 0x1f9278: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1f9278u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1f927c:
    // 0x1f927c: 0x2a620019  slti        $v0, $s3, 0x19
    ctx->pc = 0x1f927cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)25) ? 1 : 0);
    // 0x1f9280: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1F9280u;
    {
        const bool branch_taken_0x1f9280 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F9284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9280u;
        // 0x1f9284: 0x121642  srl         $v0, $s2, 25 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 25));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9280) {
            ctx->pc = 0x1F92F8u;
            goto label_1f92f8;
        }
    }
    ctx->pc = 0x1F9288u;
    // 0x1f9288: 0x2673ffe7  addiu       $s3, $s3, -0x19
    ctx->pc = 0x1f9288u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967271));
    // 0x1f928c: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F928Cu;
    {
        const bool branch_taken_0x1f928c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F928Cu;
        // 0x1f9290: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f928c) {
            ctx->pc = 0x1F92B0u;
            goto label_1f92b0;
        }
    }
    ctx->pc = 0x1F9294u;
    // 0x1f9294: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x1f9294u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1f9298: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x1f9298u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x1f929c: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x1f929cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1f92a0: 0x121e42  srl         $v1, $s2, 25
    ctx->pc = 0x1f92a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 25));
    // 0x1f92a4: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x1f92a4u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x1f92a8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F92A8u;
    {
        const bool branch_taken_0x1f92a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F92ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F92A8u;
        // 0x1f92ac: 0xae830150  sw          $v1, 0x150($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 336), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f92a8) {
            ctx->pc = 0x1F92BCu;
            goto label_1f92bc;
        }
    }
    ctx->pc = 0x1F92B0u;
label_1f92b0:
    // 0x1f92b0: 0x121642  srl         $v0, $s2, 25
    ctx->pc = 0x1f92b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 25));
    // 0x1f92b4: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1f92b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f92b8: 0xae820150  sw          $v0, 0x150($s4)
    ctx->pc = 0x1f92b8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 336), GPR_U32(ctx, 2));
label_1f92bc:
    // 0x1f92bc: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x1f92bcu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f92c0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f92c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f92c4: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1f92c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f92c8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f92c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f92cc: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f92ccu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f92d0: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1f92d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f92d4: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1f92d4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1f92d8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f92d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f92dc: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f92dcu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f92e0: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1f92e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f92e4: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x1f92e4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1f92e8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f92e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f92ec: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f92ecu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f92f0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F92F0u;
    {
        const bool branch_taken_0x1f92f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F92F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F92F0u;
        // 0x1f92f4: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f92f0) {
            ctx->pc = 0x1F9304u;
            goto label_1f9304;
        }
    }
    ctx->pc = 0x1F92F8u;
label_1f92f8:
    // 0x1f92f8: 0x1291c0  sll         $s2, $s2, 7
    ctx->pc = 0x1f92f8u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 7));
    // 0x1f92fc: 0xae820150  sw          $v0, 0x150($s4)
    ctx->pc = 0x1f92fcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 336), GPR_U32(ctx, 2));
    // 0x1f9300: 0x26730007  addiu       $s3, $s3, 0x7
    ctx->pc = 0x1f9300u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 7));
label_1f9304:
    // 0x1f9304: 0x2a620018  slti        $v0, $s3, 0x18
    ctx->pc = 0x1f9304u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x1f9308: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1F9308u;
    {
        const bool branch_taken_0x1f9308 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F930Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9308u;
        // 0x1f930c: 0x121602  srl         $v0, $s2, 24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9308) {
            ctx->pc = 0x1F9348u;
            goto label_1f9348;
        }
    }
    ctx->pc = 0x1F9310u;
    // 0x1f9310: 0x2673ffe8  addiu       $s3, $s3, -0x18
    ctx->pc = 0x1f9310u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967272));
    // 0x1f9314: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F9314u;
    {
        const bool branch_taken_0x1f9314 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9314u;
        // 0x1f9318: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9314) {
            ctx->pc = 0x1F9338u;
            goto label_1f9338;
        }
    }
    ctx->pc = 0x1F931Cu;
    // 0x1f931c: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x1f931cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1f9320: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x1f9320u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x1f9324: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x1f9324u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1f9328: 0x121e02  srl         $v1, $s2, 24
    ctx->pc = 0x1f9328u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 24));
    // 0x1f932c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F932Cu;
    {
        const bool branch_taken_0x1f932c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F932Cu;
        // 0x1f9330: 0xae830154  sw          $v1, 0x154($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 340), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f932c) {
            ctx->pc = 0x1F9340u;
            goto label_1f9340;
        }
    }
    ctx->pc = 0x1F9334u;
    // 0x1f9334: 0x0  nop
    ctx->pc = 0x1f9334u;
    // NOP
label_1f9338:
    // 0x1f9338: 0x121602  srl         $v0, $s2, 24
    ctx->pc = 0x1f9338u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 24));
    // 0x1f933c: 0xae820154  sw          $v0, 0x154($s4)
    ctx->pc = 0x1f933cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 340), GPR_U32(ctx, 2));
label_1f9340:
    // 0x1f9340: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1F9340u;
    {
        const bool branch_taken_0x1f9340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9340u;
        // 0x1f9344: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9340) {
            ctx->pc = 0x1F9350u;
            goto label_1f9350;
        }
    }
    ctx->pc = 0x1F9348u;
label_1f9348:
    // 0x1f9348: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x1f9348u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x1f934c: 0xae820154  sw          $v0, 0x154($s4)
    ctx->pc = 0x1f934cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 340), GPR_U32(ctx, 2));
label_1f9350:
    // 0x1f9350: 0xc07d6f0  jal         func_1F5BC0
    ctx->pc = 0x1F9350u;
    SET_GPR_U32(ctx, 31, 0x1F9358u);
    ctx->pc = 0x1F9354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9350u;
    // 0x1f9354: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F5BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F5BC0u, 0x1F9350u, 0x1F9358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9358u;
label_1f9358:
    // 0x1f9358: 0xc07d730  jal         func_1F5CC0
    ctx->pc = 0x1F9358u;
    SET_GPR_U32(ctx, 31, 0x1F9360u);
    ctx->pc = 0x1F935Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9358u;
    // 0x1f935c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F5CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F5CC0u, 0x1F9358u, 0x1F9360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9360u;
label_1f9360:
    // 0x1f9360: 0x8e8203c4  lw          $v0, 0x3C4($s4)
    ctx->pc = 0x1f9360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 964)));
    // 0x1f9364: 0x50400189  beql        $v0, $zero, . + 4 + (0x189 << 2)
    ctx->pc = 0x1F9364u;
    {
        const bool branch_taken_0x1f9364 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f9364) {
            ctx->pc = 0x1F9368u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F9364u;
            // 0x1f9368: 0xaea00154  sw          $zero, 0x154($s5) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 21), 340), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F998Cu;
            goto label_1f998c;
        }
    }
    ctx->pc = 0x1F936Cu;
    // 0x1f936c: 0x10000188  b           . + 4 + (0x188 << 2)
    ctx->pc = 0x1F936Cu;
    {
        const bool branch_taken_0x1f936c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F936Cu;
        // 0x1f9370: 0x2361823  subu        $v1, $s1, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f936c) {
            ctx->pc = 0x1F9990u;
            goto label_1f9990;
        }
    }
    ctx->pc = 0x1F9374u;
    // 0x1f9374: 0x0  nop
    ctx->pc = 0x1f9374u;
    // NOP
label_1f9378:
    // 0x1f9378: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f9378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f937c: 0x2a630016  slti        $v1, $s3, 0x16
    ctx->pc = 0x1f937cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)22) ? 1 : 0);
    // 0x1f9380: 0x1460001d  bnez        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x1F9380u;
    {
        const bool branch_taken_0x1f9380 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F9384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9380u;
        // 0x1f9384: 0xae820314  sw          $v0, 0x314($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 788), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9380) {
            ctx->pc = 0x1F93F8u;
            goto label_1f93f8;
        }
    }
    ctx->pc = 0x1F9388u;
    // 0x1f9388: 0x2673ffea  addiu       $s3, $s3, -0x16
    ctx->pc = 0x1f9388u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967274));
    // 0x1f938c: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F938Cu;
    {
        const bool branch_taken_0x1f938c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F938Cu;
        // 0x1f9390: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f938c) {
            ctx->pc = 0x1F93B0u;
            goto label_1f93b0;
        }
    }
    ctx->pc = 0x1F9394u;
    // 0x1f9394: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x1f9394u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1f9398: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x1f9398u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x1f939c: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x1f939cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1f93a0: 0x121d82  srl         $v1, $s2, 22
    ctx->pc = 0x1f93a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 22));
    // 0x1f93a4: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x1f93a4u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x1f93a8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F93A8u;
    {
        const bool branch_taken_0x1f93a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F93ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F93A8u;
        // 0x1f93ac: 0xae830184  sw          $v1, 0x184($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 388), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f93a8) {
            ctx->pc = 0x1F93BCu;
            goto label_1f93bc;
        }
    }
    ctx->pc = 0x1F93B0u;
label_1f93b0:
    // 0x1f93b0: 0x121582  srl         $v0, $s2, 22
    ctx->pc = 0x1f93b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 22));
    // 0x1f93b4: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1f93b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f93b8: 0xae820184  sw          $v0, 0x184($s4)
    ctx->pc = 0x1f93b8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 388), GPR_U32(ctx, 2));
label_1f93bc:
    // 0x1f93bc: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x1f93bcu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f93c0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f93c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f93c4: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1f93c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f93c8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f93c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f93cc: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f93ccu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f93d0: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1f93d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f93d4: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1f93d4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1f93d8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f93d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f93dc: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f93dcu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f93e0: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1f93e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f93e4: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x1f93e4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1f93e8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f93e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f93ec: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f93ecu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f93f0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1F93F0u;
    {
        const bool branch_taken_0x1f93f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F93F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F93F0u;
        // 0x1f93f4: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f93f0) {
            ctx->pc = 0x1F9408u;
            goto label_1f9408;
        }
    }
    ctx->pc = 0x1F93F8u;
label_1f93f8:
    // 0x1f93f8: 0x121582  srl         $v0, $s2, 22
    ctx->pc = 0x1f93f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 22));
    // 0x1f93fc: 0x129280  sll         $s2, $s2, 10
    ctx->pc = 0x1f93fcu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 10));
    // 0x1f9400: 0xae820184  sw          $v0, 0x184($s4)
    ctx->pc = 0x1f9400u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 388), GPR_U32(ctx, 2));
    // 0x1f9404: 0x2673000a  addiu       $s3, $s3, 0xA
    ctx->pc = 0x1f9404u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 10));
label_1f9408:
    // 0x1f9408: 0x2a62001f  slti        $v0, $s3, 0x1F
    ctx->pc = 0x1f9408u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x1f940c: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1F940Cu;
    {
        const bool branch_taken_0x1f940c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F9410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F940Cu;
        // 0x1f9410: 0x1217c2  srl         $v0, $s2, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f940c) {
            ctx->pc = 0x1F9488u;
            goto label_1f9488;
        }
    }
    ctx->pc = 0x1F9414u;
    // 0x1f9414: 0x2673ffe1  addiu       $s3, $s3, -0x1F
    ctx->pc = 0x1f9414u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967265));
    // 0x1f9418: 0x12600009  beqz        $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F9418u;
    {
        const bool branch_taken_0x1f9418 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F941Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9418u;
        // 0x1f941c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9418) {
            ctx->pc = 0x1F9440u;
            goto label_1f9440;
        }
    }
    ctx->pc = 0x1F9420u;
    // 0x1f9420: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x1f9420u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1f9424: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x1f9424u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x1f9428: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x1f9428u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1f942c: 0x121fc2  srl         $v1, $s2, 31
    ctx->pc = 0x1f942cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x1f9430: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x1f9430u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x1f9434: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1F9434u;
    {
        const bool branch_taken_0x1f9434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9434u;
        // 0x1f9438: 0xae830018  sw          $v1, 0x18($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9434) {
            ctx->pc = 0x1F944Cu;
            goto label_1f944c;
        }
    }
    ctx->pc = 0x1F943Cu;
    // 0x1f943c: 0x0  nop
    ctx->pc = 0x1f943cu;
    // NOP
label_1f9440:
    // 0x1f9440: 0x1217c2  srl         $v0, $s2, 31
    ctx->pc = 0x1f9440u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x1f9444: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1f9444u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9448: 0xae820018  sw          $v0, 0x18($s4)
    ctx->pc = 0x1f9448u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 2));
label_1f944c:
    // 0x1f944c: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x1f944cu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f9450: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f9450u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f9454: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1f9454u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f9458: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f9458u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f945c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f945cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f9460: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1f9460u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f9464: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1f9464u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1f9468: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f9468u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f946c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f946cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f9470: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1f9470u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f9474: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x1f9474u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1f9478: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f9478u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f947c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f947cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f9480: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F9480u;
    {
        const bool branch_taken_0x1f9480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9480u;
        // 0x1f9484: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9480) {
            ctx->pc = 0x1F9494u;
            goto label_1f9494;
        }
    }
    ctx->pc = 0x1F9488u;
label_1f9488:
    // 0x1f9488: 0x129040  sll         $s2, $s2, 1
    ctx->pc = 0x1f9488u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x1f948c: 0xae820018  sw          $v0, 0x18($s4)
    ctx->pc = 0x1f948cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 2));
    // 0x1f9490: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1f9490u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1f9494:
    // 0x1f9494: 0x2a620011  slti        $v0, $s3, 0x11
    ctx->pc = 0x1f9494u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x1f9498: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1F9498u;
    {
        const bool branch_taken_0x1f9498 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F949Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9498u;
        // 0x1f949c: 0x121442  srl         $v0, $s2, 17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9498) {
            ctx->pc = 0x1F9510u;
            goto label_1f9510;
        }
    }
    ctx->pc = 0x1F94A0u;
    // 0x1f94a0: 0x2673ffef  addiu       $s3, $s3, -0x11
    ctx->pc = 0x1f94a0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967279));
    // 0x1f94a4: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F94A4u;
    {
        const bool branch_taken_0x1f94a4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F94A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F94A4u;
        // 0x1f94a8: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f94a4) {
            ctx->pc = 0x1F94C8u;
            goto label_1f94c8;
        }
    }
    ctx->pc = 0x1F94ACu;
    // 0x1f94ac: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x1f94acu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1f94b0: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x1f94b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x1f94b4: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x1f94b4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1f94b8: 0x121c42  srl         $v1, $s2, 17
    ctx->pc = 0x1f94b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 17));
    // 0x1f94bc: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x1f94bcu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x1f94c0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F94C0u;
    {
        const bool branch_taken_0x1f94c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F94C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F94C0u;
        // 0x1f94c4: 0xae830188  sw          $v1, 0x188($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 392), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f94c0) {
            ctx->pc = 0x1F94D4u;
            goto label_1f94d4;
        }
    }
    ctx->pc = 0x1F94C8u;
label_1f94c8:
    // 0x1f94c8: 0x121442  srl         $v0, $s2, 17
    ctx->pc = 0x1f94c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 17));
    // 0x1f94cc: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1f94ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f94d0: 0xae820188  sw          $v0, 0x188($s4)
    ctx->pc = 0x1f94d0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 392), GPR_U32(ctx, 2));
label_1f94d4:
    // 0x1f94d4: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x1f94d4u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f94d8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f94d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f94dc: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1f94dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f94e0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f94e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f94e4: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f94e4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f94e8: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1f94e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f94ec: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1f94ecu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1f94f0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f94f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f94f4: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f94f4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f94f8: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1f94f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f94fc: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x1f94fcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1f9500: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f9500u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f9504: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f9504u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f9508: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F9508u;
    {
        const bool branch_taken_0x1f9508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F950Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9508u;
        // 0x1f950c: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9508) {
            ctx->pc = 0x1F951Cu;
            goto label_1f951c;
        }
    }
    ctx->pc = 0x1F9510u;
label_1f9510:
    // 0x1f9510: 0x1293c0  sll         $s2, $s2, 15
    ctx->pc = 0x1f9510u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 15));
    // 0x1f9514: 0xae820188  sw          $v0, 0x188($s4)
    ctx->pc = 0x1f9514u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 392), GPR_U32(ctx, 2));
    // 0x1f9518: 0x2673000f  addiu       $s3, $s3, 0xF
    ctx->pc = 0x1f9518u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 15));
label_1f951c:
    // 0x1f951c: 0x2a62001f  slti        $v0, $s3, 0x1F
    ctx->pc = 0x1f951cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x1f9520: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1F9520u;
    {
        const bool branch_taken_0x1f9520 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F9524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9520u;
        // 0x1f9524: 0x1217c2  srl         $v0, $s2, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9520) {
            ctx->pc = 0x1F9598u;
            goto label_1f9598;
        }
    }
    ctx->pc = 0x1F9528u;
    // 0x1f9528: 0x2673ffe1  addiu       $s3, $s3, -0x1F
    ctx->pc = 0x1f9528u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967265));
    // 0x1f952c: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F952Cu;
    {
        const bool branch_taken_0x1f952c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F952Cu;
        // 0x1f9530: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f952c) {
            ctx->pc = 0x1F9550u;
            goto label_1f9550;
        }
    }
    ctx->pc = 0x1F9534u;
    // 0x1f9534: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x1f9534u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1f9538: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x1f9538u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x1f953c: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x1f953cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1f9540: 0x121fc2  srl         $v1, $s2, 31
    ctx->pc = 0x1f9540u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x1f9544: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x1f9544u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x1f9548: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F9548u;
    {
        const bool branch_taken_0x1f9548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F954Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9548u;
        // 0x1f954c: 0xae830018  sw          $v1, 0x18($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9548) {
            ctx->pc = 0x1F955Cu;
            goto label_1f955c;
        }
    }
    ctx->pc = 0x1F9550u;
label_1f9550:
    // 0x1f9550: 0x1217c2  srl         $v0, $s2, 31
    ctx->pc = 0x1f9550u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x1f9554: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1f9554u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9558: 0xae820018  sw          $v0, 0x18($s4)
    ctx->pc = 0x1f9558u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 2));
label_1f955c:
    // 0x1f955c: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x1f955cu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f9560: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f9560u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f9564: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1f9564u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f9568: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f9568u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f956c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f956cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f9570: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1f9570u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f9574: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1f9574u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1f9578: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f9578u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f957c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f957cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f9580: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1f9580u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f9584: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x1f9584u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1f9588: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f9588u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f958c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f958cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f9590: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F9590u;
    {
        const bool branch_taken_0x1f9590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9590u;
        // 0x1f9594: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9590) {
            ctx->pc = 0x1F95A4u;
            goto label_1f95a4;
        }
    }
    ctx->pc = 0x1F9598u;
label_1f9598:
    // 0x1f9598: 0x129040  sll         $s2, $s2, 1
    ctx->pc = 0x1f9598u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x1f959c: 0xae820018  sw          $v0, 0x18($s4)
    ctx->pc = 0x1f959cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 2));
    // 0x1f95a0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1f95a0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1f95a4:
    // 0x1f95a4: 0x2a620011  slti        $v0, $s3, 0x11
    ctx->pc = 0x1f95a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x1f95a8: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1F95A8u;
    {
        const bool branch_taken_0x1f95a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F95ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F95A8u;
        // 0x1f95ac: 0x121442  srl         $v0, $s2, 17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f95a8) {
            ctx->pc = 0x1F9620u;
            goto label_1f9620;
        }
    }
    ctx->pc = 0x1F95B0u;
    // 0x1f95b0: 0x2673ffef  addiu       $s3, $s3, -0x11
    ctx->pc = 0x1f95b0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967279));
    // 0x1f95b4: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F95B4u;
    {
        const bool branch_taken_0x1f95b4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F95B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F95B4u;
        // 0x1f95b8: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f95b4) {
            ctx->pc = 0x1F95D8u;
            goto label_1f95d8;
        }
    }
    ctx->pc = 0x1F95BCu;
    // 0x1f95bc: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x1f95bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1f95c0: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x1f95c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x1f95c4: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x1f95c4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1f95c8: 0x121c42  srl         $v1, $s2, 17
    ctx->pc = 0x1f95c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 17));
    // 0x1f95cc: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x1f95ccu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x1f95d0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F95D0u;
    {
        const bool branch_taken_0x1f95d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F95D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F95D0u;
        // 0x1f95d4: 0xae83018c  sw          $v1, 0x18C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 396), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f95d0) {
            ctx->pc = 0x1F95E4u;
            goto label_1f95e4;
        }
    }
    ctx->pc = 0x1F95D8u;
label_1f95d8:
    // 0x1f95d8: 0x121442  srl         $v0, $s2, 17
    ctx->pc = 0x1f95d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 17));
    // 0x1f95dc: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1f95dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f95e0: 0xae82018c  sw          $v0, 0x18C($s4)
    ctx->pc = 0x1f95e0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 396), GPR_U32(ctx, 2));
label_1f95e4:
    // 0x1f95e4: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x1f95e4u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f95e8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f95e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f95ec: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1f95ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f95f0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f95f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f95f4: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f95f4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f95f8: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1f95f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f95fc: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1f95fcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1f9600: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f9600u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f9604: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f9604u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f9608: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1f9608u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f960c: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x1f960cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1f9610: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f9610u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f9614: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f9614u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f9618: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F9618u;
    {
        const bool branch_taken_0x1f9618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F961Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9618u;
        // 0x1f961c: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9618) {
            ctx->pc = 0x1F962Cu;
            goto label_1f962c;
        }
    }
    ctx->pc = 0x1F9620u;
label_1f9620:
    // 0x1f9620: 0x1293c0  sll         $s2, $s2, 15
    ctx->pc = 0x1f9620u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 15));
    // 0x1f9624: 0xae82018c  sw          $v0, 0x18C($s4)
    ctx->pc = 0x1f9624u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 396), GPR_U32(ctx, 2));
    // 0x1f9628: 0x2673000f  addiu       $s3, $s3, 0xF
    ctx->pc = 0x1f9628u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 15));
label_1f962c:
    // 0x1f962c: 0x2a62001e  slti        $v0, $s3, 0x1E
    ctx->pc = 0x1f962cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)30) ? 1 : 0);
    // 0x1f9630: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1F9630u;
    {
        const bool branch_taken_0x1f9630 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F9634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9630u;
        // 0x1f9634: 0x121782  srl         $v0, $s2, 30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9630) {
            ctx->pc = 0x1F96A8u;
            goto label_1f96a8;
        }
    }
    ctx->pc = 0x1F9638u;
    // 0x1f9638: 0x2673ffe2  addiu       $s3, $s3, -0x1E
    ctx->pc = 0x1f9638u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967266));
    // 0x1f963c: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F963Cu;
    {
        const bool branch_taken_0x1f963c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F963Cu;
        // 0x1f9640: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f963c) {
            ctx->pc = 0x1F9660u;
            goto label_1f9660;
        }
    }
    ctx->pc = 0x1F9644u;
    // 0x1f9644: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x1f9644u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1f9648: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x1f9648u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x1f964c: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x1f964cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1f9650: 0x121f82  srl         $v1, $s2, 30
    ctx->pc = 0x1f9650u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 30));
    // 0x1f9654: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x1f9654u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x1f9658: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F9658u;
    {
        const bool branch_taken_0x1f9658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F965Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9658u;
        // 0x1f965c: 0xae830190  sw          $v1, 0x190($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 400), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9658) {
            ctx->pc = 0x1F966Cu;
            goto label_1f966c;
        }
    }
    ctx->pc = 0x1F9660u;
label_1f9660:
    // 0x1f9660: 0x121782  srl         $v0, $s2, 30
    ctx->pc = 0x1f9660u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 30));
    // 0x1f9664: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1f9664u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9668: 0xae820190  sw          $v0, 0x190($s4)
    ctx->pc = 0x1f9668u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 400), GPR_U32(ctx, 2));
label_1f966c:
    // 0x1f966c: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x1f966cu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f9670: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f9670u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f9674: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1f9674u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f9678: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f9678u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f967c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f967cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f9680: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1f9680u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f9684: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1f9684u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1f9688: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f9688u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f968c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f968cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f9690: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1f9690u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f9694: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x1f9694u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1f9698: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f9698u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f969c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f969cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f96a0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F96A0u;
    {
        const bool branch_taken_0x1f96a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F96A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F96A0u;
        // 0x1f96a4: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f96a0) {
            ctx->pc = 0x1F96B4u;
            goto label_1f96b4;
        }
    }
    ctx->pc = 0x1F96A8u;
label_1f96a8:
    // 0x1f96a8: 0x129080  sll         $s2, $s2, 2
    ctx->pc = 0x1f96a8u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1f96ac: 0xae820190  sw          $v0, 0x190($s4)
    ctx->pc = 0x1f96acu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 400), GPR_U32(ctx, 2));
    // 0x1f96b0: 0x26730002  addiu       $s3, $s3, 0x2
    ctx->pc = 0x1f96b0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
label_1f96b4:
    // 0x1f96b4: 0x2a62001f  slti        $v0, $s3, 0x1F
    ctx->pc = 0x1f96b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x1f96b8: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1F96B8u;
    {
        const bool branch_taken_0x1f96b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F96BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F96B8u;
        // 0x1f96bc: 0x1217c2  srl         $v0, $s2, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f96b8) {
            ctx->pc = 0x1F9730u;
            goto label_1f9730;
        }
    }
    ctx->pc = 0x1F96C0u;
    // 0x1f96c0: 0x2673ffe1  addiu       $s3, $s3, -0x1F
    ctx->pc = 0x1f96c0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967265));
    // 0x1f96c4: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F96C4u;
    {
        const bool branch_taken_0x1f96c4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F96C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F96C4u;
        // 0x1f96c8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f96c4) {
            ctx->pc = 0x1F96E8u;
            goto label_1f96e8;
        }
    }
    ctx->pc = 0x1F96CCu;
    // 0x1f96cc: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x1f96ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1f96d0: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x1f96d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x1f96d4: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x1f96d4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1f96d8: 0x121fc2  srl         $v1, $s2, 31
    ctx->pc = 0x1f96d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x1f96dc: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x1f96dcu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x1f96e0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F96E0u;
    {
        const bool branch_taken_0x1f96e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F96E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F96E0u;
        // 0x1f96e4: 0xae830194  sw          $v1, 0x194($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 404), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f96e0) {
            ctx->pc = 0x1F96F4u;
            goto label_1f96f4;
        }
    }
    ctx->pc = 0x1F96E8u;
label_1f96e8:
    // 0x1f96e8: 0x1217c2  srl         $v0, $s2, 31
    ctx->pc = 0x1f96e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x1f96ec: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1f96ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f96f0: 0xae820194  sw          $v0, 0x194($s4)
    ctx->pc = 0x1f96f0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 404), GPR_U32(ctx, 2));
label_1f96f4:
    // 0x1f96f4: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x1f96f4u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f96f8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f96f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f96fc: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1f96fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f9700: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f9700u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f9704: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f9704u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f9708: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1f9708u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f970c: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1f970cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1f9710: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f9710u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f9714: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f9714u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f9718: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1f9718u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f971c: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x1f971cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1f9720: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f9720u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f9724: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f9724u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f9728: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F9728u;
    {
        const bool branch_taken_0x1f9728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F972Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9728u;
        // 0x1f972c: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9728) {
            ctx->pc = 0x1F973Cu;
            goto label_1f973c;
        }
    }
    ctx->pc = 0x1F9730u;
label_1f9730:
    // 0x1f9730: 0x129040  sll         $s2, $s2, 1
    ctx->pc = 0x1f9730u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x1f9734: 0xae820194  sw          $v0, 0x194($s4)
    ctx->pc = 0x1f9734u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 404), GPR_U32(ctx, 2));
    // 0x1f9738: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1f9738u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1f973c:
    // 0x1f973c: 0x2a62001f  slti        $v0, $s3, 0x1F
    ctx->pc = 0x1f973cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x1f9740: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1F9740u;
    {
        const bool branch_taken_0x1f9740 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F9744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9740u;
        // 0x1f9744: 0x1217c2  srl         $v0, $s2, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9740) {
            ctx->pc = 0x1F9780u;
            goto label_1f9780;
        }
    }
    ctx->pc = 0x1F9748u;
    // 0x1f9748: 0x2673ffe1  addiu       $s3, $s3, -0x1F
    ctx->pc = 0x1f9748u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967265));
    // 0x1f974c: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F974Cu;
    {
        const bool branch_taken_0x1f974c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F974Cu;
        // 0x1f9750: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f974c) {
            ctx->pc = 0x1F9770u;
            goto label_1f9770;
        }
    }
    ctx->pc = 0x1F9754u;
    // 0x1f9754: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x1f9754u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1f9758: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x1f9758u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x1f975c: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x1f975cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1f9760: 0x121fc2  srl         $v1, $s2, 31
    ctx->pc = 0x1f9760u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x1f9764: 0x10000080  b           . + 4 + (0x80 << 2)
    ctx->pc = 0x1F9764u;
    {
        const bool branch_taken_0x1f9764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9764u;
        // 0x1f9768: 0xae830198  sw          $v1, 0x198($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 408), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9764) {
            ctx->pc = 0x1F9968u;
            goto label_1f9968;
        }
    }
    ctx->pc = 0x1F976Cu;
    // 0x1f976c: 0x0  nop
    ctx->pc = 0x1f976cu;
    // NOP
label_1f9770:
    // 0x1f9770: 0x1217c2  srl         $v0, $s2, 31
    ctx->pc = 0x1f9770u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x1f9774: 0x1000007c  b           . + 4 + (0x7C << 2)
    ctx->pc = 0x1F9774u;
    {
        const bool branch_taken_0x1f9774 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9774u;
        // 0x1f9778: 0xae820198  sw          $v0, 0x198($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 408), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9774) {
            ctx->pc = 0x1F9968u;
            goto label_1f9968;
        }
    }
    ctx->pc = 0x1F977Cu;
    // 0x1f977c: 0x0  nop
    ctx->pc = 0x1f977cu;
    // NOP
label_1f9780:
    // 0x1f9780: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1f9780u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1f9784: 0x10000081  b           . + 4 + (0x81 << 2)
    ctx->pc = 0x1F9784u;
    {
        const bool branch_taken_0x1f9784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9784u;
        // 0x1f9788: 0xae820198  sw          $v0, 0x198($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 408), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9784) {
            ctx->pc = 0x1F998Cu;
            goto label_1f998c;
        }
    }
    ctx->pc = 0x1F978Cu;
    // 0x1f978c: 0x0  nop
    ctx->pc = 0x1f978cu;
    // NOP
label_1f9790:
    // 0x1f9790: 0x2a62001e  slti        $v0, $s3, 0x1E
    ctx->pc = 0x1f9790u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)30) ? 1 : 0);
    // 0x1f9794: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1F9794u;
    {
        const bool branch_taken_0x1f9794 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F9798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9794u;
        // 0x1f9798: 0x121782  srl         $v0, $s2, 30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9794) {
            ctx->pc = 0x1F9810u;
            goto label_1f9810;
        }
    }
    ctx->pc = 0x1F979Cu;
    // 0x1f979c: 0x2673ffe2  addiu       $s3, $s3, -0x1E
    ctx->pc = 0x1f979cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967266));
    // 0x1f97a0: 0x12600009  beqz        $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F97A0u;
    {
        const bool branch_taken_0x1f97a0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F97A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F97A0u;
        // 0x1f97a4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f97a0) {
            ctx->pc = 0x1F97C8u;
            goto label_1f97c8;
        }
    }
    ctx->pc = 0x1F97A8u;
    // 0x1f97a8: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x1f97a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1f97ac: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x1f97acu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x1f97b0: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x1f97b0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1f97b4: 0x121f82  srl         $v1, $s2, 30
    ctx->pc = 0x1f97b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 30));
    // 0x1f97b8: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x1f97b8u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x1f97bc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1F97BCu;
    {
        const bool branch_taken_0x1f97bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F97C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F97BCu;
        // 0x1f97c0: 0xae830178  sw          $v1, 0x178($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 376), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f97bc) {
            ctx->pc = 0x1F97D4u;
            goto label_1f97d4;
        }
    }
    ctx->pc = 0x1F97C4u;
    // 0x1f97c4: 0x0  nop
    ctx->pc = 0x1f97c4u;
    // NOP
label_1f97c8:
    // 0x1f97c8: 0x121782  srl         $v0, $s2, 30
    ctx->pc = 0x1f97c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 30));
    // 0x1f97cc: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1f97ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f97d0: 0xae820178  sw          $v0, 0x178($s4)
    ctx->pc = 0x1f97d0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 376), GPR_U32(ctx, 2));
label_1f97d4:
    // 0x1f97d4: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x1f97d4u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f97d8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f97d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f97dc: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1f97dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f97e0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f97e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f97e4: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f97e4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f97e8: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1f97e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f97ec: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1f97ecu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1f97f0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f97f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f97f4: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f97f4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f97f8: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1f97f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f97fc: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x1f97fcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1f9800: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f9800u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f9804: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f9804u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f9808: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F9808u;
    {
        const bool branch_taken_0x1f9808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F980Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9808u;
        // 0x1f980c: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9808) {
            ctx->pc = 0x1F981Cu;
            goto label_1f981c;
        }
    }
    ctx->pc = 0x1F9810u;
label_1f9810:
    // 0x1f9810: 0x129080  sll         $s2, $s2, 2
    ctx->pc = 0x1f9810u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1f9814: 0xae820178  sw          $v0, 0x178($s4)
    ctx->pc = 0x1f9814u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 376), GPR_U32(ctx, 2));
    // 0x1f9818: 0x26730002  addiu       $s3, $s3, 0x2
    ctx->pc = 0x1f9818u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
label_1f981c:
    // 0x1f981c: 0x2a620016  slti        $v0, $s3, 0x16
    ctx->pc = 0x1f981cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)22) ? 1 : 0);
    // 0x1f9820: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1F9820u;
    {
        const bool branch_taken_0x1f9820 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F9824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9820u;
        // 0x1f9824: 0x121582  srl         $v0, $s2, 22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9820) {
            ctx->pc = 0x1F9898u;
            goto label_1f9898;
        }
    }
    ctx->pc = 0x1F9828u;
    // 0x1f9828: 0x2673ffea  addiu       $s3, $s3, -0x16
    ctx->pc = 0x1f9828u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967274));
    // 0x1f982c: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F982Cu;
    {
        const bool branch_taken_0x1f982c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F982Cu;
        // 0x1f9830: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f982c) {
            ctx->pc = 0x1F9850u;
            goto label_1f9850;
        }
    }
    ctx->pc = 0x1F9834u;
    // 0x1f9834: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x1f9834u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1f9838: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x1f9838u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x1f983c: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x1f983cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1f9840: 0x121d82  srl         $v1, $s2, 22
    ctx->pc = 0x1f9840u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 22));
    // 0x1f9844: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x1f9844u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x1f9848: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F9848u;
    {
        const bool branch_taken_0x1f9848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F984Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9848u;
        // 0x1f984c: 0xae83017c  sw          $v1, 0x17C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 380), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9848) {
            ctx->pc = 0x1F985Cu;
            goto label_1f985c;
        }
    }
    ctx->pc = 0x1F9850u;
label_1f9850:
    // 0x1f9850: 0x121582  srl         $v0, $s2, 22
    ctx->pc = 0x1f9850u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 22));
    // 0x1f9854: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1f9854u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9858: 0xae82017c  sw          $v0, 0x17C($s4)
    ctx->pc = 0x1f9858u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 380), GPR_U32(ctx, 2));
label_1f985c:
    // 0x1f985c: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x1f985cu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f9860: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f9860u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f9864: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1f9864u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f9868: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f9868u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f986c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f986cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f9870: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1f9870u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f9874: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1f9874u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1f9878: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f9878u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f987c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f987cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f9880: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1f9880u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f9884: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x1f9884u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1f9888: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f9888u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f988c: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f988cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f9890: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F9890u;
    {
        const bool branch_taken_0x1f9890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9890u;
        // 0x1f9894: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9890) {
            ctx->pc = 0x1F98A4u;
            goto label_1f98a4;
        }
    }
    ctx->pc = 0x1F9898u;
label_1f9898:
    // 0x1f9898: 0x129280  sll         $s2, $s2, 10
    ctx->pc = 0x1f9898u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 10));
    // 0x1f989c: 0xae82017c  sw          $v0, 0x17C($s4)
    ctx->pc = 0x1f989cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 380), GPR_U32(ctx, 2));
    // 0x1f98a0: 0x2673000a  addiu       $s3, $s3, 0xA
    ctx->pc = 0x1f98a0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 10));
label_1f98a4:
    // 0x1f98a4: 0x2a62001f  slti        $v0, $s3, 0x1F
    ctx->pc = 0x1f98a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x1f98a8: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1F98A8u;
    {
        const bool branch_taken_0x1f98a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F98ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F98A8u;
        // 0x1f98ac: 0x1217c2  srl         $v0, $s2, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f98a8) {
            ctx->pc = 0x1F9920u;
            goto label_1f9920;
        }
    }
    ctx->pc = 0x1F98B0u;
    // 0x1f98b0: 0x2673ffe1  addiu       $s3, $s3, -0x1F
    ctx->pc = 0x1f98b0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967265));
    // 0x1f98b4: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F98B4u;
    {
        const bool branch_taken_0x1f98b4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F98B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F98B4u;
        // 0x1f98b8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f98b4) {
            ctx->pc = 0x1F98D8u;
            goto label_1f98d8;
        }
    }
    ctx->pc = 0x1F98BCu;
    // 0x1f98bc: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x1f98bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1f98c0: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x1f98c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x1f98c4: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x1f98c4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1f98c8: 0x121fc2  srl         $v1, $s2, 31
    ctx->pc = 0x1f98c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x1f98cc: 0x2709004  sllv        $s2, $s0, $s3
    ctx->pc = 0x1f98ccu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x1f98d0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F98D0u;
    {
        const bool branch_taken_0x1f98d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F98D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F98D0u;
        // 0x1f98d4: 0xae830018  sw          $v1, 0x18($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f98d0) {
            ctx->pc = 0x1F98E4u;
            goto label_1f98e4;
        }
    }
    ctx->pc = 0x1F98D8u;
label_1f98d8:
    // 0x1f98d8: 0x1217c2  srl         $v0, $s2, 31
    ctx->pc = 0x1f98d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x1f98dc: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1f98dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f98e0: 0xae820018  sw          $v0, 0x18($s4)
    ctx->pc = 0x1f98e0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 2));
label_1f98e4:
    // 0x1f98e4: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x1f98e4u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f98e8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f98e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f98ec: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1f98ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f98f0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f98f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f98f4: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f98f4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f98f8: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1f98f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f98fc: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1f98fcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1f9900: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f9900u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f9904: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f9904u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f9908: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1f9908u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f990c: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x1f990cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1f9910: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f9910u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f9914: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x1f9914u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x1f9918: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F9918u;
    {
        const bool branch_taken_0x1f9918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F991Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9918u;
        // 0x1f991c: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9918) {
            ctx->pc = 0x1F992Cu;
            goto label_1f992c;
        }
    }
    ctx->pc = 0x1F9920u;
label_1f9920:
    // 0x1f9920: 0x129040  sll         $s2, $s2, 1
    ctx->pc = 0x1f9920u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x1f9924: 0xae820018  sw          $v0, 0x18($s4)
    ctx->pc = 0x1f9924u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 2));
    // 0x1f9928: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1f9928u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1f992c:
    // 0x1f992c: 0x2a620016  slti        $v0, $s3, 0x16
    ctx->pc = 0x1f992cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)22) ? 1 : 0);
    // 0x1f9930: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1F9930u;
    {
        const bool branch_taken_0x1f9930 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F9934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9930u;
        // 0x1f9934: 0x121582  srl         $v0, $s2, 22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9930) {
            ctx->pc = 0x1F9970u;
            goto label_1f9970;
        }
    }
    ctx->pc = 0x1F9938u;
    // 0x1f9938: 0x2673ffea  addiu       $s3, $s3, -0x16
    ctx->pc = 0x1f9938u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967274));
    // 0x1f993c: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F993Cu;
    {
        const bool branch_taken_0x1f993c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F993Cu;
        // 0x1f9940: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f993c) {
            ctx->pc = 0x1F9960u;
            goto label_1f9960;
        }
    }
    ctx->pc = 0x1F9944u;
    // 0x1f9944: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x1f9944u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1f9948: 0x501006  srlv        $v0, $s0, $v0
    ctx->pc = 0x1f9948u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x1f994c: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x1f994cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1f9950: 0x121d82  srl         $v1, $s2, 22
    ctx->pc = 0x1f9950u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 22));
    // 0x1f9954: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F9954u;
    {
        const bool branch_taken_0x1f9954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9954u;
        // 0x1f9958: 0xae830180  sw          $v1, 0x180($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 384), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9954) {
            ctx->pc = 0x1F9968u;
            goto label_1f9968;
        }
    }
    ctx->pc = 0x1F995Cu;
    // 0x1f995c: 0x0  nop
    ctx->pc = 0x1f995cu;
    // NOP
label_1f9960:
    // 0x1f9960: 0x121582  srl         $v0, $s2, 22
    ctx->pc = 0x1f9960u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 22));
    // 0x1f9964: 0xae820180  sw          $v0, 0x180($s4)
    ctx->pc = 0x1f9964u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 384), GPR_U32(ctx, 2));
label_1f9968:
    // 0x1f9968: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1F9968u;
    {
        const bool branch_taken_0x1f9968 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F996Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9968u;
        // 0x1f996c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9968) {
            ctx->pc = 0x1F998Cu;
            goto label_1f998c;
        }
    }
    ctx->pc = 0x1F9970u;
label_1f9970:
    // 0x1f9970: 0x2673000a  addiu       $s3, $s3, 0xA
    ctx->pc = 0x1f9970u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 10));
    // 0x1f9974: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1F9974u;
    {
        const bool branch_taken_0x1f9974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9974u;
        // 0x1f9978: 0xae820180  sw          $v0, 0x180($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 384), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9974) {
            ctx->pc = 0x1F998Cu;
            goto label_1f998c;
        }
    }
    ctx->pc = 0x1F997Cu;
    // 0x1f997c: 0x0  nop
    ctx->pc = 0x1f997cu;
    // NOP
label_1f9980:
    // 0x1f9980: 0x8e820494  lw          $v0, 0x494($s4)
    ctx->pc = 0x1f9980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1172)));
label_1f9984:
    // 0x1f9984: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f9984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f9988: 0xae820494  sw          $v0, 0x494($s4)
    ctx->pc = 0x1f9988u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1172), GPR_U32(ctx, 2));
label_1f998c:
    // 0x1f998c: 0x2361823  subu        $v1, $s1, $s6
    ctx->pc = 0x1f998cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 22)));
label_1f9990:
    // 0x1f9990: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f9990u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f9994: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1f9994u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1f9998: 0xae80030c  sw          $zero, 0x30C($s4)
    ctx->pc = 0x1f9998u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 780), GPR_U32(ctx, 0));
    // 0x1f999c: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x1f999cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x1f99a0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1f99a0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f99a4: 0x2462ffc7  addiu       $v0, $v1, -0x39
    ctx->pc = 0x1f99a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967239));
    // 0x1f99a8: 0x2463ffce  addiu       $v1, $v1, -0x32
    ctx->pc = 0x1f99a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967246));
    // 0x1f99ac: 0x28440000  slti        $a0, $v0, 0x0
    ctx->pc = 0x1f99acu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1f99b0: 0xae800308  sw          $zero, 0x308($s4)
    ctx->pc = 0x1f99b0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 776), GPR_U32(ctx, 0));
    // 0x1f99b4: 0x64100b  movn        $v0, $v1, $a0
    ctx->pc = 0x1f99b4u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x1f99b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f99b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f99bc: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x1f99bcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x1f99c0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1f99c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f99c4: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x1f99c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x1f99c8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1f99c8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f99cc: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1f99ccu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f99d0: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1f99d0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f99d4: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x1f99d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f99d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1F99D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F99DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F99D8u;
        // 0x1f99dc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F99D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F99E0u;
}
