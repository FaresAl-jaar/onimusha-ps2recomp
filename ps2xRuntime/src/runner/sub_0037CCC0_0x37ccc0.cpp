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

// Function: sub_0037CCC0
// Address: 0x37ccc0 - 0x37dae8
void sub_0037CCC0_0x37ccc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037CCC0_0x37ccc0");
#endif

    switch (ctx->pc) {
        case 0x37cd18u: goto label_37cd18;
        case 0x37cd48u: goto label_37cd48;
        case 0x37cde0u: goto label_37cde0;
        case 0x37ce10u: goto label_37ce10;
        case 0x37ce54u: goto label_37ce54;
        case 0x37ce70u: goto label_37ce70;
        case 0x37ceb0u: goto label_37ceb0;
        case 0x37cec8u: goto label_37cec8;
        case 0x37ceecu: goto label_37ceec;
        case 0x37cf18u: goto label_37cf18;
        case 0x37cf20u: goto label_37cf20;
        case 0x37cf30u: goto label_37cf30;
        case 0x37cf44u: goto label_37cf44;
        case 0x37cf4cu: goto label_37cf4c;
        case 0x37cf68u: goto label_37cf68;
        case 0x37d018u: goto label_37d018;
        case 0x37d140u: goto label_37d140;
        case 0x37d18cu: goto label_37d18c;
        case 0x37d1a8u: goto label_37d1a8;
        case 0x37d1c0u: goto label_37d1c0;
        case 0x37d1d8u: goto label_37d1d8;
        case 0x37d278u: goto label_37d278;
        case 0x37d284u: goto label_37d284;
        case 0x37d2acu: goto label_37d2ac;
        case 0x37d3a0u: goto label_37d3a0;
        case 0x37d42cu: goto label_37d42c;
        case 0x37d4a4u: goto label_37d4a4;
        case 0x37d4f4u: goto label_37d4f4;
        case 0x37d550u: goto label_37d550;
        case 0x37d564u: goto label_37d564;
        case 0x37d5c0u: goto label_37d5c0;
        case 0x37d604u: goto label_37d604;
        case 0x37d618u: goto label_37d618;
        case 0x37d6e0u: goto label_37d6e0;
        case 0x37d798u: goto label_37d798;
        case 0x37d8a8u: goto label_37d8a8;
        case 0x37d9e8u: goto label_37d9e8;
        case 0x37da5cu: goto label_37da5c;
        case 0x37da7cu: goto label_37da7c;
        case 0x37da84u: goto label_37da84;
        case 0x37da94u: goto label_37da94;
        case 0x37dac8u: goto label_37dac8;
        default: break;
    }

    ctx->pc = 0x37ccc0u;

    // 0x37ccc0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x37ccc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x37ccc4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x37ccc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x37ccc8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x37ccc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x37cccc: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x37ccccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x37ccd0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x37ccd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x37ccd4: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x37ccd4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x37ccd8: 0xa0832bbd  sb          $v1, 0x2BBD($a0)
    ctx->pc = 0x37ccd8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 11197), (uint8_t)GPR_U32(ctx, 3));
    // 0x37ccdc: 0x90830821  lbu         $v1, 0x821($a0)
    ctx->pc = 0x37ccdcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2081)));
    // 0x37cce0: 0x2c610008  sltiu       $at, $v1, 0x8
    ctx->pc = 0x37cce0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x37cce4: 0x1020037a  beqz        $at, . + 4 + (0x37A << 2)
    ctx->pc = 0x37CCE4u;
    {
        const bool branch_taken_0x37cce4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x37CCE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37CCE4u;
        // 0x37cce8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37cce4) {
            ctx->pc = 0x37DAD0u;
            goto label_37dad0;
        }
    }
    ctx->pc = 0x37CCECu;
    // 0x37ccec: 0x3c050068  lui         $a1, 0x68
    ctx->pc = 0x37ccecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)104 << 16));
    // 0x37ccf0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x37ccf0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x37ccf4: 0x24a51d80  addiu       $a1, $a1, 0x1D80
    ctx->pc = 0x37ccf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7552));
    // 0x37ccf8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x37ccf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x37ccfc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x37ccfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x37cd00: 0x600008  jr          $v1
    ctx->pc = 0x37CD00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x37CD08u: goto label_37cd08;
            case 0x37CD38u: goto label_37cd38;
            case 0x37CE00u: goto label_37ce00;
            case 0x37DA00u: goto label_37da00;
            case 0x37DA68u: goto label_37da68;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37CD00u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x37CD08u;
label_37cd08:
    // 0x37cd08: 0x96020030  lhu         $v0, 0x30($s0)
    ctx->pc = 0x37cd08u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x37cd0c: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x37cd0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x37cd10: 0xc0e007c  jal         func_3801F0
    ctx->pc = 0x37CD10u;
    SET_GPR_U32(ctx, 31, 0x37CD18u);
    ctx->pc = 0x37CD14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37CD10u;
    // 0x37cd14: 0xa6020030  sh          $v0, 0x30($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 48), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3801F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3801F0u, 0x37CD10u, 0x37CD18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37CD18u;
label_37cd18:
    // 0x37cd18: 0xa6000828  sh          $zero, 0x828($s0)
    ctx->pc = 0x37cd18u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2088), (uint16_t)GPR_U32(ctx, 0));
    // 0x37cd1c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x37cd1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37cd20: 0xa600082e  sh          $zero, 0x82E($s0)
    ctx->pc = 0x37cd20u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2094), (uint16_t)GPR_U32(ctx, 0));
    // 0x37cd24: 0xae002b70  sw          $zero, 0x2B70($s0)
    ctx->pc = 0x37cd24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11120), GPR_U32(ctx, 0));
    // 0x37cd28: 0xa2020821  sb          $v0, 0x821($s0)
    ctx->pc = 0x37cd28u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 2));
    // 0x37cd2c: 0xa6000826  sh          $zero, 0x826($s0)
    ctx->pc = 0x37cd2cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2086), (uint16_t)GPR_U32(ctx, 0));
    // 0x37cd30: 0xa600082a  sh          $zero, 0x82A($s0)
    ctx->pc = 0x37cd30u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2090), (uint16_t)GPR_U32(ctx, 0));
    // 0x37cd34: 0x0  nop
    ctx->pc = 0x37cd34u;
    // NOP
label_37cd38:
    // 0x37cd38: 0x8e0507c0  lw          $a1, 0x7C0($s0)
    ctx->pc = 0x37cd38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1984)));
    // 0x37cd3c: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x37cd3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x37cd40: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x37CD40u;
    SET_GPR_U32(ctx, 31, 0x37CD48u);
    ctx->pc = 0x37CD44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37CD40u;
    // 0x37cd44: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x37CD40u, 0x37CD48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37CD48u;
label_37cd48:
    // 0x37cd48: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x37CD48u;
    {
        const bool branch_taken_0x37cd48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x37cd48) {
            ctx->pc = 0x37CDE8u;
            goto label_37cde8;
        }
    }
    ctx->pc = 0x37CD50u;
    // 0x37cd50: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x37cd50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x37cd54: 0x26032b50  addiu       $v1, $s0, 0x2B50
    ctx->pc = 0x37cd54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 11088));
    // 0x37cd58: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x37cd58u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x37cd5c: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x37cd5cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x37cd60: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x37cd60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x37cd64: 0xc6012b54  lwc1        $f1, 0x2B54($s0)
    ctx->pc = 0x37cd64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 11092)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x37cd68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x37cd68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37cd6c: 0x0  nop
    ctx->pc = 0x37cd6cu;
    // NOP
    // 0x37cd70: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x37cd70u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x37cd74: 0xe6002b54  swc1        $f0, 0x2B54($s0)
    ctx->pc = 0x37cd74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 11092), bits); }
    // 0x37cd78: 0xc6010024  lwc1        $f1, 0x24($s0)
    ctx->pc = 0x37cd78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x37cd7c: 0xc6002b54  lwc1        $f0, 0x2B54($s0)
    ctx->pc = 0x37cd7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 11092)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x37cd80: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x37cd80u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x37cd84: 0x45000018  bc1f        . + 4 + (0x18 << 2)
    ctx->pc = 0x37CD84u;
    {
        const bool branch_taken_0x37cd84 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x37cd84) {
            ctx->pc = 0x37CDE8u;
            goto label_37cde8;
        }
    }
    ctx->pc = 0x37CD8Cu;
    // 0x37cd8c: 0x860300c0  lh          $v1, 0xC0($s0)
    ctx->pc = 0x37cd8cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x37cd90: 0x28620800  slti        $v0, $v1, 0x800
    ctx->pc = 0x37cd90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2048) ? 1 : 0);
    // 0x37cd94: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x37CD94u;
    {
        const bool branch_taken_0x37cd94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37CD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37CD94u;
        // 0x37cd98: 0x28610c72  slti        $at, $v1, 0xC72 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3186) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x37cd94) {
            ctx->pc = 0x37CDA8u;
            goto label_37cda8;
        }
    }
    ctx->pc = 0x37CD9Cu;
    // 0x37cd9c: 0x14200008  bnez        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x37CD9Cu;
    {
        const bool branch_taken_0x37cd9c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x37cd9c) {
            ctx->pc = 0x37CDC0u;
            goto label_37cdc0;
        }
    }
    ctx->pc = 0x37CDA4u;
    // 0x37cda4: 0x0  nop
    ctx->pc = 0x37cda4u;
    // NOP
label_37cda8:
    // 0x37cda8: 0x860200c0  lh          $v0, 0xC0($s0)
    ctx->pc = 0x37cda8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x37cdac: 0x2442ffea  addiu       $v0, $v0, -0x16
    ctx->pc = 0x37cdacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967274));
    // 0x37cdb0: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x37cdb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x37cdb4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x37CDB4u;
    {
        const bool branch_taken_0x37cdb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37CDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37CDB4u;
        // 0x37cdb8: 0xa60200c0  sh          $v0, 0xC0($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 192), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37cdb4) {
            ctx->pc = 0x37CDD0u;
            goto label_37cdd0;
        }
    }
    ctx->pc = 0x37CDBCu;
    // 0x37cdbc: 0x0  nop
    ctx->pc = 0x37cdbcu;
    // NOP
label_37cdc0:
    // 0x37cdc0: 0x24620016  addiu       $v0, $v1, 0x16
    ctx->pc = 0x37cdc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 22));
    // 0x37cdc4: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x37cdc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x37cdc8: 0xa60200c0  sh          $v0, 0xC0($s0)
    ctx->pc = 0x37cdc8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 192), (uint16_t)GPR_U32(ctx, 2));
    // 0x37cdcc: 0x0  nop
    ctx->pc = 0x37cdccu;
    // NOP
label_37cdd0:
    // 0x37cdd0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37cdd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37cdd4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x37cdd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37cdd8: 0xc0dfde8  jal         func_37F7A0
    ctx->pc = 0x37CDD8u;
    SET_GPR_U32(ctx, 31, 0x37CDE0u);
    ctx->pc = 0x37CDDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37CDD8u;
    // 0x37cddc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37F7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37F7A0u, 0x37CDD8u, 0x37CDE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37CDE0u;
label_37cde0:
    // 0x37cde0: 0x1000033b  b           . + 4 + (0x33B << 2)
    ctx->pc = 0x37CDE0u;
    {
        const bool branch_taken_0x37cde0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37cde0) {
            ctx->pc = 0x37DAD0u;
            goto label_37dad0;
        }
    }
    ctx->pc = 0x37CDE8u;
