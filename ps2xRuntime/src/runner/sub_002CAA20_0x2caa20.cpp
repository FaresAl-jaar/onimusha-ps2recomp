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

// Function: sub_002CAA20
// Address: 0x2caa20 - 0x2cacd4
void sub_002CAA20_0x2caa20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CAA20_0x2caa20");
#endif

    switch (ctx->pc) {
        case 0x2caa8cu: goto label_2caa8c;
        case 0x2caaecu: goto label_2caaec;
        case 0x2cab44u: goto label_2cab44;
        case 0x2cab5cu: goto label_2cab5c;
        case 0x2cabbcu: goto label_2cabbc;
        case 0x2cac14u: goto label_2cac14;
        case 0x2cac74u: goto label_2cac74;
        default: break;
    }

    ctx->pc = 0x2caa20u;

    // 0x2caa20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2caa20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2caa24: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2caa24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2caa28: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2caa28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2caa2c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2caa2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2caa30: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2caa30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2caa34: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2caa34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2caa38: 0x106000a1  beqz        $v1, . + 4 + (0xA1 << 2)
    ctx->pc = 0x2CAA38u;
    {
        const bool branch_taken_0x2caa38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CAA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAA38u;
        // 0x2caa3c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2caa38) {
            ctx->pc = 0x2CACC0u;
            goto label_2cacc0;
        }
    }
    ctx->pc = 0x2CAA40u;
    // 0x2caa40: 0x92080640  lbu         $t0, 0x640($s0)
    ctx->pc = 0x2caa40u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1600)));
    // 0x2caa44: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2caa44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2caa48: 0x1503009d  bne         $t0, $v1, . + 4 + (0x9D << 2)
    ctx->pc = 0x2CAA48u;
    {
        const bool branch_taken_0x2caa48 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 3));
        if (branch_taken_0x2caa48) {
            ctx->pc = 0x2CACC0u;
            goto label_2cacc0;
        }
    }
    ctx->pc = 0x2CAA50u;
    // 0x2caa50: 0xaf8689e0  sw          $a2, -0x7620($gp)
    ctx->pc = 0x2caa50u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937056), GPR_U32(ctx, 6));
    // 0x2caa54: 0x30e600ff  andi        $a2, $a3, 0xFF
    ctx->pc = 0x2caa54u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x2caa58: 0x10c3006b  beq         $a2, $v1, . + 4 + (0x6B << 2)
    ctx->pc = 0x2CAA58u;
    {
        const bool branch_taken_0x2caa58 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x2caa58) {
            ctx->pc = 0x2CAC08u;
            goto label_2cac08;
        }
    }
    ctx->pc = 0x2CAA60u;
    // 0x2caa60: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2caa60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2caa64: 0x10c3003a  beq         $a2, $v1, . + 4 + (0x3A << 2)
    ctx->pc = 0x2CAA64u;
    {
        const bool branch_taken_0x2caa64 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x2caa64) {
            ctx->pc = 0x2CAB50u;
            goto label_2cab50;
        }
    }
    ctx->pc = 0x2CAA6Cu;
    // 0x2caa6c: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CAA6Cu;
    {
        const bool branch_taken_0x2caa6c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2caa6c) {
            ctx->pc = 0x2CAA80u;
            goto label_2caa80;
        }
    }
    ctx->pc = 0x2CAA74u;
    // 0x2caa74: 0x10000092  b           . + 4 + (0x92 << 2)
    ctx->pc = 0x2CAA74u;
    {
        const bool branch_taken_0x2caa74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2caa74) {
            ctx->pc = 0x2CACC0u;
            goto label_2cacc0;
        }
    }
    ctx->pc = 0x2CAA7Cu;
    // 0x2caa7c: 0x0  nop
    ctx->pc = 0x2caa7cu;
    // NOP
