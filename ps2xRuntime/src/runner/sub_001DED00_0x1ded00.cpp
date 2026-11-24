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

// Function: sub_001DED00
// Address: 0x1ded00 - 0x1deedc
void sub_001DED00_0x1ded00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DED00_0x1ded00");
#endif

    switch (ctx->pc) {
        case 0x1ded00u: goto label_1ded00;
        case 0x1ded04u: goto label_1ded04;
        case 0x1ded08u: goto label_1ded08;
        case 0x1ded0cu: goto label_1ded0c;
        case 0x1ded10u: goto label_1ded10;
        case 0x1ded14u: goto label_1ded14;
        case 0x1ded18u: goto label_1ded18;
        case 0x1ded1cu: goto label_1ded1c;
        case 0x1ded20u: goto label_1ded20;
        case 0x1ded24u: goto label_1ded24;
        case 0x1ded28u: goto label_1ded28;
        case 0x1ded2cu: goto label_1ded2c;
        case 0x1ded30u: goto label_1ded30;
        case 0x1ded34u: goto label_1ded34;
        case 0x1ded38u: goto label_1ded38;
        case 0x1ded3cu: goto label_1ded3c;
        case 0x1ded40u: goto label_1ded40;
        case 0x1ded44u: goto label_1ded44;
        case 0x1ded48u: goto label_1ded48;
        case 0x1ded4cu: goto label_1ded4c;
        case 0x1ded50u: goto label_1ded50;
        case 0x1ded54u: goto label_1ded54;
        case 0x1ded58u: goto label_1ded58;
        case 0x1ded5cu: goto label_1ded5c;
        case 0x1ded60u: goto label_1ded60;
        case 0x1ded64u: goto label_1ded64;
        case 0x1ded68u: goto label_1ded68;
        case 0x1ded6cu: goto label_1ded6c;
        case 0x1ded70u: goto label_1ded70;
        case 0x1ded74u: goto label_1ded74;
        case 0x1ded78u: goto label_1ded78;
        case 0x1ded7cu: goto label_1ded7c;
        case 0x1ded80u: goto label_1ded80;
        case 0x1ded84u: goto label_1ded84;
        case 0x1ded88u: goto label_1ded88;
        case 0x1ded8cu: goto label_1ded8c;
        case 0x1ded90u: goto label_1ded90;
        case 0x1ded94u: goto label_1ded94;
        case 0x1ded98u: goto label_1ded98;
        case 0x1ded9cu: goto label_1ded9c;
        case 0x1deda0u: goto label_1deda0;
        case 0x1deda4u: goto label_1deda4;
        case 0x1deda8u: goto label_1deda8;
        case 0x1dedacu: goto label_1dedac;
        case 0x1dedb0u: goto label_1dedb0;
        case 0x1dedb4u: goto label_1dedb4;
        case 0x1dedb8u: goto label_1dedb8;
        case 0x1dedbcu: goto label_1dedbc;
        case 0x1dedc0u: goto label_1dedc0;
        case 0x1dedc4u: goto label_1dedc4;
        case 0x1dedc8u: goto label_1dedc8;
        case 0x1dedccu: goto label_1dedcc;
        case 0x1dedd0u: goto label_1dedd0;
        case 0x1dedd4u: goto label_1dedd4;
        case 0x1dedd8u: goto label_1dedd8;
        case 0x1deddcu: goto label_1deddc;
        case 0x1dede0u: goto label_1dede0;
        case 0x1dede4u: goto label_1dede4;
        case 0x1dede8u: goto label_1dede8;
        case 0x1dedecu: goto label_1dedec;
        case 0x1dedf0u: goto label_1dedf0;
        case 0x1dedf4u: goto label_1dedf4;
        case 0x1dedf8u: goto label_1dedf8;
        case 0x1dedfcu: goto label_1dedfc;
        case 0x1dee00u: goto label_1dee00;
        case 0x1dee04u: goto label_1dee04;
        case 0x1dee08u: goto label_1dee08;
        case 0x1dee0cu: goto label_1dee0c;
        case 0x1dee10u: goto label_1dee10;
        case 0x1dee14u: goto label_1dee14;
        case 0x1dee18u: goto label_1dee18;
        case 0x1dee1cu: goto label_1dee1c;
        case 0x1dee20u: goto label_1dee20;
        case 0x1dee24u: goto label_1dee24;
        case 0x1dee28u: goto label_1dee28;
        case 0x1dee2cu: goto label_1dee2c;
        case 0x1dee30u: goto label_1dee30;
        case 0x1dee34u: goto label_1dee34;
        case 0x1dee38u: goto label_1dee38;
        case 0x1dee3cu: goto label_1dee3c;
        case 0x1dee40u: goto label_1dee40;
        case 0x1dee44u: goto label_1dee44;
        case 0x1dee48u: goto label_1dee48;
        case 0x1dee4cu: goto label_1dee4c;
        case 0x1dee50u: goto label_1dee50;
        case 0x1dee54u: goto label_1dee54;
        case 0x1dee58u: goto label_1dee58;
        case 0x1dee5cu: goto label_1dee5c;
        case 0x1dee60u: goto label_1dee60;
        case 0x1dee64u: goto label_1dee64;
        case 0x1dee68u: goto label_1dee68;
        case 0x1dee6cu: goto label_1dee6c;
        case 0x1dee70u: goto label_1dee70;
        case 0x1dee74u: goto label_1dee74;
        case 0x1dee78u: goto label_1dee78;
        case 0x1dee7cu: goto label_1dee7c;
        case 0x1dee80u: goto label_1dee80;
        case 0x1dee84u: goto label_1dee84;
        case 0x1dee88u: goto label_1dee88;
        case 0x1dee8cu: goto label_1dee8c;
        case 0x1dee90u: goto label_1dee90;
        case 0x1dee94u: goto label_1dee94;
        case 0x1dee98u: goto label_1dee98;
        case 0x1dee9cu: goto label_1dee9c;
        case 0x1deea0u: goto label_1deea0;
        case 0x1deea4u: goto label_1deea4;
        case 0x1deea8u: goto label_1deea8;
        case 0x1deeacu: goto label_1deeac;
        case 0x1deeb0u: goto label_1deeb0;
        case 0x1deeb4u: goto label_1deeb4;
        case 0x1deeb8u: goto label_1deeb8;
        case 0x1deebcu: goto label_1deebc;
        case 0x1deec0u: goto label_1deec0;
        case 0x1deec4u: goto label_1deec4;
        case 0x1deec8u: goto label_1deec8;
        case 0x1deeccu: goto label_1deecc;
        case 0x1deed0u: goto label_1deed0;
        case 0x1deed4u: goto label_1deed4;
        case 0x1deed8u: goto label_1deed8;
        default: break;
    }

    ctx->pc = 0x1ded00u;

