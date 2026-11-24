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

// Function: sub_003BADE0
// Address: 0x3bade0 - 0x3bb454
void sub_003BADE0_0x3bade0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BADE0_0x3bade0");
#endif

    switch (ctx->pc) {
        case 0x3bae30u: goto label_3bae30;
        case 0x3bae40u: goto label_3bae40;
        case 0x3bae4cu: goto label_3bae4c;
        case 0x3bae9cu: goto label_3bae9c;
        case 0x3baebcu: goto label_3baebc;
        case 0x3baf08u: goto label_3baf08;
        case 0x3baf24u: goto label_3baf24;
        case 0x3baf6cu: goto label_3baf6c;
        case 0x3baf9cu: goto label_3baf9c;
        case 0x3bafa8u: goto label_3bafa8;
        case 0x3bafc8u: goto label_3bafc8;
        case 0x3baff0u: goto label_3baff0;
        case 0x3bb008u: goto label_3bb008;
        case 0x3bb0c0u: goto label_3bb0c0;
        case 0x3bb0ecu: goto label_3bb0ec;
        case 0x3bb104u: goto label_3bb104;
        case 0x3bb138u: goto label_3bb138;
        case 0x3bb174u: goto label_3bb174;
        case 0x3bb1a0u: goto label_3bb1a0;
        case 0x3bb248u: goto label_3bb248;
        case 0x3bb344u: goto label_3bb344;
        case 0x3bb3c0u: goto label_3bb3c0;
        case 0x3bb3e0u: goto label_3bb3e0;
        default: break;
    }

    ctx->pc = 0x3bade0u;

    // 0x3bade0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3bade0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3bade4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3bade4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3bade8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3bade8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3badec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3badecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3badf0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3badf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3badf4: 0x90860821  lbu         $a2, 0x821($a0)
    ctx->pc = 0x3badf4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2081)));
    // 0x3badf8: 0x8c900860  lw          $s0, 0x860($a0)
    ctx->pc = 0x3badf8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2144)));
    // 0x3badfc: 0x10c300e4  beq         $a2, $v1, . + 4 + (0xE4 << 2)
    ctx->pc = 0x3BADFCu;
    {
        const bool branch_taken_0x3badfc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x3BAE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BADFCu;
        // 0x3bae00: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3badfc) {
            ctx->pc = 0x3BB190u;
            goto label_3bb190;
        }
    }
    ctx->pc = 0x3BAE04u;
    // 0x3bae04: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3bae04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3bae08: 0x10c5003d  beq         $a2, $a1, . + 4 + (0x3D << 2)
    ctx->pc = 0x3BAE08u;
    {
        const bool branch_taken_0x3bae08 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        ctx->pc = 0x3BAE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BAE08u;
        // 0x3bae0c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bae08) {
            ctx->pc = 0x3BAF00u;
            goto label_3baf00;
        }
    }
    ctx->pc = 0x3BAE10u;
    // 0x3bae10: 0x10c3001b  beq         $a2, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x3BAE10u;
    {
        const bool branch_taken_0x3bae10 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x3bae10) {
            ctx->pc = 0x3BAE80u;
            goto label_3bae80;
        }
    }
    ctx->pc = 0x3BAE18u;
    // 0x3bae18: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x3BAE18u;
    {
        const bool branch_taken_0x3bae18 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bae18) {
            ctx->pc = 0x3BAE28u;
            goto label_3bae28;
        }
    }
    ctx->pc = 0x3BAE20u;
    // 0x3bae20: 0x10000175  b           . + 4 + (0x175 << 2)
    ctx->pc = 0x3BAE20u;
    {
        const bool branch_taken_0x3bae20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bae20) {
            ctx->pc = 0x3BB3F8u;
            goto label_3bb3f8;
        }
    }
    ctx->pc = 0x3BAE28u;
label_3bae28:
    // 0x3bae28: 0xc096fb8  jal         func_25BEE0
    ctx->pc = 0x3BAE28u;
    SET_GPR_U32(ctx, 31, 0x3BAE30u);
    ctx->pc = 0x25BEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BEE0u, 0x3BAE28u, 0x3BAE30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BAE30u;
label_3bae30:
    // 0x3bae30: 0x922508e8  lbu         $a1, 0x8E8($s1)
    ctx->pc = 0x3bae30u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2280)));
    // 0x3bae34: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3bae34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bae38: 0xc0aa0f0  jal         func_2A83C0
    ctx->pc = 0x3BAE38u;
    SET_GPR_U32(ctx, 31, 0x3BAE40u);
    ctx->pc = 0x3BAE3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BAE38u;
    // 0x3bae3c: 0x26060020  addiu       $a2, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A83C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A83C0u, 0x3BAE38u, 0x3BAE40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BAE40u;
label_3bae40:
    // 0x3bae40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3bae40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bae44: 0xc0f1a18  jal         func_3C6860
    ctx->pc = 0x3BAE44u;
    SET_GPR_U32(ctx, 31, 0x3BAE4Cu);
    ctx->pc = 0x3BAE48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BAE44u;
    // 0x3bae48: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C6860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C6860u, 0x3BAE44u, 0x3BAE4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BAE4Cu;
label_3bae4c:
    // 0x3bae4c: 0xa22007f6  sb          $zero, 0x7F6($s1)
    ctx->pc = 0x3bae4cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x3bae50: 0x3c038004  lui         $v1, 0x8004
    ctx->pc = 0x3bae50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32772 << 16));
    // 0x3bae54: 0x24040057  addiu       $a0, $zero, 0x57
    ctx->pc = 0x3bae54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 87));
    // 0x3bae58: 0xa22007f4  sb          $zero, 0x7F4($s1)
    ctx->pc = 0x3bae58u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x3bae5c: 0xa62407f2  sh          $a0, 0x7F2($s1)
    ctx->pc = 0x3bae5cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2034), (uint16_t)GPR_U32(ctx, 4));
    // 0x3bae60: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x3bae60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x3bae64: 0xa22007f5  sb          $zero, 0x7F5($s1)
    ctx->pc = 0x3bae64u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2037), (uint8_t)GPR_U32(ctx, 0));
    // 0x3bae68: 0xae2307ec  sw          $v1, 0x7EC($s1)
    ctx->pc = 0x3bae68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2028), GPR_U32(ctx, 3));
    // 0x3bae6c: 0xa620082a  sh          $zero, 0x82A($s1)
    ctx->pc = 0x3bae6cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2090), (uint16_t)GPR_U32(ctx, 0));
    // 0x3bae70: 0x92230821  lbu         $v1, 0x821($s1)
    ctx->pc = 0x3bae70u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2081)));
    // 0x3bae74: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3bae74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3bae78: 0x1000015f  b           . + 4 + (0x15F << 2)
    ctx->pc = 0x3BAE78u;
    {
        const bool branch_taken_0x3bae78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BAE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BAE78u;
        // 0x3bae7c: 0xa2230821  sb          $v1, 0x821($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bae78) {
            ctx->pc = 0x3BB3F8u;
            goto label_3bb3f8;
        }
    }
    ctx->pc = 0x3BAE80u;
