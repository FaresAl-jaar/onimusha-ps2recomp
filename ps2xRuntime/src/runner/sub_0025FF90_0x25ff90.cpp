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

// Function: sub_0025FF90
// Address: 0x25ff90 - 0x260c34
void sub_0025FF90_0x25ff90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025FF90_0x25ff90");
#endif

    switch (ctx->pc) {
        case 0x260100u: goto label_260100;
        case 0x260130u: goto label_260130;
        case 0x260148u: goto label_260148;
        case 0x260154u: goto label_260154;
        case 0x260208u: goto label_260208;
        case 0x26021cu: goto label_26021c;
        case 0x260260u: goto label_260260;
        case 0x260274u: goto label_260274;
        case 0x2602b8u: goto label_2602b8;
        case 0x2602ccu: goto label_2602cc;
        case 0x2602f4u: goto label_2602f4;
        case 0x260308u: goto label_260308;
        case 0x26032cu: goto label_26032c;
        case 0x260340u: goto label_260340;
        case 0x260390u: goto label_260390;
        case 0x2603d0u: goto label_2603d0;
        case 0x260418u: goto label_260418;
        case 0x260654u: goto label_260654;
        case 0x2606d0u: goto label_2606d0;
        case 0x2606f8u: goto label_2606f8;
        case 0x2607a8u: goto label_2607a8;
        case 0x2607b4u: goto label_2607b4;
        case 0x2607c0u: goto label_2607c0;
        case 0x2607fcu: goto label_2607fc;
        case 0x260838u: goto label_260838;
        case 0x260908u: goto label_260908;
        case 0x260928u: goto label_260928;
        case 0x26095cu: goto label_26095c;
        case 0x260990u: goto label_260990;
        case 0x2609dcu: goto label_2609dc;
        case 0x2609f0u: goto label_2609f0;
        case 0x260a00u: goto label_260a00;
        case 0x260a08u: goto label_260a08;
        case 0x260b24u: goto label_260b24;
        case 0x260b3cu: goto label_260b3c;
        case 0x260b9cu: goto label_260b9c;
        case 0x260bb4u: goto label_260bb4;
        case 0x260bc8u: goto label_260bc8;
        case 0x260c20u: goto label_260c20;
        default: break;
    }

    ctx->pc = 0x25ff90u;

    // 0x25ff90: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x25ff90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x25ff94: 0x3c050092  lui         $a1, 0x92
    ctx->pc = 0x25ff94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)146 << 16));
    // 0x25ff98: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x25ff98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x25ff9c: 0x24a51760  addiu       $a1, $a1, 0x1760
    ctx->pc = 0x25ff9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5984));
    // 0x25ffa0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x25ffa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x25ffa4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x25ffa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x25ffa8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x25ffa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x25ffac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x25ffacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ffb0: 0x8c8629c0  lw          $a2, 0x29C0($a0)
    ctx->pc = 0x25ffb0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 10688)));
    // 0x25ffb4: 0x908308e8  lbu         $v1, 0x8E8($a0)
    ctx->pc = 0x25ffb4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2280)));
    // 0x25ffb8: 0x90c4005f  lbu         $a0, 0x5F($a2)
    ctx->pc = 0x25ffb8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 95)));
    // 0x25ffbc: 0x42240  sll         $a0, $a0, 9
    ctx->pc = 0x25ffbcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 9));
    // 0x25ffc0: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x25ffc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x25ffc4: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25FFC4u;
    {
        const bool branch_taken_0x25ffc4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x25FFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FFC4u;
        // 0x25ffc8: 0x24900110  addiu       $s0, $a0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ffc4) {
            ctx->pc = 0x25FFD8u;
            goto label_25ffd8;
        }
    }
    ctx->pc = 0x25FFCCu;
    // 0x25ffcc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x25FFCCu;
    {
        const bool branch_taken_0x25ffcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25FFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FFCCu;
        // 0x25ffd0: 0xae202ab0  sw          $zero, 0x2AB0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 10928), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ffcc) {
            ctx->pc = 0x25FFF0u;
            goto label_25fff0;
        }
    }
    ctx->pc = 0x25FFD4u;
    // 0x25ffd4: 0x0  nop
    ctx->pc = 0x25ffd4u;
    // NOP
label_25ffd8:
    // 0x25ffd8: 0x38620001  xori        $v0, $v1, 0x1
    ctx->pc = 0x25ffd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x25ffdc: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x25ffdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x25ffe0: 0x27828060  addiu       $v0, $gp, -0x7FA0
    ctx->pc = 0x25ffe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x25ffe4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x25ffe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25ffe8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x25ffe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25ffec: 0xae222ab0  sw          $v0, 0x2AB0($s1)
    ctx->pc = 0x25ffecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 10928), GPR_U32(ctx, 2));
label_25fff0:
    // 0x25fff0: 0x8e222ab0  lw          $v0, 0x2AB0($s1)
    ctx->pc = 0x25fff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10928)));
    // 0x25fff4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x25FFF4u;
    {
        const bool branch_taken_0x25fff4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25fff4) {
            ctx->pc = 0x260028u;
            goto label_260028;
        }
    }
    ctx->pc = 0x25FFFCu;
    // 0x25fffc: 0x904229d0  lbu         $v0, 0x29D0($v0)
    ctx->pc = 0x25fffcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 10704)));
    // 0x260000: 0x28420005  slti        $v0, $v0, 0x5
    ctx->pc = 0x260000u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x260004: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x260004u;
    {
        const bool branch_taken_0x260004 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x260004) {
            ctx->pc = 0x260010u;
            goto label_260010;
        }
    }
    ctx->pc = 0x26000Cu;
    // 0x26000c: 0xae202ab0  sw          $zero, 0x2AB0($s1)
    ctx->pc = 0x26000cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 10928), GPR_U32(ctx, 0));
label_260010:
    // 0x260010: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x260010u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x260014: 0x8c22cebc  lw          $v0, -0x3144($at)
    ctx->pc = 0x260014u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x260018: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x260018u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x26001c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x26001Cu;
    {
        const bool branch_taken_0x26001c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26001c) {
            ctx->pc = 0x260028u;
            goto label_260028;
        }
    }
    ctx->pc = 0x260024u;
    // 0x260024: 0xae202ab0  sw          $zero, 0x2AB0($s1)
    ctx->pc = 0x260024u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 10928), GPR_U32(ctx, 0));
label_260028:
    // 0x260028: 0x92222ad7  lbu         $v0, 0x2AD7($s1)
    ctx->pc = 0x260028u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 10967)));
    // 0x26002c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26002Cu;
    {
        const bool branch_taken_0x26002c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26002c) {
            ctx->pc = 0x260040u;
            goto label_260040;
        }
    }
    ctx->pc = 0x260034u;
    // 0x260034: 0x8e220148  lw          $v0, 0x148($s1)
    ctx->pc = 0x260034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
    // 0x260038: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x260038u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x26003c: 0xae220148  sw          $v0, 0x148($s1)
    ctx->pc = 0x26003cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 328), GPR_U32(ctx, 2));
label_260040:
    // 0x260040: 0x92222ad9  lbu         $v0, 0x2AD9($s1)
    ctx->pc = 0x260040u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 10969)));
    // 0x260044: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x260044u;
    {
        const bool branch_taken_0x260044 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x260044) {
            ctx->pc = 0x260058u;
            goto label_260058;
        }
    }
    ctx->pc = 0x26004Cu;
    // 0x26004c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x26004cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x260050: 0xa2222ad9  sb          $v0, 0x2AD9($s1)
    ctx->pc = 0x260050u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 10969), (uint8_t)GPR_U32(ctx, 2));
    // 0x260054: 0x0  nop
    ctx->pc = 0x260054u;
    // NOP
label_260058:
    // 0x260058: 0x92222ada  lbu         $v0, 0x2ADA($s1)
    ctx->pc = 0x260058u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 10970)));
    // 0x26005c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26005Cu;
    {
        const bool branch_taken_0x26005c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26005c) {
            ctx->pc = 0x260070u;
            goto label_260070;
        }
    }
    ctx->pc = 0x260064u;
    // 0x260064: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x260064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x260068: 0xa2222ada  sb          $v0, 0x2ADA($s1)
    ctx->pc = 0x260068u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 10970), (uint8_t)GPR_U32(ctx, 2));
    // 0x26006c: 0x0  nop
    ctx->pc = 0x26006cu;
    // NOP
label_260070:
    // 0x260070: 0x92222ad7  lbu         $v0, 0x2AD7($s1)
    ctx->pc = 0x260070u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 10967)));
    // 0x260074: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x260074u;
    {
        const bool branch_taken_0x260074 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x260074) {
            ctx->pc = 0x260088u;
            goto label_260088;
        }
    }
    ctx->pc = 0x26007Cu;
    // 0x26007c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x26007cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x260080: 0xa2222ad7  sb          $v0, 0x2AD7($s1)
    ctx->pc = 0x260080u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 10967), (uint8_t)GPR_U32(ctx, 2));
    // 0x260084: 0x0  nop
    ctx->pc = 0x260084u;
    // NOP
label_260088:
    // 0x260088: 0x96222ac8  lhu         $v0, 0x2AC8($s1)
    ctx->pc = 0x260088u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 10952)));
    // 0x26008c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x26008Cu;
    {
        const bool branch_taken_0x26008c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26008c) {
            ctx->pc = 0x2600A8u;
            goto label_2600a8;
        }
    }
    ctx->pc = 0x260094u;
    // 0x260094: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x260094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x260098: 0xa6222ac8  sh          $v0, 0x2AC8($s1)
    ctx->pc = 0x260098u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 10952), (uint16_t)GPR_U32(ctx, 2));
    // 0x26009c: 0x8e220148  lw          $v0, 0x148($s1)
    ctx->pc = 0x26009cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
    // 0x2600a0: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x2600a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x2600a4: 0xae220148  sw          $v0, 0x148($s1)
    ctx->pc = 0x2600a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 328), GPR_U32(ctx, 2));
label_2600a8:
    // 0x2600a8: 0x92230640  lbu         $v1, 0x640($s1)
    ctx->pc = 0x2600a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1600)));
    // 0x2600ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2600acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2600b0: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2600B0u;
    {
        const bool branch_taken_0x2600b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2600b0) {
            ctx->pc = 0x2600D0u;
            goto label_2600d0;
        }
    }
    ctx->pc = 0x2600B8u;
    // 0x2600b8: 0x8e2229c0  lw          $v0, 0x29C0($s1)
    ctx->pc = 0x2600b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10688)));
    // 0x2600bc: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x2600bcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2600c0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2600C0u;
    {
        const bool branch_taken_0x2600c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2600C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2600C0u;
        // 0x2600c4: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2600c0) {
            ctx->pc = 0x2600D0u;
            goto label_2600d0;
        }
    }
    ctx->pc = 0x2600C8u;
    // 0x2600c8: 0x3c01008e  lui         $at, 0x8E
    ctx->pc = 0x2600c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)142 << 16));
    // 0x2600cc: 0xa022e000  sb          $v0, -0x2000($at)
    ctx->pc = 0x2600ccu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x8DE000u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x8DE000u, _value); } while (0);
label_2600d0:
    // 0x2600d0: 0x8e2306c8  lw          $v1, 0x6C8($s1)
    ctx->pc = 0x2600d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1736)));
    // 0x2600d4: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x2600d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x2600d8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2600d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2600dc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2600DCu;
    {
        const bool branch_taken_0x2600dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2600dc) {
            ctx->pc = 0x260100u;
            goto label_260100;
        }
    }
    ctx->pc = 0x2600E4u;
    // 0x2600e4: 0x8e2429c0  lw          $a0, 0x29C0($s1)
    ctx->pc = 0x2600e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10688)));
    // 0x2600e8: 0x3c02f7ff  lui         $v0, 0xF7FF
    ctx->pc = 0x2600e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63487 << 16));
    // 0x2600ec: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2600ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2600f0: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x2600f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x2600f4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2600f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2600f8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2600F8u;
    {
        const bool branch_taken_0x2600f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2600FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2600F8u;
        // 0x2600fc: 0xac820024  sw          $v0, 0x24($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2600f8) {
            ctx->pc = 0x260118u;
            goto label_260118;
        }
    }
    ctx->pc = 0x260100u;