label_2caa80:
    // 0x2caa80: 0xa620005a  sh          $zero, 0x5A($s1)
    ctx->pc = 0x2caa80u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 90), (uint16_t)GPR_U32(ctx, 0));
    // 0x2caa84: 0xc0b21d8  jal         func_2C8760
    ctx->pc = 0x2CAA84u;
    SET_GPR_U32(ctx, 31, 0x2CAA8Cu);
    ctx->pc = 0x2CAA88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CAA84u;
    // 0x2caa88: 0x92260050  lbu         $a2, 0x50($s1) (Delay Slot)
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 80)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8760u, 0x2CAA84u, 0x2CAA8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CAA8Cu;
label_2caa8c:
    // 0x2caa8c: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x2CAA8Cu;
    {
        const bool branch_taken_0x2caa8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2caa8c) {
            ctx->pc = 0x2CAB38u;
            goto label_2cab38;
        }
    }
    ctx->pc = 0x2CAA94u;
    // 0x2caa94: 0x938389d0  lbu         $v1, -0x7630($gp)
    ctx->pc = 0x2caa94u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937040)));
    // 0x2caa98: 0x14600017  bnez        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x2CAA98u;
    {
        const bool branch_taken_0x2caa98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CAA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAA98u;
        // 0x2caa9c: 0x938689d8  lbu         $a2, -0x7628($gp) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937048)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2caa98) {
            ctx->pc = 0x2CAAF8u;
            goto label_2caaf8;
        }
    }
    ctx->pc = 0x2CAAA0u;
    // 0x2caaa0: 0x10c0000f  beqz        $a2, . + 4 + (0xF << 2)
    ctx->pc = 0x2CAAA0u;
    {
        const bool branch_taken_0x2caaa0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CAAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAAA0u;
        // 0x2caaa4: 0xa220004f  sb          $zero, 0x4F($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 79), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2caaa0) {
            ctx->pc = 0x2CAAE0u;
            goto label_2caae0;
        }
    }
    ctx->pc = 0x2CAAA8u;
    // 0x2caaa8: 0x92250037  lbu         $a1, 0x37($s1)
    ctx->pc = 0x2caaa8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 55)));
    // 0x2caaac: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x2caaacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x2caab0: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x2caab0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2caab4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2caab4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2caab8: 0xa225004e  sb          $a1, 0x4E($s1)
    ctx->pc = 0x2caab8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 78), (uint8_t)GPR_U32(ctx, 5));
    // 0x2caabc: 0xa2260037  sb          $a2, 0x37($s1)
    ctx->pc = 0x2caabcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 55), (uint8_t)GPR_U32(ctx, 6));
    // 0x2caac0: 0xa2200032  sb          $zero, 0x32($s1)
    ctx->pc = 0x2caac0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 50), (uint8_t)GPR_U32(ctx, 0));
    // 0x2caac4: 0xa224005f  sb          $a0, 0x5F($s1)
    ctx->pc = 0x2caac4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 95), (uint8_t)GPR_U32(ctx, 4));
    // 0x2caac8: 0xa6200080  sh          $zero, 0x80($s1)
    ctx->pc = 0x2caac8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 128), (uint16_t)GPR_U32(ctx, 0));
    // 0x2caacc: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2caaccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2caad0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2caad0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2caad4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2CAAD4u;
    {
        const bool branch_taken_0x2caad4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CAAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAAD4u;
        // 0x2caad8: 0x8c630018  lw          $v1, 0x18($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2caad4) {
            ctx->pc = 0x2CAB08u;
            goto label_2cab08;
        }
    }
    ctx->pc = 0x2CAADCu;
    // 0x2caadc: 0x0  nop
    ctx->pc = 0x2caadcu;
    // NOP
label_2caae0:
    // 0x2caae0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2caae0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2caae4: 0xc0b20e4  jal         func_2C8390
    ctx->pc = 0x2CAAE4u;
    SET_GPR_U32(ctx, 31, 0x2CAAECu);
    ctx->pc = 0x2CAAE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CAAE4u;
    // 0x2caae8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8390u, 0x2CAAE4u, 0x2CAAECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CAAECu;
