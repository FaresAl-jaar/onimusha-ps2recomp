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

// Function: sub_00263AC0
// Address: 0x263ac0 - 0x263d20
void sub_00263AC0_0x263ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00263AC0_0x263ac0");
#endif

    switch (ctx->pc) {
        case 0x263ae0u: goto label_263ae0;
        case 0x263b98u: goto label_263b98;
        case 0x263bbcu: goto label_263bbc;
        case 0x263bd8u: goto label_263bd8;
        case 0x263bfcu: goto label_263bfc;
        case 0x263c98u: goto label_263c98;
        case 0x263ca0u: goto label_263ca0;
        case 0x263ca8u: goto label_263ca8;
        case 0x263cb0u: goto label_263cb0;
        case 0x263cd4u: goto label_263cd4;
        case 0x263ce0u: goto label_263ce0;
        case 0x263d10u: goto label_263d10;
        default: break;
    }

    ctx->pc = 0x263ac0u;

    // 0x263ac0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x263ac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x263ac4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x263ac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x263ac8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x263ac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x263acc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x263accu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263ad0: 0x920508e8  lbu         $a1, 0x8E8($s0)
    ctx->pc = 0x263ad0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2280)));
    // 0x263ad4: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x263ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
    // 0x263ad8: 0xc05d4c8  jal         func_175320
    ctx->pc = 0x263AD8u;
    SET_GPR_U32(ctx, 31, 0x263AE0u);
    ctx->pc = 0x263ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263AD8u;
    // 0x263adc: 0x24846690  addiu       $a0, $a0, 0x6690 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175320u, 0x263AD8u, 0x263AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263AE0u;
label_263ae0:
    // 0x263ae0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x263ae0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x263ae4: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x263ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x263ae8: 0x8c23cec0  lw          $v1, -0x3140($at)
    ctx->pc = 0x263ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEC0u));
    // 0x263aec: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x263aecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x263af0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x263AF0u;
    {
        const bool branch_taken_0x263af0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x263af0) {
            ctx->pc = 0x263B08u;
            goto label_263b08;
        }
    }
    ctx->pc = 0x263AF8u;
    // 0x263af8: 0x8e020148  lw          $v0, 0x148($s0)
    ctx->pc = 0x263af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x263afc: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x263afcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x263b00: 0xae020148  sw          $v0, 0x148($s0)
    ctx->pc = 0x263b00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 2));
    // 0x263b04: 0x0  nop
    ctx->pc = 0x263b04u;
    // NOP
label_263b08:
    // 0x263b08: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x263b08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x263b0c: 0x8c23cec0  lw          $v1, -0x3140($at)
    ctx->pc = 0x263b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEC0u));
    // 0x263b10: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x263b10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x263b14: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x263b14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x263b18: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x263B18u;
    {
        const bool branch_taken_0x263b18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x263b18) {
            ctx->pc = 0x263B38u;
            goto label_263b38;
        }
    }
    ctx->pc = 0x263B20u;
    // 0x263b20: 0x920208e8  lbu         $v0, 0x8E8($s0)
    ctx->pc = 0x263b20u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2280)));
    // 0x263b24: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x263B24u;
    {
        const bool branch_taken_0x263b24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x263b24) {
            ctx->pc = 0x263B38u;
            goto label_263b38;
        }
    }
    ctx->pc = 0x263B2Cu;
    // 0x263b2c: 0x8e020148  lw          $v0, 0x148($s0)
    ctx->pc = 0x263b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x263b30: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x263b30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x263b34: 0xae020148  sw          $v0, 0x148($s0)
    ctx->pc = 0x263b34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 2));