label_260100:
    // 0x260100: 0x8e2429c0  lw          $a0, 0x29C0($s1)
    ctx->pc = 0x260100u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10688)));
    // 0x260104: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x260104u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x260108: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x260108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x26010c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x26010cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x260110: 0xac820024  sw          $v0, 0x24($a0)
    ctx->pc = 0x260110u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 2));
    // 0x260114: 0x0  nop
    ctx->pc = 0x260114u;
    // NOP
label_260118:
    // 0x260118: 0x92230640  lbu         $v1, 0x640($s1)
    ctx->pc = 0x260118u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1600)));
    // 0x26011c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26011cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x260120: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x260120u;
    {
        const bool branch_taken_0x260120 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x260124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260120u;
        // 0x260124: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260120) {
            ctx->pc = 0x260130u;
            goto label_260130;
        }
    }
    ctx->pc = 0x260128u;
    // 0x260128: 0xc098310  jal         func_260C40
    ctx->pc = 0x260128u;
    SET_GPR_U32(ctx, 31, 0x260130u);
    ctx->pc = 0x260C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260C40u, 0x260128u, 0x260130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260130u;
label_260130:
    // 0x260130: 0x92230640  lbu         $v1, 0x640($s1)
    ctx->pc = 0x260130u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1600)));
    // 0x260134: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x260134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x260138: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x260138u;
    {
        const bool branch_taken_0x260138 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x26013Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260138u;
        // 0x26013c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260138) {
            ctx->pc = 0x260148u;
            goto label_260148;
        }
    }
    ctx->pc = 0x260140u;
    // 0x260140: 0xc0985a4  jal         func_261690
    ctx->pc = 0x260140u;
    SET_GPR_U32(ctx, 31, 0x260148u);
    ctx->pc = 0x261690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261690u, 0x260140u, 0x260148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260148u;
label_260148:
    // 0x260148: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x260148u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26014c: 0xc0a6188  jal         func_298620
    ctx->pc = 0x26014Cu;
    SET_GPR_U32(ctx, 31, 0x260154u);
    ctx->pc = 0x260150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26014Cu;
    // 0x260150: 0xae2008cc  sw          $zero, 0x8CC($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 2252), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x298620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x298620u, 0x26014Cu, 0x260154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260154u;
label_260154:
    // 0x260154: 0x92230640  lbu         $v1, 0x640($s1)
    ctx->pc = 0x260154u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1600)));
    // 0x260158: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x260158u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x26015c: 0x14650016  bne         $v1, $a1, . + 4 + (0x16 << 2)
    ctx->pc = 0x26015Cu;
    {
        const bool branch_taken_0x26015c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x26015c) {
            ctx->pc = 0x2601B8u;
            goto label_2601b8;
        }
    }
    ctx->pc = 0x260164u;
    // 0x260164: 0xde230500  ld          $v1, 0x500($s1)
    ctx->pc = 0x260164u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 1280)));
    // 0x260168: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x260168u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x26016c: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x26016Cu;
    {
        const bool branch_taken_0x26016c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x26016c) {
            ctx->pc = 0x2601B8u;
            goto label_2601b8;
        }
    }
    ctx->pc = 0x260174u;
    // 0x260174: 0x9224065c  lbu         $a0, 0x65C($s1)
    ctx->pc = 0x260174u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1628)));
    // 0x260178: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x260178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26017c: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x26017Cu;
    {
        const bool branch_taken_0x26017c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x26017c) {
            ctx->pc = 0x260190u;
            goto label_260190;
        }
    }
    ctx->pc = 0x260184u;
    // 0x260184: 0x1485000c  bne         $a0, $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x260184u;
    {
        const bool branch_taken_0x260184 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        if (branch_taken_0x260184) {
            ctx->pc = 0x2601B8u;
            goto label_2601b8;
        }
    }
    ctx->pc = 0x26018Cu;
    // 0x26018c: 0x0  nop
    ctx->pc = 0x26018cu;
    // NOP
label_260190:
    // 0x260190: 0x8e2308d0  lw          $v1, 0x8D0($s1)
    ctx->pc = 0x260190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2256)));
    // 0x260194: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x260194u;
    {
        const bool branch_taken_0x260194 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x260194) {
            ctx->pc = 0x2601A8u;
            goto label_2601a8;
        }
    }
    ctx->pc = 0x26019Cu;
    // 0x26019c: 0x8e2308d4  lw          $v1, 0x8D4($s1)
    ctx->pc = 0x26019cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2260)));
    // 0x2601a0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2601A0u;
    {
        const bool branch_taken_0x2601a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2601a0) {
            ctx->pc = 0x2601B8u;
            goto label_2601b8;
        }
    }
    ctx->pc = 0x2601A8u;
label_2601a8:
    // 0x2601a8: 0x8e230148  lw          $v1, 0x148($s1)
    ctx->pc = 0x2601a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
    // 0x2601ac: 0x34630200  ori         $v1, $v1, 0x200
    ctx->pc = 0x2601acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)512);
    // 0x2601b0: 0xae230148  sw          $v1, 0x148($s1)
    ctx->pc = 0x2601b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 328), GPR_U32(ctx, 3));
    // 0x2601b4: 0x0  nop
    ctx->pc = 0x2601b4u;
    // NOP
label_2601b8:
    // 0x2601b8: 0x120000af  beqz        $s0, . + 4 + (0xAF << 2)
    ctx->pc = 0x2601B8u;
    {
        const bool branch_taken_0x2601b8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2601b8) {
            ctx->pc = 0x260478u;
            goto label_260478;
        }
    }
    ctx->pc = 0x2601C0u;
    // 0x2601c0: 0x8e2329c0  lw          $v1, 0x29C0($s1)
    ctx->pc = 0x2601c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10688)));
    // 0x2601c4: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x2601c4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2601c8: 0x106000ab  beqz        $v1, . + 4 + (0xAB << 2)
    ctx->pc = 0x2601C8u;
    {
        const bool branch_taken_0x2601c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2601c8) {
            ctx->pc = 0x260478u;
            goto label_260478;
        }
    }
    ctx->pc = 0x2601D0u;
    // 0x2601d0: 0x8e0300c4  lw          $v1, 0xC4($s0)
    ctx->pc = 0x2601d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x2601d4: 0x30632000  andi        $v1, $v1, 0x2000
    ctx->pc = 0x2601d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
    // 0x2601d8: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x2601D8u;
    {
        const bool branch_taken_0x2601d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2601d8) {
            ctx->pc = 0x260228u;
            goto label_260228;
        }
    }
    ctx->pc = 0x2601E0u;
    // 0x2601e0: 0x962406d6  lhu         $a0, 0x6D6($s1)
    ctx->pc = 0x2601e0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1750)));
    // 0x2601e4: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2601e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2601e8: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x2601e8u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2601ec: 0x0  nop
    ctx->pc = 0x2601ecu;
    // NOP
    // 0x2601f0: 0x0  nop
    ctx->pc = 0x2601f0u;
    // NOP
    // 0x2601f4: 0x1810  mfhi        $v1
    ctx->pc = 0x2601f4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2601f8: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x2601F8u;
    {
        const bool branch_taken_0x2601f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2601FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2601F8u;
        // 0x2601fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2601f8) {
            ctx->pc = 0x260228u;
            goto label_260228;
        }
    }
    ctx->pc = 0x260200u;
    // 0x260200: 0xc0a6998  jal         func_29A660
    ctx->pc = 0x260200u;
    SET_GPR_U32(ctx, 31, 0x260208u);
    ctx->pc = 0x29A660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A660u, 0x260200u, 0x260208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260208u;
label_260208:
    // 0x260208: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x260208u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x26020c: 0x8e2229c0  lw          $v0, 0x29C0($s1)
    ctx->pc = 0x26020cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10688)));
    // 0x260210: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x260210u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x260214: 0xc096970  jal         func_25A5C0
    ctx->pc = 0x260214u;
    SET_GPR_U32(ctx, 31, 0x26021Cu);
    ctx->pc = 0x260218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260214u;
    // 0x260218: 0x24440001  addiu       $a0, $v0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5C0u, 0x260214u, 0x26021Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26021Cu;
label_26021c:
    // 0x26021c: 0x8e2329c0  lw          $v1, 0x29C0($s1)
    ctx->pc = 0x26021cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10688)));
    // 0x260220: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x260220u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x260224: 0x0  nop
    ctx->pc = 0x260224u;
    // NOP
label_260228:
    // 0x260228: 0x8e0300c4  lw          $v1, 0xC4($s0)
    ctx->pc = 0x260228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x26022c: 0x30634000  andi        $v1, $v1, 0x4000
    ctx->pc = 0x26022cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x260230: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x260230u;
    {
        const bool branch_taken_0x260230 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x260230) {
            ctx->pc = 0x260280u;
            goto label_260280;
        }
    }
    ctx->pc = 0x260238u;
    // 0x260238: 0x962406d6  lhu         $a0, 0x6D6($s1)
    ctx->pc = 0x260238u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1750)));
    // 0x26023c: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x26023cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x260240: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x260240u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x260244: 0x0  nop
    ctx->pc = 0x260244u;
    // NOP
    // 0x260248: 0x0  nop
    ctx->pc = 0x260248u;
    // NOP
    // 0x26024c: 0x1810  mfhi        $v1
    ctx->pc = 0x26024cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x260250: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x260250u;
    {
        const bool branch_taken_0x260250 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x260254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260250u;
        // 0x260254: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260250) {
            ctx->pc = 0x260280u;
            goto label_260280;
        }
    }
    ctx->pc = 0x260258u;
    // 0x260258: 0xc0a69a8  jal         func_29A6A0
    ctx->pc = 0x260258u;
    SET_GPR_U32(ctx, 31, 0x260260u);
    ctx->pc = 0x29A6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A6A0u, 0x260258u, 0x260260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260260u;
label_260260:
    // 0x260260: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x260260u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x260264: 0x8e2229c0  lw          $v0, 0x29C0($s1)
    ctx->pc = 0x260264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10688)));
    // 0x260268: 0x94420006  lhu         $v0, 0x6($v0)
    ctx->pc = 0x260268u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x26026c: 0xc096970  jal         func_25A5C0
    ctx->pc = 0x26026Cu;
    SET_GPR_U32(ctx, 31, 0x260274u);
    ctx->pc = 0x260270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26026Cu;
    // 0x260270: 0x24440001  addiu       $a0, $v0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5C0u, 0x26026Cu, 0x260274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260274u;
label_260274:
    // 0x260274: 0x8e2329c0  lw          $v1, 0x29C0($s1)
    ctx->pc = 0x260274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10688)));
    // 0x260278: 0xa4620006  sh          $v0, 0x6($v1)
    ctx->pc = 0x260278u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x26027c: 0x0  nop
    ctx->pc = 0x26027cu;
    // NOP
