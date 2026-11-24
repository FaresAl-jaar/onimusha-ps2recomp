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

// Function: sub_001DFD40
// Address: 0x1dfd40 - 0x1dff94
void sub_001DFD40_0x1dfd40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DFD40_0x1dfd40");
#endif

    switch (ctx->pc) {
        case 0x1dfd40u: goto label_1dfd40;
        case 0x1dfd44u: goto label_1dfd44;
        case 0x1dfd48u: goto label_1dfd48;
        case 0x1dfd4cu: goto label_1dfd4c;
        case 0x1dfd50u: goto label_1dfd50;
        case 0x1dfd54u: goto label_1dfd54;
        case 0x1dfd58u: goto label_1dfd58;
        case 0x1dfd5cu: goto label_1dfd5c;
        case 0x1dfd60u: goto label_1dfd60;
        case 0x1dfd64u: goto label_1dfd64;
        case 0x1dfd68u: goto label_1dfd68;
        case 0x1dfd6cu: goto label_1dfd6c;
        case 0x1dfd70u: goto label_1dfd70;
        case 0x1dfd74u: goto label_1dfd74;
        case 0x1dfd78u: goto label_1dfd78;
        case 0x1dfd7cu: goto label_1dfd7c;
        case 0x1dfd80u: goto label_1dfd80;
        case 0x1dfd84u: goto label_1dfd84;
        case 0x1dfd88u: goto label_1dfd88;
        case 0x1dfd8cu: goto label_1dfd8c;
        case 0x1dfd90u: goto label_1dfd90;
        case 0x1dfd94u: goto label_1dfd94;
        case 0x1dfd98u: goto label_1dfd98;
        case 0x1dfd9cu: goto label_1dfd9c;
        case 0x1dfda0u: goto label_1dfda0;
        case 0x1dfda4u: goto label_1dfda4;
        case 0x1dfda8u: goto label_1dfda8;
        case 0x1dfdacu: goto label_1dfdac;
        case 0x1dfdb0u: goto label_1dfdb0;
        case 0x1dfdb4u: goto label_1dfdb4;
        case 0x1dfdb8u: goto label_1dfdb8;
        case 0x1dfdbcu: goto label_1dfdbc;
        case 0x1dfdc0u: goto label_1dfdc0;
        case 0x1dfdc4u: goto label_1dfdc4;
        case 0x1dfdc8u: goto label_1dfdc8;
        case 0x1dfdccu: goto label_1dfdcc;
        case 0x1dfdd0u: goto label_1dfdd0;
        case 0x1dfdd4u: goto label_1dfdd4;
        case 0x1dfdd8u: goto label_1dfdd8;
        case 0x1dfddcu: goto label_1dfddc;
        case 0x1dfde0u: goto label_1dfde0;
        case 0x1dfde4u: goto label_1dfde4;
        case 0x1dfde8u: goto label_1dfde8;
        case 0x1dfdecu: goto label_1dfdec;
        case 0x1dfdf0u: goto label_1dfdf0;
        case 0x1dfdf4u: goto label_1dfdf4;
        case 0x1dfdf8u: goto label_1dfdf8;
        case 0x1dfdfcu: goto label_1dfdfc;
        case 0x1dfe00u: goto label_1dfe00;
        case 0x1dfe04u: goto label_1dfe04;
        case 0x1dfe08u: goto label_1dfe08;
        case 0x1dfe0cu: goto label_1dfe0c;
        case 0x1dfe10u: goto label_1dfe10;
        case 0x1dfe14u: goto label_1dfe14;
        case 0x1dfe18u: goto label_1dfe18;
        case 0x1dfe1cu: goto label_1dfe1c;
        case 0x1dfe20u: goto label_1dfe20;
        case 0x1dfe24u: goto label_1dfe24;
        case 0x1dfe28u: goto label_1dfe28;
        case 0x1dfe2cu: goto label_1dfe2c;
        case 0x1dfe30u: goto label_1dfe30;
        case 0x1dfe34u: goto label_1dfe34;
        case 0x1dfe38u: goto label_1dfe38;
        case 0x1dfe3cu: goto label_1dfe3c;
        case 0x1dfe40u: goto label_1dfe40;
        case 0x1dfe44u: goto label_1dfe44;
        case 0x1dfe48u: goto label_1dfe48;
        case 0x1dfe4cu: goto label_1dfe4c;
        case 0x1dfe50u: goto label_1dfe50;
        case 0x1dfe54u: goto label_1dfe54;
        case 0x1dfe58u: goto label_1dfe58;
        case 0x1dfe5cu: goto label_1dfe5c;
        case 0x1dfe60u: goto label_1dfe60;
        case 0x1dfe64u: goto label_1dfe64;
        case 0x1dfe68u: goto label_1dfe68;
        case 0x1dfe6cu: goto label_1dfe6c;
        case 0x1dfe70u: goto label_1dfe70;
        case 0x1dfe74u: goto label_1dfe74;
        case 0x1dfe78u: goto label_1dfe78;
        case 0x1dfe7cu: goto label_1dfe7c;
        case 0x1dfe80u: goto label_1dfe80;
        case 0x1dfe84u: goto label_1dfe84;
        case 0x1dfe88u: goto label_1dfe88;
        case 0x1dfe8cu: goto label_1dfe8c;
        case 0x1dfe90u: goto label_1dfe90;
        case 0x1dfe94u: goto label_1dfe94;
        case 0x1dfe98u: goto label_1dfe98;
        case 0x1dfe9cu: goto label_1dfe9c;
        case 0x1dfea0u: goto label_1dfea0;
        case 0x1dfea4u: goto label_1dfea4;
        case 0x1dfea8u: goto label_1dfea8;
        case 0x1dfeacu: goto label_1dfeac;
        case 0x1dfeb0u: goto label_1dfeb0;
        case 0x1dfeb4u: goto label_1dfeb4;
        case 0x1dfeb8u: goto label_1dfeb8;
        case 0x1dfebcu: goto label_1dfebc;
        case 0x1dfec0u: goto label_1dfec0;
        case 0x1dfec4u: goto label_1dfec4;
        case 0x1dfec8u: goto label_1dfec8;
        case 0x1dfeccu: goto label_1dfecc;
        case 0x1dfed0u: goto label_1dfed0;
        case 0x1dfed4u: goto label_1dfed4;
        case 0x1dfed8u: goto label_1dfed8;
        case 0x1dfedcu: goto label_1dfedc;
        case 0x1dfee0u: goto label_1dfee0;
        case 0x1dfee4u: goto label_1dfee4;
        case 0x1dfee8u: goto label_1dfee8;
        case 0x1dfeecu: goto label_1dfeec;
        case 0x1dfef0u: goto label_1dfef0;
        case 0x1dfef4u: goto label_1dfef4;
        case 0x1dfef8u: goto label_1dfef8;
        case 0x1dfefcu: goto label_1dfefc;
        case 0x1dff00u: goto label_1dff00;
        case 0x1dff04u: goto label_1dff04;
        case 0x1dff08u: goto label_1dff08;
        case 0x1dff0cu: goto label_1dff0c;
        case 0x1dff10u: goto label_1dff10;
        case 0x1dff14u: goto label_1dff14;
        case 0x1dff18u: goto label_1dff18;
        case 0x1dff1cu: goto label_1dff1c;
        case 0x1dff20u: goto label_1dff20;
        case 0x1dff24u: goto label_1dff24;
        case 0x1dff28u: goto label_1dff28;
        case 0x1dff2cu: goto label_1dff2c;
        case 0x1dff30u: goto label_1dff30;
        case 0x1dff34u: goto label_1dff34;
        case 0x1dff38u: goto label_1dff38;
        case 0x1dff3cu: goto label_1dff3c;
        case 0x1dff40u: goto label_1dff40;
        case 0x1dff44u: goto label_1dff44;
        case 0x1dff48u: goto label_1dff48;
        case 0x1dff4cu: goto label_1dff4c;
        case 0x1dff50u: goto label_1dff50;
        case 0x1dff54u: goto label_1dff54;
        case 0x1dff58u: goto label_1dff58;
        case 0x1dff5cu: goto label_1dff5c;
        case 0x1dff60u: goto label_1dff60;
        case 0x1dff64u: goto label_1dff64;
        case 0x1dff68u: goto label_1dff68;
        case 0x1dff6cu: goto label_1dff6c;
        case 0x1dff70u: goto label_1dff70;
        case 0x1dff74u: goto label_1dff74;
        case 0x1dff78u: goto label_1dff78;
        case 0x1dff7cu: goto label_1dff7c;
        case 0x1dff80u: goto label_1dff80;
        case 0x1dff84u: goto label_1dff84;
        case 0x1dff88u: goto label_1dff88;
        case 0x1dff8cu: goto label_1dff8c;
        case 0x1dff90u: goto label_1dff90;
        default: break;
    }

    ctx->pc = 0x1dfd40u;

