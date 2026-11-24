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

// Function: sub_001DDFE0
// Address: 0x1ddfe0 - 0x1de20c
void sub_001DDFE0_0x1ddfe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DDFE0_0x1ddfe0");
#endif

    switch (ctx->pc) {
        case 0x1ddfe0u: goto label_1ddfe0;
        case 0x1ddfe4u: goto label_1ddfe4;
        case 0x1ddfe8u: goto label_1ddfe8;
        case 0x1ddfecu: goto label_1ddfec;
        case 0x1ddff0u: goto label_1ddff0;
        case 0x1ddff4u: goto label_1ddff4;
        case 0x1ddff8u: goto label_1ddff8;
        case 0x1ddffcu: goto label_1ddffc;
        case 0x1de000u: goto label_1de000;
        case 0x1de004u: goto label_1de004;
        case 0x1de008u: goto label_1de008;
        case 0x1de00cu: goto label_1de00c;
        case 0x1de010u: goto label_1de010;
        case 0x1de014u: goto label_1de014;
        case 0x1de018u: goto label_1de018;
        case 0x1de01cu: goto label_1de01c;
        case 0x1de020u: goto label_1de020;
        case 0x1de024u: goto label_1de024;
        case 0x1de028u: goto label_1de028;
        case 0x1de02cu: goto label_1de02c;
        case 0x1de030u: goto label_1de030;
        case 0x1de034u: goto label_1de034;
        case 0x1de038u: goto label_1de038;
        case 0x1de03cu: goto label_1de03c;
        case 0x1de040u: goto label_1de040;
        case 0x1de044u: goto label_1de044;
        case 0x1de048u: goto label_1de048;
        case 0x1de04cu: goto label_1de04c;
        case 0x1de050u: goto label_1de050;
        case 0x1de054u: goto label_1de054;
        case 0x1de058u: goto label_1de058;
        case 0x1de05cu: goto label_1de05c;
        case 0x1de060u: goto label_1de060;
        case 0x1de064u: goto label_1de064;
        case 0x1de068u: goto label_1de068;
        case 0x1de06cu: goto label_1de06c;
        case 0x1de070u: goto label_1de070;
        case 0x1de074u: goto label_1de074;
        case 0x1de078u: goto label_1de078;
        case 0x1de07cu: goto label_1de07c;
        case 0x1de080u: goto label_1de080;
        case 0x1de084u: goto label_1de084;
        case 0x1de088u: goto label_1de088;
        case 0x1de08cu: goto label_1de08c;
        case 0x1de090u: goto label_1de090;
        case 0x1de094u: goto label_1de094;
        case 0x1de098u: goto label_1de098;
        case 0x1de09cu: goto label_1de09c;
        case 0x1de0a0u: goto label_1de0a0;
        case 0x1de0a4u: goto label_1de0a4;
        case 0x1de0a8u: goto label_1de0a8;
        case 0x1de0acu: goto label_1de0ac;
        case 0x1de0b0u: goto label_1de0b0;
        case 0x1de0b4u: goto label_1de0b4;
        case 0x1de0b8u: goto label_1de0b8;
        case 0x1de0bcu: goto label_1de0bc;
        case 0x1de0c0u: goto label_1de0c0;
        case 0x1de0c4u: goto label_1de0c4;
        case 0x1de0c8u: goto label_1de0c8;
        case 0x1de0ccu: goto label_1de0cc;
        case 0x1de0d0u: goto label_1de0d0;
        case 0x1de0d4u: goto label_1de0d4;
        case 0x1de0d8u: goto label_1de0d8;
        case 0x1de0dcu: goto label_1de0dc;
        case 0x1de0e0u: goto label_1de0e0;
        case 0x1de0e4u: goto label_1de0e4;
        case 0x1de0e8u: goto label_1de0e8;
        case 0x1de0ecu: goto label_1de0ec;
        case 0x1de0f0u: goto label_1de0f0;
        case 0x1de0f4u: goto label_1de0f4;
        case 0x1de0f8u: goto label_1de0f8;
        case 0x1de0fcu: goto label_1de0fc;
        case 0x1de100u: goto label_1de100;
        case 0x1de104u: goto label_1de104;
        case 0x1de108u: goto label_1de108;
        case 0x1de10cu: goto label_1de10c;
        case 0x1de110u: goto label_1de110;
        case 0x1de114u: goto label_1de114;
        case 0x1de118u: goto label_1de118;
        case 0x1de11cu: goto label_1de11c;
        case 0x1de120u: goto label_1de120;
        case 0x1de124u: goto label_1de124;
        case 0x1de128u: goto label_1de128;
        case 0x1de12cu: goto label_1de12c;
        case 0x1de130u: goto label_1de130;
        case 0x1de134u: goto label_1de134;
        case 0x1de138u: goto label_1de138;
        case 0x1de13cu: goto label_1de13c;
        case 0x1de140u: goto label_1de140;
        case 0x1de144u: goto label_1de144;
        case 0x1de148u: goto label_1de148;
        case 0x1de14cu: goto label_1de14c;
        case 0x1de150u: goto label_1de150;
        case 0x1de154u: goto label_1de154;
        case 0x1de158u: goto label_1de158;
        case 0x1de15cu: goto label_1de15c;
        case 0x1de160u: goto label_1de160;
        case 0x1de164u: goto label_1de164;
        case 0x1de168u: goto label_1de168;
        case 0x1de16cu: goto label_1de16c;
        case 0x1de170u: goto label_1de170;
        case 0x1de174u: goto label_1de174;
        case 0x1de178u: goto label_1de178;
        case 0x1de17cu: goto label_1de17c;
        case 0x1de180u: goto label_1de180;
        case 0x1de184u: goto label_1de184;
        case 0x1de188u: goto label_1de188;
        case 0x1de18cu: goto label_1de18c;
        case 0x1de190u: goto label_1de190;
        case 0x1de194u: goto label_1de194;
        case 0x1de198u: goto label_1de198;
        case 0x1de19cu: goto label_1de19c;
        case 0x1de1a0u: goto label_1de1a0;
        case 0x1de1a4u: goto label_1de1a4;
        case 0x1de1a8u: goto label_1de1a8;
        case 0x1de1acu: goto label_1de1ac;
        case 0x1de1b0u: goto label_1de1b0;
        case 0x1de1b4u: goto label_1de1b4;
        case 0x1de1b8u: goto label_1de1b8;
        case 0x1de1bcu: goto label_1de1bc;
        case 0x1de1c0u: goto label_1de1c0;
        case 0x1de1c4u: goto label_1de1c4;
        case 0x1de1c8u: goto label_1de1c8;
        case 0x1de1ccu: goto label_1de1cc;
        case 0x1de1d0u: goto label_1de1d0;
        case 0x1de1d4u: goto label_1de1d4;
        case 0x1de1d8u: goto label_1de1d8;
        case 0x1de1dcu: goto label_1de1dc;
        case 0x1de1e0u: goto label_1de1e0;
        case 0x1de1e4u: goto label_1de1e4;
        case 0x1de1e8u: goto label_1de1e8;
        case 0x1de1ecu: goto label_1de1ec;
        case 0x1de1f0u: goto label_1de1f0;
        case 0x1de1f4u: goto label_1de1f4;
        case 0x1de1f8u: goto label_1de1f8;
        case 0x1de1fcu: goto label_1de1fc;
        case 0x1de200u: goto label_1de200;
        case 0x1de204u: goto label_1de204;
        case 0x1de208u: goto label_1de208;
        default: break;
    }

    ctx->pc = 0x1ddfe0u;

