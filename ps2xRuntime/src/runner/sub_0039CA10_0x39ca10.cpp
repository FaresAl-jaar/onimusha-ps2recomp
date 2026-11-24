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

// Function: sub_0039CA10
// Address: 0x39ca10 - 0x39cd70
void sub_0039CA10_0x39ca10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039CA10_0x39ca10");
#endif

    switch (ctx->pc) {
        case 0x39caccu: goto label_39cacc;
        case 0x39cad8u: goto label_39cad8;
        case 0x39cae4u: goto label_39cae4;
        case 0x39cb08u: goto label_39cb08;
        case 0x39cb14u: goto label_39cb14;
        case 0x39cb34u: goto label_39cb34;
        case 0x39cbd0u: goto label_39cbd0;
        case 0x39cbe0u: goto label_39cbe0;
        case 0x39cc34u: goto label_39cc34;
        case 0x39cd28u: goto label_39cd28;
        case 0x39cd30u: goto label_39cd30;
        case 0x39cd40u: goto label_39cd40;
        case 0x39cd58u: goto label_39cd58;
        default: break;
    }

    ctx->pc = 0x39ca10u;

    // 0x39ca10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x39ca10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x39ca14: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x39ca14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x39ca18: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x39ca18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x39ca1c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x39ca1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x39ca20: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x39ca20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x39ca24: 0x8c860148  lw          $a2, 0x148($a0)
    ctx->pc = 0x39ca24u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
    // 0x39ca28: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x39ca28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39ca2c: 0xc31825  or          $v1, $a2, $v1
    ctx->pc = 0x39ca2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x39ca30: 0xac830148  sw          $v1, 0x148($a0)
    ctx->pc = 0x39ca30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 3));
    // 0x39ca34: 0x90840821  lbu         $a0, 0x821($a0)
    ctx->pc = 0x39ca34u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2081)));
    // 0x39ca38: 0x1085009b  beq         $a0, $a1, . + 4 + (0x9B << 2)
    ctx->pc = 0x39CA38u;
    {
        const bool branch_taken_0x39ca38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x39CA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CA38u;
        // 0x39ca3c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ca38) {
            ctx->pc = 0x39CCA8u;
            goto label_39cca8;
        }
    }
    ctx->pc = 0x39CA40u;
    // 0x39ca40: 0x1083007f  beq         $a0, $v1, . + 4 + (0x7F << 2)
    ctx->pc = 0x39CA40u;
    {
        const bool branch_taken_0x39ca40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x39ca40) {
            ctx->pc = 0x39CC40u;
            goto label_39cc40;
        }
    }
    ctx->pc = 0x39CA48u;
    // 0x39ca48: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x39ca48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39ca4c: 0x10830044  beq         $a0, $v1, . + 4 + (0x44 << 2)
    ctx->pc = 0x39CA4Cu;
    {
        const bool branch_taken_0x39ca4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x39ca4c) {
            ctx->pc = 0x39CB60u;
            goto label_39cb60;
        }
    }
    ctx->pc = 0x39CA54u;
    // 0x39ca54: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x39CA54u;
    {
        const bool branch_taken_0x39ca54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x39ca54) {
            ctx->pc = 0x39CA68u;
            goto label_39ca68;
        }
    }
    ctx->pc = 0x39CA5Cu;
    // 0x39ca5c: 0x100000c0  b           . + 4 + (0xC0 << 2)
    ctx->pc = 0x39CA5Cu;
    {
        const bool branch_taken_0x39ca5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x39ca5c) {
            ctx->pc = 0x39CD60u;
            goto label_39cd60;
        }
    }
    ctx->pc = 0x39CA64u;
    // 0x39ca64: 0x0  nop
    ctx->pc = 0x39ca64u;
    // NOP
