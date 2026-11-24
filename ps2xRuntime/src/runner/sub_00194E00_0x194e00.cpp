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

// Function: sub_00194E00
// Address: 0x194e00 - 0x1950e4
void sub_00194E00_0x194e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00194E00_0x194e00");
#endif

    switch (ctx->pc) {
        case 0x194e9cu: goto label_194e9c;
        case 0x194eacu: goto label_194eac;
        case 0x194ee8u: goto label_194ee8;
        case 0x194f2cu: goto label_194f2c;
        case 0x194f4cu: goto label_194f4c;
        case 0x194f5cu: goto label_194f5c;
        case 0x194f98u: goto label_194f98;
        case 0x194fdcu: goto label_194fdc;
        case 0x194ff8u: goto label_194ff8;
        case 0x195008u: goto label_195008;
        case 0x195050u: goto label_195050;
        case 0x195094u: goto label_195094;
        default: break;
    }

    ctx->pc = 0x194e00u;

    // 0x194e00: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x194e00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x194e04: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x194e04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x194e08: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x194e08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x194e0c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x194e0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x194e10: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x194e10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194e14: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x194e14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x194e18: 0x8f82875c  lw          $v0, -0x78A4($gp)
    ctx->pc = 0x194e18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936412)));
    // 0x194e1c: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x194e1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x194e20: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x194e20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194e24: 0xc4830008  lwc1        $f3, 0x8($a0)
    ctx->pc = 0x194e24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x194e28: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x194e28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x194e2c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x194e2cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x194e30: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x194e30u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x194e34: 0x4600001a  mula.s      $f0, $f0
    ctx->pc = 0x194e34u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[0], ctx->f[0]));
    // 0x194e38: 0x4602101c  madd.s      $f0, $f2, $f2
    ctx->pc = 0x194e38u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x194e3c: 0x46000044  c1          0x44
    ctx->pc = 0x194e3cu;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x194e40: 0x0  nop
    ctx->pc = 0x194e40u;
    // NOP
    // 0x194e44: 0x0  nop
    ctx->pc = 0x194e44u;
    // NOP
    // 0x194e48: 0x14400097  bnez        $v0, . + 4 + (0x97 << 2)
    ctx->pc = 0x194E48u;
    {
        const bool branch_taken_0x194e48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x194e48) {
            ctx->pc = 0x1950A8u;
            goto label_1950a8;
        }
    }
    ctx->pc = 0x194E50u;
    // 0x194e50: 0x3c024370  lui         $v0, 0x4370
    ctx->pc = 0x194e50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17264 << 16));
    // 0x194e54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x194e54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x194e58: 0x0  nop
    ctx->pc = 0x194e58u;
    // NOP
    // 0x194e5c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x194e5cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x194e60: 0x45000091  bc1f        . + 4 + (0x91 << 2)
    ctx->pc = 0x194E60u;
    {
        const bool branch_taken_0x194e60 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x194E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194E60u;
        // 0x194e64: 0x3c01007e  lui         $at, 0x7E (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194e60) {
            ctx->pc = 0x1950A8u;
            goto label_1950a8;
        }
    }
    ctx->pc = 0x194E68u;
    // 0x194e68: 0x24020200  addiu       $v0, $zero, 0x200
    ctx->pc = 0x194e68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x194e6c: 0x94236ac4  lhu         $v1, 0x6AC4($at)
    ctx->pc = 0x194e6cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 27332)));
    // 0x194e70: 0x10620031  beq         $v1, $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x194E70u;
    {
        const bool branch_taken_0x194e70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x194E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194E70u;
        // 0x194e74: 0x24020100  addiu       $v0, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194e70) {
            ctx->pc = 0x194F38u;
            goto label_194f38;
        }
    }
    ctx->pc = 0x194E78u;
    // 0x194e78: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x194E78u;
    {
        const bool branch_taken_0x194e78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x194e78) {
            ctx->pc = 0x194E88u;
            goto label_194e88;
        }
    }
    ctx->pc = 0x194E80u;
    // 0x194e80: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x194E80u;
    {
        const bool branch_taken_0x194e80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x194e80) {
            ctx->pc = 0x194FE8u;
            goto label_194fe8;
        }
    }
    ctx->pc = 0x194E88u;