label_37cde8:
    // 0x37cde8: 0x9603082a  lhu         $v1, 0x82A($s0)
    ctx->pc = 0x37cde8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2090)));
    // 0x37cdec: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x37cdecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x37cdf0: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x37cdf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x37cdf4: 0xa603082a  sh          $v1, 0x82A($s0)
    ctx->pc = 0x37cdf4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2090), (uint16_t)GPR_U32(ctx, 3));
    // 0x37cdf8: 0xa2020821  sb          $v0, 0x821($s0)
    ctx->pc = 0x37cdf8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 2));
    // 0x37cdfc: 0x0  nop
    ctx->pc = 0x37cdfcu;
    // NOP
label_37ce00:
    // 0x37ce00: 0x8e0229c0  lw          $v0, 0x29C0($s0)
    ctx->pc = 0x37ce00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10688)));
    // 0x37ce04: 0x94510000  lhu         $s1, 0x0($v0)
    ctx->pc = 0x37ce04u;
    SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x37ce08: 0xc0a6998  jal         func_29A660
    ctx->pc = 0x37CE08u;
    SET_GPR_U32(ctx, 31, 0x37CE10u);
    ctx->pc = 0x37CE0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37CE08u;
    // 0x37ce0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A660u, 0x37CE08u, 0x37CE10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37CE10u;
label_37ce10:
    // 0x37ce10: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x37ce10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x37ce14: 0x3c025555  lui         $v0, 0x5555
    ctx->pc = 0x37ce14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21845 << 16));
    // 0x37ce18: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x37ce18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x37ce1c: 0x34425556  ori         $v0, $v0, 0x5556
    ctx->pc = 0x37ce1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21846);
    // 0x37ce20: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x37ce20u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x37ce24: 0x0  nop
    ctx->pc = 0x37ce24u;
    // NOP
    // 0x37ce28: 0x0  nop
    ctx->pc = 0x37ce28u;
    // NOP
    // 0x37ce2c: 0x1010  mfhi        $v0
    ctx->pc = 0x37ce2cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x37ce30: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x37ce30u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x37ce34: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x37ce34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x37ce38: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x37ce38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x37ce3c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x37CE3Cu;
    {
        const bool branch_taken_0x37ce3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x37ce3c) {
            ctx->pc = 0x37CE60u;
            goto label_37ce60;
        }
    }
    ctx->pc = 0x37CE44u;
    // 0x37ce44: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x37ce44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x37ce48: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x37ce48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x37ce4c: 0xc0dfcb8  jal         func_37F2E0
    ctx->pc = 0x37CE4Cu;
    SET_GPR_U32(ctx, 31, 0x37CE54u);
    ctx->pc = 0x37CE50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37CE4Cu;
    // 0x37ce50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37F2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37F2E0u, 0x37CE4Cu, 0x37CE54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37CE54u;
label_37ce54:
    // 0x37ce54: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x37CE54u;
    {
        const bool branch_taken_0x37ce54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37ce54) {
            ctx->pc = 0x37CEC8u;
            goto label_37cec8;
        }
    }
    ctx->pc = 0x37CE5Cu;
    // 0x37ce5c: 0x0  nop
    ctx->pc = 0x37ce5cu;
    // NOP
label_37ce60:
    // 0x37ce60: 0x8e0229c0  lw          $v0, 0x29C0($s0)
    ctx->pc = 0x37ce60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10688)));
    // 0x37ce64: 0x94510000  lhu         $s1, 0x0($v0)
    ctx->pc = 0x37ce64u;
    SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x37ce68: 0xc0a6998  jal         func_29A660
    ctx->pc = 0x37CE68u;
    SET_GPR_U32(ctx, 31, 0x37CE70u);
    ctx->pc = 0x37CE6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37CE68u;
    // 0x37ce6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A660u, 0x37CE68u, 0x37CE70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37CE70u;
label_37ce70:
    // 0x37ce70: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x37ce70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x37ce74: 0x3c025555  lui         $v0, 0x5555
    ctx->pc = 0x37ce74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21845 << 16));
    // 0x37ce78: 0x41fc2  srl         $v1, $a0, 31
    ctx->pc = 0x37ce78u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x37ce7c: 0x34425556  ori         $v0, $v0, 0x5556
    ctx->pc = 0x37ce7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21846);
    // 0x37ce80: 0x440018  mult        $zero, $v0, $a0
    ctx->pc = 0x37ce80u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x37ce84: 0x0  nop
    ctx->pc = 0x37ce84u;
    // NOP
    // 0x37ce88: 0x0  nop
    ctx->pc = 0x37ce88u;
    // NOP
    // 0x37ce8c: 0x1010  mfhi        $v0
    ctx->pc = 0x37ce8cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x37ce90: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x37ce90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x37ce94: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x37ce94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x37ce98: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x37CE98u;
    {
        const bool branch_taken_0x37ce98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x37ce98) {
            ctx->pc = 0x37CEB8u;
            goto label_37ceb8;
        }
    }
    ctx->pc = 0x37CEA0u;
    // 0x37cea0: 0x3c023f40  lui         $v0, 0x3F40
    ctx->pc = 0x37cea0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16192 << 16));
    // 0x37cea4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x37cea4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x37cea8: 0xc0dfcb8  jal         func_37F2E0
    ctx->pc = 0x37CEA8u;
    SET_GPR_U32(ctx, 31, 0x37CEB0u);
    ctx->pc = 0x37CEACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37CEA8u;
    // 0x37ceac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37F2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37F2E0u, 0x37CEA8u, 0x37CEB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37CEB0u;
label_37ceb0:
    // 0x37ceb0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x37CEB0u;
    {
        const bool branch_taken_0x37ceb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37ceb0) {
            ctx->pc = 0x37CEC8u;
            goto label_37cec8;
        }
    }
    ctx->pc = 0x37CEB8u;
label_37ceb8:
    // 0x37ceb8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x37ceb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x37cebc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x37cebcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x37cec0: 0xc0dfcb8  jal         func_37F2E0
    ctx->pc = 0x37CEC0u;
    SET_GPR_U32(ctx, 31, 0x37CEC8u);
    ctx->pc = 0x37CEC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37CEC0u;
    // 0x37cec4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37F2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37F2E0u, 0x37CEC0u, 0x37CEC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37CEC8u;
label_37cec8:
    // 0x37cec8: 0x24020555  addiu       $v0, $zero, 0x555
    ctx->pc = 0x37cec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1365));
    // 0x37cecc: 0xa6022b76  sh          $v0, 0x2B76($s0)
    ctx->pc = 0x37ceccu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11126), (uint16_t)GPR_U32(ctx, 2));
    // 0x37ced0: 0x96020828  lhu         $v0, 0x828($s0)
    ctx->pc = 0x37ced0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2088)));
    // 0x37ced4: 0x14400092  bnez        $v0, . + 4 + (0x92 << 2)
    ctx->pc = 0x37CED4u;
    {
        const bool branch_taken_0x37ced4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x37ced4) {
            ctx->pc = 0x37D120u;
            goto label_37d120;
        }
    }
    ctx->pc = 0x37CEDCu;
    // 0x37cedc: 0x8e0507c0  lw          $a1, 0x7C0($s0)
    ctx->pc = 0x37cedcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1984)));
    // 0x37cee0: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x37cee0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x37cee4: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x37CEE4u;
    SET_GPR_U32(ctx, 31, 0x37CEECu);
    ctx->pc = 0x37CEE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37CEE4u;
    // 0x37cee8: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x37CEE4u, 0x37CEECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37CEECu;
label_37ceec:
    // 0x37ceec: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x37CEECu;
    {
        const bool branch_taken_0x37ceec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37CEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37CEECu;
        // 0x37cef0: 0x24030006  addiu       $v1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37ceec) {
            ctx->pc = 0x37CF00u;
            goto label_37cf00;
        }
    }
    ctx->pc = 0x37CEF4u;
    // 0x37cef4: 0x100002f6  b           . + 4 + (0x2F6 << 2)
    ctx->pc = 0x37CEF4u;
    {
        const bool branch_taken_0x37cef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37CEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37CEF4u;
        // 0x37cef8: 0xa2030821  sb          $v1, 0x821($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37cef4) {
            ctx->pc = 0x37DAD0u;
            goto label_37dad0;
        }
    }
    ctx->pc = 0x37CEFCu;
    // 0x37cefc: 0x0  nop
    ctx->pc = 0x37cefcu;
    // NOP
label_37cf00:
    // 0x37cf00: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x37cf00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37cf04: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x37cf04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x37cf08: 0x26032b50  addiu       $v1, $s0, 0x2B50
    ctx->pc = 0x37cf08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 11088));
    // 0x37cf0c: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x37cf0cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x37cf10: 0xc04d4a0  jal         func_135280
    ctx->pc = 0x37CF10u;
    SET_GPR_U32(ctx, 31, 0x37CF18u);
    ctx->pc = 0x37CF14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37CF10u;
    // 0x37cf14: 0x7c640000  sq          $a0, 0x0($v1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135280u, 0x37CF10u, 0x37CF18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37CF18u;
label_37cf18:
    // 0x37cf18: 0xc04008c  jal         func_100230
    ctx->pc = 0x37CF18u;
    SET_GPR_U32(ctx, 31, 0x37CF20u);
    ctx->pc = 0x37CF1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37CF18u;
    // 0x37cf1c: 0x30440003  andi        $a0, $v0, 0x3 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    ctx->in_delay_slot = false;
    ctx->pc = 0x100230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100230u, 0x37CF18u, 0x37CF20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37CF20u;
label_37cf20:
    // 0x37cf20: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x37cf20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
    // 0x37cf24: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x37cf24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x37cf28: 0xc04b946  jal         func_12E518
    ctx->pc = 0x37CF28u;
    SET_GPR_U32(ctx, 31, 0x37CF30u);
    ctx->pc = 0x37CF2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37CF28u;
    // 0x37cf2c: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E518u, 0x37CF28u, 0x37CF30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37CF30u;
label_37cf30:
    // 0x37cf30: 0x3c034062  lui         $v1, 0x4062
    ctx->pc = 0x37cf30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16482 << 16));
    // 0x37cf34: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x37cf34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37cf38: 0x3462c000  ori         $v0, $v1, 0xC000
    ctx->pc = 0x37cf38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49152);
    // 0x37cf3c: 0xc04ba36  jal         func_12E8D8
    ctx->pc = 0x37CF3Cu;
    SET_GPR_U32(ctx, 31, 0x37CF44u);
    ctx->pc = 0x37CF40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37CF3Cu;
    // 0x37cf40: 0x2203c  dsll32      $a0, $v0, 0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E8D8u, 0x37CF3Cu, 0x37CF44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37CF44u;
label_37cf44:
    // 0x37cf44: 0xc04bc02  jal         func_12F008
    ctx->pc = 0x37CF44u;
    SET_GPR_U32(ctx, 31, 0x37CF4Cu);
    ctx->pc = 0x37CF48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37CF44u;
    // 0x37cf48: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F008u, 0x37CF44u, 0x37CF4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37CF4Cu;
label_37cf4c:
    // 0x37cf4c: 0xc6012b54  lwc1        $f1, 0x2B54($s0)
    ctx->pc = 0x37cf4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 11092)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x37cf50: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x37cf50u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x37cf54: 0xe6002b54  swc1        $f0, 0x2B54($s0)
    ctx->pc = 0x37cf54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 11092), bits); }
    // 0x37cf58: 0x8e0229c0  lw          $v0, 0x29C0($s0)
    ctx->pc = 0x37cf58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10688)));
    // 0x37cf5c: 0x94510000  lhu         $s1, 0x0($v0)
    ctx->pc = 0x37cf5cu;
    SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x37cf60: 0xc0a6998  jal         func_29A660
    ctx->pc = 0x37CF60u;
    SET_GPR_U32(ctx, 31, 0x37CF68u);
    ctx->pc = 0x37CF64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37CF60u;
    // 0x37cf64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A660u, 0x37CF60u, 0x37CF68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37CF68u;