label_39ca68:
    // 0x39ca68: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x39ca68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x39ca6c: 0x2442ca80  addiu       $v0, $v0, -0x3580
    ctx->pc = 0x39ca6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953600));
    // 0x39ca70: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x39ca70u;
    { uint32_t bits = FAST_READ32(0x65CA80u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x39ca74: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x39ca74u;
    { uint32_t bits = FAST_READ32(0x65CA84u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x39ca78: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x39ca78u;
    { uint32_t bits = FAST_READ32(0x65CA88u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x39ca7c: 0xe60206a0  swc1        $f2, 0x6A0($s0)
    ctx->pc = 0x39ca7cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1696), bits); }
    // 0x39ca80: 0xe60106a4  swc1        $f1, 0x6A4($s0)
    ctx->pc = 0x39ca80u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1700), bits); }
    // 0x39ca84: 0xe60006a8  swc1        $f0, 0x6A8($s0)
    ctx->pc = 0x39ca84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1704), bits); }
    // 0x39ca88: 0x92022bd6  lbu         $v0, 0x2BD6($s0)
    ctx->pc = 0x39ca88u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11222)));
    // 0x39ca8c: 0x10430008  beq         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x39CA8Cu;
    {
        const bool branch_taken_0x39ca8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x39ca8c) {
            ctx->pc = 0x39CAB0u;
            goto label_39cab0;
        }
    }
    ctx->pc = 0x39CA94u;
    // 0x39ca94: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x39CA94u;
    {
        const bool branch_taken_0x39ca94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39ca94) {
            ctx->pc = 0x39CAA8u;
            goto label_39caa8;
        }
    }
    ctx->pc = 0x39CA9Cu;
    // 0x39ca9c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x39CA9Cu;
    {
        const bool branch_taken_0x39ca9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x39ca9c) {
            ctx->pc = 0x39CB28u;
            goto label_39cb28;
        }
    }
    ctx->pc = 0x39CAA4u;
    // 0x39caa4: 0x0  nop
    ctx->pc = 0x39caa4u;
    // NOP
label_39caa8:
    // 0x39caa8: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x39CAA8u;
    {
        const bool branch_taken_0x39caa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39CAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CAA8u;
        // 0x39caac: 0xa2002bd9  sb          $zero, 0x2BD9($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 11225), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39caa8) {
            ctx->pc = 0x39CB28u;
            goto label_39cb28;
        }
    }
    ctx->pc = 0x39CAB0u;
label_39cab0:
    // 0x39cab0: 0x92032bd7  lbu         $v1, 0x2BD7($s0)
    ctx->pc = 0x39cab0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11223)));
    // 0x39cab4: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x39cab4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x39cab8: 0x244224c8  addiu       $v0, $v0, 0x24C8
    ctx->pc = 0x39cab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9416));
    // 0x39cabc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x39cabcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x39cac0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x39cac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x39cac4: 0xc0975a8  jal         func_25D6A0
    ctx->pc = 0x39CAC4u;
    SET_GPR_U32(ctx, 31, 0x39CACCu);
    ctx->pc = 0x39CAC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39CAC4u;
    // 0x39cac8: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x25D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D6A0u, 0x39CAC4u, 0x39CACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39CACCu;
label_39cacc:
    // 0x39cacc: 0xa2022bd9  sb          $v0, 0x2BD9($s0)
    ctx->pc = 0x39caccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11225), (uint8_t)GPR_U32(ctx, 2));
    // 0x39cad0: 0xc0e6f10  jal         func_39BC40
    ctx->pc = 0x39CAD0u;
    SET_GPR_U32(ctx, 31, 0x39CAD8u);
    ctx->pc = 0x39CAD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39CAD0u;
    // 0x39cad4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39BC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39BC40u, 0x39CAD0u, 0x39CAD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39CAD8u;
label_39cad8:
    // 0x39cad8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39cad8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39cadc: 0xc0e6f78  jal         func_39BDE0
    ctx->pc = 0x39CADCu;
    SET_GPR_U32(ctx, 31, 0x39CAE4u);
    ctx->pc = 0x39CAE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39CADCu;
    // 0x39cae0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39BDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39BDE0u, 0x39CADCu, 0x39CAE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39CAE4u;