label_260280:
    // 0x260280: 0x8e0300c4  lw          $v1, 0xC4($s0)
    ctx->pc = 0x260280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x260284: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x260284u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x260288: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x260288u;
    {
        const bool branch_taken_0x260288 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x260288) {
            ctx->pc = 0x2602D8u;
            goto label_2602d8;
        }
    }
    ctx->pc = 0x260290u;
    // 0x260290: 0x962406d6  lhu         $a0, 0x6D6($s1)
    ctx->pc = 0x260290u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1750)));
    // 0x260294: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x260294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x260298: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x260298u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x26029c: 0x0  nop
    ctx->pc = 0x26029cu;
    // NOP
    // 0x2602a0: 0x0  nop
    ctx->pc = 0x2602a0u;
    // NOP
    // 0x2602a4: 0x1810  mfhi        $v1
    ctx->pc = 0x2602a4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2602a8: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x2602A8u;
    {
        const bool branch_taken_0x2602a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2602ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2602A8u;
        // 0x2602ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2602a8) {
            ctx->pc = 0x2602D8u;
            goto label_2602d8;
        }
    }
    ctx->pc = 0x2602B0u;
    // 0x2602b0: 0xc0a69b8  jal         func_29A6E0
    ctx->pc = 0x2602B0u;
    SET_GPR_U32(ctx, 31, 0x2602B8u);
    ctx->pc = 0x29A6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A6E0u, 0x2602B0u, 0x2602B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2602B8u;
label_2602b8:
    // 0x2602b8: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x2602b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2602bc: 0x8e2229c0  lw          $v0, 0x29C0($s1)
    ctx->pc = 0x2602bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10688)));
    // 0x2602c0: 0x9442000a  lhu         $v0, 0xA($v0)
    ctx->pc = 0x2602c0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x2602c4: 0xc096970  jal         func_25A5C0
    ctx->pc = 0x2602C4u;
    SET_GPR_U32(ctx, 31, 0x2602CCu);
    ctx->pc = 0x2602C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2602C4u;
    // 0x2602c8: 0x24440001  addiu       $a0, $v0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5C0u, 0x2602C4u, 0x2602CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2602CCu;
label_2602cc:
    // 0x2602cc: 0x8e2329c0  lw          $v1, 0x29C0($s1)
    ctx->pc = 0x2602ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10688)));
    // 0x2602d0: 0xa462000a  sh          $v0, 0xA($v1)
    ctx->pc = 0x2602d0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x2602d4: 0x0  nop
    ctx->pc = 0x2602d4u;
    // NOP
label_2602d8:
    // 0x2602d8: 0x8e0400c4  lw          $a0, 0xC4($s0)
    ctx->pc = 0x2602d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x2602dc: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x2602dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x2602e0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2602e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2602e4: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x2602E4u;
    {
        const bool branch_taken_0x2602e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2602E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2602E4u;
        // 0x2602e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2602e4) {
            ctx->pc = 0x260310u;
            goto label_260310;
        }
    }
    ctx->pc = 0x2602ECu;
    // 0x2602ec: 0xc0a69a8  jal         func_29A6A0
    ctx->pc = 0x2602ECu;
    SET_GPR_U32(ctx, 31, 0x2602F4u);
    ctx->pc = 0x29A6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A6A0u, 0x2602ECu, 0x2602F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2602F4u;
label_2602f4:
    // 0x2602f4: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x2602f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2602f8: 0x8e2229c0  lw          $v0, 0x29C0($s1)
    ctx->pc = 0x2602f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10688)));
    // 0x2602fc: 0x94420006  lhu         $v0, 0x6($v0)
    ctx->pc = 0x2602fcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x260300: 0xc096970  jal         func_25A5C0
    ctx->pc = 0x260300u;
    SET_GPR_U32(ctx, 31, 0x260308u);
    ctx->pc = 0x260304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260300u;
    // 0x260304: 0x2444000a  addiu       $a0, $v0, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5C0u, 0x260300u, 0x260308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260308u;
label_260308:
    // 0x260308: 0x8e2329c0  lw          $v1, 0x29C0($s1)
    ctx->pc = 0x260308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10688)));
    // 0x26030c: 0xa4620006  sh          $v0, 0x6($v1)
    ctx->pc = 0x26030cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 6), (uint16_t)GPR_U32(ctx, 2));
label_260310:
    // 0x260310: 0x8e0400c4  lw          $a0, 0xC4($s0)
    ctx->pc = 0x260310u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x260314: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x260314u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x260318: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x260318u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x26031c: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x26031Cu;
    {
        const bool branch_taken_0x26031c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x260320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26031Cu;
        // 0x260320: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26031c) {
            ctx->pc = 0x260348u;
            goto label_260348;
        }
    }
    ctx->pc = 0x260324u;
    // 0x260324: 0xc0a69b8  jal         func_29A6E0
    ctx->pc = 0x260324u;
    SET_GPR_U32(ctx, 31, 0x26032Cu);
    ctx->pc = 0x29A6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A6E0u, 0x260324u, 0x26032Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26032Cu;
label_26032c:
    // 0x26032c: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x26032cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x260330: 0x8e2229c0  lw          $v0, 0x29C0($s1)
    ctx->pc = 0x260330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10688)));
    // 0x260334: 0x9442000a  lhu         $v0, 0xA($v0)
    ctx->pc = 0x260334u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x260338: 0xc096970  jal         func_25A5C0
    ctx->pc = 0x260338u;
    SET_GPR_U32(ctx, 31, 0x260340u);
    ctx->pc = 0x26033Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260338u;
    // 0x26033c: 0x2444000a  addiu       $a0, $v0, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5C0u, 0x260338u, 0x260340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260340u;
label_260340:
    // 0x260340: 0x8e2329c0  lw          $v1, 0x29C0($s1)
    ctx->pc = 0x260340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10688)));
    // 0x260344: 0xa462000a  sh          $v0, 0xA($v1)
    ctx->pc = 0x260344u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 10), (uint16_t)GPR_U32(ctx, 2));
label_260348:
    // 0x260348: 0x8e0400c4  lw          $a0, 0xC4($s0)
    ctx->pc = 0x260348u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x26034c: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x26034cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x260350: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x260350u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x260354: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x260354u;
    {
        const bool branch_taken_0x260354 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x260354) {
            ctx->pc = 0x260398u;
            goto label_260398;
        }
    }
    ctx->pc = 0x26035Cu;
    // 0x26035c: 0x962406d6  lhu         $a0, 0x6D6($s1)
    ctx->pc = 0x26035cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1750)));
    // 0x260360: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x260360u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x260364: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x260364u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x260368: 0x0  nop
    ctx->pc = 0x260368u;
    // NOP
    // 0x26036c: 0x0  nop
    ctx->pc = 0x26036cu;
    // NOP
    // 0x260370: 0x1810  mfhi        $v1
    ctx->pc = 0x260370u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x260374: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x260374u;
    {
        const bool branch_taken_0x260374 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x260374) {
            ctx->pc = 0x260398u;
            goto label_260398;
        }
    }
    ctx->pc = 0x26037Cu;
    // 0x26037c: 0x8e2229c0  lw          $v0, 0x29C0($s1)
    ctx->pc = 0x26037cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10688)));
    // 0x260380: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x260380u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x260384: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x260384u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x260388: 0xc096974  jal         func_25A5D0
    ctx->pc = 0x260388u;
    SET_GPR_U32(ctx, 31, 0x260390u);
    ctx->pc = 0x26038Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260388u;
    // 0x26038c: 0x2445ffff  addiu       $a1, $v0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5D0u, 0x260388u, 0x260390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260390u;
label_260390:
    // 0x260390: 0x8e2329c0  lw          $v1, 0x29C0($s1)
    ctx->pc = 0x260390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10688)));
    // 0x260394: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x260394u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
label_260398:
    // 0x260398: 0x8e0300c4  lw          $v1, 0xC4($s0)
    ctx->pc = 0x260398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x26039c: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x26039cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x2603a0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2603A0u;
    {
        const bool branch_taken_0x2603a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2603A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2603A0u;
        // 0x2603a4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2603a0) {
            ctx->pc = 0x2603B0u;
            goto label_2603b0;
        }
    }
    ctx->pc = 0x2603A8u;
    // 0x2603a8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2603A8u;
    {
        const bool branch_taken_0x2603a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2603ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2603A8u;
        // 0x2603ac: 0xa2230236  sb          $v1, 0x236($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 566), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2603a8) {
            ctx->pc = 0x2603B8u;
            goto label_2603b8;
        }
    }
    ctx->pc = 0x2603B0u;
label_2603b0:
    // 0x2603b0: 0xa2200236  sb          $zero, 0x236($s1)
    ctx->pc = 0x2603b0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 566), (uint8_t)GPR_U32(ctx, 0));
    // 0x2603b4: 0x0  nop
    ctx->pc = 0x2603b4u;
    // NOP
label_2603b8:
    // 0x2603b8: 0x8e0300c4  lw          $v1, 0xC4($s0)
    ctx->pc = 0x2603b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x2603bc: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x2603bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x2603c0: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2603C0u;
    {
        const bool branch_taken_0x2603c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2603C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2603C0u;
        // 0x2603c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2603c0) {
            ctx->pc = 0x2603F8u;
            goto label_2603f8;
        }
    }
    ctx->pc = 0x2603C8u;
    // 0x2603c8: 0xc0a6998  jal         func_29A660
    ctx->pc = 0x2603C8u;
    SET_GPR_U32(ctx, 31, 0x2603D0u);
    ctx->pc = 0x29A660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A660u, 0x2603C8u, 0x2603D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2603D0u;
label_2603d0:
    // 0x2603d0: 0x8e2429c0  lw          $a0, 0x29C0($s1)
    ctx->pc = 0x2603d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10688)));
    // 0x2603d4: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2603d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2603d8: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x2603d8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x2603dc: 0x94840000  lhu         $a0, 0x0($a0)
    ctx->pc = 0x2603dcu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2603e0: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x2603e0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2603e4: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x2603E4u;
    {
        const bool branch_taken_0x2603e4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2603E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2603E4u;
        // 0x2603e8: 0x2403001e  addiu       $v1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2603e4) {
            ctx->pc = 0x2603F8u;
            goto label_2603f8;
        }
    }
    ctx->pc = 0x2603ECu;
    // 0x2603ec: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2603ECu;
    {
        const bool branch_taken_0x2603ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2603F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2603ECu;
        // 0x2603f0: 0xa22307bc  sb          $v1, 0x7BC($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1980), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2603ec) {
            ctx->pc = 0x260400u;
            goto label_260400;
        }
    }
    ctx->pc = 0x2603F4u;
    // 0x2603f4: 0x0  nop
    ctx->pc = 0x2603f4u;
    // NOP
label_2603f8:
    // 0x2603f8: 0xa22007bc  sb          $zero, 0x7BC($s1)
    ctx->pc = 0x2603f8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1980), (uint8_t)GPR_U32(ctx, 0));
    // 0x2603fc: 0x0  nop
    ctx->pc = 0x2603fcu;
    // NOP
label_260400:
    // 0x260400: 0x8e0300c4  lw          $v1, 0xC4($s0)
    ctx->pc = 0x260400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x260404: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x260404u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x260408: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x260408u;
    {
        const bool branch_taken_0x260408 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x26040Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260408u;
        // 0x26040c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260408) {
            ctx->pc = 0x260440u;
            goto label_260440;
        }
    }
    ctx->pc = 0x260410u;
    // 0x260410: 0xc0a6998  jal         func_29A660
    ctx->pc = 0x260410u;
    SET_GPR_U32(ctx, 31, 0x260418u);
    ctx->pc = 0x29A660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A660u, 0x260410u, 0x260418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260418u;
