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

// Function: sub_001DDBE0
// Address: 0x1ddbe0 - 0x1dde74
void sub_001DDBE0_0x1ddbe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DDBE0_0x1ddbe0");
#endif

    switch (ctx->pc) {
        case 0x1ddbe0u: goto label_1ddbe0;
        case 0x1ddbe4u: goto label_1ddbe4;
        case 0x1ddbe8u: goto label_1ddbe8;
        case 0x1ddbecu: goto label_1ddbec;
        case 0x1ddbf0u: goto label_1ddbf0;
        case 0x1ddbf4u: goto label_1ddbf4;
        case 0x1ddbf8u: goto label_1ddbf8;
        case 0x1ddbfcu: goto label_1ddbfc;
        case 0x1ddc00u: goto label_1ddc00;
        case 0x1ddc04u: goto label_1ddc04;
        case 0x1ddc08u: goto label_1ddc08;
        case 0x1ddc0cu: goto label_1ddc0c;
        case 0x1ddc10u: goto label_1ddc10;
        case 0x1ddc14u: goto label_1ddc14;
        case 0x1ddc18u: goto label_1ddc18;
        case 0x1ddc1cu: goto label_1ddc1c;
        case 0x1ddc20u: goto label_1ddc20;
        case 0x1ddc24u: goto label_1ddc24;
        case 0x1ddc28u: goto label_1ddc28;
        case 0x1ddc2cu: goto label_1ddc2c;
        case 0x1ddc30u: goto label_1ddc30;
        case 0x1ddc34u: goto label_1ddc34;
        case 0x1ddc38u: goto label_1ddc38;
        case 0x1ddc3cu: goto label_1ddc3c;
        case 0x1ddc40u: goto label_1ddc40;
        case 0x1ddc44u: goto label_1ddc44;
        case 0x1ddc48u: goto label_1ddc48;
        case 0x1ddc4cu: goto label_1ddc4c;
        case 0x1ddc50u: goto label_1ddc50;
        case 0x1ddc54u: goto label_1ddc54;
        case 0x1ddc58u: goto label_1ddc58;
        case 0x1ddc5cu: goto label_1ddc5c;
        case 0x1ddc60u: goto label_1ddc60;
        case 0x1ddc64u: goto label_1ddc64;
        case 0x1ddc68u: goto label_1ddc68;
        case 0x1ddc6cu: goto label_1ddc6c;
        case 0x1ddc70u: goto label_1ddc70;
        case 0x1ddc74u: goto label_1ddc74;
        case 0x1ddc78u: goto label_1ddc78;
        case 0x1ddc7cu: goto label_1ddc7c;
        case 0x1ddc80u: goto label_1ddc80;
        case 0x1ddc84u: goto label_1ddc84;
        case 0x1ddc88u: goto label_1ddc88;
        case 0x1ddc8cu: goto label_1ddc8c;
        case 0x1ddc90u: goto label_1ddc90;
        case 0x1ddc94u: goto label_1ddc94;
        case 0x1ddc98u: goto label_1ddc98;
        case 0x1ddc9cu: goto label_1ddc9c;
        case 0x1ddca0u: goto label_1ddca0;
        case 0x1ddca4u: goto label_1ddca4;
        case 0x1ddca8u: goto label_1ddca8;
        case 0x1ddcacu: goto label_1ddcac;
        case 0x1ddcb0u: goto label_1ddcb0;
        case 0x1ddcb4u: goto label_1ddcb4;
        case 0x1ddcb8u: goto label_1ddcb8;
        case 0x1ddcbcu: goto label_1ddcbc;
        case 0x1ddcc0u: goto label_1ddcc0;
        case 0x1ddcc4u: goto label_1ddcc4;
        case 0x1ddcc8u: goto label_1ddcc8;
        case 0x1ddcccu: goto label_1ddccc;
        case 0x1ddcd0u: goto label_1ddcd0;
        case 0x1ddcd4u: goto label_1ddcd4;
        case 0x1ddcd8u: goto label_1ddcd8;
        case 0x1ddcdcu: goto label_1ddcdc;
        case 0x1ddce0u: goto label_1ddce0;
        case 0x1ddce4u: goto label_1ddce4;
        case 0x1ddce8u: goto label_1ddce8;
        case 0x1ddcecu: goto label_1ddcec;
        case 0x1ddcf0u: goto label_1ddcf0;
        case 0x1ddcf4u: goto label_1ddcf4;
        case 0x1ddcf8u: goto label_1ddcf8;
        case 0x1ddcfcu: goto label_1ddcfc;
        case 0x1ddd00u: goto label_1ddd00;
        case 0x1ddd04u: goto label_1ddd04;
        case 0x1ddd08u: goto label_1ddd08;
        case 0x1ddd0cu: goto label_1ddd0c;
        case 0x1ddd10u: goto label_1ddd10;
        case 0x1ddd14u: goto label_1ddd14;
        case 0x1ddd18u: goto label_1ddd18;
        case 0x1ddd1cu: goto label_1ddd1c;
        case 0x1ddd20u: goto label_1ddd20;
        case 0x1ddd24u: goto label_1ddd24;
        case 0x1ddd28u: goto label_1ddd28;
        case 0x1ddd2cu: goto label_1ddd2c;
        case 0x1ddd30u: goto label_1ddd30;
        case 0x1ddd34u: goto label_1ddd34;
        case 0x1ddd38u: goto label_1ddd38;
        case 0x1ddd3cu: goto label_1ddd3c;
        case 0x1ddd40u: goto label_1ddd40;
        case 0x1ddd44u: goto label_1ddd44;
        case 0x1ddd48u: goto label_1ddd48;
        case 0x1ddd4cu: goto label_1ddd4c;
        case 0x1ddd50u: goto label_1ddd50;
        case 0x1ddd54u: goto label_1ddd54;
        case 0x1ddd58u: goto label_1ddd58;
        case 0x1ddd5cu: goto label_1ddd5c;
        case 0x1ddd60u: goto label_1ddd60;
        case 0x1ddd64u: goto label_1ddd64;
        case 0x1ddd68u: goto label_1ddd68;
        case 0x1ddd6cu: goto label_1ddd6c;
        case 0x1ddd70u: goto label_1ddd70;
        case 0x1ddd74u: goto label_1ddd74;
        case 0x1ddd78u: goto label_1ddd78;
        case 0x1ddd7cu: goto label_1ddd7c;
        case 0x1ddd80u: goto label_1ddd80;
        case 0x1ddd84u: goto label_1ddd84;
        case 0x1ddd88u: goto label_1ddd88;
        case 0x1ddd8cu: goto label_1ddd8c;
        case 0x1ddd90u: goto label_1ddd90;
        case 0x1ddd94u: goto label_1ddd94;
        case 0x1ddd98u: goto label_1ddd98;
        case 0x1ddd9cu: goto label_1ddd9c;
        case 0x1ddda0u: goto label_1ddda0;
        case 0x1ddda4u: goto label_1ddda4;
        case 0x1ddda8u: goto label_1ddda8;
        case 0x1dddacu: goto label_1dddac;
        case 0x1dddb0u: goto label_1dddb0;
        case 0x1dddb4u: goto label_1dddb4;
        case 0x1dddb8u: goto label_1dddb8;
        case 0x1dddbcu: goto label_1dddbc;
        case 0x1dddc0u: goto label_1dddc0;
        case 0x1dddc4u: goto label_1dddc4;
        case 0x1dddc8u: goto label_1dddc8;
        case 0x1dddccu: goto label_1dddcc;
        case 0x1dddd0u: goto label_1dddd0;
        case 0x1dddd4u: goto label_1dddd4;
        case 0x1dddd8u: goto label_1dddd8;
        case 0x1ddddcu: goto label_1ddddc;
        case 0x1ddde0u: goto label_1ddde0;
        case 0x1ddde4u: goto label_1ddde4;
        case 0x1ddde8u: goto label_1ddde8;
        case 0x1dddecu: goto label_1dddec;
        case 0x1dddf0u: goto label_1dddf0;
        case 0x1dddf4u: goto label_1dddf4;
        case 0x1dddf8u: goto label_1dddf8;
        case 0x1dddfcu: goto label_1dddfc;
        case 0x1dde00u: goto label_1dde00;
        case 0x1dde04u: goto label_1dde04;
        case 0x1dde08u: goto label_1dde08;
        case 0x1dde0cu: goto label_1dde0c;
        case 0x1dde10u: goto label_1dde10;
        case 0x1dde14u: goto label_1dde14;
        case 0x1dde18u: goto label_1dde18;
        case 0x1dde1cu: goto label_1dde1c;
        case 0x1dde20u: goto label_1dde20;
        case 0x1dde24u: goto label_1dde24;
        case 0x1dde28u: goto label_1dde28;
        case 0x1dde2cu: goto label_1dde2c;
        case 0x1dde30u: goto label_1dde30;
        case 0x1dde34u: goto label_1dde34;
        case 0x1dde38u: goto label_1dde38;
        case 0x1dde3cu: goto label_1dde3c;
        case 0x1dde40u: goto label_1dde40;
        case 0x1dde44u: goto label_1dde44;
        case 0x1dde48u: goto label_1dde48;
        case 0x1dde4cu: goto label_1dde4c;
        case 0x1dde50u: goto label_1dde50;
        case 0x1dde54u: goto label_1dde54;
        case 0x1dde58u: goto label_1dde58;
        case 0x1dde5cu: goto label_1dde5c;
        case 0x1dde60u: goto label_1dde60;
        case 0x1dde64u: goto label_1dde64;
        case 0x1dde68u: goto label_1dde68;
        case 0x1dde6cu: goto label_1dde6c;
        case 0x1dde70u: goto label_1dde70;
        default: break;
    }

    ctx->pc = 0x1ddbe0u;

