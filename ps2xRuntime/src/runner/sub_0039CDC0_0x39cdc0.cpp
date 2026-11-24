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

// Function: sub_0039CDC0
// Address: 0x39cdc0 - 0x39d100
void sub_0039CDC0_0x39cdc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039CDC0_0x39cdc0");
#endif

    switch (ctx->pc) {
        case 0x39ce24u: goto label_39ce24;
        case 0x39ce2cu: goto label_39ce2c;
        case 0x39ce3cu: goto label_39ce3c;
        case 0x39ce48u: goto label_39ce48;
        case 0x39ce60u: goto label_39ce60;
        case 0x39ce70u: goto label_39ce70;
        case 0x39cf18u: goto label_39cf18;
        case 0x39cf3cu: goto label_39cf3c;
        case 0x39cfa4u: goto label_39cfa4;
        case 0x39cfb8u: goto label_39cfb8;
        case 0x39d00cu: goto label_39d00c;
        case 0x39d01cu: goto label_39d01c;
        case 0x39d030u: goto label_39d030;
        case 0x39d094u: goto label_39d094;
        case 0x39d0a4u: goto label_39d0a4;
        case 0x39d0b4u: goto label_39d0b4;
        default: break;
    }

    ctx->pc = 0x39cdc0u;

    // 0x39cdc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x39cdc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x39cdc4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x39cdc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x39cdc8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x39cdc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x39cdcc: 0x90830821  lbu         $v1, 0x821($a0)
    ctx->pc = 0x39cdccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2081)));
    // 0x39cdd0: 0x2c610008  sltiu       $at, $v1, 0x8
    ctx->pc = 0x39cdd0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x39cdd4: 0x102000c6  beqz        $at, . + 4 + (0xC6 << 2)
    ctx->pc = 0x39CDD4u;
    {
        const bool branch_taken_0x39cdd4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x39CDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CDD4u;
        // 0x39cdd8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39cdd4) {
            ctx->pc = 0x39D0F0u;
            goto label_39d0f0;
        }
    }
    ctx->pc = 0x39CDDCu;
    // 0x39cddc: 0x3c050068  lui         $a1, 0x68
    ctx->pc = 0x39cddcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)104 << 16));
    // 0x39cde0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x39cde0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x39cde4: 0x24a52510  addiu       $a1, $a1, 0x2510
    ctx->pc = 0x39cde4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9488));
    // 0x39cde8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x39cde8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x39cdec: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x39cdecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x39cdf0: 0x600008  jr          $v1
    ctx->pc = 0x39CDF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x39CDF8u: goto label_39cdf8;
            case 0x39CE98u: goto label_39ce98;
            case 0x39CF98u: goto label_39cf98;
            case 0x39CFA8u: goto label_39cfa8;
            case 0x39D000u: goto label_39d000;
            case 0x39D020u: goto label_39d020;
            case 0x39D088u: goto label_39d088;
            case 0x39D0A8u: goto label_39d0a8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39CDF0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x39CDF8u;
label_39cdf8:
    // 0x39cdf8: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x39cdf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x39cdfc: 0x2463ca90  addiu       $v1, $v1, -0x3570
    ctx->pc = 0x39cdfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953616));
    // 0x39ce00: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x39ce00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39ce04: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x39ce04u;
    { uint32_t bits = FAST_READ32(0x65CA90u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x39ce08: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x39ce08u;
    { uint32_t bits = FAST_READ32(0x65CA94u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x39ce0c: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x39ce0cu;
    { uint32_t bits = FAST_READ32(0x65CA98u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x39ce10: 0xe60206a0  swc1        $f2, 0x6A0($s0)
    ctx->pc = 0x39ce10u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1696), bits); }
    // 0x39ce14: 0xe60106a4  swc1        $f1, 0x6A4($s0)
    ctx->pc = 0x39ce14u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1700), bits); }
    // 0x39ce18: 0xe60006a8  swc1        $f0, 0x6A8($s0)
    ctx->pc = 0x39ce18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1704), bits); }
    // 0x39ce1c: 0xc0e7218  jal         func_39C860
    ctx->pc = 0x39CE1Cu;
    SET_GPR_U32(ctx, 31, 0x39CE24u);
    ctx->pc = 0x39CE20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39CE1Cu;
    // 0x39ce20: 0xa2020821  sb          $v0, 0x821($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39C860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39C860u, 0x39CE1Cu, 0x39CE24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39CE24u;