label_260418:
    // 0x260418: 0x8e2429c0  lw          $a0, 0x29C0($s1)
    ctx->pc = 0x260418u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10688)));
    // 0x26041c: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x26041cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x260420: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x260420u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x260424: 0x94840000  lhu         $a0, 0x0($a0)
    ctx->pc = 0x260424u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x260428: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x260428u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x26042c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x26042Cu;
    {
        const bool branch_taken_0x26042c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x260430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26042Cu;
        // 0x260430: 0x2403001e  addiu       $v1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26042c) {
            ctx->pc = 0x260440u;
            goto label_260440;
        }
    }
    ctx->pc = 0x260434u;
    // 0x260434: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x260434u;
    {
        const bool branch_taken_0x260434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x260438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260434u;
        // 0x260438: 0xa22307bd  sb          $v1, 0x7BD($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1981), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260434) {
            ctx->pc = 0x260448u;
            goto label_260448;
        }
    }
    ctx->pc = 0x26043Cu;
    // 0x26043c: 0x0  nop
    ctx->pc = 0x26043cu;
    // NOP
label_260440:
    // 0x260440: 0xa22007bd  sb          $zero, 0x7BD($s1)
    ctx->pc = 0x260440u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1981), (uint8_t)GPR_U32(ctx, 0));
    // 0x260444: 0x0  nop
    ctx->pc = 0x260444u;
    // NOP
label_260448:
    // 0x260448: 0x8e0300c4  lw          $v1, 0xC4($s0)
    ctx->pc = 0x260448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x26044c: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x26044cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x260450: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x260450u;
    {
        const bool branch_taken_0x260450 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x260450) {
            ctx->pc = 0x260478u;
            goto label_260478;
        }
    }
    ctx->pc = 0x260458u;
    // 0x260458: 0x962329de  lhu         $v1, 0x29DE($s1)
    ctx->pc = 0x260458u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 10718)));
    // 0x26045c: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x26045cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x260460: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x260460u;
    {
        const bool branch_taken_0x260460 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x260460) {
            ctx->pc = 0x260478u;
            goto label_260478;
        }
    }
    ctx->pc = 0x260468u;
    // 0x260468: 0x822307bc  lb          $v1, 0x7BC($s1)
    ctx->pc = 0x260468u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1980)));
    // 0x26046c: 0x24630032  addiu       $v1, $v1, 0x32
    ctx->pc = 0x26046cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 50));
    // 0x260470: 0xa22307bc  sb          $v1, 0x7BC($s1)
    ctx->pc = 0x260470u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1980), (uint8_t)GPR_U32(ctx, 3));
    // 0x260474: 0x0  nop
    ctx->pc = 0x260474u;
    // NOP
label_260478:
    // 0x260478: 0x8e2306ac  lw          $v1, 0x6AC($s1)
    ctx->pc = 0x260478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1708)));
    // 0x26047c: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x26047cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x260480: 0x10600053  beqz        $v1, . + 4 + (0x53 << 2)
    ctx->pc = 0x260480u;
    {
        const bool branch_taken_0x260480 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x260480) {
            ctx->pc = 0x2605D0u;
            goto label_2605d0;
        }
    }
    ctx->pc = 0x260488u;
    // 0x260488: 0xde240690  ld          $a0, 0x690($s1)
    ctx->pc = 0x260488u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 1680)));
    // 0x26048c: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x26048cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x260490: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x260490u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x260494: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x260494u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x260498: 0x1060004d  beqz        $v1, . + 4 + (0x4D << 2)
    ctx->pc = 0x260498u;
    {
        const bool branch_taken_0x260498 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x260498) {
            ctx->pc = 0x2605D0u;
            goto label_2605d0;
        }
    }
    ctx->pc = 0x2604A0u;
    // 0x2604a0: 0x12000035  beqz        $s0, . + 4 + (0x35 << 2)
    ctx->pc = 0x2604A0u;
    {
        const bool branch_taken_0x2604a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2604a0) {
            ctx->pc = 0x260578u;
            goto label_260578;
        }
    }
    ctx->pc = 0x2604A8u;
    // 0x2604a8: 0xc7818078  lwc1        $f1, -0x7F88($gp)
    ctx->pc = 0x2604a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2604ac: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x2604acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x2604b0: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x2604b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2604b4: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x2604b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x2604b8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2604b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2604bc: 0x0  nop
    ctx->pc = 0x2604bcu;
    // NOP
    // 0x2604c0: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x2604c0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x2604c4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2604c4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2604c8: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2604C8u;
    {
        const bool branch_taken_0x2604c8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2604c8) {
            ctx->pc = 0x2604E0u;
            goto label_2604e0;
        }
    }
    ctx->pc = 0x2604D0u;
    // 0x2604d0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2604d0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2604d4: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x2604d4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x2604d8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2604D8u;
    {
        const bool branch_taken_0x2604d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2604d8) {
            ctx->pc = 0x2604F8u;
            goto label_2604f8;
        }
    }
    ctx->pc = 0x2604E0u;
label_2604e0:
    // 0x2604e0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2604e0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2604e4: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2604e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x2604e8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2604e8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2604ec: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x2604ecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x2604f0: 0x0  nop
    ctx->pc = 0x2604f0u;
    // NOP
    // 0x2604f4: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x2604f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_2604f8:
    // 0x2604f8: 0x4a00004  bltz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2604F8u;
    {
        const bool branch_taken_0x2604f8 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x2604FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2604F8u;
        // 0x2604fc: 0x52042  srl         $a0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2604f8) {
            ctx->pc = 0x26050Cu;
            goto label_26050c;
        }
    }
    ctx->pc = 0x260500u;
    // 0x260500: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x260500u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x260504: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x260504u;
    {
        const bool branch_taken_0x260504 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x260508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260504u;
        // 0x260508: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x260504) {
            ctx->pc = 0x260524u;
            goto label_260524;
        }
    }
    ctx->pc = 0x26050Cu;
label_26050c:
    // 0x26050c: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x26050cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x260510: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x260510u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x260514: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x260514u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x260518: 0x0  nop
    ctx->pc = 0x260518u;
    // NOP
    // 0x26051c: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x26051cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x260520: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x260520u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_260524:
    // 0x260524: 0xc60100b0  lwc1        $f1, 0xB0($s0)
    ctx->pc = 0x260524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x260528: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x260528u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x26052c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x26052cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x260530: 0x0  nop
    ctx->pc = 0x260530u;
    // NOP
    // 0x260534: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x260534u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x260538: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x260538u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26053c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x26053Cu;
    {
        const bool branch_taken_0x26053c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26053c) {
            ctx->pc = 0x260554u;
            goto label_260554;
        }
    }
    ctx->pc = 0x260544u;
    // 0x260544: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x260544u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x260548: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x260548u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x26054c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x26054Cu;
    {
        const bool branch_taken_0x26054c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x260550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26054Cu;
        // 0x260550: 0xa6242ad0  sh          $a0, 0x2AD0($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 10960), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26054c) {
            ctx->pc = 0x260570u;
            goto label_260570;
        }
    }
    ctx->pc = 0x260554u;
label_260554:
    // 0x260554: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x260554u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x260558: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x260558u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x26055c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x26055cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x260560: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x260560u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x260564: 0x0  nop
    ctx->pc = 0x260564u;
    // NOP
    // 0x260568: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x260568u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x26056c: 0xa6242ad0  sh          $a0, 0x2AD0($s1)
    ctx->pc = 0x26056cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 10960), (uint16_t)GPR_U32(ctx, 4));
label_260570:
    // 0x260570: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x260570u;
    {
        const bool branch_taken_0x260570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x260570) {
            ctx->pc = 0x2605D0u;
            goto label_2605d0;
        }
    }
    ctx->pc = 0x260578u;
label_260578:
    // 0x260578: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x260578u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x26057c: 0xc7818078  lwc1        $f1, -0x7F88($gp)
    ctx->pc = 0x26057cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x260580: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x260580u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x260584: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x260584u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x260588: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x260588u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26058c: 0x0  nop
    ctx->pc = 0x26058cu;
    // NOP
    // 0x260590: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x260590u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x260594: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x260594u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x260598: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x260598u;
    {
        const bool branch_taken_0x260598 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x260598) {
            ctx->pc = 0x2605B0u;
            goto label_2605b0;
        }
    }
    ctx->pc = 0x2605A0u;
    // 0x2605a0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2605a0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2605a4: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2605a4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2605a8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2605A8u;
    {
        const bool branch_taken_0x2605a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2605ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2605A8u;
        // 0x2605ac: 0xa6242ad0  sh          $a0, 0x2AD0($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 10960), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2605a8) {
            ctx->pc = 0x2605CCu;
            goto label_2605cc;
        }
    }
    ctx->pc = 0x2605B0u;
label_2605b0:
    // 0x2605b0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2605b0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2605b4: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2605b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x2605b8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2605b8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2605bc: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2605bcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2605c0: 0x0  nop
    ctx->pc = 0x2605c0u;
    // NOP
    // 0x2605c4: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2605c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2605c8: 0xa6242ad0  sh          $a0, 0x2AD0($s1)
    ctx->pc = 0x2605c8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 10960), (uint16_t)GPR_U32(ctx, 4));
label_2605cc:
    // 0x2605cc: 0x0  nop
    ctx->pc = 0x2605ccu;
    // NOP
label_2605d0:
    // 0x2605d0: 0x8e2306ac  lw          $v1, 0x6AC($s1)
    ctx->pc = 0x2605d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1708)));
    // 0x2605d4: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x2605d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x2605d8: 0x10600023  beqz        $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x2605D8u;
    {
        const bool branch_taken_0x2605d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2605d8) {
            ctx->pc = 0x260668u;
            goto label_260668;
        }
    }
    ctx->pc = 0x2605E0u;
    // 0x2605e0: 0x8e2306c8  lw          $v1, 0x6C8($s1)
    ctx->pc = 0x2605e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1736)));
    // 0x2605e4: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2605e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2605e8: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x2605e8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2605ec: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2605ECu;
    {
        const bool branch_taken_0x2605ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2605ec) {
            ctx->pc = 0x260600u;
            goto label_260600;
        }
    }
    ctx->pc = 0x2605F4u;
    // 0x2605f4: 0x9223065c  lbu         $v1, 0x65C($s1)
    ctx->pc = 0x2605f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1628)));
    // 0x2605f8: 0x386300fb  xori        $v1, $v1, 0xFB
    ctx->pc = 0x2605f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)251);
    // 0x2605fc: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x2605fcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_260600:
    // 0x260600: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x260600u;
    {
        const bool branch_taken_0x260600 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x260600) {
            ctx->pc = 0x260668u;
            goto label_260668;
        }
    }
    ctx->pc = 0x260608u;
    // 0x260608: 0x92242ad8  lbu         $a0, 0x2AD8($s1)
    ctx->pc = 0x260608u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 10968)));
    // 0x26060c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x26060cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x260610: 0x10830015  beq         $a0, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x260610u;
    {
        const bool branch_taken_0x260610 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x260610) {
            ctx->pc = 0x260668u;
            goto label_260668;
        }
    }
    ctx->pc = 0x260618u;
    // 0x260618: 0xde240690  ld          $a0, 0x690($s1)
    ctx->pc = 0x260618u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 1680)));
    // 0x26061c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x26061cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x260620: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x260620u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x260624: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x260624u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x260628: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x260628u;
    {
        const bool branch_taken_0x260628 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x260628) {
            ctx->pc = 0x260668u;
            goto label_260668;
        }
    }
    ctx->pc = 0x260630u;
    // 0x260630: 0x8e2329c0  lw          $v1, 0x29C0($s1)
    ctx->pc = 0x260630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10688)));
    // 0x260634: 0x2464000a  addiu       $a0, $v1, 0xA
    ctx->pc = 0x260634u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
    // 0x260638: 0x9463000a  lhu         $v1, 0xA($v1)
    ctx->pc = 0x260638u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
    // 0x26063c: 0x28610047  slti        $at, $v1, 0x47
    ctx->pc = 0x26063cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)71) ? 1 : 0);
    // 0x260640: 0x14200007  bnez        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x260640u;
    {
        const bool branch_taken_0x260640 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x260640) {
            ctx->pc = 0x260660u;
            goto label_260660;
        }
    }
    ctx->pc = 0x260648u;
    // 0x260648: 0x2464ffc4  addiu       $a0, $v1, -0x3C
    ctx->pc = 0x260648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967236));
    // 0x26064c: 0xc096974  jal         func_25A5D0
    ctx->pc = 0x26064Cu;
    SET_GPR_U32(ctx, 31, 0x260654u);
    ctx->pc = 0x260650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26064Cu;
    // 0x260650: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5D0u, 0x26064Cu, 0x260654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260654u;
