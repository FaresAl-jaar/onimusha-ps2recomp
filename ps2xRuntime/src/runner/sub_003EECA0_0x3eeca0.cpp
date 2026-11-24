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

// Function: sub_003EECA0
// Address: 0x3eeca0 - 0x3ef034
void sub_003EECA0_0x3eeca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EECA0_0x3eeca0");
#endif

    switch (ctx->pc) {
        case 0x3eed90u: goto label_3eed90;
        case 0x3eeda0u: goto label_3eeda0;
        case 0x3eedb0u: goto label_3eedb0;
        case 0x3eedbcu: goto label_3eedbc;
        case 0x3eedf4u: goto label_3eedf4;
        case 0x3eee00u: goto label_3eee00;
        case 0x3eee10u: goto label_3eee10;
        case 0x3eeec4u: goto label_3eeec4;
        case 0x3eeef4u: goto label_3eeef4;
        case 0x3eef00u: goto label_3eef00;
        case 0x3eef10u: goto label_3eef10;
        case 0x3eefe0u: goto label_3eefe0;
        case 0x3eeff0u: goto label_3eeff0;
        default: break;
    }

    ctx->pc = 0x3eeca0u;

    // 0x3eeca0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3eeca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3eeca4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3eeca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3eeca8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3eeca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3eecac: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3eecacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3eecb0: 0x90830821  lbu         $v1, 0x821($a0)
    ctx->pc = 0x3eecb0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2081)));
    // 0x3eecb4: 0x2c610006  sltiu       $at, $v1, 0x6
    ctx->pc = 0x3eecb4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x3eecb8: 0x102000d9  beqz        $at, . + 4 + (0xD9 << 2)
    ctx->pc = 0x3EECB8u;
    {
        const bool branch_taken_0x3eecb8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EECBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EECB8u;
        // 0x3eecbc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eecb8) {
            ctx->pc = 0x3EF020u;
            goto label_3ef020;
        }
    }
    ctx->pc = 0x3EECC0u;
    // 0x3eecc0: 0x3c040068  lui         $a0, 0x68
    ctx->pc = 0x3eecc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
    // 0x3eecc4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3eecc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3eecc8: 0x248459b0  addiu       $a0, $a0, 0x59B0
    ctx->pc = 0x3eecc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22960));
    // 0x3eeccc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3eecccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3eecd0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3eecd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3eecd4: 0x600008  jr          $v1
    ctx->pc = 0x3EECD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3EECE0u: goto label_3eece0;
            case 0x3EEDF8u: goto label_3eedf8;
            case 0x3EEE50u: goto label_3eee50;
            case 0x3EEEF8u: goto label_3eeef8;
            case 0x3EEF70u: goto label_3eef70;
            case 0x3EEFD8u: goto label_3eefd8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EECD4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3EECDCu;
    // 0x3eecdc: 0x0  nop
    ctx->pc = 0x3eecdcu;
    // NOP
