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

// Function: sub_001B8B10
// Address: 0x1b8b10 - 0x1b8d20
void sub_001B8B10_0x1b8b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B8B10_0x1b8b10");
#endif

    switch (ctx->pc) {
        case 0x1b8c00u: goto label_1b8c00;
        case 0x1b8c08u: goto label_1b8c08;
        case 0x1b8c9cu: goto label_1b8c9c;
        case 0x1b8cd8u: goto label_1b8cd8;
        default: break;
    }

    ctx->pc = 0x1b8b10u;

    // 0x1b8b10: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1b8b10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1b8b14: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1b8b14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x1b8b18: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1b8b18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1b8b1c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1b8b1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1b8b20: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1b8b20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1b8b24: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1b8b24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1b8b28: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1b8b28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1b8b2c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b8b2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b8b30: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b8b30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b8b34: 0x94a30004  lhu         $v1, 0x4($a1)
    ctx->pc = 0x1b8b34u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1b8b38: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x1b8b38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x1b8b3c: 0x1460006e  bnez        $v1, . + 4 + (0x6E << 2)
    ctx->pc = 0x1B8B3Cu;
    {
        const bool branch_taken_0x1b8b3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B8B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8B3Cu;
        // 0x1b8b40: 0x80b02d  daddu       $s6, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8b3c) {
            ctx->pc = 0x1B8CF8u;
            goto label_1b8cf8;
        }
    }
    ctx->pc = 0x1B8B44u;
    // 0x1b8b44: 0x8ca20088  lw          $v0, 0x88($a1)
    ctx->pc = 0x1b8b44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 136)));
    // 0x1b8b48: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x1b8b48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1b8b4c: 0xaca30088  sw          $v1, 0x88($a1)
    ctx->pc = 0x1b8b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 136), GPR_U32(ctx, 3));
    // 0x1b8b50: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x1b8b50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1b8b54: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x1b8b54u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1b8b58: 0x1020000f  beqz        $at, . + 4 + (0xF << 2)
    ctx->pc = 0x1B8B58u;
    {
        const bool branch_taken_0x1b8b58 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b8b58) {
            ctx->pc = 0x1B8B98u;
            goto label_1b8b98;
        }
    }
    ctx->pc = 0x1B8B60u;
    // 0x1b8b60: 0xaca00088  sw          $zero, 0x88($a1)
    ctx->pc = 0x1b8b60u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 136), GPR_U32(ctx, 0));
    // 0x1b8b64: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1b8b64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1b8b68: 0x8c23f004  lw          $v1, -0xFFC($at)
    ctx->pc = 0x1b8b68u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81F004u));
    // 0x1b8b6c: 0x3c02873c  lui         $v0, 0x873C
    ctx->pc = 0x1b8b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34620 << 16));
    // 0x1b8b70: 0x3442a9e5  ori         $v0, $v0, 0xA9E5
    ctx->pc = 0x1b8b70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43493);
    // 0x1b8b74: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x1b8b74u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1b8b78: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1b8b78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1b8b7c: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x1b8b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x1b8b80: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1b8b80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1b8b84: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1b8b84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1b8b88: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x1b8b88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x1b8b8c: 0xac22f004  sw          $v0, -0xFFC($at)
    ctx->pc = 0x1b8b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963204), GPR_U32(ctx, 2));
    // 0x1b8b90: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x1b8b90u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x1b8b94: 0xaca2008c  sw          $v0, 0x8C($a1)
    ctx->pc = 0x1b8b94u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 140), GPR_U32(ctx, 2));