label_260654:
    // 0x260654: 0x8e2329c0  lw          $v1, 0x29C0($s1)
    ctx->pc = 0x260654u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10688)));
    // 0x260658: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x260658u;
    {
        const bool branch_taken_0x260658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26065Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260658u;
        // 0x26065c: 0xa462000a  sh          $v0, 0xA($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 10), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260658) {
            ctx->pc = 0x260668u;
            goto label_260668;
        }
    }
    ctx->pc = 0x260660u;
label_260660:
    // 0x260660: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x260660u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x260664: 0xa4830000  sh          $v1, 0x0($a0)
    ctx->pc = 0x260664u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
label_260668:
    // 0x260668: 0x8e232ab0  lw          $v1, 0x2AB0($s1)
    ctx->pc = 0x260668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10928)));
    // 0x26066c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x26066Cu;
    {
        const bool branch_taken_0x26066c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x26066c) {
            ctx->pc = 0x260680u;
            goto label_260680;
        }
    }
    ctx->pc = 0x260674u;
    // 0x260674: 0x8e2329c0  lw          $v1, 0x29C0($s1)
    ctx->pc = 0x260674u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10688)));
    // 0x260678: 0xa0600039  sb          $zero, 0x39($v1)
    ctx->pc = 0x260678u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 57), (uint8_t)GPR_U32(ctx, 0));
    // 0x26067c: 0x0  nop
    ctx->pc = 0x26067cu;
    // NOP
label_260680:
    // 0x260680: 0x8e232ab0  lw          $v1, 0x2AB0($s1)
    ctx->pc = 0x260680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10928)));
    // 0x260684: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x260684u;
    {
        const bool branch_taken_0x260684 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x260684) {
            ctx->pc = 0x2606A8u;
            goto label_2606a8;
        }
    }
    ctx->pc = 0x26068Cu;
    // 0x26068c: 0x8c6329c0  lw          $v1, 0x29C0($v1)
    ctx->pc = 0x26068cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 10688)));
    // 0x260690: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x260690u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x260694: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x260694u;
    {
        const bool branch_taken_0x260694 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x260694) {
            ctx->pc = 0x2606A8u;
            goto label_2606a8;
        }
    }
    ctx->pc = 0x26069Cu;
    // 0x26069c: 0x8e2329c0  lw          $v1, 0x29C0($s1)
    ctx->pc = 0x26069cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10688)));
    // 0x2606a0: 0xa0600039  sb          $zero, 0x39($v1)
    ctx->pc = 0x2606a0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 57), (uint8_t)GPR_U32(ctx, 0));
    // 0x2606a4: 0x0  nop
    ctx->pc = 0x2606a4u;
    // NOP
label_2606a8:
    // 0x2606a8: 0x8e2306c8  lw          $v1, 0x6C8($s1)
    ctx->pc = 0x2606a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1736)));
    // 0x2606ac: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x2606acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x2606b0: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x2606B0u;
    {
        const bool branch_taken_0x2606b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2606b0) {
            ctx->pc = 0x2606E0u;
            goto label_2606e0;
        }
    }
    ctx->pc = 0x2606B8u;
    // 0x2606b8: 0x92232adb  lbu         $v1, 0x2ADB($s1)
    ctx->pc = 0x2606b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 10971)));
    // 0x2606bc: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2606bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2606c0: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x2606C0u;
    {
        const bool branch_taken_0x2606c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2606C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2606C0u;
        // 0x2606c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2606c0) {
            ctx->pc = 0x260708u;
            goto label_260708;
        }
    }
    ctx->pc = 0x2606C8u;
    // 0x2606c8: 0xc0bfae0  jal         func_2FEB80
    ctx->pc = 0x2606C8u;
    SET_GPR_U32(ctx, 31, 0x2606D0u);
    ctx->pc = 0x2606CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2606C8u;
    // 0x2606cc: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FEB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FEB80u, 0x2606C8u, 0x2606D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2606D0u;
label_2606d0:
    // 0x2606d0: 0x92232adb  lbu         $v1, 0x2ADB($s1)
    ctx->pc = 0x2606d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 10971)));
    // 0x2606d4: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x2606d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x2606d8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2606D8u;
    {
        const bool branch_taken_0x2606d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2606DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2606D8u;
        // 0x2606dc: 0xa2232adb  sb          $v1, 0x2ADB($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 10971), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2606d8) {
            ctx->pc = 0x260708u;
            goto label_260708;
        }
    }
    ctx->pc = 0x2606E0u;
label_2606e0:
    // 0x2606e0: 0x92232adb  lbu         $v1, 0x2ADB($s1)
    ctx->pc = 0x2606e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 10971)));
    // 0x2606e4: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2606e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2606e8: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2606E8u;
    {
        const bool branch_taken_0x2606e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2606ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2606E8u;
        // 0x2606ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2606e8) {
            ctx->pc = 0x260708u;
            goto label_260708;
        }
    }
    ctx->pc = 0x2606F0u;
    // 0x2606f0: 0xc0bfae0  jal         func_2FEB80
    ctx->pc = 0x2606F0u;
    SET_GPR_U32(ctx, 31, 0x2606F8u);
    ctx->pc = 0x2606F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2606F0u;
    // 0x2606f4: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FEB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FEB80u, 0x2606F0u, 0x2606F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2606F8u;
label_2606f8:
    // 0x2606f8: 0x92232adb  lbu         $v1, 0x2ADB($s1)
    ctx->pc = 0x2606f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 10971)));
    // 0x2606fc: 0x306300fe  andi        $v1, $v1, 0xFE
    ctx->pc = 0x2606fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)254);
    // 0x260700: 0xa2232adb  sb          $v1, 0x2ADB($s1)
    ctx->pc = 0x260700u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 10971), (uint8_t)GPR_U32(ctx, 3));
    // 0x260704: 0x0  nop
    ctx->pc = 0x260704u;
    // NOP
label_260708:
    // 0x260708: 0x8e2329c0  lw          $v1, 0x29C0($s1)
    ctx->pc = 0x260708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10688)));
    // 0x26070c: 0x3c040008  lui         $a0, 0x8
    ctx->pc = 0x26070cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8 << 16));
    // 0x260710: 0x8c630024  lw          $v1, 0x24($v1)
    ctx->pc = 0x260710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x260714: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x260714u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x260718: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x260718u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x26071c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x26071cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x260720: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x260720u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x260724: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x260724u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x260728: 0x10600047  beqz        $v1, . + 4 + (0x47 << 2)
    ctx->pc = 0x260728u;
    {
        const bool branch_taken_0x260728 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x260728) {
            ctx->pc = 0x260848u;
            goto label_260848;
        }
    }
    ctx->pc = 0x260730u;
    // 0x260730: 0x96232ad0  lhu         $v1, 0x2AD0($s1)
    ctx->pc = 0x260730u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 10960)));
    // 0x260734: 0x10600036  beqz        $v1, . + 4 + (0x36 << 2)
    ctx->pc = 0x260734u;
    {
        const bool branch_taken_0x260734 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x260734) {
            ctx->pc = 0x260810u;
            goto label_260810;
        }
    }
    ctx->pc = 0x26073Cu;
    // 0x26073c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x26073cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x260740: 0xa6232ad0  sh          $v1, 0x2AD0($s1)
    ctx->pc = 0x260740u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 10960), (uint16_t)GPR_U32(ctx, 3));
    // 0x260744: 0x96232ad0  lhu         $v1, 0x2AD0($s1)
    ctx->pc = 0x260744u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 10960)));
    // 0x260748: 0x14600021  bnez        $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x260748u;
    {
        const bool branch_taken_0x260748 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x260748) {
            ctx->pc = 0x2607D0u;
            goto label_2607d0;
        }
    }
    ctx->pc = 0x260750u;
    // 0x260750: 0x8e2329c8  lw          $v1, 0x29C8($s1)
    ctx->pc = 0x260750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10696)));
    // 0x260754: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x260754u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x260758: 0xae2329c8  sw          $v1, 0x29C8($s1)
    ctx->pc = 0x260758u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 10696), GPR_U32(ctx, 3));
    // 0x26075c: 0x92232adb  lbu         $v1, 0x2ADB($s1)
    ctx->pc = 0x26075cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 10971)));
    // 0x260760: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x260760u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x260764: 0x1460003a  bnez        $v1, . + 4 + (0x3A << 2)
    ctx->pc = 0x260764u;
    {
        const bool branch_taken_0x260764 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x260764) {
            ctx->pc = 0x260850u;
            goto label_260850;
        }
    }
    ctx->pc = 0x26076Cu;
    // 0x26076c: 0x922308e8  lbu         $v1, 0x8E8($s1)
    ctx->pc = 0x26076cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2280)));
    // 0x260770: 0x3c021a00  lui         $v0, 0x1A00
    ctx->pc = 0x260770u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)6656 << 16));
    // 0x260774: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x260774u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x260778: 0x34450500  ori         $a1, $v0, 0x500
    ctx->pc = 0x260778u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1280);
    // 0x26077c: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x26077cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x260780: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x260780u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260784: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x260784u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260788: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x260788u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26078c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x26078cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260790: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x260790u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260794: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x260794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x260798: 0x8e22004c  lw          $v0, 0x4C($s1)
    ctx->pc = 0x260798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x26079c: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x26079cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x2607a0: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x2607A0u;
    SET_GPR_U32(ctx, 31, 0x2607A8u);
    ctx->pc = 0x2607A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2607A0u;
    // 0x2607a4: 0x24470030  addiu       $a3, $v0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x2607A0u, 0x2607A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2607A8u;
label_2607a8:
    // 0x2607a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2607a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2607ac: 0xc0bfae0  jal         func_2FEB80
    ctx->pc = 0x2607ACu;
    SET_GPR_U32(ctx, 31, 0x2607B4u);
    ctx->pc = 0x2607B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2607ACu;
    // 0x2607b0: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FEB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FEB80u, 0x2607ACu, 0x2607B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2607B4u;
label_2607b4:
    // 0x2607b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2607b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2607b8: 0xc0bfae0  jal         func_2FEB80
    ctx->pc = 0x2607B8u;
    SET_GPR_U32(ctx, 31, 0x2607C0u);
    ctx->pc = 0x2607BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2607B8u;
    // 0x2607bc: 0x24050016  addiu       $a1, $zero, 0x16 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FEB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FEB80u, 0x2607B8u, 0x2607C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2607C0u;
label_2607c0:
    // 0x2607c0: 0x92232adb  lbu         $v1, 0x2ADB($s1)
    ctx->pc = 0x2607c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 10971)));
    // 0x2607c4: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x2607c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x2607c8: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x2607C8u;
    {
        const bool branch_taken_0x2607c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2607CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2607C8u;
        // 0x2607cc: 0xa2232adb  sb          $v1, 0x2ADB($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 10971), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2607c8) {
            ctx->pc = 0x260850u;
            goto label_260850;
        }
    }
    ctx->pc = 0x2607D0u;