label_39ce24:
    // 0x39ce24: 0xc0e6f8c  jal         func_39BE30
    ctx->pc = 0x39CE24u;
    SET_GPR_U32(ctx, 31, 0x39CE2Cu);
    ctx->pc = 0x39CE28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39CE24u;
    // 0x39ce28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39BE30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39BE30u, 0x39CE24u, 0x39CE2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39CE2Cu;
label_39ce2c:
    // 0x39ce2c: 0x24450020  addiu       $a1, $v0, 0x20
    ctx->pc = 0x39ce2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x39ce30: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x39ce30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x39ce34: 0xc0766b8  jal         func_1D9AE0
    ctx->pc = 0x39CE34u;
    SET_GPR_U32(ctx, 31, 0x39CE3Cu);
    ctx->pc = 0x39CE38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39CE34u;
    // 0x39ce38: 0x26060020  addiu       $a2, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AE0u, 0x39CE34u, 0x39CE3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39CE3Cu;
label_39ce3c:
    // 0x39ce3c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x39ce3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x39ce40: 0xc096e44  jal         func_25B910
    ctx->pc = 0x39CE40u;
    SET_GPR_U32(ctx, 31, 0x39CE48u);
    ctx->pc = 0x39CE44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39CE40u;
    // 0x39ce44: 0xafa00024  sw          $zero, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B910u, 0x39CE40u, 0x39CE48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39CE48u;
label_39ce48:
    // 0x39ce48: 0xa6022bc0  sh          $v0, 0x2BC0($s0)
    ctx->pc = 0x39ce48u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11200), (uint16_t)GPR_U32(ctx, 2));
    // 0x39ce4c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x39ce4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x39ce50: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x39ce50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x39ce54: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x39ce54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x39ce58: 0xc0766c8  jal         func_1D9B20
    ctx->pc = 0x39CE58u;
    SET_GPR_U32(ctx, 31, 0x39CE60u);
    ctx->pc = 0x39CE5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39CE58u;
    // 0x39ce5c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9B20u, 0x39CE58u, 0x39CE60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39CE60u;
label_39ce60:
    // 0x39ce60: 0x26042bb0  addiu       $a0, $s0, 0x2BB0
    ctx->pc = 0x39ce60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 11184));
    // 0x39ce64: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x39ce64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x39ce68: 0xc0766a8  jal         func_1D9AA0
    ctx->pc = 0x39CE68u;
    SET_GPR_U32(ctx, 31, 0x39CE70u);
    ctx->pc = 0x39CE6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39CE68u;
    // 0x39ce6c: 0x27a60020  addiu       $a2, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AA0u, 0x39CE68u, 0x39CE70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39CE70u;
label_39ce70:
    // 0x39ce70: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x39ce70u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x39ce74: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x39ce74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x39ce78: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x39ce78u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x39ce7c: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x39ce7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x39ce80: 0xa60307f2  sh          $v1, 0x7F2($s0)
    ctx->pc = 0x39ce80u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 3));
    // 0x39ce84: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x39ce84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x39ce88: 0xa20407f5  sb          $a0, 0x7F5($s0)
    ctx->pc = 0x39ce88u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 4));
    // 0x39ce8c: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x39ce8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x39ce90: 0xae0307ec  sw          $v1, 0x7EC($s0)
    ctx->pc = 0x39ce90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 3));
    // 0x39ce94: 0x0  nop
    ctx->pc = 0x39ce94u;
    // NOP