label_1b8b98:
    // 0x1b8b98: 0x8ca7008c  lw          $a3, 0x8C($a1)
    ctx->pc = 0x1b8b98u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 140)));
    // 0x1b8b9c: 0x3c0251eb  lui         $v0, 0x51EB
    ctx->pc = 0x1b8b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20971 << 16));
    // 0x1b8ba0: 0x3c03873c  lui         $v1, 0x873C
    ctx->pc = 0x1b8ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34620 << 16));
    // 0x1b8ba4: 0x3444851f  ori         $a0, $v0, 0x851F
    ctx->pc = 0x1b8ba4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34079);
    // 0x1b8ba8: 0x3463a9e5  ori         $v1, $v1, 0xA9E5
    ctx->pc = 0x1b8ba8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43493);
    // 0x1b8bac: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1b8bacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1b8bb0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1b8bb0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8bb4: 0x73040  sll         $a2, $a3, 1
    ctx->pc = 0x1b8bb4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x1b8bb8: 0x717c2  srl         $v0, $a3, 31
    ctx->pc = 0x1b8bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 31));
    // 0x1b8bbc: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x1b8bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1b8bc0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1b8bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1b8bc4: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1b8bc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x1b8bc8: 0xac22f004  sw          $v0, -0xFFC($at)
    ctx->pc = 0x1b8bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963204), GPR_U32(ctx, 2));
    // 0x1b8bcc: 0x8ca30024  lw          $v1, 0x24($a1)
    ctx->pc = 0x1b8bccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x1b8bd0: 0x8ca20028  lw          $v0, 0x28($a1)
    ctx->pc = 0x1b8bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x1b8bd4: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x1b8bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x1b8bd8: 0x830019  multu       $a0, $v1
    ctx->pc = 0x1b8bd8u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 4) * (uint64_t)GPR_U32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1b8bdc: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x1b8bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1b8be0: 0x0  nop
    ctx->pc = 0x1b8be0u;
    // NOP
    // 0x1b8be4: 0x1810  mfhi        $v1
    ctx->pc = 0x1b8be4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1b8be8: 0x820019  multu       $a0, $v0
    ctx->pc = 0x1b8be8u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 4) * (uint64_t)GPR_U32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1b8bec: 0x3a942  srl         $s5, $v1, 5
    ctx->pc = 0x1b8becu;
    SET_GPR_S32(ctx, 21, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
    // 0x1b8bf0: 0x0  nop
    ctx->pc = 0x1b8bf0u;
    // NOP
    // 0x1b8bf4: 0x1010  mfhi        $v0
    ctx->pc = 0x1b8bf4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1b8bf8: 0x2a142  srl         $s4, $v0, 5
    ctx->pc = 0x1b8bf8u;
    SET_GPR_S32(ctx, 20, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
    // 0x1b8bfc: 0x0  nop
    ctx->pc = 0x1b8bfcu;
    // NOP
label_1b8c00:
    // 0x1b8c00: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1b8c00u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8c04: 0x0  nop
    ctx->pc = 0x1b8c04u;
    // NOP
label_1b8c08:
    // 0x1b8c08: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1b8c08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1b8c0c: 0x8c26f004  lw          $a2, -0xFFC($at)
    ctx->pc = 0x1b8c0cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x81F004u));
    // 0x1b8c10: 0x3c02873c  lui         $v0, 0x873C
    ctx->pc = 0x1b8c10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34620 << 16));
    // 0x1b8c14: 0x3447a9e5  ori         $a3, $v0, 0xA9E5
    ctx->pc = 0x1b8c14u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43493);
    // 0x1b8c18: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b8c18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8c1c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1b8c1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b8c20: 0x61840  sll         $v1, $a2, 1
    ctx->pc = 0x1b8c20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x1b8c24: 0x617c2  srl         $v0, $a2, 31
    ctx->pc = 0x1b8c24u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x1b8c28: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1b8c28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b8c2c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1b8c2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1b8c30: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1b8c30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1b8c34: 0x471026  xor         $v0, $v0, $a3
    ctx->pc = 0x1b8c34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 7));
    // 0x1b8c38: 0xac22f004  sw          $v0, -0xFFC($at)
    ctx->pc = 0x1b8c38u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963204), GPR_U32(ctx, 2));
    // 0x1b8c3c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1b8c3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1b8c40: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x1b8c40u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x1b8c44: 0x8c28f004  lw          $t0, -0xFFC($at)
    ctx->pc = 0x1b8c44u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294963204)));
    // 0x1b8c48: 0x3051003f  andi        $s1, $v0, 0x3F
    ctx->pc = 0x1b8c48u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x1b8c4c: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x1b8c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x1b8c50: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x1b8c50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1b8c54: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1b8c54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b8c58: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1b8c58u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1b8c5c: 0x83040  sll         $a2, $t0, 1
    ctx->pc = 0x1b8c5cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x1b8c60: 0x817c2  srl         $v0, $t0, 31
    ctx->pc = 0x1b8c60u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), 31));
    // 0x1b8c64: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x1b8c64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1b8c68: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1b8c68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1b8c6c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1b8c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1b8c70: 0x471026  xor         $v0, $v0, $a3
    ctx->pc = 0x1b8c70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 7));
    // 0x1b8c74: 0xac22f004  sw          $v0, -0xFFC($at)
    ctx->pc = 0x1b8c74u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963204), GPR_U32(ctx, 2));
    // 0x1b8c78: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x1b8c78u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x1b8c7c: 0x3050001f  andi        $s0, $v0, 0x1F
    ctx->pc = 0x1b8c7cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x1b8c80: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x1b8c80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1b8c84: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x1b8c84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1b8c88: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b8c88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b8c8c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1b8c8cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1b8c90: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1b8c90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1b8c94: 0xc070808  jal         func_1C2020
    ctx->pc = 0x1B8C94u;
    SET_GPR_U32(ctx, 31, 0x1B8C9Cu);
    ctx->pc = 0x1B8C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8C94u;
    // 0x1b8c98: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2020u, 0x1B8C94u, 0x1B8C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8C9Cu;
