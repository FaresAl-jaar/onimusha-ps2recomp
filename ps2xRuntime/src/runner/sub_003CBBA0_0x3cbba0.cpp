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

// Function: sub_003CBBA0
// Address: 0x3cbba0 - 0x3cc218
void sub_003CBBA0_0x3cbba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003CBBA0_0x3cbba0");
#endif

    switch (ctx->pc) {
        case 0x3cbc18u: goto label_3cbc18;
        case 0x3cbd48u: goto label_3cbd48;
        case 0x3cc02cu: goto label_3cc02c;
        case 0x3cc1d0u: goto label_3cc1d0;
        default: break;
    }

    ctx->pc = 0x3cbba0u;

    // 0x3cbba0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3cbba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3cbba4: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x3cbba4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x3cbba8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3cbba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3cbbac: 0x2463e460  addiu       $v1, $v1, -0x1BA0
    ctx->pc = 0x3cbbacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960224));
    // 0x3cbbb0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3cbbb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3cbbb4: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3cbbb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3cbbb8: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x3cbbb8u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x65E460u));
    // 0x3cbbbc: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x3cbbbcu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x3cbbc0: 0x90830821  lbu         $v1, 0x821($a0)
    ctx->pc = 0x3cbbc0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2081)));
    // 0x3cbbc4: 0x2c610007  sltiu       $at, $v1, 0x7
    ctx->pc = 0x3cbbc4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x3cbbc8: 0x1020018f  beqz        $at, . + 4 + (0x18F << 2)
    ctx->pc = 0x3CBBC8u;
    {
        const bool branch_taken_0x3cbbc8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CBBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBBC8u;
        // 0x3cbbcc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cbbc8) {
            ctx->pc = 0x3CC208u;
            goto label_3cc208;
        }
    }
    ctx->pc = 0x3CBBD0u;
    // 0x3cbbd0: 0x3c050068  lui         $a1, 0x68
    ctx->pc = 0x3cbbd0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)104 << 16));
    // 0x3cbbd4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3cbbd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3cbbd8: 0x24a52f90  addiu       $a1, $a1, 0x2F90
    ctx->pc = 0x3cbbd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12176));
    // 0x3cbbdc: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3cbbdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3cbbe0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3cbbe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3cbbe4: 0x600008  jr          $v1
    ctx->pc = 0x3CBBE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3CBBF0u: goto label_3cbbf0;
            case 0x3CBCE8u: goto label_3cbce8;
            case 0x3CBEA0u: goto label_3cbea0;
            case 0x3CBF00u: goto label_3cbf00;
            case 0x3CC060u: goto label_3cc060;
            case 0x3CC098u: goto label_3cc098;
            case 0x3CC170u: goto label_3cc170;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CBBE4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3CBBECu;
    // 0x3cbbec: 0x0  nop
    ctx->pc = 0x3cbbecu;
    // NOP
label_3cbbf0:
    // 0x3cbbf0: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3cbbf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x3cbbf4: 0x2442e470  addiu       $v0, $v0, -0x1B90
    ctx->pc = 0x3cbbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960240));
    // 0x3cbbf8: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x3cbbf8u;
    { uint32_t bits = FAST_READ32(0x65E470u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3cbbfc: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x3cbbfcu;
    { uint32_t bits = FAST_READ32(0x65E474u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3cbc00: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x3cbc00u;
    { uint32_t bits = FAST_READ32(0x65E478u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3cbc04: 0xe60206a0  swc1        $f2, 0x6A0($s0)
    ctx->pc = 0x3cbc04u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1696), bits); }
    // 0x3cbc08: 0xe60106a4  swc1        $f1, 0x6A4($s0)
    ctx->pc = 0x3cbc08u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1700), bits); }
    // 0x3cbc0c: 0xe60006a8  swc1        $f0, 0x6A8($s0)
    ctx->pc = 0x3cbc0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1704), bits); }
    // 0x3cbc10: 0xc06039c  jal         func_180E70
    ctx->pc = 0x3CBC10u;
    SET_GPR_U32(ctx, 31, 0x3CBC18u);
    ctx->pc = 0x3CBC14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CBC10u;
    // 0x3cbc14: 0x8e040054  lw          $a0, 0x54($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180E70u, 0x3CBC10u, 0x3CBC18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CBC18u;
label_3cbc18:
    // 0x3cbc18: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x3cbc18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3cbc1c: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x3cbc1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3cbc20: 0x10650009  beq         $v1, $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3CBC20u;
    {
        const bool branch_taken_0x3cbc20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x3cbc20) {
            ctx->pc = 0x3CBC48u;
            goto label_3cbc48;
        }
    }
    ctx->pc = 0x3CBC28u;
    // 0x3cbc28: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x3cbc28u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x3cbc2c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3cbc2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3cbc30: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x3cbc30u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x3cbc34: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x3cbc34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x3cbc38: 0xa60507f2  sh          $a1, 0x7F2($s0)
    ctx->pc = 0x3cbc38u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 5));
    // 0x3cbc3c: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x3cbc3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x3cbc40: 0xa20407f5  sb          $a0, 0x7F5($s0)
    ctx->pc = 0x3cbc40u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 4));
    // 0x3cbc44: 0xae0307ec  sw          $v1, 0x7EC($s0)
    ctx->pc = 0x3cbc44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 3));