label_37cf68:
    // 0x37cf68: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x37cf68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x37cf6c: 0x3c025555  lui         $v0, 0x5555
    ctx->pc = 0x37cf6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21845 << 16));
    // 0x37cf70: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x37cf70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x37cf74: 0x34425556  ori         $v0, $v0, 0x5556
    ctx->pc = 0x37cf74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21846);
    // 0x37cf78: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x37cf78u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x37cf7c: 0x0  nop
    ctx->pc = 0x37cf7cu;
    // NOP
    // 0x37cf80: 0x0  nop
    ctx->pc = 0x37cf80u;
    // NOP
    // 0x37cf84: 0x1010  mfhi        $v0
    ctx->pc = 0x37cf84u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x37cf88: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x37cf88u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x37cf8c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x37cf8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x37cf90: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x37cf90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x37cf94: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x37CF94u;
    {
        const bool branch_taken_0x37cf94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x37cf94) {
            ctx->pc = 0x37D008u;
            goto label_37d008;
        }
    }
    ctx->pc = 0x37CF9Cu;
    // 0x37cf9c: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x37cf9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x37cfa0: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x37cfa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x37cfa4: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x37cfa4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x37cfa8: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x37cfa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x37cfac: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x37cfacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x37cfb0: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x37cfb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x37cfb4: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x37cfb4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x37cfb8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x37cfb8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x37cfbc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x37cfbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37cfc0: 0x0  nop
    ctx->pc = 0x37cfc0u;
    // NOP
    // 0x37cfc4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x37cfc4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x37cfc8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x37cfc8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x37cfcc: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x37CFCCu;
    {
        const bool branch_taken_0x37cfcc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x37cfcc) {
            ctx->pc = 0x37CFE4u;
            goto label_37cfe4;
        }
    }
    ctx->pc = 0x37CFD4u;
    // 0x37cfd4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x37cfd4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x37cfd8: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x37cfd8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x37cfdc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x37CFDCu;
    {
        const bool branch_taken_0x37cfdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37CFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37CFDCu;
        // 0x37cfe0: 0xa6030828  sh          $v1, 0x828($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 2088), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37cfdc) {
            ctx->pc = 0x37D000u;
            goto label_37d000;
        }
    }
    ctx->pc = 0x37CFE4u;
label_37cfe4:
    // 0x37cfe4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x37cfe4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x37cfe8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x37cfe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x37cfec: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x37cfecu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x37cff0: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x37cff0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x37cff4: 0x0  nop
    ctx->pc = 0x37cff4u;
    // NOP
    // 0x37cff8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x37cff8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x37cffc: 0xa6030828  sh          $v1, 0x828($s0)
    ctx->pc = 0x37cffcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2088), (uint16_t)GPR_U32(ctx, 3));
label_37d000:
    // 0x37d000: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x37D000u;
    {
        const bool branch_taken_0x37d000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37d000) {
            ctx->pc = 0x37D128u;
            goto label_37d128;
        }
    }
    ctx->pc = 0x37D008u;
label_37d008:
    // 0x37d008: 0x8e0229c0  lw          $v0, 0x29C0($s0)
    ctx->pc = 0x37d008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10688)));
    // 0x37d00c: 0x94510000  lhu         $s1, 0x0($v0)
    ctx->pc = 0x37d00cu;
    SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x37d010: 0xc0a6998  jal         func_29A660
    ctx->pc = 0x37D010u;
    SET_GPR_U32(ctx, 31, 0x37D018u);
    ctx->pc = 0x37D014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37D010u;
    // 0x37d014: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A660u, 0x37D010u, 0x37D018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37D018u;
label_37d018:
    // 0x37d018: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x37d018u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x37d01c: 0x3c025555  lui         $v0, 0x5555
    ctx->pc = 0x37d01cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21845 << 16));
    // 0x37d020: 0x41fc2  srl         $v1, $a0, 31
    ctx->pc = 0x37d020u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x37d024: 0x34425556  ori         $v0, $v0, 0x5556
    ctx->pc = 0x37d024u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21846);
    // 0x37d028: 0x440018  mult        $zero, $v0, $a0
    ctx->pc = 0x37d028u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x37d02c: 0x0  nop
    ctx->pc = 0x37d02cu;
    // NOP
    // 0x37d030: 0x0  nop
    ctx->pc = 0x37d030u;
    // NOP
    // 0x37d034: 0x1010  mfhi        $v0
    ctx->pc = 0x37d034u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x37d038: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x37d038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x37d03c: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x37d03cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x37d040: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x37D040u;
    {
        const bool branch_taken_0x37d040 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x37d040) {
            ctx->pc = 0x37D0B8u;
            goto label_37d0b8;
        }
    }
    ctx->pc = 0x37D048u;
    // 0x37d048: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x37d048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x37d04c: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x37d04cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x37d050: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x37d050u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x37d054: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x37d054u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x37d058: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x37d058u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x37d05c: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x37d05cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x37d060: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x37d060u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x37d064: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x37d064u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x37d068: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x37d068u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37d06c: 0x0  nop
    ctx->pc = 0x37d06cu;
    // NOP
    // 0x37d070: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x37d070u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x37d074: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x37d074u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x37d078: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x37D078u;
    {
        const bool branch_taken_0x37d078 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x37d078) {
            ctx->pc = 0x37D090u;
            goto label_37d090;
        }
    }
    ctx->pc = 0x37D080u;
    // 0x37d080: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x37d080u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x37d084: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x37d084u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x37d088: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x37D088u;
    {
        const bool branch_taken_0x37d088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37D08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D088u;
        // 0x37d08c: 0xa6030828  sh          $v1, 0x828($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 2088), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37d088) {
            ctx->pc = 0x37D0ACu;
            goto label_37d0ac;
        }
    }
    ctx->pc = 0x37D090u;
label_37d090:
    // 0x37d090: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x37d090u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x37d094: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x37d094u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x37d098: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x37d098u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x37d09c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x37d09cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x37d0a0: 0x0  nop
    ctx->pc = 0x37d0a0u;
    // NOP
    // 0x37d0a4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x37d0a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x37d0a8: 0xa6030828  sh          $v1, 0x828($s0)
    ctx->pc = 0x37d0a8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2088), (uint16_t)GPR_U32(ctx, 3));
label_37d0ac:
    // 0x37d0ac: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x37D0ACu;
    {
        const bool branch_taken_0x37d0ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37d0ac) {
            ctx->pc = 0x37D128u;
            goto label_37d128;
        }
    }
    ctx->pc = 0x37D0B4u;
    // 0x37d0b4: 0x0  nop
    ctx->pc = 0x37d0b4u;
    // NOP
label_37d0b8:
    // 0x37d0b8: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x37d0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x37d0bc: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x37d0bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x37d0c0: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x37d0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x37d0c4: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x37d0c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x37d0c8: 0x34638889  ori         $v1, $v1, 0x8889
    ctx->pc = 0x37d0c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x37d0cc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x37d0ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x37d0d0: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x37d0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x37d0d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x37d0d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37d0d8: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x37d0d8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x37d0dc: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x37d0dcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x37d0e0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x37d0e0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x37d0e4: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x37D0E4u;
    {
        const bool branch_taken_0x37d0e4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x37d0e4) {
            ctx->pc = 0x37D0FCu;
            goto label_37d0fc;
        }
    }
    ctx->pc = 0x37D0ECu;
    // 0x37d0ec: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x37d0ecu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x37d0f0: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x37d0f0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x37d0f4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x37D0F4u;
    {
        const bool branch_taken_0x37d0f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37D0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D0F4u;
        // 0x37d0f8: 0xa6030828  sh          $v1, 0x828($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 2088), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37d0f4) {
            ctx->pc = 0x37D118u;
            goto label_37d118;
        }
    }
    ctx->pc = 0x37D0FCu;
label_37d0fc:
    // 0x37d0fc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x37d0fcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x37d100: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x37d100u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x37d104: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x37d104u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x37d108: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x37d108u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x37d10c: 0x0  nop
    ctx->pc = 0x37d10cu;
    // NOP
    // 0x37d110: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x37d110u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x37d114: 0xa6030828  sh          $v1, 0x828($s0)
    ctx->pc = 0x37d114u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2088), (uint16_t)GPR_U32(ctx, 3));
label_37d118:
    // 0x37d118: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x37D118u;
    {
        const bool branch_taken_0x37d118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37d118) {
            ctx->pc = 0x37D128u;
            goto label_37d128;
        }
    }
    ctx->pc = 0x37D120u;
label_37d120:
    // 0x37d120: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x37d120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x37d124: 0xa6020828  sh          $v0, 0x828($s0)
    ctx->pc = 0x37d124u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2088), (uint16_t)GPR_U32(ctx, 2));
label_37d128:
    // 0x37d128: 0x9602082a  lhu         $v0, 0x82A($s0)
    ctx->pc = 0x37d128u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2090)));
    // 0x37d12c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x37d12cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x37d130: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x37D130u;
    {
        const bool branch_taken_0x37d130 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37D134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D130u;
        // 0x37d134: 0x26042b50  addiu       $a0, $s0, 0x2B50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 11088));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37d130) {
            ctx->pc = 0x37D198u;
            goto label_37d198;
        }
    }
    ctx->pc = 0x37D138u;
    // 0x37d138: 0xc04d7c8  jal         func_135F20
    ctx->pc = 0x37D138u;
    SET_GPR_U32(ctx, 31, 0x37D140u);
    ctx->pc = 0x37D13Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37D138u;
    // 0x37d13c: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135F20u, 0x37D138u, 0x37D140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37D140u;
label_37d140:
    // 0x37d140: 0x3c02442f  lui         $v0, 0x442F
    ctx->pc = 0x37d140u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17455 << 16));
    // 0x37d144: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x37d144u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x37d148: 0x0  nop
    ctx->pc = 0x37d148u;
    // NOP
    // 0x37d14c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x37d14cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x37d150: 0x45000011  bc1f        . + 4 + (0x11 << 2)
    ctx->pc = 0x37D150u;
    {
        const bool branch_taken_0x37d150 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x37d150) {
            ctx->pc = 0x37D198u;
            goto label_37d198;
        }
    }
    ctx->pc = 0x37D158u;
    // 0x37d158: 0x920308e8  lbu         $v1, 0x8E8($s0)
    ctx->pc = 0x37d158u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2280)));
    // 0x37d15c: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x37d15cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x37d160: 0x3c020f00  lui         $v0, 0xF00
    ctx->pc = 0x37d160u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3840 << 16));
    // 0x37d164: 0x26070020  addiu       $a3, $s0, 0x20
    ctx->pc = 0x37d164u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x37d168: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x37d168u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x37d16c: 0x34454902  ori         $a1, $v0, 0x4902
    ctx->pc = 0x37d16cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)18690);
    // 0x37d170: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x37d170u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37d174: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x37d174u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37d178: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x37d178u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37d17c: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x37d17cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x37d180: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x37d180u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x37d184: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x37D184u;
    SET_GPR_U32(ctx, 31, 0x37D18Cu);
    ctx->pc = 0x37D188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37D184u;
    // 0x37d188: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x37D184u, 0x37D18Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37D18Cu;
label_37d18c:
    // 0x37d18c: 0x9602082a  lhu         $v0, 0x82A($s0)
    ctx->pc = 0x37d18cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2090)));
    // 0x37d190: 0x3042fffe  andi        $v0, $v0, 0xFFFE
    ctx->pc = 0x37d190u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65534);
    // 0x37d194: 0xa602082a  sh          $v0, 0x82A($s0)
    ctx->pc = 0x37d194u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2090), (uint16_t)GPR_U32(ctx, 2));