label_39ce98:
    // 0x39ce98: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x39ce98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x39ce9c: 0x34638889  ori         $v1, $v1, 0x8889
    ctx->pc = 0x39ce9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x39cea0: 0x86052bc2  lh          $a1, 0x2BC2($s0)
    ctx->pc = 0x39cea0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11202)));
    // 0x39cea4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x39cea4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x39cea8: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x39cea8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x39ceac: 0x44841800  mtc1        $a0, $f3
    ctx->pc = 0x39ceacu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x39ceb0: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x39ceb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x39ceb4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x39ceb4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x39ceb8: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x39ceb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x39cebc: 0xa6032bc2  sh          $v1, 0x2BC2($s0)
    ctx->pc = 0x39cebcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11202), (uint16_t)GPR_U32(ctx, 3));
    // 0x39cec0: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x39cec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x39cec4: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x39cec4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x39cec8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x39cec8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x39cecc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x39ceccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x39ced0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x39CED0u;
    {
        const bool branch_taken_0x39ced0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x39CED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CED0u;
        // 0x39ced4: 0x86052bc2  lh          $a1, 0x2BC2($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11202)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ced0) {
            ctx->pc = 0x39CEE8u;
            goto label_39cee8;
        }
    }
    ctx->pc = 0x39CED8u;
    // 0x39ced8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x39ced8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x39cedc: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x39cedcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x39cee0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x39CEE0u;
    {
        const bool branch_taken_0x39cee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39CEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CEE0u;
        // 0x39cee4: 0xa4182b  sltu        $v1, $a1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x39cee0) {
            ctx->pc = 0x39CF04u;
            goto label_39cf04;
        }
    }
    ctx->pc = 0x39CEE8u;
label_39cee8:
    // 0x39cee8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x39cee8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x39ceec: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x39ceecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x39cef0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x39cef0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x39cef4: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x39cef4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x39cef8: 0x0  nop
    ctx->pc = 0x39cef8u;
    // NOP
    // 0x39cefc: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x39cefcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x39cf00: 0xa4182b  sltu        $v1, $a1, $a0
    ctx->pc = 0x39cf00u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_39cf04:
    // 0x39cf04: 0x14600016  bnez        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x39CF04u;
    {
        const bool branch_taken_0x39cf04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x39cf04) {
            ctx->pc = 0x39CF60u;
            goto label_39cf60;
        }
    }
    ctx->pc = 0x39CF0Cu;
    // 0x39cf0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39cf0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39cf10: 0xc0e6f8c  jal         func_39BE30
    ctx->pc = 0x39CF10u;
    SET_GPR_U32(ctx, 31, 0x39CF18u);
    ctx->pc = 0x39CF14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39CF10u;
    // 0x39cf14: 0xa6002bc2  sh          $zero, 0x2BC2($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 11202), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39BE30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39BE30u, 0x39CF10u, 0x39CF18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39CF18u;
label_39cf18:
    // 0x39cf18: 0x860a2bc4  lh          $t2, 0x2BC4($s0)
    ctx->pc = 0x39cf18u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11204)));
    // 0x39cf1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39cf1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39cf20: 0x86072bc0  lh          $a3, 0x2BC0($s0)
    ctx->pc = 0x39cf20u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11200)));
    // 0x39cf24: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x39cf24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39cf28: 0x8c480004  lw          $t0, 0x4($v0)
    ctx->pc = 0x39cf28u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x39cf2c: 0x26062bb0  addiu       $a2, $s0, 0x2BB0
    ctx->pc = 0x39cf2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 11184));
    // 0x39cf30: 0x24090003  addiu       $t1, $zero, 0x3
    ctx->pc = 0x39cf30u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x39cf34: 0xc0e7148  jal         func_39C520
    ctx->pc = 0x39CF34u;
    SET_GPR_U32(ctx, 31, 0x39CF3Cu);
    ctx->pc = 0x39CF38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39CF34u;
    // 0x39cf38: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39C520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39C520u, 0x39CF34u, 0x39CF3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39CF3Cu;
label_39cf3c:
    // 0x39cf3c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x39CF3Cu;
    {
        const bool branch_taken_0x39cf3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39CF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CF3Cu;
        // 0x39cf40: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39cf3c) {
            ctx->pc = 0x39CF50u;
            goto label_39cf50;
        }
    }
    ctx->pc = 0x39CF44u;
    // 0x39cf44: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x39CF44u;
    {
        const bool branch_taken_0x39cf44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39CF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CF44u;
        // 0x39cf48: 0xa2030821  sb          $v1, 0x821($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39cf44) {
            ctx->pc = 0x39CF60u;
            goto label_39cf60;
        }
    }
    ctx->pc = 0x39CF4Cu;
    // 0x39cf4c: 0x0  nop
    ctx->pc = 0x39cf4cu;
    // NOP