label_1ddbe0:
    // 0x1ddbe0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1ddbe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1ddbe4:
    // 0x1ddbe4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1ddbe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1ddbe8:
    // 0x1ddbe8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ddbe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1ddbec:
    // 0x1ddbec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ddbecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1ddbf0:
    // 0x1ddbf0: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1ddbf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1ddbf4:
    // 0x1ddbf4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1ddbf8:
    if (ctx->pc == 0x1DDBF8u) {
        ctx->pc = 0x1DDBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDBF4u;
        // 0x1ddbf8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DDBFCu;
        goto label_1ddbfc;
    }
    ctx->pc = 0x1DDBF4u;
    {
        const bool branch_taken_0x1ddbf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DDBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDBF4u;
        // 0x1ddbf8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddbf4) {
            ctx->pc = 0x1DDC08u;
            goto label_1ddc08;
        }
    }
    ctx->pc = 0x1DDBFCu;
label_1ddbfc:
    // 0x1ddbfc: 0x10000098  b           . + 4 + (0x98 << 2)
label_1ddc00:
    if (ctx->pc == 0x1DDC00u) {
        ctx->pc = 0x1DDC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDBFCu;
        // 0x1ddc00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DDC04u;
        goto label_1ddc04;
    }
    ctx->pc = 0x1DDBFCu;
    {
        const bool branch_taken_0x1ddbfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DDC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDBFCu;
        // 0x1ddc00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddbfc) {
            ctx->pc = 0x1DDE60u;
            goto label_1dde60;
        }
    }
    ctx->pc = 0x1DDC04u;
