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

// Function: sub_001DCD40
// Address: 0x1dcd40 - 0x1dce58
void sub_001DCD40_0x1dcd40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DCD40_0x1dcd40");
#endif

    switch (ctx->pc) {
        case 0x1dcd40u: goto label_1dcd40;
        case 0x1dcd44u: goto label_1dcd44;
        case 0x1dcd48u: goto label_1dcd48;
        case 0x1dcd4cu: goto label_1dcd4c;
        case 0x1dcd50u: goto label_1dcd50;
        case 0x1dcd54u: goto label_1dcd54;
        case 0x1dcd58u: goto label_1dcd58;
        case 0x1dcd5cu: goto label_1dcd5c;
        case 0x1dcd60u: goto label_1dcd60;
        case 0x1dcd64u: goto label_1dcd64;
        case 0x1dcd68u: goto label_1dcd68;
        case 0x1dcd6cu: goto label_1dcd6c;
        case 0x1dcd70u: goto label_1dcd70;
        case 0x1dcd74u: goto label_1dcd74;
        case 0x1dcd78u: goto label_1dcd78;
        case 0x1dcd7cu: goto label_1dcd7c;
        case 0x1dcd80u: goto label_1dcd80;
        case 0x1dcd84u: goto label_1dcd84;
        case 0x1dcd88u: goto label_1dcd88;
        case 0x1dcd8cu: goto label_1dcd8c;
        case 0x1dcd90u: goto label_1dcd90;
        case 0x1dcd94u: goto label_1dcd94;
        case 0x1dcd98u: goto label_1dcd98;
        case 0x1dcd9cu: goto label_1dcd9c;
        case 0x1dcda0u: goto label_1dcda0;
        case 0x1dcda4u: goto label_1dcda4;
        case 0x1dcda8u: goto label_1dcda8;
        case 0x1dcdacu: goto label_1dcdac;
        case 0x1dcdb0u: goto label_1dcdb0;
        case 0x1dcdb4u: goto label_1dcdb4;
        case 0x1dcdb8u: goto label_1dcdb8;
        case 0x1dcdbcu: goto label_1dcdbc;
        case 0x1dcdc0u: goto label_1dcdc0;
        case 0x1dcdc4u: goto label_1dcdc4;
        case 0x1dcdc8u: goto label_1dcdc8;
        case 0x1dcdccu: goto label_1dcdcc;
        case 0x1dcdd0u: goto label_1dcdd0;
        case 0x1dcdd4u: goto label_1dcdd4;
        case 0x1dcdd8u: goto label_1dcdd8;
        case 0x1dcddcu: goto label_1dcddc;
        case 0x1dcde0u: goto label_1dcde0;
        case 0x1dcde4u: goto label_1dcde4;
        case 0x1dcde8u: goto label_1dcde8;
        case 0x1dcdecu: goto label_1dcdec;
        case 0x1dcdf0u: goto label_1dcdf0;
        case 0x1dcdf4u: goto label_1dcdf4;
        case 0x1dcdf8u: goto label_1dcdf8;
        case 0x1dcdfcu: goto label_1dcdfc;
        case 0x1dce00u: goto label_1dce00;
        case 0x1dce04u: goto label_1dce04;
        case 0x1dce08u: goto label_1dce08;
        case 0x1dce0cu: goto label_1dce0c;
        case 0x1dce10u: goto label_1dce10;
        case 0x1dce14u: goto label_1dce14;
        case 0x1dce18u: goto label_1dce18;
        case 0x1dce1cu: goto label_1dce1c;
        case 0x1dce20u: goto label_1dce20;
        case 0x1dce24u: goto label_1dce24;
        case 0x1dce28u: goto label_1dce28;
        case 0x1dce2cu: goto label_1dce2c;
        case 0x1dce30u: goto label_1dce30;
        case 0x1dce34u: goto label_1dce34;
        case 0x1dce38u: goto label_1dce38;
        case 0x1dce3cu: goto label_1dce3c;
        case 0x1dce40u: goto label_1dce40;
        case 0x1dce44u: goto label_1dce44;
        case 0x1dce48u: goto label_1dce48;
        case 0x1dce4cu: goto label_1dce4c;
        case 0x1dce50u: goto label_1dce50;
        case 0x1dce54u: goto label_1dce54;
        default: break;
    }

    ctx->pc = 0x1dcd40u;