label_3eece0:
    // 0x3eece0: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3eece0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x3eece4: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x3eece4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x3eece8: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x3eece8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x3eecec: 0xc4450000  lwc1        $f5, 0x0($v0)
    ctx->pc = 0x3eececu;
    { uint32_t bits = FAST_READ32(0x660080u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x3eecf0: 0x3c034270  lui         $v1, 0x4270
    ctx->pc = 0x3eecf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17008 << 16));
    // 0x3eecf4: 0xc4440004  lwc1        $f4, 0x4($v0)
    ctx->pc = 0x3eecf4u;
    { uint32_t bits = FAST_READ32(0x660084u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3eecf8: 0x24080050  addiu       $t0, $zero, 0x50
    ctx->pc = 0x3eecf8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x3eecfc: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x3eecfcu;
    { uint32_t bits = FAST_READ32(0x660088u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3eed00: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x3eed00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3eed04: 0x34a60040  ori         $a2, $a1, 0x40
    ctx->pc = 0x3eed04u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)64);
    // 0x3eed08: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3eed08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3eed0c: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x3eed0cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3eed10: 0xe60506a0  swc1        $f5, 0x6A0($s0)
    ctx->pc = 0x3eed10u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1696), bits); }
    // 0x3eed14: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x3eed14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x3eed18: 0xe60406a4  swc1        $f4, 0x6A4($s0)
    ctx->pc = 0x3eed18u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1700), bits); }
    // 0x3eed1c: 0x34428889  ori         $v0, $v0, 0x8889
    ctx->pc = 0x3eed1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x3eed20: 0xe60206a8  swc1        $f2, 0x6A8($s0)
    ctx->pc = 0x3eed20u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1704), bits); }
    // 0x3eed24: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x3eed24u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x3eed28: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3eed28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3eed2c: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x3eed2cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x3eed30: 0xa60807f2  sh          $t0, 0x7F2($s0)
    ctx->pc = 0x3eed30u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 8));
    // 0x3eed34: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x3eed34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x3eed38: 0xa20707f5  sb          $a3, 0x7F5($s0)
    ctx->pc = 0x3eed38u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 7));
    // 0x3eed3c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3eed3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3eed40: 0xae0607ec  sw          $a2, 0x7EC($s0)
    ctx->pc = 0x3eed40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 6));
    // 0x3eed44: 0xa2040821  sb          $a0, 0x821($s0)
    ctx->pc = 0x3eed44u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 4));
    // 0x3eed48: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x3eed48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3eed4c: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3eed4cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x3eed50: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3eed50u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3eed54: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3eed54u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3eed58: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3EED58u;
    {
        const bool branch_taken_0x3eed58 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3eed58) {
            ctx->pc = 0x3EED70u;
            goto label_3eed70;
        }
    }
    ctx->pc = 0x3EED60u;
    // 0x3eed60: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3eed60u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3eed64: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x3eed64u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3eed68: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3EED68u;
    {
        const bool branch_taken_0x3eed68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EED6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EED68u;
        // 0x3eed6c: 0xa6022b30  sh          $v0, 0x2B30($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 11056), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eed68) {
            ctx->pc = 0x3EED88u;
            goto label_3eed88;
        }
    }
    ctx->pc = 0x3EED70u;
label_3eed70:
    // 0x3eed70: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3eed70u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3eed74: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3eed74u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3eed78: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x3eed78u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3eed7c: 0x0  nop
    ctx->pc = 0x3eed7cu;
    // NOP
    // 0x3eed80: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x3eed80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x3eed84: 0xa6022b30  sh          $v0, 0x2B30($s0)
    ctx->pc = 0x3eed84u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11056), (uint16_t)GPR_U32(ctx, 2));
label_3eed88:
    // 0x3eed88: 0xc0fb7b0  jal         func_3EDEC0
    ctx->pc = 0x3EED88u;
    SET_GPR_U32(ctx, 31, 0x3EED90u);
    ctx->pc = 0x3EED8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EED88u;
    // 0x3eed8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EDEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EDEC0u, 0x3EED88u, 0x3EED90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EED90u;
label_3eed90:
    // 0x3eed90: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x3EED90u;
    {
        const bool branch_taken_0x3eed90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3EED94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EED90u;
        // 0x3eed94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eed90) {
            ctx->pc = 0x3EEDF8u;
            goto label_3eedf8;
        }
    }
    ctx->pc = 0x3EED98u;
    // 0x3eed98: 0xc096fb8  jal         func_25BEE0
    ctx->pc = 0x3EED98u;
    SET_GPR_U32(ctx, 31, 0x3EEDA0u);
    ctx->pc = 0x25BEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BEE0u, 0x3EED98u, 0x3EEDA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EEDA0u;