label_3bae80:
    // 0x3bae80: 0x8e230054  lw          $v1, 0x54($s1)
    ctx->pc = 0x3bae80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x3bae84: 0x946300c4  lhu         $v1, 0xC4($v1)
    ctx->pc = 0x3bae84u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 196)));
    // 0x3bae88: 0x28610022  slti        $at, $v1, 0x22
    ctx->pc = 0x3bae88u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)34) ? 1 : 0);
    // 0x3bae8c: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x3BAE8Cu;
    {
        const bool branch_taken_0x3bae8c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BAE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BAE8Cu;
        // 0x3bae90: 0x240500aa  addiu       $a1, $zero, 0xAA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 170));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bae8c) {
            ctx->pc = 0x3BAEA8u;
            goto label_3baea8;
        }
    }
    ctx->pc = 0x3BAE94u;
    // 0x3bae94: 0xc0ef2e4  jal         func_3BCB90
    ctx->pc = 0x3BAE94u;
    SET_GPR_U32(ctx, 31, 0x3BAE9Cu);
    ctx->pc = 0x3BCB90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BCB90u, 0x3BAE94u, 0x3BAE9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BAE9Cu;
label_3bae9c:
    // 0x3bae9c: 0x10000156  b           . + 4 + (0x156 << 2)
    ctx->pc = 0x3BAE9Cu;
    {
        const bool branch_taken_0x3bae9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bae9c) {
            ctx->pc = 0x3BB3F8u;
            goto label_3bb3f8;
        }
    }
    ctx->pc = 0x3BAEA4u;
    // 0x3baea4: 0x0  nop
    ctx->pc = 0x3baea4u;
    // NOP
label_3baea8:
    // 0x3baea8: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3BAEA8u;
    {
        const bool branch_taken_0x3baea8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3baea8) {
            ctx->pc = 0x3BAEC0u;
            goto label_3baec0;
        }
    }
    ctx->pc = 0x3BAEB0u;
    // 0x3baeb0: 0x8e2507c0  lw          $a1, 0x7C0($s1)
    ctx->pc = 0x3baeb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1984)));
    // 0x3baeb4: 0xc0f15ec  jal         func_3C57B0
    ctx->pc = 0x3BAEB4u;
    SET_GPR_U32(ctx, 31, 0x3BAEBCu);
    ctx->pc = 0x3BAEB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BAEB4u;
    // 0x3baeb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C57B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C57B0u, 0x3BAEB4u, 0x3BAEBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BAEBCu;
label_3baebc:
    // 0x3baebc: 0x0  nop
    ctx->pc = 0x3baebcu;
    // NOP
label_3baec0:
    // 0x3baec0: 0x9624082a  lhu         $a0, 0x82A($s1)
    ctx->pc = 0x3baec0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2090)));
    // 0x3baec4: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x3baec4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x3baec8: 0x2463e0d0  addiu       $v1, $v1, -0x1F30
    ctx->pc = 0x3baec8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959312));
    // 0x3baecc: 0x34840001  ori         $a0, $a0, 0x1
    ctx->pc = 0x3baeccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1);
    // 0x3baed0: 0xa624082a  sh          $a0, 0x82A($s1)
    ctx->pc = 0x3baed0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2090), (uint16_t)GPR_U32(ctx, 4));
    // 0x3baed4: 0x92240821  lbu         $a0, 0x821($s1)
    ctx->pc = 0x3baed4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2081)));
    // 0x3baed8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3baed8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3baedc: 0xa2240821  sb          $a0, 0x821($s1)
    ctx->pc = 0x3baedcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2081), (uint8_t)GPR_U32(ctx, 4));
    // 0x3baee0: 0xa6200826  sh          $zero, 0x826($s1)
    ctx->pc = 0x3baee0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2086), (uint16_t)GPR_U32(ctx, 0));
    // 0x3baee4: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x3baee4u;
    { uint32_t bits = FAST_READ32(0x65E0D0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3baee8: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x3baee8u;
    { uint32_t bits = FAST_READ32(0x65E0D4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3baeec: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x3baeecu;
    { uint32_t bits = FAST_READ32(0x65E0D8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3baef0: 0xe62206a0  swc1        $f2, 0x6A0($s1)
    ctx->pc = 0x3baef0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1696), bits); }
    // 0x3baef4: 0xe62106a4  swc1        $f1, 0x6A4($s1)
    ctx->pc = 0x3baef4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1700), bits); }
    // 0x3baef8: 0x1000013f  b           . + 4 + (0x13F << 2)
    ctx->pc = 0x3BAEF8u;
    {
        const bool branch_taken_0x3baef8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BAEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BAEF8u;
        // 0x3baefc: 0xe62006a8  swc1        $f0, 0x6A8($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1704), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3baef8) {
            ctx->pc = 0x3BB3F8u;
            goto label_3bb3f8;
        }
    }
    ctx->pc = 0x3BAF00u;
label_3baf00:
    // 0x3baf00: 0xc0eeb10  jal         func_3BAC40
    ctx->pc = 0x3BAF00u;
    SET_GPR_U32(ctx, 31, 0x3BAF08u);
    ctx->pc = 0x3BAF04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BAF00u;
    // 0x3baf04: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BAC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BAC40u, 0x3BAF00u, 0x3BAF08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BAF08u;
label_3baf08:
    // 0x3baf08: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x3baf08u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3baf0c: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3BAF0Cu;
    {
        const bool branch_taken_0x3baf0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BAF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BAF0Cu;
        // 0x3baf10: 0x306400ff  andi        $a0, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3baf0c) {
            ctx->pc = 0x3BAF2Cu;
            goto label_3baf2c;
        }
    }
    ctx->pc = 0x3BAF14u;
    // 0x3baf14: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3baf14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3baf18: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3baf18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3baf1c: 0xc0eeb10  jal         func_3BAC40
    ctx->pc = 0x3BAF1Cu;
    SET_GPR_U32(ctx, 31, 0x3BAF24u);
    ctx->pc = 0x3BAF20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BAF1Cu;
    // 0x3baf20: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BAC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BAC40u, 0x3BAF1Cu, 0x3BAF24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BAF24u;
label_3baf24:
    // 0x3baf24: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x3baf24u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3baf28: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x3baf28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_3baf2c:
    // 0x3baf2c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3BAF2Cu;
    {
        const bool branch_taken_0x3baf2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3baf2c) {
            ctx->pc = 0x3BAF40u;
            goto label_3baf40;
        }
    }
    ctx->pc = 0x3BAF34u;
    // 0x3baf34: 0x96230826  lhu         $v1, 0x826($s1)
    ctx->pc = 0x3baf34u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2086)));
    // 0x3baf38: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3baf38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3baf3c: 0xa6230826  sh          $v1, 0x826($s1)
    ctx->pc = 0x3baf3cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2086), (uint16_t)GPR_U32(ctx, 3));