label_1ddc04:
    // 0x1ddc04: 0x0  nop
    ctx->pc = 0x1ddc04u;
    // NOP
label_1ddc08:
    // 0x1ddc08: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x1ddc08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1ddc0c:
    // 0x1ddc0c: 0x8c990020  lw          $t9, 0x20($a0)
    ctx->pc = 0x1ddc0cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_1ddc10:
    // 0x1ddc10: 0x8f390050  lw          $t9, 0x50($t9)
    ctx->pc = 0x1ddc10u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 80)));
label_1ddc14:
    // 0x1ddc14: 0x320f809  jalr        $t9
label_1ddc18:
    if (ctx->pc == 0x1DDC18u) {
        ctx->pc = 0x1DDC1Cu;
        goto label_1ddc1c;
    }
    ctx->pc = 0x1DDC14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DDC1Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DDC14u, 0x1DDC1Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DDC1Cu;
label_1ddc1c:
    // 0x1ddc1c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1ddc20:
    if (ctx->pc == 0x1DDC20u) {
        ctx->pc = 0x1DDC24u;
        goto label_1ddc24;
    }
    ctx->pc = 0x1DDC1Cu;
    {
        const bool branch_taken_0x1ddc1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ddc1c) {
            ctx->pc = 0x1DDC40u;
            goto label_1ddc40;
        }
    }
    ctx->pc = 0x1DDC24u;
