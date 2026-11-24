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

// Function: sub_002CF7E0
// Address: 0x2cf7e0 - 0x2cf910
void sub_002CF7E0_0x2cf7e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CF7E0_0x2cf7e0");
#endif

    switch (ctx->pc) {
        case 0x2cf870u: goto label_2cf870;
        case 0x2cf8b0u: goto label_2cf8b0;
        case 0x2cf8c8u: goto label_2cf8c8;
        default: break;
    }

    ctx->pc = 0x2cf7e0u;

    // 0x2cf7e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2cf7e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2cf7e4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2cf7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2cf7e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2cf7e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2cf7ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2cf7ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2cf7f0: 0x90850821  lbu         $a1, 0x821($a0)
    ctx->pc = 0x2cf7f0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2081)));
    // 0x2cf7f4: 0x10a30032  beq         $a1, $v1, . + 4 + (0x32 << 2)
    ctx->pc = 0x2CF7F4u;
    {
        const bool branch_taken_0x2cf7f4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x2CF7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF7F4u;
        // 0x2cf7f8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf7f4) {
            ctx->pc = 0x2CF8C0u;
            goto label_2cf8c0;
        }
    }
    ctx->pc = 0x2CF7FCu;
    // 0x2cf7fc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2cf7fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cf800: 0x10a60019  beq         $a1, $a2, . + 4 + (0x19 << 2)
    ctx->pc = 0x2CF800u;
    {
        const bool branch_taken_0x2cf800 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        if (branch_taken_0x2cf800) {
            ctx->pc = 0x2CF868u;
            goto label_2cf868;
        }
    }
    ctx->pc = 0x2CF808u;
    // 0x2cf808: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CF808u;
    {
        const bool branch_taken_0x2cf808 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cf808) {
            ctx->pc = 0x2CF818u;
            goto label_2cf818;
        }
    }
    ctx->pc = 0x2CF810u;
    // 0x2cf810: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x2CF810u;
    {
        const bool branch_taken_0x2cf810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cf810) {
            ctx->pc = 0x2CF900u;
            goto label_2cf900;
        }
    }
    ctx->pc = 0x2CF818u;
label_2cf818:
    // 0x2cf818: 0x3c03004e  lui         $v1, 0x4E
    ctx->pc = 0x2cf818u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)78 << 16));
    // 0x2cf81c: 0x24635a48  addiu       $v1, $v1, 0x5A48
    ctx->pc = 0x2cf81cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23112));
    // 0x2cf820: 0x24050050  addiu       $a1, $zero, 0x50
    ctx->pc = 0x2cf820u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x2cf824: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x2cf824u;
    { uint32_t bits = FAST_READ32(0x4E5A48u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2cf828: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x2cf828u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2cf82c: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x2cf82cu;
    { uint32_t bits = FAST_READ32(0x4E5A4Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cf830: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2cf830u;
    { uint32_t bits = FAST_READ32(0x4E5A50u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cf834: 0xe60206a0  swc1        $f2, 0x6A0($s0)
    ctx->pc = 0x2cf834u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1696), bits); }
    // 0x2cf838: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2cf838u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x2cf83c: 0xe60106a4  swc1        $f1, 0x6A4($s0)
    ctx->pc = 0x2cf83cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1700), bits); }
    // 0x2cf840: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x2cf840u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x2cf844: 0xe60006a8  swc1        $f0, 0x6A8($s0)
    ctx->pc = 0x2cf844u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1704), bits); }
    // 0x2cf848: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x2cf848u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cf84c: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x2cf84cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cf850: 0xa60507f2  sh          $a1, 0x7F2($s0)
    ctx->pc = 0x2cf850u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 5));
    // 0x2cf854: 0xa20407f5  sb          $a0, 0x7F5($s0)
    ctx->pc = 0x2cf854u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 4));
    // 0x2cf858: 0xae0307ec  sw          $v1, 0x7EC($s0)
    ctx->pc = 0x2cf858u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 3));
    // 0x2cf85c: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x2CF85Cu;
    {
        const bool branch_taken_0x2cf85c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CF860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF85Cu;
        // 0x2cf860: 0xa2060821  sb          $a2, 0x821($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf85c) {
            ctx->pc = 0x2CF900u;
            goto label_2cf900;
        }
    }
    ctx->pc = 0x2CF864u;
    // 0x2cf864: 0x0  nop
    ctx->pc = 0x2cf864u;
    // NOP
label_2cf868:
    // 0x2cf868: 0xc09d96c  jal         func_2765B0
    ctx->pc = 0x2CF868u;
    SET_GPR_U32(ctx, 31, 0x2CF870u);
    ctx->pc = 0x2765B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2765B0u, 0x2CF868u, 0x2CF870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF870u;
