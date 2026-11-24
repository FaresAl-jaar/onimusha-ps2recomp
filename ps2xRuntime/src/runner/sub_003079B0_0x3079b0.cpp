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

// Function: sub_003079B0
// Address: 0x3079b0 - 0x307b30
void sub_003079B0_0x3079b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003079B0_0x3079b0");
#endif

    switch (ctx->pc) {
        case 0x3079f4u: goto label_3079f4;
        case 0x3079fcu: goto label_3079fc;
        case 0x307a10u: goto label_307a10;
        case 0x307a3cu: goto label_307a3c;
        case 0x307a68u: goto label_307a68;
        case 0x307a90u: goto label_307a90;
        case 0x307ad0u: goto label_307ad0;
        case 0x307ae0u: goto label_307ae0;
        case 0x307af0u: goto label_307af0;
        case 0x307b04u: goto label_307b04;
        default: break;
    }

    ctx->pc = 0x3079b0u;

    // 0x3079b0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x3079b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x3079b4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x3079b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x3079b8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x3079b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x3079bc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3079bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x3079c0: 0x120b02d  daddu       $s6, $t1, $zero
    ctx->pc = 0x3079c0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3079c4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3079c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x3079c8: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x3079c8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3079cc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3079ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3079d0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x3079d0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3079d4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3079d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3079d8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x3079d8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3079dc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3079dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3079e0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x3079e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3079e4: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x3079e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3079e8: 0x27a4008c  addiu       $a0, $sp, 0x8C
    ctx->pc = 0x3079e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
    // 0x3079ec: 0xc09d4d4  jal         func_275350
    ctx->pc = 0x3079ECu;
    SET_GPR_U32(ctx, 31, 0x3079F4u);
    ctx->pc = 0x3079F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3079ECu;
    // 0x3079f0: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275350u, 0x3079ECu, 0x3079F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3079F4u;
label_3079f4:
    // 0x3079f4: 0xc0741a4  jal         func_1D0690
    ctx->pc = 0x3079F4u;
    SET_GPR_U32(ctx, 31, 0x3079FCu);
    ctx->pc = 0x3079F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3079F4u;
    // 0x3079f8: 0x24040390  addiu       $a0, $zero, 0x390 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0690u, 0x3079F4u, 0x3079FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3079FCu;
label_3079fc:
    // 0x3079fc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3079fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307a00: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x307A00u;
    {
        const bool branch_taken_0x307a00 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x307A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307A00u;
        // 0x307a04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307a00) {
            ctx->pc = 0x307A40u;
            goto label_307a40;
        }
    }
    ctx->pc = 0x307A08u;
    // 0x307a08: 0xc096b00  jal         func_25AC00
    ctx->pc = 0x307A08u;
    SET_GPR_U32(ctx, 31, 0x307A10u);
    ctx->pc = 0x25AC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AC00u, 0x307A08u, 0x307A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307A10u;
label_307a10:
    // 0x307a10: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x307a10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x307a14: 0x3c050030  lui         $a1, 0x30
    ctx->pc = 0x307a14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48 << 16));
    // 0x307a18: 0x244282f0  addiu       $v0, $v0, -0x7D10
    ctx->pc = 0x307a18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935280));
    // 0x307a1c: 0x3c060030  lui         $a2, 0x30
    ctx->pc = 0x307a1cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)48 << 16));
    // 0x307a20: 0x26040070  addiu       $a0, $s0, 0x70
    ctx->pc = 0x307a20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x307a24: 0xae020034  sw          $v0, 0x34($s0)
    ctx->pc = 0x307a24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
    // 0x307a28: 0x24a57b80  addiu       $a1, $a1, 0x7B80
    ctx->pc = 0x307a28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31616));
    // 0x307a2c: 0x24c67b30  addiu       $a2, $a2, 0x7B30
    ctx->pc = 0x307a2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 31536));
    // 0x307a30: 0x24070030  addiu       $a3, $zero, 0x30
    ctx->pc = 0x307a30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x307a34: 0xc0400fc  jal         func_1003F0
    ctx->pc = 0x307A34u;
    SET_GPR_U32(ctx, 31, 0x307A3Cu);
    ctx->pc = 0x307A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307A34u;
    // 0x307a38: 0x24080010  addiu       $t0, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1003F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1003F0u, 0x307A34u, 0x307A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307A3Cu;