label_39cae4:
    // 0x39cae4: 0x8c4229c0  lw          $v0, 0x29C0($v0)
    ctx->pc = 0x39cae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10688)));
    // 0x39cae8: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x39cae8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x39caec: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x39CAECu;
    {
        const bool branch_taken_0x39caec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x39caec) {
            ctx->pc = 0x39CB00u;
            goto label_39cb00;
        }
    }
    ctx->pc = 0x39CAF4u;
    // 0x39caf4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x39caf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39caf8: 0xa2022bd9  sb          $v0, 0x2BD9($s0)
    ctx->pc = 0x39caf8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11225), (uint8_t)GPR_U32(ctx, 2));
    // 0x39cafc: 0x0  nop
    ctx->pc = 0x39cafcu;
    // NOP
label_39cb00:
    // 0x39cb00: 0xc0e6f38  jal         func_39BCE0
    ctx->pc = 0x39CB00u;
    SET_GPR_U32(ctx, 31, 0x39CB08u);
    ctx->pc = 0x39CB04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39CB00u;
    // 0x39cb04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39BCE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39BCE0u, 0x39CB00u, 0x39CB08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39CB08u;
label_39cb08:
    // 0x39cb08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39cb08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39cb0c: 0xc0e6f78  jal         func_39BDE0
    ctx->pc = 0x39CB0Cu;
    SET_GPR_U32(ctx, 31, 0x39CB14u);
    ctx->pc = 0x39CB10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39CB0Cu;
    // 0x39cb10: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39BDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39BDE0u, 0x39CB0Cu, 0x39CB14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39CB14u;
label_39cb14:
    // 0x39cb14: 0x8c4229c0  lw          $v0, 0x29C0($v0)
    ctx->pc = 0x39cb14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10688)));
    // 0x39cb18: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x39cb18u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x39cb1c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x39CB1Cu;
    {
        const bool branch_taken_0x39cb1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x39cb1c) {
            ctx->pc = 0x39CB28u;
            goto label_39cb28;
        }
    }
    ctx->pc = 0x39CB24u;
    // 0x39cb24: 0xa2002bd9  sb          $zero, 0x2BD9($s0)
    ctx->pc = 0x39cb24u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11225), (uint8_t)GPR_U32(ctx, 0));
label_39cb28:
    // 0x39cb28: 0x92052bd9  lbu         $a1, 0x2BD9($s0)
    ctx->pc = 0x39cb28u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11225)));
    // 0x39cb2c: 0xc0e6f90  jal         func_39BE40
    ctx->pc = 0x39CB2Cu;
    SET_GPR_U32(ctx, 31, 0x39CB34u);
    ctx->pc = 0x39CB30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39CB2Cu;
    // 0x39cb30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39BE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39BE40u, 0x39CB2Cu, 0x39CB34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39CB34u;
label_39cb34:
    // 0x39cb34: 0xa2022bda  sb          $v0, 0x2BDA($s0)
    ctx->pc = 0x39cb34u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11226), (uint8_t)GPR_U32(ctx, 2));
    // 0x39cb38: 0x24030055  addiu       $v1, $zero, 0x55
    ctx->pc = 0x39cb38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 85));
    // 0x39cb3c: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x39cb3cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x39cb40: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x39cb40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x39cb44: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x39cb44u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x39cb48: 0x3c048004  lui         $a0, 0x8004
    ctx->pc = 0x39cb48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32772 << 16));
    // 0x39cb4c: 0xa60307f2  sh          $v1, 0x7F2($s0)
    ctx->pc = 0x39cb4cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 3));
    // 0x39cb50: 0xa20507f5  sb          $a1, 0x7F5($s0)
    ctx->pc = 0x39cb50u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 5));
    // 0x39cb54: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x39cb54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39cb58: 0xae0407ec  sw          $a0, 0x7EC($s0)
    ctx->pc = 0x39cb58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 4));
    // 0x39cb5c: 0xa2030821  sb          $v1, 0x821($s0)
    ctx->pc = 0x39cb5cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