label_2607d0:
    // 0x2607d0: 0x8e2429c8  lw          $a0, 0x29C8($s1)
    ctx->pc = 0x2607d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10696)));
    // 0x2607d4: 0x3c03fff7  lui         $v1, 0xFFF7
    ctx->pc = 0x2607d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65527 << 16));
    // 0x2607d8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2607d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2607dc: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2607dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2607e0: 0xae2329c8  sw          $v1, 0x29C8($s1)
    ctx->pc = 0x2607e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 10696), GPR_U32(ctx, 3));
    // 0x2607e4: 0x92232adb  lbu         $v1, 0x2ADB($s1)
    ctx->pc = 0x2607e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 10971)));
    // 0x2607e8: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x2607e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x2607ec: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x2607ECu;
    {
        const bool branch_taken_0x2607ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2607F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2607ECu;
        // 0x2607f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2607ec) {
            ctx->pc = 0x260850u;
            goto label_260850;
        }
    }
    ctx->pc = 0x2607F4u;
    // 0x2607f4: 0xc0bfae0  jal         func_2FEB80
    ctx->pc = 0x2607F4u;
    SET_GPR_U32(ctx, 31, 0x2607FCu);
    ctx->pc = 0x2607F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2607F4u;
    // 0x2607f8: 0x24050017  addiu       $a1, $zero, 0x17 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FEB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FEB80u, 0x2607F4u, 0x2607FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2607FCu;
label_2607fc:
    // 0x2607fc: 0x92232adb  lbu         $v1, 0x2ADB($s1)
    ctx->pc = 0x2607fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 10971)));
    // 0x260800: 0x306300fd  andi        $v1, $v1, 0xFD
    ctx->pc = 0x260800u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)253);
    // 0x260804: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x260804u;
    {
        const bool branch_taken_0x260804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x260808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260804u;
        // 0x260808: 0xa2232adb  sb          $v1, 0x2ADB($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 10971), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260804) {
            ctx->pc = 0x260850u;
            goto label_260850;
        }
    }
    ctx->pc = 0x26080Cu;
    // 0x26080c: 0x0  nop
    ctx->pc = 0x26080cu;
    // NOP
label_260810:
    // 0x260810: 0x8e2329c8  lw          $v1, 0x29C8($s1)
    ctx->pc = 0x260810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10696)));
    // 0x260814: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x260814u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x260818: 0xae2329c8  sw          $v1, 0x29C8($s1)
    ctx->pc = 0x260818u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 10696), GPR_U32(ctx, 3));
    // 0x26081c: 0x92232adb  lbu         $v1, 0x2ADB($s1)
    ctx->pc = 0x26081cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 10971)));
    // 0x260820: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x260820u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x260824: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x260824u;
    {
        const bool branch_taken_0x260824 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x260824) {
            ctx->pc = 0x260850u;
            goto label_260850;
        }
    }
    ctx->pc = 0x26082Cu;
    // 0x26082c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26082cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260830: 0xc0bfae0  jal         func_2FEB80
    ctx->pc = 0x260830u;
    SET_GPR_U32(ctx, 31, 0x260838u);
    ctx->pc = 0x260834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260830u;
    // 0x260834: 0x24050016  addiu       $a1, $zero, 0x16 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FEB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FEB80u, 0x260830u, 0x260838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260838u;
label_260838:
    // 0x260838: 0x92232adb  lbu         $v1, 0x2ADB($s1)
    ctx->pc = 0x260838u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 10971)));
    // 0x26083c: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x26083cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x260840: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x260840u;
    {
        const bool branch_taken_0x260840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x260844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260840u;
        // 0x260844: 0xa2232adb  sb          $v1, 0x2ADB($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 10971), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260840) {
            ctx->pc = 0x260850u;
            goto label_260850;
        }
    }
    ctx->pc = 0x260848u;
label_260848:
    // 0x260848: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x260848u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26084c: 0xa6232ad0  sh          $v1, 0x2AD0($s1)
    ctx->pc = 0x26084cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 10960), (uint16_t)GPR_U32(ctx, 3));
label_260850:
    // 0x260850: 0x96230786  lhu         $v1, 0x786($s1)
    ctx->pc = 0x260850u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1926)));
    // 0x260854: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x260854u;
    {
        const bool branch_taken_0x260854 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x260854) {
            ctx->pc = 0x260868u;
            goto label_260868;
        }
    }
    ctx->pc = 0x26085Cu;
    // 0x26085c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x26085cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x260860: 0xa6230786  sh          $v1, 0x786($s1)
    ctx->pc = 0x260860u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1926), (uint16_t)GPR_U32(ctx, 3));
    // 0x260864: 0x0  nop
    ctx->pc = 0x260864u;
    // NOP
label_260868:
    // 0x260868: 0x8e2306c8  lw          $v1, 0x6C8($s1)
    ctx->pc = 0x260868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1736)));
    // 0x26086c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x26086cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x260870: 0x106000eb  beqz        $v1, . + 4 + (0xEB << 2)
    ctx->pc = 0x260870u;
    {
        const bool branch_taken_0x260870 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x260870) {
            ctx->pc = 0x260C20u;
            goto label_260c20;
        }
    }
    ctx->pc = 0x260878u;
    // 0x260878: 0x92242ad8  lbu         $a0, 0x2AD8($s1)
    ctx->pc = 0x260878u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 10968)));
    // 0x26087c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x26087cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x260880: 0x1083005f  beq         $a0, $v1, . + 4 + (0x5F << 2)
    ctx->pc = 0x260880u;
    {
        const bool branch_taken_0x260880 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x260884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260880u;
        // 0x260884: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260880) {
            ctx->pc = 0x260A00u;
            goto label_260a00;
        }
    }
    ctx->pc = 0x260888u;
    // 0x260888: 0x10830061  beq         $a0, $v1, . + 4 + (0x61 << 2)
    ctx->pc = 0x260888u;
    {
        const bool branch_taken_0x260888 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x260888) {
            ctx->pc = 0x260A10u;
            goto label_260a10;
        }
    }
    ctx->pc = 0x260890u;
    // 0x260890: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x260890u;
    {
        const bool branch_taken_0x260890 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x260890) {
            ctx->pc = 0x2608A0u;
            goto label_2608a0;
        }
    }
    ctx->pc = 0x260898u;
    // 0x260898: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x260898u;
    {
        const bool branch_taken_0x260898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x260898) {
            ctx->pc = 0x260A10u;
            goto label_260a10;
        }
    }
    ctx->pc = 0x2608A0u;
label_2608a0:
    // 0x2608a0: 0x9223065c  lbu         $v1, 0x65C($s1)
    ctx->pc = 0x2608a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1628)));
    // 0x2608a4: 0x240400fb  addiu       $a0, $zero, 0xFB
    ctx->pc = 0x2608a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 251));
    // 0x2608a8: 0x1064003b  beq         $v1, $a0, . + 4 + (0x3B << 2)
    ctx->pc = 0x2608A8u;
    {
        const bool branch_taken_0x2608a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x2608a8) {
            ctx->pc = 0x260998u;
            goto label_260998;
        }
    }
    ctx->pc = 0x2608B0u;
    // 0x2608b0: 0x92230780  lbu         $v1, 0x780($s1)
    ctx->pc = 0x2608b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1920)));
    // 0x2608b4: 0x10640038  beq         $v1, $a0, . + 4 + (0x38 << 2)
    ctx->pc = 0x2608B4u;
    {
        const bool branch_taken_0x2608b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x2608b4) {
            ctx->pc = 0x260998u;
            goto label_260998;
        }
    }
    ctx->pc = 0x2608BCu;
    // 0x2608bc: 0x12000022  beqz        $s0, . + 4 + (0x22 << 2)
    ctx->pc = 0x2608BCu;
    {
        const bool branch_taken_0x2608bc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2608bc) {
            ctx->pc = 0x260948u;
            goto label_260948;
        }
    }
    ctx->pc = 0x2608C4u;
    // 0x2608c4: 0xc60000ac  lwc1        $f0, 0xAC($s0)
    ctx->pc = 0x2608c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2608c8: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x2608c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x2608cc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2608ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2608d0: 0x86232ace  lh          $v1, 0x2ACE($s1)
    ctx->pc = 0x2608d0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 10958)));
    // 0x2608d4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2608d4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2608d8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2608d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2608dc: 0x0  nop
    ctx->pc = 0x2608dcu;
    // NOP
    // 0x2608e0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2608e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2608e4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2608e4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2608e8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2608e8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2608ec: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x2608ecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2608f0: 0x0  nop
    ctx->pc = 0x2608f0u;
    // NOP
    // 0x2608f4: 0xa6232ace  sh          $v1, 0x2ACE($s1)
    ctx->pc = 0x2608f4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 10958), (uint16_t)GPR_U32(ctx, 3));
    // 0x2608f8: 0x86232ace  lh          $v1, 0x2ACE($s1)
    ctx->pc = 0x2608f8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 10958)));
    // 0x2608fc: 0x461001a  bgez        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x2608FCu;
    {
        const bool branch_taken_0x2608fc = (GPR_S64(ctx, 3) >= 0);
        if (branch_taken_0x2608fc) {
            ctx->pc = 0x260968u;
            goto label_260968;
        }
    }
    ctx->pc = 0x260904u;
    // 0x260904: 0x0  nop
    ctx->pc = 0x260904u;
    // NOP
label_260908:
    // 0x260908: 0x86222ace  lh          $v0, 0x2ACE($s1)
    ctx->pc = 0x260908u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 10958)));
    // 0x26090c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x26090cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260910: 0x24420064  addiu       $v0, $v0, 0x64
    ctx->pc = 0x260910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
    // 0x260914: 0xa6222ace  sh          $v0, 0x2ACE($s1)
    ctx->pc = 0x260914u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 10958), (uint16_t)GPR_U32(ctx, 2));
    // 0x260918: 0x8e2229c0  lw          $v0, 0x29C0($s1)
    ctx->pc = 0x260918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10688)));
    // 0x26091c: 0x9442000a  lhu         $v0, 0xA($v0)
    ctx->pc = 0x26091cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x260920: 0xc096974  jal         func_25A5D0
    ctx->pc = 0x260920u;
    SET_GPR_U32(ctx, 31, 0x260928u);
    ctx->pc = 0x260924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260920u;
    // 0x260924: 0x2444ffff  addiu       $a0, $v0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5D0u, 0x260920u, 0x260928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260928u;
label_260928:
    // 0x260928: 0x8e2329c0  lw          $v1, 0x29C0($s1)
    ctx->pc = 0x260928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10688)));
    // 0x26092c: 0xa462000a  sh          $v0, 0xA($v1)
    ctx->pc = 0x26092cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x260930: 0x86232ace  lh          $v1, 0x2ACE($s1)
    ctx->pc = 0x260930u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 10958)));
    // 0x260934: 0x460fff4  bltz        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x260934u;
    {
        const bool branch_taken_0x260934 = (GPR_S64(ctx, 3) < 0);
        if (branch_taken_0x260934) {
            ctx->pc = 0x260908u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_260908;
        }
    }
    ctx->pc = 0x26093Cu;
    // 0x26093c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x26093Cu;
    {
        const bool branch_taken_0x26093c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26093c) {
            ctx->pc = 0x260968u;
            goto label_260968;
        }
    }
    ctx->pc = 0x260944u;
    // 0x260944: 0x0  nop
    ctx->pc = 0x260944u;
    // NOP
label_260948:
    // 0x260948: 0x8e2229c0  lw          $v0, 0x29C0($s1)
    ctx->pc = 0x260948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10688)));
    // 0x26094c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x26094cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260950: 0x9442000a  lhu         $v0, 0xA($v0)
    ctx->pc = 0x260950u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x260954: 0xc096974  jal         func_25A5D0
    ctx->pc = 0x260954u;
    SET_GPR_U32(ctx, 31, 0x26095Cu);
    ctx->pc = 0x260958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260954u;
    // 0x260958: 0x2444ffff  addiu       $a0, $v0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5D0u, 0x260954u, 0x26095Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26095Cu;