label_1dcd40:
    // 0x1dcd40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1dcd40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1dcd44:
    // 0x1dcd44: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1dcd44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1dcd48:
    // 0x1dcd48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1dcd48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1dcd4c:
    // 0x1dcd4c: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1dcd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1dcd50:
    // 0x1dcd50: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1dcd54:
    if (ctx->pc == 0x1DCD54u) {
        ctx->pc = 0x1DCD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCD50u;
        // 0x1dcd54: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DCD58u;
        goto label_1dcd58;
    }
    ctx->pc = 0x1DCD50u;
    {
        const bool branch_taken_0x1dcd50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DCD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCD50u;
        // 0x1dcd54: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcd50) {
            ctx->pc = 0x1DCD60u;
            goto label_1dcd60;
        }
    }
    ctx->pc = 0x1DCD58u;
label_1dcd58:
    // 0x1dcd58: 0x1000003b  b           . + 4 + (0x3B << 2)
label_1dcd5c:
    if (ctx->pc == 0x1DCD5Cu) {
        ctx->pc = 0x1DCD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCD58u;
        // 0x1dcd5c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DCD60u;
        goto label_1dcd60;
    }
    ctx->pc = 0x1DCD58u;
    {
        const bool branch_taken_0x1dcd58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DCD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCD58u;
        // 0x1dcd5c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcd58) {
            ctx->pc = 0x1DCE48u;
            goto label_1dce48;
        }
    }
    ctx->pc = 0x1DCD60u;
label_1dcd60:
    // 0x1dcd60: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1dcd60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1dcd64:
    // 0x1dcd64: 0x8c990020  lw          $t9, 0x20($a0)
    ctx->pc = 0x1dcd64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_1dcd68:
    // 0x1dcd68: 0x8f390050  lw          $t9, 0x50($t9)
    ctx->pc = 0x1dcd68u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 80)));
label_1dcd6c:
    // 0x1dcd6c: 0x320f809  jalr        $t9
label_1dcd70:
    if (ctx->pc == 0x1DCD70u) {
        ctx->pc = 0x1DCD74u;
        goto label_1dcd74;
    }
    ctx->pc = 0x1DCD6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DCD74u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DCD6Cu, 0x1DCD74u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DCD74u;
label_1dcd74:
    // 0x1dcd74: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1dcd78:
    if (ctx->pc == 0x1DCD78u) {
        ctx->pc = 0x1DCD7Cu;
        goto label_1dcd7c;
    }
    ctx->pc = 0x1DCD74u;
    {
        const bool branch_taken_0x1dcd74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dcd74) {
            ctx->pc = 0x1DCD98u;
            goto label_1dcd98;
        }
    }
    ctx->pc = 0x1DCD7Cu;
label_1dcd7c:
    // 0x1dcd7c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1dcd7cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1dcd80:
    // 0x1dcd80: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x1dcd80u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_1dcd84:
    // 0x1dcd84: 0x320f809  jalr        $t9
label_1dcd88:
    if (ctx->pc == 0x1DCD88u) {
        ctx->pc = 0x1DCD88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCD84u;
        // 0x1dcd88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DCD8Cu;
        goto label_1dcd8c;
    }
    ctx->pc = 0x1DCD84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DCD8Cu);
        ctx->pc = 0x1DCD88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCD84u;
        // 0x1dcd88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DCD84u, 0x1DCD8Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DCD8Cu;
label_1dcd8c:
    // 0x1dcd8c: 0x1000002e  b           . + 4 + (0x2E << 2)
label_1dcd90:
    if (ctx->pc == 0x1DCD90u) {
        ctx->pc = 0x1DCD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCD8Cu;
        // 0x1dcd90: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DCD94u;
        goto label_1dcd94;
    }
    ctx->pc = 0x1DCD8Cu;
    {
        const bool branch_taken_0x1dcd8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DCD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCD8Cu;
        // 0x1dcd90: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcd8c) {
            ctx->pc = 0x1DCE48u;
            goto label_1dce48;
        }
    }
    ctx->pc = 0x1DCD94u;