label_307a3c:
    // 0x307a3c: 0x0  nop
    ctx->pc = 0x307a3cu;
    // NOP
label_307a40:
    // 0x307a40: 0x1200002d  beqz        $s0, . + 4 + (0x2D << 2)
    ctx->pc = 0x307A40u;
    {
        const bool branch_taken_0x307a40 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x307A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307A40u;
        // 0x307a44: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307a40) {
            ctx->pc = 0x307AF8u;
            goto label_307af8;
        }
    }
    ctx->pc = 0x307A48u;
    // 0x307a48: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x307a48u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307a4c: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x307a4cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307a50: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x307a50u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307a54: 0x2c0582d  daddu       $t3, $s6, $zero
    ctx->pc = 0x307a54u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307a58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x307a58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307a5c: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x307a5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x307a60: 0xc096b38  jal         func_25ACE0
    ctx->pc = 0x307A60u;
    SET_GPR_U32(ctx, 31, 0x307A68u);
    ctx->pc = 0x307A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307A60u;
    // 0x307a64: 0x24060009  addiu       $a2, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25ACE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25ACE0u, 0x307A60u, 0x307A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307A68u;
label_307a68:
    // 0x307a68: 0xa600005a  sh          $zero, 0x5A($s0)
    ctx->pc = 0x307a68u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 90), (uint16_t)GPR_U32(ctx, 0));
    // 0x307a6c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x307a6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307a70: 0xa6000058  sh          $zero, 0x58($s0)
    ctx->pc = 0x307a70u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 88), (uint16_t)GPR_U32(ctx, 0));
    // 0x307a74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x307a74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307a78: 0xa6000056  sh          $zero, 0x56($s0)
    ctx->pc = 0x307a78u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 86), (uint16_t)GPR_U32(ctx, 0));
    // 0x307a7c: 0xa2000051  sb          $zero, 0x51($s0)
    ctx->pc = 0x307a7cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 81), (uint8_t)GPR_U32(ctx, 0));
    // 0x307a80: 0xae000370  sw          $zero, 0x370($s0)
    ctx->pc = 0x307a80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 880), GPR_U32(ctx, 0));
    // 0x307a84: 0xa2150374  sb          $s5, 0x374($s0)
    ctx->pc = 0x307a84u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 884), (uint8_t)GPR_U32(ctx, 21));
    // 0x307a88: 0x24037ffe  addiu       $v1, $zero, 0x7FFE
    ctx->pc = 0x307a88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
    // 0x307a8c: 0x0  nop
    ctx->pc = 0x307a8cu;
    // NOP