label_1dfd40:
    // 0x1dfd40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1dfd40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1dfd44:
    // 0x1dfd44: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1dfd44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1dfd48:
    // 0x1dfd48: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1dfd48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1dfd4c:
    // 0x1dfd4c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1dfd4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1dfd50:
    // 0x1dfd50: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x1dfd50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1dfd54:
    // 0x1dfd54: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1dfd58:
    if (ctx->pc == 0x1DFD58u) {
        ctx->pc = 0x1DFD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFD54u;
        // 0x1dfd58: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DFD5Cu;
        goto label_1dfd5c;
    }
    ctx->pc = 0x1DFD54u;
    {
        const bool branch_taken_0x1dfd54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DFD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFD54u;
        // 0x1dfd58: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfd54) {
            ctx->pc = 0x1DFD68u;
            goto label_1dfd68;
        }
    }
    ctx->pc = 0x1DFD5Cu;
label_1dfd5c:
    // 0x1dfd5c: 0x10000088  b           . + 4 + (0x88 << 2)
label_1dfd60:
    if (ctx->pc == 0x1DFD60u) {
        ctx->pc = 0x1DFD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFD5Cu;
        // 0x1dfd60: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DFD64u;
        goto label_1dfd64;
    }
    ctx->pc = 0x1DFD5Cu;
    {
        const bool branch_taken_0x1dfd5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DFD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFD5Cu;
        // 0x1dfd60: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfd5c) {
            ctx->pc = 0x1DFF80u;
            goto label_1dff80;
        }
    }
    ctx->pc = 0x1DFD64u;