label_263b38:
    // 0x263b38: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x263b38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x263b3c: 0x8c23cec0  lw          $v1, -0x3140($at)
    ctx->pc = 0x263b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEC0u));
    // 0x263b40: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x263b40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x263b44: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x263b44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x263b48: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x263B48u;
    {
        const bool branch_taken_0x263b48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x263b48) {
            ctx->pc = 0x263B70u;
            goto label_263b70;
        }
    }
    ctx->pc = 0x263B50u;
    // 0x263b50: 0x920308e8  lbu         $v1, 0x8E8($s0)
    ctx->pc = 0x263b50u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2280)));
    // 0x263b54: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x263b54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x263b58: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x263B58u;
    {
        const bool branch_taken_0x263b58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x263b58) {
            ctx->pc = 0x263B70u;
            goto label_263b70;
        }
    }
    ctx->pc = 0x263B60u;
    // 0x263b60: 0x8e020148  lw          $v0, 0x148($s0)
    ctx->pc = 0x263b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x263b64: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x263b64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x263b68: 0xae020148  sw          $v0, 0x148($s0)
    ctx->pc = 0x263b68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 2));
    // 0x263b6c: 0x0  nop
    ctx->pc = 0x263b6cu;
    // NOP
label_263b70:
    // 0x263b70: 0x920307d6  lbu         $v1, 0x7D6($s0)
    ctx->pc = 0x263b70u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2006)));
    // 0x263b74: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x263b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x263b78: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x263B78u;
    {
        const bool branch_taken_0x263b78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x263b78) {
            ctx->pc = 0x263B90u;
            goto label_263b90;
        }
    }
    ctx->pc = 0x263B80u;
    // 0x263b80: 0x8e020148  lw          $v0, 0x148($s0)
    ctx->pc = 0x263b80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x263b84: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x263b84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x263b88: 0xae020148  sw          $v0, 0x148($s0)
    ctx->pc = 0x263b88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 2));
    // 0x263b8c: 0x0  nop
    ctx->pc = 0x263b8cu;
    // NOP
label_263b90:
    // 0x263b90: 0xc0a6d70  jal         func_29B5C0
    ctx->pc = 0x263B90u;
    SET_GPR_U32(ctx, 31, 0x263B98u);
    ctx->pc = 0x263B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263B90u;
    // 0x263b94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29B5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29B5C0u, 0x263B90u, 0x263B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263B98u;
label_263b98:
    // 0x263b98: 0x8e020148  lw          $v0, 0x148($s0)
    ctx->pc = 0x263b98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x263b9c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x263b9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x263ba0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x263ba0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x263ba4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x263ba4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x263ba8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x263ba8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x263bac: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x263BACu;
    {
        const bool branch_taken_0x263bac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x263BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263BACu;
        // 0x263bb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263bac) {
            ctx->pc = 0x263BC0u;
            goto label_263bc0;
        }
    }
    ctx->pc = 0x263BB4u;
    // 0x263bb4: 0xc098b0c  jal         func_262C30
    ctx->pc = 0x263BB4u;
    SET_GPR_U32(ctx, 31, 0x263BBCu);
    ctx->pc = 0x262C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262C30u, 0x263BB4u, 0x263BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263BBCu;
label_263bbc:
    // 0x263bbc: 0x0  nop
    ctx->pc = 0x263bbcu;
    // NOP
label_263bc0:
    // 0x263bc0: 0x9203065c  lbu         $v1, 0x65C($s0)
    ctx->pc = 0x263bc0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1628)));
    // 0x263bc4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x263bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x263bc8: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x263BC8u;
    {
        const bool branch_taken_0x263bc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x263BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263BC8u;
        // 0x263bcc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263bc8) {
            ctx->pc = 0x263BD8u;
            goto label_263bd8;
        }
    }
    ctx->pc = 0x263BD0u;
    // 0x263bd0: 0xc0ad90c  jal         func_2B6430
    ctx->pc = 0x263BD0u;
    SET_GPR_U32(ctx, 31, 0x263BD8u);
    ctx->pc = 0x2B6430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6430u, 0x263BD0u, 0x263BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263BD8u;
label_263bd8:
    // 0x263bd8: 0x8e020148  lw          $v0, 0x148($s0)
    ctx->pc = 0x263bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x263bdc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x263bdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x263be0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x263be0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x263be4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x263be4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x263be8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x263be8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x263bec: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x263BECu;
    {
        const bool branch_taken_0x263bec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x263BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263BECu;
        // 0x263bf0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263bec) {
            ctx->pc = 0x263C08u;
            goto label_263c08;
        }
    }
    ctx->pc = 0x263BF4u;
    // 0x263bf4: 0xc0a6674  jal         func_2999D0
    ctx->pc = 0x263BF4u;
    SET_GPR_U32(ctx, 31, 0x263BFCu);
    ctx->pc = 0x2999D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2999D0u, 0x263BF4u, 0x263BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263BFCu;