label_1ddfe0:
    // 0x1ddfe0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1ddfe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1ddfe4:
    // 0x1ddfe4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1ddfe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1ddfe8:
    // 0x1ddfe8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ddfe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1ddfec:
    // 0x1ddfec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ddfecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1ddff0:
    // 0x1ddff0: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1ddff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1ddff4:
    // 0x1ddff4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1ddff8:
    if (ctx->pc == 0x1DDFF8u) {
        ctx->pc = 0x1DDFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDFF4u;
        // 0x1ddff8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DDFFCu;
        goto label_1ddffc;
    }
    ctx->pc = 0x1DDFF4u;
    {
        const bool branch_taken_0x1ddff4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DDFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDFF4u;
        // 0x1ddff8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddff4) {
            ctx->pc = 0x1DE008u;
            goto label_1de008;
        }
    }
    ctx->pc = 0x1DDFFCu;
label_1ddffc:
    // 0x1ddffc: 0x1000007e  b           . + 4 + (0x7E << 2)
label_1de000:
    if (ctx->pc == 0x1DE000u) {
        ctx->pc = 0x1DE000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDFFCu;
        // 0x1de000: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE004u;
        goto label_1de004;
    }
    ctx->pc = 0x1DDFFCu;
    {
        const bool branch_taken_0x1ddffc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDFFCu;
        // 0x1de000: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddffc) {
            ctx->pc = 0x1DE1F8u;
            goto label_1de1f8;
        }
    }
    ctx->pc = 0x1DE004u;
