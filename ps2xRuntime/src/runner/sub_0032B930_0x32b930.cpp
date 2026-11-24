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

// Function: sub_0032B930
// Address: 0x32b930 - 0x32baac
void sub_0032B930_0x32b930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032B930_0x32b930");
#endif

    switch (ctx->pc) {
        case 0x32b950u: goto label_32b950;
        default: break;
    }

    ctx->pc = 0x32b930u;

    // 0x32b930: 0x5163c  dsll32      $v0, $a1, 24
    ctx->pc = 0x32b930u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 24));
    // 0x32b934: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x32b934u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x32b938: 0x4410013  bgez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x32B938u;
    {
        const bool branch_taken_0x32b938 = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x32b938) {
            ctx->pc = 0x32B988u;
            goto label_32b988;
        }
    }
    ctx->pc = 0x32B940u;
    // 0x32b940: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x32b940u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32b944: 0x80582d  daddu       $t3, $a0, $zero
    ctx->pc = 0x32b944u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32b948: 0x240300fe  addiu       $v1, $zero, 0xFE
    ctx->pc = 0x32b948u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
    // 0x32b94c: 0x0  nop
    ctx->pc = 0x32b94cu;
    // NOP
label_32b950:
    // 0x32b950: 0x9162001a  lbu         $v0, 0x1A($t3)
    ctx->pc = 0x32b950u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 26)));
    // 0x32b954: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x32B954u;
    {
        const bool branch_taken_0x32b954 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x32B958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B954u;
        // 0x32b958: 0x24a20001  addiu       $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b954) {
            ctx->pc = 0x32B970u;
            goto label_32b970;
        }
    }
    ctx->pc = 0x32B95Cu;
    // 0x32b95c: 0x22e3c  dsll32      $a1, $v0, 24
    ctx->pc = 0x32b95cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 24));
    // 0x32b960: 0x52e3f  dsra32      $a1, $a1, 24
    ctx->pc = 0x32b960u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
    // 0x32b964: 0x28a20014  slti        $v0, $a1, 0x14
    ctx->pc = 0x32b964u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x32b968: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x32B968u;
    {
        const bool branch_taken_0x32b968 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32B96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B968u;
        // 0x32b96c: 0x256b0010  addiu       $t3, $t3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b968) {
            ctx->pc = 0x32B950u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32b950;
        }
    }
    ctx->pc = 0x32B970u;
label_32b970:
    // 0x32b970: 0x51e3c  dsll32      $v1, $a1, 24
    ctx->pc = 0x32b970u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 24));
    // 0x32b974: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x32b974u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x32b978: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x32b978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x32b97c: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x32B97Cu;
    {
        const bool branch_taken_0x32b97c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x32b97c) {
            ctx->pc = 0x32B988u;
            goto label_32b988;
        }
    }
    ctx->pc = 0x32B984u;
    // 0x32b984: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x32b984u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32b988:
    // 0x32b988: 0x5163c  dsll32      $v0, $a1, 24
    ctx->pc = 0x32b988u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 24));
    // 0x32b98c: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x32b98cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x32b990: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x32b990u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x32b994: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x32b994u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x32b998: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x32b998u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32b99c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x32b99cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x32b9a0: 0xa046001a  sb          $a2, 0x1A($v0)
    ctx->pc = 0x32b9a0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 26), (uint8_t)GPR_U32(ctx, 6));
    // 0x32b9a4: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x32b9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x32b9a8: 0xa448001c  sh          $t0, 0x1C($v0)
    ctx->pc = 0x32b9a8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 28), (uint16_t)GPR_U32(ctx, 8));
    // 0x32b9ac: 0xa0490018  sb          $t1, 0x18($v0)
    ctx->pc = 0x32b9acu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 24), (uint8_t)GPR_U32(ctx, 9));
    // 0x32b9b0: 0xa04a0019  sb          $t2, 0x19($v0)
    ctx->pc = 0x32b9b0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 25), (uint8_t)GPR_U32(ctx, 10));
    // 0x32b9b4: 0x9022fc8d  lbu         $v0, -0x373($at)
    ctx->pc = 0x32b9b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294966413)));
    // 0x32b9b8: 0x144b000f  bne         $v0, $t3, . + 4 + (0xF << 2)
    ctx->pc = 0x32B9B8u;
    {
        const bool branch_taken_0x32b9b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 11));
        ctx->pc = 0x32B9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B9B8u;
        // 0x32b9bc: 0x30e200ff  andi        $v0, $a3, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b9b8) {
            ctx->pc = 0x32B9F8u;
            goto label_32b9f8;
        }
    }
    ctx->pc = 0x32B9C0u;
    // 0x32b9c0: 0x3c06004f  lui         $a2, 0x4F
    ctx->pc = 0x32b9c0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)79 << 16));
    // 0x32b9c4: 0x24080  sll         $t0, $v0, 2
    ctx->pc = 0x32b9c4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x32b9c8: 0x24c69830  addiu       $a2, $a2, -0x67D0
    ctx->pc = 0x32b9c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294940720));
    // 0x32b9cc: 0xc83021  addu        $a2, $a2, $t0
    ctx->pc = 0x32b9ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x32b9d0: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x32b9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x32b9d4: 0x84c60000  lh          $a2, 0x0($a2)
    ctx->pc = 0x32b9d4u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x32b9d8: 0x24429832  addiu       $v0, $v0, -0x67CE
    ctx->pc = 0x32b9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940722));
    // 0x32b9dc: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x32b9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x32b9e0: 0xa4660000  sh          $a2, 0x0($v1)
    ctx->pc = 0x32b9e0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x32b9e4: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x32b9e4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x32b9e8: 0xa4620002  sh          $v0, 0x2($v1)
    ctx->pc = 0x32b9e8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x32b9ec: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x32B9ECu;
    {
        const bool branch_taken_0x32b9ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B9ECu;
        // 0x32b9f0: 0xa06b000b  sb          $t3, 0xB($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 11), (uint8_t)GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b9ec) {
            ctx->pc = 0x32BA30u;
            goto label_32ba30;
        }
    }
    ctx->pc = 0x32B9F4u;
    // 0x32b9f4: 0x0  nop
    ctx->pc = 0x32b9f4u;
    // NOP