label_3cbc48:
    // 0x3cbc48: 0x92032b31  lbu         $v1, 0x2B31($s0)
    ctx->pc = 0x3cbc48u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11057)));
    // 0x3cbc4c: 0x1060016e  beqz        $v1, . + 4 + (0x16E << 2)
    ctx->pc = 0x3CBC4Cu;
    {
        const bool branch_taken_0x3cbc4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cbc4c) {
            ctx->pc = 0x3CC208u;
            goto label_3cc208;
        }
    }
    ctx->pc = 0x3CBC54u;
    // 0x3cbc54: 0x3c034100  lui         $v1, 0x4100
    ctx->pc = 0x3cbc54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
    // 0x3cbc58: 0x92060002  lbu         $a2, 0x2($s0)
    ctx->pc = 0x3cbc58u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x3cbc5c: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x3cbc5cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3cbc60: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x3cbc60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x3cbc64: 0x3c044080  lui         $a0, 0x4080
    ctx->pc = 0x3cbc64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16512 << 16));
    // 0x3cbc68: 0x24a50b8c  addiu       $a1, $a1, 0xB8C
    ctx->pc = 0x3cbc68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2956));
    // 0x3cbc6c: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x3cbc6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x3cbc70: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3cbc70u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3cbc74: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x3cbc74u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3cbc78: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x3cbc78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x3cbc7c: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x3cbc7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x3cbc80: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3cbc80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3cbc84: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x3cbc84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x3cbc88: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x3cbc88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3cbc8c: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x3cbc8cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x3cbc90: 0xe6012b28  swc1        $f1, 0x2B28($s0)
    ctx->pc = 0x3cbc90u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 11048), bits); }
    // 0x3cbc94: 0xc7818078  lwc1        $f1, -0x7F88($gp)
    ctx->pc = 0x3cbc94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3cbc98: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x3cbc98u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x3cbc9c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3cbc9cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3cbca0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3CBCA0u;
    {
        const bool branch_taken_0x3cbca0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3cbca0) {
            ctx->pc = 0x3CBCB8u;
            goto label_3cbcb8;
        }
    }
    ctx->pc = 0x3CBCA8u;
    // 0x3cbca8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3cbca8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3cbcac: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3cbcacu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3cbcb0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3CBCB0u;
    {
        const bool branch_taken_0x3cbcb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CBCB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBCB0u;
        // 0x3cbcb4: 0xa6040828  sh          $a0, 0x828($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 2088), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cbcb0) {
            ctx->pc = 0x3CBCD4u;
            goto label_3cbcd4;
        }
    }
    ctx->pc = 0x3CBCB8u;
label_3cbcb8:
    // 0x3cbcb8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3cbcb8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3cbcbc: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3cbcbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3cbcc0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3cbcc0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3cbcc4: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3cbcc4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3cbcc8: 0x0  nop
    ctx->pc = 0x3cbcc8u;
    // NOP
    // 0x3cbccc: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3cbcccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3cbcd0: 0xa6040828  sh          $a0, 0x828($s0)
    ctx->pc = 0x3cbcd0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2088), (uint16_t)GPR_U32(ctx, 4));
label_3cbcd4:
    // 0x3cbcd4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3cbcd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3cbcd8: 0xa2030821  sb          $v1, 0x821($s0)
    ctx->pc = 0x3cbcd8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
    // 0x3cbcdc: 0x3c03c2c8  lui         $v1, 0xC2C8
    ctx->pc = 0x3cbcdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49864 << 16));
    // 0x3cbce0: 0x10000149  b           . + 4 + (0x149 << 2)
    ctx->pc = 0x3CBCE0u;
    {
        const bool branch_taken_0x3cbce0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CBCE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBCE0u;
        // 0x3cbce4: 0xae032b24  sw          $v1, 0x2B24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 11044), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cbce0) {
            ctx->pc = 0x3CC208u;
            goto label_3cc208;
        }
    }
    ctx->pc = 0x3CBCE8u;
label_3cbce8:
    // 0x3cbce8: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x3cbce8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x3cbcec: 0x90236c1c  lbu         $v1, 0x6C1C($at)
    ctx->pc = 0x3cbcecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x3cbcf0: 0x27828060  addiu       $v0, $gp, -0x7FA0
    ctx->pc = 0x3cbcf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x3cbcf4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3cbcf4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3cbcf8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3cbcf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3cbcfc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3cbcfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3cbd00: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3CBD00u;
    {
        const bool branch_taken_0x3cbd00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cbd00) {
            ctx->pc = 0x3CBD18u;
            goto label_3cbd18;
        }
    }
    ctx->pc = 0x3CBD08u;
    // 0x3cbd08: 0x78420020  lq          $v0, 0x20($v0)
    ctx->pc = 0x3cbd08u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x3cbd0c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3CBD0Cu;
    {
        const bool branch_taken_0x3cbd0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CBD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBD0Cu;
        // 0x3cbd10: 0x7e020870  sq          $v0, 0x870($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 2160), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cbd0c) {
            ctx->pc = 0x3CBD20u;
            goto label_3cbd20;
        }
    }
    ctx->pc = 0x3CBD14u;
    // 0x3cbd14: 0x0  nop
    ctx->pc = 0x3cbd14u;
    // NOP
label_3cbd18:
    // 0x3cbd18: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3cbd18u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3cbd1c: 0x7e020870  sq          $v0, 0x870($s0)
    ctx->pc = 0x3cbd1cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 2160), GPR_VEC(ctx, 2));