label_39cf50:
    // 0x39cf50: 0x86032bc4  lh          $v1, 0x2BC4($s0)
    ctx->pc = 0x39cf50u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11204)));
    // 0x39cf54: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x39cf54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x39cf58: 0xa6032bc4  sh          $v1, 0x2BC4($s0)
    ctx->pc = 0x39cf58u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11204), (uint16_t)GPR_U32(ctx, 3));
    // 0x39cf5c: 0x0  nop
    ctx->pc = 0x39cf5cu;
    // NOP
label_39cf60:
    // 0x39cf60: 0x920307f6  lbu         $v1, 0x7F6($s0)
    ctx->pc = 0x39cf60u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2038)));
    // 0x39cf64: 0x10600062  beqz        $v1, . + 4 + (0x62 << 2)
    ctx->pc = 0x39CF64u;
    {
        const bool branch_taken_0x39cf64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x39cf64) {
            ctx->pc = 0x39D0F0u;
            goto label_39d0f0;
        }
    }
    ctx->pc = 0x39CF6Cu;
    // 0x39cf6c: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x39cf6cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x39cf70: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x39cf70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x39cf74: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x39cf74u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x39cf78: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x39cf78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x39cf7c: 0xa60307f2  sh          $v1, 0x7F2($s0)
    ctx->pc = 0x39cf7cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 3));
    // 0x39cf80: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x39cf80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x39cf84: 0xa20407f5  sb          $a0, 0x7F5($s0)
    ctx->pc = 0x39cf84u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 4));
    // 0x39cf88: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x39cf88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x39cf8c: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x39CF8Cu;
    {
        const bool branch_taken_0x39cf8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39CF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CF8Cu;
        // 0x39cf90: 0xae0307ec  sw          $v1, 0x7EC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39cf8c) {
            ctx->pc = 0x39D0F0u;
            goto label_39d0f0;
        }
    }
    ctx->pc = 0x39CF94u;
    // 0x39cf94: 0x0  nop
    ctx->pc = 0x39cf94u;
    // NOP
label_39cf98:
    // 0x39cf98: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x39cf98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x39cf9c: 0xc0e7218  jal         func_39C860
    ctx->pc = 0x39CF9Cu;
    SET_GPR_U32(ctx, 31, 0x39CFA4u);
    ctx->pc = 0x39CFA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39CF9Cu;
    // 0x39cfa0: 0xa2020821  sb          $v0, 0x821($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39C860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39C860u, 0x39CF9Cu, 0x39CFA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39CFA4u;
label_39cfa4:
    // 0x39cfa4: 0x0  nop
    ctx->pc = 0x39cfa4u;
    // NOP
label_39cfa8:
    // 0x39cfa8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39cfa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39cfac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x39cfacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39cfb0: 0xc0e7220  jal         func_39C880
    ctx->pc = 0x39CFB0u;
    SET_GPR_U32(ctx, 31, 0x39CFB8u);
    ctx->pc = 0x39CFB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39CFB0u;
    // 0x39cfb4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39C880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39C880u, 0x39CFB0u, 0x39CFB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39CFB8u;
label_39cfb8:
    // 0x39cfb8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x39CFB8u;
    {
        const bool branch_taken_0x39cfb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39CFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CFB8u;
        // 0x39cfbc: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39cfb8) {
            ctx->pc = 0x39CFC8u;
            goto label_39cfc8;
        }
    }
    ctx->pc = 0x39CFC0u;
    // 0x39cfc0: 0xa2030821  sb          $v1, 0x821($s0)
    ctx->pc = 0x39cfc0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
    // 0x39cfc4: 0x0  nop
    ctx->pc = 0x39cfc4u;
    // NOP