label_3baf40:
    // 0x3baf40: 0x9623082a  lhu         $v1, 0x82A($s1)
    ctx->pc = 0x3baf40u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2090)));
    // 0x3baf44: 0x30630006  andi        $v1, $v1, 0x6
    ctx->pc = 0x3baf44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)6);
    // 0x3baf48: 0x1460002b  bnez        $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x3BAF48u;
    {
        const bool branch_taken_0x3baf48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3baf48) {
            ctx->pc = 0x3BAFF8u;
            goto label_3baff8;
        }
    }
    ctx->pc = 0x3BAF50u;
    // 0x3baf50: 0x10800057  beqz        $a0, . + 4 + (0x57 << 2)
    ctx->pc = 0x3BAF50u;
    {
        const bool branch_taken_0x3baf50 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BAF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BAF50u;
        // 0x3baf54: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3baf50) {
            ctx->pc = 0x3BB0B0u;
            goto label_3bb0b0;
        }
    }
    ctx->pc = 0x3BAF58u;
    // 0x3baf58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3baf58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3baf5c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3baf5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3baf60: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3baf60u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3baf64: 0xc0eeb34  jal         func_3BACD0
    ctx->pc = 0x3BAF64u;
    SET_GPR_U32(ctx, 31, 0x3BAF6Cu);
    ctx->pc = 0x3BAF68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BAF64u;
    // 0x3baf68: 0xc0402d  daddu       $t0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BACD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BACD0u, 0x3BAF64u, 0x3BAF6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BAF6Cu;
label_3baf6c:
    // 0x3baf6c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x3BAF6Cu;
    {
        const bool branch_taken_0x3baf6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3baf6c) {
            ctx->pc = 0x3BAFB0u;
            goto label_3bafb0;
        }
    }
    ctx->pc = 0x3BAF74u;
    // 0x3baf74: 0x9623082a  lhu         $v1, 0x82A($s1)
    ctx->pc = 0x3baf74u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2090)));
    // 0x3baf78: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3baf78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3baf7c: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x3baf7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x3baf80: 0xa623082a  sh          $v1, 0x82A($s1)
    ctx->pc = 0x3baf80u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2090), (uint16_t)GPR_U32(ctx, 3));
    // 0x3baf84: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x3baf84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x3baf88: 0xae2207c0  sw          $v0, 0x7C0($s1)
    ctx->pc = 0x3baf88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1984), GPR_U32(ctx, 2));
    // 0x3baf8c: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x3baf8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3baf90: 0x8e070004  lw          $a3, 0x4($s0)
    ctx->pc = 0x3baf90u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3baf94: 0xc0a5564  jal         func_295590
    ctx->pc = 0x3BAF94u;
    SET_GPR_U32(ctx, 31, 0x3BAF9Cu);
    ctx->pc = 0x3BAF98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BAF94u;
    // 0x3baf98: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295590u, 0x3BAF94u, 0x3BAF9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BAF9Cu;
label_3baf9c:
    // 0x3baf9c: 0x8e2507c0  lw          $a1, 0x7C0($s1)
    ctx->pc = 0x3baf9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1984)));
    // 0x3bafa0: 0xc0f15f4  jal         func_3C57D0
    ctx->pc = 0x3BAFA0u;
    SET_GPR_U32(ctx, 31, 0x3BAFA8u);
    ctx->pc = 0x3BAFA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BAFA0u;
    // 0x3bafa4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C57D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C57D0u, 0x3BAFA0u, 0x3BAFA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BAFA8u;
label_3bafa8:
    // 0x3bafa8: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x3BAFA8u;
    {
        const bool branch_taken_0x3bafa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bafa8) {
            ctx->pc = 0x3BB0B0u;
            goto label_3bb0b0;
        }
    }
    ctx->pc = 0x3BAFB0u;
label_3bafb0:
    // 0x3bafb0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3bafb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3bafb4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3bafb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bafb8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3bafb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3bafbc: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x3bafbcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bafc0: 0xc0eeb34  jal         func_3BACD0
    ctx->pc = 0x3BAFC0u;
    SET_GPR_U32(ctx, 31, 0x3BAFC8u);
    ctx->pc = 0x3BAFC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BAFC0u;
    // 0x3bafc4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BACD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BACD0u, 0x3BAFC0u, 0x3BAFC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BAFC8u;
label_3bafc8:
    // 0x3bafc8: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x3BAFC8u;
    {
        const bool branch_taken_0x3bafc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bafc8) {
            ctx->pc = 0x3BB0B0u;
            goto label_3bb0b0;
        }
    }
    ctx->pc = 0x3BAFD0u;
    // 0x3bafd0: 0x9623082a  lhu         $v1, 0x82A($s1)
    ctx->pc = 0x3bafd0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2090)));
    // 0x3bafd4: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x3bafd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x3bafd8: 0xa623082a  sh          $v1, 0x82A($s1)
    ctx->pc = 0x3bafd8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2090), (uint16_t)GPR_U32(ctx, 3));
    // 0x3bafdc: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x3bafdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x3bafe0: 0xae2207c0  sw          $v0, 0x7C0($s1)
    ctx->pc = 0x3bafe0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1984), GPR_U32(ctx, 2));
    // 0x3bafe4: 0x8e2507c0  lw          $a1, 0x7C0($s1)
    ctx->pc = 0x3bafe4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1984)));
    // 0x3bafe8: 0xc0f15f4  jal         func_3C57D0
    ctx->pc = 0x3BAFE8u;
    SET_GPR_U32(ctx, 31, 0x3BAFF0u);
    ctx->pc = 0x3BAFECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BAFE8u;
    // 0x3bafec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C57D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C57D0u, 0x3BAFE8u, 0x3BAFF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BAFF0u;
label_3baff0:
    // 0x3baff0: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x3BAFF0u;
    {
        const bool branch_taken_0x3baff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3baff0) {
            ctx->pc = 0x3BB0B0u;
            goto label_3bb0b0;
        }
    }
    ctx->pc = 0x3BAFF8u;
label_3baff8:
    // 0x3baff8: 0x8e2507c0  lw          $a1, 0x7C0($s1)
    ctx->pc = 0x3baff8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1984)));
    // 0x3baffc: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x3baffcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x3bb000: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x3BB000u;
    SET_GPR_U32(ctx, 31, 0x3BB008u);
    ctx->pc = 0x3BB004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BB000u;
    // 0x3bb004: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x3BB000u, 0x3BB008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BB008u;
label_3bb008:
    // 0x3bb008: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3BB008u;
    {
        const bool branch_taken_0x3bb008 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bb008) {
            ctx->pc = 0x3BB020u;
            goto label_3bb020;
        }
    }
    ctx->pc = 0x3BB010u;
    // 0x3bb010: 0x8c4329c0  lw          $v1, 0x29C0($v0)
    ctx->pc = 0x3bb010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10688)));
    // 0x3bb014: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x3bb014u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3bb018: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3BB018u;
    {
        const bool branch_taken_0x3bb018 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3bb018) {
            ctx->pc = 0x3BB030u;
            goto label_3bb030;
        }
    }
    ctx->pc = 0x3BB020u;
label_3bb020:
    // 0x3bb020: 0x240300f7  addiu       $v1, $zero, 0xF7
    ctx->pc = 0x3bb020u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 247));
    // 0x3bb024: 0x100000f4  b           . + 4 + (0xF4 << 2)
    ctx->pc = 0x3BB024u;
    {
        const bool branch_taken_0x3bb024 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BB028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB024u;
        // 0x3bb028: 0xa2230780  sb          $v1, 0x780($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1920), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb024) {
            ctx->pc = 0x3BB3F8u;
            goto label_3bb3f8;
        }
    }
    ctx->pc = 0x3BB02Cu;
    // 0x3bb02c: 0x0  nop
    ctx->pc = 0x3bb02cu;
    // NOP