label_1ddc24:
    // 0x1ddc24: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x1ddc24u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1ddc28:
    // 0x1ddc28: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x1ddc28u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_1ddc2c:
    // 0x1ddc2c: 0x320f809  jalr        $t9
label_1ddc30:
    if (ctx->pc == 0x1DDC30u) {
        ctx->pc = 0x1DDC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDC2Cu;
        // 0x1ddc30: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DDC34u;
        goto label_1ddc34;
    }
    ctx->pc = 0x1DDC2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DDC34u);
        ctx->pc = 0x1DDC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDC2Cu;
        // 0x1ddc30: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DDC2Cu, 0x1DDC34u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DDC34u;
label_1ddc34:
    // 0x1ddc34: 0x1000008a  b           . + 4 + (0x8A << 2)
label_1ddc38:
    if (ctx->pc == 0x1DDC38u) {
        ctx->pc = 0x1DDC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDC34u;
        // 0x1ddc38: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DDC3Cu;
        goto label_1ddc3c;
    }
    ctx->pc = 0x1DDC34u;
    {
        const bool branch_taken_0x1ddc34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DDC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDC34u;
        // 0x1ddc38: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddc34) {
            ctx->pc = 0x1DDE60u;
            goto label_1dde60;
        }
    }
    ctx->pc = 0x1DDC3Cu;
label_1ddc3c:
    // 0x1ddc3c: 0x0  nop
    ctx->pc = 0x1ddc3cu;
    // NOP
label_1ddc40:
    // 0x1ddc40: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x1ddc40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1ddc44:
    // 0x1ddc44: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1ddc44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1ddc48:
    // 0x1ddc48: 0x84480000  lh          $t0, 0x0($v0)
    ctx->pc = 0x1ddc48u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1ddc4c:
    // 0x1ddc4c: 0x8467000e  lh          $a3, 0xE($v1)
    ctx->pc = 0x1ddc4cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
label_1ddc50:
    // 0x1ddc50: 0x8466000c  lh          $a2, 0xC($v1)
    ctx->pc = 0x1ddc50u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
label_1ddc54:
    // 0x1ddc54: 0x90420003  lbu         $v0, 0x3($v0)
    ctx->pc = 0x1ddc54u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
label_1ddc58:
    // 0x1ddc58: 0x38e37ffd  xori        $v1, $a3, 0x7FFD
    ctx->pc = 0x1ddc58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) ^ (uint64_t)(uint16_t)32765);
label_1ddc5c:
    // 0x1ddc5c: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x1ddc5cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1ddc60:
    // 0x1ddc60: 0x402826  xor         $a1, $v0, $zero
    ctx->pc = 0x1ddc60u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
label_1ddc64:
    // 0x1ddc64: 0x28420001  slti        $v0, $v0, 0x1
    ctx->pc = 0x1ddc64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1) ? 1 : 0);
label_1ddc68:
    // 0x1ddc68: 0x2ca50001  sltiu       $a1, $a1, 0x1
    ctx->pc = 0x1ddc68u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1ddc6c:
    // 0x1ddc6c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1ddc6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1ddc70:
    // 0x1ddc70: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1ddc70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1ddc74:
    // 0x1ddc74: 0x622024  and         $a0, $v1, $v0
    ctx->pc = 0x1ddc74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1ddc78:
    // 0x1ddc78: 0xe8102a  slt         $v0, $a3, $t0
    ctx->pc = 0x1ddc78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
label_1ddc7c:
    // 0x1ddc7c: 0x106182a  slt         $v1, $t0, $a2
    ctx->pc = 0x1ddc7cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_1ddc80:
    // 0x1ddc80: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1ddc80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1ddc84:
    // 0x1ddc84: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x1ddc84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
label_1ddc88:
    // 0x1ddc88: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x1ddc88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_1ddc8c:
    // 0x1ddc8c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1ddc90:
    if (ctx->pc == 0x1DDC90u) {
        ctx->pc = 0x1DDC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDC8Cu;
        // 0x1ddc90: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DDC94u;
        goto label_1ddc94;
    }
    ctx->pc = 0x1DDC8Cu;
    {
        const bool branch_taken_0x1ddc8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DDC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDC8Cu;
        // 0x1ddc90: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddc8c) {
            ctx->pc = 0x1DDCA0u;
            goto label_1ddca0;
        }
    }
    ctx->pc = 0x1DDC94u;