label_3eeda0:
    // 0x3eeda0: 0x86052b2c  lh          $a1, 0x2B2C($s0)
    ctx->pc = 0x3eeda0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11052)));
    // 0x3eeda4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3eeda4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3eeda8: 0xc0aace0  jal         func_2AB380
    ctx->pc = 0x3EEDA8u;
    SET_GPR_U32(ctx, 31, 0x3EEDB0u);
    ctx->pc = 0x3EEDACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EEDA8u;
    // 0x3eedac: 0x26060020  addiu       $a2, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AB380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AB380u, 0x3EEDA8u, 0x3EEDB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EEDB0u;
label_3eedb0:
    // 0x3eedb0: 0x8e042950  lw          $a0, 0x2950($s0)
    ctx->pc = 0x3eedb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10576)));
    // 0x3eedb4: 0xc096c3c  jal         func_25B0F0
    ctx->pc = 0x3EEDB4u;
    SET_GPR_U32(ctx, 31, 0x3EEDBCu);
    ctx->pc = 0x3EEDB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EEDB4u;
    // 0x3eedb8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B0F0u, 0x3EEDB4u, 0x3EEDBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EEDBCu;
label_3eedbc:
    // 0x3eedbc: 0xae112950  sw          $s1, 0x2950($s0)
    ctx->pc = 0x3eedbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 10576), GPR_U32(ctx, 17));
    // 0x3eedc0: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3eedc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3eedc4: 0x86032b2c  lh          $v1, 0x2B2C($s0)
    ctx->pc = 0x3eedc4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11052)));
    // 0x3eedc8: 0x3c022100  lui         $v0, 0x2100
    ctx->pc = 0x3eedc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8448 << 16));
    // 0x3eedcc: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3eedccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3eedd0: 0x34455702  ori         $a1, $v0, 0x5702
    ctx->pc = 0x3eedd0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)22274);
    // 0x3eedd4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3eedd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3eedd8: 0x26070020  addiu       $a3, $s0, 0x20
    ctx->pc = 0x3eedd8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x3eeddc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3eeddcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3eede0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3eede0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3eede4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3eede4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3eede8: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x3eede8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3eedec: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3EEDECu;
    SET_GPR_U32(ctx, 31, 0x3EEDF4u);
    ctx->pc = 0x3EEDF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EEDECu;
    // 0x3eedf0: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3EEDECu, 0x3EEDF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EEDF4u;
label_3eedf4:
    // 0x3eedf4: 0x0  nop
    ctx->pc = 0x3eedf4u;
    // NOP
label_3eedf8:
    // 0x3eedf8: 0xc0fb7b0  jal         func_3EDEC0
    ctx->pc = 0x3EEDF8u;
    SET_GPR_U32(ctx, 31, 0x3EEE00u);
    ctx->pc = 0x3EEDFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EEDF8u;
    // 0x3eedfc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EDEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EDEC0u, 0x3EEDF8u, 0x3EEE00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EEE00u;
label_3eee00:
    // 0x3eee00: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3EEE00u;
    {
        const bool branch_taken_0x3eee00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EEE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EEE00u;
        // 0x3eee04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eee00) {
            ctx->pc = 0x3EEE18u;
            goto label_3eee18;
        }
    }
    ctx->pc = 0x3EEE08u;
    // 0x3eee08: 0xc0fb7b4  jal         func_3EDED0
    ctx->pc = 0x3EEE08u;
    SET_GPR_U32(ctx, 31, 0x3EEE10u);
    ctx->pc = 0x3EDED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EDED0u, 0x3EEE08u, 0x3EEE10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EEE10u;
label_3eee10:
    // 0x3eee10: 0x10000083  b           . + 4 + (0x83 << 2)
    ctx->pc = 0x3EEE10u;
    {
        const bool branch_taken_0x3eee10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3eee10) {
            ctx->pc = 0x3EF020u;
            goto label_3ef020;
        }
    }
    ctx->pc = 0x3EEE18u;
