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

// Function: sub_001DCFE0
// Address: 0x1dcfe0 - 0x1dd0e0
void sub_001DCFE0_0x1dcfe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DCFE0_0x1dcfe0");
#endif

    switch (ctx->pc) {
        case 0x1dcfe0u: goto label_1dcfe0;
        case 0x1dcfe4u: goto label_1dcfe4;
        case 0x1dcfe8u: goto label_1dcfe8;
        case 0x1dcfecu: goto label_1dcfec;
        case 0x1dcff0u: goto label_1dcff0;
        case 0x1dcff4u: goto label_1dcff4;
        case 0x1dcff8u: goto label_1dcff8;
        case 0x1dcffcu: goto label_1dcffc;
        case 0x1dd000u: goto label_1dd000;
        case 0x1dd004u: goto label_1dd004;
        case 0x1dd008u: goto label_1dd008;
        case 0x1dd00cu: goto label_1dd00c;
        case 0x1dd010u: goto label_1dd010;
        case 0x1dd014u: goto label_1dd014;
        case 0x1dd018u: goto label_1dd018;
        case 0x1dd01cu: goto label_1dd01c;
        case 0x1dd020u: goto label_1dd020;
        case 0x1dd024u: goto label_1dd024;
        case 0x1dd028u: goto label_1dd028;
        case 0x1dd02cu: goto label_1dd02c;
        case 0x1dd030u: goto label_1dd030;
        case 0x1dd034u: goto label_1dd034;
        case 0x1dd038u: goto label_1dd038;
        case 0x1dd03cu: goto label_1dd03c;
        case 0x1dd040u: goto label_1dd040;
        case 0x1dd044u: goto label_1dd044;
        case 0x1dd048u: goto label_1dd048;
        case 0x1dd04cu: goto label_1dd04c;
        case 0x1dd050u: goto label_1dd050;
        case 0x1dd054u: goto label_1dd054;
        case 0x1dd058u: goto label_1dd058;
        case 0x1dd05cu: goto label_1dd05c;
        case 0x1dd060u: goto label_1dd060;
        case 0x1dd064u: goto label_1dd064;
        case 0x1dd068u: goto label_1dd068;
        case 0x1dd06cu: goto label_1dd06c;
        case 0x1dd070u: goto label_1dd070;
        case 0x1dd074u: goto label_1dd074;
        case 0x1dd078u: goto label_1dd078;
        case 0x1dd07cu: goto label_1dd07c;
        case 0x1dd080u: goto label_1dd080;
        case 0x1dd084u: goto label_1dd084;
        case 0x1dd088u: goto label_1dd088;
        case 0x1dd08cu: goto label_1dd08c;
        case 0x1dd090u: goto label_1dd090;
        case 0x1dd094u: goto label_1dd094;
        case 0x1dd098u: goto label_1dd098;
        case 0x1dd09cu: goto label_1dd09c;
        case 0x1dd0a0u: goto label_1dd0a0;
        case 0x1dd0a4u: goto label_1dd0a4;
        case 0x1dd0a8u: goto label_1dd0a8;
        case 0x1dd0acu: goto label_1dd0ac;
        case 0x1dd0b0u: goto label_1dd0b0;
        case 0x1dd0b4u: goto label_1dd0b4;
        case 0x1dd0b8u: goto label_1dd0b8;
        case 0x1dd0bcu: goto label_1dd0bc;
        case 0x1dd0c0u: goto label_1dd0c0;
        case 0x1dd0c4u: goto label_1dd0c4;
        case 0x1dd0c8u: goto label_1dd0c8;
        case 0x1dd0ccu: goto label_1dd0cc;
        case 0x1dd0d0u: goto label_1dd0d0;
        case 0x1dd0d4u: goto label_1dd0d4;
        case 0x1dd0d8u: goto label_1dd0d8;
        case 0x1dd0dcu: goto label_1dd0dc;
        default: break;
    }

    ctx->pc = 0x1dcfe0u;

label_1dcfe0:
    // 0x1dcfe0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1dcfe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1dcfe4:
    // 0x1dcfe4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1dcfe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1dcfe8:
    // 0x1dcfe8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1dcfe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1dcfec:
    // 0x1dcfec: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1dcfecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1dcff0:
    // 0x1dcff0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1dcff4:
    if (ctx->pc == 0x1DCFF4u) {
        ctx->pc = 0x1DCFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCFF0u;
        // 0x1dcff4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DCFF8u;
        goto label_1dcff8;
    }
    ctx->pc = 0x1DCFF0u;
    {
        const bool branch_taken_0x1dcff0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DCFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCFF0u;
        // 0x1dcff4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcff0) {
            ctx->pc = 0x1DD000u;
            goto label_1dd000;
        }
    }
    ctx->pc = 0x1DCFF8u;
label_1dcff8:
    // 0x1dcff8: 0x10000035  b           . + 4 + (0x35 << 2)
