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

// Function: sub_00374010
// Address: 0x374010 - 0x374214
void sub_00374010_0x374010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00374010_0x374010");
#endif

    switch (ctx->pc) {
        case 0x374010u: goto label_374010;
        case 0x374014u: goto label_374014;
        case 0x374018u: goto label_374018;
        case 0x37401cu: goto label_37401c;
        case 0x374020u: goto label_374020;
        case 0x374024u: goto label_374024;
        case 0x374028u: goto label_374028;
        case 0x37402cu: goto label_37402c;
        case 0x374030u: goto label_374030;
        case 0x374034u: goto label_374034;
        case 0x374038u: goto label_374038;
        case 0x37403cu: goto label_37403c;
        case 0x374040u: goto label_374040;
        case 0x374044u: goto label_374044;
        case 0x374048u: goto label_374048;
        case 0x37404cu: goto label_37404c;
        case 0x374050u: goto label_374050;
        case 0x374054u: goto label_374054;
        case 0x374058u: goto label_374058;
        case 0x37405cu: goto label_37405c;
        case 0x374060u: goto label_374060;
        case 0x374064u: goto label_374064;
        case 0x374068u: goto label_374068;
        case 0x37406cu: goto label_37406c;
        case 0x374070u: goto label_374070;
        case 0x374074u: goto label_374074;
        case 0x374078u: goto label_374078;
        case 0x37407cu: goto label_37407c;
        case 0x374080u: goto label_374080;
        case 0x374084u: goto label_374084;
        case 0x374088u: goto label_374088;
        case 0x37408cu: goto label_37408c;
        case 0x374090u: goto label_374090;
        case 0x374094u: goto label_374094;
        case 0x374098u: goto label_374098;
        case 0x37409cu: goto label_37409c;
        case 0x3740a0u: goto label_3740a0;
        case 0x3740a4u: goto label_3740a4;
        case 0x3740a8u: goto label_3740a8;
        case 0x3740acu: goto label_3740ac;
        case 0x3740b0u: goto label_3740b0;
        case 0x3740b4u: goto label_3740b4;
        case 0x3740b8u: goto label_3740b8;
        case 0x3740bcu: goto label_3740bc;
        case 0x3740c0u: goto label_3740c0;
        case 0x3740c4u: goto label_3740c4;
        case 0x3740c8u: goto label_3740c8;
        case 0x3740ccu: goto label_3740cc;
        case 0x3740d0u: goto label_3740d0;
        case 0x3740d4u: goto label_3740d4;
        case 0x3740d8u: goto label_3740d8;
        case 0x3740dcu: goto label_3740dc;
        case 0x3740e0u: goto label_3740e0;
        case 0x3740e4u: goto label_3740e4;
        case 0x3740e8u: goto label_3740e8;
        case 0x3740ecu: goto label_3740ec;
        case 0x3740f0u: goto label_3740f0;
        case 0x3740f4u: goto label_3740f4;
        case 0x3740f8u: goto label_3740f8;
        case 0x3740fcu: goto label_3740fc;
        case 0x374100u: goto label_374100;
        case 0x374104u: goto label_374104;
        case 0x374108u: goto label_374108;
        case 0x37410cu: goto label_37410c;
        case 0x374110u: goto label_374110;
        case 0x374114u: goto label_374114;
        case 0x374118u: goto label_374118;
        case 0x37411cu: goto label_37411c;
        case 0x374120u: goto label_374120;
        case 0x374124u: goto label_374124;
        case 0x374128u: goto label_374128;
        case 0x37412cu: goto label_37412c;
        case 0x374130u: goto label_374130;
        case 0x374134u: goto label_374134;
        case 0x374138u: goto label_374138;
        case 0x37413cu: goto label_37413c;
        case 0x374140u: goto label_374140;
        case 0x374144u: goto label_374144;
        case 0x374148u: goto label_374148;
        case 0x37414cu: goto label_37414c;
        case 0x374150u: goto label_374150;
        case 0x374154u: goto label_374154;
        case 0x374158u: goto label_374158;
        case 0x37415cu: goto label_37415c;
        case 0x374160u: goto label_374160;
        case 0x374164u: goto label_374164;
        case 0x374168u: goto label_374168;
        case 0x37416cu: goto label_37416c;
        case 0x374170u: goto label_374170;
        case 0x374174u: goto label_374174;
        case 0x374178u: goto label_374178;
        case 0x37417cu: goto label_37417c;
        case 0x374180u: goto label_374180;
        case 0x374184u: goto label_374184;
        case 0x374188u: goto label_374188;
        case 0x37418cu: goto label_37418c;
        case 0x374190u: goto label_374190;
        case 0x374194u: goto label_374194;
        case 0x374198u: goto label_374198;
        case 0x37419cu: goto label_37419c;
        case 0x3741a0u: goto label_3741a0;
        case 0x3741a4u: goto label_3741a4;
        case 0x3741a8u: goto label_3741a8;
        case 0x3741acu: goto label_3741ac;
        case 0x3741b0u: goto label_3741b0;
        case 0x3741b4u: goto label_3741b4;
        case 0x3741b8u: goto label_3741b8;
        case 0x3741bcu: goto label_3741bc;
        case 0x3741c0u: goto label_3741c0;
        case 0x3741c4u: goto label_3741c4;
        case 0x3741c8u: goto label_3741c8;
        case 0x3741ccu: goto label_3741cc;
        case 0x3741d0u: goto label_3741d0;
        case 0x3741d4u: goto label_3741d4;
        case 0x3741d8u: goto label_3741d8;
        case 0x3741dcu: goto label_3741dc;
        case 0x3741e0u: goto label_3741e0;
        case 0x3741e4u: goto label_3741e4;
        case 0x3741e8u: goto label_3741e8;
        case 0x3741ecu: goto label_3741ec;
        case 0x3741f0u: goto label_3741f0;
        case 0x3741f4u: goto label_3741f4;
        case 0x3741f8u: goto label_3741f8;
        case 0x3741fcu: goto label_3741fc;
        case 0x374200u: goto label_374200;
        case 0x374204u: goto label_374204;
        case 0x374208u: goto label_374208;
        case 0x37420cu: goto label_37420c;
        case 0x374210u: goto label_374210;
        default: break;
    }

    ctx->pc = 0x374010u;