label_1dfd64:
    // 0x1dfd64: 0x0  nop
    ctx->pc = 0x1dfd64u;
    // NOP
label_1dfd68:
    // 0x1dfd68: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x1dfd68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_1dfd6c:
    // 0x1dfd6c: 0x8c990020  lw          $t9, 0x20($a0)
    ctx->pc = 0x1dfd6cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_1dfd70:
    // 0x1dfd70: 0x8f390050  lw          $t9, 0x50($t9)
    ctx->pc = 0x1dfd70u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 80)));
label_1dfd74:
    // 0x1dfd74: 0x320f809  jalr        $t9
label_1dfd78:
    if (ctx->pc == 0x1DFD78u) {
        ctx->pc = 0x1DFD7Cu;
        goto label_1dfd7c;
    }
    ctx->pc = 0x1DFD74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DFD7Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DFD74u, 0x1DFD7Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DFD7Cu;
label_1dfd7c:
    // 0x1dfd7c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1dfd80:
    if (ctx->pc == 0x1DFD80u) {
        ctx->pc = 0x1DFD84u;
        goto label_1dfd84;
    }
    ctx->pc = 0x1DFD7Cu;
    {
        const bool branch_taken_0x1dfd7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dfd7c) {
            ctx->pc = 0x1DFDA0u;
            goto label_1dfda0;
        }
    }
    ctx->pc = 0x1DFD84u;
label_1dfd84:
    // 0x1dfd84: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x1dfd84u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1dfd88:
    // 0x1dfd88: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x1dfd88u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_1dfd8c:
    // 0x1dfd8c: 0x320f809  jalr        $t9
label_1dfd90:
    if (ctx->pc == 0x1DFD90u) {
        ctx->pc = 0x1DFD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFD8Cu;
        // 0x1dfd90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DFD94u;
        goto label_1dfd94;
    }
    ctx->pc = 0x1DFD8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DFD94u);
        ctx->pc = 0x1DFD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFD8Cu;
        // 0x1dfd90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DFD8Cu, 0x1DFD94u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DFD94u;
label_1dfd94:
    // 0x1dfd94: 0x1000007a  b           . + 4 + (0x7A << 2)
