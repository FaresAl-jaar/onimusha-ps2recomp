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

// Function: sub_0014FF70
// Address: 0x14ff70 - 0x150118
void sub_0014FF70_0x14ff70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014FF70_0x14ff70");
#endif

    switch (ctx->pc) {
        case 0x150078u: goto label_150078;
        case 0x1500ecu: goto label_1500ec;
        default: break;
    }

    ctx->pc = 0x14ff70u;

    // 0x14ff70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14ff70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14ff74: 0x30a8ffff  andi        $t0, $a1, 0xFFFF
    ctx->pc = 0x14ff74u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x14ff78: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x14ff78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x14ff7c: 0x3402fffd  ori         $v0, $zero, 0xFFFD
    ctx->pc = 0x14ff7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65533);
    // 0x14ff80: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14ff80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14ff84: 0x15020006  bne         $t0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x14FF84u;
    {
        const bool branch_taken_0x14ff84 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        ctx->pc = 0x14FF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FF84u;
        // 0x14ff88: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ff84) {
            ctx->pc = 0x14FFA0u;
            goto label_14ffa0;
        }
    }
    ctx->pc = 0x14FF8Cu;
    // 0x14ff8c: 0xa2000068  sb          $zero, 0x68($s0)
    ctx->pc = 0x14ff8cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 104), (uint8_t)GPR_U32(ctx, 0));
    // 0x14ff90: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14ff90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14ff94: 0xa2020069  sb          $v0, 0x69($s0)
    ctx->pc = 0x14ff94u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 105), (uint8_t)GPR_U32(ctx, 2));
    // 0x14ff98: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x14FF98u;
    {
        const bool branch_taken_0x14ff98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14FF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FF98u;
        // 0x14ff9c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ff98) {
            ctx->pc = 0x150108u;
            goto label_150108;
        }
    }
    ctx->pc = 0x14FFA0u;
label_14ffa0:
    // 0x14ffa0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x14ffa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x14ffa4: 0x15020012  bne         $t0, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x14FFA4u;
    {
        const bool branch_taken_0x14ffa4 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        if (branch_taken_0x14ffa4) {
            ctx->pc = 0x14FFF0u;
            goto label_14fff0;
        }
    }
    ctx->pc = 0x14FFACu;
    // 0x14ffac: 0x92040069  lbu         $a0, 0x69($s0)
    ctx->pc = 0x14ffacu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 105)));
    // 0x14ffb0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x14ffb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x14ffb4: 0x1083000e  beq         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x14FFB4u;
    {
        const bool branch_taken_0x14ffb4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x14FFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FFB4u;
        // 0x14ffb8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ffb4) {
            ctx->pc = 0x14FFF0u;
            goto label_14fff0;
        }
    }
    ctx->pc = 0x14FFBCu;
    // 0x14ffbc: 0x1082000a  beq         $a0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x14FFBCu;
    {
        const bool branch_taken_0x14ffbc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x14ffbc) {
            ctx->pc = 0x14FFE8u;
            goto label_14ffe8;
        }
    }
    ctx->pc = 0x14FFC4u;
    // 0x14ffc4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14ffc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14ffc8: 0x10820005  beq         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x14FFC8u;
    {
        const bool branch_taken_0x14ffc8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x14ffc8) {
            ctx->pc = 0x14FFE0u;
            goto label_14ffe0;
        }
    }
    ctx->pc = 0x14FFD0u;
    // 0x14ffd0: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x14FFD0u;
    {
        const bool branch_taken_0x14ffd0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ffd0) {
            ctx->pc = 0x14FFF0u;
            goto label_14fff0;
        }
    }
    ctx->pc = 0x14FFD8u;
    // 0x14ffd8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x14FFD8u;
    {
        const bool branch_taken_0x14ffd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ffd8) {
            ctx->pc = 0x14FFF0u;
            goto label_14fff0;
        }
    }
    ctx->pc = 0x14FFE0u;
label_14ffe0:
    // 0x14ffe0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x14FFE0u;
    {
        const bool branch_taken_0x14ffe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14FFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FFE0u;
        // 0x14ffe4: 0xa2030069  sb          $v1, 0x69($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 105), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ffe0) {
            ctx->pc = 0x14FFF0u;
            goto label_14fff0;
        }
    }
    ctx->pc = 0x14FFE8u;
label_14ffe8:
    // 0x14ffe8: 0xa2030069  sb          $v1, 0x69($s0)
    ctx->pc = 0x14ffe8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 105), (uint8_t)GPR_U32(ctx, 3));
    // 0x14ffec: 0x0  nop
    ctx->pc = 0x14ffecu;
    // NOP