label_1ded00:
    // 0x1ded00: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1ded00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1ded04:
    // 0x1ded04: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1ded04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1ded08:
    // 0x1ded08: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ded08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1ded0c:
    // 0x1ded0c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ded0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1ded10:
    // 0x1ded10: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1ded10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1ded14:
    // 0x1ded14: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1ded18:
    if (ctx->pc == 0x1DED18u) {
        ctx->pc = 0x1DED18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DED14u;
        // 0x1ded18: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DED1Cu;
        goto label_1ded1c;
    }
    ctx->pc = 0x1DED14u;
    {
        const bool branch_taken_0x1ded14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DED18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DED14u;
        // 0x1ded18: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ded14) {
            ctx->pc = 0x1DED28u;
            goto label_1ded28;
        }
    }
    ctx->pc = 0x1DED1Cu;
label_1ded1c:
    // 0x1ded1c: 0x1000006a  b           . + 4 + (0x6A << 2)
label_1ded20:
    if (ctx->pc == 0x1DED20u) {
        ctx->pc = 0x1DED20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DED1Cu;
        // 0x1ded20: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DED24u;
        goto label_1ded24;
    }
    ctx->pc = 0x1DED1Cu;
    {
        const bool branch_taken_0x1ded1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DED20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DED1Cu;
        // 0x1ded20: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ded1c) {
            ctx->pc = 0x1DEEC8u;
            goto label_1deec8;
        }
    }
    ctx->pc = 0x1DED24u;