label_374010:
    // 0x374010: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x374010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_374014:
    // 0x374014: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x374014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_374018:
    // 0x374018: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x374018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_37401c:
    // 0x37401c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x37401cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_374020:
    // 0x374020: 0xc0a60b8  jal         func_2982E0
label_374024:
    if (ctx->pc == 0x374024u) {
        ctx->pc = 0x374024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374020u;
        // 0x374024: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x374028u;
        goto label_374028;
    }
    ctx->pc = 0x374020u;
    SET_GPR_U32(ctx, 31, 0x374028u);
    ctx->pc = 0x374024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x374020u;
    // 0x374024: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2982E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2982E0u, 0x374020u, 0x374028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374028u;
label_374028:
    // 0x374028: 0x92232b24  lbu         $v1, 0x2B24($s1)
    ctx->pc = 0x374028u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 11044)));
label_37402c:
    // 0x37402c: 0x10600074  beqz        $v1, . + 4 + (0x74 << 2)
label_374030:
    if (ctx->pc == 0x374030u) {
        ctx->pc = 0x374034u;
        goto label_374034;
    }
    ctx->pc = 0x37402Cu;
    {
        const bool branch_taken_0x37402c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x37402c) {
            ctx->pc = 0x374200u;
            goto label_374200;
        }
    }
    ctx->pc = 0x374034u;