label_2caaec:
    // 0x2caaec: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2CAAECu;
    {
        const bool branch_taken_0x2caaec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2caaec) {
            ctx->pc = 0x2CAB00u;
            goto label_2cab00;
        }
    }
    ctx->pc = 0x2CAAF4u;
    // 0x2caaf4: 0x0  nop
    ctx->pc = 0x2caaf4u;
    // NOP
label_2caaf8:
    // 0x2caaf8: 0xa38689d8  sb          $a2, -0x7628($gp)
    ctx->pc = 0x2caaf8u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937048), (uint8_t)GPR_U32(ctx, 6));
    // 0x2caafc: 0x0  nop
    ctx->pc = 0x2caafcu;
    // NOP
label_2cab00:
    // 0x2cab00: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2cab00u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cab04: 0x0  nop
    ctx->pc = 0x2cab04u;
    // NOP
label_2cab08:
    // 0x2cab08: 0xae23002c  sw          $v1, 0x2C($s1)
    ctx->pc = 0x2cab08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 3));
    // 0x2cab0c: 0x3c03004e  lui         $v1, 0x4E
    ctx->pc = 0x2cab0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)78 << 16));
    // 0x2cab10: 0xa38089d8  sb          $zero, -0x7628($gp)
    ctx->pc = 0x2cab10u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937048), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cab14: 0x246359a0  addiu       $v1, $v1, 0x59A0
    ctx->pc = 0x2cab14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22944));
    // 0x2cab18: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x2cab18u;
    { uint32_t bits = FAST_READ32(0x4E59A0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2cab1c: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x2cab1cu;
    { uint32_t bits = FAST_READ32(0x4E59A4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cab20: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2cab20u;
    { uint32_t bits = FAST_READ32(0x4E59A8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cab24: 0xe6220008  swc1        $f2, 0x8($s1)
    ctx->pc = 0x2cab24u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x2cab28: 0xe621000c  swc1        $f1, 0xC($s1)
    ctx->pc = 0x2cab28u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x2cab2c: 0xe6200010  swc1        $f0, 0x10($s1)
    ctx->pc = 0x2cab2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
    // 0x2cab30: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x2CAB30u;
    {
        const bool branch_taken_0x2cab30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CAB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAB30u;
        // 0x2cab34: 0xa620003c  sh          $zero, 0x3C($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 60), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cab30) {
            ctx->pc = 0x2CACC0u;
            goto label_2cacc0;
        }
    }
    ctx->pc = 0x2CAB38u;
label_2cab38:
    // 0x2cab38: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2cab38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cab3c: 0xc0b20e4  jal         func_2C8390
    ctx->pc = 0x2CAB3Cu;
    SET_GPR_U32(ctx, 31, 0x2CAB44u);
    ctx->pc = 0x2CAB40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CAB3Cu;
    // 0x2cab40: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8390u, 0x2CAB3Cu, 0x2CAB44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CAB44u;
label_2cab44:
    // 0x2cab44: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x2CAB44u;
    {
        const bool branch_taken_0x2cab44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cab44) {
            ctx->pc = 0x2CACC0u;
            goto label_2cacc0;
        }
    }
    ctx->pc = 0x2CAB4Cu;
    // 0x2cab4c: 0x0  nop
    ctx->pc = 0x2cab4cu;
    // NOP
label_2cab50:
    // 0x2cab50: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2cab50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2cab54: 0xc0b21d8  jal         func_2C8760
    ctx->pc = 0x2CAB54u;
    SET_GPR_U32(ctx, 31, 0x2CAB5Cu);
    ctx->pc = 0x2CAB58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CAB54u;
    // 0x2cab58: 0x90460066  lbu         $a2, 0x66($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 102)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8760u, 0x2CAB54u, 0x2CAB5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CAB5Cu;
label_2cab5c:
    // 0x2cab5c: 0x10400058  beqz        $v0, . + 4 + (0x58 << 2)
    ctx->pc = 0x2CAB5Cu;
    {
        const bool branch_taken_0x2cab5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cab5c) {
            ctx->pc = 0x2CACC0u;
            goto label_2cacc0;
        }
    }
    ctx->pc = 0x2CAB64u;
    // 0x2cab64: 0x938389d0  lbu         $v1, -0x7630($gp)
    ctx->pc = 0x2cab64u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937040)));
    // 0x2cab68: 0x14600017  bnez        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x2CAB68u;
    {
        const bool branch_taken_0x2cab68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CAB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAB68u;
        // 0x2cab6c: 0x938689d8  lbu         $a2, -0x7628($gp) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937048)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cab68) {
            ctx->pc = 0x2CABC8u;
            goto label_2cabc8;
        }
    }
    ctx->pc = 0x2CAB70u;
    // 0x2cab70: 0x10c0000f  beqz        $a2, . + 4 + (0xF << 2)
    ctx->pc = 0x2CAB70u;
    {
        const bool branch_taken_0x2cab70 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CAB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAB70u;
        // 0x2cab74: 0xa220004f  sb          $zero, 0x4F($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 79), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cab70) {
            ctx->pc = 0x2CABB0u;
            goto label_2cabb0;
        }
    }
    ctx->pc = 0x2CAB78u;
    // 0x2cab78: 0x92250037  lbu         $a1, 0x37($s1)
    ctx->pc = 0x2cab78u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 55)));
    // 0x2cab7c: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x2cab7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x2cab80: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x2cab80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2cab84: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2cab84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2cab88: 0xa225004e  sb          $a1, 0x4E($s1)
    ctx->pc = 0x2cab88u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 78), (uint8_t)GPR_U32(ctx, 5));
    // 0x2cab8c: 0xa2260037  sb          $a2, 0x37($s1)
    ctx->pc = 0x2cab8cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 55), (uint8_t)GPR_U32(ctx, 6));
    // 0x2cab90: 0xa2200032  sb          $zero, 0x32($s1)
    ctx->pc = 0x2cab90u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 50), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cab94: 0xa224005f  sb          $a0, 0x5F($s1)
    ctx->pc = 0x2cab94u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 95), (uint8_t)GPR_U32(ctx, 4));
    // 0x2cab98: 0xa6200080  sh          $zero, 0x80($s1)
    ctx->pc = 0x2cab98u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 128), (uint16_t)GPR_U32(ctx, 0));
    // 0x2cab9c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2cab9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2caba0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2caba0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2caba4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2CABA4u;
    {
        const bool branch_taken_0x2caba4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CABA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CABA4u;
        // 0x2caba8: 0x8c630018  lw          $v1, 0x18($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2caba4) {
            ctx->pc = 0x2CABD8u;
            goto label_2cabd8;
        }
    }
    ctx->pc = 0x2CABACu;
    // 0x2cabac: 0x0  nop
    ctx->pc = 0x2cabacu;
    // NOP