label_37d198:
    // 0x37d198: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37d198u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37d19c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x37d19cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37d1a0: 0xc0e01cc  jal         func_380730
    ctx->pc = 0x37D1A0u;
    SET_GPR_U32(ctx, 31, 0x37D1A8u);
    ctx->pc = 0x37D1A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37D1A0u;
    // 0x37d1a4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x380730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x380730u, 0x37D1A0u, 0x37D1A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37D1A8u;
label_37d1a8:
    // 0x37d1a8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x37D1A8u;
    {
        const bool branch_taken_0x37d1a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x37d1a8) {
            ctx->pc = 0x37D1C8u;
            goto label_37d1c8;
        }
    }
    ctx->pc = 0x37D1B0u;
    // 0x37d1b0: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x37d1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x37d1b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37d1b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37d1b8: 0xc0e0250  jal         func_380940
    ctx->pc = 0x37D1B8u;
    SET_GPR_U32(ctx, 31, 0x37D1C0u);
    ctx->pc = 0x37D1BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37D1B8u;
    // 0x37d1bc: 0xa2020821  sb          $v0, 0x821($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x380940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x380940u, 0x37D1B8u, 0x37D1C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37D1C0u;
label_37d1c0:
    // 0x37d1c0: 0x10000243  b           . + 4 + (0x243 << 2)
    ctx->pc = 0x37D1C0u;
    {
        const bool branch_taken_0x37d1c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37d1c0) {
            ctx->pc = 0x37DAD0u;
            goto label_37dad0;
        }
    }
    ctx->pc = 0x37D1C8u;
label_37d1c8:
    // 0x37d1c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37d1c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37d1cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x37d1ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37d1d0: 0xc0e01a8  jal         func_3806A0
    ctx->pc = 0x37D1D0u;
    SET_GPR_U32(ctx, 31, 0x37D1D8u);
    ctx->pc = 0x37D1D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37D1D0u;
    // 0x37d1d4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3806A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3806A0u, 0x37D1D0u, 0x37D1D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37D1D8u;
label_37d1d8:
    // 0x37d1d8: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x37D1D8u;
    {
        const bool branch_taken_0x37d1d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x37d1d8) {
            ctx->pc = 0x37D250u;
            goto label_37d250;
        }
    }
    ctx->pc = 0x37D1E0u;
    // 0x37d1e0: 0xc7818078  lwc1        $f1, -0x7F88($gp)
    ctx->pc = 0x37d1e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x37d1e4: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x37d1e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
    // 0x37d1e8: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x37d1e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x37d1ec: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x37d1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x37d1f0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x37d1f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37d1f4: 0x0  nop
    ctx->pc = 0x37d1f4u;
    // NOP
    // 0x37d1f8: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x37d1f8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x37d1fc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x37d1fcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x37d200: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x37D200u;
    {
        const bool branch_taken_0x37d200 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x37d200) {
            ctx->pc = 0x37D218u;
            goto label_37d218;
        }
    }
    ctx->pc = 0x37D208u;
    // 0x37d208: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x37d208u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x37d20c: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x37d20cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x37d210: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x37D210u;
    {
        const bool branch_taken_0x37d210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37D214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D210u;
        // 0x37d214: 0x9603082e  lhu         $v1, 0x82E($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2094)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37d210) {
            ctx->pc = 0x37D234u;
            goto label_37d234;
        }
    }
    ctx->pc = 0x37D218u;
label_37d218:
    // 0x37d218: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x37d218u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x37d21c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x37d21cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x37d220: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x37d220u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x37d224: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x37d224u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x37d228: 0x0  nop
    ctx->pc = 0x37d228u;
    // NOP
    // 0x37d22c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x37d22cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x37d230: 0x9603082e  lhu         $v1, 0x82E($s0)
    ctx->pc = 0x37d230u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2094)));
label_37d234:
    // 0x37d234: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x37d234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x37d238: 0xa603082e  sh          $v1, 0x82E($s0)
    ctx->pc = 0x37d238u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2094), (uint16_t)GPR_U32(ctx, 3));
    // 0x37d23c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x37d23cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x37d240: 0x64182b  sltu        $v1, $v1, $a0
    ctx->pc = 0x37d240u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x37d244: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x37D244u;
    {
        const bool branch_taken_0x37d244 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x37d244) {
            ctx->pc = 0x37D260u;
            goto label_37d260;
        }
    }
    ctx->pc = 0x37D24Cu;
    // 0x37d24c: 0x0  nop
    ctx->pc = 0x37d24cu;
    // NOP
label_37d250:
    // 0x37d250: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x37d250u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x37d254: 0x1000021e  b           . + 4 + (0x21E << 2)
    ctx->pc = 0x37D254u;
    {
        const bool branch_taken_0x37d254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37D258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D254u;
        // 0x37d258: 0xa2030821  sb          $v1, 0x821($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37d254) {
            ctx->pc = 0x37DAD0u;
            goto label_37dad0;
        }
    }
    ctx->pc = 0x37D25Cu;
    // 0x37d25c: 0x0  nop
    ctx->pc = 0x37d25cu;
    // NOP
label_37d260:
    // 0x37d260: 0x260401c0  addiu       $a0, $s0, 0x1C0
    ctx->pc = 0x37d260u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 448));
    // 0x37d264: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x37d264u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37d268: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x37d268u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37d26c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x37d26cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37d270: 0xc09f9a4  jal         func_27E690
    ctx->pc = 0x37D270u;
    SET_GPR_U32(ctx, 31, 0x37D278u);
    ctx->pc = 0x37D274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37D270u;
    // 0x37d274: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27E690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27E690u, 0x37D270u, 0x37D278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37D278u;
label_37d278:
    // 0x37d278: 0x26042b50  addiu       $a0, $s0, 0x2B50
    ctx->pc = 0x37d278u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 11088));
    // 0x37d27c: 0xc04d7c8  jal         func_135F20
    ctx->pc = 0x37D27Cu;
    SET_GPR_U32(ctx, 31, 0x37D284u);
    ctx->pc = 0x37D280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37D27Cu;
    // 0x37d280: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135F20u, 0x37D27Cu, 0x37D284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37D284u;
label_37d284:
    // 0x37d284: 0x26032b50  addiu       $v1, $s0, 0x2B50
    ctx->pc = 0x37d284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 11088));
    // 0x37d288: 0x26020020  addiu       $v0, $s0, 0x20
    ctx->pc = 0x37d288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x37d28c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x37d28cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x37d290: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x37d290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x37d294: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x37d294u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x37d298: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x37d298u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x37d29c: 0x4be208ec  vsub.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x37d29cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x37d2a0: 0xf8830000  sqc2        $vf3, 0x0($a0)
    ctx->pc = 0x37d2a0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x37d2a4: 0xc04d8e4  jal         func_136390
    ctx->pc = 0x37D2A4u;
    SET_GPR_U32(ctx, 31, 0x37D2ACu);
    ctx->pc = 0x37D2A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37D2A4u;
    // 0x37d2a8: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136390u, 0x37D2A4u, 0x37D2ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37D2ACu;
label_37d2ac:
    // 0x37d2ac: 0xafa2009c  sw          $v0, 0x9C($sp)
    ctx->pc = 0x37d2acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 2));
    // 0x37d2b0: 0x860400c0  lh          $a0, 0xC0($s0)
    ctx->pc = 0x37d2b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x37d2b4: 0x87a3009c  lh          $v1, 0x9C($sp)
    ctx->pc = 0x37d2b4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 156)));
    // 0x37d2b8: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x37d2b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x37d2bc: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x37d2bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x37d2c0: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x37d2c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x37d2c4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x37d2c4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x37d2c8: 0x28610801  slti        $at, $v1, 0x801
    ctx->pc = 0x37d2c8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2049) ? 1 : 0);
    // 0x37d2cc: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x37D2CCu;
    {
        const bool branch_taken_0x37d2cc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x37d2cc) {
            ctx->pc = 0x37D2E0u;
            goto label_37d2e0;
        }
    }
    ctx->pc = 0x37D2D4u;
    // 0x37d2d4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x37D2D4u;
    {
        const bool branch_taken_0x37d2d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37d2d4) {
            ctx->pc = 0x37D2E0u;
            goto label_37d2e0;
        }
    }
    ctx->pc = 0x37D2DCu;
    // 0x37d2dc: 0x0  nop
    ctx->pc = 0x37d2dcu;
    // NOP
label_37d2e0:
    // 0x37d2e0: 0x860400c2  lh          $a0, 0xC2($s0)
    ctx->pc = 0x37d2e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 194)));
    // 0x37d2e4: 0x87a3009e  lh          $v1, 0x9E($sp)
    ctx->pc = 0x37d2e4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 158)));
    // 0x37d2e8: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x37d2e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x37d2ec: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x37d2ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x37d2f0: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x37d2f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x37d2f4: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x37d2f4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x37d2f8: 0x28810801  slti        $at, $a0, 0x801
    ctx->pc = 0x37d2f8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2049) ? 1 : 0);
    // 0x37d2fc: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x37D2FCu;
    {
        const bool branch_taken_0x37d2fc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x37D300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D2FCu;
        // 0x37d300: 0x24031000  addiu       $v1, $zero, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37d2fc) {
            ctx->pc = 0x37D318u;
            goto label_37d318;
        }
    }
    ctx->pc = 0x37D304u;
    // 0x37d304: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x37d304u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x37d308: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x37d308u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x37d30c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x37D30Cu;
    {
        const bool branch_taken_0x37d30c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37D310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D30Cu;
        // 0x37d310: 0x4243f  dsra32      $a0, $a0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37d30c) {
            ctx->pc = 0x37D318u;
            goto label_37d318;
        }
    }
    ctx->pc = 0x37D314u;
    // 0x37d314: 0x0  nop
    ctx->pc = 0x37d314u;
    // NOP
label_37d318:
    // 0x37d318: 0x48c3c  dsll32      $s1, $a0, 16
    ctx->pc = 0x37d318u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 4) << (32 + 16));
    // 0x37d31c: 0x92040821  lbu         $a0, 0x821($s0)
    ctx->pc = 0x37d31cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2081)));
    // 0x37d320: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x37d320u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x37d324: 0x10830122  beq         $a0, $v1, . + 4 + (0x122 << 2)
    ctx->pc = 0x37D324u;
    {
        const bool branch_taken_0x37d324 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x37D328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D324u;
        // 0x37d328: 0x118c3f  dsra32      $s1, $s1, 16 (Delay Slot)
        SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37d324) {
            ctx->pc = 0x37D7B0u;
            goto label_37d7b0;
        }
    }
    ctx->pc = 0x37D32Cu;
    // 0x37d32c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x37d32cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x37d330: 0x1083004d  beq         $a0, $v1, . + 4 + (0x4D << 2)
    ctx->pc = 0x37D330u;
    {
        const bool branch_taken_0x37d330 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x37D334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D330u;
        // 0x37d334: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37d330) {
            ctx->pc = 0x37D468u;
            goto label_37d468;
        }
    }
    ctx->pc = 0x37D338u;
    // 0x37d338: 0x10830027  beq         $a0, $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x37D338u;
    {
        const bool branch_taken_0x37d338 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x37d338) {
            ctx->pc = 0x37D3D8u;
            goto label_37d3d8;
        }
    }
    ctx->pc = 0x37D340u;
    // 0x37d340: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x37d340u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x37d344: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x37D344u;
    {
        const bool branch_taken_0x37d344 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x37d344) {
            ctx->pc = 0x37D358u;
            goto label_37d358;
        }
    }
    ctx->pc = 0x37D34Cu;
    // 0x37d34c: 0x100001e0  b           . + 4 + (0x1E0 << 2)
    ctx->pc = 0x37D34Cu;
    {
        const bool branch_taken_0x37d34c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37d34c) {
            ctx->pc = 0x37DAD0u;
            goto label_37dad0;
        }
    }
    ctx->pc = 0x37D354u;
    // 0x37d354: 0x0  nop
    ctx->pc = 0x37d354u;
    // NOP
