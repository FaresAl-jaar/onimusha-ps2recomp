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

// Function: sub_002EDDB0
// Address: 0x2eddb0 - 0x2edf1c
void sub_002EDDB0_0x2eddb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EDDB0_0x2eddb0");
#endif

    switch (ctx->pc) {
        case 0x2eddb0u: goto label_2eddb0;
        case 0x2eddb4u: goto label_2eddb4;
        case 0x2eddb8u: goto label_2eddb8;
        case 0x2eddbcu: goto label_2eddbc;
        case 0x2eddc0u: goto label_2eddc0;
        case 0x2eddc4u: goto label_2eddc4;
        case 0x2eddc8u: goto label_2eddc8;
        case 0x2eddccu: goto label_2eddcc;
        case 0x2eddd0u: goto label_2eddd0;
        case 0x2eddd4u: goto label_2eddd4;
        case 0x2eddd8u: goto label_2eddd8;
        case 0x2edddcu: goto label_2edddc;
        case 0x2edde0u: goto label_2edde0;
        case 0x2edde4u: goto label_2edde4;
        case 0x2edde8u: goto label_2edde8;
        case 0x2eddecu: goto label_2eddec;
        case 0x2eddf0u: goto label_2eddf0;
        case 0x2eddf4u: goto label_2eddf4;
        case 0x2eddf8u: goto label_2eddf8;
        case 0x2eddfcu: goto label_2eddfc;
        case 0x2ede00u: goto label_2ede00;
        case 0x2ede04u: goto label_2ede04;
        case 0x2ede08u: goto label_2ede08;
        case 0x2ede0cu: goto label_2ede0c;
        case 0x2ede10u: goto label_2ede10;
        case 0x2ede14u: goto label_2ede14;
        case 0x2ede18u: goto label_2ede18;
        case 0x2ede1cu: goto label_2ede1c;
        case 0x2ede20u: goto label_2ede20;
        case 0x2ede24u: goto label_2ede24;
        case 0x2ede28u: goto label_2ede28;
        case 0x2ede2cu: goto label_2ede2c;
        case 0x2ede30u: goto label_2ede30;
        case 0x2ede34u: goto label_2ede34;
        case 0x2ede38u: goto label_2ede38;
        case 0x2ede3cu: goto label_2ede3c;
        case 0x2ede40u: goto label_2ede40;
        case 0x2ede44u: goto label_2ede44;
        case 0x2ede48u: goto label_2ede48;
        case 0x2ede4cu: goto label_2ede4c;
        case 0x2ede50u: goto label_2ede50;
        case 0x2ede54u: goto label_2ede54;
        case 0x2ede58u: goto label_2ede58;
        case 0x2ede5cu: goto label_2ede5c;
        case 0x2ede60u: goto label_2ede60;
        case 0x2ede64u: goto label_2ede64;
        case 0x2ede68u: goto label_2ede68;
        case 0x2ede6cu: goto label_2ede6c;
        case 0x2ede70u: goto label_2ede70;
        case 0x2ede74u: goto label_2ede74;
        case 0x2ede78u: goto label_2ede78;
        case 0x2ede7cu: goto label_2ede7c;
        case 0x2ede80u: goto label_2ede80;
        case 0x2ede84u: goto label_2ede84;
        case 0x2ede88u: goto label_2ede88;
        case 0x2ede8cu: goto label_2ede8c;
        case 0x2ede90u: goto label_2ede90;
        case 0x2ede94u: goto label_2ede94;
        case 0x2ede98u: goto label_2ede98;
        case 0x2ede9cu: goto label_2ede9c;
        case 0x2edea0u: goto label_2edea0;
        case 0x2edea4u: goto label_2edea4;
        case 0x2edea8u: goto label_2edea8;
        case 0x2edeacu: goto label_2edeac;
        case 0x2edeb0u: goto label_2edeb0;
        case 0x2edeb4u: goto label_2edeb4;
        case 0x2edeb8u: goto label_2edeb8;
        case 0x2edebcu: goto label_2edebc;
        case 0x2edec0u: goto label_2edec0;
        case 0x2edec4u: goto label_2edec4;
        case 0x2edec8u: goto label_2edec8;
        case 0x2edeccu: goto label_2edecc;
        case 0x2eded0u: goto label_2eded0;
        case 0x2eded4u: goto label_2eded4;
        case 0x2eded8u: goto label_2eded8;
        case 0x2ededcu: goto label_2ededc;
        case 0x2edee0u: goto label_2edee0;
        case 0x2edee4u: goto label_2edee4;
        case 0x2edee8u: goto label_2edee8;
        case 0x2edeecu: goto label_2edeec;
        case 0x2edef0u: goto label_2edef0;
        case 0x2edef4u: goto label_2edef4;
        case 0x2edef8u: goto label_2edef8;
        case 0x2edefcu: goto label_2edefc;
        case 0x2edf00u: goto label_2edf00;
        case 0x2edf04u: goto label_2edf04;
        case 0x2edf08u: goto label_2edf08;
        case 0x2edf0cu: goto label_2edf0c;
        case 0x2edf10u: goto label_2edf10;
        case 0x2edf14u: goto label_2edf14;
        case 0x2edf18u: goto label_2edf18;
        default: break;
    }

    ctx->pc = 0x2eddb0u;