label_194e88:
    // 0x194e88: 0x3c050041  lui         $a1, 0x41
    ctx->pc = 0x194e88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65 << 16));
    // 0x194e8c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x194e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x194e90: 0x24a5d870  addiu       $a1, $a1, -0x2790
    ctx->pc = 0x194e90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957168));
    // 0x194e94: 0xc0414d0  jal         func_105340
    ctx->pc = 0x194E94u;
    SET_GPR_U32(ctx, 31, 0x194E9Cu);
    ctx->pc = 0x194E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194E94u;
    // 0x194e98: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x194E94u, 0x194E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194E9Cu;
label_194e9c:
    // 0x194e9c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x194e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x194ea0: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x194ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x194ea4: 0xc041472  jal         func_1051C8
    ctx->pc = 0x194EA4u;
    SET_GPR_U32(ctx, 31, 0x194EACu);
    ctx->pc = 0x194EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194EA4u;
    // 0x194ea8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x194EA4u, 0x194EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194EACu;
label_194eac:
    // 0x194eac: 0x978286c0  lhu         $v0, -0x7940($gp)
    ctx->pc = 0x194eacu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936256)));
    // 0x194eb0: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x194EB0u;
    {
        const bool branch_taken_0x194eb0 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x194EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194EB0u;
        // 0x194eb4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194eb0) {
            ctx->pc = 0x194EC4u;
            goto label_194ec4;
        }
    }
    ctx->pc = 0x194EB8u;
    // 0x194eb8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x194eb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x194ebc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x194EBCu;
    {
        const bool branch_taken_0x194ebc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194EBCu;
        // 0x194ec0: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x194ebc) {
            ctx->pc = 0x194EDCu;
            goto label_194edc;
        }
    }
    ctx->pc = 0x194EC4u;
label_194ec4:
    // 0x194ec4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x194ec4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x194ec8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x194ec8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x194ecc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x194eccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x194ed0: 0x0  nop
    ctx->pc = 0x194ed0u;
    // NOP
    // 0x194ed4: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x194ed4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x194ed8: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x194ed8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
label_194edc:
    // 0x194edc: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x194edcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x194ee0: 0xc0414dc  jal         func_105370
    ctx->pc = 0x194EE0u;
    SET_GPR_U32(ctx, 31, 0x194EE8u);
    ctx->pc = 0x194EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194EE0u;
    // 0x194ee4: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x194EE0u, 0x194EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194EE8u;
label_194ee8:
    // 0x194ee8: 0x978286c8  lhu         $v0, -0x7938($gp)
    ctx->pc = 0x194ee8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936264)));
    // 0x194eec: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x194EECu;
    {
        const bool branch_taken_0x194eec = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x194EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194EECu;
        // 0x194ef0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194eec) {
            ctx->pc = 0x194F00u;
            goto label_194f00;
        }
    }
    ctx->pc = 0x194EF4u;
    // 0x194ef4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x194ef4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x194ef8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x194EF8u;
    {
        const bool branch_taken_0x194ef8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194EF8u;
        // 0x194efc: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x194ef8) {
            ctx->pc = 0x194F18u;
            goto label_194f18;
        }
    }
    ctx->pc = 0x194F00u;
label_194f00:
    // 0x194f00: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x194f00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x194f04: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x194f04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x194f08: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x194f08u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x194f0c: 0x0  nop
    ctx->pc = 0x194f0cu;
    // NOP
    // 0x194f10: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x194f10u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x194f14: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x194f14u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_194f18:
    // 0x194f18: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x194f18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x194f1c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x194f1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194f20: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x194f20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194f24: 0xc0414ca  jal         func_105328
    ctx->pc = 0x194F24u;
    SET_GPR_U32(ctx, 31, 0x194F2Cu);
    ctx->pc = 0x194F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194F24u;
    // 0x194f28: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x194F24u, 0x194F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194F2Cu;
label_194f2c:
    // 0x194f2c: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x194F2Cu;
    {
        const bool branch_taken_0x194f2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x194f2c) {
            ctx->pc = 0x195098u;
            goto label_195098;
        }
    }
    ctx->pc = 0x194F34u;
    // 0x194f34: 0x0  nop
    ctx->pc = 0x194f34u;
    // NOP
label_194f38:
    // 0x194f38: 0x3c050041  lui         $a1, 0x41
    ctx->pc = 0x194f38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65 << 16));
    // 0x194f3c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x194f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x194f40: 0x24a5d880  addiu       $a1, $a1, -0x2780
    ctx->pc = 0x194f40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957184));
    // 0x194f44: 0xc0414d0  jal         func_105340
    ctx->pc = 0x194F44u;
    SET_GPR_U32(ctx, 31, 0x194F4Cu);
    ctx->pc = 0x194F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194F44u;
    // 0x194f48: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x194F44u, 0x194F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194F4Cu;