label_1ded24:
    // 0x1ded24: 0x0  nop
    ctx->pc = 0x1ded24u;
    // NOP
label_1ded28:
    // 0x1ded28: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1ded28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1ded2c:
    // 0x1ded2c: 0x8c990020  lw          $t9, 0x20($a0)
    ctx->pc = 0x1ded2cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_1ded30:
    // 0x1ded30: 0x8f390050  lw          $t9, 0x50($t9)
    ctx->pc = 0x1ded30u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 80)));
label_1ded34:
    // 0x1ded34: 0x320f809  jalr        $t9
label_1ded38:
    if (ctx->pc == 0x1DED38u) {
        ctx->pc = 0x1DED3Cu;
        goto label_1ded3c;
    }
    ctx->pc = 0x1DED34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DED3Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DED34u, 0x1DED3Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DED3Cu;
label_1ded3c:
    // 0x1ded3c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1ded40:
    if (ctx->pc == 0x1DED40u) {
        ctx->pc = 0x1DED44u;
        goto label_1ded44;
    }
    ctx->pc = 0x1DED3Cu;
    {
        const bool branch_taken_0x1ded3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ded3c) {
            ctx->pc = 0x1DED60u;
            goto label_1ded60;
        }
    }
    ctx->pc = 0x1DED44u;
label_1ded44:
    // 0x1ded44: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1ded44u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1ded48:
    // 0x1ded48: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x1ded48u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_1ded4c:
    // 0x1ded4c: 0x320f809  jalr        $t9
label_1ded50:
    if (ctx->pc == 0x1DED50u) {
        ctx->pc = 0x1DED50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DED4Cu;
        // 0x1ded50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DED54u;
        goto label_1ded54;
    }
    ctx->pc = 0x1DED4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DED54u);
        ctx->pc = 0x1DED50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DED4Cu;
        // 0x1ded50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DED4Cu, 0x1DED54u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DED54u;
label_1ded54:
    // 0x1ded54: 0x1000005c  b           . + 4 + (0x5C << 2)
label_1ded58:
    if (ctx->pc == 0x1DED58u) {
        ctx->pc = 0x1DED58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DED54u;
        // 0x1ded58: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DED5Cu;
        goto label_1ded5c;
    }
    ctx->pc = 0x1DED54u;
    {
        const bool branch_taken_0x1ded54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DED58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DED54u;
        // 0x1ded58: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ded54) {
            ctx->pc = 0x1DEEC8u;
            goto label_1deec8;
        }
    }
    ctx->pc = 0x1DED5Cu;
label_1ded5c:
    // 0x1ded5c: 0x0  nop
    ctx->pc = 0x1ded5cu;
    // NOP
label_1ded60:
    // 0x1ded60: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1ded60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1ded64:
    // 0x1ded64: 0x8e080004  lw          $t0, 0x4($s0)
    ctx->pc = 0x1ded64u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1ded68:
    // 0x1ded68: 0x84460000  lh          $a2, 0x0($v0)
    ctx->pc = 0x1ded68u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1ded6c:
    // 0x1ded6c: 0x8507000e  lh          $a3, 0xE($t0)
    ctx->pc = 0x1ded6cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 14)));
label_1ded70:
    // 0x1ded70: 0x8503000c  lh          $v1, 0xC($t0)
    ctx->pc = 0x1ded70u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 12)));
label_1ded74:
    // 0x1ded74: 0x90420003  lbu         $v0, 0x3($v0)
    ctx->pc = 0x1ded74u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
label_1ded78:
    // 0x1ded78: 0xe6282a  slt         $a1, $a3, $a2
    ctx->pc = 0x1ded78u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_1ded7c:
    // 0x1ded7c: 0xc3302a  slt         $a2, $a2, $v1
    ctx->pc = 0x1ded7cu;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1ded80:
    // 0x1ded80: 0x38e37ffd  xori        $v1, $a3, 0x7FFD
    ctx->pc = 0x1ded80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) ^ (uint64_t)(uint16_t)32765);
label_1ded84:
    // 0x1ded84: 0xc52825  or          $a1, $a2, $a1
    ctx->pc = 0x1ded84u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
