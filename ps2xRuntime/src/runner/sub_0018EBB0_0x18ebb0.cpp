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

// Function: sub_0018EBB0
// Address: 0x18ebb0 - 0x18ed28
void sub_0018EBB0_0x18ebb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018EBB0_0x18ebb0");
#endif

    switch (ctx->pc) {
        case 0x18ec04u: goto label_18ec04;
        case 0x18ec10u: goto label_18ec10;
        case 0x18ec18u: goto label_18ec18;
        case 0x18ec34u: goto label_18ec34;
        case 0x18ecd0u: goto label_18ecd0;
        case 0x18ececu: goto label_18ecec;
        case 0x18ed00u: goto label_18ed00;
        default: break;
    }

    ctx->pc = 0x18ebb0u;

    // 0x18ebb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x18ebb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18ebb4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x18ebb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18ebb8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x18ebb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x18ebbc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18ebbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18ebc0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x18ebc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ebc4: 0x90840001  lbu         $a0, 0x1($a0)
    ctx->pc = 0x18ebc4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x18ebc8: 0x1083004b  beq         $a0, $v1, . + 4 + (0x4B << 2)
    ctx->pc = 0x18EBC8u;
    {
        const bool branch_taken_0x18ebc8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x18EBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EBC8u;
        // 0x18ebcc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ebc8) {
            ctx->pc = 0x18ECF8u;
            goto label_18ecf8;
        }
    }
    ctx->pc = 0x18EBD0u;
    // 0x18ebd0: 0x1083003d  beq         $a0, $v1, . + 4 + (0x3D << 2)
    ctx->pc = 0x18EBD0u;
    {
        const bool branch_taken_0x18ebd0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x18ebd0) {
            ctx->pc = 0x18ECC8u;
            goto label_18ecc8;
        }
    }
    ctx->pc = 0x18EBD8u;
    // 0x18ebd8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18EBD8u;
    {
        const bool branch_taken_0x18ebd8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ebd8) {
            ctx->pc = 0x18EBE8u;
            goto label_18ebe8;
        }
    }
    ctx->pc = 0x18EBE0u;
    // 0x18ebe0: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x18EBE0u;
    {
        const bool branch_taken_0x18ebe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ebe0) {
            ctx->pc = 0x18ED18u;
            goto label_18ed18;
        }
    }
    ctx->pc = 0x18EBE8u;
label_18ebe8:
    // 0x18ebe8: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x18ebe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x18ebec: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x18ebecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x18ebf0: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x18ebf0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x18ebf4: 0x3c02010e  lui         $v0, 0x10E
    ctx->pc = 0x18ebf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)270 << 16));
    // 0x18ebf8: 0x2484cea0  addiu       $a0, $a0, -0x3160
    ctx->pc = 0x18ebf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954656));
    // 0x18ebfc: 0xc05e390  jal         func_178E40
    ctx->pc = 0x18EBFCu;
    SET_GPR_U32(ctx, 31, 0x18EC04u);
    ctx->pc = 0x18EC00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EBFCu;
    // 0x18ec00: 0x34451000  ori         $a1, $v0, 0x1000 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    ctx->in_delay_slot = false;
    ctx->pc = 0x178E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178E40u, 0x18EBFCu, 0x18EC04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18EC04u;
label_18ec04:
    // 0x18ec04: 0x3c040093  lui         $a0, 0x93
    ctx->pc = 0x18ec04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)147 << 16));
    // 0x18ec08: 0xc0f0140  jal         func_3C0500
    ctx->pc = 0x18EC08u;
    SET_GPR_U32(ctx, 31, 0x18EC10u);
    ctx->pc = 0x18EC0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EC08u;
    // 0x18ec0c: 0x2484fee0  addiu       $a0, $a0, -0x120 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967008));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C0500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C0500u, 0x18EC08u, 0x18EC10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18EC10u;