label_14fff0:
    // 0x14fff0: 0x92040069  lbu         $a0, 0x69($s0)
    ctx->pc = 0x14fff0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 105)));
    // 0x14fff4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x14fff4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x14fff8: 0x10830019  beq         $a0, $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x14FFF8u;
    {
        const bool branch_taken_0x14fff8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x14FFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FFF8u;
        // 0x14fffc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fff8) {
            ctx->pc = 0x150060u;
            goto label_150060;
        }
    }
    ctx->pc = 0x150000u;
    // 0x150000: 0x10820015  beq         $a0, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x150000u;
    {
        const bool branch_taken_0x150000 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x150000) {
            ctx->pc = 0x150058u;
            goto label_150058;
        }
    }
    ctx->pc = 0x150008u;
    // 0x150008: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x150008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15000c: 0x10820006  beq         $a0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x15000Cu;
    {
        const bool branch_taken_0x15000c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x15000c) {
            ctx->pc = 0x150028u;
            goto label_150028;
        }
    }
    ctx->pc = 0x150014u;
    // 0x150014: 0x10800030  beqz        $a0, . + 4 + (0x30 << 2)
    ctx->pc = 0x150014u;
    {
        const bool branch_taken_0x150014 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x150014) {
            ctx->pc = 0x1500D8u;
            goto label_1500d8;
        }
    }
    ctx->pc = 0x15001Cu;
    // 0x15001c: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x15001Cu;
    {
        const bool branch_taken_0x15001c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15001c) {
            ctx->pc = 0x1500D8u;
            goto label_1500d8;
        }
    }
    ctx->pc = 0x150024u;
    // 0x150024: 0x0  nop
    ctx->pc = 0x150024u;
    // NOP
label_150028:
    // 0x150028: 0x92030068  lbu         $v1, 0x68($s0)
    ctx->pc = 0x150028u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x15002c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x15002cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150030: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x150030u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x150034: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x150034u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x150038: 0xa4650050  sh          $a1, 0x50($v1)
    ctx->pc = 0x150038u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 80), (uint16_t)GPR_U32(ctx, 5));
    // 0x15003c: 0x92030068  lbu         $v1, 0x68($s0)
    ctx->pc = 0x15003cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x150040: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x150040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x150044: 0xa0660060  sb          $a2, 0x60($v1)
    ctx->pc = 0x150044u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 96), (uint8_t)GPR_U32(ctx, 6));
    // 0x150048: 0x92030068  lbu         $v1, 0x68($s0)
    ctx->pc = 0x150048u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x15004c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x15004cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x150050: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x150050u;
    {
        const bool branch_taken_0x150050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x150054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150050u;
        // 0x150054: 0xa2030068  sb          $v1, 0x68($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 104), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150050) {
            ctx->pc = 0x150108u;
            goto label_150108;
        }
    }
    ctx->pc = 0x150058u;
label_150058:
    // 0x150058: 0xa2030069  sb          $v1, 0x69($s0)
    ctx->pc = 0x150058u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 105), (uint8_t)GPR_U32(ctx, 3));
    // 0x15005c: 0x0  nop
    ctx->pc = 0x15005cu;
    // NOP
label_150060:
    // 0x150060: 0x92030068  lbu         $v1, 0x68($s0)
    ctx->pc = 0x150060u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x150064: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x150064u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x150068: 0x10200019  beqz        $at, . + 4 + (0x19 << 2)
    ctx->pc = 0x150068u;
    {
        const bool branch_taken_0x150068 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x15006Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150068u;
        // 0x15006c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150068) {
            ctx->pc = 0x1500D0u;
            goto label_1500d0;
        }
    }
    ctx->pc = 0x150070u;
    // 0x150070: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x150070u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150074: 0x3407fffe  ori         $a3, $zero, 0xFFFE
    ctx->pc = 0x150074u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65534);