label_3bb030:
    // 0x3bb030: 0x9624082a  lhu         $a0, 0x82A($s1)
    ctx->pc = 0x3bb030u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2090)));
    // 0x3bb034: 0x30830002  andi        $v1, $a0, 0x2
    ctx->pc = 0x3bb034u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x3bb038: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3BB038u;
    {
        const bool branch_taken_0x3bb038 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bb038) {
            ctx->pc = 0x3BB058u;
            goto label_3bb058;
        }
    }
    ctx->pc = 0x3BB040u;
    // 0x3bb040: 0x8c4306ac  lw          $v1, 0x6AC($v0)
    ctx->pc = 0x3bb040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1708)));
    // 0x3bb044: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x3bb044u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x3bb048: 0x14600019  bnez        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x3BB048u;
    {
        const bool branch_taken_0x3bb048 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BB04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB048u;
        // 0x3bb04c: 0x240300f7  addiu       $v1, $zero, 0xF7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 247));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb048) {
            ctx->pc = 0x3BB0B0u;
            goto label_3bb0b0;
        }
    }
    ctx->pc = 0x3BB050u;
    // 0x3bb050: 0x100000e9  b           . + 4 + (0xE9 << 2)
    ctx->pc = 0x3BB050u;
    {
        const bool branch_taken_0x3bb050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BB054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB050u;
        // 0x3bb054: 0xa2230780  sb          $v1, 0x780($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1920), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb050) {
            ctx->pc = 0x3BB3F8u;
            goto label_3bb3f8;
        }
    }
    ctx->pc = 0x3BB058u;
label_3bb058:
    // 0x3bb058: 0x30830004  andi        $v1, $a0, 0x4
    ctx->pc = 0x3bb058u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
    // 0x3bb05c: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x3BB05Cu;
    {
        const bool branch_taken_0x3bb05c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bb05c) {
            ctx->pc = 0x3BB0B0u;
            goto label_3bb0b0;
        }
    }
    ctx->pc = 0x3BB064u;
    // 0x3bb064: 0x8c4506ac  lw          $a1, 0x6AC($v0)
    ctx->pc = 0x3bb064u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1708)));
    // 0x3bb068: 0x30a30002  andi        $v1, $a1, 0x2
    ctx->pc = 0x3bb068u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
    // 0x3bb06c: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x3BB06Cu;
    {
        const bool branch_taken_0x3bb06c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BB070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB06Cu;
        // 0x3bb070: 0x30a30004  andi        $v1, $a1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb06c) {
            ctx->pc = 0x3BB098u;
            goto label_3bb098;
        }
    }
    ctx->pc = 0x3BB074u;
    // 0x3bb074: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3BB074u;
    {
        const bool branch_taken_0x3bb074 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3bb074) {
            ctx->pc = 0x3BB098u;
            goto label_3bb098;
        }
    }
    ctx->pc = 0x3BB07Cu;
    // 0x3bb07c: 0x3083fffb  andi        $v1, $a0, 0xFFFB
    ctx->pc = 0x3bb07cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65531);
    // 0x3bb080: 0xa623082a  sh          $v1, 0x82A($s1)
    ctx->pc = 0x3bb080u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2090), (uint16_t)GPR_U32(ctx, 3));
    // 0x3bb084: 0x9623082a  lhu         $v1, 0x82A($s1)
    ctx->pc = 0x3bb084u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2090)));
    // 0x3bb088: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x3bb088u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x3bb08c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3BB08Cu;
    {
        const bool branch_taken_0x3bb08c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BB090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB08Cu;
        // 0x3bb090: 0xa623082a  sh          $v1, 0x82A($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 2090), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb08c) {
            ctx->pc = 0x3BB0B0u;
            goto label_3bb0b0;
        }
    }
    ctx->pc = 0x3BB094u;
    // 0x3bb094: 0x0  nop
    ctx->pc = 0x3bb094u;
    // NOP
label_3bb098:
    // 0x3bb098: 0x30a30004  andi        $v1, $a1, 0x4
    ctx->pc = 0x3bb098u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4);
    // 0x3bb09c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3BB09Cu;
    {
        const bool branch_taken_0x3bb09c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BB0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB09Cu;
        // 0x3bb0a0: 0x240300f7  addiu       $v1, $zero, 0xF7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 247));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb09c) {
            ctx->pc = 0x3BB0B0u;
            goto label_3bb0b0;
        }
    }
    ctx->pc = 0x3BB0A4u;
    // 0x3bb0a4: 0x100000d4  b           . + 4 + (0xD4 << 2)
    ctx->pc = 0x3BB0A4u;
    {
        const bool branch_taken_0x3bb0a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BB0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB0A4u;
        // 0x3bb0a8: 0xa2230780  sb          $v1, 0x780($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1920), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb0a4) {
            ctx->pc = 0x3BB3F8u;
            goto label_3bb3f8;
        }
    }
    ctx->pc = 0x3BB0ACu;
    // 0x3bb0ac: 0x0  nop
    ctx->pc = 0x3bb0acu;
    // NOP
label_3bb0b0:
    // 0x3bb0b0: 0x12000017  beqz        $s0, . + 4 + (0x17 << 2)
    ctx->pc = 0x3BB0B0u;
    {
        const bool branch_taken_0x3bb0b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BB0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB0B0u;
        // 0x3bb0b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb0b0) {
            ctx->pc = 0x3BB110u;
            goto label_3bb110;
        }
    }
    ctx->pc = 0x3BB0B8u;
    // 0x3bb0b8: 0xc0f160c  jal         func_3C5830
    ctx->pc = 0x3BB0B8u;
    SET_GPR_U32(ctx, 31, 0x3BB0C0u);
    ctx->pc = 0x3C5830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C5830u, 0x3BB0B8u, 0x3BB0C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BB0C0u;
label_3bb0c0:
    // 0x3bb0c0: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x3BB0C0u;
    {
        const bool branch_taken_0x3bb0c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3bb0c0) {
            ctx->pc = 0x3BB110u;
            goto label_3bb110;
        }
    }
    ctx->pc = 0x3BB0C8u;
    // 0x3bb0c8: 0x96230826  lhu         $v1, 0x826($s1)
    ctx->pc = 0x3bb0c8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2086)));
    // 0x3bb0cc: 0x28610006  slti        $at, $v1, 0x6
    ctx->pc = 0x3bb0ccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x3bb0d0: 0x1020000f  beqz        $at, . + 4 + (0xF << 2)
    ctx->pc = 0x3BB0D0u;
    {
        const bool branch_taken_0x3bb0d0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BB0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB0D0u;
        // 0x3bb0d4: 0x262401c0  addiu       $a0, $s1, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 448));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb0d0) {
            ctx->pc = 0x3BB110u;
            goto label_3bb110;
        }
    }
    ctx->pc = 0x3BB0D8u;
    // 0x3bb0d8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3bb0d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bb0dc: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x3bb0dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3bb0e0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3bb0e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bb0e4: 0xc09f9a4  jal         func_27E690
    ctx->pc = 0x3BB0E4u;
    SET_GPR_U32(ctx, 31, 0x3BB0ECu);
    ctx->pc = 0x3BB0E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BB0E4u;
    // 0x3bb0e8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27E690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27E690u, 0x3BB0E4u, 0x3BB0ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BB0ECu;