label_307a90:
    // 0x307a90: 0xa4830090  sh          $v1, 0x90($a0)
    ctx->pc = 0x307a90u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 144), (uint16_t)GPR_U32(ctx, 3));
    // 0x307a94: 0xa48300c0  sh          $v1, 0xC0($a0)
    ctx->pc = 0x307a94u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 192), (uint16_t)GPR_U32(ctx, 3));
    // 0x307a98: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x307a98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x307a9c: 0xa48300f0  sh          $v1, 0xF0($a0)
    ctx->pc = 0x307a9cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 240), (uint16_t)GPR_U32(ctx, 3));
    // 0x307aa0: 0x28a20010  slti        $v0, $a1, 0x10
    ctx->pc = 0x307aa0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x307aa4: 0xa4830120  sh          $v1, 0x120($a0)
    ctx->pc = 0x307aa4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 288), (uint16_t)GPR_U32(ctx, 3));
    // 0x307aa8: 0xa4830150  sh          $v1, 0x150($a0)
    ctx->pc = 0x307aa8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 336), (uint16_t)GPR_U32(ctx, 3));
    // 0x307aac: 0xa4830180  sh          $v1, 0x180($a0)
    ctx->pc = 0x307aacu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 384), (uint16_t)GPR_U32(ctx, 3));
    // 0x307ab0: 0xa48301b0  sh          $v1, 0x1B0($a0)
    ctx->pc = 0x307ab0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 432), (uint16_t)GPR_U32(ctx, 3));
    // 0x307ab4: 0xa48301e0  sh          $v1, 0x1E0($a0)
    ctx->pc = 0x307ab4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 480), (uint16_t)GPR_U32(ctx, 3));
    // 0x307ab8: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x307AB8u;
    {
        const bool branch_taken_0x307ab8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x307ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307AB8u;
        // 0x307abc: 0x24840180  addiu       $a0, $a0, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307ab8) {
            ctx->pc = 0x307A90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_307a90;
        }
    }
    ctx->pc = 0x307AC0u;
    // 0x307ac0: 0x938582b0  lbu         $a1, -0x7D50($gp)
    ctx->pc = 0x307ac0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935216)));
    // 0x307ac4: 0x938682b1  lbu         $a2, -0x7D4F($gp)
    ctx->pc = 0x307ac4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935217)));
    // 0x307ac8: 0xc074350  jal         func_1D0D40
    ctx->pc = 0x307AC8u;
    SET_GPR_U32(ctx, 31, 0x307AD0u);
    ctx->pc = 0x307ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307AC8u;
    // 0x307acc: 0x26040378  addiu       $a0, $s0, 0x378 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 888));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0D40u, 0x307AC8u, 0x307AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307AD0u;
label_307ad0:
    // 0x307ad0: 0x93858adc  lbu         $a1, -0x7524($gp)
    ctx->pc = 0x307ad0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937308)));
    // 0x307ad4: 0x93868add  lbu         $a2, -0x7523($gp)
    ctx->pc = 0x307ad4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937309)));
    // 0x307ad8: 0xc074378  jal         func_1D0DE0
    ctx->pc = 0x307AD8u;
    SET_GPR_U32(ctx, 31, 0x307AE0u);
    ctx->pc = 0x307ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307AD8u;
    // 0x307adc: 0x26040378  addiu       $a0, $s0, 0x378 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 888));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0DE0u, 0x307AD8u, 0x307AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307AE0u;
label_307ae0:
    // 0x307ae0: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x307ae0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x307ae4: 0x27a4008c  addiu       $a0, $sp, 0x8C
    ctx->pc = 0x307ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
    // 0x307ae8: 0xc09d4d8  jal         func_275360
    ctx->pc = 0x307AE8u;
    SET_GPR_U32(ctx, 31, 0x307AF0u);
    ctx->pc = 0x307AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307AE8u;
    // 0x307aec: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275360u, 0x307AE8u, 0x307AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307AF0u;
label_307af0:
    // 0x307af0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x307AF0u;
    {
        const bool branch_taken_0x307af0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x307AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307AF0u;
        // 0x307af4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307af0) {
            ctx->pc = 0x307B08u;
            goto label_307b08;
        }
    }
    ctx->pc = 0x307AF8u;
label_307af8:
    // 0x307af8: 0x27a4008c  addiu       $a0, $sp, 0x8C
    ctx->pc = 0x307af8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
    // 0x307afc: 0xc09d4d8  jal         func_275360
    ctx->pc = 0x307AFCu;
    SET_GPR_U32(ctx, 31, 0x307B04u);
    ctx->pc = 0x307B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307AFCu;
    // 0x307b00: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275360u, 0x307AFCu, 0x307B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307B04u;
label_307b04:
    // 0x307b04: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x307b04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_307b08:
    // 0x307b08: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x307b08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x307b0c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x307b0cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x307b10: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x307b10u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x307b14: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x307b14u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x307b18: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x307b18u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x307b1c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x307b1cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x307b20: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x307b20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x307b24: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x307b24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x307b28: 0x3e00008  jr          $ra
    ctx->pc = 0x307B28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x307B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307B28u;
        // 0x307b2c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x307B28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x307B30u;
}