label_32b9f8:
    // 0x32b9f8: 0x30e200ff  andi        $v0, $a3, 0xFF
    ctx->pc = 0x32b9f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x32b9fc: 0x24080  sll         $t0, $v0, 2
    ctx->pc = 0x32b9fcu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x32ba00: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x32ba00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x32ba04: 0x24429850  addiu       $v0, $v0, -0x67B0
    ctx->pc = 0x32ba04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940752));
    // 0x32ba08: 0x483021  addu        $a2, $v0, $t0
    ctx->pc = 0x32ba08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x32ba0c: 0x84c60000  lh          $a2, 0x0($a2)
    ctx->pc = 0x32ba0cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x32ba10: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x32ba10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x32ba14: 0x24429852  addiu       $v0, $v0, -0x67AE
    ctx->pc = 0x32ba14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940754));
    // 0x32ba18: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x32ba18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x32ba1c: 0xa4660000  sh          $a2, 0x0($v1)
    ctx->pc = 0x32ba1cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x32ba20: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x32ba20u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x32ba24: 0xa4620002  sh          $v0, 0x2($v1)
    ctx->pc = 0x32ba24u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x32ba28: 0xa06b000b  sb          $t3, 0xB($v1)
    ctx->pc = 0x32ba28u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 11), (uint8_t)GPR_U32(ctx, 11));
    // 0x32ba2c: 0x0  nop
    ctx->pc = 0x32ba2cu;
    // NOP
label_32ba30:
    // 0x32ba30: 0x30e600ff  andi        $a2, $a3, 0xFF
    ctx->pc = 0x32ba30u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x32ba34: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x32ba34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x32ba38: 0x14c20003  bne         $a2, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x32BA38u;
    {
        const bool branch_taken_0x32ba38 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x32ba38) {
            ctx->pc = 0x32BA48u;
            goto label_32ba48;
        }
    }
    ctx->pc = 0x32BA40u;
    // 0x32ba40: 0xa060000b  sb          $zero, 0xB($v1)
    ctx->pc = 0x32ba40u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 11), (uint8_t)GPR_U32(ctx, 0));
    // 0x32ba44: 0x0  nop
    ctx->pc = 0x32ba44u;
    // NOP
label_32ba48:
    // 0x32ba48: 0x312600ff  andi        $a2, $t1, 0xFF
    ctx->pc = 0x32ba48u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
    // 0x32ba4c: 0x30c20002  andi        $v0, $a2, 0x2
    ctx->pc = 0x32ba4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)2);
    // 0x32ba50: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x32BA50u;
    {
        const bool branch_taken_0x32ba50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32ba50) {
            ctx->pc = 0x32BA68u;
            goto label_32ba68;
        }
    }
    ctx->pc = 0x32BA58u;
    // 0x32ba58: 0x84820152  lh          $v0, 0x152($a0)
    ctx->pc = 0x32ba58u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 338)));
    // 0x32ba5c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x32BA5Cu;
    {
        const bool branch_taken_0x32ba5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32BA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BA5Cu;
        // 0x32ba60: 0xa4620002  sh          $v0, 0x2($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ba5c) {
            ctx->pc = 0x32BA90u;
            goto label_32ba90;
        }
    }
    ctx->pc = 0x32BA64u;
    // 0x32ba64: 0x0  nop
    ctx->pc = 0x32ba64u;
    // NOP
label_32ba68:
    // 0x32ba68: 0x30c20004  andi        $v0, $a2, 0x4
    ctx->pc = 0x32ba68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)4);
    // 0x32ba6c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x32BA6Cu;
    {
        const bool branch_taken_0x32ba6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32ba6c) {
            ctx->pc = 0x32BA90u;
            goto label_32ba90;
        }
    }
    ctx->pc = 0x32BA74u;
    // 0x32ba74: 0x9087000e  lbu         $a3, 0xE($a0)
    ctx->pc = 0x32ba74u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 14)));
    // 0x32ba78: 0x9486015e  lhu         $a2, 0x15E($a0)
    ctx->pc = 0x32ba78u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 350)));
    // 0x32ba7c: 0x84820150  lh          $v0, 0x150($a0)
    ctx->pc = 0x32ba7cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 336)));
    // 0x32ba80: 0xe62018  mult        $a0, $a3, $a2
    ctx->pc = 0x32ba80u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x32ba84: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x32ba84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x32ba88: 0xa4620002  sh          $v0, 0x2($v1)
    ctx->pc = 0x32ba88u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x32ba8c: 0x0  nop
    ctx->pc = 0x32ba8cu;
    // NOP
label_32ba90:
    // 0x32ba90: 0x84640002  lh          $a0, 0x2($v1)
    ctx->pc = 0x32ba90u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x32ba94: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x32ba94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32ba98: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x32ba98u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32ba9c: 0x0  nop
    ctx->pc = 0x32ba9cu;
    // NOP
    // 0x32baa0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x32baa0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x32baa4: 0x3e00008  jr          $ra
    ctx->pc = 0x32BAA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32BAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BAA4u;
        // 0x32baa8: 0xe4600004  swc1        $f0, 0x4($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32BAA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32BAACu;
}