label_3cbd20:
    // 0x3cbd20: 0x96020828  lhu         $v0, 0x828($s0)
    ctx->pc = 0x3cbd20u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2088)));
    // 0x3cbd24: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3CBD24u;
    {
        const bool branch_taken_0x3cbd24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cbd24) {
            ctx->pc = 0x3CBD38u;
            goto label_3cbd38;
        }
    }
    ctx->pc = 0x3CBD2Cu;
    // 0x3cbd2c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3cbd2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3cbd30: 0xa6020828  sh          $v0, 0x828($s0)
    ctx->pc = 0x3cbd30u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2088), (uint16_t)GPR_U32(ctx, 2));
    // 0x3cbd34: 0x0  nop
    ctx->pc = 0x3cbd34u;
    // NOP
label_3cbd38:
    // 0x3cbd38: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x3cbd38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x3cbd3c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3cbd3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3cbd40: 0xc0f2a20  jal         func_3CA880
    ctx->pc = 0x3CBD40u;
    SET_GPR_U32(ctx, 31, 0x3CBD48u);
    ctx->pc = 0x3CBD44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CBD40u;
    // 0x3cbd44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CA880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CA880u, 0x3CBD40u, 0x3CBD48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CBD48u;
label_3cbd48:
    // 0x3cbd48: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3cbd48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3cbd4c: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3CBD4Cu;
    {
        const bool branch_taken_0x3cbd4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x3cbd4c) {
            ctx->pc = 0x3CBD60u;
            goto label_3cbd60;
        }
    }
    ctx->pc = 0x3CBD54u;
    // 0x3cbd54: 0x96030828  lhu         $v1, 0x828($s0)
    ctx->pc = 0x3cbd54u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2088)));
    // 0x3cbd58: 0x1460012b  bnez        $v1, . + 4 + (0x12B << 2)
    ctx->pc = 0x3CBD58u;
    {
        const bool branch_taken_0x3cbd58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3cbd58) {
            ctx->pc = 0x3CC208u;
            goto label_3cc208;
        }
    }
    ctx->pc = 0x3CBD60u;
label_3cbd60:
    // 0x3cbd60: 0x3c034351  lui         $v1, 0x4351
    ctx->pc = 0x3cbd60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17233 << 16));
    // 0x3cbd64: 0xc6010024  lwc1        $f1, 0x24($s0)
    ctx->pc = 0x3cbd64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3cbd68: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x3cbd68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x3cbd6c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3cbd6cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3cbd70: 0x0  nop
    ctx->pc = 0x3cbd70u;
    // NOP
    // 0x3cbd74: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x3cbd74u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3cbd78: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x3cbd78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x3cbd7c: 0x92032b30  lbu         $v1, 0x2B30($s0)
    ctx->pc = 0x3cbd7cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11056)));
    // 0x3cbd80: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x3CBD80u;
    {
        const bool branch_taken_0x3cbd80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cbd80) {
            ctx->pc = 0x3CBDF8u;
            goto label_3cbdf8;
        }
    }
    ctx->pc = 0x3CBD88u;
    // 0x3cbd88: 0x3c044396  lui         $a0, 0x4396
    ctx->pc = 0x3cbd88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17302 << 16));
    // 0x3cbd8c: 0x3c034270  lui         $v1, 0x4270
    ctx->pc = 0x3cbd8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17008 << 16));
    // 0x3cbd90: 0xae042b24  sw          $a0, 0x2B24($s0)
    ctx->pc = 0x3cbd90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11044), GPR_U32(ctx, 4));
    // 0x3cbd94: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x3cbd94u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3cbd98: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x3cbd98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3cbd9c: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x3cbd9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x3cbda0: 0x34648889  ori         $a0, $v1, 0x8889
    ctx->pc = 0x3cbda0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x3cbda4: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x3cbda4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x3cbda8: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x3cbda8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3cbdac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3cbdacu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3cbdb0: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3cbdb0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x3cbdb4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3cbdb4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3cbdb8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3cbdb8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3cbdbc: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3CBDBCu;
    {
        const bool branch_taken_0x3cbdbc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3cbdbc) {
            ctx->pc = 0x3CBDD4u;
            goto label_3cbdd4;
        }
    }
    ctx->pc = 0x3CBDC4u;
    // 0x3cbdc4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3cbdc4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3cbdc8: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3cbdc8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3cbdcc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3CBDCCu;
    {
        const bool branch_taken_0x3cbdcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CBDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBDCCu;
        // 0x3cbdd0: 0xa6040828  sh          $a0, 0x828($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 2088), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cbdcc) {
            ctx->pc = 0x3CBDF0u;
            goto label_3cbdf0;
        }
    }
    ctx->pc = 0x3CBDD4u;
label_3cbdd4:
    // 0x3cbdd4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3cbdd4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3cbdd8: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3cbdd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3cbddc: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3cbddcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3cbde0: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3cbde0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3cbde4: 0x0  nop
    ctx->pc = 0x3cbde4u;
    // NOP
    // 0x3cbde8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3cbde8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3cbdec: 0xa6040828  sh          $a0, 0x828($s0)
    ctx->pc = 0x3cbdecu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2088), (uint16_t)GPR_U32(ctx, 4));