label_374034:
    // 0x374034: 0x8e2529c0  lw          $a1, 0x29C0($s1)
    ctx->pc = 0x374034u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10688)));
label_374038:
    // 0x374038: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x374038u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_37403c:
    // 0x37403c: 0x10600070  beqz        $v1, . + 4 + (0x70 << 2)
label_374040:
    if (ctx->pc == 0x374040u) {
        ctx->pc = 0x374044u;
        goto label_374044;
    }
    ctx->pc = 0x37403Cu;
    {
        const bool branch_taken_0x37403c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x37403c) {
            ctx->pc = 0x374200u;
            goto label_374200;
        }
    }
    ctx->pc = 0x374044u;
label_374044:
    // 0x374044: 0x8e3001ec  lw          $s0, 0x1EC($s1)
    ctx->pc = 0x374044u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 492)));
label_374048:
    // 0x374048: 0x12000069  beqz        $s0, . + 4 + (0x69 << 2)
label_37404c:
    if (ctx->pc == 0x37404Cu) {
        ctx->pc = 0x37404Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374048u;
        // 0x37404c: 0x24030006  addiu       $v1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x374050u;
        goto label_374050;
    }
    ctx->pc = 0x374048u;
    {
        const bool branch_taken_0x374048 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x37404Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374048u;
        // 0x37404c: 0x24030006  addiu       $v1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x374048) {
            ctx->pc = 0x3741F0u;
            goto label_3741f0;
        }
    }
    ctx->pc = 0x374050u;
label_374050:
    // 0x374050: 0x92040000  lbu         $a0, 0x0($s0)
    ctx->pc = 0x374050u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_374054:
    // 0x374054: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x374054u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_374058:
    // 0x374058: 0x14800061  bnez        $a0, . + 4 + (0x61 << 2)
label_37405c:
    if (ctx->pc == 0x37405Cu) {
        ctx->pc = 0x374060u;
        goto label_374060;
    }
    ctx->pc = 0x374058u;
    {
        const bool branch_taken_0x374058 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x374058) {
            ctx->pc = 0x3741E0u;
            goto label_3741e0;
        }
    }
    ctx->pc = 0x374060u;
label_374060:
    // 0x374060: 0x92040001  lbu         $a0, 0x1($s0)
    ctx->pc = 0x374060u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_374064:
    // 0x374064: 0x3084000f  andi        $a0, $a0, 0xF
    ctx->pc = 0x374064u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
label_374068:
    // 0x374068: 0x1483005d  bne         $a0, $v1, . + 4 + (0x5D << 2)
label_37406c:
    if (ctx->pc == 0x37406Cu) {
        ctx->pc = 0x374070u;
        goto label_374070;
    }
    ctx->pc = 0x374068u;
    {
        const bool branch_taken_0x374068 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x374068) {
            ctx->pc = 0x3741E0u;
            goto label_3741e0;
        }
    }
    ctx->pc = 0x374070u;
label_374070:
    // 0x374070: 0xa4a00000  sh          $zero, 0x0($a1)
    ctx->pc = 0x374070u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 0));
label_374074:
    // 0x374074: 0x3c02008c  lui         $v0, 0x8C
    ctx->pc = 0x374074u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)140 << 16));
label_374078:
    // 0x374078: 0x92060002  lbu         $a2, 0x2($s0)
    ctx->pc = 0x374078u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
label_37407c:
    // 0x37407c: 0x24420958  addiu       $v0, $v0, 0x958
    ctx->pc = 0x37407cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2392));
label_374080:
    // 0x374080: 0x8e3904d4  lw          $t9, 0x4D4($s1)
    ctx->pc = 0x374080u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1236)));
label_374084:
    // 0x374084: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x374084u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_374088:
    // 0x374088: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x374088u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_37408c:
    // 0x37408c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x37408cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_374090:
    // 0x374090: 0x8f390080  lw          $t9, 0x80($t9)
    ctx->pc = 0x374090u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 128)));