label_1dfd98:
    if (ctx->pc == 0x1DFD98u) {
        ctx->pc = 0x1DFD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFD94u;
        // 0x1dfd98: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DFD9Cu;
        goto label_1dfd9c;
    }
    ctx->pc = 0x1DFD94u;
    {
        const bool branch_taken_0x1dfd94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DFD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFD94u;
        // 0x1dfd98: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfd94) {
            ctx->pc = 0x1DFF80u;
            goto label_1dff80;
        }
    }
    ctx->pc = 0x1DFD9Cu;
label_1dfd9c:
    // 0x1dfd9c: 0x0  nop
    ctx->pc = 0x1dfd9cu;
    // NOP
label_1dfda0:
    // 0x1dfda0: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x1dfda0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_1dfda4:
    // 0x1dfda4: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x1dfda4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
label_1dfda8:
    // 0x1dfda8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1dfdac:
    if (ctx->pc == 0x1DFDACu) {
        ctx->pc = 0x1DFDB0u;
        goto label_1dfdb0;
    }
    ctx->pc = 0x1DFDA8u;
    {
        const bool branch_taken_0x1dfda8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dfda8) {
            ctx->pc = 0x1DFDB8u;
            goto label_1dfdb8;
        }
    }
    ctx->pc = 0x1DFDB0u;
label_1dfdb0:
    // 0x1dfdb0: 0x10000073  b           . + 4 + (0x73 << 2)
label_1dfdb4:
    if (ctx->pc == 0x1DFDB4u) {
        ctx->pc = 0x1DFDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFDB0u;
        // 0x1dfdb4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DFDB8u;
        goto label_1dfdb8;
    }
    ctx->pc = 0x1DFDB0u;
    {
        const bool branch_taken_0x1dfdb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DFDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFDB0u;
        // 0x1dfdb4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfdb0) {
            ctx->pc = 0x1DFF80u;
            goto label_1dff80;
        }
    }
    ctx->pc = 0x1DFDB8u;
label_1dfdb8:
    // 0x1dfdb8: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x1dfdb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1dfdbc:
    // 0x1dfdbc: 0x84680000  lh          $t0, 0x0($v1)
    ctx->pc = 0x1dfdbcu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_1dfdc0:
    // 0x1dfdc0: 0x402026  xor         $a0, $v0, $zero
    ctx->pc = 0x1dfdc0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
label_1dfdc4:
    // 0x1dfdc4: 0x28420001  slti        $v0, $v0, 0x1
    ctx->pc = 0x1dfdc4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1) ? 1 : 0);
label_1dfdc8:
    // 0x1dfdc8: 0x2c840001  sltiu       $a0, $a0, 0x1
    ctx->pc = 0x1dfdc8u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1dfdcc:
    // 0x1dfdcc: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1dfdccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1dfdd0:
    // 0x1dfdd0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1dfdd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1dfdd4:
    // 0x1dfdd4: 0x84a70008  lh          $a3, 0x8($a1)
    ctx->pc = 0x1dfdd4u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 8)));
label_1dfdd8:
    // 0x1dfdd8: 0x84a3000a  lh          $v1, 0xA($a1)
    ctx->pc = 0x1dfdd8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 10)));
label_1dfddc:
    // 0x1dfddc: 0x107302a  slt         $a2, $t0, $a3
    ctx->pc = 0x1dfddcu;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
label_1dfde0:
    // 0x1dfde0: 0x68282a  slt         $a1, $v1, $t0
    ctx->pc = 0x1dfde0u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
label_1dfde4:
    // 0x1dfde4: 0x38637ffd  xori        $v1, $v1, 0x7FFD
    ctx->pc = 0x1dfde4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)32765);
label_1dfde8:
    // 0x1dfde8: 0xc52825  or          $a1, $a2, $a1
    ctx->pc = 0x1dfde8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
label_1dfdec:
    // 0x1dfdec: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x1dfdecu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1dfdf0:
    // 0x1dfdf0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1dfdf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1dfdf4:
    // 0x1dfdf4: 0x851824  and         $v1, $a0, $a1
    ctx->pc = 0x1dfdf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