label_3cbdf0:
    // 0x3cbdf0: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x3CBDF0u;
    {
        const bool branch_taken_0x3cbdf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cbdf0) {
            ctx->pc = 0x3CBE60u;
            goto label_3cbe60;
        }
    }
    ctx->pc = 0x3CBDF8u;
label_3cbdf8:
    // 0x3cbdf8: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x3cbdf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
    // 0x3cbdfc: 0xae032b24  sw          $v1, 0x2B24($s0)
    ctx->pc = 0x3cbdfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11044), GPR_U32(ctx, 3));
    // 0x3cbe00: 0x3c043c88  lui         $a0, 0x3C88
    ctx->pc = 0x3cbe00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15496 << 16));
    // 0x3cbe04: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x3cbe04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3cbe08: 0x3c034316  lui         $v1, 0x4316
    ctx->pc = 0x3cbe08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17174 << 16));
    // 0x3cbe0c: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x3cbe0cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3cbe10: 0x34848889  ori         $a0, $a0, 0x8889
    ctx->pc = 0x3cbe10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)34953);
    // 0x3cbe14: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x3cbe14u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3cbe18: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x3cbe18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x3cbe1c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3cbe1cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3cbe20: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3cbe20u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x3cbe24: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3cbe24u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3cbe28: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3cbe28u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3cbe2c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3CBE2Cu;
    {
        const bool branch_taken_0x3cbe2c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3cbe2c) {
            ctx->pc = 0x3CBE44u;
            goto label_3cbe44;
        }
    }
    ctx->pc = 0x3CBE34u;
    // 0x3cbe34: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3cbe34u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3cbe38: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3cbe38u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3cbe3c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3CBE3Cu;
    {
        const bool branch_taken_0x3cbe3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CBE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBE3Cu;
        // 0x3cbe40: 0xa6040828  sh          $a0, 0x828($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 2088), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cbe3c) {
            ctx->pc = 0x3CBE60u;
            goto label_3cbe60;
        }
    }
    ctx->pc = 0x3CBE44u;
label_3cbe44:
    // 0x3cbe44: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3cbe44u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3cbe48: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3cbe48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3cbe4c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3cbe4cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3cbe50: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3cbe50u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3cbe54: 0x0  nop
    ctx->pc = 0x3cbe54u;
    // NOP
    // 0x3cbe58: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3cbe58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3cbe5c: 0xa6040828  sh          $a0, 0x828($s0)
    ctx->pc = 0x3cbe5cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2088), (uint16_t)GPR_U32(ctx, 4));
label_3cbe60:
    // 0x3cbe60: 0x260300a0  addiu       $v1, $s0, 0xA0
    ctx->pc = 0x3cbe60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x3cbe64: 0x7c600000  sq          $zero, 0x0($v1)
    ctx->pc = 0x3cbe64u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 0));
    // 0x3cbe68: 0x24050050  addiu       $a1, $zero, 0x50
    ctx->pc = 0x3cbe68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x3cbe6c: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x3cbe6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x3cbe70: 0x3c048004  lui         $a0, 0x8004
    ctx->pc = 0x3cbe70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32772 << 16));
    // 0x3cbe74: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3cbe74u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3cbe78: 0x0  nop
    ctx->pc = 0x3cbe78u;
    // NOP
    // 0x3cbe7c: 0xe6002b28  swc1        $f0, 0x2B28($s0)
    ctx->pc = 0x3cbe7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 11048), bits); }
    // 0x3cbe80: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3cbe80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3cbe84: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x3cbe84u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x3cbe88: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x3cbe88u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x3cbe8c: 0xa60507f2  sh          $a1, 0x7F2($s0)
    ctx->pc = 0x3cbe8cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 5));
    // 0x3cbe90: 0xa20007f5  sb          $zero, 0x7F5($s0)
    ctx->pc = 0x3cbe90u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 0));
    // 0x3cbe94: 0xae0407ec  sw          $a0, 0x7EC($s0)
    ctx->pc = 0x3cbe94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 4));
    // 0x3cbe98: 0x100000db  b           . + 4 + (0xDB << 2)
    ctx->pc = 0x3CBE98u;
    {
        const bool branch_taken_0x3cbe98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CBE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBE98u;
        // 0x3cbe9c: 0xa2030821  sb          $v1, 0x821($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cbe98) {
            ctx->pc = 0x3CC208u;
            goto label_3cc208;
        }
    }
    ctx->pc = 0x3CBEA0u;
label_3cbea0:
    // 0x3cbea0: 0x3c033f4c  lui         $v1, 0x3F4C
    ctx->pc = 0x3cbea0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16204 << 16));
    // 0x3cbea4: 0xc6000090  lwc1        $f0, 0x90($s0)
    ctx->pc = 0x3cbea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3cbea8: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x3cbea8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x3cbeac: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3cbeacu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3cbeb0: 0x0  nop
    ctx->pc = 0x3cbeb0u;
    // NOP
    // 0x3cbeb4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3cbeb4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3cbeb8: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x3cbeb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x3cbebc: 0xc6000098  lwc1        $f0, 0x98($s0)
    ctx->pc = 0x3cbebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3cbec0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3cbec0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3cbec4: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x3cbec4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x3cbec8: 0x96030828  lhu         $v1, 0x828($s0)
    ctx->pc = 0x3cbec8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2088)));
    // 0x3cbecc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3CBECCu;
    {
        const bool branch_taken_0x3cbecc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cbecc) {
            ctx->pc = 0x3CBEE0u;
            goto label_3cbee0;
        }
    }
    ctx->pc = 0x3CBED4u;
    // 0x3cbed4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3cbed4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3cbed8: 0x100000cb  b           . + 4 + (0xCB << 2)
    ctx->pc = 0x3CBED8u;
    {
        const bool branch_taken_0x3cbed8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CBEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBED8u;
        // 0x3cbedc: 0xa6030828  sh          $v1, 0x828($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 2088), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cbed8) {
            ctx->pc = 0x3CC208u;
            goto label_3cc208;
        }
    }
    ctx->pc = 0x3CBEE0u;