label_1ded88:
    // 0x1ded88: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x1ded88u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1ded8c:
    // 0x1ded8c: 0x402026  xor         $a0, $v0, $zero
    ctx->pc = 0x1ded8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
label_1ded90:
    // 0x1ded90: 0x28420001  slti        $v0, $v0, 0x1
    ctx->pc = 0x1ded90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1) ? 1 : 0);
label_1ded94:
    // 0x1ded94: 0x2c840001  sltiu       $a0, $a0, 0x1
    ctx->pc = 0x1ded94u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1ded98:
    // 0x1ded98: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1ded98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1ded9c:
    // 0x1ded9c: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x1ded9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
label_1deda0:
    // 0x1deda0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1deda0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1deda4:
    // 0x1deda4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1deda4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1deda8:
    // 0x1deda8: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1deda8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_1dedac:
    // 0x1dedac: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1dedb0:
    if (ctx->pc == 0x1DEDB0u) {
        ctx->pc = 0x1DEDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEDACu;
        // 0x1dedb0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DEDB4u;
        goto label_1dedb4;
    }
    ctx->pc = 0x1DEDACu;
    {
        const bool branch_taken_0x1dedac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DEDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEDACu;
        // 0x1dedb0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dedac) {
            ctx->pc = 0x1DEDC0u;
            goto label_1dedc0;
        }
    }
    ctx->pc = 0x1DEDB4u;
label_1dedb4:
    // 0x1dedb4: 0x10000044  b           . + 4 + (0x44 << 2)
label_1dedb8:
    if (ctx->pc == 0x1DEDB8u) {
        ctx->pc = 0x1DEDBCu;
        goto label_1dedbc;
    }
    ctx->pc = 0x1DEDB4u;
    {
        const bool branch_taken_0x1dedb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dedb4) {
            ctx->pc = 0x1DEEC8u;
            goto label_1deec8;
        }
    }
    ctx->pc = 0x1DEDBCu;
label_1dedbc:
    // 0x1dedbc: 0x0  nop
    ctx->pc = 0x1dedbcu;
    // NOP
label_1dedc0:
    // 0x1dedc0: 0x25110010  addiu       $s1, $t0, 0x10
    ctx->pc = 0x1dedc0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
label_1dedc4:
    // 0x1dedc4: 0x25050020  addiu       $a1, $t0, 0x20
    ctx->pc = 0x1dedc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
label_1dedc8:
    // 0x1dedc8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1dedc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1dedcc:
    // 0x1dedcc: 0xc076688  jal         func_1D9A20
label_1dedd0:
    if (ctx->pc == 0x1DEDD0u) {
        ctx->pc = 0x1DEDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEDCCu;
        // 0x1dedd0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DEDD4u;
        goto label_1dedd4;
    }
    ctx->pc = 0x1DEDCCu;
    SET_GPR_U32(ctx, 31, 0x1DEDD4u);
    ctx->pc = 0x1DEDD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DEDCCu;
    // 0x1dedd0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A20u, 0x1DEDCCu, 0x1DEDD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DEDD4u;
label_1dedd4:
    // 0x1dedd4: 0x8f8a80e0  lw          $t2, -0x7F20($gp)
    ctx->pc = 0x1dedd4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
label_1dedd8:
    // 0x1dedd8: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1dedd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_1deddc:
    // 0x1deddc: 0x34420dcd  ori         $v0, $v0, 0xDCD
    ctx->pc = 0x1deddcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
label_1dede0:
    // 0x1dede0: 0x8fa90030  lw          $t1, 0x30($sp)
    ctx->pc = 0x1dede0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1dede4:
    // 0x1dede4: 0x27a80034  addiu       $t0, $sp, 0x34
    ctx->pc = 0x1dede4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
label_1dede8:
    // 0x1dede8: 0x27a70038  addiu       $a3, $sp, 0x38
    ctx->pc = 0x1dede8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
label_1dedec:
    // 0x1dedec: 0x27a3003c  addiu       $v1, $sp, 0x3C
    ctx->pc = 0x1dedecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