label_39cb60:
    // 0x39cb60: 0x3c034302  lui         $v1, 0x4302
    ctx->pc = 0x39cb60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17154 << 16));
    // 0x39cb64: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x39cb64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x39cb68: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x39cb68u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x39cb6c: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x39cb6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x39cb70: 0x34648889  ori         $a0, $v1, 0x8889
    ctx->pc = 0x39cb70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x39cb74: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x39cb74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x39cb78: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x39cb78u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x39cb7c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x39cb7cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x39cb80: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x39cb80u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x39cb84: 0x0  nop
    ctx->pc = 0x39cb84u;
    // NOP
    // 0x39cb88: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x39cb88u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x39cb8c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x39cb8cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x39cb90: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x39CB90u;
    {
        const bool branch_taken_0x39cb90 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x39CB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CB90u;
        // 0x39cb94: 0x96050824  lhu         $a1, 0x824($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2084)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39cb90) {
            ctx->pc = 0x39CBA8u;
            goto label_39cba8;
        }
    }
    ctx->pc = 0x39CB98u;
    // 0x39cb98: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x39cb98u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x39cb9c: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x39cb9cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x39cba0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x39CBA0u;
    {
        const bool branch_taken_0x39cba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x39cba0) {
            ctx->pc = 0x39CBC0u;
            goto label_39cbc0;
        }
    }
    ctx->pc = 0x39CBA8u;
label_39cba8:
    // 0x39cba8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x39cba8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x39cbac: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x39cbacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x39cbb0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x39cbb0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x39cbb4: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x39cbb4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x39cbb8: 0x0  nop
    ctx->pc = 0x39cbb8u;
    // NOP
    // 0x39cbbc: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x39cbbcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_39cbc0:
    // 0x39cbc0: 0x14a40007  bne         $a1, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x39CBC0u;
    {
        const bool branch_taken_0x39cbc0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x39cbc0) {
            ctx->pc = 0x39CBE0u;
            goto label_39cbe0;
        }
    }
    ctx->pc = 0x39CBC8u;
    // 0x39cbc8: 0xc096fb8  jal         func_25BEE0
    ctx->pc = 0x39CBC8u;
    SET_GPR_U32(ctx, 31, 0x39CBD0u);
    ctx->pc = 0x39CBCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39CBC8u;
    // 0x39cbcc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25BEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BEE0u, 0x39CBC8u, 0x39CBD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39CBD0u;
label_39cbd0:
    // 0x39cbd0: 0x920508e8  lbu         $a1, 0x8E8($s0)
    ctx->pc = 0x39cbd0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2280)));
    // 0x39cbd4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x39cbd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39cbd8: 0xc0aa328  jal         func_2A8CA0
    ctx->pc = 0x39CBD8u;
    SET_GPR_U32(ctx, 31, 0x39CBE0u);
    ctx->pc = 0x39CBDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39CBD8u;
    // 0x39cbdc: 0x26060020  addiu       $a2, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8CA0u, 0x39CBD8u, 0x39CBE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39CBE0u;
label_39cbe0:
    // 0x39cbe0: 0x920307f6  lbu         $v1, 0x7F6($s0)
    ctx->pc = 0x39cbe0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2038)));
    // 0x39cbe4: 0x1060005e  beqz        $v1, . + 4 + (0x5E << 2)
    ctx->pc = 0x39CBE4u;
    {
        const bool branch_taken_0x39cbe4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x39cbe4) {
            ctx->pc = 0x39CD60u;
            goto label_39cd60;
        }
    }
    ctx->pc = 0x39CBECu;
    // 0x39cbec: 0x8e090148  lw          $t1, 0x148($s0)
    ctx->pc = 0x39cbecu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x39cbf0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x39cbf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x39cbf4: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x39cbf4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x39cbf8: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x39cbf8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x39cbfc: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x39cbfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x39cc00: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x39cc00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x39cc04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39cc04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39cc08: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x39cc08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39cc0c: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x39cc0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x39cc10: 0x35294000  ori         $t1, $t1, 0x4000
    ctx->pc = 0x39cc10u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)16384);
    // 0x39cc14: 0xae090148  sw          $t1, 0x148($s0)
    ctx->pc = 0x39cc14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 9));
    // 0x39cc18: 0xa2080821  sb          $t0, 0x821($s0)
    ctx->pc = 0x39cc18u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 8));
    // 0x39cc1c: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x39cc1cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x39cc20: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x39cc20u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x39cc24: 0xa60707f2  sh          $a3, 0x7F2($s0)
    ctx->pc = 0x39cc24u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 7));
    // 0x39cc28: 0xa20307f5  sb          $v1, 0x7F5($s0)
    ctx->pc = 0x39cc28u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 3));
    // 0x39cc2c: 0xc0a4764  jal         func_291D90
    ctx->pc = 0x39CC2Cu;
    SET_GPR_U32(ctx, 31, 0x39CC34u);
    ctx->pc = 0x39CC30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39CC2Cu;
    // 0x39cc30: 0xae0207ec  sw          $v0, 0x7EC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291D90u, 0x39CC2Cu, 0x39CC34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39CC34u;