label_2cabb0:
    // 0x2cabb0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2cabb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cabb4: 0xc0b20e4  jal         func_2C8390
    ctx->pc = 0x2CABB4u;
    SET_GPR_U32(ctx, 31, 0x2CABBCu);
    ctx->pc = 0x2CABB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CABB4u;
    // 0x2cabb8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8390u, 0x2CABB4u, 0x2CABBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CABBCu;
label_2cabbc:
    // 0x2cabbc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2CABBCu;
    {
        const bool branch_taken_0x2cabbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cabbc) {
            ctx->pc = 0x2CABD0u;
            goto label_2cabd0;
        }
    }
    ctx->pc = 0x2CABC4u;
    // 0x2cabc4: 0x0  nop
    ctx->pc = 0x2cabc4u;
    // NOP
label_2cabc8:
    // 0x2cabc8: 0xa38689d8  sb          $a2, -0x7628($gp)
    ctx->pc = 0x2cabc8u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937048), (uint8_t)GPR_U32(ctx, 6));
    // 0x2cabcc: 0x0  nop
    ctx->pc = 0x2cabccu;
    // NOP
label_2cabd0:
    // 0x2cabd0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2cabd0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cabd4: 0x0  nop
    ctx->pc = 0x2cabd4u;
    // NOP