label_3cbee0:
    // 0x3cbee0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3cbee0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3cbee4: 0xa2032b2c  sb          $v1, 0x2B2C($s0)
    ctx->pc = 0x3cbee4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11052), (uint8_t)GPR_U32(ctx, 3));
    // 0x3cbee8: 0x3c03c3e1  lui         $v1, 0xC3E1
    ctx->pc = 0x3cbee8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50145 << 16));
    // 0x3cbeec: 0xae032b24  sw          $v1, 0x2B24($s0)
    ctx->pc = 0x3cbeecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11044), GPR_U32(ctx, 3));
    // 0x3cbef0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3cbef0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3cbef4: 0x100000c4  b           . + 4 + (0xC4 << 2)
    ctx->pc = 0x3CBEF4u;
    {
        const bool branch_taken_0x3cbef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CBEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBEF4u;
        // 0x3cbef8: 0xa2030821  sb          $v1, 0x821($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cbef4) {
            ctx->pc = 0x3CC208u;
            goto label_3cc208;
        }
    }
    ctx->pc = 0x3CBEFCu;
    // 0x3cbefc: 0x0  nop
    ctx->pc = 0x3cbefcu;
    // NOP
label_3cbf00:
    // 0x3cbf00: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3cbf00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3cbf04: 0xa2032b2c  sb          $v1, 0x2B2C($s0)
    ctx->pc = 0x3cbf04u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11052), (uint8_t)GPR_U32(ctx, 3));
    // 0x3cbf08: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x3cbf08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x3cbf0c: 0x8e050148  lw          $a1, 0x148($s0)
    ctx->pc = 0x3cbf0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x3cbf10: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x3cbf10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x3cbf14: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3cbf14u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3cbf18: 0xa41825  or          $v1, $a1, $a0
    ctx->pc = 0x3cbf18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x3cbf1c: 0xae030148  sw          $v1, 0x148($s0)
    ctx->pc = 0x3cbf1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 3));
    // 0x3cbf20: 0xc60128f0  lwc1        $f1, 0x28F0($s0)
    ctx->pc = 0x3cbf20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 10480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3cbf24: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3cbf24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3cbf28: 0x450000b7  bc1f        . + 4 + (0xB7 << 2)
    ctx->pc = 0x3CBF28u;
    {
        const bool branch_taken_0x3cbf28 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3cbf28) {
            ctx->pc = 0x3CC208u;
            goto label_3cc208;
        }
    }
    ctx->pc = 0x3CBF30u;
    // 0x3cbf30: 0xa600082a  sh          $zero, 0x82A($s0)
    ctx->pc = 0x3cbf30u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2090), (uint16_t)GPR_U32(ctx, 0));
    // 0x3cbf34: 0x92032b30  lbu         $v1, 0x2B30($s0)
    ctx->pc = 0x3cbf34u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11056)));
    // 0x3cbf38: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x3CBF38u;
    {
        const bool branch_taken_0x3cbf38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cbf38) {
            ctx->pc = 0x3CBFB0u;
            goto label_3cbfb0;
        }
    }
    ctx->pc = 0x3CBF40u;
    // 0x3cbf40: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x3cbf40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3cbf44: 0x3c034270  lui         $v1, 0x4270
    ctx->pc = 0x3cbf44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17008 << 16));
    // 0x3cbf48: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x3cbf48u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3cbf4c: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x3cbf4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x3cbf50: 0x34648889  ori         $a0, $v1, 0x8889
    ctx->pc = 0x3cbf50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x3cbf54: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x3cbf54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x3cbf58: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3cbf58u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x3cbf5c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x3cbf5cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3cbf60: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3cbf60u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3cbf64: 0x0  nop
    ctx->pc = 0x3cbf64u;
    // NOP
    // 0x3cbf68: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3cbf68u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3cbf6c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3cbf6cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3cbf70: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3CBF70u;
    {
        const bool branch_taken_0x3cbf70 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3cbf70) {
            ctx->pc = 0x3CBF88u;
            goto label_3cbf88;
        }
    }
    ctx->pc = 0x3CBF78u;
    // 0x3cbf78: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3cbf78u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3cbf7c: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3cbf7cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3cbf80: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3CBF80u;
    {
        const bool branch_taken_0x3cbf80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CBF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBF80u;
        // 0x3cbf84: 0xa6040828  sh          $a0, 0x828($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 2088), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cbf80) {
            ctx->pc = 0x3CBFA4u;
            goto label_3cbfa4;
        }
    }
    ctx->pc = 0x3CBF88u;