label_1dfdf8:
    // 0x1dfdf8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1dfdf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1dfdfc:
    // 0x1dfdfc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1dfe00:
    if (ctx->pc == 0x1DFE00u) {
        ctx->pc = 0x1DFE04u;
        goto label_1dfe04;
    }
    ctx->pc = 0x1DFDFCu;
    {
        const bool branch_taken_0x1dfdfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dfdfc) {
            ctx->pc = 0x1DFE10u;
            goto label_1dfe10;
        }
    }
    ctx->pc = 0x1DFE04u;
label_1dfe04:
    // 0x1dfe04: 0x1000005e  b           . + 4 + (0x5E << 2)
label_1dfe08:
    if (ctx->pc == 0x1DFE08u) {
        ctx->pc = 0x1DFE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFE04u;
        // 0x1dfe08: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DFE0Cu;
        goto label_1dfe0c;
    }
    ctx->pc = 0x1DFE04u;
    {
        const bool branch_taken_0x1dfe04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DFE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFE04u;
        // 0x1dfe08: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfe04) {
            ctx->pc = 0x1DFF80u;
            goto label_1dff80;
        }
    }
    ctx->pc = 0x1DFE0Cu;
label_1dfe0c:
    // 0x1dfe0c: 0x0  nop
    ctx->pc = 0x1dfe0cu;
    // NOP
label_1dfe10:
    // 0x1dfe10: 0xe81026  xor         $v0, $a3, $t0
    ctx->pc = 0x1dfe10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) ^ GPR_U64(ctx, 8));
label_1dfe14:
    // 0x1dfe14: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1dfe14u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1dfe18:
    // 0x1dfe18: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1dfe18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_1dfe1c:
    // 0x1dfe1c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1dfe20:
    if (ctx->pc == 0x1DFE20u) {
        ctx->pc = 0x1DFE24u;
        goto label_1dfe24;
    }
    ctx->pc = 0x1DFE1Cu;
    {
        const bool branch_taken_0x1dfe1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dfe1c) {
            ctx->pc = 0x1DFE30u;
            goto label_1dfe30;
        }
    }
    ctx->pc = 0x1DFE24u;
label_1dfe24:
    // 0x1dfe24: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x1dfe24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1dfe28:
    // 0x1dfe28: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1dfe28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1dfe2c:
    // 0x1dfe2c: 0xe6200010  swc1        $f0, 0x10($s1)
    ctx->pc = 0x1dfe2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
label_1dfe30:
    // 0x1dfe30: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x1dfe30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_1dfe34:
    // 0x1dfe34: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x1dfe34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1dfe38:
    // 0x1dfe38: 0x84500000  lh          $s0, 0x0($v0)
    ctx->pc = 0x1dfe38u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1dfe3c:
    // 0x1dfe3c: 0x84860000  lh          $a2, 0x0($a0)
    ctx->pc = 0x1dfe3cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_1dfe40:
    // 0x1dfe40: 0xd0082a  slt         $at, $a2, $s0
    ctx->pc = 0x1dfe40u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_1dfe44:
    // 0x1dfe44: 0x1420001e  bnez        $at, . + 4 + (0x1E << 2)
label_1dfe48:
    if (ctx->pc == 0x1DFE48u) {
        ctx->pc = 0x1DFE4Cu;
        goto label_1dfe4c;
    }
    ctx->pc = 0x1DFE44u;
    {
        const bool branch_taken_0x1dfe44 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dfe44) {
            ctx->pc = 0x1DFEC0u;
            goto label_1dfec0;
        }
    }
    ctx->pc = 0x1DFE4Cu;
label_1dfe4c:
    // 0x1dfe4c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1dfe4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1dfe50:
    // 0x1dfe50: 0x84450008  lh          $a1, 0x8($v0)
    ctx->pc = 0x1dfe50u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_1dfe54:
    // 0x1dfe54: 0x14a60005  bne         $a1, $a2, . + 4 + (0x5 << 2)
label_1dfe58:
    if (ctx->pc == 0x1DFE58u) {
        ctx->pc = 0x1DFE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFE54u;
        // 0x1dfe58: 0x10243c  dsll32      $a0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DFE5Cu;
        goto label_1dfe5c;
    }
    ctx->pc = 0x1DFE54u;
    {
        const bool branch_taken_0x1dfe54 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 6));
        ctx->pc = 0x1DFE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFE54u;
        // 0x1dfe58: 0x10243c  dsll32      $a0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfe54) {
            ctx->pc = 0x1DFE6Cu;
            goto label_1dfe6c;
        }
    }
    ctx->pc = 0x1DFE5Cu;