label_37d358:
    // 0x37d358: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x37d358u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x37d35c: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x37d35cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x37d360: 0x3c0344ff  lui         $v1, 0x44FF
    ctx->pc = 0x37d360u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17663 << 16));
    // 0x37d364: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x37d364u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x37d368: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37d368u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37d36c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x37d36cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37d370: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x37d370u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
    // 0x37d374: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x37d374u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x37d378: 0x46021883  div.s       $f2, $f3, $f2
    ctx->pc = 0x37d378u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[3], ctx->f[2]); }
    // 0x37d37c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x37d37cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x37d380: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x37d380u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x37d384: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x37d384u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x37d388: 0x0  nop
    ctx->pc = 0x37d388u;
    // NOP
    // 0x37d38c: 0xa6022b74  sh          $v0, 0x2B74($s0)
    ctx->pc = 0x37d38cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11124), (uint16_t)GPR_U32(ctx, 2));
    // 0x37d390: 0xc6002b64  lwc1        $f0, 0x2B64($s0)
    ctx->pc = 0x37d390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 11108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x37d394: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x37d394u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x37d398: 0xc0dfe30  jal         func_37F8C0
    ctx->pc = 0x37D398u;
    SET_GPR_U32(ctx, 31, 0x37D3A0u);
    ctx->pc = 0x37D39Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37D398u;
    // 0x37d39c: 0xe6002b68  swc1        $f0, 0x2B68($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 11112), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x37F8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37F8C0u, 0x37D398u, 0x37D3A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37D3A0u;
label_37d3a0:
    // 0x37d3a0: 0x111c3c  dsll32      $v1, $s1, 16
    ctx->pc = 0x37d3a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 16));
    // 0x37d3a4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x37d3a4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x37d3a8: 0x286300aa  slti        $v1, $v1, 0xAA
    ctx->pc = 0x37d3a8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)170) ? 1 : 0);
    // 0x37d3ac: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x37D3ACu;
    {
        const bool branch_taken_0x37d3ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x37D3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D3ACu;
        // 0x37d3b0: 0x3c034396  lui         $v1, 0x4396 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17302 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37d3ac) {
            ctx->pc = 0x37D3C8u;
            goto label_37d3c8;
        }
    }
    ctx->pc = 0x37D3B4u;
    // 0x37d3b4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x37d3b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37d3b8: 0x0  nop
    ctx->pc = 0x37d3b8u;
    // NOP
    // 0x37d3bc: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x37d3bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x37d3c0: 0x450001c3  bc1f        . + 4 + (0x1C3 << 2)
    ctx->pc = 0x37D3C0u;
    {
        const bool branch_taken_0x37d3c0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x37d3c0) {
            ctx->pc = 0x37DAD0u;
            goto label_37dad0;
        }
    }
    ctx->pc = 0x37D3C8u;
label_37d3c8:
    // 0x37d3c8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x37d3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x37d3cc: 0x100001c0  b           . + 4 + (0x1C0 << 2)
    ctx->pc = 0x37D3CCu;
    {
        const bool branch_taken_0x37d3cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37D3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D3CCu;
        // 0x37d3d0: 0xa2030821  sb          $v1, 0x821($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37d3cc) {
            ctx->pc = 0x37DAD0u;
            goto label_37dad0;
        }
    }
    ctx->pc = 0x37D3D4u;
    // 0x37d3d4: 0x0  nop
    ctx->pc = 0x37d3d4u;
    // NOP
label_37d3d8:
    // 0x37d3d8: 0x24020800  addiu       $v0, $zero, 0x800
    ctx->pc = 0x37d3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x37d3dc: 0xa6022b76  sh          $v0, 0x2B76($s0)
    ctx->pc = 0x37d3dcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11126), (uint16_t)GPR_U32(ctx, 2));
    // 0x37d3e0: 0x3c034425  lui         $v1, 0x4425
    ctx->pc = 0x37d3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17445 << 16));
    // 0x37d3e4: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x37d3e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x37d3e8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x37d3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x37d3ec: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x37d3ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x37d3f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37d3f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37d3f4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x37d3f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37d3f8: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x37d3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
    // 0x37d3fc: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x37d3fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x37d400: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x37d400u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x37d404: 0x46021883  div.s       $f2, $f3, $f2
    ctx->pc = 0x37d404u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[3], ctx->f[2]); }
    // 0x37d408: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x37d408u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x37d40c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x37d40cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x37d410: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x37d410u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x37d414: 0x0  nop
    ctx->pc = 0x37d414u;
    // NOP
    // 0x37d418: 0xa6022b74  sh          $v0, 0x2B74($s0)
    ctx->pc = 0x37d418u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11124), (uint16_t)GPR_U32(ctx, 2));
    // 0x37d41c: 0xc6002b64  lwc1        $f0, 0x2B64($s0)
    ctx->pc = 0x37d41cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 11108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x37d420: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x37d420u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x37d424: 0xc0dfe30  jal         func_37F8C0
    ctx->pc = 0x37D424u;
    SET_GPR_U32(ctx, 31, 0x37D42Cu);
    ctx->pc = 0x37D428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37D424u;
    // 0x37d428: 0xe6002b68  swc1        $f0, 0x2B68($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 11112), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x37F8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37F8C0u, 0x37D424u, 0x37D42Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37D42Cu;
label_37d42c:
    // 0x37d42c: 0x111c3c  dsll32      $v1, $s1, 16
    ctx->pc = 0x37d42cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 16));
    // 0x37d430: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x37d430u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x37d434: 0x28610401  slti        $at, $v1, 0x401
    ctx->pc = 0x37d434u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1025) ? 1 : 0);
    // 0x37d438: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x37D438u;
    {
        const bool branch_taken_0x37d438 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x37D43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D438u;
        // 0x37d43c: 0x3c034396  lui         $v1, 0x4396 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17302 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37d438) {
            ctx->pc = 0x37D458u;
            goto label_37d458;
        }
    }
    ctx->pc = 0x37D440u;
    // 0x37d440: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x37d440u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37d444: 0x0  nop
    ctx->pc = 0x37d444u;
    // NOP
    // 0x37d448: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x37d448u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x37d44c: 0x450001a0  bc1f        . + 4 + (0x1A0 << 2)
    ctx->pc = 0x37D44Cu;
    {
        const bool branch_taken_0x37d44c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x37d44c) {
            ctx->pc = 0x37DAD0u;
            goto label_37dad0;
        }
    }
    ctx->pc = 0x37D454u;
    // 0x37d454: 0x0  nop
    ctx->pc = 0x37d454u;
    // NOP
label_37d458:
    // 0x37d458: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x37d458u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x37d45c: 0xa2030821  sb          $v1, 0x821($s0)
    ctx->pc = 0x37d45cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
    // 0x37d460: 0x1000019b  b           . + 4 + (0x19B << 2)
    ctx->pc = 0x37D460u;
    {
        const bool branch_taken_0x37d460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37D464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D460u;
        // 0x37d464: 0xa6000826  sh          $zero, 0x826($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 2086), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37d460) {
            ctx->pc = 0x37DAD0u;
            goto label_37dad0;
        }
    }
    ctx->pc = 0x37D468u;
label_37d468:
    // 0x37d468: 0x8e042b80  lw          $a0, 0x2B80($s0)
    ctx->pc = 0x37d468u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11136)));
    // 0x37d46c: 0x240304c0  addiu       $v1, $zero, 0x4C0
    ctx->pc = 0x37d46cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1216));
    // 0x37d470: 0x94840000  lhu         $a0, 0x0($a0)
    ctx->pc = 0x37d470u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x37d474: 0x1483009c  bne         $a0, $v1, . + 4 + (0x9C << 2)
    ctx->pc = 0x37D474u;
    {
        const bool branch_taken_0x37d474 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x37d474) {
            ctx->pc = 0x37D6E8u;
            goto label_37d6e8;
        }
    }
    ctx->pc = 0x37D47Cu;
    // 0x37d47c: 0xc6002b64  lwc1        $f0, 0x2B64($s0)
    ctx->pc = 0x37d47cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 11108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x37d480: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x37d480u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
    // 0x37d484: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x37d484u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x37d488: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37d488u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37d48c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x37d48cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x37d490: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x37d490u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37d494: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x37d494u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37d498: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x37d498u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x37d49c: 0xc0dfde8  jal         func_37F7A0
    ctx->pc = 0x37D49Cu;
    SET_GPR_U32(ctx, 31, 0x37D4A4u);
    ctx->pc = 0x37D4A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37D49Cu;
    // 0x37d4a0: 0xe6002b68  swc1        $f0, 0x2B68($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 11112), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x37F7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37F7A0u, 0x37D49Cu, 0x37D4A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37D4A4u;
label_37d4a4:
    // 0x37d4a4: 0x3c024516  lui         $v0, 0x4516
    ctx->pc = 0x37d4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17686 << 16));
    // 0x37d4a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x37d4a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37d4ac: 0x0  nop
    ctx->pc = 0x37d4acu;
    // NOP
    // 0x37d4b0: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x37d4b0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x37d4b4: 0x45010016  bc1t        . + 4 + (0x16 << 2)
    ctx->pc = 0x37D4B4u;
    {
        const bool branch_taken_0x37d4b4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x37D4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D4B4u;
        // 0x37d4b8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37d4b4) {
            ctx->pc = 0x37D510u;
            goto label_37d510;
        }
    }
    ctx->pc = 0x37D4BCu;
    // 0x37d4bc: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x37d4bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x37d4c0: 0xa2020821  sb          $v0, 0x821($s0)
    ctx->pc = 0x37d4c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 2));
    // 0x37d4c4: 0x26070020  addiu       $a3, $s0, 0x20
    ctx->pc = 0x37d4c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x37d4c8: 0x920308e8  lbu         $v1, 0x8E8($s0)
    ctx->pc = 0x37d4c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2280)));
    // 0x37d4cc: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x37d4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x37d4d0: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x37d4d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x37d4d4: 0x34454902  ori         $a1, $v0, 0x4902
    ctx->pc = 0x37d4d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)18690);
    // 0x37d4d8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x37d4d8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37d4dc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x37d4dcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37d4e0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x37d4e0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37d4e4: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x37d4e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x37d4e8: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x37d4e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x37d4ec: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x37D4ECu;
    SET_GPR_U32(ctx, 31, 0x37D4F4u);
    ctx->pc = 0x37D4F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37D4ECu;
    // 0x37d4f0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x37D4ECu, 0x37D4F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37D4F4u;
label_37d4f4:
    // 0x37d4f4: 0x9604082a  lhu         $a0, 0x82A($s0)
    ctx->pc = 0x37d4f4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2090)));
    // 0x37d4f8: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x37d4f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x37d4fc: 0x14600174  bnez        $v1, . + 4 + (0x174 << 2)
    ctx->pc = 0x37D4FCu;
    {
        const bool branch_taken_0x37d4fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x37D500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D4FCu;
        // 0x37d500: 0x34830001  ori         $v1, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x37d4fc) {
            ctx->pc = 0x37DAD0u;
            goto label_37dad0;
        }
    }
    ctx->pc = 0x37D504u;
    // 0x37d504: 0x10000172  b           . + 4 + (0x172 << 2)
    ctx->pc = 0x37D504u;
    {
        const bool branch_taken_0x37d504 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37D508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D504u;
        // 0x37d508: 0xa603082a  sh          $v1, 0x82A($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 2090), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37d504) {
            ctx->pc = 0x37DAD0u;
            goto label_37dad0;
        }
    }
    ctx->pc = 0x37D50Cu;
    // 0x37d50c: 0x0  nop
    ctx->pc = 0x37d50cu;
    // NOP