label_1de004:
    // 0x1de004: 0x0  nop
    ctx->pc = 0x1de004u;
    // NOP
label_1de008:
    // 0x1de008: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1de008u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1de00c:
    // 0x1de00c: 0x8c990020  lw          $t9, 0x20($a0)
    ctx->pc = 0x1de00cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_1de010:
    // 0x1de010: 0x8f390050  lw          $t9, 0x50($t9)
    ctx->pc = 0x1de010u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 80)));
label_1de014:
    // 0x1de014: 0x320f809  jalr        $t9
label_1de018:
    if (ctx->pc == 0x1DE018u) {
        ctx->pc = 0x1DE01Cu;
        goto label_1de01c;
    }
    ctx->pc = 0x1DE014u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DE01Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DE014u, 0x1DE01Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DE01Cu;
label_1de01c:
    // 0x1de01c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1de020:
    if (ctx->pc == 0x1DE020u) {
        ctx->pc = 0x1DE024u;
        goto label_1de024;
    }
    ctx->pc = 0x1DE01Cu;
    {
        const bool branch_taken_0x1de01c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1de01c) {
            ctx->pc = 0x1DE040u;
            goto label_1de040;
        }
    }
    ctx->pc = 0x1DE024u;
label_1de024:
    // 0x1de024: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1de024u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1de028:
    // 0x1de028: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x1de028u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_1de02c:
    // 0x1de02c: 0x320f809  jalr        $t9
label_1de030:
    if (ctx->pc == 0x1DE030u) {
        ctx->pc = 0x1DE030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE02Cu;
        // 0x1de030: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE034u;
        goto label_1de034;
    }
    ctx->pc = 0x1DE02Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DE034u);
        ctx->pc = 0x1DE030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE02Cu;
        // 0x1de030: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DE02Cu, 0x1DE034u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DE034u;
label_1de034:
    // 0x1de034: 0x10000070  b           . + 4 + (0x70 << 2)
label_1de038:
    if (ctx->pc == 0x1DE038u) {
        ctx->pc = 0x1DE038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE034u;
        // 0x1de038: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE03Cu;
        goto label_1de03c;
    }
    ctx->pc = 0x1DE034u;
    {
        const bool branch_taken_0x1de034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE034u;
        // 0x1de038: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de034) {
            ctx->pc = 0x1DE1F8u;
            goto label_1de1f8;
        }
    }
    ctx->pc = 0x1DE03Cu;
label_1de03c:
    // 0x1de03c: 0x0  nop
    ctx->pc = 0x1de03cu;
    // NOP