label_263bfc:
    // 0x263bfc: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x263BFCu;
    {
        const bool branch_taken_0x263bfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x263bfc) {
            ctx->pc = 0x263CA0u;
            goto label_263ca0;
        }
    }
    ctx->pc = 0x263C04u;
    // 0x263c04: 0x0  nop
    ctx->pc = 0x263c04u;
    // NOP
label_263c08:
    // 0x263c08: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x263c08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x263c0c: 0x8c28cec4  lw          $t0, -0x313C($at)
    ctx->pc = 0x263c0cu;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x81CEC4u));
    // 0x263c10: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x263c10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x263c14: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x263c14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x263c18: 0x8c27cec8  lw          $a3, -0x3138($at)
    ctx->pc = 0x263c18u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x81CEC8u));
    // 0x263c1c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x263c1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x263c20: 0x1074025  or          $t0, $t0, $a3
    ctx->pc = 0x263c20u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 7));
    // 0x263c24: 0x8c26cecc  lw          $a2, -0x3134($at)
    ctx->pc = 0x263c24u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x81CECCu));
    // 0x263c28: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x263c28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x263c2c: 0x1064025  or          $t0, $t0, $a2
    ctx->pc = 0x263c2cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 6));
    // 0x263c30: 0x8c25ced4  lw          $a1, -0x312C($at)
    ctx->pc = 0x263c30u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x81CED4u));
    // 0x263c34: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x263c34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x263c38: 0x1054025  or          $t0, $t0, $a1
    ctx->pc = 0x263c38u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 5));
    // 0x263c3c: 0x8c24ced8  lw          $a0, -0x3128($at)
    ctx->pc = 0x263c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x81CED8u));
    // 0x263c40: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x263c40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x263c44: 0x1044025  or          $t0, $t0, $a0
    ctx->pc = 0x263c44u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 4));
    // 0x263c48: 0x8c23cedc  lw          $v1, -0x3124($at)
    ctx->pc = 0x263c48u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEDCu));
    // 0x263c4c: 0x1034025  or          $t0, $t0, $v1
    ctx->pc = 0x263c4cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x263c50: 0x1021024  and         $v0, $t0, $v0
    ctx->pc = 0x263c50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x263c54: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x263C54u;
    {
        const bool branch_taken_0x263c54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x263c54) {
            ctx->pc = 0x263C98u;
            goto label_263c98;
        }
    }
    ctx->pc = 0x263C5Cu;
    // 0x263c5c: 0x878480f4  lh          $a0, -0x7F0C($gp)
    ctx->pc = 0x263c5cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294934772)));
    // 0x263c60: 0x27a5002c  addiu       $a1, $sp, 0x2C
    ctx->pc = 0x263c60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x263c64: 0x938380f6  lbu         $v1, -0x7F0A($gp)
    ctx->pc = 0x263c64u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294934774)));
    // 0x263c68: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x263c68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x263c6c: 0xa4a40000  sh          $a0, 0x0($a1)
    ctx->pc = 0x263c6cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x263c70: 0xa0a30002  sb          $v1, 0x2($a1)
    ctx->pc = 0x263c70u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x263c74: 0x920308e8  lbu         $v1, 0x8E8($s0)
    ctx->pc = 0x263c74u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2280)));
    // 0x263c78: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x263c78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x263c7c: 0x9063002c  lbu         $v1, 0x2C($v1)
    ctx->pc = 0x263c7cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x263c80: 0x621006  srlv        $v0, $v0, $v1
    ctx->pc = 0x263c80u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x263c84: 0x1021024  and         $v0, $t0, $v0
    ctx->pc = 0x263c84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x263c88: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x263C88u;
    {
        const bool branch_taken_0x263c88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x263C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263C88u;
        // 0x263c8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263c88) {
            ctx->pc = 0x263C98u;
            goto label_263c98;
        }
    }
    ctx->pc = 0x263C90u;
    // 0x263c90: 0xc0a6834  jal         func_29A0D0
    ctx->pc = 0x263C90u;
    SET_GPR_U32(ctx, 31, 0x263C98u);
    ctx->pc = 0x29A0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A0D0u, 0x263C90u, 0x263C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263C98u;