label_3eee18:
    // 0x3eee18: 0x86032b30  lh          $v1, 0x2B30($s0)
    ctx->pc = 0x3eee18u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11056)));
    // 0x3eee1c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3EEE1Cu;
    {
        const bool branch_taken_0x3eee1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3eee1c) {
            ctx->pc = 0x3EEE30u;
            goto label_3eee30;
        }
    }
    ctx->pc = 0x3EEE24u;
    // 0x3eee24: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3eee24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3eee28: 0xa6032b30  sh          $v1, 0x2B30($s0)
    ctx->pc = 0x3eee28u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11056), (uint16_t)GPR_U32(ctx, 3));
    // 0x3eee2c: 0x0  nop
    ctx->pc = 0x3eee2cu;
    // NOP
label_3eee30:
    // 0x3eee30: 0x86032b30  lh          $v1, 0x2B30($s0)
    ctx->pc = 0x3eee30u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11056)));
    // 0x3eee34: 0x1c60007a  bgtz        $v1, . + 4 + (0x7A << 2)
    ctx->pc = 0x3EEE34u;
    {
        const bool branch_taken_0x3eee34 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x3EEE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EEE34u;
        // 0x3eee38: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eee34) {
            ctx->pc = 0x3EF020u;
            goto label_3ef020;
        }
    }
    ctx->pc = 0x3EEE3Cu;
    // 0x3eee3c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3eee3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3eee40: 0xa2040821  sb          $a0, 0x821($s0)
    ctx->pc = 0x3eee40u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 4));
    // 0x3eee44: 0x10000076  b           . + 4 + (0x76 << 2)
    ctx->pc = 0x3EEE44u;
    {
        const bool branch_taken_0x3eee44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EEE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EEE44u;
        // 0x3eee48: 0xa6032b2e  sh          $v1, 0x2B2E($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 11054), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eee44) {
            ctx->pc = 0x3EF020u;
            goto label_3ef020;
        }
    }
    ctx->pc = 0x3EEE4Cu;
    // 0x3eee4c: 0x0  nop
    ctx->pc = 0x3eee4cu;
    // NOP
label_3eee50:
    // 0x3eee50: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3eee50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3eee54: 0xa2020821  sb          $v0, 0x821($s0)
    ctx->pc = 0x3eee54u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 2));
    // 0x3eee58: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x3eee58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x3eee5c: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x3eee5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3eee60: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x3eee60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x3eee64: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x3eee64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3eee68: 0x34638889  ori         $v1, $v1, 0x8889
    ctx->pc = 0x3eee68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x3eee6c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3eee6cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3eee70: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x3eee70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x3eee74: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3eee74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3eee78: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3eee78u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x3eee7c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3eee7cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3eee80: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3eee80u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3eee84: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3EEE84u;
    {
        const bool branch_taken_0x3eee84 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3eee84) {
            ctx->pc = 0x3EEE9Cu;
            goto label_3eee9c;
        }
    }
    ctx->pc = 0x3EEE8Cu;
    // 0x3eee8c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3eee8cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3eee90: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x3eee90u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3eee94: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3EEE94u;
    {
        const bool branch_taken_0x3eee94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EEE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EEE94u;
        // 0x3eee98: 0xa6032b30  sh          $v1, 0x2B30($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 11056), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eee94) {
            ctx->pc = 0x3EEEB8u;
            goto label_3eeeb8;
        }
    }
    ctx->pc = 0x3EEE9Cu;
label_3eee9c:
    // 0x3eee9c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3eee9cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3eeea0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3eeea0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3eeea4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3eeea4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3eeea8: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x3eeea8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3eeeac: 0x0  nop
    ctx->pc = 0x3eeeacu;
    // NOP
    // 0x3eeeb0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3eeeb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3eeeb4: 0xa6032b30  sh          $v1, 0x2B30($s0)
    ctx->pc = 0x3eeeb4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11056), (uint16_t)GPR_U32(ctx, 3));