label_1de040:
    // 0x1de040: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1de040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1de044:
    // 0x1de044: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1de044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1de048:
    // 0x1de048: 0x84480000  lh          $t0, 0x0($v0)
    ctx->pc = 0x1de048u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1de04c:
    // 0x1de04c: 0x8467000e  lh          $a3, 0xE($v1)
    ctx->pc = 0x1de04cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
label_1de050:
    // 0x1de050: 0x8466000c  lh          $a2, 0xC($v1)
    ctx->pc = 0x1de050u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
label_1de054:
    // 0x1de054: 0x90420003  lbu         $v0, 0x3($v0)
    ctx->pc = 0x1de054u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
label_1de058:
    // 0x1de058: 0x38e37ffd  xori        $v1, $a3, 0x7FFD
    ctx->pc = 0x1de058u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) ^ (uint64_t)(uint16_t)32765);
label_1de05c:
    // 0x1de05c: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x1de05cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1de060:
    // 0x1de060: 0x402826  xor         $a1, $v0, $zero
    ctx->pc = 0x1de060u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
label_1de064:
    // 0x1de064: 0x28420001  slti        $v0, $v0, 0x1
    ctx->pc = 0x1de064u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1) ? 1 : 0);
label_1de068:
    // 0x1de068: 0x2ca50001  sltiu       $a1, $a1, 0x1
    ctx->pc = 0x1de068u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1de06c:
    // 0x1de06c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1de06cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1de070:
    // 0x1de070: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1de070u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1de074:
    // 0x1de074: 0x622024  and         $a0, $v1, $v0
    ctx->pc = 0x1de074u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1de078:
    // 0x1de078: 0xe8102a  slt         $v0, $a3, $t0
    ctx->pc = 0x1de078u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
label_1de07c:
    // 0x1de07c: 0x106182a  slt         $v1, $t0, $a2
    ctx->pc = 0x1de07cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_1de080:
    // 0x1de080: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1de080u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1de084:
    // 0x1de084: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x1de084u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
label_1de088:
    // 0x1de088: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x1de088u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_1de08c:
    // 0x1de08c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1de090:
    if (ctx->pc == 0x1DE090u) {
        ctx->pc = 0x1DE090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE08Cu;
        // 0x1de090: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE094u;
        goto label_1de094;
    }
    ctx->pc = 0x1DE08Cu;
    {
        const bool branch_taken_0x1de08c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE08Cu;
        // 0x1de090: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de08c) {
            ctx->pc = 0x1DE0A0u;
            goto label_1de0a0;
        }
    }
    ctx->pc = 0x1DE094u;
label_1de094:
    // 0x1de094: 0x10000058  b           . + 4 + (0x58 << 2)
label_1de098:
    if (ctx->pc == 0x1DE098u) {
        ctx->pc = 0x1DE09Cu;
        goto label_1de09c;
    }
    ctx->pc = 0x1DE094u;
    {
        const bool branch_taken_0x1de094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1de094) {
            ctx->pc = 0x1DE1F8u;
            goto label_1de1f8;
        }
    }
    ctx->pc = 0x1DE09Cu;
label_1de09c:
    // 0x1de09c: 0x0  nop
    ctx->pc = 0x1de09cu;
    // NOP
label_1de0a0:
    // 0x1de0a0: 0xc81026  xor         $v0, $a2, $t0
    ctx->pc = 0x1de0a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 8));
label_1de0a4:
    // 0x1de0a4: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1de0a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1de0a8:
    // 0x1de0a8: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x1de0a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
label_1de0ac:
    // 0x1de0ac: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1de0b0:
    if (ctx->pc == 0x1DE0B0u) {
        ctx->pc = 0x1DE0B4u;
        goto label_1de0b4;
    }
    ctx->pc = 0x1DE0ACu;
    {
        const bool branch_taken_0x1de0ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1de0ac) {
            ctx->pc = 0x1DE0C0u;
            goto label_1de0c0;
        }
    }
    ctx->pc = 0x1DE0B4u;