label_2eddb0:
    // 0x2eddb0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2eddb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2eddb4:
    // 0x2eddb4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2eddb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2eddb8:
    // 0x2eddb8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2eddb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2eddbc:
    // 0x2eddbc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2eddbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2eddc0:
    // 0x2eddc0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2eddc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2eddc4:
    // 0x2eddc4: 0x90850821  lbu         $a1, 0x821($a0)
    ctx->pc = 0x2eddc4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2081)));
label_2eddc8:
    // 0x2eddc8: 0x10a30041  beq         $a1, $v1, . + 4 + (0x41 << 2)
label_2eddcc:
    if (ctx->pc == 0x2EDDCCu) {
        ctx->pc = 0x2EDDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDDC8u;
        // 0x2eddcc: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EDDD0u;
        goto label_2eddd0;
    }
    ctx->pc = 0x2EDDC8u;
    {
        const bool branch_taken_0x2eddc8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x2EDDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDDC8u;
        // 0x2eddcc: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eddc8) {
            ctx->pc = 0x2EDED0u;
            goto label_2eded0;
        }
    }
    ctx->pc = 0x2EDDD0u;
label_2eddd0:
    // 0x2eddd0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2eddd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2eddd4:
    // 0x2eddd4: 0x10a40012  beq         $a1, $a0, . + 4 + (0x12 << 2)
label_2eddd8:
    if (ctx->pc == 0x2EDDD8u) {
        ctx->pc = 0x2EDDDCu;
        goto label_2edddc;
    }
    ctx->pc = 0x2EDDD4u;
    {
        const bool branch_taken_0x2eddd4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x2eddd4) {
            ctx->pc = 0x2EDE20u;
            goto label_2ede20;
        }
    }
    ctx->pc = 0x2EDDDCu;
label_2edddc:
    // 0x2edddc: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
label_2edde0:
    if (ctx->pc == 0x2EDDE0u) {
        ctx->pc = 0x2EDDE4u;
        goto label_2edde4;
    }
    ctx->pc = 0x2EDDDCu;
    {
        const bool branch_taken_0x2edddc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2edddc) {
            ctx->pc = 0x2EDDF0u;
            goto label_2eddf0;
        }
    }
    ctx->pc = 0x2EDDE4u;
label_2edde4:
    // 0x2edde4: 0x10000048  b           . + 4 + (0x48 << 2)
label_2edde8:
    if (ctx->pc == 0x2EDDE8u) {
        ctx->pc = 0x2EDDECu;
        goto label_2eddec;
    }
    ctx->pc = 0x2EDDE4u;
    {
        const bool branch_taken_0x2edde4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2edde4) {
            ctx->pc = 0x2EDF08u;
            goto label_2edf08;
        }
    }
    ctx->pc = 0x2EDDECu;
label_2eddec:
    // 0x2eddec: 0x0  nop
    ctx->pc = 0x2eddecu;
    // NOP
label_2eddf0:
    // 0x2eddf0: 0xa22007f6  sb          $zero, 0x7F6($s1)
    ctx->pc = 0x2eddf0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2038), (uint8_t)GPR_U32(ctx, 0));
label_2eddf4:
    // 0x2eddf4: 0xa22007f4  sb          $zero, 0x7F4($s1)
    ctx->pc = 0x2eddf4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2036), (uint8_t)GPR_U32(ctx, 0));