label_3eeeb8:
    // 0x3eeeb8: 0x860500c2  lh          $a1, 0xC2($s0)
    ctx->pc = 0x3eeeb8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 194)));
    // 0x3eeebc: 0xc096e34  jal         func_25B8D0
    ctx->pc = 0x3EEEBCu;
    SET_GPR_U32(ctx, 31, 0x3EEEC4u);
    ctx->pc = 0x3EEEC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EEEBCu;
    // 0x3eeec0: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B8D0u, 0x3EEEBCu, 0x3EEEC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EEEC4u;
label_3eeec4:
    // 0x3eeec4: 0x7a030020  lq          $v1, 0x20($s0)
    ctx->pc = 0x3eeec4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x3eeec8: 0x3c024516  lui         $v0, 0x4516
    ctx->pc = 0x3eeec8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17686 << 16));
    // 0x3eeecc: 0x344254f6  ori         $v0, $v0, 0x54F6
    ctx->pc = 0x3eeeccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21750);
    // 0x3eeed0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3eeed0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3eeed4: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x3eeed4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3eeed8: 0x27a70050  addiu       $a3, $sp, 0x50
    ctx->pc = 0x3eeed8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3eeedc: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x3eeedcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
    // 0x3eeee0: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x3eeee0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
    // 0x3eeee4: 0x86022b2e  lh          $v0, 0x2B2E($s0)
    ctx->pc = 0x3eeee4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11054)));
    // 0x3eeee8: 0x92042b2c  lbu         $a0, 0x2B2C($s0)
    ctx->pc = 0x3eeee8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11052)));
    // 0x3eeeec: 0xc0bc794  jal         func_2F1E50
    ctx->pc = 0x3EEEECu;
    SET_GPR_U32(ctx, 31, 0x3EEEF4u);
    ctx->pc = 0x3EEEF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EEEECu;
    // 0x3eeef0: 0x30480001  andi        $t0, $v0, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1E50u, 0x3EEEECu, 0x3EEEF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EEEF4u;
label_3eeef4:
    // 0x3eeef4: 0x0  nop
    ctx->pc = 0x3eeef4u;
    // NOP
label_3eeef8:
    // 0x3eeef8: 0xc0fb7b0  jal         func_3EDEC0
    ctx->pc = 0x3EEEF8u;
    SET_GPR_U32(ctx, 31, 0x3EEF00u);
    ctx->pc = 0x3EEEFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EEEF8u;
    // 0x3eeefc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EDEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EDEC0u, 0x3EEEF8u, 0x3EEF00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EEF00u;
label_3eef00:
    // 0x3eef00: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3EEF00u;
    {
        const bool branch_taken_0x3eef00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EEF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EEF00u;
        // 0x3eef04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eef00) {
            ctx->pc = 0x3EEF18u;
            goto label_3eef18;
        }
    }
    ctx->pc = 0x3EEF08u;
    // 0x3eef08: 0xc0fb7b4  jal         func_3EDED0
    ctx->pc = 0x3EEF08u;
    SET_GPR_U32(ctx, 31, 0x3EEF10u);
    ctx->pc = 0x3EDED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EDED0u, 0x3EEF08u, 0x3EEF10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EEF10u;
label_3eef10:
    // 0x3eef10: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x3EEF10u;
    {
        const bool branch_taken_0x3eef10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3eef10) {
            ctx->pc = 0x3EF020u;
            goto label_3ef020;
        }
    }
    ctx->pc = 0x3EEF18u;
label_3eef18:
    // 0x3eef18: 0x86032b30  lh          $v1, 0x2B30($s0)
    ctx->pc = 0x3eef18u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11056)));
    // 0x3eef1c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3EEF1Cu;
    {
        const bool branch_taken_0x3eef1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3eef1c) {
            ctx->pc = 0x3EEF30u;
            goto label_3eef30;
        }
    }
    ctx->pc = 0x3EEF24u;
    // 0x3eef24: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3eef24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3eef28: 0xa6032b30  sh          $v1, 0x2B30($s0)
    ctx->pc = 0x3eef28u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11056), (uint16_t)GPR_U32(ctx, 3));
    // 0x3eef2c: 0x0  nop
    ctx->pc = 0x3eef2cu;
    // NOP