label_1de0b4:
    // 0x1de0b4: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1de0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1de0b8:
    // 0x1de0b8: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x1de0b8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1de0bc:
    // 0x1de0bc: 0x7e020020  sq          $v0, 0x20($s0)
    ctx->pc = 0x1de0bcu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 2));
label_1de0c0:
    // 0x1de0c0: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1de0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1de0c4:
    // 0x1de0c4: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x1de0c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1de0c8:
    // 0x1de0c8: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1de0c8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1de0cc:
    // 0x1de0cc: 0x84a3000c  lh          $v1, 0xC($a1)
    ctx->pc = 0x1de0ccu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 12)));
label_1de0d0:
    // 0x1de0d0: 0x84a20002  lh          $v0, 0x2($a1)
    ctx->pc = 0x1de0d0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
label_1de0d4:
    // 0x1de0d4: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x1de0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1de0d8:
    // 0x1de0d8: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1de0d8u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1de0dc:
    // 0x1de0dc: 0x0  nop
    ctx->pc = 0x1de0dcu;
    // NOP
label_1de0e0:
    // 0x1de0e0: 0x0  nop
    ctx->pc = 0x1de0e0u;
    // NOP
label_1de0e4:
    // 0x1de0e4: 0x1010  mfhi        $v0
    ctx->pc = 0x1de0e4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1de0e8:
    // 0x1de0e8: 0x14400041  bnez        $v0, . + 4 + (0x41 << 2)
label_1de0ec:
    if (ctx->pc == 0x1DE0ECu) {
        ctx->pc = 0x1DE0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE0E8u;
        // 0x1de0ec: 0x24b10010  addiu       $s1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE0F0u;
        goto label_1de0f0;
    }
    ctx->pc = 0x1DE0E8u;
    {
        const bool branch_taken_0x1de0e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DE0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE0E8u;
        // 0x1de0ec: 0x24b10010  addiu       $s1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de0e8) {
            ctx->pc = 0x1DE1F0u;
            goto label_1de1f0;
        }
    }
    ctx->pc = 0x1DE0F0u;
label_1de0f0:
    // 0x1de0f0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1de0f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1de0f4:
    // 0x1de0f4: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x1de0f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
label_1de0f8:
    // 0x1de0f8: 0xc076688  jal         func_1D9A20
label_1de0fc:
    if (ctx->pc == 0x1DE0FCu) {
        ctx->pc = 0x1DE0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE0F8u;
        // 0x1de0fc: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE100u;
        goto label_1de100;
    }
    ctx->pc = 0x1DE0F8u;
    SET_GPR_U32(ctx, 31, 0x1DE100u);
    ctx->pc = 0x1DE0FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE0F8u;
    // 0x1de0fc: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A20u, 0x1DE0F8u, 0x1DE100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE100u;
label_1de100:
    // 0x1de100: 0x8f8a80e0  lw          $t2, -0x7F20($gp)
    ctx->pc = 0x1de100u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
label_1de104:
    // 0x1de104: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1de104u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_1de108:
    // 0x1de108: 0x34420dcd  ori         $v0, $v0, 0xDCD
    ctx->pc = 0x1de108u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
label_1de10c:
    // 0x1de10c: 0x8fa90030  lw          $t1, 0x30($sp)
    ctx->pc = 0x1de10cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1de110:
    // 0x1de110: 0x27a80034  addiu       $t0, $sp, 0x34
    ctx->pc = 0x1de110u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
label_1de114:
    // 0x1de114: 0x27a70038  addiu       $a3, $sp, 0x38
    ctx->pc = 0x1de114u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
label_1de118:
    // 0x1de118: 0x27a3003c  addiu       $v1, $sp, 0x3C
    ctx->pc = 0x1de118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
label_1de11c:
    // 0x1de11c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1de11cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1de120:
    // 0x1de120: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1de120u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1de124:
    // 0x1de124: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1de124u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1de128:
    // 0x1de128: 0x1425818  mult        $t3, $t2, $v0
    ctx->pc = 0x1de128u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