label_3bb0ec:
    // 0x3bb0ec: 0x262401c0  addiu       $a0, $s1, 0x1C0
    ctx->pc = 0x3bb0ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 448));
    // 0x3bb0f0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3bb0f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bb0f4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x3bb0f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3bb0f8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3bb0f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3bb0fc: 0xc09f9a4  jal         func_27E690
    ctx->pc = 0x3BB0FCu;
    SET_GPR_U32(ctx, 31, 0x3BB104u);
    ctx->pc = 0x3BB100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BB0FCu;
    // 0x3bb100: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27E690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27E690u, 0x3BB0FCu, 0x3BB104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BB104u;
label_3bb104:
    // 0x3bb104: 0x100000bc  b           . + 4 + (0xBC << 2)
    ctx->pc = 0x3BB104u;
    {
        const bool branch_taken_0x3bb104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bb104) {
            ctx->pc = 0x3BB3F8u;
            goto label_3bb3f8;
        }
    }
    ctx->pc = 0x3BB10Cu;
    // 0x3bb10c: 0x0  nop
    ctx->pc = 0x3bb10cu;
    // NOP
label_3bb110:
    // 0x3bb110: 0x9623082a  lhu         $v1, 0x82A($s1)
    ctx->pc = 0x3bb110u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2090)));
    // 0x3bb114: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x3bb114u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x3bb118: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3BB118u;
    {
        const bool branch_taken_0x3bb118 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BB11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB118u;
        // 0x3bb11c: 0x240300f7  addiu       $v1, $zero, 0xF7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 247));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb118) {
            ctx->pc = 0x3BB128u;
            goto label_3bb128;
        }
    }
    ctx->pc = 0x3BB120u;
    // 0x3bb120: 0x100000b5  b           . + 4 + (0xB5 << 2)
    ctx->pc = 0x3BB120u;
    {
        const bool branch_taken_0x3bb120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BB124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB120u;
        // 0x3bb124: 0xa2230780  sb          $v1, 0x780($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1920), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb120) {
            ctx->pc = 0x3BB3F8u;
            goto label_3bb3f8;
        }
    }
    ctx->pc = 0x3BB128u;
label_3bb128:
    // 0x3bb128: 0x8e2507c0  lw          $a1, 0x7C0($s1)
    ctx->pc = 0x3bb128u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1984)));
    // 0x3bb12c: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x3bb12cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x3bb130: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x3BB130u;
    SET_GPR_U32(ctx, 31, 0x3BB138u);
    ctx->pc = 0x3BB134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BB130u;
    // 0x3bb134: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x3BB130u, 0x3BB138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BB138u;
label_3bb138:
    // 0x3bb138: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x3BB138u;
    {
        const bool branch_taken_0x3bb138 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bb138) {
            ctx->pc = 0x3BB178u;
            goto label_3bb178;
        }
    }
    ctx->pc = 0x3BB140u;
    // 0x3bb140: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3BB140u;
    {
        const bool branch_taken_0x3bb140 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bb140) {
            ctx->pc = 0x3BB160u;
            goto label_3bb160;
        }
    }
    ctx->pc = 0x3BB148u;
    // 0x3bb148: 0x8c4306ac  lw          $v1, 0x6AC($v0)
    ctx->pc = 0x3bb148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1708)));
    // 0x3bb14c: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x3bb14cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x3bb150: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3BB150u;
    {
        const bool branch_taken_0x3bb150 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BB154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB150u;
        // 0x3bb154: 0x240300f7  addiu       $v1, $zero, 0xF7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 247));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb150) {
            ctx->pc = 0x3BB160u;
            goto label_3bb160;
        }
    }
    ctx->pc = 0x3BB158u;
    // 0x3bb158: 0x100000a7  b           . + 4 + (0xA7 << 2)
    ctx->pc = 0x3BB158u;
    {
        const bool branch_taken_0x3bb158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BB15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB158u;
        // 0x3bb15c: 0xa2230780  sb          $v1, 0x780($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1920), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb158) {
            ctx->pc = 0x3BB3F8u;
            goto label_3bb3f8;
        }
    }
    ctx->pc = 0x3BB160u;
label_3bb160:
    // 0x3bb160: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3BB160u;
    {
        const bool branch_taken_0x3bb160 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bb160) {
            ctx->pc = 0x3BB178u;
            goto label_3bb178;
        }
    }
    ctx->pc = 0x3BB168u;
    // 0x3bb168: 0x8e2507c0  lw          $a1, 0x7C0($s1)
    ctx->pc = 0x3bb168u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1984)));
    // 0x3bb16c: 0xc0f15fc  jal         func_3C57F0
    ctx->pc = 0x3BB16Cu;
    SET_GPR_U32(ctx, 31, 0x3BB174u);
    ctx->pc = 0x3BB170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BB16Cu;
    // 0x3bb170: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C57F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C57F0u, 0x3BB16Cu, 0x3BB174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BB174u;
label_3bb174:
    // 0x3bb174: 0x0  nop
    ctx->pc = 0x3bb174u;
    // NOP
label_3bb178:
    // 0x3bb178: 0xa6202b46  sh          $zero, 0x2B46($s1)
    ctx->pc = 0x3bb178u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 11078), (uint16_t)GPR_U32(ctx, 0));
    // 0x3bb17c: 0xa6200826  sh          $zero, 0x826($s1)
    ctx->pc = 0x3bb17cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2086), (uint16_t)GPR_U32(ctx, 0));
    // 0x3bb180: 0x92220821  lbu         $v0, 0x821($s1)
    ctx->pc = 0x3bb180u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2081)));
    // 0x3bb184: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3bb184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3bb188: 0xa2220821  sb          $v0, 0x821($s1)
    ctx->pc = 0x3bb188u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2081), (uint8_t)GPR_U32(ctx, 2));
    // 0x3bb18c: 0x0  nop
    ctx->pc = 0x3bb18cu;
    // NOP
label_3bb190:
    // 0x3bb190: 0x8e2507c0  lw          $a1, 0x7C0($s1)
    ctx->pc = 0x3bb190u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1984)));
    // 0x3bb194: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x3bb194u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x3bb198: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x3BB198u;
    SET_GPR_U32(ctx, 31, 0x3BB1A0u);
    ctx->pc = 0x3BB19Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BB198u;
    // 0x3bb19c: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x3BB198u, 0x3BB1A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BB1A0u;