label_2cabd8:
    // 0x2cabd8: 0xae23002c  sw          $v1, 0x2C($s1)
    ctx->pc = 0x2cabd8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 3));
    // 0x2cabdc: 0x3c03004e  lui         $v1, 0x4E
    ctx->pc = 0x2cabdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)78 << 16));
    // 0x2cabe0: 0xa38089d8  sb          $zero, -0x7628($gp)
    ctx->pc = 0x2cabe0u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937048), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cabe4: 0x246359b0  addiu       $v1, $v1, 0x59B0
    ctx->pc = 0x2cabe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22960));
    // 0x2cabe8: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x2cabe8u;
    { uint32_t bits = FAST_READ32(0x4E59B0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2cabec: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x2cabecu;
    { uint32_t bits = FAST_READ32(0x4E59B4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cabf0: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2cabf0u;
    { uint32_t bits = FAST_READ32(0x4E59B8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cabf4: 0xe6220008  swc1        $f2, 0x8($s1)
    ctx->pc = 0x2cabf4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x2cabf8: 0xe621000c  swc1        $f1, 0xC($s1)
    ctx->pc = 0x2cabf8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x2cabfc: 0xe6200010  swc1        $f0, 0x10($s1)
    ctx->pc = 0x2cabfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
    // 0x2cac00: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x2CAC00u;
    {
        const bool branch_taken_0x2cac00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CAC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAC00u;
        // 0x2cac04: 0xa620003c  sh          $zero, 0x3C($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 60), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cac00) {
            ctx->pc = 0x2CACC0u;
            goto label_2cacc0;
        }
    }
    ctx->pc = 0x2CAC08u;
label_2cac08:
    // 0x2cac08: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2cac08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2cac0c: 0xc0b21d8  jal         func_2C8760
    ctx->pc = 0x2CAC0Cu;
    SET_GPR_U32(ctx, 31, 0x2CAC14u);
    ctx->pc = 0x2CAC10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CAC0Cu;
    // 0x2cac10: 0x90460062  lbu         $a2, 0x62($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 98)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8760u, 0x2CAC0Cu, 0x2CAC14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CAC14u;
label_2cac14:
    // 0x2cac14: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x2CAC14u;
    {
        const bool branch_taken_0x2cac14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cac14) {
            ctx->pc = 0x2CACC0u;
            goto label_2cacc0;
        }
    }
    ctx->pc = 0x2CAC1Cu;
    // 0x2cac1c: 0x938389d0  lbu         $v1, -0x7630($gp)
    ctx->pc = 0x2cac1cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937040)));
    // 0x2cac20: 0x14600017  bnez        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x2CAC20u;
    {
        const bool branch_taken_0x2cac20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CAC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAC20u;
        // 0x2cac24: 0x938689d8  lbu         $a2, -0x7628($gp) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937048)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cac20) {
            ctx->pc = 0x2CAC80u;
            goto label_2cac80;
        }
    }
    ctx->pc = 0x2CAC28u;
    // 0x2cac28: 0x10c0000f  beqz        $a2, . + 4 + (0xF << 2)
    ctx->pc = 0x2CAC28u;
    {
        const bool branch_taken_0x2cac28 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CAC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAC28u;
        // 0x2cac2c: 0xa220004f  sb          $zero, 0x4F($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 79), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cac28) {
            ctx->pc = 0x2CAC68u;
            goto label_2cac68;
        }
    }
    ctx->pc = 0x2CAC30u;
    // 0x2cac30: 0x92250037  lbu         $a1, 0x37($s1)
    ctx->pc = 0x2cac30u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 55)));
    // 0x2cac34: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x2cac34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x2cac38: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x2cac38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2cac3c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2cac3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2cac40: 0xa225004e  sb          $a1, 0x4E($s1)
    ctx->pc = 0x2cac40u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 78), (uint8_t)GPR_U32(ctx, 5));
    // 0x2cac44: 0xa2260037  sb          $a2, 0x37($s1)
    ctx->pc = 0x2cac44u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 55), (uint8_t)GPR_U32(ctx, 6));
    // 0x2cac48: 0xa2200032  sb          $zero, 0x32($s1)
    ctx->pc = 0x2cac48u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 50), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cac4c: 0xa224005f  sb          $a0, 0x5F($s1)
    ctx->pc = 0x2cac4cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 95), (uint8_t)GPR_U32(ctx, 4));
    // 0x2cac50: 0xa6200080  sh          $zero, 0x80($s1)
    ctx->pc = 0x2cac50u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 128), (uint16_t)GPR_U32(ctx, 0));
    // 0x2cac54: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2cac54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2cac58: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2cac58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2cac5c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2CAC5Cu;
    {
        const bool branch_taken_0x2cac5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CAC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAC5Cu;
        // 0x2cac60: 0x8c630018  lw          $v1, 0x18($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cac5c) {
            ctx->pc = 0x2CAC90u;
            goto label_2cac90;
        }
    }
    ctx->pc = 0x2CAC64u;
    // 0x2cac64: 0x0  nop
    ctx->pc = 0x2cac64u;
    // NOP