label_1dcd94:
    // 0x1dcd94: 0x0  nop
    ctx->pc = 0x1dcd94u;
    // NOP
label_1dcd98:
    // 0x1dcd98: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1dcd98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1dcd9c:
    // 0x1dcd9c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1dcd9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1dcda0:
    // 0x1dcda0: 0x84460000  lh          $a2, 0x0($v0)
    ctx->pc = 0x1dcda0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1dcda4:
    // 0x1dcda4: 0x8467000e  lh          $a3, 0xE($v1)
    ctx->pc = 0x1dcda4u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
label_1dcda8:
    // 0x1dcda8: 0x90420003  lbu         $v0, 0x3($v0)
    ctx->pc = 0x1dcda8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
label_1dcdac:
    // 0x1dcdac: 0x8463000c  lh          $v1, 0xC($v1)
    ctx->pc = 0x1dcdacu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
label_1dcdb0:
    // 0x1dcdb0: 0xe6282a  slt         $a1, $a3, $a2
    ctx->pc = 0x1dcdb0u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_1dcdb4:
    // 0x1dcdb4: 0x402026  xor         $a0, $v0, $zero
    ctx->pc = 0x1dcdb4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
label_1dcdb8:
    // 0x1dcdb8: 0xc3302a  slt         $a2, $a2, $v1
    ctx->pc = 0x1dcdb8u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1dcdbc:
    // 0x1dcdbc: 0x28420001  slti        $v0, $v0, 0x1
    ctx->pc = 0x1dcdbcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1) ? 1 : 0);
label_1dcdc0:
    // 0x1dcdc0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1dcdc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1dcdc4:
    // 0x1dcdc4: 0x38e37ffd  xori        $v1, $a3, 0x7FFD
    ctx->pc = 0x1dcdc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) ^ (uint64_t)(uint16_t)32765);
label_1dcdc8:
    // 0x1dcdc8: 0x2c840001  sltiu       $a0, $a0, 0x1
    ctx->pc = 0x1dcdc8u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1dcdcc:
    // 0x1dcdcc: 0xc52825  or          $a1, $a2, $a1
    ctx->pc = 0x1dcdccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
label_1dcdd0:
    // 0x1dcdd0: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x1dcdd0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1dcdd4:
    // 0x1dcdd4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1dcdd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1dcdd8:
    // 0x1dcdd8: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x1dcdd8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
label_1dcddc:
    // 0x1dcddc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1dcddcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1dcde0:
    // 0x1dcde0: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1dcde0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_1dcde4:
    // 0x1dcde4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1dcde8:
    if (ctx->pc == 0x1DCDE8u) {
        ctx->pc = 0x1DCDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCDE4u;
        // 0x1dcde8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DCDECu;
        goto label_1dcdec;
    }
    ctx->pc = 0x1DCDE4u;
    {
        const bool branch_taken_0x1dcde4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DCDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCDE4u;
        // 0x1dcde8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcde4) {
            ctx->pc = 0x1DCDF8u;
            goto label_1dcdf8;
        }
    }
    ctx->pc = 0x1DCDECu;
label_1dcdec:
    // 0x1dcdec: 0x10000016  b           . + 4 + (0x16 << 2)
label_1dcdf0:
    if (ctx->pc == 0x1DCDF0u) {
        ctx->pc = 0x1DCDF4u;
        goto label_1dcdf4;
    }
    ctx->pc = 0x1DCDECu;
    {
        const bool branch_taken_0x1dcdec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dcdec) {
            ctx->pc = 0x1DCE48u;
            goto label_1dce48;
        }
    }
    ctx->pc = 0x1DCDF4u;
label_1dcdf4:
    // 0x1dcdf4: 0x0  nop
    ctx->pc = 0x1dcdf4u;
    // NOP
label_1dcdf8:
    // 0x1dcdf8: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x1dcdf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1dcdfc:
    // 0x1dcdfc: 0x10800010  beqz        $a0, . + 4 + (0x10 << 2)