label_37d510:
    // 0x37d510: 0x860500c2  lh          $a1, 0xC2($s0)
    ctx->pc = 0x37d510u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 194)));
    // 0x37d514: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x37d514u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x37d518: 0x3c024500  lui         $v0, 0x4500
    ctx->pc = 0x37d518u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17664 << 16));
    // 0x37d51c: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x37d51cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x37d520: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x37d520u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x37d524: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x37d524u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x37d528: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x37d528u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37d52c: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x37d52cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x37d530: 0x0  nop
    ctx->pc = 0x37d530u;
    // NOP
    // 0x37d534: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x37d534u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x37d538: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x37d538u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x37d53c: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x37d53cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x37d540: 0x0  nop
    ctx->pc = 0x37d540u;
    // NOP
    // 0x37d544: 0x0  nop
    ctx->pc = 0x37d544u;
    // NOP
    // 0x37d548: 0xc096784  jal         func_259E10
    ctx->pc = 0x37D548u;
    SET_GPR_U32(ctx, 31, 0x37D550u);
    ctx->pc = 0x259E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259E10u, 0x37D548u, 0x37D550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37D550u;
label_37d550:
    // 0x37d550: 0x3c024516  lui         $v0, 0x4516
    ctx->pc = 0x37d550u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17686 << 16));
    // 0x37d554: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x37d554u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x37d558: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x37d558u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x37d55c: 0xc0414dc  jal         func_105370
    ctx->pc = 0x37D55Cu;
    SET_GPR_U32(ctx, 31, 0x37D564u);
    ctx->pc = 0x37D560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37D55Cu;
    // 0x37d560: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x37D55Cu, 0x37D564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37D564u;
label_37d564:
    // 0x37d564: 0x26030020  addiu       $v1, $s0, 0x20
    ctx->pc = 0x37d564u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x37d568: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x37d568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x37d56c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x37d56cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x37d570: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x37d570u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x37d574: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x37d574u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x37d578: 0x4be208e8  vadd.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x37d578u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x37d57c: 0xf8830000  sqc2        $vf3, 0x0($a0)
    ctx->pc = 0x37d57cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x37d580: 0x26030020  addiu       $v1, $s0, 0x20
    ctx->pc = 0x37d580u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x37d584: 0x8e022b80  lw          $v0, 0x2B80($s0)
    ctx->pc = 0x37d584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11136)));
    // 0x37d588: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x37d588u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x37d58c: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x37d58cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x37d590: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x37d590u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x37d594: 0x8e022b80  lw          $v0, 0x2B80($s0)
    ctx->pc = 0x37d594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11136)));
    // 0x37d598: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x37d598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x37d59c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x37d59cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x37d5a0: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x37d5a0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x37d5a4: 0x4be208ec  vsub.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x37d5a4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x37d5a8: 0xf8830000  sqc2        $vf3, 0x0($a0)
    ctx->pc = 0x37d5a8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x37d5ac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x37d5acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37d5b0: 0xc7ac0060  lwc1        $f12, 0x60($sp)
    ctx->pc = 0x37d5b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x37d5b4: 0xc7ad0068  lwc1        $f13, 0x68($sp)
    ctx->pc = 0x37d5b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x37d5b8: 0xc047b88  jal         func_11EE20
    ctx->pc = 0x37D5B8u;
    SET_GPR_U32(ctx, 31, 0x37D5C0u);
    ctx->pc = 0x37D5BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37D5B8u;
    // 0x37d5bc: 0xe7a00064  swc1        $f0, 0x64($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EE20u, 0x37D5B8u, 0x37D5C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37D5C0u;
label_37d5c0:
    // 0x37d5c0: 0x3c034500  lui         $v1, 0x4500
    ctx->pc = 0x37d5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17664 << 16));
    // 0x37d5c4: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x37d5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x37d5c8: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x37d5c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x37d5cc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x37d5ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x37d5d0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x37d5d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x37d5d4: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x37d5d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x37d5d8: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x37d5d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x37d5dc: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x37d5dcu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x37d5e0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x37d5e0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x37d5e4: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x37d5e4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x37d5e8: 0x0  nop
    ctx->pc = 0x37d5e8u;
    // NOP
    // 0x37d5ec: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x37d5ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x37d5f0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x37d5f0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x37d5f4: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x37d5f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x37d5f8: 0x28c3c  dsll32      $s1, $v0, 16
    ctx->pc = 0x37d5f8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 16));
    // 0x37d5fc: 0xc04d7b4  jal         func_135ED0
    ctx->pc = 0x37D5FCu;
    SET_GPR_U32(ctx, 31, 0x37D604u);
    ctx->pc = 0x37D600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37D5FCu;
    // 0x37d600: 0x118c3f  dsra32      $s1, $s1, 16 (Delay Slot)
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135ED0u, 0x37D5FCu, 0x37D604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37D604u;
label_37d604:
    // 0x37d604: 0x8e022b80  lw          $v0, 0x2B80($s0)
    ctx->pc = 0x37d604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11136)));
    // 0x37d608: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x37d608u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x37d60c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x37d60cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x37d610: 0xc04d7c8  jal         func_135F20
    ctx->pc = 0x37D610u;
    SET_GPR_U32(ctx, 31, 0x37D618u);
    ctx->pc = 0x37D614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37D610u;
    // 0x37d614: 0x24450010  addiu       $a1, $v0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135F20u, 0x37D610u, 0x37D618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37D618u;
label_37d618:
    // 0x37d618: 0x860400c2  lh          $a0, 0xC2($s0)
    ctx->pc = 0x37d618u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 194)));
    // 0x37d61c: 0x111c3c  dsll32      $v1, $s1, 16
    ctx->pc = 0x37d61cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 16));
    // 0x37d620: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x37d620u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x37d624: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x37d624u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x37d628: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x37d628u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x37d62c: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x37d62cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x37d630: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x37d630u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x37d634: 0x28810801  slti        $at, $a0, 0x801
    ctx->pc = 0x37d634u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2049) ? 1 : 0);
    // 0x37d638: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x37D638u;
    {
        const bool branch_taken_0x37d638 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x37D63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D638u;
        // 0x37d63c: 0x24031000  addiu       $v1, $zero, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37d638) {
            ctx->pc = 0x37D650u;
            goto label_37d650;
        }
    }
    ctx->pc = 0x37D640u;
    // 0x37d640: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x37d640u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x37d644: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x37d644u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x37d648: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x37D648u;
    {
        const bool branch_taken_0x37d648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37D64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D648u;
        // 0x37d64c: 0x4243f  dsra32      $a0, $a0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37d648) {
            ctx->pc = 0x37D650u;
            goto label_37d650;
        }
    }
    ctx->pc = 0x37D650u;
label_37d650:
    // 0x37d650: 0x41c3c  dsll32      $v1, $a0, 16
    ctx->pc = 0x37d650u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 16));
    // 0x37d654: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x37d654u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x37d658: 0x28610355  slti        $at, $v1, 0x355
    ctx->pc = 0x37d658u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)853) ? 1 : 0);
    // 0x37d65c: 0x10200012  beqz        $at, . + 4 + (0x12 << 2)
    ctx->pc = 0x37D65Cu;
    {
        const bool branch_taken_0x37d65c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x37D660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D65Cu;
        // 0x37d660: 0x3c0343c8  lui         $v1, 0x43C8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17352 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37d65c) {
            ctx->pc = 0x37D6A8u;
            goto label_37d6a8;
        }
    }
    ctx->pc = 0x37D664u;
    // 0x37d664: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x37d664u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x37d668: 0x0  nop
    ctx->pc = 0x37d668u;
    // NOP
    // 0x37d66c: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x37d66cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x37d670: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x37D670u;
    {
        const bool branch_taken_0x37d670 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x37d670) {
            ctx->pc = 0x37D6A8u;
            goto label_37d6a8;
        }
    }
    ctx->pc = 0x37D678u;
    // 0x37d678: 0x8e042b80  lw          $a0, 0x2B80($s0)
    ctx->pc = 0x37d678u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11136)));
    // 0x37d67c: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x37d67cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x37d680: 0xc6010024  lwc1        $f1, 0x24($s0)
    ctx->pc = 0x37d680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x37d684: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x37d684u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37d688: 0xc4820024  lwc1        $f2, 0x24($a0)
    ctx->pc = 0x37d688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x37d68c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x37d68cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x37d690: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x37d690u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x37d694: 0x4500010e  bc1f        . + 4 + (0x10E << 2)
    ctx->pc = 0x37D694u;
    {
        const bool branch_taken_0x37d694 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x37d694) {
            ctx->pc = 0x37DAD0u;
            goto label_37dad0;
        }
    }
    ctx->pc = 0x37D69Cu;
    // 0x37d69c: 0x1000010c  b           . + 4 + (0x10C << 2)
    ctx->pc = 0x37D69Cu;
    {
        const bool branch_taken_0x37d69c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37D6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D69Cu;
        // 0x37d6a0: 0xe7a00074  swc1        $f0, 0x74($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x37d69c) {
            ctx->pc = 0x37DAD0u;
            goto label_37dad0;
        }
    }
    ctx->pc = 0x37D6A4u;
    // 0x37d6a4: 0x0  nop
    ctx->pc = 0x37d6a4u;
    // NOP
label_37d6a8:
    // 0x37d6a8: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x37d6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x37d6ac: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x37d6acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x37d6b0: 0x8e032b80  lw          $v1, 0x2B80($s0)
    ctx->pc = 0x37d6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11136)));
    // 0x37d6b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37d6b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37d6b8: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x37d6b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x37d6bc: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x37d6bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x37d6c0: 0x3c0244fa  lui         $v0, 0x44FA
    ctx->pc = 0x37d6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17658 << 16));
    // 0x37d6c4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x37d6c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x37d6c8: 0xc4620024  lwc1        $f2, 0x24($v1)
    ctx->pc = 0x37d6c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x37d6cc: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x37d6ccu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x37d6d0: 0x0  nop
    ctx->pc = 0x37d6d0u;
    // NOP
    // 0x37d6d4: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x37d6d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x37d6d8: 0xc0dff30  jal         func_37FCC0
    ctx->pc = 0x37D6D8u;
    SET_GPR_U32(ctx, 31, 0x37D6E0u);
    ctx->pc = 0x37D6DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37D6D8u;
    // 0x37d6dc: 0xe7a00074  swc1        $f0, 0x74($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x37FCC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37FCC0u, 0x37D6D8u, 0x37D6E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37D6E0u;
label_37d6e0:
    // 0x37d6e0: 0x100000fb  b           . + 4 + (0xFB << 2)
    ctx->pc = 0x37D6E0u;
    {
        const bool branch_taken_0x37d6e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37d6e0) {
            ctx->pc = 0x37DAD0u;
            goto label_37dad0;
        }
    }
    ctx->pc = 0x37D6E8u;