label_2eddf8:
    // 0x2eddf8: 0x24030051  addiu       $v1, $zero, 0x51
    ctx->pc = 0x2eddf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
label_2eddfc:
    // 0x2eddfc: 0xa62307f2  sh          $v1, 0x7F2($s1)
    ctx->pc = 0x2eddfcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2034), (uint16_t)GPR_U32(ctx, 3));
label_2ede00:
    // 0x2ede00: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x2ede00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2ede04:
    // 0x2ede04: 0xa22307f5  sb          $v1, 0x7F5($s1)
    ctx->pc = 0x2ede04u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2037), (uint8_t)GPR_U32(ctx, 3));
label_2ede08:
    // 0x2ede08: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2ede08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_2ede0c:
    // 0x2ede0c: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x2ede0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
label_2ede10:
    // 0x2ede10: 0xae2307ec  sw          $v1, 0x7EC($s1)
    ctx->pc = 0x2ede10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2028), GPR_U32(ctx, 3));
label_2ede14:
    // 0x2ede14: 0x1000003c  b           . + 4 + (0x3C << 2)
label_2ede18:
    if (ctx->pc == 0x2EDE18u) {
        ctx->pc = 0x2EDE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDE14u;
        // 0x2ede18: 0xa2240821  sb          $a0, 0x821($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 2081), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EDE1Cu;
        goto label_2ede1c;
    }
    ctx->pc = 0x2EDE14u;
    {
        const bool branch_taken_0x2ede14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EDE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDE14u;
        // 0x2ede18: 0xa2240821  sb          $a0, 0x821($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 2081), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ede14) {
            ctx->pc = 0x2EDF08u;
            goto label_2edf08;
        }
    }
    ctx->pc = 0x2EDE1Cu;
label_2ede1c:
    // 0x2ede1c: 0x0  nop
    ctx->pc = 0x2ede1cu;
    // NOP
label_2ede20:
    // 0x2ede20: 0x8e230054  lw          $v1, 0x54($s1)
    ctx->pc = 0x2ede20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_2ede24:
    // 0x2ede24: 0x946300c4  lhu         $v1, 0xC4($v1)
    ctx->pc = 0x2ede24u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 196)));
label_2ede28:
    // 0x2ede28: 0x28610047  slti        $at, $v1, 0x47
    ctx->pc = 0x2ede28u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)71) ? 1 : 0);
label_2ede2c:
    // 0x2ede2c: 0x14200036  bnez        $at, . + 4 + (0x36 << 2)
label_2ede30:
    if (ctx->pc == 0x2EDE30u) {
        ctx->pc = 0x2EDE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDE2Cu;
        // 0x2ede30: 0x24040043  addiu       $a0, $zero, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EDE34u;
        goto label_2ede34;
    }
    ctx->pc = 0x2EDE2Cu;
    {
        const bool branch_taken_0x2ede2c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EDE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDE2Cu;
        // 0x2ede30: 0x24040043  addiu       $a0, $zero, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ede2c) {
            ctx->pc = 0x2EDF08u;
            goto label_2edf08;
        }
    }
    ctx->pc = 0x2EDE34u;
label_2ede34:
    // 0x2ede34: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2ede34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2ede38:
    // 0x2ede38: 0xc0b2ebc  jal         func_2CBAF0
label_2ede3c:
    if (ctx->pc == 0x2EDE3Cu) {
        ctx->pc = 0x2EDE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDE38u;
        // 0x2ede3c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EDE40u;
        goto label_2ede40;
    }
    ctx->pc = 0x2EDE38u;
    SET_GPR_U32(ctx, 31, 0x2EDE40u);
    ctx->pc = 0x2EDE3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDE38u;
    // 0x2ede3c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBAF0u, 0x2EDE38u, 0x2EDE40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDE40u;
label_2ede40:
    // 0x2ede40: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ede40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ede44:
    // 0x2ede44: 0x1200001e  beqz        $s0, . + 4 + (0x1E << 2)
label_2ede48:
    if (ctx->pc == 0x2EDE48u) {
        ctx->pc = 0x2EDE4Cu;
        goto label_2ede4c;
    }
    ctx->pc = 0x2EDE44u;
    {
        const bool branch_taken_0x2ede44 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ede44) {
            ctx->pc = 0x2EDEC0u;
            goto label_2edec0;
        }
    }
    ctx->pc = 0x2EDE4Cu;