label_1dcffc:
    if (ctx->pc == 0x1DCFFCu) {
        ctx->pc = 0x1DCFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCFF8u;
        // 0x1dcffc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD000u;
        goto label_1dd000;
    }
    ctx->pc = 0x1DCFF8u;
    {
        const bool branch_taken_0x1dcff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DCFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCFF8u;
        // 0x1dcffc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcff8) {
            ctx->pc = 0x1DD0D0u;
            goto label_1dd0d0;
        }
    }
    ctx->pc = 0x1DD000u;
label_1dd000:
    // 0x1dd000: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1dd000u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1dd004:
    // 0x1dd004: 0x8c990020  lw          $t9, 0x20($a0)
    ctx->pc = 0x1dd004u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_1dd008:
    // 0x1dd008: 0x8f390050  lw          $t9, 0x50($t9)
    ctx->pc = 0x1dd008u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 80)));
label_1dd00c:
    // 0x1dd00c: 0x320f809  jalr        $t9
label_1dd010:
    if (ctx->pc == 0x1DD010u) {
        ctx->pc = 0x1DD014u;
        goto label_1dd014;
    }
    ctx->pc = 0x1DD00Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DD014u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD00Cu, 0x1DD014u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DD014u;
label_1dd014:
    // 0x1dd014: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1dd018:
    if (ctx->pc == 0x1DD018u) {
        ctx->pc = 0x1DD01Cu;
        goto label_1dd01c;
    }
    ctx->pc = 0x1DD014u;
    {
        const bool branch_taken_0x1dd014 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dd014) {
            ctx->pc = 0x1DD038u;
            goto label_1dd038;
        }
    }
    ctx->pc = 0x1DD01Cu;
label_1dd01c:
    // 0x1dd01c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1dd01cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1dd020:
    // 0x1dd020: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x1dd020u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_1dd024:
    // 0x1dd024: 0x320f809  jalr        $t9
label_1dd028:
    if (ctx->pc == 0x1DD028u) {
        ctx->pc = 0x1DD028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD024u;
        // 0x1dd028: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD02Cu;
        goto label_1dd02c;
    }
    ctx->pc = 0x1DD024u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DD02Cu);
        ctx->pc = 0x1DD028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD024u;
        // 0x1dd028: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD024u, 0x1DD02Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DD02Cu;
label_1dd02c:
    // 0x1dd02c: 0x10000028  b           . + 4 + (0x28 << 2)
label_1dd030:
    if (ctx->pc == 0x1DD030u) {
        ctx->pc = 0x1DD030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD02Cu;
        // 0x1dd030: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD034u;
        goto label_1dd034;
    }
    ctx->pc = 0x1DD02Cu;
    {
        const bool branch_taken_0x1dd02c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD02Cu;
        // 0x1dd030: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd02c) {
            ctx->pc = 0x1DD0D0u;
            goto label_1dd0d0;
        }
    }
    ctx->pc = 0x1DD034u;
label_1dd034:
    // 0x1dd034: 0x0  nop
    ctx->pc = 0x1dd034u;
    // NOP
label_1dd038:
    // 0x1dd038: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1dd038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1dd03c:
    // 0x1dd03c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1dd03cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1dd040:
    // 0x1dd040: 0x84460000  lh          $a2, 0x0($v0)
    ctx->pc = 0x1dd040u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1dd044:
    // 0x1dd044: 0x8467000e  lh          $a3, 0xE($v1)
    ctx->pc = 0x1dd044u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
label_1dd048:
    // 0x1dd048: 0x90420003  lbu         $v0, 0x3($v0)
    ctx->pc = 0x1dd048u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
label_1dd04c:
    // 0x1dd04c: 0x8463000c  lh          $v1, 0xC($v1)
    ctx->pc = 0x1dd04cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
label_1dd050:
    // 0x1dd050: 0xe6282a  slt         $a1, $a3, $a2
    ctx->pc = 0x1dd050u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_1dd054:
    // 0x1dd054: 0x402026  xor         $a0, $v0, $zero
    ctx->pc = 0x1dd054u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
label_1dd058:
    // 0x1dd058: 0xc3302a  slt         $a2, $a2, $v1
    ctx->pc = 0x1dd058u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1dd05c:
    // 0x1dd05c: 0x28420001  slti        $v0, $v0, 0x1
    ctx->pc = 0x1dd05cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1) ? 1 : 0);
label_1dd060:
    // 0x1dd060: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1dd060u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1dd064:
    // 0x1dd064: 0x38e37ffd  xori        $v1, $a3, 0x7FFD
    ctx->pc = 0x1dd064u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) ^ (uint64_t)(uint16_t)32765);
label_1dd068:
    // 0x1dd068: 0x2c840001  sltiu       $a0, $a0, 0x1
    ctx->pc = 0x1dd068u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1dd06c:
    // 0x1dd06c: 0xc52825  or          $a1, $a2, $a1
    ctx->pc = 0x1dd06cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