label_374094:
    // 0x374094: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x374094u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_374098:
    // 0x374098: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x374098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_37409c:
    // 0x37409c: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x37409cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3740a0:
    // 0x3740a0: 0x320f809  jalr        $t9
label_3740a4:
    if (ctx->pc == 0x3740A4u) {
        ctx->pc = 0x3740A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3740A0u;
        // 0x3740a4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3740A8u;
        goto label_3740a8;
    }
    ctx->pc = 0x3740A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3740A8u);
        ctx->pc = 0x3740A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3740A0u;
        // 0x3740a4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3740A0u, 0x3740A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3740A8u;
label_3740a8:
    // 0x3740a8: 0x92070002  lbu         $a3, 0x2($s0)
    ctx->pc = 0x3740a8u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
label_3740ac:
    // 0x3740ac: 0x3c02008c  lui         $v0, 0x8C
    ctx->pc = 0x3740acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)140 << 16));
label_3740b0:
    // 0x3740b0: 0x24420950  addiu       $v0, $v0, 0x950
    ctx->pc = 0x3740b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2384));
label_3740b4:
    // 0x3740b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3740b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3740b8:
    // 0x3740b8: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x3740b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_3740bc:
    // 0x3740bc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3740bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3740c0:
    // 0x3740c0: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x3740c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_3740c4:
    // 0x3740c4: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x3740c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_3740c8:
    // 0x3740c8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x3740c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_3740cc:
    // 0x3740cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3740ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3740d0:
    // 0x3740d0: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x3740d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3740d4:
    // 0x3740d4: 0xc09fcf4  jal         func_27F3D0
label_3740d8:
    if (ctx->pc == 0x3740D8u) {
        ctx->pc = 0x3740D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3740D4u;
        // 0x3740d8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3740DCu;
        goto label_3740dc;
    }
    ctx->pc = 0x3740D4u;
    SET_GPR_U32(ctx, 31, 0x3740DCu);
    ctx->pc = 0x3740D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3740D4u;
    // 0x3740d8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27F3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27F3D0u, 0x3740D4u, 0x3740DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3740DCu;
label_3740dc:
    // 0x3740dc: 0x92040002  lbu         $a0, 0x2($s0)
    ctx->pc = 0x3740dcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
label_3740e0:
    // 0x3740e0: 0x3c02008c  lui         $v0, 0x8C
    ctx->pc = 0x3740e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)140 << 16));
label_3740e4:
    // 0x3740e4: 0x24420958  addiu       $v0, $v0, 0x958
    ctx->pc = 0x3740e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2392));
label_3740e8:
    // 0x3740e8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x3740e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_3740ec:
    // 0x3740ec: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3740ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3740f0:
    // 0x3740f0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x3740f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_3740f4:
    // 0x3740f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3740f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3740f8:
    // 0x3740f8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3740f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3740fc:
    // 0x3740fc: 0x8c9904d4  lw          $t9, 0x4D4($a0)
    ctx->pc = 0x3740fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1236)));
label_374100:
    // 0x374100: 0x8f390074  lw          $t9, 0x74($t9)
    ctx->pc = 0x374100u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 116)));
label_374104:
    // 0x374104: 0x320f809  jalr        $t9
label_374108:
    if (ctx->pc == 0x374108u) {
        ctx->pc = 0x374108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374104u;
        // 0x374108: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37410Cu;
        goto label_37410c;
    }
    ctx->pc = 0x374104u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x37410Cu);
        ctx->pc = 0x374108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374104u;
        // 0x374108: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x374104u, 0x37410Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x37410Cu;
label_37410c:
    // 0x37410c: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x37410cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_374110:
    // 0x374110: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x374110u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_374114:
    // 0x374114: 0x2442ad10  addiu       $v0, $v0, -0x52F0
    ctx->pc = 0x374114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946064));