label_1ddc94:
    // 0x1ddc94: 0x10000072  b           . + 4 + (0x72 << 2)
label_1ddc98:
    if (ctx->pc == 0x1DDC98u) {
        ctx->pc = 0x1DDC9Cu;
        goto label_1ddc9c;
    }
    ctx->pc = 0x1DDC94u;
    {
        const bool branch_taken_0x1ddc94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ddc94) {
            ctx->pc = 0x1DDE60u;
            goto label_1dde60;
        }
    }
    ctx->pc = 0x1DDC9Cu;
label_1ddc9c:
    // 0x1ddc9c: 0x0  nop
    ctx->pc = 0x1ddc9cu;
    // NOP
label_1ddca0:
    // 0x1ddca0: 0xc81026  xor         $v0, $a2, $t0
    ctx->pc = 0x1ddca0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 8));
label_1ddca4:
    // 0x1ddca4: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1ddca4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1ddca8:
    // 0x1ddca8: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x1ddca8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
label_1ddcac:
    // 0x1ddcac: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1ddcb0:
    if (ctx->pc == 0x1DDCB0u) {
        ctx->pc = 0x1DDCB4u;
        goto label_1ddcb4;
    }
    ctx->pc = 0x1DDCACu;
    {
        const bool branch_taken_0x1ddcac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ddcac) {
            ctx->pc = 0x1DDCC0u;
            goto label_1ddcc0;
        }
    }
    ctx->pc = 0x1DDCB4u;
label_1ddcb4:
    // 0x1ddcb4: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1ddcb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1ddcb8:
    // 0x1ddcb8: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x1ddcb8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1ddcbc:
    // 0x1ddcbc: 0x7e220020  sq          $v0, 0x20($s1)
    ctx->pc = 0x1ddcbcu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), GPR_VEC(ctx, 2));
label_1ddcc0:
    // 0x1ddcc0: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x1ddcc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1ddcc4:
    // 0x1ddcc4: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x1ddcc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1ddcc8:
    // 0x1ddcc8: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1ddcc8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1ddccc:
    // 0x1ddccc: 0x84a3000c  lh          $v1, 0xC($a1)
    ctx->pc = 0x1ddcccu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 12)));
label_1ddcd0:
    // 0x1ddcd0: 0x84a20002  lh          $v0, 0x2($a1)
    ctx->pc = 0x1ddcd0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
label_1ddcd4:
    // 0x1ddcd4: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x1ddcd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1ddcd8:
    // 0x1ddcd8: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1ddcd8u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1ddcdc:
    // 0x1ddcdc: 0x0  nop
    ctx->pc = 0x1ddcdcu;
    // NOP
label_1ddce0:
    // 0x1ddce0: 0x0  nop
    ctx->pc = 0x1ddce0u;
    // NOP
label_1ddce4:
    // 0x1ddce4: 0x1010  mfhi        $v0
    ctx->pc = 0x1ddce4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1ddce8:
    // 0x1ddce8: 0x1440005b  bnez        $v0, . + 4 + (0x5B << 2)
label_1ddcec:
    if (ctx->pc == 0x1DDCECu) {
        ctx->pc = 0x1DDCECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDCE8u;
        // 0x1ddcec: 0x24b00010  addiu       $s0, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DDCF0u;
        goto label_1ddcf0;
    }
    ctx->pc = 0x1DDCE8u;
    {
        const bool branch_taken_0x1ddce8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DDCECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDCE8u;
        // 0x1ddcec: 0x24b00010  addiu       $s0, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddce8) {
            ctx->pc = 0x1DDE58u;
            goto label_1dde58;
        }
    }
    ctx->pc = 0x1DDCF0u;
label_1ddcf0:
    // 0x1ddcf0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1ddcf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1ddcf4:
    // 0x1ddcf4: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x1ddcf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
label_1ddcf8:
    // 0x1ddcf8: 0xc0766b8  jal         func_1D9AE0