label_18ec10:
    // 0x18ec10: 0xc0c70c8  jal         func_31C320
    ctx->pc = 0x18EC10u;
    SET_GPR_U32(ctx, 31, 0x18EC18u);
    ctx->pc = 0x18EC14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EC10u;
    // 0x18ec14: 0x24040ebd  addiu       $a0, $zero, 0xEBD (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3773));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31C320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31C320u, 0x18EC10u, 0x18EC18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18EC18u;
label_18ec18:
    // 0x18ec18: 0x3c060019  lui         $a2, 0x19
    ctx->pc = 0x18ec18u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)25 << 16));
    // 0x18ec1c: 0x3c070019  lui         $a3, 0x19
    ctx->pc = 0x18ec1cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)25 << 16));
    // 0x18ec20: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x18ec20u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x18ec24: 0x278485b0  addiu       $a0, $gp, -0x7A50
    ctx->pc = 0x18ec24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    // 0x18ec28: 0x24c6eb50  addiu       $a2, $a2, -0x14B0
    ctx->pc = 0x18ec28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294962000));
    // 0x18ec2c: 0xc054d34  jal         func_1534D0
    ctx->pc = 0x18EC2Cu;
    SET_GPR_U32(ctx, 31, 0x18EC34u);
    ctx->pc = 0x18EC30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EC2Cu;
    // 0x18ec30: 0x24e7eb90  addiu       $a3, $a3, -0x1470 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294962064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1534D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1534D0u, 0x18EC2Cu, 0x18EC34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18EC34u;
label_18ec34:
    // 0x18ec34: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x18ec34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x18ec38: 0x24024e20  addiu       $v0, $zero, 0x4E20
    ctx->pc = 0x18ec38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20000));
    // 0x18ec3c: 0xac200e6c  sw          $zero, 0xE6C($at)
    ctx->pc = 0x18ec3cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6B0E6Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B0E6Cu, _value); } while (0);
    // 0x18ec40: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x18ec40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x18ec44: 0xac220e44  sw          $v0, 0xE44($at)
    ctx->pc = 0x18ec44u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B0E44u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B0E44u, _value); } while (0);
    // 0x18ec48: 0x24022710  addiu       $v0, $zero, 0x2710
    ctx->pc = 0x18ec48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
    // 0x18ec4c: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x18ec4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x18ec50: 0xac220e48  sw          $v0, 0xE48($at)
    ctx->pc = 0x18ec50u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B0E48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B0E48u, _value); } while (0);
    // 0x18ec54: 0x24021388  addiu       $v0, $zero, 0x1388
    ctx->pc = 0x18ec54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5000));
    // 0x18ec58: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x18ec58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x18ec5c: 0xac220e4c  sw          $v0, 0xE4C($at)
    ctx->pc = 0x18ec5cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B0E4Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B0E4Cu, _value); } while (0);
    // 0x18ec60: 0x240207d0  addiu       $v0, $zero, 0x7D0
    ctx->pc = 0x18ec60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2000));
    // 0x18ec64: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x18ec64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x18ec68: 0xac220e50  sw          $v0, 0xE50($at)
    ctx->pc = 0x18ec68u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B0E50u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B0E50u, _value); } while (0);
    // 0x18ec6c: 0x240203e8  addiu       $v0, $zero, 0x3E8
    ctx->pc = 0x18ec6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x18ec70: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x18ec70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x18ec74: 0xac220e54  sw          $v0, 0xE54($at)
    ctx->pc = 0x18ec74u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B0E54u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B0E54u, _value); } while (0);
    // 0x18ec78: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x18ec78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x18ec7c: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x18ec7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x18ec80: 0xac220e58  sw          $v0, 0xE58($at)
    ctx->pc = 0x18ec80u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B0E58u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B0E58u, _value); } while (0);
    // 0x18ec84: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x18ec84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x18ec88: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x18ec88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x18ec8c: 0xac220e5c  sw          $v0, 0xE5C($at)
    ctx->pc = 0x18ec8cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B0E5Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B0E5Cu, _value); } while (0);
    // 0x18ec90: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x18ec90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x18ec94: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x18ec94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x18ec98: 0xac220e60  sw          $v0, 0xE60($at)
    ctx->pc = 0x18ec98u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B0E60u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B0E60u, _value); } while (0);
    // 0x18ec9c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x18ec9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x18eca0: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x18eca0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x18eca4: 0xac220e64  sw          $v0, 0xE64($at)
    ctx->pc = 0x18eca4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B0E64u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B0E64u, _value); } while (0);
    // 0x18eca8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18eca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18ecac: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x18ecacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x18ecb0: 0xac220e68  sw          $v0, 0xE68($at)
    ctx->pc = 0x18ecb0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B0E68u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B0E68u, _value); } while (0);
    // 0x18ecb4: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x18ecb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x18ecb8: 0xac200e40  sw          $zero, 0xE40($at)
    ctx->pc = 0x18ecb8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6B0E40u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B0E40u, _value); } while (0);
    // 0x18ecbc: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x18ecbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x18ecc0: 0xac200e78  sw          $zero, 0xE78($at)
    ctx->pc = 0x18ecc0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6B0E78u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B0E78u, _value); } while (0);
    // 0x18ecc4: 0x0  nop
    ctx->pc = 0x18ecc4u;
    // NOP