label_1dedf0:
    // 0x1dedf0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1dedf0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1dedf4:
    // 0x1dedf4: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1dedf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1dedf8:
    // 0x1dedf8: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1dedf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1dedfc:
    // 0x1dedfc: 0x1425818  mult        $t3, $t2, $v0
    ctx->pc = 0x1dedfcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
label_1dee00:
    // 0x1dee00: 0x252a0001  addiu       $t2, $t1, 0x1
    ctx->pc = 0x1dee00u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_1dee04:
    // 0x1dee04: 0x25690001  addiu       $t1, $t3, 0x1
    ctx->pc = 0x1dee04u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
label_1dee08:
    // 0x1dee08: 0xaf8980e0  sw          $t1, -0x7F20($gp)
    ctx->pc = 0x1dee08u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 9));
label_1dee0c:
    // 0x1dee0c: 0x8f8980e0  lw          $t1, -0x7F20($gp)
    ctx->pc = 0x1dee0cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
label_1dee10:
    // 0x1dee10: 0x95b02  srl         $t3, $t1, 12
    ctx->pc = 0x1dee10u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 9), 12));
label_1dee14:
    // 0x1dee14: 0x16a001b  divu        $zero, $t3, $t2
    ctx->pc = 0x1dee14u;
    { uint32_t divisor = GPR_U32(ctx, 10); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 11) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 11) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,11); } }
label_1dee18:
    // 0x1dee18: 0x71224818  mult1       $t1, $t1, $v0
    ctx->pc = 0x1dee18u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 2); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_1dee1c:
    // 0x1dee1c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1dee1cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_1dee20:
    // 0x1dee20: 0xaf8980e0  sw          $t1, -0x7F20($gp)
    ctx->pc = 0x1dee20u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 9));
label_1dee24:
    // 0x1dee24: 0x4810  mfhi        $t1
    ctx->pc = 0x1dee24u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_1dee28:
    // 0x1dee28: 0x8f8b80e0  lw          $t3, -0x7F20($gp)
    ctx->pc = 0x1dee28u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
label_1dee2c:
    // 0x1dee2c: 0xafa90030  sw          $t1, 0x30($sp)
    ctx->pc = 0x1dee2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 9));
label_1dee30:
    // 0x1dee30: 0x8d090000  lw          $t1, 0x0($t0)
    ctx->pc = 0x1dee30u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_1dee34:
    // 0x1dee34: 0xb5302  srl         $t2, $t3, 12
    ctx->pc = 0x1dee34u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 11), 12));
label_1dee38:
    // 0x1dee38: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1dee38u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_1dee3c:
    // 0x1dee3c: 0x149001b  divu        $zero, $t2, $t1
    ctx->pc = 0x1dee3cu;
    { uint32_t divisor = GPR_U32(ctx, 9); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,10); } }
label_1dee40:
    // 0x1dee40: 0x0  nop
    ctx->pc = 0x1dee40u;
    // NOP
label_1dee44:
    // 0x1dee44: 0x0  nop
    ctx->pc = 0x1dee44u;
    // NOP
label_1dee48:
    // 0x1dee48: 0x4810  mfhi        $t1
    ctx->pc = 0x1dee48u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_1dee4c:
    // 0x1dee4c: 0xad090000  sw          $t1, 0x0($t0)
    ctx->pc = 0x1dee4cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 9));
label_1dee50:
    // 0x1dee50: 0x1624018  mult        $t0, $t3, $v0
    ctx->pc = 0x1dee50u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
label_1dee54:
    // 0x1dee54: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1dee54u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1dee58:
    // 0x1dee58: 0xaf8880e0  sw          $t0, -0x7F20($gp)
    ctx->pc = 0x1dee58u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 8));
label_1dee5c:
    // 0x1dee5c: 0x8f8980e0  lw          $t1, -0x7F20($gp)
    ctx->pc = 0x1dee5cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
label_1dee60:
    // 0x1dee60: 0x8ce80000  lw          $t0, 0x0($a3)
    ctx->pc = 0x1dee60u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_1dee64:
    // 0x1dee64: 0x71221018  mult1       $v0, $t1, $v0
    ctx->pc = 0x1dee64u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 2); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_1dee68:
    // 0x1dee68: 0x94b02  srl         $t1, $t1, 12
    ctx->pc = 0x1dee68u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 9), 12));