label_37d6e8:
    // 0x37d6e8: 0x3c034316  lui         $v1, 0x4316
    ctx->pc = 0x37d6e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17174 << 16));
    // 0x37d6ec: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x37d6ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x37d6f0: 0x3c043c88  lui         $a0, 0x3C88
    ctx->pc = 0x37d6f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15496 << 16));
    // 0x37d6f4: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x37d6f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x37d6f8: 0x34848889  ori         $a0, $a0, 0x8889
    ctx->pc = 0x37d6f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)34953);
    // 0x37d6fc: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x37d6fcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x37d700: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x37d700u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x37d704: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x37d704u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37d708: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x37d708u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x37d70c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x37d70cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x37d710: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x37d710u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x37d714: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x37D714u;
    {
        const bool branch_taken_0x37d714 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x37d714) {
            ctx->pc = 0x37D72Cu;
            goto label_37d72c;
        }
    }
    ctx->pc = 0x37D71Cu;
    // 0x37d71c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x37d71cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x37d720: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x37d720u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x37d724: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x37D724u;
    {
        const bool branch_taken_0x37d724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37D728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D724u;
        // 0x37d728: 0x96030826  lhu         $v1, 0x826($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2086)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37d724) {
            ctx->pc = 0x37D748u;
            goto label_37d748;
        }
    }
    ctx->pc = 0x37D72Cu;
label_37d72c:
    // 0x37d72c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x37d72cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x37d730: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x37d730u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x37d734: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x37d734u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x37d738: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x37d738u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x37d73c: 0x0  nop
    ctx->pc = 0x37d73cu;
    // NOP
    // 0x37d740: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x37d740u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x37d744: 0x96030826  lhu         $v1, 0x826($s0)
    ctx->pc = 0x37d744u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2086)));
label_37d748:
    // 0x37d748: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x37d748u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x37d74c: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
    ctx->pc = 0x37D74Cu;
    {
        const bool branch_taken_0x37d74c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x37d74c) {
            ctx->pc = 0x37D7A0u;
            goto label_37d7a0;
        }
    }
    ctx->pc = 0x37D754u;
    // 0x37d754: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x37d754u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x37d758: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x37d758u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
    // 0x37d75c: 0xa6030826  sh          $v1, 0x826($s0)
    ctx->pc = 0x37d75cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2086), (uint16_t)GPR_U32(ctx, 3));
    // 0x37d760: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x37d760u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x37d764: 0xc6012b64  lwc1        $f1, 0x2B64($s0)
    ctx->pc = 0x37d764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 11108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x37d768: 0x3c034316  lui         $v1, 0x4316
    ctx->pc = 0x37d768u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17174 << 16));
    // 0x37d76c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x37d76cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x37d770: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37d770u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37d774: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x37d774u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37d778: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x37d778u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x37d77c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x37d77cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x37d780: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x37d780u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x37d784: 0xe6012b68  swc1        $f1, 0x2B68($s0)
    ctx->pc = 0x37d784u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 11112), bits); }
    // 0x37d788: 0x8e022b80  lw          $v0, 0x2B80($s0)
    ctx->pc = 0x37d788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11136)));
    // 0x37d78c: 0xc4410024  lwc1        $f1, 0x24($v0)
    ctx->pc = 0x37d78cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x37d790: 0xc0dfd24  jal         func_37F490
    ctx->pc = 0x37D790u;
    SET_GPR_U32(ctx, 31, 0x37D798u);
    ctx->pc = 0x37D794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37D790u;
    // 0x37d794: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x37F490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37F490u, 0x37D790u, 0x37D798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37D798u;
label_37d798:
    // 0x37d798: 0x100000cd  b           . + 4 + (0xCD << 2)
    ctx->pc = 0x37D798u;
    {
        const bool branch_taken_0x37d798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37d798) {
            ctx->pc = 0x37DAD0u;
            goto label_37dad0;
        }
    }
    ctx->pc = 0x37D7A0u;
label_37d7a0:
    // 0x37d7a0: 0xa6000826  sh          $zero, 0x826($s0)
    ctx->pc = 0x37d7a0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2086), (uint16_t)GPR_U32(ctx, 0));
    // 0x37d7a4: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x37d7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x37d7a8: 0x100000c9  b           . + 4 + (0xC9 << 2)
    ctx->pc = 0x37D7A8u;
    {
        const bool branch_taken_0x37d7a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37D7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D7A8u;
        // 0x37d7ac: 0xa2030821  sb          $v1, 0x821($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37d7a8) {
            ctx->pc = 0x37DAD0u;
            goto label_37dad0;
        }
    }
    ctx->pc = 0x37D7B0u;
label_37d7b0:
    // 0x37d7b0: 0x8e042b80  lw          $a0, 0x2B80($s0)
    ctx->pc = 0x37d7b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11136)));
    // 0x37d7b4: 0x24030c53  addiu       $v1, $zero, 0xC53
    ctx->pc = 0x37d7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3155));
    // 0x37d7b8: 0x94840000  lhu         $a0, 0x0($a0)
    ctx->pc = 0x37d7b8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x37d7bc: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x37D7BCu;
    {
        const bool branch_taken_0x37d7bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x37d7bc) {
            ctx->pc = 0x37D7D0u;
            goto label_37d7d0;
        }
    }
    ctx->pc = 0x37D7C4u;
    // 0x37d7c4: 0x100000c2  b           . + 4 + (0xC2 << 2)
    ctx->pc = 0x37D7C4u;
    {
        const bool branch_taken_0x37d7c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37d7c4) {
            ctx->pc = 0x37DAD0u;
            goto label_37dad0;
        }
    }
    ctx->pc = 0x37D7CCu;
    // 0x37d7cc: 0x0  nop
    ctx->pc = 0x37d7ccu;
    // NOP
label_37d7d0:
    // 0x37d7d0: 0x3c034370  lui         $v1, 0x4370
    ctx->pc = 0x37d7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17264 << 16));
    // 0x37d7d4: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x37d7d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x37d7d8: 0x3c043c88  lui         $a0, 0x3C88
    ctx->pc = 0x37d7d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15496 << 16));
    // 0x37d7dc: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x37d7dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x37d7e0: 0x34848889  ori         $a0, $a0, 0x8889
    ctx->pc = 0x37d7e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)34953);
    // 0x37d7e4: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x37d7e4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x37d7e8: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x37d7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x37d7ec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x37d7ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37d7f0: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x37d7f0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x37d7f4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x37d7f4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x37d7f8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x37d7f8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x37d7fc: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x37D7FCu;
    {
        const bool branch_taken_0x37d7fc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x37d7fc) {
            ctx->pc = 0x37D814u;
            goto label_37d814;
        }
    }
    ctx->pc = 0x37D804u;
    // 0x37d804: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x37d804u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x37d808: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x37d808u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x37d80c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x37D80Cu;
    {
        const bool branch_taken_0x37d80c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37D810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D80Cu;
        // 0x37d810: 0x96030826  lhu         $v1, 0x826($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2086)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37d80c) {
            ctx->pc = 0x37D830u;
            goto label_37d830;
        }
    }
    ctx->pc = 0x37D814u;
label_37d814:
    // 0x37d814: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x37d814u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x37d818: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x37d818u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x37d81c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x37d81cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x37d820: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x37d820u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x37d824: 0x0  nop
    ctx->pc = 0x37d824u;
    // NOP
    // 0x37d828: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x37d828u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x37d82c: 0x96030826  lhu         $v1, 0x826($s0)
    ctx->pc = 0x37d82cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2086)));
label_37d830:
    // 0x37d830: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x37d830u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x37d834: 0x1020001e  beqz        $at, . + 4 + (0x1E << 2)
    ctx->pc = 0x37D834u;
    {
        const bool branch_taken_0x37d834 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x37d834) {
            ctx->pc = 0x37D8B0u;
            goto label_37d8b0;
        }
    }
    ctx->pc = 0x37D83Cu;
    // 0x37d83c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x37d83cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x37d840: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x37d840u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x37d844: 0xa6030826  sh          $v1, 0x826($s0)
    ctx->pc = 0x37d844u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2086), (uint16_t)GPR_U32(ctx, 3));
    // 0x37d848: 0x3442cccc  ori         $v0, $v0, 0xCCCC
    ctx->pc = 0x37d848u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52428);
    // 0x37d84c: 0xc6022b64  lwc1        $f2, 0x2B64($s0)
    ctx->pc = 0x37d84cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 11108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x37d850: 0x3c044316  lui         $a0, 0x4316
    ctx->pc = 0x37d850u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17174 << 16));
    // 0x37d854: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x37d854u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x37d858: 0x3c034416  lui         $v1, 0x4416
    ctx->pc = 0x37d858u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17430 << 16));
    // 0x37d85c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x37d85cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x37d860: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x37d860u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
    // 0x37d864: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x37d864u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x37d868: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37d868u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37d86c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x37d86cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x37d870: 0x0  nop
    ctx->pc = 0x37d870u;
    // NOP
    // 0x37d874: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x37d874u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x37d878: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x37d878u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x37d87c: 0xe6022b64  swc1        $f2, 0x2B64($s0)
    ctx->pc = 0x37d87cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 11108), bits); }
    // 0x37d880: 0xc6022b64  lwc1        $f2, 0x2B64($s0)
    ctx->pc = 0x37d880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 11108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x37d884: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x37d884u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x37d888: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x37d888u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37d88c: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x37d88cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x37d890: 0xe6022b68  swc1        $f2, 0x2B68($s0)
    ctx->pc = 0x37d890u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 11112), bits); }
    // 0x37d894: 0x8e022b80  lw          $v0, 0x2B80($s0)
    ctx->pc = 0x37d894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11136)));
    // 0x37d898: 0xc4420024  lwc1        $f2, 0x24($v0)
    ctx->pc = 0x37d898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x37d89c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x37d89cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x37d8a0: 0xc0dfd24  jal         func_37F490
    ctx->pc = 0x37D8A0u;
    SET_GPR_U32(ctx, 31, 0x37D8A8u);
    ctx->pc = 0x37D8A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37D8A0u;
    // 0x37d8a4: 0x46000b01  sub.s       $f12, $f1, $f0 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x37F490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37F490u, 0x37D8A0u, 0x37D8A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37D8A8u;
label_37d8a8:
    // 0x37d8a8: 0x10000089  b           . + 4 + (0x89 << 2)
    ctx->pc = 0x37D8A8u;
    {
        const bool branch_taken_0x37d8a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37d8a8) {
            ctx->pc = 0x37DAD0u;
            goto label_37dad0;
        }
    }
    ctx->pc = 0x37D8B0u;
label_37d8b0:
    // 0x37d8b0: 0x3c03428c  lui         $v1, 0x428C
    ctx->pc = 0x37d8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17036 << 16));
    // 0x37d8b4: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x37d8b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x37d8b8: 0x3c043c88  lui         $a0, 0x3C88
    ctx->pc = 0x37d8b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15496 << 16));
    // 0x37d8bc: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x37d8bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x37d8c0: 0x34848889  ori         $a0, $a0, 0x8889
    ctx->pc = 0x37d8c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)34953);
    // 0x37d8c4: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x37d8c4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x37d8c8: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x37d8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x37d8cc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x37d8ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37d8d0: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x37d8d0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x37d8d4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x37d8d4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x37d8d8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x37d8d8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x37d8dc: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x37D8DCu;
    {
        const bool branch_taken_0x37d8dc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x37d8dc) {
            ctx->pc = 0x37D8F4u;
            goto label_37d8f4;
        }
    }
    ctx->pc = 0x37D8E4u;
    // 0x37d8e4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x37d8e4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x37d8e8: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x37d8e8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x37d8ec: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x37D8ECu;
    {
        const bool branch_taken_0x37d8ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37D8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D8ECu;
        // 0x37d8f0: 0xc7828078  lwc1        $f2, -0x7F88($gp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x37d8ec) {
            ctx->pc = 0x37D910u;
            goto label_37d910;
        }
    }
    ctx->pc = 0x37D8F4u;