label_39cfc8:
    // 0x39cfc8: 0x920307f6  lbu         $v1, 0x7F6($s0)
    ctx->pc = 0x39cfc8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2038)));
    // 0x39cfcc: 0x10600048  beqz        $v1, . + 4 + (0x48 << 2)
    ctx->pc = 0x39CFCCu;
    {
        const bool branch_taken_0x39cfcc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x39cfcc) {
            ctx->pc = 0x39D0F0u;
            goto label_39d0f0;
        }
    }
    ctx->pc = 0x39CFD4u;
    // 0x39cfd4: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x39cfd4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x39cfd8: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x39cfd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x39cfdc: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x39cfdcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x39cfe0: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x39cfe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x39cfe4: 0xa60307f2  sh          $v1, 0x7F2($s0)
    ctx->pc = 0x39cfe4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 3));
    // 0x39cfe8: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x39cfe8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x39cfec: 0xa20407f5  sb          $a0, 0x7F5($s0)
    ctx->pc = 0x39cfecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 4));
    // 0x39cff0: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x39cff0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x39cff4: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x39CFF4u;
    {
        const bool branch_taken_0x39cff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39CFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CFF4u;
        // 0x39cff8: 0xae0307ec  sw          $v1, 0x7EC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39cff4) {
            ctx->pc = 0x39D0F0u;
            goto label_39d0f0;
        }
    }
    ctx->pc = 0x39CFFCu;
    // 0x39cffc: 0x0  nop
    ctx->pc = 0x39cffcu;
    // NOP
label_39d000:
    // 0x39d000: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x39d000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x39d004: 0xc0e7218  jal         func_39C860
    ctx->pc = 0x39D004u;
    SET_GPR_U32(ctx, 31, 0x39D00Cu);
    ctx->pc = 0x39D008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39D004u;
    // 0x39d008: 0xa2020821  sb          $v0, 0x821($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39C860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39C860u, 0x39D004u, 0x39D00Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39D00Cu;
label_39d00c:
    // 0x39d00c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39d00cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39d010: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x39d010u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39d014: 0xc0e71f8  jal         func_39C7E0
    ctx->pc = 0x39D014u;
    SET_GPR_U32(ctx, 31, 0x39D01Cu);
    ctx->pc = 0x39D018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39D014u;
    // 0x39d018: 0x24060041  addiu       $a2, $zero, 0x41 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39C7E0u, 0x39D014u, 0x39D01Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39D01Cu;
label_39d01c:
    // 0x39d01c: 0x0  nop
    ctx->pc = 0x39d01cu;
    // NOP
label_39d020:
    // 0x39d020: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39d020u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39d024: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x39d024u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39d028: 0xc0e7220  jal         func_39C880
    ctx->pc = 0x39D028u;
    SET_GPR_U32(ctx, 31, 0x39D030u);
    ctx->pc = 0x39D02Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39D028u;
    // 0x39d02c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39C880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39C880u, 0x39D028u, 0x39D030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39D030u;
label_39d030:
    // 0x39d030: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x39D030u;
    {
        const bool branch_taken_0x39d030 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39d030) {
            ctx->pc = 0x39D050u;
            goto label_39d050;
        }
    }
    ctx->pc = 0x39D038u;
    // 0x39d038: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x39d038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x39d03c: 0x946300c4  lhu         $v1, 0xC4($v1)
    ctx->pc = 0x39d03cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 196)));
    // 0x39d040: 0x2863004b  slti        $v1, $v1, 0x4B
    ctx->pc = 0x39d040u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)75) ? 1 : 0);
    // 0x39d044: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x39D044u;
    {
        const bool branch_taken_0x39d044 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x39D048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D044u;
        // 0x39d048: 0x24030006  addiu       $v1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d044) {
            ctx->pc = 0x39D050u;
            goto label_39d050;
        }
    }
    ctx->pc = 0x39D04Cu;
    // 0x39d04c: 0xa2030821  sb          $v1, 0x821($s0)
    ctx->pc = 0x39d04cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