label_1ddcfc:
    if (ctx->pc == 0x1DDCFCu) {
        ctx->pc = 0x1DDCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDCF8u;
        // 0x1ddcfc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DDD00u;
        goto label_1ddd00;
    }
    ctx->pc = 0x1DDCF8u;
    SET_GPR_U32(ctx, 31, 0x1DDD00u);
    ctx->pc = 0x1DDCFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DDCF8u;
    // 0x1ddcfc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AE0u, 0x1DDCF8u, 0x1DDD00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DDD00u;
label_1ddd00:
    // 0x1ddd00: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x1ddd00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
label_1ddd04:
    // 0x1ddd04: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1ddd04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_1ddd08:
    // 0x1ddd08: 0x34420dcd  ori         $v0, $v0, 0xDCD
    ctx->pc = 0x1ddd08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
label_1ddd0c:
    // 0x1ddd0c: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x1ddd0cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_1ddd10:
    // 0x1ddd10: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1ddd10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1ddd14:
    // 0x1ddd14: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x1ddd14u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
label_1ddd18:
    // 0x1ddd18: 0x8f8480e0  lw          $a0, -0x7F20($gp)
    ctx->pc = 0x1ddd18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
label_1ddd1c:
    // 0x1ddd1c: 0x41302  srl         $v0, $a0, 12
    ctx->pc = 0x1ddd1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 12));
label_1ddd20:
    // 0x1ddd20: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_1ddd24:
    if (ctx->pc == 0x1DDD24u) {
        ctx->pc = 0x1DDD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDD20u;
        // 0x1ddd24: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DDD28u;
        goto label_1ddd28;
    }
    ctx->pc = 0x1DDD20u;
    {
        const bool branch_taken_0x1ddd20 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x1DDD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDD20u;
        // 0x1ddd24: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddd20) {
            ctx->pc = 0x1DDD34u;
            goto label_1ddd34;
        }
    }
    ctx->pc = 0x1DDD28u;
label_1ddd28:
    // 0x1ddd28: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ddd28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ddd2c:
    // 0x1ddd2c: 0x10000007  b           . + 4 + (0x7 << 2)
label_1ddd30:
    if (ctx->pc == 0x1DDD30u) {
        ctx->pc = 0x1DDD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDD2Cu;
        // 0x1ddd30: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DDD34u;
        goto label_1ddd34;
    }
    ctx->pc = 0x1DDD2Cu;
    {
        const bool branch_taken_0x1ddd2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DDD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDD2Cu;
        // 0x1ddd30: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddd2c) {
            ctx->pc = 0x1DDD4Cu;
            goto label_1ddd4c;
        }
    }
    ctx->pc = 0x1DDD34u;
label_1ddd34:
    // 0x1ddd34: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1ddd34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1ddd38:
    // 0x1ddd38: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1ddd38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1ddd3c:
    // 0x1ddd3c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ddd3cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ddd40:
    // 0x1ddd40: 0x0  nop
    ctx->pc = 0x1ddd40u;
    // NOP
label_1ddd44:
    // 0x1ddd44: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x1ddd44u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1ddd48:
    // 0x1ddd48: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x1ddd48u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_1ddd4c:
    // 0x1ddd4c: 0x3c023580  lui         $v0, 0x3580
    ctx->pc = 0x1ddd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)13696 << 16));
label_1ddd50:
    // 0x1ddd50: 0x34430008  ori         $v1, $v0, 0x8
    ctx->pc = 0x1ddd50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
label_1ddd54:
    // 0x1ddd54: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1ddd54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_1ddd58:
    // 0x1ddd58: 0x34420dcd  ori         $v0, $v0, 0xDCD
    ctx->pc = 0x1ddd58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
label_1ddd5c:
    // 0x1ddd5c: 0x821018  mult        $v0, $a0, $v0
    ctx->pc = 0x1ddd5cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_1ddd60:
    // 0x1ddd60: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1ddd60u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1ddd64:
    // 0x1ddd64: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x1ddd64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ddd68:
    // 0x1ddd68: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1ddd68u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_1ddd6c:
    // 0x1ddd6c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1ddd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1ddd70:
    // 0x1ddd70: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x1ddd70u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