label_3bb1a0:
    // 0x3bb1a0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3bb1a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bb1a4: 0x1200001c  beqz        $s0, . + 4 + (0x1C << 2)
    ctx->pc = 0x3BB1A4u;
    {
        const bool branch_taken_0x3bb1a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bb1a4) {
            ctx->pc = 0x3BB218u;
            goto label_3bb218;
        }
    }
    ctx->pc = 0x3BB1ACu;
    // 0x3bb1ac: 0x8e0329c0  lw          $v1, 0x29C0($s0)
    ctx->pc = 0x3bb1acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10688)));
    // 0x3bb1b0: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x3bb1b0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3bb1b4: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3BB1B4u;
    {
        const bool branch_taken_0x3bb1b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bb1b4) {
            ctx->pc = 0x3BB1D0u;
            goto label_3bb1d0;
        }
    }
    ctx->pc = 0x3BB1BCu;
    // 0x3bb1bc: 0x960529de  lhu         $a1, 0x29DE($s0)
    ctx->pc = 0x3bb1bcu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10718)));
    // 0x3bb1c0: 0x30a60010  andi        $a2, $a1, 0x10
    ctx->pc = 0x3bb1c0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16);
    // 0x3bb1c4: 0x14c00006  bnez        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x3BB1C4u;
    {
        const bool branch_taken_0x3bb1c4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x3bb1c4) {
            ctx->pc = 0x3BB1E0u;
            goto label_3bb1e0;
        }
    }
    ctx->pc = 0x3BB1CCu;
    // 0x3bb1cc: 0x0  nop
    ctx->pc = 0x3bb1ccu;
    // NOP
label_3bb1d0:
    // 0x3bb1d0: 0x240300f7  addiu       $v1, $zero, 0xF7
    ctx->pc = 0x3bb1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 247));
    // 0x3bb1d4: 0x10000088  b           . + 4 + (0x88 << 2)
    ctx->pc = 0x3BB1D4u;
    {
        const bool branch_taken_0x3bb1d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BB1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB1D4u;
        // 0x3bb1d8: 0xa2230780  sb          $v1, 0x780($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1920), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb1d4) {
            ctx->pc = 0x3BB3F8u;
            goto label_3bb3f8;
        }
    }
    ctx->pc = 0x3BB1DCu;
    // 0x3bb1dc: 0x0  nop
    ctx->pc = 0x3bb1dcu;
    // NOP
label_3bb1e0:
    // 0x3bb1e0: 0x9204065c  lbu         $a0, 0x65C($s0)
    ctx->pc = 0x3bb1e0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1628)));
    // 0x3bb1e4: 0x2403008a  addiu       $v1, $zero, 0x8A
    ctx->pc = 0x3bb1e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 138));
    // 0x3bb1e8: 0x1083000b  beq         $a0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x3BB1E8u;
    {
        const bool branch_taken_0x3bb1e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x3BB1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB1E8u;
        // 0x3bb1ec: 0x24030082  addiu       $v1, $zero, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb1e8) {
            ctx->pc = 0x3BB218u;
            goto label_3bb218;
        }
    }
    ctx->pc = 0x3BB1F0u;
    // 0x3bb1f0: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3BB1F0u;
    {
        const bool branch_taken_0x3bb1f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3bb1f0) {
            ctx->pc = 0x3BB218u;
            goto label_3bb218;
        }
    }
    ctx->pc = 0x3BB1F8u;
    // 0x3bb1f8: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x3BB1F8u;
    {
        const bool branch_taken_0x3bb1f8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BB1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB1F8u;
        // 0x3bb1fc: 0x30a3ffef  andi        $v1, $a1, 0xFFEF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65519);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb1f8) {
            ctx->pc = 0x3BB208u;
            goto label_3bb208;
        }
    }
    ctx->pc = 0x3BB200u;
    // 0x3bb200: 0xa60329de  sh          $v1, 0x29DE($s0)
    ctx->pc = 0x3bb200u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10718), (uint16_t)GPR_U32(ctx, 3));
    // 0x3bb204: 0x0  nop
    ctx->pc = 0x3bb204u;
    // NOP
label_3bb208:
    // 0x3bb208: 0x240300f7  addiu       $v1, $zero, 0xF7
    ctx->pc = 0x3bb208u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 247));
    // 0x3bb20c: 0x1000007a  b           . + 4 + (0x7A << 2)
    ctx->pc = 0x3BB20Cu;
    {
        const bool branch_taken_0x3bb20c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BB210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB20Cu;
        // 0x3bb210: 0xa2230780  sb          $v1, 0x780($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1920), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb20c) {
            ctx->pc = 0x3BB3F8u;
            goto label_3bb3f8;
        }
    }
    ctx->pc = 0x3BB214u;
    // 0x3bb214: 0x0  nop
    ctx->pc = 0x3bb214u;
    // NOP
label_3bb218:
    // 0x3bb218: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3BB218u;
    {
        const bool branch_taken_0x3bb218 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bb218) {
            ctx->pc = 0x3BB240u;
            goto label_3bb240;
        }
    }
    ctx->pc = 0x3BB220u;
    // 0x3bb220: 0x92040640  lbu         $a0, 0x640($s0)
    ctx->pc = 0x3bb220u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1600)));
    // 0x3bb224: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3bb224u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3bb228: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3BB228u;
    {
        const bool branch_taken_0x3bb228 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3bb228) {
            ctx->pc = 0x3BB240u;
            goto label_3bb240;
        }
    }
    ctx->pc = 0x3BB230u;
    // 0x3bb230: 0xde030500  ld          $v1, 0x500($s0)
    ctx->pc = 0x3bb230u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 1280)));
    // 0x3bb234: 0x30632000  andi        $v1, $v1, 0x2000
    ctx->pc = 0x3bb234u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
    // 0x3bb238: 0x14600013  bnez        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x3BB238u;
    {
        const bool branch_taken_0x3bb238 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3bb238) {
            ctx->pc = 0x3BB288u;
            goto label_3bb288;
        }
    }
    ctx->pc = 0x3BB240u;
label_3bb240:
    // 0x3bb240: 0xc0a6998  jal         func_29A660
    ctx->pc = 0x3BB240u;
    SET_GPR_U32(ctx, 31, 0x3BB248u);
    ctx->pc = 0x3BB244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BB240u;
    // 0x3bb244: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A660u, 0x3BB240u, 0x3BB248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BB248u;
label_3bb248:
    // 0x3bb248: 0x3c032aaa  lui         $v1, 0x2AAA
    ctx->pc = 0x3bb248u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)10922 << 16));
    // 0x3bb24c: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x3bb24cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3bb250: 0x3463aaab  ori         $v1, $v1, 0xAAAB
    ctx->pc = 0x3bb250u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43691);
    // 0x3bb254: 0x42fc2  srl         $a1, $a0, 31
    ctx->pc = 0x3bb254u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x3bb258: 0x640018  mult        $zero, $v1, $a0
    ctx->pc = 0x3bb258u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x3bb25c: 0x0  nop
    ctx->pc = 0x3bb25cu;
    // NOP
    // 0x3bb260: 0x0  nop
    ctx->pc = 0x3bb260u;
    // NOP
    // 0x3bb264: 0x2010  mfhi        $a0
    ctx->pc = 0x3bb264u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x3bb268: 0x96232b46  lhu         $v1, 0x2B46($s1)
    ctx->pc = 0x3bb268u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 11078)));
    // 0x3bb26c: 0x42043  sra         $a0, $a0, 1
    ctx->pc = 0x3bb26cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 1));
    // 0x3bb270: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x3bb270u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x3bb274: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x3bb274u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x3bb278: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x3bb278u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x3bb27c: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x3bb27cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x3bb280: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x3BB280u;
    {
        const bool branch_taken_0x3bb280 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bb280) {
            ctx->pc = 0x3BB2B0u;
            goto label_3bb2b0;
        }
    }
    ctx->pc = 0x3BB288u;