label_2cf870:
    // 0x2cf870: 0x92022b5a  lbu         $v0, 0x2B5A($s0)
    ctx->pc = 0x2cf870u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11098)));
    // 0x2cf874: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2CF874u;
    {
        const bool branch_taken_0x2cf874 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cf874) {
            ctx->pc = 0x2CF8A8u;
            goto label_2cf8a8;
        }
    }
    ctx->pc = 0x2CF87Cu;
    // 0x2cf87c: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x2cf87cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cf880: 0x24030051  addiu       $v1, $zero, 0x51
    ctx->pc = 0x2cf880u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
    // 0x2cf884: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x2cf884u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cf888: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2cf888u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2cf88c: 0xa60307f2  sh          $v1, 0x7F2($s0)
    ctx->pc = 0x2cf88cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 3));
    // 0x2cf890: 0x34430040  ori         $v1, $v0, 0x40
    ctx->pc = 0x2cf890u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x2cf894: 0xa20007f5  sb          $zero, 0x7F5($s0)
    ctx->pc = 0x2cf894u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cf898: 0xae0307ec  sw          $v1, 0x7EC($s0)
    ctx->pc = 0x2cf898u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 3));
    // 0x2cf89c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2cf89cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2cf8a0: 0xa2002b5a  sb          $zero, 0x2B5A($s0)
    ctx->pc = 0x2cf8a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11098), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cf8a4: 0xa2020821  sb          $v0, 0x821($s0)
    ctx->pc = 0x2cf8a4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 2));
label_2cf8a8:
    // 0x2cf8a8: 0xc09d968  jal         func_2765A0
    ctx->pc = 0x2CF8A8u;
    SET_GPR_U32(ctx, 31, 0x2CF8B0u);
    ctx->pc = 0x2765A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2765A0u, 0x2CF8A8u, 0x2CF8B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF8B0u;
label_2cf8b0:
    // 0x2cf8b0: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2CF8B0u;
    {
        const bool branch_taken_0x2cf8b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CF8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF8B0u;
        // 0x2cf8b4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf8b0) {
            ctx->pc = 0x2CF900u;
            goto label_2cf900;
        }
    }
    ctx->pc = 0x2CF8B8u;
    // 0x2cf8b8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2CF8B8u;
    {
        const bool branch_taken_0x2cf8b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CF8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF8B8u;
        // 0x2cf8bc: 0xa2030780  sb          $v1, 0x780($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf8b8) {
            ctx->pc = 0x2CF900u;
            goto label_2cf900;
        }
    }
    ctx->pc = 0x2CF8C0u;
label_2cf8c0:
    // 0x2cf8c0: 0xc09d96c  jal         func_2765B0
    ctx->pc = 0x2CF8C0u;
    SET_GPR_U32(ctx, 31, 0x2CF8C8u);
    ctx->pc = 0x2765B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2765B0u, 0x2CF8C0u, 0x2CF8C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF8C8u;
label_2cf8c8:
    // 0x2cf8c8: 0x920307f6  lbu         $v1, 0x7F6($s0)
    ctx->pc = 0x2cf8c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2038)));
    // 0x2cf8cc: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x2CF8CCu;
    {
        const bool branch_taken_0x2cf8cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cf8cc) {
            ctx->pc = 0x2CF900u;
            goto label_2cf900;
        }
    }
    ctx->pc = 0x2CF8D4u;
    // 0x2cf8d4: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x2cf8d4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cf8d8: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x2cf8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x2cf8dc: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x2cf8dcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cf8e0: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x2cf8e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2cf8e4: 0xa60307f2  sh          $v1, 0x7F2($s0)
    ctx->pc = 0x2cf8e4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 3));
    // 0x2cf8e8: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2cf8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x2cf8ec: 0xa20407f5  sb          $a0, 0x7F5($s0)
    ctx->pc = 0x2cf8ecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 4));
    // 0x2cf8f0: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x2cf8f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x2cf8f4: 0xae0307ec  sw          $v1, 0x7EC($s0)
    ctx->pc = 0x2cf8f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 3));
    // 0x2cf8f8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2cf8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cf8fc: 0xa2030821  sb          $v1, 0x821($s0)
    ctx->pc = 0x2cf8fcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
label_2cf900:
    // 0x2cf900: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2cf900u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cf904: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2cf904u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cf908: 0x3e00008  jr          $ra
    ctx->pc = 0x2CF908u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CF90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF908u;
        // 0x2cf90c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CF908u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CF910u;
}