label_1ddd74:
    // 0x1ddd74: 0x8f8480e0  lw          $a0, -0x7F20($gp)
    ctx->pc = 0x1ddd74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
label_1ddd78:
    // 0x1ddd78: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1ddd78u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1ddd7c:
    // 0x1ddd7c: 0x41302  srl         $v0, $a0, 12
    ctx->pc = 0x1ddd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 12));
label_1ddd80:
    // 0x1ddd80: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_1ddd84:
    if (ctx->pc == 0x1DDD84u) {
        ctx->pc = 0x1DDD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDD80u;
        // 0x1ddd84: 0xe7a00030  swc1        $f0, 0x30($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DDD88u;
        goto label_1ddd88;
    }
    ctx->pc = 0x1DDD80u;
    {
        const bool branch_taken_0x1ddd80 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x1DDD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDD80u;
        // 0x1ddd84: 0xe7a00030  swc1        $f0, 0x30($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddd80) {
            ctx->pc = 0x1DDD94u;
            goto label_1ddd94;
        }
    }
    ctx->pc = 0x1DDD88u;
label_1ddd88:
    // 0x1ddd88: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ddd88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ddd8c:
    // 0x1ddd8c: 0x10000008  b           . + 4 + (0x8 << 2)
label_1ddd90:
    if (ctx->pc == 0x1DDD90u) {
        ctx->pc = 0x1DDD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDD8Cu;
        // 0x1ddd90: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DDD94u;
        goto label_1ddd94;
    }
    ctx->pc = 0x1DDD8Cu;
    {
        const bool branch_taken_0x1ddd8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DDD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDD8Cu;
        // 0x1ddd90: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddd8c) {
            ctx->pc = 0x1DDDB0u;
            goto label_1dddb0;
        }
    }
    ctx->pc = 0x1DDD94u;
label_1ddd94:
    // 0x1ddd94: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1ddd94u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_1ddd98:
    // 0x1ddd98: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1ddd98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1ddd9c:
    // 0x1ddd9c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1ddd9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1ddda0:
    // 0x1ddda0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ddda0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ddda4:
    // 0x1ddda4: 0x0  nop
    ctx->pc = 0x1ddda4u;
    // NOP
label_1ddda8:
    // 0x1ddda8: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x1ddda8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1dddac:
    // 0x1dddac: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x1dddacu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_1dddb0:
    // 0x1dddb0: 0x3c023580  lui         $v0, 0x3580
    ctx->pc = 0x1dddb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)13696 << 16));
label_1dddb4:
    // 0x1dddb4: 0x34430008  ori         $v1, $v0, 0x8
    ctx->pc = 0x1dddb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
label_1dddb8:
    // 0x1dddb8: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1dddb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_1dddbc:
    // 0x1dddbc: 0x34420dcd  ori         $v0, $v0, 0xDCD
    ctx->pc = 0x1dddbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
label_1dddc0:
    // 0x1dddc0: 0x821018  mult        $v0, $a0, $v0
    ctx->pc = 0x1dddc0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_1dddc4:
    // 0x1dddc4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1dddc4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1dddc8:
    // 0x1dddc8: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x1dddc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1dddcc:
    // 0x1dddcc: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1dddccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_1dddd0:
    // 0x1dddd0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1dddd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1dddd4:
    // 0x1dddd4: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x1dddd4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
label_1dddd8:
    // 0x1dddd8: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x1dddd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
label_1ddddc:
    // 0x1ddddc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1ddddcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1ddde0:
    // 0x1ddde0: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x1ddde0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
label_1ddde4:
    // 0x1ddde4: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_1ddde8:
    if (ctx->pc == 0x1DDDE8u) {
        ctx->pc = 0x1DDDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDDE4u;
        // 0x1ddde8: 0xe7a00034  swc1        $f0, 0x34($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DDDECu;
        goto label_1dddec;
    }
    ctx->pc = 0x1DDDE4u;
    {
        const bool branch_taken_0x1ddde4 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x1DDDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDDE4u;
        // 0x1ddde8: 0xe7a00034  swc1        $f0, 0x34($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddde4) {
            ctx->pc = 0x1DDDF8u;
            goto label_1dddf8;
        }
    }
    ctx->pc = 0x1DDDECu;