label_1dee6c:
    // 0x1dee6c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1dee6cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1dee70:
    // 0x1dee70: 0x128001b  divu        $zero, $t1, $t0
    ctx->pc = 0x1dee70u;
    { uint32_t divisor = GPR_U32(ctx, 8); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 9) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 9) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,9); } }
label_1dee74:
    // 0x1dee74: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1dee74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1dee78:
    // 0x1dee78: 0x0  nop
    ctx->pc = 0x1dee78u;
    // NOP
label_1dee7c:
    // 0x1dee7c: 0x4010  mfhi        $t0
    ctx->pc = 0x1dee7cu;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_1dee80:
    // 0x1dee80: 0xace80000  sw          $t0, 0x0($a3)
    ctx->pc = 0x1dee80u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 8));
label_1dee84:
    // 0x1dee84: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x1dee84u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
label_1dee88:
    // 0x1dee88: 0x8f8780e0  lw          $a3, -0x7F20($gp)
    ctx->pc = 0x1dee88u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
label_1dee8c:
    // 0x1dee8c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1dee8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1dee90:
    // 0x1dee90: 0x73b02  srl         $a3, $a3, 12
    ctx->pc = 0x1dee90u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 7), 12));
label_1dee94:
    // 0x1dee94: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1dee94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1dee98:
    // 0x1dee98: 0xe2001b  divu        $zero, $a3, $v0
    ctx->pc = 0x1dee98u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,7); } }
label_1dee9c:
    // 0x1dee9c: 0x0  nop
    ctx->pc = 0x1dee9cu;
    // NOP
label_1deea0:
    // 0x1deea0: 0x0  nop
    ctx->pc = 0x1deea0u;
    // NOP
label_1deea4:
    // 0x1deea4: 0x1010  mfhi        $v0
    ctx->pc = 0x1deea4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1deea8:
    // 0x1deea8: 0xc076680  jal         func_1D9A00
label_1deeac:
    if (ctx->pc == 0x1DEEACu) {
        ctx->pc = 0x1DEEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEEA8u;
        // 0x1deeac: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DEEB0u;
        goto label_1deeb0;
    }
    ctx->pc = 0x1DEEA8u;
    SET_GPR_U32(ctx, 31, 0x1DEEB0u);
    ctx->pc = 0x1DEEACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DEEA8u;
    // 0x1deeac: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A00u, 0x1DEEA8u, 0x1DEEB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DEEB0u;
label_1deeb0:
    // 0x1deeb0: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x1deeb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1deeb4:
    // 0x1deeb4: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x1deeb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1deeb8:
    // 0x1deeb8: 0xc076680  jal         func_1D9A00
label_1deebc:
    if (ctx->pc == 0x1DEEBCu) {
        ctx->pc = 0x1DEEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEEB8u;
        // 0x1deebc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DEEC0u;
        goto label_1deec0;
    }
    ctx->pc = 0x1DEEB8u;
    SET_GPR_U32(ctx, 31, 0x1DEEC0u);
    ctx->pc = 0x1DEEBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DEEB8u;
    // 0x1deebc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A00u, 0x1DEEB8u, 0x1DEEC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DEEC0u;
label_1deec0:
    // 0x1deec0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1deec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1deec4:
    // 0x1deec4: 0x0  nop
    ctx->pc = 0x1deec4u;
    // NOP
label_1deec8:
    // 0x1deec8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1deec8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1deecc:
    // 0x1deecc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1deeccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1deed0:
    // 0x1deed0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1deed0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1deed4:
    // 0x1deed4: 0x3e00008  jr          $ra
label_1deed8:
    if (ctx->pc == 0x1DEED8u) {
        ctx->pc = 0x1DEED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEED4u;
        // 0x1deed8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DEEDCu;
        goto label_fallthrough_0x1deed4;
    }
    ctx->pc = 0x1DEED4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DEED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEED4u;
        // 0x1deed8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DEED4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1deed4:
    ctx->pc = 0x1DEEDCu;
}