label_263c98:
    // 0x263c98: 0xc0a6300  jal         func_298C00
    ctx->pc = 0x263C98u;
    SET_GPR_U32(ctx, 31, 0x263CA0u);
    ctx->pc = 0x263C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263C98u;
    // 0x263c9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x298C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x298C00u, 0x263C98u, 0x263CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263CA0u;
label_263ca0:
    // 0x263ca0: 0xc0a6b20  jal         func_29AC80
    ctx->pc = 0x263CA0u;
    SET_GPR_U32(ctx, 31, 0x263CA8u);
    ctx->pc = 0x263CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263CA0u;
    // 0x263ca4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29AC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29AC80u, 0x263CA0u, 0x263CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263CA8u;
label_263ca8:
    // 0x263ca8: 0xc0a6da0  jal         func_29B680
    ctx->pc = 0x263CA8u;
    SET_GPR_U32(ctx, 31, 0x263CB0u);
    ctx->pc = 0x263CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263CA8u;
    // 0x263cac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29B680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29B680u, 0x263CA8u, 0x263CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263CB0u;
label_263cb0:
    // 0x263cb0: 0x8e020148  lw          $v0, 0x148($s0)
    ctx->pc = 0x263cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x263cb4: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x263cb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x263cb8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x263cb8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x263cbc: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x263cbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x263cc0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x263cc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x263cc4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x263CC4u;
    {
        const bool branch_taken_0x263cc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x263CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263CC4u;
        // 0x263cc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263cc4) {
            ctx->pc = 0x263CD8u;
            goto label_263cd8;
        }
    }
    ctx->pc = 0x263CCCu;
    // 0x263ccc: 0xc0a6e60  jal         func_29B980
    ctx->pc = 0x263CCCu;
    SET_GPR_U32(ctx, 31, 0x263CD4u);
    ctx->pc = 0x29B980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29B980u, 0x263CCCu, 0x263CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263CD4u;
label_263cd4:
    // 0x263cd4: 0x0  nop
    ctx->pc = 0x263cd4u;
    // NOP
label_263cd8:
    // 0x263cd8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x263cd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x263cdc: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x263cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_263ce0:
    // 0x263ce0: 0x8c830858  lw          $v1, 0x858($a0)
    ctx->pc = 0x263ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2136)));
    // 0x263ce4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x263CE4u;
    {
        const bool branch_taken_0x263ce4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x263ce4) {
            ctx->pc = 0x263CF8u;
            goto label_263cf8;
        }
    }
    ctx->pc = 0x263CECu;
    // 0x263cec: 0x92020160  lbu         $v0, 0x160($s0)
    ctx->pc = 0x263cecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 352)));
    // 0x263cf0: 0xa0620160  sb          $v0, 0x160($v1)
    ctx->pc = 0x263cf0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 352), (uint8_t)GPR_U32(ctx, 2));
    // 0x263cf4: 0x0  nop
    ctx->pc = 0x263cf4u;
    // NOP
label_263cf8:
    // 0x263cf8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x263cf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x263cfc: 0x28a20004  slti        $v0, $a1, 0x4
    ctx->pc = 0x263cfcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x263d00: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x263D00u;
    {
        const bool branch_taken_0x263d00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x263D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263D00u;
        // 0x263d04: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263d00) {
            ctx->pc = 0x263CE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_263ce0;
        }
    }
    ctx->pc = 0x263D08u;
    // 0x263d08: 0xc0a62f0  jal         func_298BC0
    ctx->pc = 0x263D08u;
    SET_GPR_U32(ctx, 31, 0x263D10u);
    ctx->pc = 0x263D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263D08u;
    // 0x263d0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x298BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x298BC0u, 0x263D08u, 0x263D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263D10u;
label_263d10:
    // 0x263d10: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x263d10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x263d14: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x263d14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x263d18: 0x3e00008  jr          $ra
    ctx->pc = 0x263D18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x263D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263D18u;
        // 0x263d1c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x263D18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x263D20u;
}