label_39cc34:
    // 0x39cc34: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x39CC34u;
    {
        const bool branch_taken_0x39cc34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x39cc34) {
            ctx->pc = 0x39CD60u;
            goto label_39cd60;
        }
    }
    ctx->pc = 0x39CC3Cu;
    // 0x39cc3c: 0x0  nop
    ctx->pc = 0x39cc3cu;
    // NOP
label_39cc40:
    // 0x39cc40: 0xa2050821  sb          $a1, 0x821($s0)
    ctx->pc = 0x39cc40u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 5));
    // 0x39cc44: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x39cc44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x39cc48: 0x3c034270  lui         $v1, 0x4270
    ctx->pc = 0x39cc48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17008 << 16));
    // 0x39cc4c: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x39cc4cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x39cc50: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x39cc50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x39cc54: 0x34648889  ori         $a0, $v1, 0x8889
    ctx->pc = 0x39cc54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x39cc58: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x39cc58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x39cc5c: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x39cc5cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x39cc60: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x39cc60u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x39cc64: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x39cc64u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x39cc68: 0x0  nop
    ctx->pc = 0x39cc68u;
    // NOP
    // 0x39cc6c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x39cc6cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x39cc70: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x39cc70u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x39cc74: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x39CC74u;
    {
        const bool branch_taken_0x39cc74 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x39cc74) {
            ctx->pc = 0x39CC8Cu;
            goto label_39cc8c;
        }
    }
    ctx->pc = 0x39CC7Cu;
    // 0x39cc7c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x39cc7cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x39cc80: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x39cc80u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x39cc84: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x39CC84u;
    {
        const bool branch_taken_0x39cc84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39CC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CC84u;
        // 0x39cc88: 0xa6042bdc  sh          $a0, 0x2BDC($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 11228), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39cc84) {
            ctx->pc = 0x39CCA8u;
            goto label_39cca8;
        }
    }
    ctx->pc = 0x39CC8Cu;
label_39cc8c:
    // 0x39cc8c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x39cc8cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x39cc90: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x39cc90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x39cc94: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x39cc94u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x39cc98: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x39cc98u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x39cc9c: 0x0  nop
    ctx->pc = 0x39cc9cu;
    // NOP
    // 0x39cca0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x39cca0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x39cca4: 0xa6042bdc  sh          $a0, 0x2BDC($s0)
    ctx->pc = 0x39cca4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11228), (uint16_t)GPR_U32(ctx, 4));
label_39cca8:
    // 0x39cca8: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x39cca8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x39ccac: 0x34638889  ori         $v1, $v1, 0x8889
    ctx->pc = 0x39ccacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x39ccb0: 0x86052bdc  lh          $a1, 0x2BDC($s0)
    ctx->pc = 0x39ccb0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11228)));
    // 0x39ccb4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x39ccb4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x39ccb8: 0x3c0441a0  lui         $a0, 0x41A0
    ctx->pc = 0x39ccb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16800 << 16));
    // 0x39ccbc: 0x44841800  mtc1        $a0, $f3
    ctx->pc = 0x39ccbcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x39ccc0: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x39ccc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x39ccc4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x39ccc4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x39ccc8: 0x24a3ffff  addiu       $v1, $a1, -0x1
    ctx->pc = 0x39ccc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x39cccc: 0xa6032bdc  sh          $v1, 0x2BDC($s0)
    ctx->pc = 0x39ccccu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11228), (uint16_t)GPR_U32(ctx, 3));
    // 0x39ccd0: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x39ccd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x39ccd4: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x39ccd4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x39ccd8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x39ccd8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x39ccdc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x39ccdcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x39cce0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x39CCE0u;
    {
        const bool branch_taken_0x39cce0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x39CCE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CCE0u;
        // 0x39cce4: 0x86052bdc  lh          $a1, 0x2BDC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11228)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39cce0) {
            ctx->pc = 0x39CCF8u;
            goto label_39ccf8;
        }
    }
    ctx->pc = 0x39CCE8u;
    // 0x39cce8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x39cce8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x39ccec: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x39ccecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x39ccf0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x39CCF0u;
    {
        const bool branch_taken_0x39ccf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x39ccf0) {
            ctx->pc = 0x39CD10u;
            goto label_39cd10;
        }
    }
    ctx->pc = 0x39CCF8u;