label_374118:
    // 0x374118: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x374118u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_37411c:
    // 0x37411c: 0x7ca40000  sq          $a0, 0x0($a1)
    ctx->pc = 0x37411cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 4));
label_374120:
    // 0x374120: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x374120u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_374124:
    // 0x374124: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x374124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_374128:
    // 0x374128: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x374128u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_37412c:
    // 0x37412c: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x37412cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
label_374130:
    // 0x374130: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x374130u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
label_374134:
    // 0x374134: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x374134u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_374138:
    // 0x374138: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x374138u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_37413c:
    // 0x37413c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x37413cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_374140:
    // 0x374140: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x374140u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_374144:
    // 0x374144: 0x0  nop
    ctx->pc = 0x374144u;
    // NOP
label_374148:
    // 0x374148: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x374148u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_37414c:
    // 0x37414c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x37414cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_374150:
    // 0x374150: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_374154:
    if (ctx->pc == 0x374154u) {
        ctx->pc = 0x374158u;
        goto label_374158;
    }
    ctx->pc = 0x374150u;
    {
        const bool branch_taken_0x374150 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x374150) {
            ctx->pc = 0x374168u;
            goto label_374168;
        }
    }
    ctx->pc = 0x374158u;
label_374158:
    // 0x374158: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x374158u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_37415c:
    // 0x37415c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x37415cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_374160:
    // 0x374160: 0x10000008  b           . + 4 + (0x8 << 2)
label_374164:
    if (ctx->pc == 0x374164u) {
        ctx->pc = 0x374164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374160u;
        // 0x374164: 0x3543c  dsll32      $t2, $v1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) << (32 + 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x374168u;
        goto label_374168;
    }
    ctx->pc = 0x374160u;
    {
        const bool branch_taken_0x374160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x374164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374160u;
        // 0x374164: 0x3543c  dsll32      $t2, $v1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x374160) {
            ctx->pc = 0x374184u;
            goto label_374184;
        }
    }
    ctx->pc = 0x374168u;
label_374168:
    // 0x374168: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x374168u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_37416c:
    // 0x37416c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x37416cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_374170:
    // 0x374170: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x374170u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_374174:
    // 0x374174: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x374174u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_374178:
    // 0x374178: 0x0  nop
    ctx->pc = 0x374178u;
    // NOP
label_37417c:
    // 0x37417c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x37417cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_374180:
    // 0x374180: 0x3543c  dsll32      $t2, $v1, 16
    ctx->pc = 0x374180u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) << (32 + 16));
label_374184:
    // 0x374184: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x374184u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_374188:
    // 0x374188: 0xa543f  dsra32      $t2, $t2, 16
    ctx->pc = 0x374188u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 16));
label_37418c:
    // 0x37418c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x37418cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_374190:
    // 0x374190: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x374190u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_374194:
    // 0x374194: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x374194u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_374198:
    // 0x374198: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x374198u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_37419c:
    // 0x37419c: 0xc0a90f4  jal         func_2A43D0
label_3741a0:
    if (ctx->pc == 0x3741A0u) {
        ctx->pc = 0x3741A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37419Cu;
        // 0x3741a0: 0x27a90030  addiu       $t1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3741A4u;
        goto label_3741a4;
    }
    ctx->pc = 0x37419Cu;
    SET_GPR_U32(ctx, 31, 0x3741A4u);
    ctx->pc = 0x3741A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37419Cu;
    // 0x3741a0: 0x27a90030  addiu       $t1, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A43D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A43D0u, 0x37419Cu, 0x3741A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3741A4u;
label_3741a4:
    // 0x3741a4: 0x8e240148  lw          $a0, 0x148($s1)
    ctx->pc = 0x3741a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
label_3741a8:
    // 0x3741a8: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x3741a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
label_3741ac:
    // 0x3741ac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3741acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3741b0:
    // 0x3741b0: 0x34838000  ori         $v1, $a0, 0x8000
    ctx->pc = 0x3741b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32768);