label_194f4c:
    // 0x194f4c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x194f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x194f50: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x194f50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x194f54: 0xc041472  jal         func_1051C8
    ctx->pc = 0x194F54u;
    SET_GPR_U32(ctx, 31, 0x194F5Cu);
    ctx->pc = 0x194F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194F54u;
    // 0x194f58: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x194F54u, 0x194F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194F5Cu;
label_194f5c:
    // 0x194f5c: 0x978286c0  lhu         $v0, -0x7940($gp)
    ctx->pc = 0x194f5cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936256)));
    // 0x194f60: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x194F60u;
    {
        const bool branch_taken_0x194f60 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x194F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194F60u;
        // 0x194f64: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194f60) {
            ctx->pc = 0x194F74u;
            goto label_194f74;
        }
    }
    ctx->pc = 0x194F68u;
    // 0x194f68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x194f68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x194f6c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x194F6Cu;
    {
        const bool branch_taken_0x194f6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194F6Cu;
        // 0x194f70: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x194f6c) {
            ctx->pc = 0x194F8Cu;
            goto label_194f8c;
        }
    }
    ctx->pc = 0x194F74u;
label_194f74:
    // 0x194f74: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x194f74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x194f78: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x194f78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x194f7c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x194f7cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x194f80: 0x0  nop
    ctx->pc = 0x194f80u;
    // NOP
    // 0x194f84: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x194f84u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x194f88: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x194f88u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
label_194f8c:
    // 0x194f8c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x194f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x194f90: 0xc0414dc  jal         func_105370
    ctx->pc = 0x194F90u;
    SET_GPR_U32(ctx, 31, 0x194F98u);
    ctx->pc = 0x194F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194F90u;
    // 0x194f94: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x194F90u, 0x194F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194F98u;
label_194f98:
    // 0x194f98: 0x978286c8  lhu         $v0, -0x7938($gp)
    ctx->pc = 0x194f98u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936264)));
    // 0x194f9c: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x194F9Cu;
    {
        const bool branch_taken_0x194f9c = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x194FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194F9Cu;
        // 0x194fa0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194f9c) {
            ctx->pc = 0x194FB0u;
            goto label_194fb0;
        }
    }
    ctx->pc = 0x194FA4u;
    // 0x194fa4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x194fa4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x194fa8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x194FA8u;
    {
        const bool branch_taken_0x194fa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194FA8u;
        // 0x194fac: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x194fa8) {
            ctx->pc = 0x194FC8u;
            goto label_194fc8;
        }
    }
    ctx->pc = 0x194FB0u;
label_194fb0:
    // 0x194fb0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x194fb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x194fb4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x194fb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x194fb8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x194fb8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x194fbc: 0x0  nop
    ctx->pc = 0x194fbcu;
    // NOP
    // 0x194fc0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x194fc0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x194fc4: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x194fc4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_194fc8:
    // 0x194fc8: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x194fc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x194fcc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x194fccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194fd0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x194fd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194fd4: 0xc0414ca  jal         func_105328
    ctx->pc = 0x194FD4u;
    SET_GPR_U32(ctx, 31, 0x194FDCu);
    ctx->pc = 0x194FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194FD4u;
    // 0x194fd8: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x194FD4u, 0x194FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194FDCu;
label_194fdc:
    // 0x194fdc: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x194FDCu;
    {
        const bool branch_taken_0x194fdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x194fdc) {
            ctx->pc = 0x195098u;
            goto label_195098;
        }
    }
    ctx->pc = 0x194FE4u;
    // 0x194fe4: 0x0  nop
    ctx->pc = 0x194fe4u;
    // NOP
label_194fe8:
    // 0x194fe8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x194fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x194fec: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x194fecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194ff0: 0xc0414d0  jal         func_105340
    ctx->pc = 0x194FF0u;
    SET_GPR_U32(ctx, 31, 0x194FF8u);
    ctx->pc = 0x194FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194FF0u;
    // 0x194ff4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x194FF0u, 0x194FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194FF8u;
label_194ff8:
    // 0x194ff8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x194ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x194ffc: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x194ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x195000: 0xc041472  jal         func_1051C8
    ctx->pc = 0x195000u;
    SET_GPR_U32(ctx, 31, 0x195008u);
    ctx->pc = 0x195004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195000u;
    // 0x195004: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x195000u, 0x195008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195008u;