label_3cbf88:
    // 0x3cbf88: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3cbf88u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3cbf8c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3cbf8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3cbf90: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3cbf90u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3cbf94: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3cbf94u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3cbf98: 0x0  nop
    ctx->pc = 0x3cbf98u;
    // NOP
    // 0x3cbf9c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3cbf9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3cbfa0: 0xa6040828  sh          $a0, 0x828($s0)
    ctx->pc = 0x3cbfa0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2088), (uint16_t)GPR_U32(ctx, 4));
label_3cbfa4:
    // 0x3cbfa4: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x3CBFA4u;
    {
        const bool branch_taken_0x3cbfa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cbfa4) {
            ctx->pc = 0x3CC030u;
            goto label_3cc030;
        }
    }
    ctx->pc = 0x3CBFACu;
    // 0x3cbfac: 0x0  nop
    ctx->pc = 0x3cbfacu;
    // NOP
label_3cbfb0:
    // 0x3cbfb0: 0x3c024370  lui         $v0, 0x4370
    ctx->pc = 0x3cbfb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17264 << 16));
    // 0x3cbfb4: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x3cbfb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3cbfb8: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x3cbfb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x3cbfbc: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x3cbfbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3cbfc0: 0x34638889  ori         $v1, $v1, 0x8889
    ctx->pc = 0x3cbfc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x3cbfc4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3cbfc4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3cbfc8: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x3cbfc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x3cbfcc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3cbfccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3cbfd0: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3cbfd0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x3cbfd4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3cbfd4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3cbfd8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3cbfd8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3cbfdc: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3CBFDCu;
    {
        const bool branch_taken_0x3cbfdc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3cbfdc) {
            ctx->pc = 0x3CBFF4u;
            goto label_3cbff4;
        }
    }
    ctx->pc = 0x3CBFE4u;
    // 0x3cbfe4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3cbfe4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3cbfe8: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x3cbfe8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3cbfec: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3CBFECu;
    {
        const bool branch_taken_0x3cbfec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cbfec) {
            ctx->pc = 0x3CC00Cu;
            goto label_3cc00c;
        }
    }
    ctx->pc = 0x3CBFF4u;
label_3cbff4:
    // 0x3cbff4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3cbff4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3cbff8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3cbff8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3cbffc: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3cbffcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3cc000: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x3cc000u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3cc004: 0x0  nop
    ctx->pc = 0x3cc004u;
    // NOP
    // 0x3cc008: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3cc008u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3cc00c:
    // 0x3cc00c: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x3cc00cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x3cc010: 0xa6030828  sh          $v1, 0x828($s0)
    ctx->pc = 0x3cc010u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2088), (uint16_t)GPR_U32(ctx, 3));
    // 0x3cc014: 0x24848b30  addiu       $a0, $a0, -0x74D0
    ctx->pc = 0x3cc014u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937392));
    // 0x3cc018: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3cc018u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cc01c: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x3cc01cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x3cc020: 0x24070f00  addiu       $a3, $zero, 0xF00
    ctx->pc = 0x3cc020u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3840));
    // 0x3cc024: 0xc052214  jal         func_148850
    ctx->pc = 0x3CC024u;
    SET_GPR_U32(ctx, 31, 0x3CC02Cu);
    ctx->pc = 0x3CC028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CC024u;
    // 0x3cc028: 0x24080050  addiu       $t0, $zero, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x148850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x148850u, 0x3CC024u, 0x3CC02Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CC02Cu;
label_3cc02c:
    // 0x3cc02c: 0x0  nop
    ctx->pc = 0x3cc02cu;
    // NOP
label_3cc030:
    // 0x3cc030: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x3cc030u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x3cc034: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x3cc034u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x3cc038: 0x24030059  addiu       $v1, $zero, 0x59
    ctx->pc = 0x3cc038u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 89));
    // 0x3cc03c: 0xa60307f2  sh          $v1, 0x7F2($s0)
    ctx->pc = 0x3cc03cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 3));
    // 0x3cc040: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3cc040u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3cc044: 0xa20007f5  sb          $zero, 0x7F5($s0)
    ctx->pc = 0x3cc044u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 0));
    // 0x3cc048: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x3cc048u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x3cc04c: 0xae0307ec  sw          $v1, 0x7EC($s0)
    ctx->pc = 0x3cc04cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 3));
    // 0x3cc050: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3cc050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3cc054: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x3CC054u;
    {
        const bool branch_taken_0x3cc054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CC058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC054u;
        // 0x3cc058: 0xa2030821  sb          $v1, 0x821($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cc054) {
            ctx->pc = 0x3CC208u;
            goto label_3cc208;
        }
    }
    ctx->pc = 0x3CC05Cu;
    // 0x3cc05c: 0x0  nop
    ctx->pc = 0x3cc05cu;
    // NOP