label_3741b4:
    // 0x3741b4: 0xae230148  sw          $v1, 0x148($s1)
    ctx->pc = 0x3741b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 328), GPR_U32(ctx, 3));
label_3741b8:
    // 0x3741b8: 0x8e230148  lw          $v1, 0x148($s1)
    ctx->pc = 0x3741b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
label_3741bc:
    // 0x3741bc: 0x34631000  ori         $v1, $v1, 0x1000
    ctx->pc = 0x3741bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4096);
label_3741c0:
    // 0x3741c0: 0xae230148  sw          $v1, 0x148($s1)
    ctx->pc = 0x3741c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 328), GPR_U32(ctx, 3));
label_3741c4:
    // 0x3741c4: 0xc6220024  lwc1        $f2, 0x24($s1)
    ctx->pc = 0x3741c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3741c8:
    // 0x3741c8: 0xc62128f0  lwc1        $f1, 0x28F0($s1)
    ctx->pc = 0x3741c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 10480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3741cc:
    // 0x3741cc: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x3741ccu;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_3741d0:
    // 0x3741d0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x3741d0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_3741d4:
    // 0x3741d4: 0x1000000a  b           . + 4 + (0xA << 2)
label_3741d8:
    if (ctx->pc == 0x3741D8u) {
        ctx->pc = 0x3741D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3741D4u;
        // 0x3741d8: 0xe6200024  swc1        $f0, 0x24($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3741DCu;
        goto label_3741dc;
    }
    ctx->pc = 0x3741D4u;
    {
        const bool branch_taken_0x3741d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3741D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3741D4u;
        // 0x3741d8: 0xe6200024  swc1        $f0, 0x24($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3741d4) {
            ctx->pc = 0x374200u;
            goto label_374200;
        }
    }
    ctx->pc = 0x3741DCu;
label_3741dc:
    // 0x3741dc: 0x0  nop
    ctx->pc = 0x3741dcu;
    // NOP
label_3741e0:
    // 0x3741e0: 0x8e10000c  lw          $s0, 0xC($s0)
    ctx->pc = 0x3741e0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_3741e4:
    // 0x3741e4: 0x1600ff9a  bnez        $s0, . + 4 + (-0x66 << 2)
label_3741e8:
    if (ctx->pc == 0x3741E8u) {
        ctx->pc = 0x3741ECu;
        goto label_3741ec;
    }
    ctx->pc = 0x3741E4u;
    {
        const bool branch_taken_0x3741e4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x3741e4) {
            ctx->pc = 0x374050u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_374050;
        }
    }
    ctx->pc = 0x3741ECu;
label_3741ec:
    // 0x3741ec: 0x0  nop
    ctx->pc = 0x3741ecu;
    // NOP
label_3741f0:
    // 0x3741f0: 0x8e232b20  lw          $v1, 0x2B20($s1)
    ctx->pc = 0x3741f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11040)));
label_3741f4:
    // 0x3741f4: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x3741f4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
label_3741f8:
    // 0x3741f8: 0xae20020c  sw          $zero, 0x20C($s1)
    ctx->pc = 0x3741f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 524), GPR_U32(ctx, 0));
label_3741fc:
    // 0x3741fc: 0x0  nop
    ctx->pc = 0x3741fcu;
    // NOP
label_374200:
    // 0x374200: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x374200u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_374204:
    // 0x374204: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x374204u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_374208:
    // 0x374208: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x374208u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_37420c:
    // 0x37420c: 0x3e00008  jr          $ra
label_374210:
    if (ctx->pc == 0x374210u) {
        ctx->pc = 0x374210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37420Cu;
        // 0x374210: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x374214u;
        goto label_fallthrough_0x37420c;
    }
    ctx->pc = 0x37420Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x374210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37420Cu;
        // 0x374210: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37420Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x37420c:
    ctx->pc = 0x374214u;
}