label_1dfe5c:
    // 0x1dfe5c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1dfe5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1dfe60:
    // 0x1dfe60: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1dfe60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1dfe64:
    // 0x1dfe64: 0x10000004  b           . + 4 + (0x4 << 2)
label_1dfe68:
    if (ctx->pc == 0x1DFE68u) {
        ctx->pc = 0x1DFE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFE64u;
        // 0x1dfe68: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DFE6Cu;
        goto label_1dfe6c;
    }
    ctx->pc = 0x1DFE64u;
    {
        const bool branch_taken_0x1dfe64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DFE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFE64u;
        // 0x1dfe68: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfe64) {
            ctx->pc = 0x1DFE78u;
            goto label_1dfe78;
        }
    }
    ctx->pc = 0x1DFE6Cu;
label_1dfe6c:
    // 0x1dfe6c: 0xc0767d4  jal         func_1D9F50
label_1dfe70:
    if (ctx->pc == 0x1DFE70u) {
        ctx->pc = 0x1DFE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFE6Cu;
        // 0x1dfe70: 0x4243f  dsra32      $a0, $a0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DFE74u;
        goto label_1dfe74;
    }
    ctx->pc = 0x1DFE6Cu;
    SET_GPR_U32(ctx, 31, 0x1DFE74u);
    ctx->pc = 0x1DFE70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFE6Cu;
    // 0x1dfe70: 0x4243f  dsra32      $a0, $a0, 16 (Delay Slot)
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9F50u, 0x1DFE6Cu, 0x1DFE74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFE74u;
label_1dfe74:
    // 0x1dfe74: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1dfe74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1dfe78:
    // 0x1dfe78: 0xc62d0010  lwc1        $f13, 0x10($s1)
    ctx->pc = 0x1dfe78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1dfe7c:
    // 0x1dfe7c: 0xc44e0004  lwc1        $f14, 0x4($v0)
    ctx->pc = 0x1dfe7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_1dfe80:
    // 0x1dfe80: 0xc0767dc  jal         func_1D9F70
label_1dfe84:
    if (ctx->pc == 0x1DFE84u) {
        ctx->pc = 0x1DFE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFE80u;
        // 0x1dfe84: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DFE88u;
        goto label_1dfe88;
    }
    ctx->pc = 0x1DFE80u;
    SET_GPR_U32(ctx, 31, 0x1DFE88u);
    ctx->pc = 0x1DFE84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFE80u;
    // 0x1dfe84: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9F70u, 0x1DFE80u, 0x1DFE88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFE88u;
label_1dfe88:
    // 0x1dfe88: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x1dfe88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1dfe8c:
    // 0x1dfe8c: 0x101c3c  dsll32      $v1, $s0, 16
    ctx->pc = 0x1dfe8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 16));
label_1dfe90:
    // 0x1dfe90: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1dfe90u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_1dfe94:
    // 0x1dfe94: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1dfe94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_1dfe98:
    // 0x1dfe98: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1dfe98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1dfe9c:
    // 0x1dfe9c: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x1dfe9cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1dfea0:
    // 0x1dfea0: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x1dfea0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1dfea4:
    // 0x1dfea4: 0x14400034  bnez        $v0, . + 4 + (0x34 << 2)
label_1dfea8:
    if (ctx->pc == 0x1DFEA8u) {
        ctx->pc = 0x1DFEACu;
        goto label_1dfeac;
    }
    ctx->pc = 0x1DFEA4u;
    {
        const bool branch_taken_0x1dfea4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dfea4) {
            ctx->pc = 0x1DFF78u;
            goto label_1dff78;
        }
    }
    ctx->pc = 0x1DFEACu;
label_1dfeac:
    // 0x1dfeac: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x1dfeacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1dfeb0:
    // 0x1dfeb0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1dfeb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1dfeb4:
    // 0x1dfeb4: 0x10000030  b           . + 4 + (0x30 << 2)