label_3eef30:
    // 0x3eef30: 0x86032b30  lh          $v1, 0x2B30($s0)
    ctx->pc = 0x3eef30u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11056)));
    // 0x3eef34: 0x1c60003a  bgtz        $v1, . + 4 + (0x3A << 2)
    ctx->pc = 0x3EEF34u;
    {
        const bool branch_taken_0x3eef34 = (GPR_S64(ctx, 3) > 0);
        if (branch_taken_0x3eef34) {
            ctx->pc = 0x3EF020u;
            goto label_3ef020;
        }
    }
    ctx->pc = 0x3EEF3Cu;
    // 0x3eef3c: 0x86032b2e  lh          $v1, 0x2B2E($s0)
    ctx->pc = 0x3eef3cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11054)));
    // 0x3eef40: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3eef40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3eef44: 0xa6032b2e  sh          $v1, 0x2B2E($s0)
    ctx->pc = 0x3eef44u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11054), (uint16_t)GPR_U32(ctx, 3));
    // 0x3eef48: 0x86032b2e  lh          $v1, 0x2B2E($s0)
    ctx->pc = 0x3eef48u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11054)));
    // 0x3eef4c: 0x1c600004  bgtz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3EEF4Cu;
    {
        const bool branch_taken_0x3eef4c = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x3EEF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EEF4Cu;
        // 0x3eef50: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eef4c) {
            ctx->pc = 0x3EEF60u;
            goto label_3eef60;
        }
    }
    ctx->pc = 0x3EEF54u;
    // 0x3eef54: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x3EEF54u;
    {
        const bool branch_taken_0x3eef54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EEF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EEF54u;
        // 0x3eef58: 0xa2030821  sb          $v1, 0x821($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eef54) {
            ctx->pc = 0x3EF020u;
            goto label_3ef020;
        }
    }
    ctx->pc = 0x3EEF5Cu;
    // 0x3eef5c: 0x0  nop
    ctx->pc = 0x3eef5cu;
    // NOP
label_3eef60:
    // 0x3eef60: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3eef60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3eef64: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x3EEF64u;
    {
        const bool branch_taken_0x3eef64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EEF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EEF64u;
        // 0x3eef68: 0xa2030821  sb          $v1, 0x821($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eef64) {
            ctx->pc = 0x3EF020u;
            goto label_3ef020;
        }
    }
    ctx->pc = 0x3EEF6Cu;
    // 0x3eef6c: 0x0  nop
    ctx->pc = 0x3eef6cu;
    // NOP
label_3eef70:
    // 0x3eef70: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x3eef70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3eef74: 0xa2020821  sb          $v0, 0x821($s0)
    ctx->pc = 0x3eef74u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 2));
    // 0x3eef78: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x3eef78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x3eef7c: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x3eef7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3eef80: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x3eef80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x3eef84: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x3eef84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3eef88: 0x34638889  ori         $v1, $v1, 0x8889
    ctx->pc = 0x3eef88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x3eef8c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3eef8cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3eef90: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x3eef90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x3eef94: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3eef94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3eef98: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3eef98u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x3eef9c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3eef9cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3eefa0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3eefa0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3eefa4: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3EEFA4u;
    {
        const bool branch_taken_0x3eefa4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3eefa4) {
            ctx->pc = 0x3EEFBCu;
            goto label_3eefbc;
        }
    }
    ctx->pc = 0x3EEFACu;
    // 0x3eefac: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3eefacu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3eefb0: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x3eefb0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3eefb4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3EEFB4u;
    {
        const bool branch_taken_0x3eefb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EEFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EEFB4u;
        // 0x3eefb8: 0xa6032b30  sh          $v1, 0x2B30($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 11056), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eefb4) {
            ctx->pc = 0x3EEFD8u;
            goto label_3eefd8;
        }
    }
    ctx->pc = 0x3EEFBCu;