label_37d8f4:
    // 0x37d8f4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x37d8f4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x37d8f8: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x37d8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x37d8fc: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x37d8fcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x37d900: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x37d900u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x37d904: 0x0  nop
    ctx->pc = 0x37d904u;
    // NOP
    // 0x37d908: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x37d908u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x37d90c: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x37d90cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_37d910:
    // 0x37d910: 0x3c034370  lui         $v1, 0x4370
    ctx->pc = 0x37d910u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17264 << 16));
    // 0x37d914: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x37d914u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x37d918: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x37d918u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x37d91c: 0x34648889  ori         $a0, $v1, 0x8889
    ctx->pc = 0x37d91cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x37d920: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x37d920u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x37d924: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x37d924u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x37d928: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x37d928u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x37d92c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x37d92cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37d930: 0x0  nop
    ctx->pc = 0x37d930u;
    // NOP
    // 0x37d934: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x37d934u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x37d938: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x37d938u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x37d93c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x37D93Cu;
    {
        const bool branch_taken_0x37d93c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x37d93c) {
            ctx->pc = 0x37D954u;
            goto label_37d954;
        }
    }
    ctx->pc = 0x37D944u;
    // 0x37d944: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x37d944u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x37d948: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x37d948u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x37d94c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x37D94Cu;
    {
        const bool branch_taken_0x37d94c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37D950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D94Cu;
        // 0x37d950: 0x851821  addu        $v1, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37d94c) {
            ctx->pc = 0x37D970u;
            goto label_37d970;
        }
    }
    ctx->pc = 0x37D954u;
label_37d954:
    // 0x37d954: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x37d954u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x37d958: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x37d958u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x37d95c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x37d95cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x37d960: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x37d960u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x37d964: 0x0  nop
    ctx->pc = 0x37d964u;
    // NOP
    // 0x37d968: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x37d968u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x37d96c: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x37d96cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_37d970:
    // 0x37d970: 0x96040826  lhu         $a0, 0x826($s0)
    ctx->pc = 0x37d970u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2086)));
    // 0x37d974: 0x83082b  sltu        $at, $a0, $v1
    ctx->pc = 0x37d974u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x37d978: 0x1020001d  beqz        $at, . + 4 + (0x1D << 2)
    ctx->pc = 0x37D978u;
    {
        const bool branch_taken_0x37d978 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x37D97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D978u;
        // 0x37d97c: 0x24830001  addiu       $v1, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37d978) {
            ctx->pc = 0x37D9F0u;
            goto label_37d9f0;
        }
    }
    ctx->pc = 0x37D980u;
    // 0x37d980: 0x3c023fa6  lui         $v0, 0x3FA6
    ctx->pc = 0x37d980u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16294 << 16));
    // 0x37d984: 0xa6030826  sh          $v1, 0x826($s0)
    ctx->pc = 0x37d984u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2086), (uint16_t)GPR_U32(ctx, 3));
    // 0x37d988: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x37d988u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x37d98c: 0xc6022b64  lwc1        $f2, 0x2B64($s0)
    ctx->pc = 0x37d98cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 11108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x37d990: 0x3c034316  lui         $v1, 0x4316
    ctx->pc = 0x37d990u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17174 << 16));
    // 0x37d994: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x37d994u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x37d998: 0x3c0443c8  lui         $a0, 0x43C8
    ctx->pc = 0x37d998u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17352 << 16));
    // 0x37d99c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x37d99cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x37d9a0: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x37d9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
    // 0x37d9a4: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x37d9a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x37d9a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37d9a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37d9ac: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x37d9acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x37d9b0: 0x0  nop
    ctx->pc = 0x37d9b0u;
    // NOP
    // 0x37d9b4: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x37d9b4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x37d9b8: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x37d9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x37d9bc: 0xe6022b64  swc1        $f2, 0x2B64($s0)
    ctx->pc = 0x37d9bcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 11108), bits); }
    // 0x37d9c0: 0xc6022b64  lwc1        $f2, 0x2B64($s0)
    ctx->pc = 0x37d9c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 11108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x37d9c4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x37d9c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x37d9c8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x37d9c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37d9cc: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x37d9ccu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x37d9d0: 0xe6022b68  swc1        $f2, 0x2B68($s0)
    ctx->pc = 0x37d9d0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 11112), bits); }
    // 0x37d9d4: 0x8e022b80  lw          $v0, 0x2B80($s0)
    ctx->pc = 0x37d9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11136)));
    // 0x37d9d8: 0xc4420024  lwc1        $f2, 0x24($v0)
    ctx->pc = 0x37d9d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x37d9dc: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x37d9dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x37d9e0: 0xc0dfd24  jal         func_37F490
    ctx->pc = 0x37D9E0u;
    SET_GPR_U32(ctx, 31, 0x37D9E8u);
    ctx->pc = 0x37D9E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37D9E0u;
    // 0x37d9e4: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x37F490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37F490u, 0x37D9E0u, 0x37D9E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37D9E8u;
label_37d9e8:
    // 0x37d9e8: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x37D9E8u;
    {
        const bool branch_taken_0x37d9e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37d9e8) {
            ctx->pc = 0x37DAD0u;
            goto label_37dad0;
        }
    }
    ctx->pc = 0x37D9F0u;
label_37d9f0:
    // 0x37d9f0: 0xa6000826  sh          $zero, 0x826($s0)
    ctx->pc = 0x37d9f0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2086), (uint16_t)GPR_U32(ctx, 0));
    // 0x37d9f4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x37d9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x37d9f8: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x37D9F8u;
    {
        const bool branch_taken_0x37d9f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37D9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D9F8u;
        // 0x37d9fc: 0xa2030821  sb          $v1, 0x821($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37d9f8) {
            ctx->pc = 0x37DAD0u;
            goto label_37dad0;
        }
    }
    ctx->pc = 0x37DA00u;
label_37da00:
    // 0x37da00: 0xae0007c0  sw          $zero, 0x7C0($s0)
    ctx->pc = 0x37da00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1984), GPR_U32(ctx, 0));
    // 0x37da04: 0x92020821  lbu         $v0, 0x821($s0)
    ctx->pc = 0x37da04u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2081)));
    // 0x37da08: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x37da08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x37da0c: 0xa2020821  sb          $v0, 0x821($s0)
    ctx->pc = 0x37da0cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 2));
    // 0x37da10: 0x92022b79  lbu         $v0, 0x2B79($s0)
    ctx->pc = 0x37da10u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11129)));
    // 0x37da14: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x37DA14u;
    {
        const bool branch_taken_0x37da14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x37da14) {
            ctx->pc = 0x37DA28u;
            goto label_37da28;
        }
    }
    ctx->pc = 0x37DA1Cu;
    // 0x37da1c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x37da1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x37da20: 0xa2022b79  sb          $v0, 0x2B79($s0)
    ctx->pc = 0x37da20u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11129), (uint8_t)GPR_U32(ctx, 2));
    // 0x37da24: 0x0  nop
    ctx->pc = 0x37da24u;
    // NOP
label_37da28:
    // 0x37da28: 0x920308e8  lbu         $v1, 0x8E8($s0)
    ctx->pc = 0x37da28u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2280)));
    // 0x37da2c: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x37da2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x37da30: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x37da30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x37da34: 0x26070020  addiu       $a3, $s0, 0x20
    ctx->pc = 0x37da34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x37da38: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x37da38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x37da3c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x37da3cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37da40: 0x34454902  ori         $a1, $v0, 0x4902
    ctx->pc = 0x37da40u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)18690);
    // 0x37da44: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x37da44u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37da48: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x37da48u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37da4c: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x37da4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x37da50: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x37da50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x37da54: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x37DA54u;
    SET_GPR_U32(ctx, 31, 0x37DA5Cu);
    ctx->pc = 0x37DA58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37DA54u;
    // 0x37da58: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x37DA54u, 0x37DA5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37DA5Cu;
label_37da5c:
    // 0x37da5c: 0x240300f2  addiu       $v1, $zero, 0xF2
    ctx->pc = 0x37da5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 242));
    // 0x37da60: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x37DA60u;
    {
        const bool branch_taken_0x37da60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37DA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37DA60u;
        // 0x37da64: 0xa2030780  sb          $v1, 0x780($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37da60) {
            ctx->pc = 0x37DAD0u;
            goto label_37dad0;
        }
    }
    ctx->pc = 0x37DA68u;
label_37da68:
    // 0x37da68: 0x96032b9c  lhu         $v1, 0x2B9C($s0)
    ctx->pc = 0x37da68u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 11164)));
    // 0x37da6c: 0x14600018  bnez        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x37DA6Cu;
    {
        const bool branch_taken_0x37da6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x37da6c) {
            ctx->pc = 0x37DAD0u;
            goto label_37dad0;
        }
    }
    ctx->pc = 0x37DA74u;
    // 0x37da74: 0xc0e02a0  jal         func_380A80
    ctx->pc = 0x37DA74u;
    SET_GPR_U32(ctx, 31, 0x37DA7Cu);
    ctx->pc = 0x380A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x380A80u, 0x37DA74u, 0x37DA7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37DA7Cu;
label_37da7c:
    // 0x37da7c: 0xc0e0240  jal         func_380900
    ctx->pc = 0x37DA7Cu;
    SET_GPR_U32(ctx, 31, 0x37DA84u);
    ctx->pc = 0x37DA80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37DA7Cu;
    // 0x37da80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x380900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x380900u, 0x37DA7Cu, 0x37DA84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37DA84u;
label_37da84:
    // 0x37da84: 0x240200f4  addiu       $v0, $zero, 0xF4
    ctx->pc = 0x37da84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 244));
    // 0x37da88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37da88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37da8c: 0xc0e01f8  jal         func_3807E0
    ctx->pc = 0x37DA8Cu;
    SET_GPR_U32(ctx, 31, 0x37DA94u);
    ctx->pc = 0x37DA90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37DA8Cu;
    // 0x37da90: 0xa2020780  sb          $v0, 0x780($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3807E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3807E0u, 0x37DA8Cu, 0x37DA94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37DA94u;
label_37da94:
    // 0x37da94: 0x920308e8  lbu         $v1, 0x8E8($s0)
    ctx->pc = 0x37da94u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2280)));
    // 0x37da98: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x37da98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x37da9c: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x37da9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x37daa0: 0x26070020  addiu       $a3, $s0, 0x20
    ctx->pc = 0x37daa0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x37daa4: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x37daa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x37daa8: 0x34454902  ori         $a1, $v0, 0x4902
    ctx->pc = 0x37daa8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)18690);
    // 0x37daac: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x37daacu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37dab0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x37dab0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37dab4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x37dab4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37dab8: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x37dab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x37dabc: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x37dabcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x37dac0: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x37DAC0u;
    SET_GPR_U32(ctx, 31, 0x37DAC8u);
    ctx->pc = 0x37DAC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37DAC0u;
    // 0x37dac4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x37DAC0u, 0x37DAC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37DAC8u;
label_37dac8:
    // 0x37dac8: 0xae0007c0  sw          $zero, 0x7C0($s0)
    ctx->pc = 0x37dac8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1984), GPR_U32(ctx, 0));
    // 0x37dacc: 0x0  nop
    ctx->pc = 0x37daccu;
    // NOP
label_37dad0:
    // 0x37dad0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x37dad0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x37dad4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x37dad4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x37dad8: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x37dad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x37dadc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x37dadcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37dae0: 0x3e00008  jr          $ra
    ctx->pc = 0x37DAE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37DAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37DAE0u;
        // 0x37dae4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37DAE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37DAE8u;
}