label_18ecc8:
    // 0x18ecc8: 0xc0554f4  jal         func_1553D0
    ctx->pc = 0x18ECC8u;
    SET_GPR_U32(ctx, 31, 0x18ECD0u);
    ctx->pc = 0x18ECCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18ECC8u;
    // 0x18eccc: 0x278485b0  addiu       $a0, $gp, -0x7A50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1553D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1553D0u, 0x18ECC8u, 0x18ECD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18ECD0u;
label_18ecd0:
    // 0x18ecd0: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x18ECD0u;
    {
        const bool branch_taken_0x18ecd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18ecd0) {
            ctx->pc = 0x18ED18u;
            goto label_18ed18;
        }
    }
    ctx->pc = 0x18ECD8u;
    // 0x18ecd8: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x18ecd8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x18ecdc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x18ecdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ece0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x18ece0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x18ece4: 0xc095040  jal         func_254100
    ctx->pc = 0x18ECE4u;
    SET_GPR_U32(ctx, 31, 0x18ECECu);
    ctx->pc = 0x18ECE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18ECE4u;
    // 0x18ece8: 0xa2020001  sb          $v0, 0x1($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254100u, 0x18ECE4u, 0x18ECECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18ECECu;
label_18ecec:
    // 0x18ecec: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x18ECECu;
    {
        const bool branch_taken_0x18ecec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ecec) {
            ctx->pc = 0x18ED18u;
            goto label_18ed18;
        }
    }
    ctx->pc = 0x18ECF4u;
    // 0x18ecf4: 0x0  nop
    ctx->pc = 0x18ecf4u;
    // NOP
label_18ecf8:
    // 0x18ecf8: 0xc095040  jal         func_254100
    ctx->pc = 0x18ECF8u;
    SET_GPR_U32(ctx, 31, 0x18ED00u);
    ctx->pc = 0x18ECFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18ECF8u;
    // 0x18ecfc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254100u, 0x18ECF8u, 0x18ED00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18ED00u;
label_18ed00:
    // 0x18ed00: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18ED00u;
    {
        const bool branch_taken_0x18ed00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ed00) {
            ctx->pc = 0x18ED18u;
            goto label_18ed18;
        }
    }
    ctx->pc = 0x18ED08u;
    // 0x18ed08: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x18ed08u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18ed0c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x18ed0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x18ed10: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x18ed10u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x18ed14: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x18ed14u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
label_18ed18:
    // 0x18ed18: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x18ed18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18ed1c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18ed1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18ed20: 0x3e00008  jr          $ra
    ctx->pc = 0x18ED20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18ED24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18ED20u;
        // 0x18ed24: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18ED20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18ED28u;
}