label_150078:
    // 0x150078: 0x94820050  lhu         $v0, 0x50($a0)
    ctx->pc = 0x150078u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x15007c: 0x10470010  beq         $v0, $a3, . + 4 + (0x10 << 2)
    ctx->pc = 0x15007Cu;
    {
        const bool branch_taken_0x15007c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        if (branch_taken_0x15007c) {
            ctx->pc = 0x1500C0u;
            goto label_1500c0;
        }
    }
    ctx->pc = 0x150084u;
    // 0x150084: 0x91840  sll         $v1, $t1, 1
    ctx->pc = 0x150084u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x150088: 0x1301021  addu        $v0, $t1, $s0
    ctx->pc = 0x150088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 16)));
    // 0x15008c: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x15008cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x150090: 0x94830050  lhu         $v1, 0x50($a0)
    ctx->pc = 0x150090u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x150094: 0xa603000e  sh          $v1, 0xE($s0)
    ctx->pc = 0x150094u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x150098: 0x90420060  lbu         $v0, 0x60($v0)
    ctx->pc = 0x150098u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x15009c: 0xa2020010  sb          $v0, 0x10($s0)
    ctx->pc = 0x15009cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 16), (uint8_t)GPR_U32(ctx, 2));
    // 0x1500a0: 0xa4870050  sh          $a3, 0x50($a0)
    ctx->pc = 0x1500a0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 80), (uint16_t)GPR_U32(ctx, 7));
    // 0x1500a4: 0x92020068  lbu         $v0, 0x68($s0)
    ctx->pc = 0x1500a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x1500a8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1500a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1500ac: 0x15220002  bne         $t1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1500ACu;
    {
        const bool branch_taken_0x1500ac = (GPR_U64(ctx, 9) != GPR_U64(ctx, 2));
        if (branch_taken_0x1500ac) {
            ctx->pc = 0x1500B8u;
            goto label_1500b8;
        }
    }
    ctx->pc = 0x1500B4u;
    // 0x1500b4: 0xa2000069  sb          $zero, 0x69($s0)
    ctx->pc = 0x1500b4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 105), (uint8_t)GPR_U32(ctx, 0));
label_1500b8:
    // 0x1500b8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1500B8u;
    {
        const bool branch_taken_0x1500b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1500BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1500B8u;
        // 0x1500bc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1500b8) {
            ctx->pc = 0x150108u;
            goto label_150108;
        }
    }
    ctx->pc = 0x1500C0u;
label_1500c0:
    // 0x1500c0: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1500c0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1500c4: 0x123102a  slt         $v0, $t1, $v1
    ctx->pc = 0x1500c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1500c8: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x1500C8u;
    {
        const bool branch_taken_0x1500c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1500CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1500C8u;
        // 0x1500cc: 0x24840002  addiu       $a0, $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1500c8) {
            ctx->pc = 0x150078u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_150078;
        }
    }
    ctx->pc = 0x1500D0u;
label_1500d0:
    // 0x1500d0: 0xa2000069  sb          $zero, 0x69($s0)
    ctx->pc = 0x1500d0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 105), (uint8_t)GPR_U32(ctx, 0));
    // 0x1500d4: 0x0  nop
    ctx->pc = 0x1500d4u;
    // NOP
label_1500d8:
    // 0x1500d8: 0x3402fffc  ori         $v0, $zero, 0xFFFC
    ctx->pc = 0x1500d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65532);
    // 0x1500dc: 0x15020006  bne         $t0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1500DCu;
    {
        const bool branch_taken_0x1500dc = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        if (branch_taken_0x1500dc) {
            ctx->pc = 0x1500F8u;
            goto label_1500f8;
        }
    }
    ctx->pc = 0x1500E4u;
    // 0x1500e4: 0xc0d3510  jal         func_34D440
    ctx->pc = 0x1500E4u;
    SET_GPR_U32(ctx, 31, 0x1500ECu);
    ctx->pc = 0x34D440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34D440u, 0x1500E4u, 0x1500ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1500ECu;
label_1500ec:
    // 0x1500ec: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x1500ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1500f0: 0x64060001  daddiu      $a2, $zero, 0x1
    ctx->pc = 0x1500f0u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x1500f4: 0x0  nop
    ctx->pc = 0x1500f4u;
    // NOP
label_1500f8:
    // 0x1500f8: 0xa605000e  sh          $a1, 0xE($s0)
    ctx->pc = 0x1500f8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 14), (uint16_t)GPR_U32(ctx, 5));
    // 0x1500fc: 0xa2060010  sb          $a2, 0x10($s0)
    ctx->pc = 0x1500fcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 16), (uint8_t)GPR_U32(ctx, 6));
    // 0x150100: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x150100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x150104: 0x0  nop
    ctx->pc = 0x150104u;
    // NOP
label_150108:
    // 0x150108: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x150108u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15010c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15010cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x150110: 0x3e00008  jr          $ra
    ctx->pc = 0x150110u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x150114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150110u;
        // 0x150114: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x150110u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x150118u;
}