label_2cac68:
    // 0x2cac68: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2cac68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cac6c: 0xc0b20e4  jal         func_2C8390
    ctx->pc = 0x2CAC6Cu;
    SET_GPR_U32(ctx, 31, 0x2CAC74u);
    ctx->pc = 0x2CAC70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CAC6Cu;
    // 0x2cac70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8390u, 0x2CAC6Cu, 0x2CAC74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CAC74u;
label_2cac74:
    // 0x2cac74: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2CAC74u;
    {
        const bool branch_taken_0x2cac74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cac74) {
            ctx->pc = 0x2CAC88u;
            goto label_2cac88;
        }
    }
    ctx->pc = 0x2CAC7Cu;
    // 0x2cac7c: 0x0  nop
    ctx->pc = 0x2cac7cu;
    // NOP
label_2cac80:
    // 0x2cac80: 0xa38689d8  sb          $a2, -0x7628($gp)
    ctx->pc = 0x2cac80u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937048), (uint8_t)GPR_U32(ctx, 6));
    // 0x2cac84: 0x0  nop
    ctx->pc = 0x2cac84u;
    // NOP
label_2cac88:
    // 0x2cac88: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2cac88u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cac8c: 0x0  nop
    ctx->pc = 0x2cac8cu;
    // NOP
label_2cac90:
    // 0x2cac90: 0xae23002c  sw          $v1, 0x2C($s1)
    ctx->pc = 0x2cac90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 3));
    // 0x2cac94: 0x3c03004e  lui         $v1, 0x4E
    ctx->pc = 0x2cac94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)78 << 16));
    // 0x2cac98: 0xa38089d8  sb          $zero, -0x7628($gp)
    ctx->pc = 0x2cac98u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937048), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cac9c: 0x246359c0  addiu       $v1, $v1, 0x59C0
    ctx->pc = 0x2cac9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22976));
    // 0x2caca0: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x2caca0u;
    { uint32_t bits = FAST_READ32(0x4E59C0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2caca4: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x2caca4u;
    { uint32_t bits = FAST_READ32(0x4E59C4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2caca8: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2caca8u;
    { uint32_t bits = FAST_READ32(0x4E59C8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cacac: 0xe6220008  swc1        $f2, 0x8($s1)
    ctx->pc = 0x2cacacu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x2cacb0: 0xe621000c  swc1        $f1, 0xC($s1)
    ctx->pc = 0x2cacb0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x2cacb4: 0xe6200010  swc1        $f0, 0x10($s1)
    ctx->pc = 0x2cacb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
    // 0x2cacb8: 0xa620003c  sh          $zero, 0x3C($s1)
    ctx->pc = 0x2cacb8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 60), (uint16_t)GPR_U32(ctx, 0));
    // 0x2cacbc: 0x0  nop
    ctx->pc = 0x2cacbcu;
    // NOP
label_2cacc0:
    // 0x2cacc0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2cacc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cacc4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2cacc4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cacc8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2cacc8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2caccc: 0x3e00008  jr          $ra
    ctx->pc = 0x2CACCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CACD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CACCCu;
        // 0x2cacd0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CACCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CACD4u;
}