label_1dd070:
    // 0x1dd070: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x1dd070u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1dd074:
    // 0x1dd074: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1dd074u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1dd078:
    // 0x1dd078: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x1dd078u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
label_1dd07c:
    // 0x1dd07c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1dd07cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1dd080:
    // 0x1dd080: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1dd080u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_1dd084:
    // 0x1dd084: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1dd088:
    if (ctx->pc == 0x1DD088u) {
        ctx->pc = 0x1DD088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD084u;
        // 0x1dd088: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD08Cu;
        goto label_1dd08c;
    }
    ctx->pc = 0x1DD084u;
    {
        const bool branch_taken_0x1dd084 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD084u;
        // 0x1dd088: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd084) {
            ctx->pc = 0x1DD098u;
            goto label_1dd098;
        }
    }
    ctx->pc = 0x1DD08Cu;
label_1dd08c:
    // 0x1dd08c: 0x10000010  b           . + 4 + (0x10 << 2)
label_1dd090:
    if (ctx->pc == 0x1DD090u) {
        ctx->pc = 0x1DD094u;
        goto label_1dd094;
    }
    ctx->pc = 0x1DD08Cu;
    {
        const bool branch_taken_0x1dd08c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dd08c) {
            ctx->pc = 0x1DD0D0u;
            goto label_1dd0d0;
        }
    }
    ctx->pc = 0x1DD094u;
label_1dd094:
    // 0x1dd094: 0x0  nop
    ctx->pc = 0x1dd094u;
    // NOP
label_1dd098:
    // 0x1dd098: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x1dd098u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1dd09c:
    // 0x1dd09c: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
label_1dd0a0:
    if (ctx->pc == 0x1DD0A0u) {
        ctx->pc = 0x1DD0A4u;
        goto label_1dd0a4;
    }
    ctx->pc = 0x1DD09Cu;
    {
        const bool branch_taken_0x1dd09c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dd09c) {
            ctx->pc = 0x1DD0C8u;
            goto label_1dd0c8;
        }
    }
    ctx->pc = 0x1DD0A4u;
label_1dd0a4:
    // 0x1dd0a4: 0xc07bc14  jal         func_1EF050
label_1dd0a8:
    if (ctx->pc == 0x1DD0A8u) {
        ctx->pc = 0x1DD0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD0A4u;
        // 0x1dd0a8: 0x86050014  lh          $a1, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD0ACu;
        goto label_1dd0ac;
    }
    ctx->pc = 0x1DD0A4u;
    SET_GPR_U32(ctx, 31, 0x1DD0ACu);
    ctx->pc = 0x1DD0A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD0A4u;
    // 0x1dd0a8: 0x86050014  lh          $a1, 0x14($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF050u, 0x1DD0A4u, 0x1DD0ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD0ACu;
label_1dd0ac:
    // 0x1dd0ac: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1dd0b0:
    if (ctx->pc == 0x1DD0B0u) {
        ctx->pc = 0x1DD0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD0ACu;
        // 0x1dd0b0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD0B4u;
        goto label_1dd0b4;
    }
    ctx->pc = 0x1DD0ACu;
    {
        const bool branch_taken_0x1dd0ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD0ACu;
        // 0x1dd0b0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd0ac) {
            ctx->pc = 0x1DD0C8u;
            goto label_1dd0c8;
        }
    }
    ctx->pc = 0x1DD0B4u;
label_1dd0b4:
    // 0x1dd0b4: 0xc076ed8  jal         func_1DBB60
label_1dd0b8:
    if (ctx->pc == 0x1DD0B8u) {
        ctx->pc = 0x1DD0BCu;
        goto label_1dd0bc;
    }
    ctx->pc = 0x1DD0B4u;
    SET_GPR_U32(ctx, 31, 0x1DD0BCu);
    ctx->pc = 0x1DBB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBB60u, 0x1DD0B4u, 0x1DD0BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD0BCu;
label_1dd0bc:
    // 0x1dd0bc: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1dd0bcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1dd0c0:
    // 0x1dd0c0: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1dd0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1dd0c4:
    // 0x1dd0c4: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1dd0c4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
label_1dd0c8:
    // 0x1dd0c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1dd0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1dd0cc:
    // 0x1dd0cc: 0x0  nop
    ctx->pc = 0x1dd0ccu;
    // NOP
label_1dd0d0:
    // 0x1dd0d0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1dd0d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1dd0d4:
    // 0x1dd0d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1dd0d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1dd0d8:
    // 0x1dd0d8: 0x3e00008  jr          $ra
label_1dd0dc:
    if (ctx->pc == 0x1DD0DCu) {
        ctx->pc = 0x1DD0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD0D8u;
        // 0x1dd0dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD0E0u;
        goto label_fallthrough_0x1dd0d8;
    }
    ctx->pc = 0x1DD0D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD0D8u;
        // 0x1dd0dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD0D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1dd0d8:
    ctx->pc = 0x1DD0E0u;
}