label_3eefbc:
    // 0x3eefbc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3eefbcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3eefc0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3eefc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3eefc4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3eefc4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3eefc8: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x3eefc8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3eefcc: 0x0  nop
    ctx->pc = 0x3eefccu;
    // NOP
    // 0x3eefd0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3eefd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3eefd4: 0xa6032b30  sh          $v1, 0x2B30($s0)
    ctx->pc = 0x3eefd4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11056), (uint16_t)GPR_U32(ctx, 3));
label_3eefd8:
    // 0x3eefd8: 0xc0fb7b0  jal         func_3EDEC0
    ctx->pc = 0x3EEFD8u;
    SET_GPR_U32(ctx, 31, 0x3EEFE0u);
    ctx->pc = 0x3EEFDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EEFD8u;
    // 0x3eefdc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EDEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EDEC0u, 0x3EEFD8u, 0x3EEFE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EEFE0u;
label_3eefe0:
    // 0x3eefe0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3EEFE0u;
    {
        const bool branch_taken_0x3eefe0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EEFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EEFE0u;
        // 0x3eefe4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eefe0) {
            ctx->pc = 0x3EEFF8u;
            goto label_3eeff8;
        }
    }
    ctx->pc = 0x3EEFE8u;
    // 0x3eefe8: 0xc0fb7b4  jal         func_3EDED0
    ctx->pc = 0x3EEFE8u;
    SET_GPR_U32(ctx, 31, 0x3EEFF0u);
    ctx->pc = 0x3EDED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EDED0u, 0x3EEFE8u, 0x3EEFF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EEFF0u;
label_3eeff0:
    // 0x3eeff0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3EEFF0u;
    {
        const bool branch_taken_0x3eeff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3eeff0) {
            ctx->pc = 0x3EF020u;
            goto label_3ef020;
        }
    }
    ctx->pc = 0x3EEFF8u;
label_3eeff8:
    // 0x3eeff8: 0x86032b30  lh          $v1, 0x2B30($s0)
    ctx->pc = 0x3eeff8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11056)));
    // 0x3eeffc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3EEFFCu;
    {
        const bool branch_taken_0x3eeffc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3eeffc) {
            ctx->pc = 0x3EF010u;
            goto label_3ef010;
        }
    }
    ctx->pc = 0x3EF004u;
    // 0x3ef004: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3ef004u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3ef008: 0xa6032b30  sh          $v1, 0x2B30($s0)
    ctx->pc = 0x3ef008u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11056), (uint16_t)GPR_U32(ctx, 3));
    // 0x3ef00c: 0x0  nop
    ctx->pc = 0x3ef00cu;
    // NOP
label_3ef010:
    // 0x3ef010: 0x86032b30  lh          $v1, 0x2B30($s0)
    ctx->pc = 0x3ef010u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11056)));
    // 0x3ef014: 0x1c600002  bgtz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x3EF014u;
    {
        const bool branch_taken_0x3ef014 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x3EF018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF014u;
        // 0x3ef018: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef014) {
            ctx->pc = 0x3EF020u;
            goto label_3ef020;
        }
    }
    ctx->pc = 0x3EF01Cu;
    // 0x3ef01c: 0xa2030780  sb          $v1, 0x780($s0)
    ctx->pc = 0x3ef01cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
label_3ef020:
    // 0x3ef020: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3ef020u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3ef024: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3ef024u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3ef028: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3ef028u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3ef02c: 0x3e00008  jr          $ra
    ctx->pc = 0x3EF02Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EF030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF02Cu;
        // 0x3ef030: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EF02Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3EF034u;
}