label_3bb288:
    // 0x3bb288: 0x960429de  lhu         $a0, 0x29DE($s0)
    ctx->pc = 0x3bb288u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10718)));
    // 0x3bb28c: 0x30830010  andi        $v1, $a0, 0x10
    ctx->pc = 0x3bb28cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16);
    // 0x3bb290: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3BB290u;
    {
        const bool branch_taken_0x3bb290 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BB294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB290u;
        // 0x3bb294: 0x3083ffef  andi        $v1, $a0, 0xFFEF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65519);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb290) {
            ctx->pc = 0x3BB2A0u;
            goto label_3bb2a0;
        }
    }
    ctx->pc = 0x3BB298u;
    // 0x3bb298: 0xa60329de  sh          $v1, 0x29DE($s0)
    ctx->pc = 0x3bb298u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10718), (uint16_t)GPR_U32(ctx, 3));
    // 0x3bb29c: 0x0  nop
    ctx->pc = 0x3bb29cu;
    // NOP
label_3bb2a0:
    // 0x3bb2a0: 0x240300f7  addiu       $v1, $zero, 0xF7
    ctx->pc = 0x3bb2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 247));
    // 0x3bb2a4: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x3BB2A4u;
    {
        const bool branch_taken_0x3bb2a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BB2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB2A4u;
        // 0x3bb2a8: 0xa2230780  sb          $v1, 0x780($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1920), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb2a4) {
            ctx->pc = 0x3BB3F8u;
            goto label_3bb3f8;
        }
    }
    ctx->pc = 0x3BB2ACu;
    // 0x3bb2ac: 0x0  nop
    ctx->pc = 0x3bb2acu;
    // NOP
label_3bb2b0:
    // 0x3bb2b0: 0x3c034370  lui         $v1, 0x4370
    ctx->pc = 0x3bb2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17264 << 16));
    // 0x3bb2b4: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x3bb2b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3bb2b8: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x3bb2b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3bb2bc: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x3bb2bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x3bb2c0: 0x34648889  ori         $a0, $v1, 0x8889
    ctx->pc = 0x3bb2c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x3bb2c4: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x3bb2c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x3bb2c8: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3bb2c8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x3bb2cc: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x3bb2ccu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3bb2d0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3bb2d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3bb2d4: 0x0  nop
    ctx->pc = 0x3bb2d4u;
    // NOP
    // 0x3bb2d8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3bb2d8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3bb2dc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3bb2dcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3bb2e0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3BB2E0u;
    {
        const bool branch_taken_0x3bb2e0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3BB2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB2E0u;
        // 0x3bb2e4: 0x96250826  lhu         $a1, 0x826($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2086)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb2e0) {
            ctx->pc = 0x3BB2F8u;
            goto label_3bb2f8;
        }
    }
    ctx->pc = 0x3BB2E8u;
    // 0x3bb2e8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3bb2e8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3bb2ec: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3bb2ecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3bb2f0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3BB2F0u;
    {
        const bool branch_taken_0x3bb2f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BB2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB2F0u;
        // 0x3bb2f4: 0xa4082b  sltu        $at, $a1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb2f0) {
            ctx->pc = 0x3BB314u;
            goto label_3bb314;
        }
    }
    ctx->pc = 0x3BB2F8u;
label_3bb2f8:
    // 0x3bb2f8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3bb2f8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3bb2fc: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3bb2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3bb300: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3bb300u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3bb304: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3bb304u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3bb308: 0x0  nop
    ctx->pc = 0x3bb308u;
    // NOP
    // 0x3bb30c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3bb30cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3bb310: 0xa4082b  sltu        $at, $a1, $a0
    ctx->pc = 0x3bb310u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_3bb314:
    // 0x3bb314: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x3BB314u;
    {
        const bool branch_taken_0x3bb314 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bb314) {
            ctx->pc = 0x3BB358u;
            goto label_3bb358;
        }
    }
    ctx->pc = 0x3BB31Cu;
    // 0x3bb31c: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3BB31Cu;
    {
        const bool branch_taken_0x3bb31c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bb31c) {
            ctx->pc = 0x3BB330u;
            goto label_3bb330;
        }
    }
    ctx->pc = 0x3BB324u;
    // 0x3bb324: 0x92222b4b  lbu         $v0, 0x2B4B($s1)
    ctx->pc = 0x3bb324u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 11083)));
    // 0x3bb328: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x3bb328u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x3bb32c: 0xa2222b4b  sb          $v0, 0x2B4B($s1)
    ctx->pc = 0x3bb32cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11083), (uint8_t)GPR_U32(ctx, 2));
label_3bb330:
    // 0x3bb330: 0x262401c0  addiu       $a0, $s1, 0x1C0
    ctx->pc = 0x3bb330u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 448));
    // 0x3bb334: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3bb334u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bb338: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x3bb338u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3bb33c: 0xc09fbec  jal         func_27EFB0
    ctx->pc = 0x3BB33Cu;
    SET_GPR_U32(ctx, 31, 0x3BB344u);
    ctx->pc = 0x3BB340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BB33Cu;
    // 0x3bb340: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27EFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27EFB0u, 0x3BB33Cu, 0x3BB344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BB344u;
label_3bb344:
    // 0x3bb344: 0x96230826  lhu         $v1, 0x826($s1)
    ctx->pc = 0x3bb344u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2086)));
    // 0x3bb348: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3bb348u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3bb34c: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x3BB34Cu;
    {
        const bool branch_taken_0x3bb34c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BB350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB34Cu;
        // 0x3bb350: 0xa6230826  sh          $v1, 0x826($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 2086), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb34c) {
            ctx->pc = 0x3BB3F8u;
            goto label_3bb3f8;
        }
    }
    ctx->pc = 0x3BB354u;
    // 0x3bb354: 0x0  nop
    ctx->pc = 0x3bb354u;
    // NOP
label_3bb358:
    // 0x3bb358: 0x92242b4b  lbu         $a0, 0x2B4B($s1)
    ctx->pc = 0x3bb358u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 11083)));
    // 0x3bb35c: 0x30830010  andi        $v1, $a0, 0x10
    ctx->pc = 0x3bb35cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16);
    // 0x3bb360: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3BB360u;
    {
        const bool branch_taken_0x3bb360 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BB364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB360u;
        // 0x3bb364: 0x308300ef  andi        $v1, $a0, 0xEF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)239);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb360) {
            ctx->pc = 0x3BB370u;
            goto label_3bb370;
        }
    }
    ctx->pc = 0x3BB368u;
    // 0x3bb368: 0xa2232b4b  sb          $v1, 0x2B4B($s1)
    ctx->pc = 0x3bb368u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11083), (uint8_t)GPR_U32(ctx, 3));
    // 0x3bb36c: 0x0  nop
    ctx->pc = 0x3bb36cu;
    // NOP