label_39ccf8:
    // 0x39ccf8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x39ccf8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x39ccfc: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x39ccfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x39cd00: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x39cd00u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x39cd04: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x39cd04u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x39cd08: 0x0  nop
    ctx->pc = 0x39cd08u;
    // NOP
    // 0x39cd0c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x39cd0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_39cd10:
    // 0x39cd10: 0x14a4000b  bne         $a1, $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x39CD10u;
    {
        const bool branch_taken_0x39cd10 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x39cd10) {
            ctx->pc = 0x39CD40u;
            goto label_39cd40;
        }
    }
    ctx->pc = 0x39CD18u;
    // 0x39cd18: 0x92052bda  lbu         $a1, 0x2BDA($s0)
    ctx->pc = 0x39cd18u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11226)));
    // 0x39cd1c: 0x92062bd9  lbu         $a2, 0x2BD9($s0)
    ctx->pc = 0x39cd1cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11225)));
    // 0x39cd20: 0xc0e70b8  jal         func_39C2E0
    ctx->pc = 0x39CD20u;
    SET_GPR_U32(ctx, 31, 0x39CD28u);
    ctx->pc = 0x39CD24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39CD20u;
    // 0x39cd24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39C2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39C2E0u, 0x39CD20u, 0x39CD28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39CD28u;
label_39cd28:
    // 0x39cd28: 0xc096fb8  jal         func_25BEE0
    ctx->pc = 0x39CD28u;
    SET_GPR_U32(ctx, 31, 0x39CD30u);
    ctx->pc = 0x39CD2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39CD28u;
    // 0x39cd2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25BEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BEE0u, 0x39CD28u, 0x39CD30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39CD30u;
label_39cd30:
    // 0x39cd30: 0x920508e8  lbu         $a1, 0x8E8($s0)
    ctx->pc = 0x39cd30u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2280)));
    // 0x39cd34: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x39cd34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39cd38: 0xc0aa328  jal         func_2A8CA0
    ctx->pc = 0x39CD38u;
    SET_GPR_U32(ctx, 31, 0x39CD40u);
    ctx->pc = 0x39CD3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39CD38u;
    // 0x39cd3c: 0x26060020  addiu       $a2, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8CA0u, 0x39CD38u, 0x39CD40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39CD40u;
label_39cd40:
    // 0x39cd40: 0x86032bdc  lh          $v1, 0x2BDC($s0)
    ctx->pc = 0x39cd40u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11228)));
    // 0x39cd44: 0x1c600006  bgtz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x39CD44u;
    {
        const bool branch_taken_0x39cd44 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x39CD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CD44u;
        // 0x39cd48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39cd44) {
            ctx->pc = 0x39CD60u;
            goto label_39cd60;
        }
    }
    ctx->pc = 0x39CD4Cu;
    // 0x39cd4c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x39cd4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39cd50: 0xc0a4764  jal         func_291D90
    ctx->pc = 0x39CD50u;
    SET_GPR_U32(ctx, 31, 0x39CD58u);
    ctx->pc = 0x39CD54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39CD50u;
    // 0x39cd54: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291D90u, 0x39CD50u, 0x39CD58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39CD58u;
label_39cd58:
    // 0x39cd58: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x39cd58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39cd5c: 0xa2030780  sb          $v1, 0x780($s0)
    ctx->pc = 0x39cd5cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
label_39cd60:
    // 0x39cd60: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x39cd60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39cd64: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x39cd64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39cd68: 0x3e00008  jr          $ra
    ctx->pc = 0x39CD68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39CD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CD68u;
        // 0x39cd6c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39CD68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39CD70u;
}