label_1de12c:
    // 0x1de12c: 0x252a0001  addiu       $t2, $t1, 0x1
    ctx->pc = 0x1de12cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_1de130:
    // 0x1de130: 0x25690001  addiu       $t1, $t3, 0x1
    ctx->pc = 0x1de130u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
label_1de134:
    // 0x1de134: 0xaf8980e0  sw          $t1, -0x7F20($gp)
    ctx->pc = 0x1de134u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 9));
label_1de138:
    // 0x1de138: 0x8f8980e0  lw          $t1, -0x7F20($gp)
    ctx->pc = 0x1de138u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
label_1de13c:
    // 0x1de13c: 0x95b02  srl         $t3, $t1, 12
    ctx->pc = 0x1de13cu;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 9), 12));
label_1de140:
    // 0x1de140: 0x16a001b  divu        $zero, $t3, $t2
    ctx->pc = 0x1de140u;
    { uint32_t divisor = GPR_U32(ctx, 10); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 11) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 11) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,11); } }
label_1de144:
    // 0x1de144: 0x71224818  mult1       $t1, $t1, $v0
    ctx->pc = 0x1de144u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 2); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_1de148:
    // 0x1de148: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1de148u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_1de14c:
    // 0x1de14c: 0xaf8980e0  sw          $t1, -0x7F20($gp)
    ctx->pc = 0x1de14cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 9));
label_1de150:
    // 0x1de150: 0x4810  mfhi        $t1
    ctx->pc = 0x1de150u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_1de154:
    // 0x1de154: 0x8f8b80e0  lw          $t3, -0x7F20($gp)
    ctx->pc = 0x1de154u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
label_1de158:
    // 0x1de158: 0xafa90030  sw          $t1, 0x30($sp)
    ctx->pc = 0x1de158u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 9));
label_1de15c:
    // 0x1de15c: 0x8d090000  lw          $t1, 0x0($t0)
    ctx->pc = 0x1de15cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_1de160:
    // 0x1de160: 0xb5302  srl         $t2, $t3, 12
    ctx->pc = 0x1de160u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 11), 12));
label_1de164:
    // 0x1de164: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1de164u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_1de168:
    // 0x1de168: 0x149001b  divu        $zero, $t2, $t1
    ctx->pc = 0x1de168u;
    { uint32_t divisor = GPR_U32(ctx, 9); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,10); } }
label_1de16c:
    // 0x1de16c: 0x0  nop
    ctx->pc = 0x1de16cu;
    // NOP
label_1de170:
    // 0x1de170: 0x0  nop
    ctx->pc = 0x1de170u;
    // NOP
label_1de174:
    // 0x1de174: 0x4810  mfhi        $t1
    ctx->pc = 0x1de174u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_1de178:
    // 0x1de178: 0xad090000  sw          $t1, 0x0($t0)
    ctx->pc = 0x1de178u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 9));
label_1de17c:
    // 0x1de17c: 0x1624018  mult        $t0, $t3, $v0
    ctx->pc = 0x1de17cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
label_1de180:
    // 0x1de180: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1de180u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1de184:
    // 0x1de184: 0xaf8880e0  sw          $t0, -0x7F20($gp)
    ctx->pc = 0x1de184u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 8));
label_1de188:
    // 0x1de188: 0x8f8980e0  lw          $t1, -0x7F20($gp)
    ctx->pc = 0x1de188u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
label_1de18c:
    // 0x1de18c: 0x8ce80000  lw          $t0, 0x0($a3)
    ctx->pc = 0x1de18cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_1de190:
    // 0x1de190: 0x71221018  mult1       $v0, $t1, $v0
    ctx->pc = 0x1de190u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 2); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_1de194:
    // 0x1de194: 0x94b02  srl         $t1, $t1, 12
    ctx->pc = 0x1de194u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 9), 12));
label_1de198:
    // 0x1de198: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1de198u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1de19c:
    // 0x1de19c: 0x128001b  divu        $zero, $t1, $t0
    ctx->pc = 0x1de19cu;
    { uint32_t divisor = GPR_U32(ctx, 8); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 9) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 9) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,9); } }