label_26095c:
    // 0x26095c: 0x8e2329c0  lw          $v1, 0x29C0($s1)
    ctx->pc = 0x26095cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10688)));
    // 0x260960: 0xa462000a  sh          $v0, 0xA($v1)
    ctx->pc = 0x260960u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x260964: 0x0  nop
    ctx->pc = 0x260964u;
    // NOP
label_260968:
    // 0x260968: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x260968u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x26096c: 0x8c23cebc  lw          $v1, -0x3144($at)
    ctx->pc = 0x26096cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x260970: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x260970u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x260974: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x260974u;
    {
        const bool branch_taken_0x260974 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x260974) {
            ctx->pc = 0x260998u;
            goto label_260998;
        }
    }
    ctx->pc = 0x26097Cu;
    // 0x26097c: 0x8e2229c0  lw          $v0, 0x29C0($s1)
    ctx->pc = 0x26097cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10688)));
    // 0x260980: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x260980u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260984: 0x9442000a  lhu         $v0, 0xA($v0)
    ctx->pc = 0x260984u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x260988: 0xc096974  jal         func_25A5D0
    ctx->pc = 0x260988u;
    SET_GPR_U32(ctx, 31, 0x260990u);
    ctx->pc = 0x26098Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260988u;
    // 0x26098c: 0x2444fffd  addiu       $a0, $v0, -0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967293));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5D0u, 0x260988u, 0x260990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260990u;
label_260990:
    // 0x260990: 0x8e2329c0  lw          $v1, 0x29C0($s1)
    ctx->pc = 0x260990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10688)));
    // 0x260994: 0xa462000a  sh          $v0, 0xA($v1)
    ctx->pc = 0x260994u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 10), (uint16_t)GPR_U32(ctx, 2));
label_260998:
    // 0x260998: 0x8e2429c0  lw          $a0, 0x29C0($s1)
    ctx->pc = 0x260998u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10688)));
    // 0x26099c: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x26099cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2609a0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2609A0u;
    {
        const bool branch_taken_0x2609a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2609A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2609A0u;
        // 0x2609a4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2609a0) {
            ctx->pc = 0x2609B0u;
            goto label_2609b0;
        }
    }
    ctx->pc = 0x2609A8u;
    // 0x2609a8: 0xa4830000  sh          $v1, 0x0($a0)
    ctx->pc = 0x2609a8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x2609ac: 0x0  nop
    ctx->pc = 0x2609acu;
    // NOP
label_2609b0:
    // 0x2609b0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2609b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2609b4: 0x8c23cebc  lw          $v1, -0x3144($at)
    ctx->pc = 0x2609b4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x2609b8: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x2609b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x2609bc: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x2609BCu;
    {
        const bool branch_taken_0x2609bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2609bc) {
            ctx->pc = 0x260A10u;
            goto label_260a10;
        }
    }
    ctx->pc = 0x2609C4u;
    // 0x2609c4: 0x962306d6  lhu         $v1, 0x6D6($s1)
    ctx->pc = 0x2609c4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1750)));
    // 0x2609c8: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2609c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2609cc: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x2609CCu;
    {
        const bool branch_taken_0x2609cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2609D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2609CCu;
        // 0x2609d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2609cc) {
            ctx->pc = 0x260A10u;
            goto label_260a10;
        }
    }
    ctx->pc = 0x2609D4u;
    // 0x2609d4: 0xc0a6998  jal         func_29A660
    ctx->pc = 0x2609D4u;
    SET_GPR_U32(ctx, 31, 0x2609DCu);
    ctx->pc = 0x29A660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A660u, 0x2609D4u, 0x2609DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2609DCu;
label_2609dc:
    // 0x2609dc: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x2609dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2609e0: 0x8e2229c0  lw          $v0, 0x29C0($s1)
    ctx->pc = 0x2609e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10688)));
    // 0x2609e4: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x2609e4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2609e8: 0xc096970  jal         func_25A5C0
    ctx->pc = 0x2609E8u;
    SET_GPR_U32(ctx, 31, 0x2609F0u);
    ctx->pc = 0x2609ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2609E8u;
    // 0x2609ec: 0x24440001  addiu       $a0, $v0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5C0u, 0x2609E8u, 0x2609F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2609F0u;
label_2609f0:
    // 0x2609f0: 0x8e2329c0  lw          $v1, 0x29C0($s1)
    ctx->pc = 0x2609f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10688)));
    // 0x2609f4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2609F4u;
    {
        const bool branch_taken_0x2609f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2609F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2609F4u;
        // 0x2609f8: 0xa4620000  sh          $v0, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2609f4) {
            ctx->pc = 0x260A10u;
            goto label_260a10;
        }
    }
    ctx->pc = 0x2609FCu;
    // 0x2609fc: 0x0  nop
    ctx->pc = 0x2609fcu;
    // NOP
label_260a00:
    // 0x260a00: 0xc0a6998  jal         func_29A660
    ctx->pc = 0x260A00u;
    SET_GPR_U32(ctx, 31, 0x260A08u);
    ctx->pc = 0x260A04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260A00u;
    // 0x260a04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A660u, 0x260A00u, 0x260A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260A08u;
label_260a08:
    // 0x260a08: 0x8e2329c0  lw          $v1, 0x29C0($s1)
    ctx->pc = 0x260a08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10688)));
    // 0x260a0c: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x260a0cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
label_260a10:
    // 0x260a10: 0x8e2329c0  lw          $v1, 0x29C0($s1)
    ctx->pc = 0x260a10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10688)));
    // 0x260a14: 0x9463000a  lhu         $v1, 0xA($v1)
    ctx->pc = 0x260a14u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
    // 0x260a18: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x260A18u;
    {
        const bool branch_taken_0x260a18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x260a18) {
            ctx->pc = 0x260A30u;
            goto label_260a30;
        }
    }
    ctx->pc = 0x260A20u;
    // 0x260a20: 0x92232ad8  lbu         $v1, 0x2AD8($s1)
    ctx->pc = 0x260a20u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 10968)));
    // 0x260a24: 0x1060007c  beqz        $v1, . + 4 + (0x7C << 2)
    ctx->pc = 0x260A24u;
    {
        const bool branch_taken_0x260a24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x260a24) {
            ctx->pc = 0x260C18u;
            goto label_260c18;
        }
    }
    ctx->pc = 0x260A2Cu;
    // 0x260a2c: 0x0  nop
    ctx->pc = 0x260a2cu;
    // NOP
label_260a30:
    // 0x260a30: 0x8e2306c8  lw          $v1, 0x6C8($s1)
    ctx->pc = 0x260a30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1736)));
    // 0x260a34: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x260a34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x260a38: 0x10600073  beqz        $v1, . + 4 + (0x73 << 2)
    ctx->pc = 0x260A38u;
    {
        const bool branch_taken_0x260a38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x260a38) {
            ctx->pc = 0x260C08u;
            goto label_260c08;
        }
    }
    ctx->pc = 0x260A40u;
    // 0x260a40: 0x92240002  lbu         $a0, 0x2($s1)
    ctx->pc = 0x260a40u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x260a44: 0x24030024  addiu       $v1, $zero, 0x24
    ctx->pc = 0x260a44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x260a48: 0x10830061  beq         $a0, $v1, . + 4 + (0x61 << 2)
    ctx->pc = 0x260A48u;
    {
        const bool branch_taken_0x260a48 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x260A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260A48u;
        // 0x260a4c: 0x24030023  addiu       $v1, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260a48) {
            ctx->pc = 0x260BD0u;
            goto label_260bd0;
        }
    }
    ctx->pc = 0x260A50u;
    // 0x260a50: 0x1083005b  beq         $a0, $v1, . + 4 + (0x5B << 2)
    ctx->pc = 0x260A50u;
    {
        const bool branch_taken_0x260a50 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x260a50) {
            ctx->pc = 0x260BC0u;
            goto label_260bc0;
        }
    }
    ctx->pc = 0x260A58u;
    // 0x260a58: 0x24030021  addiu       $v1, $zero, 0x21
    ctx->pc = 0x260a58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x260a5c: 0x10830020  beq         $a0, $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x260A5Cu;
    {
        const bool branch_taken_0x260a5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x260A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260A5Cu;
        // 0x260a60: 0x24030010  addiu       $v1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260a5c) {
            ctx->pc = 0x260AE0u;
            goto label_260ae0;
        }
    }
    ctx->pc = 0x260A64u;
    // 0x260a64: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x260A64u;
    {
        const bool branch_taken_0x260a64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x260a64) {
            ctx->pc = 0x260A78u;
            goto label_260a78;
        }
    }
    ctx->pc = 0x260A6Cu;
    // 0x260a6c: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x260A6Cu;
    {
        const bool branch_taken_0x260a6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x260a6c) {
            ctx->pc = 0x260BF8u;
            goto label_260bf8;
        }
    }
    ctx->pc = 0x260A74u;
    // 0x260a74: 0x0  nop
    ctx->pc = 0x260a74u;
    // NOP
label_260a78:
    // 0x260a78: 0x8e2704cc  lw          $a3, 0x4CC($s1)
    ctx->pc = 0x260a78u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1228)));
    // 0x260a7c: 0x2406ffdf  addiu       $a2, $zero, -0x21
    ctx->pc = 0x260a7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
    // 0x260a80: 0x2405feff  addiu       $a1, $zero, -0x101
    ctx->pc = 0x260a80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967039));
    // 0x260a84: 0x2404dfff  addiu       $a0, $zero, -0x2001
    ctx->pc = 0x260a84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294959103));
    // 0x260a88: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x260a88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x260a8c: 0xe63024  and         $a2, $a3, $a2
    ctx->pc = 0x260a8cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & GPR_U64(ctx, 6));
    // 0x260a90: 0xae2604cc  sw          $a2, 0x4CC($s1)
    ctx->pc = 0x260a90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1228), GPR_U32(ctx, 6));
    // 0x260a94: 0x8e2604cc  lw          $a2, 0x4CC($s1)
    ctx->pc = 0x260a94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1228)));
    // 0x260a98: 0xc52824  and         $a1, $a2, $a1
    ctx->pc = 0x260a98u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    // 0x260a9c: 0xae2504cc  sw          $a1, 0x4CC($s1)
    ctx->pc = 0x260a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1228), GPR_U32(ctx, 5));
    // 0x260aa0: 0x8e2504cc  lw          $a1, 0x4CC($s1)
    ctx->pc = 0x260aa0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1228)));
    // 0x260aa4: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x260aa4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x260aa8: 0xae2404cc  sw          $a0, 0x4CC($s1)
    ctx->pc = 0x260aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1228), GPR_U32(ctx, 4));
    // 0x260aac: 0x8e2404cc  lw          $a0, 0x4CC($s1)
    ctx->pc = 0x260aacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1228)));
    // 0x260ab0: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x260ab0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x260ab4: 0xae2304cc  sw          $v1, 0x4CC($s1)
    ctx->pc = 0x260ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1228), GPR_U32(ctx, 3));
    // 0x260ab8: 0x92232ad8  lbu         $v1, 0x2AD8($s1)
    ctx->pc = 0x260ab8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 10968)));
    // 0x260abc: 0x1460004e  bnez        $v1, . + 4 + (0x4E << 2)
    ctx->pc = 0x260ABCu;
    {
        const bool branch_taken_0x260abc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x260abc) {
            ctx->pc = 0x260BF8u;
            goto label_260bf8;
        }
    }
    ctx->pc = 0x260AC4u;
    // 0x260ac4: 0x96232ad0  lhu         $v1, 0x2AD0($s1)
    ctx->pc = 0x260ac4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 10960)));
    // 0x260ac8: 0x28610003  slti        $at, $v1, 0x3
    ctx->pc = 0x260ac8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x260acc: 0x1420004a  bnez        $at, . + 4 + (0x4A << 2)
    ctx->pc = 0x260ACCu;
    {
        const bool branch_taken_0x260acc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x260AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260ACCu;
        // 0x260ad0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260acc) {
            ctx->pc = 0x260BF8u;
            goto label_260bf8;
        }
    }
    ctx->pc = 0x260AD4u;
    // 0x260ad4: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x260AD4u;
    {
        const bool branch_taken_0x260ad4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x260AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260AD4u;
        // 0x260ad8: 0xa6232ad0  sh          $v1, 0x2AD0($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 10960), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260ad4) {
            ctx->pc = 0x260BF8u;
            goto label_260bf8;
        }
    }
    ctx->pc = 0x260ADCu;
    // 0x260adc: 0x0  nop
    ctx->pc = 0x260adcu;
    // NOP