label_1dfeb8:
    if (ctx->pc == 0x1DFEB8u) {
        ctx->pc = 0x1DFEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFEB4u;
        // 0x1dfeb8: 0xe6200010  swc1        $f0, 0x10($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DFEBCu;
        goto label_1dfebc;
    }
    ctx->pc = 0x1DFEB4u;
    {
        const bool branch_taken_0x1dfeb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DFEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFEB4u;
        // 0x1dfeb8: 0xe6200010  swc1        $f0, 0x10($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfeb4) {
            ctx->pc = 0x1DFF78u;
            goto label_1dff78;
        }
    }
    ctx->pc = 0x1DFEBCu;
label_1dfebc:
    // 0x1dfebc: 0x0  nop
    ctx->pc = 0x1dfebcu;
    // NOP
label_1dfec0:
    // 0x1dfec0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1dfec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1dfec4:
    // 0x1dfec4: 0x8e250018  lw          $a1, 0x18($s1)
    ctx->pc = 0x1dfec4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_1dfec8:
    // 0x1dfec8: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x1dfec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1dfecc:
    // 0x1dfecc: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x1dfeccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1dfed0:
    // 0x1dfed0: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x1dfed0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1dfed4:
    // 0x1dfed4: 0x10200028  beqz        $at, . + 4 + (0x28 << 2)
label_1dfed8:
    if (ctx->pc == 0x1DFED8u) {
        ctx->pc = 0x1DFED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFED4u;
        // 0x1dfed8: 0x51100  sll         $v0, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DFEDCu;
        goto label_1dfedc;
    }
    ctx->pc = 0x1DFED4u;
    {
        const bool branch_taken_0x1dfed4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DFED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFED4u;
        // 0x1dfed8: 0x51100  sll         $v0, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfed4) {
            ctx->pc = 0x1DFF78u;
            goto label_1dff78;
        }
    }
    ctx->pc = 0x1DFEDCu;
label_1dfedc:
    // 0x1dfedc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1dfedcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1dfee0:
    // 0x1dfee0: 0x84460010  lh          $a2, 0x10($v0)
    ctx->pc = 0x1dfee0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
label_1dfee4:
    // 0x1dfee4: 0x84450000  lh          $a1, 0x0($v0)
    ctx->pc = 0x1dfee4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1dfee8:
    // 0x1dfee8: 0x14a60005  bne         $a1, $a2, . + 4 + (0x5 << 2)
label_1dfeec:
    if (ctx->pc == 0x1DFEECu) {
        ctx->pc = 0x1DFEF0u;
        goto label_1dfef0;
    }
    ctx->pc = 0x1DFEE8u;
    {
        const bool branch_taken_0x1dfee8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 6));
        if (branch_taken_0x1dfee8) {
            ctx->pc = 0x1DFF00u;
            goto label_1dff00;
        }
    }
    ctx->pc = 0x1DFEF0u;
label_1dfef0:
    // 0x1dfef0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1dfef0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1dfef4:
    // 0x1dfef4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1dfef4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1dfef8:
    // 0x1dfef8: 0x10000005  b           . + 4 + (0x5 << 2)
label_1dfefc:
    if (ctx->pc == 0x1DFEFCu) {
        ctx->pc = 0x1DFEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFEF8u;
        // 0x1dfefc: 0x8e220018  lw          $v0, 0x18($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DFF00u;
        goto label_1dff00;
    }
    ctx->pc = 0x1DFEF8u;
    {
        const bool branch_taken_0x1dfef8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DFEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFEF8u;
        // 0x1dfefc: 0x8e220018  lw          $v0, 0x18($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfef8) {
            ctx->pc = 0x1DFF10u;
            goto label_1dff10;
        }
    }
    ctx->pc = 0x1DFF00u;
label_1dff00:
    // 0x1dff00: 0x10243c  dsll32      $a0, $s0, 16
    ctx->pc = 0x1dff00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 16));
label_1dff04:
    // 0x1dff04: 0xc0767d4  jal         func_1D9F50