label_195008:
    // 0x195008: 0x978286c0  lhu         $v0, -0x7940($gp)
    ctx->pc = 0x195008u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936256)));
    // 0x19500c: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x19500cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x195010: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x195010u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x195014: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x195014u;
    {
        const bool branch_taken_0x195014 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x195018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195014u;
        // 0x195018: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195014) {
            ctx->pc = 0x195028u;
            goto label_195028;
        }
    }
    ctx->pc = 0x19501Cu;
    // 0x19501c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19501cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x195020: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x195020u;
    {
        const bool branch_taken_0x195020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195020u;
        // 0x195024: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x195020) {
            ctx->pc = 0x195040u;
            goto label_195040;
        }
    }
    ctx->pc = 0x195028u;
label_195028:
    // 0x195028: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x195028u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x19502c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x19502cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x195030: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x195030u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x195034: 0x0  nop
    ctx->pc = 0x195034u;
    // NOP
    // 0x195038: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x195038u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x19503c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x19503cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_195040:
    // 0x195040: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x195040u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x195044: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x195044u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x195048: 0xc0414dc  jal         func_105370
    ctx->pc = 0x195048u;
    SET_GPR_U32(ctx, 31, 0x195050u);
    ctx->pc = 0x19504Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195048u;
    // 0x19504c: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x195048u, 0x195050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195050u;
label_195050:
    // 0x195050: 0x978286c8  lhu         $v0, -0x7938($gp)
    ctx->pc = 0x195050u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936264)));
    // 0x195054: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x195054u;
    {
        const bool branch_taken_0x195054 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x195058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195054u;
        // 0x195058: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195054) {
            ctx->pc = 0x195068u;
            goto label_195068;
        }
    }
    ctx->pc = 0x19505Cu;
    // 0x19505c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19505cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x195060: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x195060u;
    {
        const bool branch_taken_0x195060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195060u;
        // 0x195064: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x195060) {
            ctx->pc = 0x195080u;
            goto label_195080;
        }
    }
    ctx->pc = 0x195068u;
label_195068:
    // 0x195068: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x195068u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x19506c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x19506cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x195070: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x195070u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x195074: 0x0  nop
    ctx->pc = 0x195074u;
    // NOP
    // 0x195078: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x195078u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x19507c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x19507cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_195080:
    // 0x195080: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x195080u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x195084: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x195084u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195088: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x195088u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19508c: 0xc0414ca  jal         func_105328
    ctx->pc = 0x19508Cu;
    SET_GPR_U32(ctx, 31, 0x195094u);
    ctx->pc = 0x195090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19508Cu;
    // 0x195090: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x19508Cu, 0x195094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195094u;
label_195094:
    // 0x195094: 0x0  nop
    ctx->pc = 0x195094u;
    // NOP
label_195098:
    // 0x195098: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x195098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x19509c: 0xaf82875c  sw          $v0, -0x78A4($gp)
    ctx->pc = 0x19509cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936412), GPR_U32(ctx, 2));
    // 0x1950a0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1950A0u;
    {
        const bool branch_taken_0x1950a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1950A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1950A0u;
        // 0x1950a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1950a0) {
            ctx->pc = 0x1950D0u;
            goto label_1950d0;
        }
    }
    ctx->pc = 0x1950A8u;
label_1950a8:
    // 0x1950a8: 0x8f82875c  lw          $v0, -0x78A4($gp)
    ctx->pc = 0x1950a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936412)));
    // 0x1950ac: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1950acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1950b0: 0xaf82875c  sw          $v0, -0x78A4($gp)
    ctx->pc = 0x1950b0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936412), GPR_U32(ctx, 2));
    // 0x1950b4: 0x8f82875c  lw          $v0, -0x78A4($gp)
    ctx->pc = 0x1950b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936412)));
    // 0x1950b8: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1950B8u;
    {
        const bool branch_taken_0x1950b8 = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x1950b8) {
            ctx->pc = 0x1950C8u;
            goto label_1950c8;
        }
    }
    ctx->pc = 0x1950C0u;
    // 0x1950c0: 0xaf80875c  sw          $zero, -0x78A4($gp)
    ctx->pc = 0x1950c0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936412), GPR_U32(ctx, 0));
    // 0x1950c4: 0x0  nop
    ctx->pc = 0x1950c4u;
    // NOP
label_1950c8:
    // 0x1950c8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1950c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1950cc: 0x0  nop
    ctx->pc = 0x1950ccu;
    // NOP
label_1950d0:
    // 0x1950d0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1950d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1950d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1950d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1950d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1950d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1950dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1950DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1950E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1950DCu;
        // 0x1950e0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1950DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1950E4u;
}