label_3cc060:
    // 0x3cc060: 0x920307f6  lbu         $v1, 0x7F6($s0)
    ctx->pc = 0x3cc060u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2038)));
    // 0x3cc064: 0x10600068  beqz        $v1, . + 4 + (0x68 << 2)
    ctx->pc = 0x3CC064u;
    {
        const bool branch_taken_0x3cc064 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cc064) {
            ctx->pc = 0x3CC208u;
            goto label_3cc208;
        }
    }
    ctx->pc = 0x3CC06Cu;
    // 0x3cc06c: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x3cc06cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x3cc070: 0x24040051  addiu       $a0, $zero, 0x51
    ctx->pc = 0x3cc070u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
    // 0x3cc074: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x3cc074u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x3cc078: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3cc078u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3cc07c: 0xa60407f2  sh          $a0, 0x7F2($s0)
    ctx->pc = 0x3cc07cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 4));
    // 0x3cc080: 0x34640040  ori         $a0, $v1, 0x40
    ctx->pc = 0x3cc080u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x3cc084: 0xa20007f5  sb          $zero, 0x7F5($s0)
    ctx->pc = 0x3cc084u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 0));
    // 0x3cc088: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x3cc088u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3cc08c: 0xae0407ec  sw          $a0, 0x7EC($s0)
    ctx->pc = 0x3cc08cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 4));
    // 0x3cc090: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x3CC090u;
    {
        const bool branch_taken_0x3cc090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CC094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC090u;
        // 0x3cc094: 0xa2030821  sb          $v1, 0x821($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cc090) {
            ctx->pc = 0x3CC208u;
            goto label_3cc208;
        }
    }
    ctx->pc = 0x3CC098u;
label_3cc098:
    // 0x3cc098: 0x8e040148  lw          $a0, 0x148($s0)
    ctx->pc = 0x3cc098u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x3cc09c: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x3cc09cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x3cc0a0: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x3cc0a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3cc0a4: 0xae030148  sw          $v1, 0x148($s0)
    ctx->pc = 0x3cc0a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 3));
    // 0x3cc0a8: 0x8e0306ac  lw          $v1, 0x6AC($s0)
    ctx->pc = 0x3cc0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1708)));
    // 0x3cc0ac: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x3cc0acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x3cc0b0: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x3CC0B0u;
    {
        const bool branch_taken_0x3cc0b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cc0b0) {
            ctx->pc = 0x3CC0E0u;
            goto label_3cc0e0;
        }
    }
    ctx->pc = 0x3CC0B8u;
    // 0x3cc0b8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3cc0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3cc0bc: 0x24040053  addiu       $a0, $zero, 0x53
    ctx->pc = 0x3cc0bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    // 0x3cc0c0: 0xa603082a  sh          $v1, 0x82A($s0)
    ctx->pc = 0x3cc0c0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2090), (uint16_t)GPR_U32(ctx, 3));
    // 0x3cc0c4: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x3cc0c4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x3cc0c8: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3cc0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3cc0cc: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x3cc0ccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x3cc0d0: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x3cc0d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x3cc0d4: 0xa60407f2  sh          $a0, 0x7F2($s0)
    ctx->pc = 0x3cc0d4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 4));
    // 0x3cc0d8: 0xa20007f5  sb          $zero, 0x7F5($s0)
    ctx->pc = 0x3cc0d8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 0));
    // 0x3cc0dc: 0xae0307ec  sw          $v1, 0x7EC($s0)
    ctx->pc = 0x3cc0dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 3));
label_3cc0e0:
    // 0x3cc0e0: 0x9603082a  lhu         $v1, 0x82A($s0)
    ctx->pc = 0x3cc0e0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2090)));
    // 0x3cc0e4: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x3CC0E4u;
    {
        const bool branch_taken_0x3cc0e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cc0e4) {
            ctx->pc = 0x3CC120u;
            goto label_3cc120;
        }
    }
    ctx->pc = 0x3CC0ECu;
    // 0x3cc0ec: 0x920307f6  lbu         $v1, 0x7F6($s0)
    ctx->pc = 0x3cc0ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2038)));
    // 0x3cc0f0: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x3CC0F0u;
    {
        const bool branch_taken_0x3cc0f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cc0f0) {
            ctx->pc = 0x3CC120u;
            goto label_3cc120;
        }
    }
    ctx->pc = 0x3CC0F8u;
    // 0x3cc0f8: 0xa600082a  sh          $zero, 0x82A($s0)
    ctx->pc = 0x3cc0f8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2090), (uint16_t)GPR_U32(ctx, 0));
    // 0x3cc0fc: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3cc0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3cc100: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x3cc100u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x3cc104: 0x24050051  addiu       $a1, $zero, 0x51
    ctx->pc = 0x3cc104u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
    // 0x3cc108: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x3cc108u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x3cc10c: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x3cc10cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x3cc110: 0xa60507f2  sh          $a1, 0x7F2($s0)
    ctx->pc = 0x3cc110u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 5));
    // 0x3cc114: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x3cc114u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x3cc118: 0xa20407f5  sb          $a0, 0x7F5($s0)
    ctx->pc = 0x3cc118u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 4));
    // 0x3cc11c: 0xae0307ec  sw          $v1, 0x7EC($s0)
    ctx->pc = 0x3cc11cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 3));
label_3cc120:
    // 0x3cc120: 0x96030828  lhu         $v1, 0x828($s0)
    ctx->pc = 0x3cc120u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2088)));
    // 0x3cc124: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3CC124u;
    {
        const bool branch_taken_0x3cc124 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cc124) {
            ctx->pc = 0x3CC138u;
            goto label_3cc138;
        }
    }
    ctx->pc = 0x3CC12Cu;
    // 0x3cc12c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3cc12cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3cc130: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x3CC130u;
    {
        const bool branch_taken_0x3cc130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CC134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC130u;
        // 0x3cc134: 0xa6030828  sh          $v1, 0x828($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 2088), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cc130) {
            ctx->pc = 0x3CC208u;
            goto label_3cc208;
        }
    }
    ctx->pc = 0x3CC138u;