label_2ede4c:
    // 0x2ede4c: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x2ede4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
label_2ede50:
    // 0x2ede50: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x2ede50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2ede54:
    // 0x2ede54: 0x24428e70  addiu       $v0, $v0, -0x7190
    ctx->pc = 0x2ede54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938224));
label_2ede58:
    // 0x2ede58: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x2ede58u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2ede5c:
    // 0x2ede5c: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x2ede5cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
label_2ede60:
    // 0x2ede60: 0x8e1904d4  lw          $t9, 0x4D4($s0)
    ctx->pc = 0x2ede60u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1236)));
label_2ede64:
    // 0x2ede64: 0x8f390040  lw          $t9, 0x40($t9)
    ctx->pc = 0x2ede64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 64)));
label_2ede68:
    // 0x2ede68: 0x320f809  jalr        $t9
label_2ede6c:
    if (ctx->pc == 0x2EDE6Cu) {
        ctx->pc = 0x2EDE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDE68u;
        // 0x2ede6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EDE70u;
        goto label_2ede70;
    }
    ctx->pc = 0x2EDE68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2EDE70u);
        ctx->pc = 0x2EDE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDE68u;
        // 0x2ede6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EDE68u, 0x2EDE70u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2EDE70u;
label_2ede70:
    // 0x2ede70: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ede70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ede74:
    // 0x2ede74: 0xa20207d8  sb          $v0, 0x7D8($s0)
    ctx->pc = 0x2ede74u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2008), (uint8_t)GPR_U32(ctx, 2));
label_2ede78:
    // 0x2ede78: 0x922207d8  lbu         $v0, 0x7D8($s1)
    ctx->pc = 0x2ede78u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2008)));
label_2ede7c:
    // 0x2ede7c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_2ede80:
    if (ctx->pc == 0x2EDE80u) {
        ctx->pc = 0x2EDE84u;
        goto label_2ede84;
    }
    ctx->pc = 0x2EDE7Cu;
    {
        const bool branch_taken_0x2ede7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ede7c) {
            ctx->pc = 0x2EDE88u;
            goto label_2ede88;
        }
    }
    ctx->pc = 0x2EDE84u;
label_2ede84:
    // 0x2ede84: 0xa20207d9  sb          $v0, 0x7D9($s0)
    ctx->pc = 0x2ede84u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2009), (uint8_t)GPR_U32(ctx, 2));
label_2ede88:
    // 0x2ede88: 0x8e23004c  lw          $v1, 0x4C($s1)
    ctx->pc = 0x2ede88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
label_2ede8c:
    // 0x2ede8c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2ede8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2ede90:
    // 0x2ede90: 0x26040090  addiu       $a0, $s0, 0x90
    ctx->pc = 0x2ede90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
label_2ede94:
    // 0x2ede94: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x2ede94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2ede98:
    // 0x2ede98: 0x8c630094  lw          $v1, 0x94($v1)
    ctx->pc = 0x2ede98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
label_2ede9c:
    // 0x2ede9c: 0x78630530  lq          $v1, 0x530($v1)
    ctx->pc = 0x2ede9cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 1328)));
label_2edea0:
    // 0x2edea0: 0x7e030020  sq          $v1, 0x20($s0)
    ctx->pc = 0x2edea0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 3));
label_2edea4:
    // 0x2edea4: 0xae02002c  sw          $v0, 0x2C($s0)
    ctx->pc = 0x2edea4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
label_2edea8:
    // 0x2edea8: 0x8e22004c  lw          $v0, 0x4C($s1)
    ctx->pc = 0x2edea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
label_2edeac:
    // 0x2edeac: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x2edeacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
label_2edeb0:
    // 0x2edeb0: 0xc041442  jal         func_105108
label_2edeb4:
    if (ctx->pc == 0x2EDEB4u) {
        ctx->pc = 0x2EDEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDEB0u;
        // 0x2edeb4: 0x24450500  addiu       $a1, $v0, 0x500 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EDEB8u;
        goto label_2edeb8;
    }
    ctx->pc = 0x2EDEB0u;
    SET_GPR_U32(ctx, 31, 0x2EDEB8u);
    ctx->pc = 0x2EDEB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDEB0u;
    // 0x2edeb4: 0x24450500  addiu       $a1, $v0, 0x500 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x2EDEB0u, 0x2EDEB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDEB8u;