label_1dce00:
    if (ctx->pc == 0x1DCE00u) {
        ctx->pc = 0x1DCE04u;
        goto label_1dce04;
    }
    ctx->pc = 0x1DCDFCu;
    {
        const bool branch_taken_0x1dcdfc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dcdfc) {
            ctx->pc = 0x1DCE40u;
            goto label_1dce40;
        }
    }
    ctx->pc = 0x1DCE04u;
label_1dce04:
    // 0x1dce04: 0xc07bc14  jal         func_1EF050
label_1dce08:
    if (ctx->pc == 0x1DCE08u) {
        ctx->pc = 0x1DCE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCE04u;
        // 0x1dce08: 0x86050014  lh          $a1, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DCE0Cu;
        goto label_1dce0c;
    }
    ctx->pc = 0x1DCE04u;
    SET_GPR_U32(ctx, 31, 0x1DCE0Cu);
    ctx->pc = 0x1DCE08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCE04u;
    // 0x1dce08: 0x86050014  lh          $a1, 0x14($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF050u, 0x1DCE04u, 0x1DCE0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCE0Cu;
label_1dce0c:
    // 0x1dce0c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_1dce10:
    if (ctx->pc == 0x1DCE10u) {
        ctx->pc = 0x1DCE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCE0Cu;
        // 0x1dce10: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DCE14u;
        goto label_1dce14;
    }
    ctx->pc = 0x1DCE0Cu;
    {
        const bool branch_taken_0x1dce0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DCE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCE0Cu;
        // 0x1dce10: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dce0c) {
            ctx->pc = 0x1DCE40u;
            goto label_1dce40;
        }
    }
    ctx->pc = 0x1DCE14u;
label_1dce14:
    // 0x1dce14: 0xc076ed8  jal         func_1DBB60
label_1dce18:
    if (ctx->pc == 0x1DCE18u) {
        ctx->pc = 0x1DCE1Cu;
        goto label_1dce1c;
    }
    ctx->pc = 0x1DCE14u;
    SET_GPR_U32(ctx, 31, 0x1DCE1Cu);
    ctx->pc = 0x1DBB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBB60u, 0x1DCE14u, 0x1DCE1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCE1Cu;
label_1dce1c:
    // 0x1dce1c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1dce1cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1dce20:
    // 0x1dce20: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1dce20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1dce24:
    // 0x1dce24: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1dce24u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
label_1dce28:
    // 0x1dce28: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1dce28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1dce2c:
    // 0x1dce2c: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x1dce2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1dce30:
    // 0x1dce30: 0x24460010  addiu       $a2, $v0, 0x10
    ctx->pc = 0x1dce30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_1dce34:
    // 0x1dce34: 0xc0766a8  jal         func_1D9AA0
label_1dce38:
    if (ctx->pc == 0x1DCE38u) {
        ctx->pc = 0x1DCE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCE34u;
        // 0x1dce38: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DCE3Cu;
        goto label_1dce3c;
    }
    ctx->pc = 0x1DCE34u;
    SET_GPR_U32(ctx, 31, 0x1DCE3Cu);
    ctx->pc = 0x1DCE38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCE34u;
    // 0x1dce38: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AA0u, 0x1DCE34u, 0x1DCE3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCE3Cu;
label_1dce3c:
    // 0x1dce3c: 0x0  nop
    ctx->pc = 0x1dce3cu;
    // NOP
label_1dce40:
    // 0x1dce40: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1dce40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1dce44:
    // 0x1dce44: 0x0  nop
    ctx->pc = 0x1dce44u;
    // NOP
label_1dce48:
    // 0x1dce48: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1dce48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1dce4c:
    // 0x1dce4c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1dce4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1dce50:
    // 0x1dce50: 0x3e00008  jr          $ra
label_1dce54:
    if (ctx->pc == 0x1DCE54u) {
        ctx->pc = 0x1DCE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCE50u;
        // 0x1dce54: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DCE58u;
        goto label_fallthrough_0x1dce50;
    }
    ctx->pc = 0x1DCE50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DCE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCE50u;
        // 0x1dce54: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DCE50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1dce50:
    ctx->pc = 0x1DCE58u;
}