label_1dff08:
    if (ctx->pc == 0x1DFF08u) {
        ctx->pc = 0x1DFF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFF04u;
        // 0x1dff08: 0x4243f  dsra32      $a0, $a0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DFF0Cu;
        goto label_1dff0c;
    }
    ctx->pc = 0x1DFF04u;
    SET_GPR_U32(ctx, 31, 0x1DFF0Cu);
    ctx->pc = 0x1DFF08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFF04u;
    // 0x1dff08: 0x4243f  dsra32      $a0, $a0, 16 (Delay Slot)
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9F50u, 0x1DFF04u, 0x1DFF0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFF0Cu;
label_1dff0c:
    // 0x1dff0c: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x1dff0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_1dff10:
    // 0x1dff10: 0xc62d0010  lwc1        $f13, 0x10($s1)
    ctx->pc = 0x1dff10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1dff14:
    // 0x1dff14: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x1dff14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1dff18:
    // 0x1dff18: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1dff18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1dff1c:
    // 0x1dff1c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1dff1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1dff20:
    // 0x1dff20: 0xc44e0014  lwc1        $f14, 0x14($v0)
    ctx->pc = 0x1dff20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_1dff24:
    // 0x1dff24: 0xc0767dc  jal         func_1D9F70
label_1dff28:
    if (ctx->pc == 0x1DFF28u) {
        ctx->pc = 0x1DFF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFF24u;
        // 0x1dff28: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DFF2Cu;
        goto label_1dff2c;
    }
    ctx->pc = 0x1DFF24u;
    SET_GPR_U32(ctx, 31, 0x1DFF2Cu);
    ctx->pc = 0x1DFF28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFF24u;
    // 0x1dff28: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9F70u, 0x1DFF24u, 0x1DFF2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFF2Cu;
label_1dff2c:
    // 0x1dff2c: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x1dff2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1dff30:
    // 0x1dff30: 0x10243c  dsll32      $a0, $s0, 16
    ctx->pc = 0x1dff30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 16));
label_1dff34:
    // 0x1dff34: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x1dff34u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_1dff38:
    // 0x1dff38: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1dff38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_1dff3c:
    // 0x1dff3c: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x1dff3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_1dff40:
    // 0x1dff40: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x1dff40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1dff44:
    // 0x1dff44: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1dff44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1dff48:
    // 0x1dff48: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1dff48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1dff4c:
    // 0x1dff4c: 0x84420010  lh          $v0, 0x10($v0)
    ctx->pc = 0x1dff4cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
label_1dff50:
    // 0x1dff50: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x1dff50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1dff54:
    // 0x1dff54: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_1dff58:
    if (ctx->pc == 0x1DFF58u) {
        ctx->pc = 0x1DFF5Cu;
        goto label_1dff5c;
    }
    ctx->pc = 0x1DFF54u;
    {
        const bool branch_taken_0x1dff54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dff54) {
            ctx->pc = 0x1DFF78u;
            goto label_1dff78;
        }
    }
    ctx->pc = 0x1DFF5Cu;
label_1dff5c:
    // 0x1dff5c: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x1dff5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1dff60:
    // 0x1dff60: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1dff60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1dff64:
    // 0x1dff64: 0xe6200010  swc1        $f0, 0x10($s1)
    ctx->pc = 0x1dff64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
label_1dff68:
    // 0x1dff68: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x1dff68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_1dff6c:
    // 0x1dff6c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1dff6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1dff70:
    // 0x1dff70: 0xae220018  sw          $v0, 0x18($s1)
    ctx->pc = 0x1dff70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
label_1dff74:
    // 0x1dff74: 0x0  nop
    ctx->pc = 0x1dff74u;
    // NOP
label_1dff78:
    // 0x1dff78: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1dff78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1dff7c:
    // 0x1dff7c: 0x0  nop
    ctx->pc = 0x1dff7cu;
    // NOP
label_1dff80:
    // 0x1dff80: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1dff80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1dff84:
    // 0x1dff84: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1dff84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1dff88:
    // 0x1dff88: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1dff88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1dff8c:
    // 0x1dff8c: 0x3e00008  jr          $ra
label_1dff90:
    if (ctx->pc == 0x1DFF90u) {
        ctx->pc = 0x1DFF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFF8Cu;
        // 0x1dff90: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DFF94u;
        goto label_fallthrough_0x1dff8c;
    }
    ctx->pc = 0x1DFF8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DFF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFF8Cu;
        // 0x1dff90: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DFF8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1dff8c:
    ctx->pc = 0x1DFF94u;
}