label_1b8c9c:
    // 0x1b8c9c: 0x26020020  addiu       $v0, $s0, 0x20
    ctx->pc = 0x1b8c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x1b8ca0: 0x26230040  addiu       $v1, $s1, 0x40
    ctx->pc = 0x1b8ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x1b8ca4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1b8ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1b8ca8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1b8ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1b8cac: 0x24420009  addiu       $v0, $v0, 0x9
    ctx->pc = 0x1b8cacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9));
    // 0x1b8cb0: 0x24630009  addiu       $v1, $v1, 0x9
    ctx->pc = 0x1b8cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9));
    // 0x1b8cb4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b8cb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b8cb8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b8cb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b8cbc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1b8cbcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1b8cc0: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1b8cc0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1b8cc4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1b8cc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1b8cc8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b8cc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8ccc: 0x623025  or          $a2, $v1, $v0
    ctx->pc = 0x1b8cccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1b8cd0: 0xc070808  jal         func_1C2020
    ctx->pc = 0x1B8CD0u;
    SET_GPR_U32(ctx, 31, 0x1B8CD8u);
    ctx->pc = 0x1B8CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8CD0u;
    // 0x1b8cd4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2020u, 0x1B8CD0u, 0x1B8CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8CD8u;
label_1b8cd8:
    // 0x1b8cd8: 0x2549021  addu        $s2, $s2, $s4
    ctx->pc = 0x1b8cd8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
    // 0x1b8cdc: 0x2e4300e0  sltiu       $v1, $s2, 0xE0
    ctx->pc = 0x1b8cdcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)224) ? 1 : 0);
    // 0x1b8ce0: 0x1460ffc9  bnez        $v1, . + 4 + (-0x37 << 2)
    ctx->pc = 0x1B8CE0u;
    {
        const bool branch_taken_0x1b8ce0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b8ce0) {
            ctx->pc = 0x1B8C08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b8c08;
        }
    }
    ctx->pc = 0x1B8CE8u;
    // 0x1b8ce8: 0x2759821  addu        $s3, $s3, $s5
    ctx->pc = 0x1b8ce8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 21)));
    // 0x1b8cec: 0x2e630200  sltiu       $v1, $s3, 0x200
    ctx->pc = 0x1b8cecu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)512) ? 1 : 0);
    // 0x1b8cf0: 0x1460ffc3  bnez        $v1, . + 4 + (-0x3D << 2)
    ctx->pc = 0x1B8CF0u;
    {
        const bool branch_taken_0x1b8cf0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b8cf0) {
            ctx->pc = 0x1B8C00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b8c00;
        }
    }
    ctx->pc = 0x1B8CF8u;
label_1b8cf8:
    // 0x1b8cf8: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1b8cf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b8cfc: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1b8cfcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1b8d00: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1b8d00u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b8d04: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1b8d04u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b8d08: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1b8d08u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b8d0c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1b8d0cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b8d10: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b8d10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b8d14: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b8d14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b8d18: 0x3e00008  jr          $ra
    ctx->pc = 0x1B8D18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B8D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8D18u;
        // 0x1b8d1c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B8D18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B8D20u;
}