label_39d050:
    // 0x39d050: 0x920307f6  lbu         $v1, 0x7F6($s0)
    ctx->pc = 0x39d050u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2038)));
    // 0x39d054: 0x10600026  beqz        $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x39D054u;
    {
        const bool branch_taken_0x39d054 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x39d054) {
            ctx->pc = 0x39D0F0u;
            goto label_39d0f0;
        }
    }
    ctx->pc = 0x39D05Cu;
    // 0x39d05c: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x39d05cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x39d060: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x39d060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x39d064: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x39d064u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x39d068: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x39d068u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x39d06c: 0xa60307f2  sh          $v1, 0x7F2($s0)
    ctx->pc = 0x39d06cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 3));
    // 0x39d070: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x39d070u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x39d074: 0xa20407f5  sb          $a0, 0x7F5($s0)
    ctx->pc = 0x39d074u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 4));
    // 0x39d078: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x39d078u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x39d07c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x39D07Cu;
    {
        const bool branch_taken_0x39d07c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39D080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D07Cu;
        // 0x39d080: 0xae0307ec  sw          $v1, 0x7EC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d07c) {
            ctx->pc = 0x39D0F0u;
            goto label_39d0f0;
        }
    }
    ctx->pc = 0x39D084u;
    // 0x39d084: 0x0  nop
    ctx->pc = 0x39d084u;
    // NOP
label_39d088:
    // 0x39d088: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x39d088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x39d08c: 0xc0e7218  jal         func_39C860
    ctx->pc = 0x39D08Cu;
    SET_GPR_U32(ctx, 31, 0x39D094u);
    ctx->pc = 0x39D090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39D08Cu;
    // 0x39d090: 0xa2020821  sb          $v0, 0x821($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39C860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39C860u, 0x39D08Cu, 0x39D094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39D094u;
label_39d094:
    // 0x39d094: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39d094u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39d098: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x39d098u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39d09c: 0xc0e71f8  jal         func_39C7E0
    ctx->pc = 0x39D09Cu;
    SET_GPR_U32(ctx, 31, 0x39D0A4u);
    ctx->pc = 0x39D0A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39D09Cu;
    // 0x39d0a0: 0x24060045  addiu       $a2, $zero, 0x45 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39C7E0u, 0x39D09Cu, 0x39D0A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39D0A4u;
label_39d0a4:
    // 0x39d0a4: 0x0  nop
    ctx->pc = 0x39d0a4u;
    // NOP
label_39d0a8:
    // 0x39d0a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39d0a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39d0ac: 0xc0e7248  jal         func_39C920
    ctx->pc = 0x39D0ACu;
    SET_GPR_U32(ctx, 31, 0x39D0B4u);
    ctx->pc = 0x39D0B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39D0ACu;
    // 0x39d0b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39C920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39C920u, 0x39D0ACu, 0x39D0B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39D0B4u;
label_39d0b4:
    // 0x39d0b4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x39D0B4u;
    {
        const bool branch_taken_0x39d0b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39D0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D0B4u;
        // 0x39d0b8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d0b4) {
            ctx->pc = 0x39D0C0u;
            goto label_39d0c0;
        }
    }
    ctx->pc = 0x39D0BCu;
    // 0x39d0bc: 0xa2030780  sb          $v1, 0x780($s0)
    ctx->pc = 0x39d0bcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
label_39d0c0:
    // 0x39d0c0: 0x920307f6  lbu         $v1, 0x7F6($s0)
    ctx->pc = 0x39d0c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2038)));
    // 0x39d0c4: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x39D0C4u;
    {
        const bool branch_taken_0x39d0c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x39d0c4) {
            ctx->pc = 0x39D0F0u;
            goto label_39d0f0;
        }
    }
    ctx->pc = 0x39D0CCu;
    // 0x39d0cc: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x39d0ccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x39d0d0: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x39d0d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x39d0d4: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x39d0d4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x39d0d8: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x39d0d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x39d0dc: 0xa60307f2  sh          $v1, 0x7F2($s0)
    ctx->pc = 0x39d0dcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 3));
    // 0x39d0e0: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x39d0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x39d0e4: 0xa20407f5  sb          $a0, 0x7F5($s0)
    ctx->pc = 0x39d0e4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 4));
    // 0x39d0e8: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x39d0e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x39d0ec: 0xae0307ec  sw          $v1, 0x7EC($s0)
    ctx->pc = 0x39d0ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 3));
label_39d0f0:
    // 0x39d0f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x39d0f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39d0f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x39d0f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39d0f8: 0x3e00008  jr          $ra
    ctx->pc = 0x39D0F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39D0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D0F8u;
        // 0x39d0fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39D0F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39D100u;
}