label_1dddec:
    // 0x1dddec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1dddecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1dddf0:
    // 0x1dddf0: 0x10000008  b           . + 4 + (0x8 << 2)
label_1dddf4:
    if (ctx->pc == 0x1DDDF4u) {
        ctx->pc = 0x1DDDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDDF0u;
        // 0x1dddf4: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DDDF8u;
        goto label_1dddf8;
    }
    ctx->pc = 0x1DDDF0u;
    {
        const bool branch_taken_0x1dddf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DDDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDDF0u;
        // 0x1dddf4: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dddf0) {
            ctx->pc = 0x1DDE14u;
            goto label_1dde14;
        }
    }
    ctx->pc = 0x1DDDF8u;
label_1dddf8:
    // 0x1dddf8: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1dddf8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_1dddfc:
    // 0x1dddfc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1dddfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1dde00:
    // 0x1dde00: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1dde00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1dde04:
    // 0x1dde04: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1dde04u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1dde08:
    // 0x1dde08: 0x0  nop
    ctx->pc = 0x1dde08u;
    // NOP
label_1dde0c:
    // 0x1dde0c: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x1dde0cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1dde10:
    // 0x1dde10: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x1dde10u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_1dde14:
    // 0x1dde14: 0x3c023580  lui         $v0, 0x3580
    ctx->pc = 0x1dde14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)13696 << 16));
label_1dde18:
    // 0x1dde18: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1dde18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1dde1c:
    // 0x1dde1c: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x1dde1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
label_1dde20:
    // 0x1dde20: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1dde20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1dde24:
    // 0x1dde24: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1dde24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1dde28:
    // 0x1dde28: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1dde28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1dde2c:
    // 0x1dde2c: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x1dde2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1dde30:
    // 0x1dde30: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1dde30u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_1dde34:
    // 0x1dde34: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1dde34u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1dde38:
    // 0x1dde38: 0xc0766a8  jal         func_1D9AA0
label_1dde3c:
    if (ctx->pc == 0x1DDE3Cu) {
        ctx->pc = 0x1DDE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDE38u;
        // 0x1dde3c: 0xe7a00038  swc1        $f0, 0x38($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DDE40u;
        goto label_1dde40;
    }
    ctx->pc = 0x1DDE38u;
    SET_GPR_U32(ctx, 31, 0x1DDE40u);
    ctx->pc = 0x1DDE3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DDE38u;
    // 0x1dde3c: 0xe7a00038  swc1        $f0, 0x38($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AA0u, 0x1DDE38u, 0x1DDE40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DDE40u;
label_1dde40:
    // 0x1dde40: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1dde40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1dde44:
    // 0x1dde44: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x1dde44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_1dde48:
    // 0x1dde48: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x1dde48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
label_1dde4c:
    // 0x1dde4c: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x1dde4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1dde50:
    // 0x1dde50: 0xc0766a8  jal         func_1D9AA0
label_1dde54:
    if (ctx->pc == 0x1DDE54u) {
        ctx->pc = 0x1DDE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDE50u;
        // 0x1dde54: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DDE58u;
        goto label_1dde58;
    }
    ctx->pc = 0x1DDE50u;
    SET_GPR_U32(ctx, 31, 0x1DDE58u);
    ctx->pc = 0x1DDE54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DDE50u;
    // 0x1dde54: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AA0u, 0x1DDE50u, 0x1DDE58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DDE58u;
label_1dde58:
    // 0x1dde58: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1dde58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1dde5c:
    // 0x1dde5c: 0x0  nop
    ctx->pc = 0x1dde5cu;
    // NOP
label_1dde60:
    // 0x1dde60: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1dde60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1dde64:
    // 0x1dde64: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1dde64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1dde68:
    // 0x1dde68: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1dde68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1dde6c:
    // 0x1dde6c: 0x3e00008  jr          $ra
label_1dde70:
    if (ctx->pc == 0x1DDE70u) {
        ctx->pc = 0x1DDE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDE6Cu;
        // 0x1dde70: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DDE74u;
        goto label_fallthrough_0x1dde6c;
    }
    ctx->pc = 0x1DDE6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DDE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDE6Cu;
        // 0x1dde70: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DDE6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1dde6c:
    ctx->pc = 0x1DDE74u;
}