label_3cc138:
    // 0x3cc138: 0xae002b24  sw          $zero, 0x2B24($s0)
    ctx->pc = 0x3cc138u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11044), GPR_U32(ctx, 0));
    // 0x3cc13c: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x3cc13cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x3cc140: 0x24030052  addiu       $v1, $zero, 0x52
    ctx->pc = 0x3cc140u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x3cc144: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x3cc144u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x3cc148: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x3cc148u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x3cc14c: 0xa60307f2  sh          $v1, 0x7F2($s0)
    ctx->pc = 0x3cc14cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 3));
    // 0x3cc150: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3cc150u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3cc154: 0xa20407f5  sb          $a0, 0x7F5($s0)
    ctx->pc = 0x3cc154u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 4));
    // 0x3cc158: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x3cc158u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x3cc15c: 0xae0307ec  sw          $v1, 0x7EC($s0)
    ctx->pc = 0x3cc15cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 3));
    // 0x3cc160: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x3cc160u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x3cc164: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x3CC164u;
    {
        const bool branch_taken_0x3cc164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CC168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC164u;
        // 0x3cc168: 0xa2030821  sb          $v1, 0x821($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cc164) {
            ctx->pc = 0x3CC208u;
            goto label_3cc208;
        }
    }
    ctx->pc = 0x3CC16Cu;
    // 0x3cc16c: 0x0  nop
    ctx->pc = 0x3cc16cu;
    // NOP
label_3cc170:
    // 0x3cc170: 0x92032b30  lbu         $v1, 0x2B30($s0)
    ctx->pc = 0x3cc170u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11056)));
    // 0x3cc174: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x3CC174u;
    {
        const bool branch_taken_0x3cc174 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cc174) {
            ctx->pc = 0x3CC1D0u;
            goto label_3cc1d0;
        }
    }
    ctx->pc = 0x3CC17Cu;
    // 0x3cc17c: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x3cc17cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x3cc180: 0x27838060  addiu       $v1, $gp, -0x7FA0
    ctx->pc = 0x3cc180u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x3cc184: 0x90256c1c  lbu         $a1, 0x6C1C($at)
    ctx->pc = 0x3cc184u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x3cc188: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x3cc188u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x3cc18c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3cc18cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3cc190: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3cc190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3cc194: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x3CC194u;
    {
        const bool branch_taken_0x3cc194 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cc194) {
            ctx->pc = 0x3CC1D0u;
            goto label_3cc1d0;
        }
    }
    ctx->pc = 0x3CC19Cu;
    // 0x3cc19c: 0x92060002  lbu         $a2, 0x2($s0)
    ctx->pc = 0x3cc19cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x3cc1a0: 0x24650020  addiu       $a1, $v1, 0x20
    ctx->pc = 0x3cc1a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x3cc1a4: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x3cc1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x3cc1a8: 0x24420b98  addiu       $v0, $v0, 0xB98
    ctx->pc = 0x3cc1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2968));
    // 0x3cc1ac: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x3cc1acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x3cc1b0: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x3cc1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x3cc1b4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3cc1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3cc1b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3cc1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3cc1bc: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x3cc1bcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3cc1c0: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x3cc1c0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x3cc1c4: 0x2343c  dsll32      $a2, $v0, 16
    ctx->pc = 0x3cc1c4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 16));
    // 0x3cc1c8: 0xc0a23e4  jal         func_288F90
    ctx->pc = 0x3CC1C8u;
    SET_GPR_U32(ctx, 31, 0x3CC1D0u);
    ctx->pc = 0x3CC1CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CC1C8u;
    // 0x3cc1cc: 0x6343f  dsra32      $a2, $a2, 16 (Delay Slot)
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x288F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288F90u, 0x3CC1C8u, 0x3CC1D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CC1D0u;
label_3cc1d0:
    // 0x3cc1d0: 0x920307f6  lbu         $v1, 0x7F6($s0)
    ctx->pc = 0x3cc1d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2038)));
    // 0x3cc1d4: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x3CC1D4u;
    {
        const bool branch_taken_0x3cc1d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cc1d4) {
            ctx->pc = 0x3CC208u;
            goto label_3cc208;
        }
    }
    ctx->pc = 0x3CC1DCu;
    // 0x3cc1dc: 0x92060002  lbu         $a2, 0x2($s0)
    ctx->pc = 0x3cc1dcu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x3cc1e0: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x3cc1e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x3cc1e4: 0x24840b8c  addiu       $a0, $a0, 0xB8C
    ctx->pc = 0x3cc1e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2956));
    // 0x3cc1e8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3cc1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3cc1ec: 0x628c0  sll         $a1, $a2, 3
    ctx->pc = 0x3cc1ecu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x3cc1f0: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x3cc1f0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x3cc1f4: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x3cc1f4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x3cc1f8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x3cc1f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x3cc1fc: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x3cc1fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3cc200: 0xe6002b28  swc1        $f0, 0x2B28($s0)
    ctx->pc = 0x3cc200u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 11048), bits); }
    // 0x3cc204: 0xa2030780  sb          $v1, 0x780($s0)
    ctx->pc = 0x3cc204u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
label_3cc208:
    // 0x3cc208: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3cc208u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3cc20c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3cc20cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3cc210: 0x3e00008  jr          $ra
    ctx->pc = 0x3CC210u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CC214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC210u;
        // 0x3cc214: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CC210u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3CC218u;
}