label_1de1a0:
    // 0x1de1a0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1de1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1de1a4:
    // 0x1de1a4: 0x0  nop
    ctx->pc = 0x1de1a4u;
    // NOP
label_1de1a8:
    // 0x1de1a8: 0x4010  mfhi        $t0
    ctx->pc = 0x1de1a8u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_1de1ac:
    // 0x1de1ac: 0xace80000  sw          $t0, 0x0($a3)
    ctx->pc = 0x1de1acu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 8));
label_1de1b0:
    // 0x1de1b0: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x1de1b0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
label_1de1b4:
    // 0x1de1b4: 0x8f8780e0  lw          $a3, -0x7F20($gp)
    ctx->pc = 0x1de1b4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
label_1de1b8:
    // 0x1de1b8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1de1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1de1bc:
    // 0x1de1bc: 0x73b02  srl         $a3, $a3, 12
    ctx->pc = 0x1de1bcu;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 7), 12));
label_1de1c0:
    // 0x1de1c0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1de1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1de1c4:
    // 0x1de1c4: 0xe2001b  divu        $zero, $a3, $v0
    ctx->pc = 0x1de1c4u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,7); } }
label_1de1c8:
    // 0x1de1c8: 0x0  nop
    ctx->pc = 0x1de1c8u;
    // NOP
label_1de1cc:
    // 0x1de1cc: 0x0  nop
    ctx->pc = 0x1de1ccu;
    // NOP
label_1de1d0:
    // 0x1de1d0: 0x1010  mfhi        $v0
    ctx->pc = 0x1de1d0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1de1d4:
    // 0x1de1d4: 0xc076680  jal         func_1D9A00
label_1de1d8:
    if (ctx->pc == 0x1DE1D8u) {
        ctx->pc = 0x1DE1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE1D4u;
        // 0x1de1d8: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE1DCu;
        goto label_1de1dc;
    }
    ctx->pc = 0x1DE1D4u;
    SET_GPR_U32(ctx, 31, 0x1DE1DCu);
    ctx->pc = 0x1DE1D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE1D4u;
    // 0x1de1d8: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A00u, 0x1DE1D4u, 0x1DE1DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE1DCu;
label_1de1dc:
    // 0x1de1dc: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x1de1dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1de1e0:
    // 0x1de1e0: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x1de1e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_1de1e4:
    // 0x1de1e4: 0xc076680  jal         func_1D9A00
label_1de1e8:
    if (ctx->pc == 0x1DE1E8u) {
        ctx->pc = 0x1DE1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE1E4u;
        // 0x1de1e8: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE1ECu;
        goto label_1de1ec;
    }
    ctx->pc = 0x1DE1E4u;
    SET_GPR_U32(ctx, 31, 0x1DE1ECu);
    ctx->pc = 0x1DE1E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE1E4u;
    // 0x1de1e8: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A00u, 0x1DE1E4u, 0x1DE1ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE1ECu;
label_1de1ec:
    // 0x1de1ec: 0x0  nop
    ctx->pc = 0x1de1ecu;
    // NOP
label_1de1f0:
    // 0x1de1f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1de1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1de1f4:
    // 0x1de1f4: 0x0  nop
    ctx->pc = 0x1de1f4u;
    // NOP
label_1de1f8:
    // 0x1de1f8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1de1f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1de1fc:
    // 0x1de1fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1de1fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1de200:
    // 0x1de200: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1de200u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1de204:
    // 0x1de204: 0x3e00008  jr          $ra
label_1de208:
    if (ctx->pc == 0x1DE208u) {
        ctx->pc = 0x1DE208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE204u;
        // 0x1de208: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE20Cu;
        goto label_fallthrough_0x1de204;
    }
    ctx->pc = 0x1DE204u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DE208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE204u;
        // 0x1de208: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DE204u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1de204:
    ctx->pc = 0x1DE20Cu;
}