label_3bb370:
    // 0x3bb370: 0x1200001b  beqz        $s0, . + 4 + (0x1B << 2)
    ctx->pc = 0x3BB370u;
    {
        const bool branch_taken_0x3bb370 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bb370) {
            ctx->pc = 0x3BB3E0u;
            goto label_3bb3e0;
        }
    }
    ctx->pc = 0x3BB378u;
    // 0x3bb378: 0x8e0329c0  lw          $v1, 0x29C0($s0)
    ctx->pc = 0x3bb378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10688)));
    // 0x3bb37c: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x3bb37cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3bb380: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x3BB380u;
    {
        const bool branch_taken_0x3bb380 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bb380) {
            ctx->pc = 0x3BB3E0u;
            goto label_3bb3e0;
        }
    }
    ctx->pc = 0x3BB388u;
    // 0x3bb388: 0x960429de  lhu         $a0, 0x29DE($s0)
    ctx->pc = 0x3bb388u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10718)));
    // 0x3bb38c: 0x30830010  andi        $v1, $a0, 0x10
    ctx->pc = 0x3bb38cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16);
    // 0x3bb390: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x3BB390u;
    {
        const bool branch_taken_0x3bb390 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BB394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB390u;
        // 0x3bb394: 0x3083ffef  andi        $v1, $a0, 0xFFEF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65519);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb390) {
            ctx->pc = 0x3BB3E0u;
            goto label_3bb3e0;
        }
    }
    ctx->pc = 0x3BB398u;
    // 0x3bb398: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3bb398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3bb39c: 0xa60329de  sh          $v1, 0x29DE($s0)
    ctx->pc = 0x3bb39cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10718), (uint16_t)GPR_U32(ctx, 3));
    // 0x3bb3a0: 0x92030640  lbu         $v1, 0x640($s0)
    ctx->pc = 0x3bb3a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1600)));
    // 0x3bb3a4: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3BB3A4u;
    {
        const bool branch_taken_0x3bb3a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3BB3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB3A4u;
        // 0x3bb3a8: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb3a4) {
            ctx->pc = 0x3BB3C8u;
            goto label_3bb3c8;
        }
    }
    ctx->pc = 0x3BB3ACu;
    // 0x3bb3ac: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x3bb3acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bb3b0: 0x262401c0  addiu       $a0, $s1, 0x1C0
    ctx->pc = 0x3bb3b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 448));
    // 0x3bb3b4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3bb3b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bb3b8: 0xc09f9a4  jal         func_27E690
    ctx->pc = 0x3BB3B8u;
    SET_GPR_U32(ctx, 31, 0x3BB3C0u);
    ctx->pc = 0x3BB3BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BB3B8u;
    // 0x3bb3bc: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27E690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27E690u, 0x3BB3B8u, 0x3BB3C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BB3C0u;
label_3bb3c0:
    // 0x3bb3c0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3BB3C0u;
    {
        const bool branch_taken_0x3bb3c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bb3c0) {
            ctx->pc = 0x3BB3E0u;
            goto label_3bb3e0;
        }
    }
    ctx->pc = 0x3BB3C8u;
label_3bb3c8:
    // 0x3bb3c8: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x3bb3c8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bb3cc: 0x262401c0  addiu       $a0, $s1, 0x1C0
    ctx->pc = 0x3bb3ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 448));
    // 0x3bb3d0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3bb3d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bb3d4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x3bb3d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3bb3d8: 0xc09f9a4  jal         func_27E690
    ctx->pc = 0x3BB3D8u;
    SET_GPR_U32(ctx, 31, 0x3BB3E0u);
    ctx->pc = 0x3BB3DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BB3D8u;
    // 0x3bb3dc: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27E690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27E690u, 0x3BB3D8u, 0x3BB3E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BB3E0u;
label_3bb3e0:
    // 0x3bb3e0: 0x240300f7  addiu       $v1, $zero, 0xF7
    ctx->pc = 0x3bb3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 247));
    // 0x3bb3e4: 0xa2230780  sb          $v1, 0x780($s1)
    ctx->pc = 0x3bb3e4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1920), (uint8_t)GPR_U32(ctx, 3));
    // 0x3bb3e8: 0x92230821  lbu         $v1, 0x821($s1)
    ctx->pc = 0x3bb3e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2081)));
    // 0x3bb3ec: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3bb3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3bb3f0: 0xa2230821  sb          $v1, 0x821($s1)
    ctx->pc = 0x3bb3f0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2081), (uint8_t)GPR_U32(ctx, 3));
    // 0x3bb3f4: 0x0  nop
    ctx->pc = 0x3bb3f4u;
    // NOP
label_3bb3f8:
    // 0x3bb3f8: 0x9623082a  lhu         $v1, 0x82A($s1)
    ctx->pc = 0x3bb3f8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2090)));
    // 0x3bb3fc: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x3bb3fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x3bb400: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x3BB400u;
    {
        const bool branch_taken_0x3bb400 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bb400) {
            ctx->pc = 0x3BB440u;
            goto label_3bb440;
        }
    }
    ctx->pc = 0x3BB408u;
    // 0x3bb408: 0x922307f6  lbu         $v1, 0x7F6($s1)
    ctx->pc = 0x3bb408u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2038)));
    // 0x3bb40c: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x3BB40Cu;
    {
        const bool branch_taken_0x3bb40c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bb40c) {
            ctx->pc = 0x3BB440u;
            goto label_3bb440;
        }
    }
    ctx->pc = 0x3BB414u;
    // 0x3bb414: 0xa22007f6  sb          $zero, 0x7F6($s1)
    ctx->pc = 0x3bb414u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x3bb418: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3bb418u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3bb41c: 0x24040058  addiu       $a0, $zero, 0x58
    ctx->pc = 0x3bb41cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x3bb420: 0xa22007f4  sb          $zero, 0x7F4($s1)
    ctx->pc = 0x3bb420u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x3bb424: 0xa62407f2  sh          $a0, 0x7F2($s1)
    ctx->pc = 0x3bb424u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2034), (uint16_t)GPR_U32(ctx, 4));
    // 0x3bb428: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x3bb428u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x3bb42c: 0xa22007f5  sb          $zero, 0x7F5($s1)
    ctx->pc = 0x3bb42cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2037), (uint8_t)GPR_U32(ctx, 0));
    // 0x3bb430: 0xae2307ec  sw          $v1, 0x7EC($s1)
    ctx->pc = 0x3bb430u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2028), GPR_U32(ctx, 3));
    // 0x3bb434: 0x9623082a  lhu         $v1, 0x82A($s1)
    ctx->pc = 0x3bb434u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2090)));
    // 0x3bb438: 0x3063fffe  andi        $v1, $v1, 0xFFFE
    ctx->pc = 0x3bb438u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65534);
    // 0x3bb43c: 0xa623082a  sh          $v1, 0x82A($s1)
    ctx->pc = 0x3bb43cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2090), (uint16_t)GPR_U32(ctx, 3));
label_3bb440:
    // 0x3bb440: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3bb440u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3bb444: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3bb444u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3bb448: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3bb448u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3bb44c: 0x3e00008  jr          $ra
    ctx->pc = 0x3BB44Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BB450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB44Cu;
        // 0x3bb450: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BB44Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BB454u;
}