label_2edeb8:
    // 0x2edeb8: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x2edeb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2edebc:
    // 0x2edebc: 0xae032b24  sw          $v1, 0x2B24($s0)
    ctx->pc = 0x2edebcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11044), GPR_U32(ctx, 3));
label_2edec0:
    // 0x2edec0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2edec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2edec4:
    // 0x2edec4: 0x10000010  b           . + 4 + (0x10 << 2)
label_2edec8:
    if (ctx->pc == 0x2EDEC8u) {
        ctx->pc = 0x2EDEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDEC4u;
        // 0x2edec8: 0xa2230821  sb          $v1, 0x821($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EDECCu;
        goto label_2edecc;
    }
    ctx->pc = 0x2EDEC4u;
    {
        const bool branch_taken_0x2edec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EDEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDEC4u;
        // 0x2edec8: 0xa2230821  sb          $v1, 0x821($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2edec4) {
            ctx->pc = 0x2EDF08u;
            goto label_2edf08;
        }
    }
    ctx->pc = 0x2EDECCu;
label_2edecc:
    // 0x2edecc: 0x0  nop
    ctx->pc = 0x2edeccu;
    // NOP
label_2eded0:
    // 0x2eded0: 0x922307f6  lbu         $v1, 0x7F6($s1)
    ctx->pc = 0x2eded0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2038)));
label_2eded4:
    // 0x2eded4: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
label_2eded8:
    if (ctx->pc == 0x2EDED8u) {
        ctx->pc = 0x2EDEDCu;
        goto label_2ededc;
    }
    ctx->pc = 0x2EDED4u;
    {
        const bool branch_taken_0x2eded4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eded4) {
            ctx->pc = 0x2EDF08u;
            goto label_2edf08;
        }
    }
    ctx->pc = 0x2EDEDCu;
label_2ededc:
    // 0x2ededc: 0xa22007f6  sb          $zero, 0x7F6($s1)
    ctx->pc = 0x2ededcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2038), (uint8_t)GPR_U32(ctx, 0));
label_2edee0:
    // 0x2edee0: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x2edee0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2edee4:
    // 0x2edee4: 0xa22007f4  sb          $zero, 0x7F4($s1)
    ctx->pc = 0x2edee4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2036), (uint8_t)GPR_U32(ctx, 0));
label_2edee8:
    // 0x2edee8: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2edee8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_2edeec:
    // 0x2edeec: 0xa62407f2  sh          $a0, 0x7F2($s1)
    ctx->pc = 0x2edeecu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2034), (uint16_t)GPR_U32(ctx, 4));
label_2edef0:
    // 0x2edef0: 0x34640040  ori         $a0, $v1, 0x40
    ctx->pc = 0x2edef0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
label_2edef4:
    // 0x2edef4: 0xa22007f5  sb          $zero, 0x7F5($s1)
    ctx->pc = 0x2edef4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2037), (uint8_t)GPR_U32(ctx, 0));
label_2edef8:
    // 0x2edef8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2edef8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2edefc:
    // 0x2edefc: 0xae2407ec  sw          $a0, 0x7EC($s1)
    ctx->pc = 0x2edefcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2028), GPR_U32(ctx, 4));
label_2edf00:
    // 0x2edf00: 0xa2230780  sb          $v1, 0x780($s1)
    ctx->pc = 0x2edf00u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1920), (uint8_t)GPR_U32(ctx, 3));
label_2edf04:
    // 0x2edf04: 0x0  nop
    ctx->pc = 0x2edf04u;
    // NOP
label_2edf08:
    // 0x2edf08: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2edf08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2edf0c:
    // 0x2edf0c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2edf0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2edf10:
    // 0x2edf10: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2edf10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2edf14:
    // 0x2edf14: 0x3e00008  jr          $ra
label_2edf18:
    if (ctx->pc == 0x2EDF18u) {
        ctx->pc = 0x2EDF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDF14u;
        // 0x2edf18: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EDF1Cu;
        goto label_fallthrough_0x2edf14;
    }
    ctx->pc = 0x2EDF14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EDF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDF14u;
        // 0x2edf18: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EDF14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2edf14:
    ctx->pc = 0x2EDF1Cu;
}