label_260ae0:
    // 0x260ae0: 0x96242ad2  lhu         $a0, 0x2AD2($s1)
    ctx->pc = 0x260ae0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 10962)));
    // 0x260ae4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x260ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x260ae8: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x260ae8u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x260aec: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x260aecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x260af0: 0xa6232ad2  sh          $v1, 0x2AD2($s1)
    ctx->pc = 0x260af0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 10962), (uint16_t)GPR_U32(ctx, 3));
    // 0x260af4: 0x1810  mfhi        $v1
    ctx->pc = 0x260af4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x260af8: 0x1060003f  beqz        $v1, . + 4 + (0x3F << 2)
    ctx->pc = 0x260AF8u;
    {
        const bool branch_taken_0x260af8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x260AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260AF8u;
        // 0x260afc: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260af8) {
            ctx->pc = 0x260BF8u;
            goto label_260bf8;
        }
    }
    ctx->pc = 0x260B00u;
    // 0x260b00: 0x8c22cebc  lw          $v0, -0x3144($at)
    ctx->pc = 0x260b00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954684)));
    // 0x260b04: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x260b04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x260b08: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x260B08u;
    {
        const bool branch_taken_0x260b08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x260b08) {
            ctx->pc = 0x260B48u;
            goto label_260b48;
        }
    }
    ctx->pc = 0x260B10u;
    // 0x260b10: 0x922208e8  lbu         $v0, 0x8E8($s1)
    ctx->pc = 0x260b10u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2280)));
    // 0x260b14: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x260B14u;
    {
        const bool branch_taken_0x260b14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x260B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260B14u;
        // 0x260b18: 0x3c048472  lui         $a0, 0x8472 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)33906 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260b14) {
            ctx->pc = 0x260B30u;
            goto label_260b30;
        }
    }
    ctx->pc = 0x260B1Cu;
    // 0x260b1c: 0xc0b2d70  jal         func_2CB5C0
    ctx->pc = 0x260B1Cu;
    SET_GPR_U32(ctx, 31, 0x260B24u);
    ctx->pc = 0x260B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260B1Cu;
    // 0x260b20: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB5C0u, 0x260B1Cu, 0x260B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260B24u;
label_260b24:
    // 0x260b24: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x260B24u;
    {
        const bool branch_taken_0x260b24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x260b24) {
            ctx->pc = 0x260BF8u;
            goto label_260bf8;
        }
    }
    ctx->pc = 0x260B2Cu;
    // 0x260b2c: 0x0  nop
    ctx->pc = 0x260b2cu;
    // NOP
label_260b30:
    // 0x260b30: 0x3c0484b2  lui         $a0, 0x84B2
    ctx->pc = 0x260b30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)33970 << 16));
    // 0x260b34: 0xc0b2d70  jal         func_2CB5C0
    ctx->pc = 0x260B34u;
    SET_GPR_U32(ctx, 31, 0x260B3Cu);
    ctx->pc = 0x260B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260B34u;
    // 0x260b38: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB5C0u, 0x260B34u, 0x260B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260B3Cu;
label_260b3c:
    // 0x260b3c: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x260B3Cu;
    {
        const bool branch_taken_0x260b3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x260b3c) {
            ctx->pc = 0x260BF8u;
            goto label_260bf8;
        }
    }
    ctx->pc = 0x260B44u;
    // 0x260b44: 0x0  nop
    ctx->pc = 0x260b44u;
    // NOP
label_260b48:
    // 0x260b48: 0x8e222ab0  lw          $v0, 0x2AB0($s1)
    ctx->pc = 0x260b48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10928)));
    // 0x260b4c: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x260B4Cu;
    {
        const bool branch_taken_0x260b4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x260b4c) {
            ctx->pc = 0x260BA8u;
            goto label_260ba8;
        }
    }
    ctx->pc = 0x260B54u;
    // 0x260b54: 0x90430640  lbu         $v1, 0x640($v0)
    ctx->pc = 0x260b54u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1600)));
    // 0x260b58: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x260b58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x260b5c: 0x14620012  bne         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x260B5Cu;
    {
        const bool branch_taken_0x260b5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x260b5c) {
            ctx->pc = 0x260BA8u;
            goto label_260ba8;
        }
    }
    ctx->pc = 0x260B64u;
    // 0x260b64: 0x878680f0  lh          $a2, -0x7F10($gp)
    ctx->pc = 0x260b64u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294934768)));
    // 0x260b68: 0x27a7004c  addiu       $a3, $sp, 0x4C
    ctx->pc = 0x260b68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x260b6c: 0x938480f2  lbu         $a0, -0x7F0E($gp)
    ctx->pc = 0x260b6cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294934770)));
    // 0x260b70: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x260b70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x260b74: 0x3c028432  lui         $v0, 0x8432
    ctx->pc = 0x260b74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33842 << 16));
    // 0x260b78: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x260b78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x260b7c: 0xa4e60000  sh          $a2, 0x0($a3)
    ctx->pc = 0x260b7cu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x260b80: 0xa0e40002  sb          $a0, 0x2($a3)
    ctx->pc = 0x260b80u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x260b84: 0x922408e8  lbu         $a0, 0x8E8($s1)
    ctx->pc = 0x260b84u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2280)));
    // 0x260b88: 0x9d2021  addu        $a0, $a0, $sp
    ctx->pc = 0x260b88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
    // 0x260b8c: 0x9084004c  lbu         $a0, 0x4C($a0)
    ctx->pc = 0x260b8cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x260b90: 0x831806  srlv        $v1, $v1, $a0
    ctx->pc = 0x260b90u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
    // 0x260b94: 0xc0b2d70  jal         func_2CB5C0
    ctx->pc = 0x260B94u;
    SET_GPR_U32(ctx, 31, 0x260B9Cu);
    ctx->pc = 0x260B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260B94u;
    // 0x260b98: 0x622025  or          $a0, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB5C0u, 0x260B94u, 0x260B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260B9Cu;
label_260b9c:
    // 0x260b9c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x260B9Cu;
    {
        const bool branch_taken_0x260b9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x260b9c) {
            ctx->pc = 0x260BF8u;
            goto label_260bf8;
        }
    }
    ctx->pc = 0x260BA4u;
    // 0x260ba4: 0x0  nop
    ctx->pc = 0x260ba4u;
    // NOP
label_260ba8:
    // 0x260ba8: 0x3c048432  lui         $a0, 0x8432
    ctx->pc = 0x260ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)33842 << 16));
    // 0x260bac: 0xc0b2d70  jal         func_2CB5C0
    ctx->pc = 0x260BACu;
    SET_GPR_U32(ctx, 31, 0x260BB4u);
    ctx->pc = 0x260BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260BACu;
    // 0x260bb0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB5C0u, 0x260BACu, 0x260BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260BB4u;
label_260bb4:
    // 0x260bb4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x260BB4u;
    {
        const bool branch_taken_0x260bb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x260bb4) {
            ctx->pc = 0x260BF8u;
            goto label_260bf8;
        }
    }
    ctx->pc = 0x260BBCu;
    // 0x260bbc: 0x0  nop
    ctx->pc = 0x260bbcu;
    // NOP
label_260bc0:
    // 0x260bc0: 0xc0d7ae4  jal         func_35EB90
    ctx->pc = 0x260BC0u;
    SET_GPR_U32(ctx, 31, 0x260BC8u);
    ctx->pc = 0x260BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260BC0u;
    // 0x260bc4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35EB90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35EB90u, 0x260BC0u, 0x260BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260BC8u;
label_260bc8:
    // 0x260bc8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x260BC8u;
    {
        const bool branch_taken_0x260bc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x260bc8) {
            ctx->pc = 0x260BF8u;
            goto label_260bf8;
        }
    }
    ctx->pc = 0x260BD0u;
label_260bd0:
    // 0x260bd0: 0x8e23085c  lw          $v1, 0x85C($s1)
    ctx->pc = 0x260bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2140)));
    // 0x260bd4: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x260BD4u;
    {
        const bool branch_taken_0x260bd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x260BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260BD4u;
        // 0x260bd8: 0x240400ff  addiu       $a0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260bd4) {
            ctx->pc = 0x260BF8u;
            goto label_260bf8;
        }
    }
    ctx->pc = 0x260BDCu;
    // 0x260bdc: 0xa0640122  sb          $a0, 0x122($v1)
    ctx->pc = 0x260bdcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 290), (uint8_t)GPR_U32(ctx, 4));
    // 0x260be0: 0x8e23085c  lw          $v1, 0x85C($s1)
    ctx->pc = 0x260be0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2140)));
    // 0x260be4: 0xa0640121  sb          $a0, 0x121($v1)
    ctx->pc = 0x260be4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 289), (uint8_t)GPR_U32(ctx, 4));
    // 0x260be8: 0x8e23085c  lw          $v1, 0x85C($s1)
    ctx->pc = 0x260be8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2140)));
    // 0x260bec: 0xa0640120  sb          $a0, 0x120($v1)
    ctx->pc = 0x260becu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 288), (uint8_t)GPR_U32(ctx, 4));
    // 0x260bf0: 0x8e23085c  lw          $v1, 0x85C($s1)
    ctx->pc = 0x260bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2140)));
    // 0x260bf4: 0xa0640123  sb          $a0, 0x123($v1)
    ctx->pc = 0x260bf4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 291), (uint8_t)GPR_U32(ctx, 4));
label_260bf8:
    // 0x260bf8: 0x8e2306cc  lw          $v1, 0x6CC($s1)
    ctx->pc = 0x260bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1740)));
    // 0x260bfc: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x260bfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x260c00: 0xae2306cc  sw          $v1, 0x6CC($s1)
    ctx->pc = 0x260c00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1740), GPR_U32(ctx, 3));
    // 0x260c04: 0x0  nop
    ctx->pc = 0x260c04u;
    // NOP
label_260c08:
    // 0x260c08: 0x8e2306cc  lw          $v1, 0x6CC($s1)
    ctx->pc = 0x260c08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1740)));
    // 0x260c0c: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x260c0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x260c10: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x260C10u;
    {
        const bool branch_taken_0x260c10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x260C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260C10u;
        // 0x260c14: 0xae2306cc  sw          $v1, 0x6CC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1740), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260c10) {
            ctx->pc = 0x260C20u;
            goto label_260c20;
        }
    }
    ctx->pc = 0x260C18u;
label_260c18:
    // 0x260c18: 0xc0ae51c  jal         func_2B9470
    ctx->pc = 0x260C18u;
    SET_GPR_U32(ctx, 31, 0x260C20u);
    ctx->pc = 0x260C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260C18u;
    // 0x260c1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B9470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B9470u, 0x260C18u, 0x260C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260C20u;
label_260c20:
    // 0x260c20: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x260c20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x260c24: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x260c24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x260c28: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x260c28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x260c2c: 0x3e00008  jr          $ra
    ctx->pc = 0x260C2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x260C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260C2Cu;
        // 0x260c30: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x260C2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x260C34u;
}
